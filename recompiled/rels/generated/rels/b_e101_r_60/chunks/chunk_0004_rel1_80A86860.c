// DolRecomp output
#include "../generated.h"

void func_80A86860(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80A86860[878] = {
        &&label_80A86860,
        &&label_80A86864,
        &&label_80A86868,
        &&label_80A8686C,
        &&label_80A86870,
        &&label_80A86874,
        &&label_80A86878,
        &&label_80A8687C,
        &&label_80A86880,
        &&label_80A86884,
        &&label_80A86888,
        &&label_80A8688C,
        &&label_80A86890,
        &&label_80A86894,
        &&label_80A86898,
        &&label_80A8689C,
        &&label_80A868A0,
        &&label_80A868A4,
        &&label_80A868A8,
        &&label_80A868AC,
        &&label_80A868B0,
        &&label_80A868B4,
        &&label_80A868B8,
        &&label_80A868BC,
        &&label_80A868C0,
        &&label_80A868C4,
        &&label_80A868C8,
        &&label_80A868CC,
        &&label_80A868D0,
        &&label_80A868D4,
        &&label_80A868D8,
        &&label_80A868DC,
        &&label_80A868E0,
        &&label_80A868E4,
        &&label_80A868E8,
        &&label_80A868EC,
        &&label_80A868F0,
        &&label_80A868F4,
        &&label_80A868F8,
        &&label_80A868FC,
        &&label_80A86900,
        &&label_80A86904,
        &&label_80A86908,
        &&label_80A8690C,
        &&label_80A86910,
        &&label_80A86914,
        &&label_80A86918,
        &&label_80A8691C,
        &&label_80A86920,
        &&label_80A86924,
        &&label_80A86928,
        &&label_80A8692C,
        &&label_80A86930,
        &&label_80A86934,
        &&label_80A86938,
        &&label_80A8693C,
        &&label_80A86940,
        &&label_80A86944,
        &&label_80A86948,
        &&label_80A8694C,
        &&label_80A86950,
        &&label_80A86954,
        &&label_80A86958,
        &&label_80A8695C,
        &&label_80A86960,
        &&label_80A86964,
        &&label_80A86968,
        &&label_80A8696C,
        &&label_80A86970,
        &&label_80A86974,
        &&label_80A86978,
        &&label_80A8697C,
        &&label_80A86980,
        &&label_80A86984,
        &&label_80A86988,
        &&label_80A8698C,
        &&label_80A86990,
        &&label_80A86994,
        &&label_80A86998,
        &&label_80A8699C,
        &&label_80A869A0,
        &&label_80A869A4,
        &&label_80A869A8,
        &&label_80A869AC,
        &&label_80A869B0,
        &&label_80A869B4,
        &&label_80A869B8,
        &&label_80A869BC,
        &&label_80A869C0,
        &&label_80A869C4,
        &&label_80A869C8,
        &&label_80A869CC,
        &&label_80A869D0,
        &&label_80A869D4,
        &&label_80A869D8,
        &&label_80A869DC,
        &&label_80A869E0,
        &&label_80A869E4,
        &&label_80A869E8,
        &&label_80A869EC,
        &&label_80A869F0,
        &&label_80A869F4,
        &&label_80A869F8,
        &&label_80A869FC,
        &&label_80A86A00,
        &&label_80A86A04,
        &&label_80A86A08,
        &&label_80A86A0C,
        &&label_80A86A10,
        &&label_80A86A14,
        &&label_80A86A18,
        &&label_80A86A1C,
        &&label_80A86A20,
        &&label_80A86A24,
        &&label_80A86A28,
        &&label_80A86A2C,
        &&label_80A86A30,
        &&label_80A86A34,
        &&label_80A86A38,
        &&label_80A86A3C,
        &&label_80A86A40,
        &&label_80A86A44,
        &&label_80A86A48,
        &&label_80A86A4C,
        &&label_80A86A50,
        &&label_80A86A54,
        &&label_80A86A58,
        &&label_80A86A5C,
        &&label_80A86A60,
        &&label_80A86A64,
        &&label_80A86A68,
        &&label_80A86A6C,
        &&label_80A86A70,
        &&label_80A86A74,
        &&label_80A86A78,
        &&label_80A86A7C,
        &&label_80A86A80,
        &&label_80A86A84,
        &&label_80A86A88,
        &&label_80A86A8C,
        &&label_80A86A90,
        &&label_80A86A94,
        &&label_80A86A98,
        &&label_80A86A9C,
        &&label_80A86AA0,
        &&label_80A86AA4,
        &&label_80A86AA8,
        &&label_80A86AAC,
        &&label_80A86AB0,
        &&label_80A86AB4,
        &&label_80A86AB8,
        &&label_80A86ABC,
        &&label_80A86AC0,
        &&label_80A86AC4,
        &&label_80A86AC8,
        &&label_80A86ACC,
        &&label_80A86AD0,
        &&label_80A86AD4,
        &&label_80A86AD8,
        &&label_80A86ADC,
        &&label_80A86AE0,
        &&label_80A86AE4,
        &&label_80A86AE8,
        &&label_80A86AEC,
        &&label_80A86AF0,
        &&label_80A86AF4,
        &&label_80A86AF8,
        &&label_80A86AFC,
        &&label_80A86B00,
        &&label_80A86B04,
        &&label_80A86B08,
        &&label_80A86B0C,
        &&label_80A86B10,
        &&label_80A86B14,
        &&label_80A86B18,
        &&label_80A86B1C,
        &&label_80A86B20,
        &&label_80A86B24,
        &&label_80A86B28,
        &&label_80A86B2C,
        &&label_80A86B30,
        &&label_80A86B34,
        &&label_80A86B38,
        &&label_80A86B3C,
        &&label_80A86B40,
        &&label_80A86B44,
        &&label_80A86B48,
        &&label_80A86B4C,
        &&label_80A86B50,
        &&label_80A86B54,
        &&label_80A86B58,
        &&label_80A86B5C,
        &&label_80A86B60,
        &&label_80A86B64,
        &&label_80A86B68,
        &&label_80A86B6C,
        &&label_80A86B70,
        &&label_80A86B74,
        &&label_80A86B78,
        &&label_80A86B7C,
        &&label_80A86B80,
        &&label_80A86B84,
        &&label_80A86B88,
        &&label_80A86B8C,
        &&label_80A86B90,
        &&label_80A86B94,
        &&label_80A86B98,
        &&label_80A86B9C,
        &&label_80A86BA0,
        &&label_80A86BA4,
        &&label_80A86BA8,
        &&label_80A86BAC,
        &&label_80A86BB0,
        &&label_80A86BB4,
        &&label_80A86BB8,
        &&label_80A86BBC,
        &&label_80A86BC0,
        &&label_80A86BC4,
        &&label_80A86BC8,
        &&label_80A86BCC,
        &&label_80A86BD0,
        &&label_80A86BD4,
        &&label_80A86BD8,
        &&label_80A86BDC,
        &&label_80A86BE0,
        &&label_80A86BE4,
        &&label_80A86BE8,
        &&label_80A86BEC,
        &&label_80A86BF0,
        &&label_80A86BF4,
        &&label_80A86BF8,
        &&label_80A86BFC,
        &&label_80A86C00,
        &&label_80A86C04,
        &&label_80A86C08,
        &&label_80A86C0C,
        &&label_80A86C10,
        &&label_80A86C14,
        &&label_80A86C18,
        &&label_80A86C1C,
        &&label_80A86C20,
        &&label_80A86C24,
        &&label_80A86C28,
        &&label_80A86C2C,
        &&label_80A86C30,
        &&label_80A86C34,
        &&label_80A86C38,
        &&label_80A86C3C,
        &&label_80A86C40,
        &&label_80A86C44,
        &&label_80A86C48,
        &&label_80A86C4C,
        &&label_80A86C50,
        &&label_80A86C54,
        &&label_80A86C58,
        &&label_80A86C5C,
        &&label_80A86C60,
        &&label_80A86C64,
        &&label_80A86C68,
        &&label_80A86C6C,
        &&label_80A86C70,
        &&label_80A86C74,
        &&label_80A86C78,
        &&label_80A86C7C,
        &&label_80A86C80,
        &&label_80A86C84,
        &&label_80A86C88,
        &&label_80A86C8C,
        &&label_80A86C90,
        &&label_80A86C94,
        &&label_80A86C98,
        &&label_80A86C9C,
        &&label_80A86CA0,
        &&label_80A86CA4,
        &&label_80A86CA8,
        &&label_80A86CAC,
        &&label_80A86CB0,
        &&label_80A86CB4,
        &&label_80A86CB8,
        &&label_80A86CBC,
        &&label_80A86CC0,
        &&label_80A86CC4,
        &&label_80A86CC8,
        &&label_80A86CCC,
        &&label_80A86CD0,
        &&label_80A86CD4,
        &&label_80A86CD8,
        &&label_80A86CDC,
        &&label_80A86CE0,
        &&label_80A86CE4,
        &&label_80A86CE8,
        &&label_80A86CEC,
        &&label_80A86CF0,
        &&label_80A86CF4,
        &&label_80A86CF8,
        &&label_80A86CFC,
        &&label_80A86D00,
        &&label_80A86D04,
        &&label_80A86D08,
        &&label_80A86D0C,
        &&label_80A86D10,
        &&label_80A86D14,
        &&label_80A86D18,
        &&label_80A86D1C,
        &&label_80A86D20,
        &&label_80A86D24,
        &&label_80A86D28,
        &&label_80A86D2C,
        &&label_80A86D30,
        &&label_80A86D34,
        &&label_80A86D38,
        &&label_80A86D3C,
        &&label_80A86D40,
        &&label_80A86D44,
        &&label_80A86D48,
        &&label_80A86D4C,
        &&label_80A86D50,
        &&label_80A86D54,
        &&label_80A86D58,
        &&label_80A86D5C,
        &&label_80A86D60,
        &&label_80A86D64,
        &&label_80A86D68,
        &&label_80A86D6C,
        &&label_80A86D70,
        &&label_80A86D74,
        &&label_80A86D78,
        &&label_80A86D7C,
        &&label_80A86D80,
        &&label_80A86D84,
        &&label_80A86D88,
        &&label_80A86D8C,
        &&label_80A86D90,
        &&label_80A86D94,
        &&label_80A86D98,
        &&label_80A86D9C,
        &&label_80A86DA0,
        &&label_80A86DA4,
        &&label_80A86DA8,
        &&label_80A86DAC,
        &&label_80A86DB0,
        &&label_80A86DB4,
        &&label_80A86DB8,
        &&label_80A86DBC,
        &&label_80A86DC0,
        &&label_80A86DC4,
        &&label_80A86DC8,
        &&label_80A86DCC,
        &&label_80A86DD0,
        &&label_80A86DD4,
        &&label_80A86DD8,
        &&label_80A86DDC,
        &&label_80A86DE0,
        &&label_80A86DE4,
        &&label_80A86DE8,
        &&label_80A86DEC,
        &&label_80A86DF0,
        &&label_80A86DF4,
        &&label_80A86DF8,
        &&label_80A86DFC,
        &&label_80A86E00,
        &&label_80A86E04,
        &&label_80A86E08,
        &&label_80A86E0C,
        &&label_80A86E10,
        &&label_80A86E14,
        &&label_80A86E18,
        &&label_80A86E1C,
        &&label_80A86E20,
        &&label_80A86E24,
        &&label_80A86E28,
        &&label_80A86E2C,
        &&label_80A86E30,
        &&label_80A86E34,
        &&label_80A86E38,
        &&label_80A86E3C,
        &&label_80A86E40,
        &&label_80A86E44,
        &&label_80A86E48,
        &&label_80A86E4C,
        &&label_80A86E50,
        &&label_80A86E54,
        &&label_80A86E58,
        &&label_80A86E5C,
        &&label_80A86E60,
        &&label_80A86E64,
        &&label_80A86E68,
        &&label_80A86E6C,
        &&label_80A86E70,
        &&label_80A86E74,
        &&label_80A86E78,
        &&label_80A86E7C,
        &&label_80A86E80,
        &&label_80A86E84,
        &&label_80A86E88,
        &&label_80A86E8C,
        &&label_80A86E90,
        &&label_80A86E94,
        &&label_80A86E98,
        &&label_80A86E9C,
        &&label_80A86EA0,
        &&label_80A86EA4,
        &&label_80A86EA8,
        &&label_80A86EAC,
        &&label_80A86EB0,
        &&label_80A86EB4,
        &&label_80A86EB8,
        &&label_80A86EBC,
        &&label_80A86EC0,
        &&label_80A86EC4,
        &&label_80A86EC8,
        &&label_80A86ECC,
        &&label_80A86ED0,
        &&label_80A86ED4,
        &&label_80A86ED8,
        &&label_80A86EDC,
        &&label_80A86EE0,
        &&label_80A86EE4,
        &&label_80A86EE8,
        &&label_80A86EEC,
        &&label_80A86EF0,
        &&label_80A86EF4,
        &&label_80A86EF8,
        &&label_80A86EFC,
        &&label_80A86F00,
        &&label_80A86F04,
        &&label_80A86F08,
        &&label_80A86F0C,
        &&label_80A86F10,
        &&label_80A86F14,
        &&label_80A86F18,
        &&label_80A86F1C,
        &&label_80A86F20,
        &&label_80A86F24,
        &&label_80A86F28,
        &&label_80A86F2C,
        &&label_80A86F30,
        &&label_80A86F34,
        &&label_80A86F38,
        &&label_80A86F3C,
        &&label_80A86F40,
        &&label_80A86F44,
        &&label_80A86F48,
        &&label_80A86F4C,
        &&label_80A86F50,
        &&label_80A86F54,
        &&label_80A86F58,
        &&label_80A86F5C,
        &&label_80A86F60,
        &&label_80A86F64,
        &&label_80A86F68,
        &&label_80A86F6C,
        &&label_80A86F70,
        &&label_80A86F74,
        &&label_80A86F78,
        &&label_80A86F7C,
        &&label_80A86F80,
        &&label_80A86F84,
        &&label_80A86F88,
        &&label_80A86F8C,
        &&label_80A86F90,
        &&label_80A86F94,
        &&label_80A86F98,
        &&label_80A86F9C,
        &&label_80A86FA0,
        &&label_80A86FA4,
        &&label_80A86FA8,
        &&label_80A86FAC,
        &&label_80A86FB0,
        &&label_80A86FB4,
        &&label_80A86FB8,
        &&label_80A86FBC,
        &&label_80A86FC0,
        &&label_80A86FC4,
        &&label_80A86FC8,
        &&label_80A86FCC,
        &&label_80A86FD0,
        &&label_80A86FD4,
        &&label_80A86FD8,
        &&label_80A86FDC,
        &&label_80A86FE0,
        &&label_80A86FE4,
        &&label_80A86FE8,
        &&label_80A86FEC,
        &&label_80A86FF0,
        &&label_80A86FF4,
        &&label_80A86FF8,
        &&label_80A86FFC,
        &&label_80A87000,
        &&label_80A87004,
        &&label_80A87008,
        &&label_80A8700C,
        &&label_80A87010,
        &&label_80A87014,
        &&label_80A87018,
        &&label_80A8701C,
        &&label_80A87020,
        &&label_80A87024,
        &&label_80A87028,
        &&label_80A8702C,
        &&label_80A87030,
        &&label_80A87034,
        &&label_80A87038,
        &&label_80A8703C,
        &&label_80A87040,
        &&label_80A87044,
        &&label_80A87048,
        &&label_80A8704C,
        &&label_80A87050,
        &&label_80A87054,
        &&label_80A87058,
        &&label_80A8705C,
        &&label_80A87060,
        &&label_80A87064,
        &&label_80A87068,
        &&label_80A8706C,
        &&label_80A87070,
        &&label_80A87074,
        &&label_80A87078,
        &&label_80A8707C,
        &&label_80A87080,
        &&label_80A87084,
        &&label_80A87088,
        &&label_80A8708C,
        &&label_80A87090,
        &&label_80A87094,
        &&label_80A87098,
        &&label_80A8709C,
        &&label_80A870A0,
        &&label_80A870A4,
        &&label_80A870A8,
        &&label_80A870AC,
        &&label_80A870B0,
        &&label_80A870B4,
        &&label_80A870B8,
        &&label_80A870BC,
        &&label_80A870C0,
        &&label_80A870C4,
        &&label_80A870C8,
        &&label_80A870CC,
        &&label_80A870D0,
        &&label_80A870D4,
        &&label_80A870D8,
        &&label_80A870DC,
        &&label_80A870E0,
        &&label_80A870E4,
        &&label_80A870E8,
        &&label_80A870EC,
        &&label_80A870F0,
        &&label_80A870F4,
        &&label_80A870F8,
        &&label_80A870FC,
        &&label_80A87100,
        &&label_80A87104,
        &&label_80A87108,
        &&label_80A8710C,
        &&label_80A87110,
        &&label_80A87114,
        &&label_80A87118,
        &&label_80A8711C,
        &&label_80A87120,
        &&label_80A87124,
        &&label_80A87128,
        &&label_80A8712C,
        &&label_80A87130,
        &&label_80A87134,
        &&label_80A87138,
        &&label_80A8713C,
        &&label_80A87140,
        &&label_80A87144,
        &&label_80A87148,
        &&label_80A8714C,
        &&label_80A87150,
        &&label_80A87154,
        &&label_80A87158,
        &&label_80A8715C,
        &&label_80A87160,
        &&label_80A87164,
        &&label_80A87168,
        &&label_80A8716C,
        &&label_80A87170,
        &&label_80A87174,
        &&label_80A87178,
        &&label_80A8717C,
        &&label_80A87180,
        &&label_80A87184,
        &&label_80A87188,
        &&label_80A8718C,
        &&label_80A87190,
        &&label_80A87194,
        &&label_80A87198,
        &&label_80A8719C,
        &&label_80A871A0,
        &&label_80A871A4,
        &&label_80A871A8,
        &&label_80A871AC,
        &&label_80A871B0,
        &&label_80A871B4,
        &&label_80A871B8,
        &&label_80A871BC,
        &&label_80A871C0,
        &&label_80A871C4,
        &&label_80A871C8,
        &&label_80A871CC,
        &&label_80A871D0,
        &&label_80A871D4,
        &&label_80A871D8,
        &&label_80A871DC,
        &&label_80A871E0,
        &&label_80A871E4,
        &&label_80A871E8,
        &&label_80A871EC,
        &&label_80A871F0,
        &&label_80A871F4,
        &&label_80A871F8,
        &&label_80A871FC,
        &&label_80A87200,
        &&label_80A87204,
        &&label_80A87208,
        &&label_80A8720C,
        &&label_80A87210,
        &&label_80A87214,
        &&label_80A87218,
        &&label_80A8721C,
        &&label_80A87220,
        &&label_80A87224,
        &&label_80A87228,
        &&label_80A8722C,
        &&label_80A87230,
        &&label_80A87234,
        &&label_80A87238,
        &&label_80A8723C,
        &&label_80A87240,
        &&label_80A87244,
        &&label_80A87248,
        &&label_80A8724C,
        &&label_80A87250,
        &&label_80A87254,
        &&label_80A87258,
        &&label_80A8725C,
        &&label_80A87260,
        &&label_80A87264,
        &&label_80A87268,
        &&label_80A8726C,
        &&label_80A87270,
        &&label_80A87274,
        &&label_80A87278,
        &&label_80A8727C,
        &&label_80A87280,
        &&label_80A87284,
        &&label_80A87288,
        &&label_80A8728C,
        &&label_80A87290,
        &&label_80A87294,
        &&label_80A87298,
        &&label_80A8729C,
        &&label_80A872A0,
        &&label_80A872A4,
        &&label_80A872A8,
        &&label_80A872AC,
        &&label_80A872B0,
        &&label_80A872B4,
        &&label_80A872B8,
        &&label_80A872BC,
        &&label_80A872C0,
        &&label_80A872C4,
        &&label_80A872C8,
        &&label_80A872CC,
        &&label_80A872D0,
        &&label_80A872D4,
        &&label_80A872D8,
        &&label_80A872DC,
        &&label_80A872E0,
        &&label_80A872E4,
        &&label_80A872E8,
        &&label_80A872EC,
        &&label_80A872F0,
        &&label_80A872F4,
        &&label_80A872F8,
        &&label_80A872FC,
        &&label_80A87300,
        &&label_80A87304,
        &&label_80A87308,
        &&label_80A8730C,
        &&label_80A87310,
        &&label_80A87314,
        &&label_80A87318,
        &&label_80A8731C,
        &&label_80A87320,
        &&label_80A87324,
        &&label_80A87328,
        &&label_80A8732C,
        &&label_80A87330,
        &&label_80A87334,
        &&label_80A87338,
        &&label_80A8733C,
        &&label_80A87340,
        &&label_80A87344,
        &&label_80A87348,
        &&label_80A8734C,
        &&label_80A87350,
        &&label_80A87354,
        &&label_80A87358,
        &&label_80A8735C,
        &&label_80A87360,
        &&label_80A87364,
        &&label_80A87368,
        &&label_80A8736C,
        &&label_80A87370,
        &&label_80A87374,
        &&label_80A87378,
        &&label_80A8737C,
        &&label_80A87380,
        &&label_80A87384,
        &&label_80A87388,
        &&label_80A8738C,
        &&label_80A87390,
        &&label_80A87394,
        &&label_80A87398,
        &&label_80A8739C,
        &&label_80A873A0,
        &&label_80A873A4,
        &&label_80A873A8,
        &&label_80A873AC,
        &&label_80A873B0,
        &&label_80A873B4,
        &&label_80A873B8,
        &&label_80A873BC,
        &&label_80A873C0,
        &&label_80A873C4,
        &&label_80A873C8,
        &&label_80A873CC,
        &&label_80A873D0,
        &&label_80A873D4,
        &&label_80A873D8,
        &&label_80A873DC,
        &&label_80A873E0,
        &&label_80A873E4,
        &&label_80A873E8,
        &&label_80A873EC,
        &&label_80A873F0,
        &&label_80A873F4,
        &&label_80A873F8,
        &&label_80A873FC,
        &&label_80A87400,
        &&label_80A87404,
        &&label_80A87408,
        &&label_80A8740C,
        &&label_80A87410,
        &&label_80A87414,
        &&label_80A87418,
        &&label_80A8741C,
        &&label_80A87420,
        &&label_80A87424,
        &&label_80A87428,
        &&label_80A8742C,
        &&label_80A87430,
        &&label_80A87434,
        &&label_80A87438,
        &&label_80A8743C,
        &&label_80A87440,
        &&label_80A87444,
        &&label_80A87448,
        &&label_80A8744C,
        &&label_80A87450,
        &&label_80A87454,
        &&label_80A87458,
        &&label_80A8745C,
        &&label_80A87460,
        &&label_80A87464,
        &&label_80A87468,
        &&label_80A8746C,
        &&label_80A87470,
        &&label_80A87474,
        &&label_80A87478,
        &&label_80A8747C,
        &&label_80A87480,
        &&label_80A87484,
        &&label_80A87488,
        &&label_80A8748C,
        &&label_80A87490,
        &&label_80A87494,
        &&label_80A87498,
        &&label_80A8749C,
        &&label_80A874A0,
        &&label_80A874A4,
        &&label_80A874A8,
        &&label_80A874AC,
        &&label_80A874B0,
        &&label_80A874B4,
        &&label_80A874B8,
        &&label_80A874BC,
        &&label_80A874C0,
        &&label_80A874C4,
        &&label_80A874C8,
        &&label_80A874CC,
        &&label_80A874D0,
        &&label_80A874D4,
        &&label_80A874D8,
        &&label_80A874DC,
        &&label_80A874E0,
        &&label_80A874E4,
        &&label_80A874E8,
        &&label_80A874EC,
        &&label_80A874F0,
        &&label_80A874F4,
        &&label_80A874F8,
        &&label_80A874FC,
        &&label_80A87500,
        &&label_80A87504,
        &&label_80A87508,
        &&label_80A8750C,
        &&label_80A87510,
        &&label_80A87514,
        &&label_80A87518,
        &&label_80A8751C,
        &&label_80A87520,
        &&label_80A87524,
        &&label_80A87528,
        &&label_80A8752C,
        &&label_80A87530,
        &&label_80A87534,
        &&label_80A87538,
        &&label_80A8753C,
        &&label_80A87540,
        &&label_80A87544,
        &&label_80A87548,
        &&label_80A8754C,
        &&label_80A87550,
        &&label_80A87554,
        &&label_80A87558,
        &&label_80A8755C,
        &&label_80A87560,
        &&label_80A87564,
        &&label_80A87568,
        &&label_80A8756C,
        &&label_80A87570,
        &&label_80A87574,
        &&label_80A87578,
        &&label_80A8757C,
        &&label_80A87580,
        &&label_80A87584,
        &&label_80A87588,
        &&label_80A8758C,
        &&label_80A87590,
        &&label_80A87594,
        &&label_80A87598,
        &&label_80A8759C,
        &&label_80A875A0,
        &&label_80A875A4,
        &&label_80A875A8,
        &&label_80A875AC,
        &&label_80A875B0,
        &&label_80A875B4,
        &&label_80A875B8,
        &&label_80A875BC,
        &&label_80A875C0,
        &&label_80A875C4,
        &&label_80A875C8,
        &&label_80A875CC,
        &&label_80A875D0,
        &&label_80A875D4,
        &&label_80A875D8,
        &&label_80A875DC,
        &&label_80A875E0,
        &&label_80A875E4,
        &&label_80A875E8,
        &&label_80A875EC,
        &&label_80A875F0,
        &&label_80A875F4,
        &&label_80A875F8,
        &&label_80A875FC,
        &&label_80A87600,
        &&label_80A87604,
        &&label_80A87608,
        &&label_80A8760C,
        &&label_80A87610,
        &&label_80A87614
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80A86860u && pc <= 0x80A87614u && ((pc - 0x80A86860u) & 3u) == 0u)
            goto *pc_table_80A86860[(pc - 0x80A86860u) >> 2];
    }
    return;
label_80A86860:
    ctx->pc = 0x80A86860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A86860: lwz     r5, 32(r3)
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
label_80A86864:
    ctx->pc = 0x80A86864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86864: lbz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86868:
    ctx->pc = 0x80A86868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86868u)) return;
    // 80A86868: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_80A8686C:
    ctx->pc = 0x80A8686Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8686Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A8686C: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86870:
    ctx->pc = 0x80A86870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86870: lbz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86874:
    ctx->pc = 0x80A86874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86874u)) return;
    // 80A86874: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80A86878:
    ctx->pc = 0x80A86878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86878u)) return;
    // 80A86878: cmpwi   r0, 2
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

label_80A8687C:
    ctx->pc = 0x80A8687Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8687Cu)) return;
    // 80A8687C: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A86860;
        }
    }

label_80A86880:
    ctx->pc = 0x80A86880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86880: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A86884:
    ctx->pc = 0x80A86884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86884u)) return;
    // 80A86884: lis     r4, -32600
    ctx->gpr[4] = ((u32)(s32)(-32600) << 16);

label_80A86888:
    ctx->pc = 0x80A86888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86888: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A8688C:
    ctx->pc = 0x80A8688Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8688Cu)) return;
    // 80A8688C: addi    r0, r4, 26544
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(26544);

label_80A86890:
    ctx->pc = 0x80A86890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A86890: stw     r0, 16(r3)
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
label_80A86894:
    ctx->pc = 0x80A86894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86894u)) return;
    // 80A86894: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A86860;
        }
    }

label_80A86898:
    ctx->pc = 0x80A86898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A86898: stwu     r1, -16(r1)
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
label_80A8689C:
    ctx->pc = 0x80A8689Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8689Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A8689C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A868A0:
    ctx->pc = 0x80A868A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868A0u)) return;
    // 80A868A0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A868A4:
    ctx->pc = 0x80A868A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868A4u)) return;
    // 80A868A4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A868A8:
    ctx->pc = 0x80A868A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A868A8: stw     r0, 20(r1)
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
label_80A868AC:
    ctx->pc = 0x80A868ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868ACu)) return;
    // 80A868AC: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_80A868B0:
    ctx->pc = 0x80A868B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868B0u)) return;
    // 80A868B0: lis     r5, -27653
    ctx->gpr[5] = ((u32)(s32)(-27653) << 16);

label_80A868B4:
    ctx->pc = 0x80A868B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A868B4: stw     r31, 12(r1)
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
label_80A868B8:
    ctx->pc = 0x80A868B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868B8u)) return;
    // 80A868B8: addi    r31, r5, -8280
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-8280);

label_80A868BC:
    ctx->pc = 0x80A868BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868BCu)) return;
    // 80A868BC: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80A868C0:
    ctx->pc = 0x80A868C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A868C0: stw     r30, 8(r1)
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
label_80A868C4:
    ctx->pc = 0x80A868C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A868C4: lha     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A868C8:
    ctx->pc = 0x80A868C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A868C8: lha     r0, -5404(r3)
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
label_80A868CC:
    ctx->pc = 0x80A868CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868CCu)) return;
    // 80A868CC: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80A868D0:
    ctx->pc = 0x80A868D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868D0u)) return;
    // 80A868D0: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_80A868D4:
    ctx->pc = 0x80A868D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868D4u)) return;
    // 80A868D4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80A868D8:
    ctx->pc = 0x80A868D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868D8u)) return;
    // 80A868D8: rlwinm r30, r0, 2, 22, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_80A868DC:
    ctx->pc = 0x80A868DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868DCu)) return;
    // 80A868DC: addi    r3, r5, -25468
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-25468);

label_80A868E0:
    ctx->pc = 0x80A868E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A868E0: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A868E4:
    ctx->pc = 0x80A868E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868E4u)) return;
    // 80A868E4: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_80A868E8:
    ctx->pc = 0x80A868E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868E8u)) return;
    // 80A868E8: bl      0x800031E8
    {
            ctx->lr = 0x80A868ECu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A868EC:
    ctx->pc = 0x80A868ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A868ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A868EC: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_80A868F0:
    ctx->pc = 0x80A868F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868F0u)) return;
    // 80A868F0: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A868F4:
    ctx->pc = 0x80A868F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A868F4: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A868F8:
    ctx->pc = 0x80A868F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868F8u)) return;
    // 80A868F8: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_80A868FC:
    ctx->pc = 0x80A868FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A868FCu)) return;
    // 80A868FC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A86900:
    ctx->pc = 0x80A86900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86900u)) return;
    // 80A86900: bl      0x800031E8
    {
            ctx->lr = 0x80A86904u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A86904:
    ctx->pc = 0x80A86904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86904: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_80A86908:
    ctx->pc = 0x80A86908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86908u)) return;
    // 80A86908: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A8690C:
    ctx->pc = 0x80A8690Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8690Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A8690C: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86910:
    ctx->pc = 0x80A86910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86910u)) return;
    // 80A86910: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_80A86914:
    ctx->pc = 0x80A86914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86914u)) return;
    // 80A86914: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A86918:
    ctx->pc = 0x80A86918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86918u)) return;
    // 80A86918: bl      0x800031E8
    {
            ctx->lr = 0x80A8691Cu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A8691C:
    ctx->pc = 0x80A8691Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8691Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A8691C: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_80A86920:
    ctx->pc = 0x80A86920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86920u)) return;
    // 80A86920: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A86924:
    ctx->pc = 0x80A86924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86924: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86928:
    ctx->pc = 0x80A86928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86928u)) return;
    // 80A86928: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_80A8692C:
    ctx->pc = 0x80A8692Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8692Cu)) return;
    // 80A8692C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80A86930:
    ctx->pc = 0x80A86930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86930u)) return;
    // 80A86930: bl      0x800031E8
    {
            ctx->lr = 0x80A86934u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A86934:
    ctx->pc = 0x80A86934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86934: lwz     r0, 20(r1)
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
label_80A86938:
    ctx->pc = 0x80A86938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A86938: lwz     r31, 12(r1)
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
label_80A8693C:
    ctx->pc = 0x80A8693Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8693Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A8693C: lwz     r30, 8(r1)
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
label_80A86940:
    ctx->pc = 0x80A86940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A86940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86940: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86944:
    ctx->pc = 0x80A86944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86944u)) return;
    // 80A86944: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A86948:
    ctx->pc = 0x80A86948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86948u)) return;
    // 80A86948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A86860;
        }
    }

label_80A8694C:
    ctx->pc = 0x80A8694Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8694Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A8694C: stwu     r1, -320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-320);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86950:
    ctx->pc = 0x80A86950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A86950: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86954:
    ctx->pc = 0x80A86954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A86954: stw     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86958:
    ctx->pc = 0x80A86958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86958: stfd     f31, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86958u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A8695C:
    ctx->pc = 0x80A8695Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8695Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A8695C: psq_st   f31, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A8695Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80A8695Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86960:
    ctx->pc = 0x80A86960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86960: stw     r31, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86964:
    ctx->pc = 0x80A86964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86964u)) return;
    // 80A86964: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A86968:
    ctx->pc = 0x80A86968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86968: lfsu     f1, -25492(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86968u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[3] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A8696C:
    ctx->pc = 0x80A8696Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8696Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A8696C: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A8696Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80A86970:
    ctx->pc = 0x80A86970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86970u)) return;
    // 80A86970: bl      0x8060F438
    {
            ctx->lr = 0x80A86974u;
            ctx->pc = 0x8060F438u;
            return;
    }

label_80A86974:
    ctx->pc = 0x80A86974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A86974: bl      0x8046C8C4
    {
            ctx->lr = 0x80A86978u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A86978:
    ctx->pc = 0x80A86978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86978: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A8697C:
    ctx->pc = 0x80A8697Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8697Cu)) return;
    // 80A8697C: bl      0x8004B49C
    {
            ctx->lr = 0x80A86980u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A86980:
    ctx->pc = 0x80A86980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80A86980: lis     r3, -28643
    ctx->gpr[3] = ((u32)(s32)(-28643) << 16);

label_80A86984:
    ctx->pc = 0x80A86984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86984u)) return;
    // 80A86984: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A86988:
    ctx->pc = 0x80A86988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86988u)) return;
    // 80A86988: addi    r5, r3, -30768
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-30768);

label_80A8698C:
    ctx->pc = 0x80A8698Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8698Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A8698C: lfs     f2, -29800(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A8698Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29800);
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
label_80A86990:
    ctx->pc = 0x80A86990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86990: lwz     r5, 0(r5)
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
label_80A86994:
    ctx->pc = 0x80A86994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86994u)) return;
    // 80A86994: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86998:
    ctx->pc = 0x80A86998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86998: lfs     f1, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86998u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A8699C:
    ctx->pc = 0x80A8699Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8699Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A8699C: lfs     f3, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A8699Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
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
label_80A869A0:
    ctx->pc = 0x80A869A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869A0u)) return;
    // 80A869A0: bl      0x8004B35C
    {
            ctx->lr = 0x80A869A4u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80A869A4:
    ctx->pc = 0x80A869A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A869A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A869A4: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A869A8:
    ctx->pc = 0x80A869A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869A8u)) return;
    // 80A869A8: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A869AC:
    ctx->pc = 0x80A869ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869ACu)) return;
    // 80A869AC: addi    r5, r3, -29796
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29796);

label_80A869B0:
    ctx->pc = 0x80A869B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A869B0: lfs     f2, -29792(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A869B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29792);
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
label_80A869B4:
    ctx->pc = 0x80A869B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A869B4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A869B4u)) return;
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
label_80A869B8:
    ctx->pc = 0x80A869B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869B8u)) return;
    // 80A869B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A869BC:
    ctx->pc = 0x80A869BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869BCu)) return;
    // 80A869BC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80A869BCu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80A869C0:
    ctx->pc = 0x80A869C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869C0u)) return;
    // 80A869C0: bl      0x8004A8A8
    {
            ctx->lr = 0x80A869C4u;
            ctx->pc = 0x8004A8A8u;
            return;
    }

label_80A869C4:
    ctx->pc = 0x80A869C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A869C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A869C4: lis     r3, -28663
    ctx->gpr[3] = ((u32)(s32)(-28663) << 16);

label_80A869C8:
    ctx->pc = 0x80A869C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869C8u)) return;
    // 80A869C8: addi    r3, r3, 9740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9740);

label_80A869CC:
    ctx->pc = 0x80A869CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869CCu)) return;
    // 80A869CC: bl      0x8060F594
    {
            ctx->lr = 0x80A869D0u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A869D0:
    ctx->pc = 0x80A869D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A869D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A869D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A869D4:
    ctx->pc = 0x80A869D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869D4u)) return;
    // 80A869D4: bl      0x8060F55C
    {
            ctx->lr = 0x80A869D8u;
            ctx->pc = 0x8060F55Cu;
            return;
    }

label_80A869D8:
    ctx->pc = 0x80A869D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A869D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A869D8: bl      0x8004B7D8
    {
            ctx->lr = 0x80A869DCu;
            ctx->pc = 0x8004B7D8u;
            return;
    }

label_80A869DC:
    ctx->pc = 0x80A869DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A869DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A869DC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A869E0:
    ctx->pc = 0x80A869E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869E0u)) return;
    // 80A869E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A869E4:
    ctx->pc = 0x80A869E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869E4u)) return;
    // 80A869E4: addi    r3, r3, 20440
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20440);

label_80A869E8:
    ctx->pc = 0x80A869E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A869E8: lwz     r3, 0(r3)
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
label_80A869EC:
    ctx->pc = 0x80A869ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869ECu)) return;
    // 80A869EC: bl      0x80034A7C
    {
            ctx->lr = 0x80A869F0u;
            ctx->pc = 0x80034A7Cu;
            return;
    }

label_80A869F0:
    ctx->pc = 0x80A869F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A869F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A869F0: bl      0x8004B7D8
    {
            ctx->lr = 0x80A869F4u;
            ctx->pc = 0x8004B7D8u;
            return;
    }

label_80A869F4:
    ctx->pc = 0x80A869F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A869F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    // 80A869F4: lis     r3, -28643
    ctx->gpr[3] = ((u32)(s32)(-28643) << 16);

label_80A869F8:
    ctx->pc = 0x80A869F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869F8u)) return;
    // 80A869F8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A869FC:
    ctx->pc = 0x80A869FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A869FCu)) return;
    // 80A869FC: addi    r4, r3, -30764
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30764);

label_80A86A00:
    ctx->pc = 0x80A86A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A00u)) return;
    // 80A86A00: lis     r5, -27656
    ctx->gpr[5] = ((u32)(s32)(-27656) << 16);

label_80A86A04:
    ctx->pc = 0x80A86A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A86A04: lwz     r4, 0(r4)
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
label_80A86A08:
    ctx->pc = 0x80A86A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A08u)) return;
    // 80A86A08: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86A0C:
    ctx->pc = 0x80A86A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A0Cu)) return;
    // 80A86A0C: addi    r6, r3, -29744
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-29744);

label_80A86A10:
    ctx->pc = 0x80A86A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A10u)) return;
    // 80A86A10: addi    r7, r5, -29776
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-29776);

label_80A86A14:
    ctx->pc = 0x80A86A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A14u)) return;
    // 80A86A14: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_80A86A18:
    ctx->pc = 0x80A86A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A18u)) return;
    // 80A86A18: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86A1C:
    ctx->pc = 0x80A86A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A86A1C: stw     r4, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86A20:
    ctx->pc = 0x80A86A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A20u)) return;
    // 80A86A20: addi    r5, r3, -29764
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29764);

label_80A86A24:
    ctx->pc = 0x80A86A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A86A24: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86A24u)) return;
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
label_80A86A28:
    ctx->pc = 0x80A86A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A28u)) return;
    // 80A86A28: lis     r8, -27656
    ctx->gpr[8] = ((u32)(s32)(-27656) << 16);

label_80A86A2C:
    ctx->pc = 0x80A86A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A86A2C: stw     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86A30:
    ctx->pc = 0x80A86A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A30u)) return;
    // 80A86A30: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A86A34:
    ctx->pc = 0x80A86A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A86A34: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86A34u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86A38:
    ctx->pc = 0x80A86A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A38u)) return;
    // 80A86A38: addi    r6, r4, -29768
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-29768);

label_80A86A3C:
    ctx->pc = 0x80A86A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A86A3C: lfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86A3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86A40:
    ctx->pc = 0x80A86A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A40u)) return;
    // 80A86A40: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86A44:
    ctx->pc = 0x80A86A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A86A44: lfd     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A86A44u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86A48:
    ctx->pc = 0x80A86A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A48u)) return;
    // 80A86A48: addi    r4, r3, -29760
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29760);

label_80A86A4C:
    ctx->pc = 0x80A86A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A4Cu)) return;
    // 80A86A4C: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A86A4Cu)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80A86A50:
    ctx->pc = 0x80A86A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A86A50: lfd     f1, -29784(r8)
    if (!ppc_fp_available_inline(ctx, 0x80A86A50u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-29784);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86A54:
    ctx->pc = 0x80A86A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A54u)) return;
    // 80A86A54: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80A86A54u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80A86A58:
    ctx->pc = 0x80A86A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A86A58: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86A58u)) return;
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
label_80A86A5C:
    ctx->pc = 0x80A86A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A5Cu)) return;
    // 80A86A5C: fmr    f6, f3
    if (!ppc_fp_available_inline(ctx, 0x80A86A5Cu)) return;
    ctx->fpr[6] = ctx->fpr[3];

label_80A86A60:
    ctx->pc = 0x80A86A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A60u)) return;
    // 80A86A60: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_80A86A64:
    ctx->pc = 0x80A86A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A64u)) return;
    // 80A86A64: fmul   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80A86A64u)) return;
    ppc_fmul(ctx, 0, 4, 0);

label_80A86A68:
    ctx->pc = 0x80A86A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86A68: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A86A68u)) return;
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
label_80A86A6C:
    ctx->pc = 0x80A86A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A6Cu)) return;
    // 80A86A6C: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A86A6Cu)) return;
    ppc_frsp(ctx, 0, 0);

label_80A86A70:
    ctx->pc = 0x80A86A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A70u)) return;
    // 80A86A70: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A86A70u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80A86A74:
    ctx->pc = 0x80A86A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A74u)) return;
    // 80A86A74: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A86A74u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A86A78:
    ctx->pc = 0x80A86A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A78u)) return;
    // 80A86A78: bl      0x8003AB14
    {
            ctx->lr = 0x80A86A7Cu;
            ctx->pc = 0x8003AB14u;
            return;
    }

label_80A86A7C:
    ctx->pc = 0x80A86A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86A7C: lis     r4, -32756
    ctx->gpr[4] = ((u32)(s32)(-32756) << 16);

label_80A86A80:
    ctx->pc = 0x80A86A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A80u)) return;
    // 80A86A80: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_80A86A84:
    ctx->pc = 0x80A86A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A84u)) return;
    // 80A86A84: addi    r4, r4, 17844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17844);

label_80A86A88:
    ctx->pc = 0x80A86A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86A88: lwz     r4, 0(r4)
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
label_80A86A8C:
    ctx->pc = 0x80A86A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A8Cu)) return;
    // 80A86A8C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80A86A90:
    ctx->pc = 0x80A86A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A90u)) return;
    // 80A86A90: bl      0x8003A434
    {
            ctx->lr = 0x80A86A94u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A86A94:
    ctx->pc = 0x80A86A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86A94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86A98:
    ctx->pc = 0x80A86A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86A98u)) return;
    // 80A86A98: bl      0x8004F324
    {
            ctx->lr = 0x80A86A9Cu;
            ctx->pc = 0x8004F324u;
            return;
    }

label_80A86A9C:
    ctx->pc = 0x80A86A9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86A9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A86A9C: bl      0x8004B824
    {
            ctx->lr = 0x80A86AA0u;
            ctx->pc = 0x8004B824u;
            return;
    }

label_80A86AA0:
    ctx->pc = 0x80A86AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86AA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86AA4:
    ctx->pc = 0x80A86AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AA4u)) return;
    // 80A86AA4: bl      0x80050104
    {
            ctx->lr = 0x80A86AA8u;
            ctx->pc = 0x80050104u;
            return;
    }

label_80A86AA8:
    ctx->pc = 0x80A86AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86AA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86AAC:
    ctx->pc = 0x80A86AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AACu)) return;
    // 80A86AAC: bl      0x80036C00
    {
            ctx->lr = 0x80A86AB0u;
            ctx->pc = 0x80036C00u;
            return;
    }

label_80A86AB0:
    ctx->pc = 0x80A86AB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86AB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86AB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A86AB4:
    ctx->pc = 0x80A86AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AB4u)) return;
    // 80A86AB4: bl      0x800336E8
    {
            ctx->lr = 0x80A86AB8u;
            ctx->pc = 0x800336E8u;
            return;
    }

label_80A86AB8:
    ctx->pc = 0x80A86AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86AB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86ABC:
    ctx->pc = 0x80A86ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86ABCu)) return;
    // 80A86ABC: bl      0x800363E4
    {
            ctx->lr = 0x80A86AC0u;
            ctx->pc = 0x800363E4u;
            return;
    }

label_80A86AC0:
    ctx->pc = 0x80A86AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A86AC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86AC4:
    ctx->pc = 0x80A86AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AC4u)) return;
    // 80A86AC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A86AC8:
    ctx->pc = 0x80A86AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AC8u)) return;
    // 80A86AC8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A86ACC:
    ctx->pc = 0x80A86ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86ACCu)) return;
    // 80A86ACC: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_80A86AD0:
    ctx->pc = 0x80A86AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AD0u)) return;
    // 80A86AD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A86AD4:
    ctx->pc = 0x80A86AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AD4u)) return;
    // 80A86AD4: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80A86AD8:
    ctx->pc = 0x80A86AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AD8u)) return;
    // 80A86AD8: bl      0x80033418
    {
            ctx->lr = 0x80A86ADCu;
            ctx->pc = 0x80033418u;
            return;
    }

label_80A86ADC:
    ctx->pc = 0x80A86ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A86ADC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86AE0:
    ctx->pc = 0x80A86AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AE0u)) return;
    // 80A86AE0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A86AE4:
    ctx->pc = 0x80A86AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AE4u)) return;
    // 80A86AE4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80A86AE8:
    ctx->pc = 0x80A86AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AE8u)) return;
    // 80A86AE8: li      r6, 33
    ctx->gpr[6] = (u32)(s32)(33);

label_80A86AEC:
    ctx->pc = 0x80A86AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AECu)) return;
    // 80A86AEC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A86AF0:
    ctx->pc = 0x80A86AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AF0u)) return;
    // 80A86AF0: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80A86AF4:
    ctx->pc = 0x80A86AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AF4u)) return;
    // 80A86AF4: bl      0x80033418
    {
            ctx->lr = 0x80A86AF8u;
            ctx->pc = 0x80033418u;
            return;
    }

label_80A86AF8:
    ctx->pc = 0x80A86AF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86AF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A86AF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86AFC:
    ctx->pc = 0x80A86AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86AFCu)) return;
    // 80A86AFC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A86B00:
    ctx->pc = 0x80A86B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B00u)) return;
    // 80A86B00: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A86B04:
    ctx->pc = 0x80A86B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B04u)) return;
    // 80A86B04: bl      0x800362D0
    {
            ctx->lr = 0x80A86B08u;
            ctx->pc = 0x800362D0u;
            return;
    }

label_80A86B08:
    ctx->pc = 0x80A86B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86B08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86B0C:
    ctx->pc = 0x80A86B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B0Cu)) return;
    // 80A86B0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A86B10:
    ctx->pc = 0x80A86B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B10u)) return;
    // 80A86B10: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A86B14:
    ctx->pc = 0x80A86B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B14u)) return;
    // 80A86B14: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A86B18:
    ctx->pc = 0x80A86B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B18u)) return;
    // 80A86B18: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80A86B1C:
    ctx->pc = 0x80A86B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B1Cu)) return;
    // 80A86B1C: bl      0x80036454
    {
            ctx->lr = 0x80A86B20u;
            ctx->pc = 0x80036454u;
            return;
    }

label_80A86B20:
    ctx->pc = 0x80A86B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A86B20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86B24:
    ctx->pc = 0x80A86B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B24u)) return;
    // 80A86B24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A86B28:
    ctx->pc = 0x80A86B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B28u)) return;
    // 80A86B28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A86B2C:
    ctx->pc = 0x80A86B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B2Cu)) return;
    // 80A86B2C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80A86B30:
    ctx->pc = 0x80A86B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B30u)) return;
    // 80A86B30: bl      0x80036A28
    {
            ctx->lr = 0x80A86B34u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80A86B34:
    ctx->pc = 0x80A86B34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86B34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A86B34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86B38:
    ctx->pc = 0x80A86B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B38u)) return;
    // 80A86B38: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A86B3C:
    ctx->pc = 0x80A86B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B3Cu)) return;
    // 80A86B3C: bl      0x800365A8
    {
            ctx->lr = 0x80A86B40u;
            ctx->pc = 0x800365A8u;
            return;
    }

label_80A86B40:
    ctx->pc = 0x80A86B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A86B40: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A86B44:
    ctx->pc = 0x80A86B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B44u)) return;
    // 80A86B44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A86B48:
    ctx->pc = 0x80A86B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B48u)) return;
    // 80A86B48: addi    r3, r3, 20452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20452);

label_80A86B4C:
    ctx->pc = 0x80A86B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B4Cu)) return;
    // 80A86B4C: bl      0x800357D4
    {
            ctx->lr = 0x80A86B50u;
            ctx->pc = 0x800357D4u;
            return;
    }

label_80A86B50:
    ctx->pc = 0x80A86B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A86B50: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_80A86B54:
    ctx->pc = 0x80A86B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B54u)) return;
    // 80A86B54: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A86B58:
    ctx->pc = 0x80A86B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B58u)) return;
    // 80A86B58: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A86B5C:
    ctx->pc = 0x80A86B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B5Cu)) return;
    // 80A86B5C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80A86B60:
    ctx->pc = 0x80A86B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B60u)) return;
    // 80A86B60: bl      0x8004F360
    {
            ctx->lr = 0x80A86B64u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_80A86B64:
    ctx->pc = 0x80A86B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80A86B64: lis     r4, -27653
    ctx->gpr[4] = ((u32)(s32)(-27653) << 16);

label_80A86B68:
    ctx->pc = 0x80A86B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B68u)) return;
    // 80A86B68: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86B6C:
    ctx->pc = 0x80A86B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B6Cu)) return;
    // 80A86B6C: addi    r5, r4, -3456
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3456);

label_80A86B70:
    ctx->pc = 0x80A86B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A86B70: lfs     f0, -29800(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86B70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29800);
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
label_80A86B74:
    ctx->pc = 0x80A86B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A86B74: lfs     f1, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86B74u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86B78:
    ctx->pc = 0x80A86B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B78u)) return;
    // 80A86B78: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80A86B7C:
    ctx->pc = 0x80A86B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A86B7C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86B7Cu)) return;
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
label_80A86B80:
    ctx->pc = 0x80A86B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B80u)) return;
    // 80A86B80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86B84:
    ctx->pc = 0x80A86B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B84u)) return;
    // 80A86B84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A86B88:
    ctx->pc = 0x80A86B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A86B88: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86B88u)) return;
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
label_80A86B8C:
    ctx->pc = 0x80A86B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86B8C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86B8Cu)) return;
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
label_80A86B90:
    ctx->pc = 0x80A86B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86B90: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86B90u)) return;
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
label_80A86B94:
    ctx->pc = 0x80A86B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86B94: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86B94u)) return;
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
label_80A86B98:
    ctx->pc = 0x80A86B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A86B98: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86B98u)) return;
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
label_80A86B9C:
    ctx->pc = 0x80A86B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86B9Cu)) return;
    // 80A86B9C: bl      0x80035FF4
    {
            ctx->lr = 0x80A86BA0u;
            ctx->pc = 0x80035FF4u;
            return;
    }

label_80A86BA0:
    ctx->pc = 0x80A86BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80A86BA0: lis     r3, -27653
    ctx->gpr[3] = ((u32)(s32)(-27653) << 16);

label_80A86BA4:
    ctx->pc = 0x80A86BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BA4u)) return;
    // 80A86BA4: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80A86BA8:
    ctx->pc = 0x80A86BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BA8u)) return;
    // 80A86BA8: addi    r31, r3, -3456
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-3456);

label_80A86BAC:
    ctx->pc = 0x80A86BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A86BAC: lwz     r5, -26724(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26724);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86BB0:
    ctx->pc = 0x80A86BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A86BB0: lbz     r4, 56(r31)
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
label_80A86BB4:
    ctx->pc = 0x80A86BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BB4u)) return;
    // 80A86BB4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A86BB8:
    ctx->pc = 0x80A86BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BB8u)) return;
    // 80A86BB8: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86BBC:
    ctx->pc = 0x80A86BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BBCu)) return;
    // 80A86BBC: lis     r6, -27656
    ctx->gpr[6] = ((u32)(s32)(-27656) << 16);

label_80A86BC0:
    ctx->pc = 0x80A86BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BC0u)) return;
    // 80A86BC0: slw   r4, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A86BC4:
    ctx->pc = 0x80A86BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A86BC4: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86BC8:
    ctx->pc = 0x80A86BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A86BC8: lfd     f1, -29736(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86BC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29736);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86BCC:
    ctx->pc = 0x80A86BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86BCC: stw     r4, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86BD0:
    ctx->pc = 0x80A86BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A86BD0: lfd     f2, -29752(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86BD0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-29752);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86BD4:
    ctx->pc = 0x80A86BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86BD4: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86BD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86BD8:
    ctx->pc = 0x80A86BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BD8u)) return;
    // 80A86BD8: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A86BD8u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80A86BDC:
    ctx->pc = 0x80A86BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BDCu)) return;
    // 80A86BDC: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A86BDCu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80A86BE0:
    ctx->pc = 0x80A86BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BE0u)) return;
    // 80A86BE0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A86BE0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A86BE4:
    ctx->pc = 0x80A86BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BE4u)) return;
    // 80A86BE4: bl      0x80014034
    {
            ctx->lr = 0x80A86BE8u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80A86BE8:
    ctx->pc = 0x80A86BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80A86BE8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A86BEC:
    ctx->pc = 0x80A86BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BECu)) return;
    // 80A86BEC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A86BF0:
    ctx->pc = 0x80A86BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BF0u)) return;
    // 80A86BF0: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A86BF4:
    ctx->pc = 0x80A86BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A86BF4: stw     r0, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86BF8:
    ctx->pc = 0x80A86BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A86BF8: lwz     r5, 0(r4)
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
label_80A86BFC:
    ctx->pc = 0x80A86BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86BFCu)) return;
    // 80A86BFC: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86C00:
    ctx->pc = 0x80A86C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A86C00: lbz     r4, 56(r31)
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
label_80A86C04:
    ctx->pc = 0x80A86C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C04u)) return;
    // 80A86C04: lis     r6, -27656
    ctx->gpr[6] = ((u32)(s32)(-27656) << 16);

label_80A86C08:
    ctx->pc = 0x80A86C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C08u)) return;
    // 80A86C08: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80A86C08u)) return;
    ppc_frsp(ctx, 31, 1);

label_80A86C0C:
    ctx->pc = 0x80A86C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A86C0C: lfd     f2, -29736(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86C0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29736);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86C10:
    ctx->pc = 0x80A86C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C10u)) return;
    // 80A86C10: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A86C14:
    ctx->pc = 0x80A86C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86C14: lfd     f1, -29752(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86C14u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-29752);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86C18:
    ctx->pc = 0x80A86C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A86C18: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86C1C:
    ctx->pc = 0x80A86C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86C1C: lfd     f0, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86C1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86C20:
    ctx->pc = 0x80A86C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C20u)) return;
    // 80A86C20: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A86C20u)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_80A86C24:
    ctx->pc = 0x80A86C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C24u)) return;
    // 80A86C24: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A86C24u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80A86C28:
    ctx->pc = 0x80A86C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C28u)) return;
    // 80A86C28: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A86C28u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A86C2C:
    ctx->pc = 0x80A86C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C2Cu)) return;
    // 80A86C2C: bl      0x80013948
    {
            ctx->lr = 0x80A86C30u;
            ctx->pc = 0x80013948u;
            return;
    }

label_80A86C30:
    ctx->pc = 0x80A86C30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86C30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86C30: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86C34:
    ctx->pc = 0x80A86C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C34u)) return;
    // 80A86C34: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A86C34u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A86C38:
    ctx->pc = 0x80A86C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86C38: lfs     f3, -29800(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86C38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29800);
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
label_80A86C3C:
    ctx->pc = 0x80A86C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C3Cu)) return;
    // 80A86C3C: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80A86C3Cu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80A86C40:
    ctx->pc = 0x80A86C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C40u)) return;
    // 80A86C40: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A86C44:
    ctx->pc = 0x80A86C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C44u)) return;
    // 80A86C44: bl      0x8003A888
    {
            ctx->lr = 0x80A86C48u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80A86C48:
    ctx->pc = 0x80A86C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A86C48: lis     r3, -27653
    ctx->gpr[3] = ((u32)(s32)(-27653) << 16);

label_80A86C4C:
    ctx->pc = 0x80A86C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C4Cu)) return;
    // 80A86C4C: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A86C50:
    ctx->pc = 0x80A86C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C50u)) return;
    // 80A86C50: addi    r5, r3, -3456
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-3456);

label_80A86C54:
    ctx->pc = 0x80A86C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A86C54: lfs     f3, -29800(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A86C54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29800);
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
label_80A86C58:
    ctx->pc = 0x80A86C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86C58: lfs     f2, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86C58u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
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
label_80A86C5C:
    ctx->pc = 0x80A86C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C5Cu)) return;
    // 80A86C5C: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A86C60:
    ctx->pc = 0x80A86C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86C60: lfs     f1, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86C60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86C64:
    ctx->pc = 0x80A86C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86C64: lfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86C64u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
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
label_80A86C68:
    ctx->pc = 0x80A86C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C68u)) return;
    // 80A86C68: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A86C68u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80A86C6C:
    ctx->pc = 0x80A86C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C6Cu)) return;
    // 80A86C6C: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A86C6Cu)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_80A86C70:
    ctx->pc = 0x80A86C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C70u)) return;
    // 80A86C70: bl      0x8003A8BC
    {
            ctx->lr = 0x80A86C74u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80A86C74:
    ctx->pc = 0x80A86C74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86C74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A86C74: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A86C78:
    ctx->pc = 0x80A86C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C78u)) return;
    // 80A86C78: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_80A86C7C:
    ctx->pc = 0x80A86C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C7Cu)) return;
    // 80A86C7C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A86C80:
    ctx->pc = 0x80A86C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C80u)) return;
    // 80A86C80: bl      0x8003A434
    {
            ctx->lr = 0x80A86C84u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A86C84:
    ctx->pc = 0x80A86C84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86C84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A86C84: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A86C88:
    ctx->pc = 0x80A86C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C88u)) return;
    // 80A86C88: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80A86C8C:
    ctx->pc = 0x80A86C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C8Cu)) return;
    // 80A86C8C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A86C90:
    ctx->pc = 0x80A86C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C90u)) return;
    // 80A86C90: bl      0x8003768C
    {
            ctx->lr = 0x80A86C94u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80A86C94:
    ctx->pc = 0x80A86C94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 44u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86C94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 44u : 1u;
    // 80A86C94: lis     r3, -27653
    ctx->gpr[3] = ((u32)(s32)(-27653) << 16);

label_80A86C98:
    ctx->pc = 0x80A86C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C98u)) return;
    // 80A86C98: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80A86C9C:
    ctx->pc = 0x80A86C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86C9Cu)) return;
    // 80A86C9C: addi    r5, r3, -3456
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-3456);

label_80A86CA0:
    ctx->pc = 0x80A86CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CA0u)) return;
    // 80A86CA0: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A86CA4:
    ctx->pc = 0x80A86CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80A86CA4: lfs     f1, -29800(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A86CA4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29800);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86CA8:
    ctx->pc = 0x80A86CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CA8u)) return;
    // 80A86CA8: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86CAC:
    ctx->pc = 0x80A86CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80A86CAC: lfs     f0, -29792(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86CACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29792);
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
label_80A86CB0:
    ctx->pc = 0x80A86CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CB0u)) return;
    // 80A86CB0: addi    r3, r1, 176
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(176);

label_80A86CB4:
    ctx->pc = 0x80A86CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80A86CB4: lfs     f7, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CB4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
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
label_80A86CB8:
    ctx->pc = 0x80A86CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CB8u)) return;
    // 80A86CB8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A86CBC:
    ctx->pc = 0x80A86CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80A86CBC: lfs     f6, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
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
label_80A86CC0:
    ctx->pc = 0x80A86CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80A86CC0: lfs     f11, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80A86CC4:
    ctx->pc = 0x80A86CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A86CC4: lfs     f10, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
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
label_80A86CC8:
    ctx->pc = 0x80A86CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A86CC8: lfs     f9, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CC8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
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
label_80A86CCC:
    ctx->pc = 0x80A86CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A86CCC: lfs     f8, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CCCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
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
label_80A86CD0:
    ctx->pc = 0x80A86CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A86CD0: lfs     f5, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CD0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
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
label_80A86CD4:
    ctx->pc = 0x80A86CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A86CD4: lfs     f4, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CD4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
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
label_80A86CD8:
    ctx->pc = 0x80A86CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A86CD8: lfs     f3, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
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
label_80A86CDC:
    ctx->pc = 0x80A86CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A86CDC: lfs     f2, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86CDCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
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
label_80A86CE0:
    ctx->pc = 0x80A86CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A86CE0: stfs     f11, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86CE4:
    ctx->pc = 0x80A86CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A86CE4: stfs     f10, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86CE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86CE8:
    ctx->pc = 0x80A86CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A86CE8: stfs     f9, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86CE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86CEC:
    ctx->pc = 0x80A86CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A86CEC: stfs     f8, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86CECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86CF0:
    ctx->pc = 0x80A86CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A86CF0: stfs     f7, 228(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86CF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86CF4:
    ctx->pc = 0x80A86CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A86CF4: stfs     f7, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86CF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86CF8:
    ctx->pc = 0x80A86CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A86CF8: stfs     f6, 252(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86CF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86CFC:
    ctx->pc = 0x80A86CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A86CFC: stfs     f6, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86CFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D00:
    ctx->pc = 0x80A86D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A86D00: stfs     f5, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D04:
    ctx->pc = 0x80A86D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A86D04: stfs     f4, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D08:
    ctx->pc = 0x80A86D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A86D08: stfs     f3, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D0C:
    ctx->pc = 0x80A86D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A86D0C: stfs     f2, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D10:
    ctx->pc = 0x80A86D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A86D10: stfs     f1, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D14:
    ctx->pc = 0x80A86D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A86D14: stfs     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D14u)) return;
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
label_80A86D18:
    ctx->pc = 0x80A86D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A86D18: stfs     f1, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D1C:
    ctx->pc = 0x80A86D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A86D1C: stfs     f1, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D20:
    ctx->pc = 0x80A86D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A86D20: stfs     f0, 264(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D24:
    ctx->pc = 0x80A86D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A86D24: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D24u)) return;
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
label_80A86D28:
    ctx->pc = 0x80A86D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86D28: stfs     f0, 260(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D2C:
    ctx->pc = 0x80A86D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A86D2C: stfs     f0, 236(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D30:
    ctx->pc = 0x80A86D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86D30: stw     r0, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D34:
    ctx->pc = 0x80A86D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86D34: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D38:
    ctx->pc = 0x80A86D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86D38: stw     r0, 220(r1)
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
label_80A86D3C:
    ctx->pc = 0x80A86D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A86D3C: stw     r0, 196(r1)
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
label_80A86D40:
    ctx->pc = 0x80A86D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D40u)) return;
    // 80A86D40: bl      0x80050070
    {
            ctx->lr = 0x80A86D44u;
            ctx->pc = 0x80050070u;
            return;
    }

label_80A86D44:
    ctx->pc = 0x80A86D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A86D44: bl      0x80050050
    {
            ctx->lr = 0x80A86D48u;
            ctx->pc = 0x80050050u;
            return;
    }

label_80A86D48:
    ctx->pc = 0x80A86D48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86D48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86D4C:
    ctx->pc = 0x80A86D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D4Cu)) return;
    // 80A86D4C: bl      0x8003640C
    {
            ctx->lr = 0x80A86D50u;
            ctx->pc = 0x8003640Cu;
            return;
    }

label_80A86D50:
    ctx->pc = 0x80A86D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86D50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86D54:
    ctx->pc = 0x80A86D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D54u)) return;
    // 80A86D54: bl      0x800363E4
    {
            ctx->lr = 0x80A86D58u;
            ctx->pc = 0x800363E4u;
            return;
    }

label_80A86D58:
    ctx->pc = 0x80A86D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A86D58: bl      0x8004B824
    {
            ctx->lr = 0x80A86D5Cu;
            ctx->pc = 0x8004B824u;
            return;
    }

label_80A86D5C:
    ctx->pc = 0x80A86D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86D5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86D60:
    ctx->pc = 0x80A86D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D60u)) return;
    // 80A86D60: bl      0x8004B504
    {
            ctx->lr = 0x80A86D64u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A86D64:
    ctx->pc = 0x80A86D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A86D64: bl      0x8046C930
    {
            ctx->lr = 0x80A86D68u;
            ctx->pc = 0x8046C930u;
            return;
    }

label_80A86D68:
    ctx->pc = 0x80A86D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A86D68: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A86D6C:
    ctx->pc = 0x80A86D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86D6C: lfsu     f1, -25500(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86D6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25500);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[3] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D70:
    ctx->pc = 0x80A86D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A86D70: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86D70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80A86D74:
    ctx->pc = 0x80A86D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D74u)) return;
    // 80A86D74: bl      0x8060F438
    {
            ctx->lr = 0x80A86D78u;
            ctx->pc = 0x8060F438u;
            return;
    }

label_80A86D78:
    ctx->pc = 0x80A86D78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A86D78: psq_l   f31, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A86D78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80A86D78u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D7C:
    ctx->pc = 0x80A86D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86D7C: lwz     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D80:
    ctx->pc = 0x80A86D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A86D80: lfd     f31, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A86D80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D84:
    ctx->pc = 0x80A86D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86D84: lwz     r31, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D88:
    ctx->pc = 0x80A86D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A86D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86D88: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86D8C:
    ctx->pc = 0x80A86D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D8Cu)) return;
    // 80A86D8C: addi    r1, r1, 320
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(320);

label_80A86D90:
    ctx->pc = 0x80A86D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D90u)) return;
    // 80A86D90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A86860;
        }
    }

label_80A86D94:
    ctx->pc = 0x80A86D94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 55u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86D94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 55u : 1u;
    // 80A86D94: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A86D98:
    ctx->pc = 0x80A86D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D98u)) return;
    // 80A86D98: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86D9C:
    ctx->pc = 0x80A86D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80A86D9C: lfs     f6, -29728(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A86D9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29728);
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
label_80A86DA0:
    ctx->pc = 0x80A86DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DA0u)) return;
    // 80A86DA0: lis     r6, -27656
    ctx->gpr[6] = ((u32)(s32)(-27656) << 16);

label_80A86DA4:
    ctx->pc = 0x80A86DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80A86DA4: lfs     f5, -29724(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86DA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29724);
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
label_80A86DA8:
    ctx->pc = 0x80A86DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DA8u)) return;
    // 80A86DA8: lis     r5, -27656
    ctx->gpr[5] = ((u32)(s32)(-27656) << 16);

label_80A86DAC:
    ctx->pc = 0x80A86DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DACu)) return;
    // 80A86DAC: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A86DB0:
    ctx->pc = 0x80A86DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DB0u)) return;
    // 80A86DB0: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86DB4:
    ctx->pc = 0x80A86DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DB4u)) return;
    // 80A86DB4: fsubs   f0, f5, f6
    if (!ppc_fp_available_inline(ctx, 0x80A86DB4u)) return;
    ppc_fsubs(ctx, 0, 5, 6);

label_80A86DB8:
    ctx->pc = 0x80A86DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DB8u)) return;
    // 80A86DB8: lis     r9, -32600
    ctx->gpr[9] = ((u32)(s32)(-32600) << 16);

label_80A86DBC:
    ctx->pc = 0x80A86DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80A86DBC: lfs     f1, -29716(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A86DBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29716);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86DC0:
    ctx->pc = 0x80A86DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DC0u)) return;
    // 80A86DC0: lis     r7, -27653
    ctx->gpr[7] = ((u32)(s32)(-27653) << 16);

label_80A86DC4:
    ctx->pc = 0x80A86DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80A86DC4: lfs     f4, -29720(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86DC4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-29720);
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
label_80A86DC8:
    ctx->pc = 0x80A86DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DC8u)) return;
    // 80A86DC8: addi    r6, r7, -3456
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-3456);

label_80A86DCC:
    ctx->pc = 0x80A86DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A86DCCu)) return;
    // 80A86DCC: fdivs   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A86DCCu)) return;
    ppc_fdivs(ctx, 0, 0, 0);

label_80A86DD0:
    ctx->pc = 0x80A86DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A86DD0: lfs     f3, -29792(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86DD0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29792);
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
label_80A86DD4:
    ctx->pc = 0x80A86DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DD4u)) return;
    // 80A86DD4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80A86DD8:
    ctx->pc = 0x80A86DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DD8u)) return;
    // 80A86DD8: lis     r8, -28618
    ctx->gpr[8] = ((u32)(s32)(-28618) << 16);

label_80A86DDC:
    ctx->pc = 0x80A86DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DDCu)) return;
    // 80A86DDC: addi    r4, r9, 26956
    ctx->gpr[4] = ctx->gpr[9] + (u32)(s32)(26956);

label_80A86DE0:
    ctx->pc = 0x80A86DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A86DE0: stfs     f6, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86DE0u)) return;
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
label_80A86DE4:
    ctx->pc = 0x80A86DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DE4u)) return;
    // 80A86DE4: fabs    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A86DE4u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) & 0x7FFFFFFFFFFFFFFFull);

label_80A86DE8:
    ctx->pc = 0x80A86DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A86DE8: lfs     f0, -29712(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86DE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29712);
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
label_80A86DEC:
    ctx->pc = 0x80A86DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A86DEC: stw     r4, 20448(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20448);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86DF0:
    ctx->pc = 0x80A86DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DF0u)) return;
    // 80A86DF0: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A86DF0u)) return;
    ppc_frsp(ctx, 2, 2);

label_80A86DF4:
    ctx->pc = 0x80A86DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A86DF4: stfs     f6, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86DF4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86DF8:
    ctx->pc = 0x80A86DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A86DF8: stfs     f5, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86DF8u)) return;
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
label_80A86DFC:
    ctx->pc = 0x80A86DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A86DFC: stfs     f5, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86DFCu)) return;
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
label_80A86E00:
    ctx->pc = 0x80A86E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A86E00: stfs     f6, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E04:
    ctx->pc = 0x80A86E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A86E04: stfs     f6, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E08:
    ctx->pc = 0x80A86E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A86E08: stfs     f5, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E08u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E0C:
    ctx->pc = 0x80A86E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A86E0C: stfs     f5, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E0Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E10:
    ctx->pc = 0x80A86E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A86E10: stfs     f4, 20(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E10u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E14:
    ctx->pc = 0x80A86E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A86E14: stfs     f4, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E14u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E18:
    ctx->pc = 0x80A86E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A86E18: stfs     f3, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E18u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E1C:
    ctx->pc = 0x80A86E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86E1C: stfs     f2, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E1Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E20:
    ctx->pc = 0x80A86E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86E20: stfs     f1, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E20u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E24:
    ctx->pc = 0x80A86E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86E24: stfs     f0, 52(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A86E24u)) return;
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
label_80A86E28:
    ctx->pc = 0x80A86E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A86E28: stb     r0, 56(r6)
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
label_80A86E2C:
    ctx->pc = 0x80A86E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E2Cu)) return;
    // 80A86E2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A86860;
        }
    }

label_80A86E30:
    ctx->pc = 0x80A86E30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86E30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A86E30: stwu     r1, -304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-304);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E34:
    ctx->pc = 0x80A86E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A86E34: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E38:
    ctx->pc = 0x80A86E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E38u)) return;
    // 80A86E38: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A86E3C:
    ctx->pc = 0x80A86E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A86E3C: stw     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E40:
    ctx->pc = 0x80A86E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86E40: stw     r31, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E44:
    ctx->pc = 0x80A86E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E44u)) return;
    // 80A86E44: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A86E48:
    ctx->pc = 0x80A86E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86E48: lha     r0, -5402(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5402);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E4C:
    ctx->pc = 0x80A86E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E4Cu)) return;
    // 80A86E4C: cmpwi   r0, 25
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(25);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A86E50:
    ctx->pc = 0x80A86E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E50u)) return;
    // 80A86E50: bc    4, 2, 0x80A873FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A873FC;
        }
    }

label_80A86E54:
    ctx->pc = 0x80A86E54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86E54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A86E54: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A86E58:
    ctx->pc = 0x80A86E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86E58: lfsu     f1, -25492(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86E58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[3] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E5C:
    ctx->pc = 0x80A86E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A86E5C: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86E5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80A86E60:
    ctx->pc = 0x80A86E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E60u)) return;
    // 80A86E60: bl      0x8060F438
    {
            ctx->lr = 0x80A86E64u;
            ctx->pc = 0x8060F438u;
            return;
    }

label_80A86E64:
    ctx->pc = 0x80A86E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A86E64: bl      0x8046C8C4
    {
            ctx->lr = 0x80A86E68u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A86E68:
    ctx->pc = 0x80A86E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86E68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86E6C:
    ctx->pc = 0x80A86E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E6Cu)) return;
    // 80A86E6C: bl      0x8004B49C
    {
            ctx->lr = 0x80A86E70u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A86E70:
    ctx->pc = 0x80A86E70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86E70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A86E70: lis     r3, -28643
    ctx->gpr[3] = ((u32)(s32)(-28643) << 16);

label_80A86E74:
    ctx->pc = 0x80A86E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A86E74: lwz     r4, -30768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30768);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A86E78:
    ctx->pc = 0x80A86E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E78u)) return;
    // 80A86E78: cmplwi  r4, 0x0000
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

label_80A86E7C:
    ctx->pc = 0x80A86E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E7Cu)) return;
    // 80A86E7C: bc    12, 2, 0x80A86E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A86E98;
        }
    }

label_80A86E80:
    ctx->pc = 0x80A86E80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86E80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86E80: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86E84:
    ctx->pc = 0x80A86E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86E84: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A86E84u)) return;
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
label_80A86E88:
    ctx->pc = 0x80A86E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86E88: lfs     f2, -29800(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A86E88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29800);
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
label_80A86E8C:
    ctx->pc = 0x80A86E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E8Cu)) return;
    // 80A86E8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86E90:
    ctx->pc = 0x80A86E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A86E90: lfs     f3, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A86E90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_80A86E94:
    ctx->pc = 0x80A86E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E94u)) return;
    // 80A86E94: bl      0x8004B35C
    {
            ctx->lr = 0x80A86E98u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80A86E98:
    ctx->pc = 0x80A86E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A86E98: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86E9C:
    ctx->pc = 0x80A86E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86E9Cu)) return;
    // 80A86E9C: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A86EA0:
    ctx->pc = 0x80A86EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EA0u)) return;
    // 80A86EA0: addi    r5, r3, -29796
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29796);

label_80A86EA4:
    ctx->pc = 0x80A86EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A86EA4: lfs     f2, -29792(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A86EA4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29792);
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
label_80A86EA8:
    ctx->pc = 0x80A86EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A86EA8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A86EA8u)) return;
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
label_80A86EAC:
    ctx->pc = 0x80A86EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EACu)) return;
    // 80A86EAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86EB0:
    ctx->pc = 0x80A86EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EB0u)) return;
    // 80A86EB0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80A86EB0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80A86EB4:
    ctx->pc = 0x80A86EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EB4u)) return;
    // 80A86EB4: bl      0x8004A8A8
    {
            ctx->lr = 0x80A86EB8u;
            ctx->pc = 0x8004A8A8u;
            return;
    }

label_80A86EB8:
    ctx->pc = 0x80A86EB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86EB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A86EB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86EBC:
    ctx->pc = 0x80A86EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EBCu)) return;
    // 80A86EBC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80A86EC0:
    ctx->pc = 0x80A86EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EC0u)) return;
    // 80A86EC0: bl      0x8060F4F8
    {
            ctx->lr = 0x80A86EC4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A86EC4:
    ctx->pc = 0x80A86EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A86EC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86EC8:
    ctx->pc = 0x80A86EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EC8u)) return;
    // 80A86EC8: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80A86ECC:
    ctx->pc = 0x80A86ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86ECCu)) return;
    // 80A86ECC: bl      0x8060F4F8
    {
            ctx->lr = 0x80A86ED0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A86ED0:
    ctx->pc = 0x80A86ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A86ED0: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A86ED4:
    ctx->pc = 0x80A86ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86ED4u)) return;
    // 80A86ED4: addi    r3, r3, -27668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27668);

label_80A86ED8:
    ctx->pc = 0x80A86ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86ED8u)) return;
    // 80A86ED8: bl      0x8060F594
    {
            ctx->lr = 0x80A86EDCu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A86EDC:
    ctx->pc = 0x80A86EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86EDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86EE0:
    ctx->pc = 0x80A86EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EE0u)) return;
    // 80A86EE0: bl      0x8004B49C
    {
            ctx->lr = 0x80A86EE4u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A86EE4:
    ctx->pc = 0x80A86EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86EE4: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_80A86EE8:
    ctx->pc = 0x80A86EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EE8u)) return;
    // 80A86EE8: bl      0x8003A3D4
    {
            ctx->lr = 0x80A86EECu;
            ctx->pc = 0x8003A3D4u;
            return;
    }

label_80A86EEC:
    ctx->pc = 0x80A86EECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86EECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86EEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86EF0:
    ctx->pc = 0x80A86EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EF0u)) return;
    // 80A86EF0: bl      0x8060F55C
    {
            ctx->lr = 0x80A86EF4u;
            ctx->pc = 0x8060F55Cu;
            return;
    }

label_80A86EF4:
    ctx->pc = 0x80A86EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86EF4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86EF8:
    ctx->pc = 0x80A86EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86EF8u)) return;
    // 80A86EF8: bl      0x80050104
    {
            ctx->lr = 0x80A86EFCu;
            ctx->pc = 0x80050104u;
            return;
    }

label_80A86EFC:
    ctx->pc = 0x80A86EFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86EFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86EFC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80A86F00:
    ctx->pc = 0x80A86F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F00u)) return;
    // 80A86F00: bl      0x80036C00
    {
            ctx->lr = 0x80A86F04u;
            ctx->pc = 0x80036C00u;
            return;
    }

label_80A86F04:
    ctx->pc = 0x80A86F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A86F04: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80A86F08:
    ctx->pc = 0x80A86F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F08u)) return;
    // 80A86F08: bl      0x800336E8
    {
            ctx->lr = 0x80A86F0Cu;
            ctx->pc = 0x800336E8u;
            return;
    }

label_80A86F0C:
    ctx->pc = 0x80A86F0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86F0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A86F0C: li      r3, 77
    ctx->gpr[3] = (u32)(s32)(77);

label_80A86F10:
    ctx->pc = 0x80A86F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F10u)) return;
    // 80A86F10: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A86F14:
    ctx->pc = 0x80A86F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F14u)) return;
    // 80A86F14: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A86F18:
    ctx->pc = 0x80A86F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F18u)) return;
    // 80A86F18: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A86F1C:
    ctx->pc = 0x80A86F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F1Cu)) return;
    // 80A86F1C: bl      0x8004F360
    {
            ctx->lr = 0x80A86F20u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_80A86F20:
    ctx->pc = 0x80A86F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A86F20: li      r3, 78
    ctx->gpr[3] = (u32)(s32)(78);

label_80A86F24:
    ctx->pc = 0x80A86F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F24u)) return;
    // 80A86F24: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A86F28:
    ctx->pc = 0x80A86F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F28u)) return;
    // 80A86F28: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A86F2C:
    ctx->pc = 0x80A86F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F2Cu)) return;
    // 80A86F2C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80A86F30:
    ctx->pc = 0x80A86F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F30u)) return;
    // 80A86F30: bl      0x8004F360
    {
            ctx->lr = 0x80A86F34u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_80A86F34:
    ctx->pc = 0x80A86F34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86F34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A86F34: li      r3, 79
    ctx->gpr[3] = (u32)(s32)(79);

label_80A86F38:
    ctx->pc = 0x80A86F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F38u)) return;
    // 80A86F38: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A86F3C:
    ctx->pc = 0x80A86F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F3Cu)) return;
    // 80A86F3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A86F40:
    ctx->pc = 0x80A86F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F40u)) return;
    // 80A86F40: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80A86F44:
    ctx->pc = 0x80A86F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F44u)) return;
    // 80A86F44: bl      0x8004F360
    {
            ctx->lr = 0x80A86F48u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_80A86F48:
    ctx->pc = 0x80A86F48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86F48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86F48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86F4C:
    ctx->pc = 0x80A86F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F4Cu)) return;
    // 80A86F4C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80A86F50:
    ctx->pc = 0x80A86F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F50u)) return;
    // 80A86F50: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_80A86F54:
    ctx->pc = 0x80A86F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F54u)) return;
    // 80A86F54: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80A86F58:
    ctx->pc = 0x80A86F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F58u)) return;
    // 80A86F58: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80A86F5C:
    ctx->pc = 0x80A86F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F5Cu)) return;
    // 80A86F5C: bl      0x80036634
    {
            ctx->lr = 0x80A86F60u;
            ctx->pc = 0x80036634u;
            return;
    }

label_80A86F60:
    ctx->pc = 0x80A86F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86F60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86F64:
    ctx->pc = 0x80A86F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F64u)) return;
    // 80A86F64: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80A86F68:
    ctx->pc = 0x80A86F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F68u)) return;
    // 80A86F68: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80A86F6C:
    ctx->pc = 0x80A86F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F6Cu)) return;
    // 80A86F6C: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80A86F70:
    ctx->pc = 0x80A86F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F70u)) return;
    // 80A86F70: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80A86F74:
    ctx->pc = 0x80A86F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F74u)) return;
    // 80A86F74: bl      0x80036678
    {
            ctx->lr = 0x80A86F78u;
            ctx->pc = 0x80036678u;
            return;
    }

label_80A86F78:
    ctx->pc = 0x80A86F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A86F78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86F7C:
    ctx->pc = 0x80A86F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F7Cu)) return;
    // 80A86F7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A86F80:
    ctx->pc = 0x80A86F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F80u)) return;
    // 80A86F80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A86F84:
    ctx->pc = 0x80A86F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F84u)) return;
    // 80A86F84: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A86F88:
    ctx->pc = 0x80A86F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F88u)) return;
    // 80A86F88: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80A86F8C:
    ctx->pc = 0x80A86F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F8Cu)) return;
    // 80A86F8C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80A86F90:
    ctx->pc = 0x80A86F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F90u)) return;
    // 80A86F90: bl      0x800366BC
    {
            ctx->lr = 0x80A86F94u;
            ctx->pc = 0x800366BCu;
            return;
    }

label_80A86F94:
    ctx->pc = 0x80A86F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A86F94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A86F98:
    ctx->pc = 0x80A86F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F98u)) return;
    // 80A86F98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A86F9C:
    ctx->pc = 0x80A86F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86F9Cu)) return;
    // 80A86F9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A86FA0:
    ctx->pc = 0x80A86FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FA0u)) return;
    // 80A86FA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A86FA4:
    ctx->pc = 0x80A86FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FA4u)) return;
    // 80A86FA4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80A86FA8:
    ctx->pc = 0x80A86FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FA8u)) return;
    // 80A86FA8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80A86FAC:
    ctx->pc = 0x80A86FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FACu)) return;
    // 80A86FAC: bl      0x80036724
    {
            ctx->lr = 0x80A86FB0u;
            ctx->pc = 0x80036724u;
            return;
    }

label_80A86FB0:
    ctx->pc = 0x80A86FB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86FB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86FB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86FB4:
    ctx->pc = 0x80A86FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FB4u)) return;
    // 80A86FB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A86FB8:
    ctx->pc = 0x80A86FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FB8u)) return;
    // 80A86FB8: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80A86FBC:
    ctx->pc = 0x80A86FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FBCu)) return;
    // 80A86FBC: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80A86FC0:
    ctx->pc = 0x80A86FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FC0u)) return;
    // 80A86FC0: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_80A86FC4:
    ctx->pc = 0x80A86FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FC4u)) return;
    // 80A86FC4: bl      0x80036634
    {
            ctx->lr = 0x80A86FC8u;
            ctx->pc = 0x80036634u;
            return;
    }

label_80A86FC8:
    ctx->pc = 0x80A86FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A86FC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86FCC:
    ctx->pc = 0x80A86FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FCCu)) return;
    // 80A86FCC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80A86FD0:
    ctx->pc = 0x80A86FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FD0u)) return;
    // 80A86FD0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80A86FD4:
    ctx->pc = 0x80A86FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FD4u)) return;
    // 80A86FD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A86FD8:
    ctx->pc = 0x80A86FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FD8u)) return;
    // 80A86FD8: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_80A86FDC:
    ctx->pc = 0x80A86FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FDCu)) return;
    // 80A86FDC: bl      0x80036678
    {
            ctx->lr = 0x80A86FE0u;
            ctx->pc = 0x80036678u;
            return;
    }

label_80A86FE0:
    ctx->pc = 0x80A86FE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86FE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A86FE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A86FE4:
    ctx->pc = 0x80A86FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FE4u)) return;
    // 80A86FE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A86FE8:
    ctx->pc = 0x80A86FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FE8u)) return;
    // 80A86FE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A86FEC:
    ctx->pc = 0x80A86FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FECu)) return;
    // 80A86FEC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A86FF0:
    ctx->pc = 0x80A86FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FF0u)) return;
    // 80A86FF0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80A86FF4:
    ctx->pc = 0x80A86FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FF4u)) return;
    // 80A86FF4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80A86FF8:
    ctx->pc = 0x80A86FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A86FF8u)) return;
    // 80A86FF8: bl      0x800366BC
    {
            ctx->lr = 0x80A86FFCu;
            ctx->pc = 0x800366BCu;
            return;
    }

label_80A86FFC:
    ctx->pc = 0x80A86FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A86FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A86FFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A87000:
    ctx->pc = 0x80A87000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87000u)) return;
    // 80A87000: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A87004:
    ctx->pc = 0x80A87004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87004u)) return;
    // 80A87004: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A87008:
    ctx->pc = 0x80A87008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87008u)) return;
    // 80A87008: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A8700C:
    ctx->pc = 0x80A8700Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8700Cu)) return;
    // 80A8700C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80A87010:
    ctx->pc = 0x80A87010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87010u)) return;
    // 80A87010: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80A87014:
    ctx->pc = 0x80A87014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87014u)) return;
    // 80A87014: bl      0x80036724
    {
            ctx->lr = 0x80A87018u;
            ctx->pc = 0x80036724u;
            return;
    }

label_80A87018:
    ctx->pc = 0x80A87018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A87018: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A8701C:
    ctx->pc = 0x80A8701Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8701Cu)) return;
    // 80A8701C: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80A87020:
    ctx->pc = 0x80A87020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87020u)) return;
    // 80A87020: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A87024:
    ctx->pc = 0x80A87024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87024u)) return;
    // 80A87024: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A87028:
    ctx->pc = 0x80A87028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87028u)) return;
    // 80A87028: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_80A8702C:
    ctx->pc = 0x80A8702Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8702Cu)) return;
    // 80A8702C: bl      0x80036634
    {
            ctx->lr = 0x80A87030u;
            ctx->pc = 0x80036634u;
            return;
    }

label_80A87030:
    ctx->pc = 0x80A87030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A87030: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A87034:
    ctx->pc = 0x80A87034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87034u)) return;
    // 80A87034: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80A87038:
    ctx->pc = 0x80A87038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87038u)) return;
    // 80A87038: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80A8703C:
    ctx->pc = 0x80A8703Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8703Cu)) return;
    // 80A8703C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A87040:
    ctx->pc = 0x80A87040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87040u)) return;
    // 80A87040: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_80A87044:
    ctx->pc = 0x80A87044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87044u)) return;
    // 80A87044: bl      0x80036678
    {
            ctx->lr = 0x80A87048u;
            ctx->pc = 0x80036678u;
            return;
    }

label_80A87048:
    ctx->pc = 0x80A87048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A87048: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A8704C:
    ctx->pc = 0x80A8704Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8704Cu)) return;
    // 80A8704C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A87050:
    ctx->pc = 0x80A87050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87050u)) return;
    // 80A87050: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A87054:
    ctx->pc = 0x80A87054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87054u)) return;
    // 80A87054: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A87058:
    ctx->pc = 0x80A87058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87058u)) return;
    // 80A87058: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80A8705C:
    ctx->pc = 0x80A8705Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8705Cu)) return;
    // 80A8705C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80A87060:
    ctx->pc = 0x80A87060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87060u)) return;
    // 80A87060: bl      0x800366BC
    {
            ctx->lr = 0x80A87064u;
            ctx->pc = 0x800366BCu;
            return;
    }

label_80A87064:
    ctx->pc = 0x80A87064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A87064: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A87068:
    ctx->pc = 0x80A87068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87068u)) return;
    // 80A87068: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A8706C:
    ctx->pc = 0x80A8706Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8706Cu)) return;
    // 80A8706C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A87070:
    ctx->pc = 0x80A87070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87070u)) return;
    // 80A87070: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A87074:
    ctx->pc = 0x80A87074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87074u)) return;
    // 80A87074: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80A87078:
    ctx->pc = 0x80A87078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87078u)) return;
    // 80A87078: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80A8707C:
    ctx->pc = 0x80A8707Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8707Cu)) return;
    // 80A8707C: bl      0x80036724
    {
            ctx->lr = 0x80A87080u;
            ctx->pc = 0x80036724u;
            return;
    }

label_80A87080:
    ctx->pc = 0x80A87080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A87080: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A87084:
    ctx->pc = 0x80A87084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87084u)) return;
    // 80A87084: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A87088:
    ctx->pc = 0x80A87088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87088u)) return;
    // 80A87088: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A8708C:
    ctx->pc = 0x80A8708Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8708Cu)) return;
    // 80A8708C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80A87090:
    ctx->pc = 0x80A87090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87090u)) return;
    // 80A87090: bl      0x80036A28
    {
            ctx->lr = 0x80A87094u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80A87094:
    ctx->pc = 0x80A87094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A87094: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A87098:
    ctx->pc = 0x80A87098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87098u)) return;
    // 80A87098: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A8709C:
    ctx->pc = 0x80A8709Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8709Cu)) return;
    // 80A8709C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A870A0:
    ctx->pc = 0x80A870A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870A0u)) return;
    // 80A870A0: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80A870A4:
    ctx->pc = 0x80A870A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870A4u)) return;
    // 80A870A4: bl      0x80036A28
    {
            ctx->lr = 0x80A870A8u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80A870A8:
    ctx->pc = 0x80A870A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A870A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A870A8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A870AC:
    ctx->pc = 0x80A870ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870ACu)) return;
    // 80A870AC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80A870B0:
    ctx->pc = 0x80A870B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870B0u)) return;
    // 80A870B0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80A870B4:
    ctx->pc = 0x80A870B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870B4u)) return;
    // 80A870B4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80A870B8:
    ctx->pc = 0x80A870B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870B8u)) return;
    // 80A870B8: bl      0x80036A28
    {
            ctx->lr = 0x80A870BCu;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80A870BC:
    ctx->pc = 0x80A870BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A870BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A870BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A870C0:
    ctx->pc = 0x80A870C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870C0u)) return;
    // 80A870C0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A870C4:
    ctx->pc = 0x80A870C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870C4u)) return;
    // 80A870C4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80A870C8:
    ctx->pc = 0x80A870C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870C8u)) return;
    // 80A870C8: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_80A870CC:
    ctx->pc = 0x80A870CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870CCu)) return;
    // 80A870CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A870D0:
    ctx->pc = 0x80A870D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870D0u)) return;
    // 80A870D0: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80A870D4:
    ctx->pc = 0x80A870D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870D4u)) return;
    // 80A870D4: bl      0x80033418
    {
            ctx->lr = 0x80A870D8u;
            ctx->pc = 0x80033418u;
            return;
    }

label_80A870D8:
    ctx->pc = 0x80A870D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A870D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A870D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A870DC:
    ctx->pc = 0x80A870DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870DCu)) return;
    // 80A870DC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A870E0:
    ctx->pc = 0x80A870E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870E0u)) return;
    // 80A870E0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80A870E4:
    ctx->pc = 0x80A870E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870E4u)) return;
    // 80A870E4: li      r6, 33
    ctx->gpr[6] = (u32)(s32)(33);

label_80A870E8:
    ctx->pc = 0x80A870E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870E8u)) return;
    // 80A870E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A870EC:
    ctx->pc = 0x80A870ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870ECu)) return;
    // 80A870EC: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80A870F0:
    ctx->pc = 0x80A870F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870F0u)) return;
    // 80A870F0: bl      0x80033418
    {
            ctx->lr = 0x80A870F4u;
            ctx->pc = 0x80033418u;
            return;
    }

label_80A870F4:
    ctx->pc = 0x80A870F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A870F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A870F4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A870F8:
    ctx->pc = 0x80A870F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870F8u)) return;
    // 80A870F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A870FC:
    ctx->pc = 0x80A870FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A870FCu)) return;
    // 80A870FC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80A87100:
    ctx->pc = 0x80A87100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87100u)) return;
    // 80A87100: li      r6, 36
    ctx->gpr[6] = (u32)(s32)(36);

label_80A87104:
    ctx->pc = 0x80A87104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87104u)) return;
    // 80A87104: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A87108:
    ctx->pc = 0x80A87108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87108u)) return;
    // 80A87108: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80A8710C:
    ctx->pc = 0x80A8710Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8710Cu)) return;
    // 80A8710C: bl      0x80033418
    {
            ctx->lr = 0x80A87110u;
            ctx->pc = 0x80033418u;
            return;
    }

label_80A87110:
    ctx->pc = 0x80A87110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A87110: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A87114:
    ctx->pc = 0x80A87114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A87114: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87114u)) return;
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
label_80A87118:
    ctx->pc = 0x80A87118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A87118: lfs     f2, -29708(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A87118u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29708);
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
label_80A8711C:
    ctx->pc = 0x80A8711Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8711Cu)) return;
    // 80A8711C: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A87120:
    ctx->pc = 0x80A87120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A87120: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87120u)) return;
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
label_80A87124:
    ctx->pc = 0x80A87124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87124u)) return;
    // 80A87124: addi    r4, r3, -29792
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29792);

label_80A87128:
    ctx->pc = 0x80A87128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87128u)) return;
    // 80A87128: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A87128u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_80A8712C:
    ctx->pc = 0x80A8712Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8712Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A8712C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A8712Cu)) return;
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
label_80A87130:
    ctx->pc = 0x80A87130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87130u)) return;
    // 80A87130: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A87130u)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_80A87134:
    ctx->pc = 0x80A87134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87134u)) return;
    // 80A87134: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80A87138:
    ctx->pc = 0x80A87138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87138u)) return;
    // 80A87138: bl      0x8003A8BC
    {
            ctx->lr = 0x80A8713Cu;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80A8713C:
    ctx->pc = 0x80A8713Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8713Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A8713C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80A87140:
    ctx->pc = 0x80A87140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87140u)) return;
    // 80A87140: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80A87144:
    ctx->pc = 0x80A87144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87144u)) return;
    // 80A87144: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A87148:
    ctx->pc = 0x80A87148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87148u)) return;
    // 80A87148: bl      0x8003768C
    {
            ctx->lr = 0x80A8714Cu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80A8714C:
    ctx->pc = 0x80A8714Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 60u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8714Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 60u : 1u;
    // 80A8714C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A87150:
    ctx->pc = 0x80A87150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87150u)) return;
    // 80A87150: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A87154:
    ctx->pc = 0x80A87154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87154u)) return;
    // 80A87154: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A87158:
    ctx->pc = 0x80A87158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87158u)) return;
    // 80A87158: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A8715C:
    ctx->pc = 0x80A8715Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8715Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80A8715C: lwz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87160:
    ctx->pc = 0x80A87160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87160u)) return;
    // 80A87160: addi    r7, r3, -29736
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-29736);

label_80A87164:
    ctx->pc = 0x80A87164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87164u)) return;
    // 80A87164: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A87168:
    ctx->pc = 0x80A87168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87168u)) return;
    // 80A87168: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A8716C:
    ctx->pc = 0x80A8716Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8716Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80A8716C: stw     r8, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87170:
    ctx->pc = 0x80A87170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87170u)) return;
    // 80A87170: addi    r6, r4, -29704
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-29704);

label_80A87174:
    ctx->pc = 0x80A87174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87174u)) return;
    // 80A87174: addi    r5, r3, -29700
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29700);

label_80A87178:
    ctx->pc = 0x80A87178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87178u)) return;
    // 80A87178: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A8717C:
    ctx->pc = 0x80A8717Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8717Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80A8717C: stw     r0, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87180:
    ctx->pc = 0x80A87180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87180u)) return;
    // 80A87180: addi    r4, r3, -29800
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29800);

label_80A87184:
    ctx->pc = 0x80A87184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80A87184: lfd     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A87184u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87188:
    ctx->pc = 0x80A87188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87188u)) return;
    // 80A87188: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80A8718C:
    ctx->pc = 0x80A8718Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8718Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80A8718C: lfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8718Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87190:
    ctx->pc = 0x80A87190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80A87190: stw     r8, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87194:
    ctx->pc = 0x80A87194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87194u)) return;
    // 80A87194: fsubs   f3, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80A87194u)) return;
    ppc_fsubs(ctx, 3, 0, 4);

label_80A87198:
    ctx->pc = 0x80A87198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80A87198: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A87198u)) return;
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
label_80A8719C:
    ctx->pc = 0x80A8719Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8719Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80A8719C: stw     r0, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A871A0:
    ctx->pc = 0x80A871A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80A871A0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A871A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80A871A4:
    ctx->pc = 0x80A871A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80A871A4: lfd     f2, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A871A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A871A8:
    ctx->pc = 0x80A871A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A871A8u)) return;
    // 80A871A8: fdivs   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80A871A8u)) return;
    ppc_fdivs(ctx, 1, 3, 1);

label_80A871AC:
    ctx->pc = 0x80A871ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A871AC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A871ACu)) return;
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
label_80A871B0:
    ctx->pc = 0x80A871B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871B0u)) return;
    // 80A871B0: fsubs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x80A871B0u)) return;
    ppc_fsubs(ctx, 2, 2, 4);

label_80A871B4:
    ctx->pc = 0x80A871B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A871B4u)) return;
    // 80A871B4: fdivs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A871B4u)) return;
    ppc_fdivs(ctx, 2, 2, 0);

label_80A871B8:
    ctx->pc = 0x80A871B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871B8u)) return;
    // 80A871B8: bl      0x8003A888
    {
            ctx->lr = 0x80A871BCu;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80A871BC:
    ctx->pc = 0x80A871BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A871BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A871BC: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A871C0:
    ctx->pc = 0x80A871C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A871C0: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A871C0u)) return;
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
label_80A871C4:
    ctx->pc = 0x80A871C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A871C4: lfs     f2, -29696(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A871C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29696);
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
label_80A871C8:
    ctx->pc = 0x80A871C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871C8u)) return;
    // 80A871C8: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A871CC:
    ctx->pc = 0x80A871CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A871CC: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A871CCu)) return;
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
label_80A871D0:
    ctx->pc = 0x80A871D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871D0u)) return;
    // 80A871D0: addi    r4, r3, -29792
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29792);

label_80A871D4:
    ctx->pc = 0x80A871D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871D4u)) return;
    // 80A871D4: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A871D4u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_80A871D8:
    ctx->pc = 0x80A871D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A871D8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A871D8u)) return;
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
label_80A871DC:
    ctx->pc = 0x80A871DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871DCu)) return;
    // 80A871DC: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A871DCu)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_80A871E0:
    ctx->pc = 0x80A871E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871E0u)) return;
    // 80A871E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80A871E4:
    ctx->pc = 0x80A871E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871E4u)) return;
    // 80A871E4: bl      0x8003A8BC
    {
            ctx->lr = 0x80A871E8u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80A871E8:
    ctx->pc = 0x80A871E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A871E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A871E8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80A871EC:
    ctx->pc = 0x80A871ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871ECu)) return;
    // 80A871EC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80A871F0:
    ctx->pc = 0x80A871F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871F0u)) return;
    // 80A871F0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A871F4:
    ctx->pc = 0x80A871F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871F4u)) return;
    // 80A871F4: bl      0x8003A434
    {
            ctx->lr = 0x80A871F8u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A871F8:
    ctx->pc = 0x80A871F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A871F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A871F8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80A871FC:
    ctx->pc = 0x80A871FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A871FCu)) return;
    // 80A871FC: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80A87200:
    ctx->pc = 0x80A87200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87200u)) return;
    // 80A87200: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A87204:
    ctx->pc = 0x80A87204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87204u)) return;
    // 80A87204: bl      0x8003768C
    {
            ctx->lr = 0x80A87208u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80A87208:
    ctx->pc = 0x80A87208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    // 80A87208: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A8720C:
    ctx->pc = 0x80A8720Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8720Cu)) return;
    // 80A8720C: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_80A87210:
    ctx->pc = 0x80A87210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87210u)) return;
    // 80A87210: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A87214:
    ctx->pc = 0x80A87214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87214u)) return;
    // 80A87214: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A87218:
    ctx->pc = 0x80A87218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A87218: lwz     r0, 0(r4)
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
label_80A8721C:
    ctx->pc = 0x80A8721Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8721Cu)) return;
    // 80A8721C: addi    r6, r3, -29736
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-29736);

label_80A87220:
    ctx->pc = 0x80A87220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87220u)) return;
    // 80A87220: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A87224:
    ctx->pc = 0x80A87224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A87224: stw     r5, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87228:
    ctx->pc = 0x80A87228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87228u)) return;
    // 80A87228: rlwinm r4, r0, 18, 14, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 18u) & 0x0003FFFFu;
    }

label_80A8722C:
    ctx->pc = 0x80A8722Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8722Cu)) return;
    // 80A8722C: rlwinm r0, r0, 19, 13, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 19u) & 0x0007FFFFu;
    }

label_80A87230:
    ctx->pc = 0x80A87230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A87230: stw     r4, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87234:
    ctx->pc = 0x80A87234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87234u)) return;
    // 80A87234: addi    r4, r3, -29800
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29800);

label_80A87238:
    ctx->pc = 0x80A87238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A87238: lfd     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A87238u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A8723C:
    ctx->pc = 0x80A8723Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8723Cu)) return;
    // 80A8723C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80A87240:
    ctx->pc = 0x80A87240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A87240: lfd     f0, 264(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87244:
    ctx->pc = 0x80A87244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A87244: stw     r0, 276(r1)
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
label_80A87248:
    ctx->pc = 0x80A87248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87248u)) return;
    // 80A87248: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A87248u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_80A8724C:
    ctx->pc = 0x80A8724Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8724Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A8724C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A8724Cu)) return;
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
label_80A87250:
    ctx->pc = 0x80A87250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A87250: stw     r5, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87254:
    ctx->pc = 0x80A87254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A87254: lfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87254u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87258:
    ctx->pc = 0x80A87258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87258u)) return;
    // 80A87258: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A87258u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_80A8725C:
    ctx->pc = 0x80A8725Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8725Cu)) return;
    // 80A8725C: bl      0x8003A888
    {
            ctx->lr = 0x80A87260u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80A87260:
    ctx->pc = 0x80A87260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A87260: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A87264:
    ctx->pc = 0x80A87264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A87264: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87264u)) return;
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
label_80A87268:
    ctx->pc = 0x80A87268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A87268: lfs     f2, -29692(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A87268u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29692);
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
label_80A8726C:
    ctx->pc = 0x80A8726Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8726Cu)) return;
    // 80A8726C: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A87270:
    ctx->pc = 0x80A87270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A87270: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87270u)) return;
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
label_80A87274:
    ctx->pc = 0x80A87274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87274u)) return;
    // 80A87274: addi    r4, r3, -29792
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29792);

label_80A87278:
    ctx->pc = 0x80A87278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87278u)) return;
    // 80A87278: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A87278u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_80A8727C:
    ctx->pc = 0x80A8727Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8727Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A8727C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A8727Cu)) return;
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
label_80A87280:
    ctx->pc = 0x80A87280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87280u)) return;
    // 80A87280: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A87280u)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_80A87284:
    ctx->pc = 0x80A87284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87284u)) return;
    // 80A87284: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80A87288:
    ctx->pc = 0x80A87288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87288u)) return;
    // 80A87288: bl      0x8003A8BC
    {
            ctx->lr = 0x80A8728Cu;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80A8728C:
    ctx->pc = 0x80A8728Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8728Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A8728C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80A87290:
    ctx->pc = 0x80A87290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87290u)) return;
    // 80A87290: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80A87294:
    ctx->pc = 0x80A87294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87294u)) return;
    // 80A87294: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80A87298:
    ctx->pc = 0x80A87298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87298u)) return;
    // 80A87298: bl      0x8003A434
    {
            ctx->lr = 0x80A8729Cu;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A8729C:
    ctx->pc = 0x80A8729Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8729Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A8729C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80A872A0:
    ctx->pc = 0x80A872A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872A0u)) return;
    // 80A872A0: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_80A872A4:
    ctx->pc = 0x80A872A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872A4u)) return;
    // 80A872A4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A872A8:
    ctx->pc = 0x80A872A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872A8u)) return;
    // 80A872A8: bl      0x8003768C
    {
            ctx->lr = 0x80A872ACu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80A872AC:
    ctx->pc = 0x80A872ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A872ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80A872AC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A872B0:
    ctx->pc = 0x80A872B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872B0u)) return;
    // 80A872B0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A872B4:
    ctx->pc = 0x80A872B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872B4u)) return;
    // 80A872B4: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A872B8:
    ctx->pc = 0x80A872B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872B8u)) return;
    // 80A872B8: lis     r5, -27656
    ctx->gpr[5] = ((u32)(s32)(-27656) << 16);

label_80A872BC:
    ctx->pc = 0x80A872BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A872BC: lwz     r4, 0(r4)
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
label_80A872C0:
    ctx->pc = 0x80A872C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872C0u)) return;
    // 80A872C0: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A872C4:
    ctx->pc = 0x80A872C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A872C4: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A872C8:
    ctx->pc = 0x80A872C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872C8u)) return;
    // 80A872C8: rlwinm r0, r4, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 6u) & 0xFFFFFFC0u;
    }

label_80A872CC:
    ctx->pc = 0x80A872CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A872CC: lfd     f1, -29736(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A872CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29736);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A872D0:
    ctx->pc = 0x80A872D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A872D0: stw     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A872D4:
    ctx->pc = 0x80A872D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A872D4: lfd     f2, -29752(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A872D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29752);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A872D8:
    ctx->pc = 0x80A872D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A872D8: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A872D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A872DC:
    ctx->pc = 0x80A872DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872DCu)) return;
    // 80A872DC: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A872DCu)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80A872E0:
    ctx->pc = 0x80A872E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872E0u)) return;
    // 80A872E0: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A872E0u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80A872E4:
    ctx->pc = 0x80A872E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872E4u)) return;
    // 80A872E4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A872E4u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A872E8:
    ctx->pc = 0x80A872E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872E8u)) return;
    // 80A872E8: bl      0x80014034
    {
            ctx->lr = 0x80A872ECu;
            ctx->pc = 0x80014034u;
            return;
    }

label_80A872EC:
    ctx->pc = 0x80A872ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 54u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A872ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 54u : 1u;
    // 80A872EC: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A872F0:
    ctx->pc = 0x80A872F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872F0u)) return;
    // 80A872F0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A872F0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A872F4:
    ctx->pc = 0x80A872F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80A872F4: lfs     f0, -29688(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A872F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29688);
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
label_80A872F8:
    ctx->pc = 0x80A872F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872F8u)) return;
    // 80A872F8: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A872FC:
    ctx->pc = 0x80A872FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A872FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80A872FC: lfs     f2, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A872FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80A87300:
    ctx->pc = 0x80A87300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87300u)) return;
    // 80A87300: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A87304:
    ctx->pc = 0x80A87304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87304u)) return;
    // 80A87304: fmuls   f3, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A87304u)) return;
    ppc_fmuls(ctx, 3, 0, 1);

label_80A87308:
    ctx->pc = 0x80A87308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80A87308: lfs     f1, -29800(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A87308u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29800);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A8730C:
    ctx->pc = 0x80A8730Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8730Cu)) return;
    // 80A8730C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80A87310:
    ctx->pc = 0x80A87310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80A87310: lfs     f0, -29792(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A87310u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29792);
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
label_80A87314:
    ctx->pc = 0x80A87314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87314u)) return;
    // 80A87314: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_80A87318:
    ctx->pc = 0x80A87318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87318u)) return;
    // 80A87318: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A87318u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80A8731C:
    ctx->pc = 0x80A8731Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8731Cu)) return;
    // 80A8731C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A87320:
    ctx->pc = 0x80A87320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80A87320: stfs     f2, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87320u)) return;
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
label_80A87324:
    ctx->pc = 0x80A87324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80A87324: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87324u)) return;
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
label_80A87328:
    ctx->pc = 0x80A87328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87328u)) return;
    // 80A87328: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A87328u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80A8732C:
    ctx->pc = 0x80A8732Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8732Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80A8732C: stfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8732Cu)) return;
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
label_80A87330:
    ctx->pc = 0x80A87330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80A87330: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87330u)) return;
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
label_80A87334:
    ctx->pc = 0x80A87334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87334u)) return;
    // 80A87334: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A87334u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80A87338:
    ctx->pc = 0x80A87338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80A87338: stfs     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87338u)) return;
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
label_80A8733C:
    ctx->pc = 0x80A8733Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8733Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80A8733C: lfs     f2, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A8733Cu)) return;
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
label_80A87340:
    ctx->pc = 0x80A87340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87340u)) return;
    // 80A87340: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A87340u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80A87344:
    ctx->pc = 0x80A87344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A87344: stfs     f2, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87348:
    ctx->pc = 0x80A87348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A87348: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87348u)) return;
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
label_80A8734C:
    ctx->pc = 0x80A8734Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8734Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A8734C: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8734Cu)) return;
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
label_80A87350:
    ctx->pc = 0x80A87350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A87350: stfs     f2, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87350u)) return;
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
label_80A87354:
    ctx->pc = 0x80A87354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A87354: lfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87354u)) return;
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
label_80A87358:
    ctx->pc = 0x80A87358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A87358: stfs     f2, 228(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A8735C:
    ctx->pc = 0x80A8735Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8735Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A8735C: stfs     f2, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8735Cu)) return;
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
label_80A87360:
    ctx->pc = 0x80A87360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A87360: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87360u)) return;
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
label_80A87364:
    ctx->pc = 0x80A87364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87364u)) return;
    // 80A87364: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A87364u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80A87368:
    ctx->pc = 0x80A87368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A87368: stfs     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87368u)) return;
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
label_80A8736C:
    ctx->pc = 0x80A8736Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8736Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A8736C: lfs     f2, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A8736Cu)) return;
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
label_80A87370:
    ctx->pc = 0x80A87370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87370u)) return;
    // 80A87370: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A87370u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80A87374:
    ctx->pc = 0x80A87374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A87374: stfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87374u)) return;
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
label_80A87378:
    ctx->pc = 0x80A87378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A87378: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87378u)) return;
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
label_80A8737C:
    ctx->pc = 0x80A8737Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8737Cu)) return;
    // 80A8737C: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A8737Cu)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80A87380:
    ctx->pc = 0x80A87380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A87380: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87380u)) return;
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
label_80A87384:
    ctx->pc = 0x80A87384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A87384: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87384u)) return;
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
label_80A87388:
    ctx->pc = 0x80A87388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87388u)) return;
    // 80A87388: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A87388u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80A8738C:
    ctx->pc = 0x80A8738Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8738Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A8738C: stfs     f1, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8738Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87390:
    ctx->pc = 0x80A87390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A87390: stfs     f1, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87390u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87394:
    ctx->pc = 0x80A87394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A87394: stfs     f2, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87398:
    ctx->pc = 0x80A87398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A87398: stfs     f1, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87398u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A8739C:
    ctx->pc = 0x80A8739Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8739Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A8739C: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8739Cu)) return;
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
label_80A873A0:
    ctx->pc = 0x80A873A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A873A0: stfs     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A873A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A873A4:
    ctx->pc = 0x80A873A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A873A4: stfs     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A873A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A873A8:
    ctx->pc = 0x80A873A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A873A8: stfs     f0, 236(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A873A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A873AC:
    ctx->pc = 0x80A873ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A873AC: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A873ACu)) return;
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
label_80A873B0:
    ctx->pc = 0x80A873B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A873B0: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A873B4:
    ctx->pc = 0x80A873B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A873B4: stw     r0, 220(r1)
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
label_80A873B8:
    ctx->pc = 0x80A873B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A873B8: stw     r0, 196(r1)
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
label_80A873BC:
    ctx->pc = 0x80A873BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A873BC: stw     r0, 172(r1)
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
label_80A873C0:
    ctx->pc = 0x80A873C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873C0u)) return;
    // 80A873C0: bl      0x80050070
    {
            ctx->lr = 0x80A873C4u;
            ctx->pc = 0x80050070u;
            return;
    }

label_80A873C4:
    ctx->pc = 0x80A873C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A873C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A873C4: bl      0x80050050
    {
            ctx->lr = 0x80A873C8u;
            ctx->pc = 0x80050050u;
            return;
    }

label_80A873C8:
    ctx->pc = 0x80A873C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A873C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A873C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A873CC:
    ctx->pc = 0x80A873CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873CCu)) return;
    // 80A873CC: bl      0x8004B504
    {
            ctx->lr = 0x80A873D0u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A873D0:
    ctx->pc = 0x80A873D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A873D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A873D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A873D4:
    ctx->pc = 0x80A873D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873D4u)) return;
    // 80A873D4: bl      0x80036C00
    {
            ctx->lr = 0x80A873D8u;
            ctx->pc = 0x80036C00u;
            return;
    }

label_80A873D8:
    ctx->pc = 0x80A873D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A873D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A873D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A873DC:
    ctx->pc = 0x80A873DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873DCu)) return;
    // 80A873DC: bl      0x800336E8
    {
            ctx->lr = 0x80A873E0u;
            ctx->pc = 0x800336E8u;
            return;
    }

label_80A873E0:
    ctx->pc = 0x80A873E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A873E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A873E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A873E4:
    ctx->pc = 0x80A873E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873E4u)) return;
    // 80A873E4: bl      0x8004B504
    {
            ctx->lr = 0x80A873E8u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A873E8:
    ctx->pc = 0x80A873E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A873E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A873E8: bl      0x8046C930
    {
            ctx->lr = 0x80A873ECu;
            ctx->pc = 0x8046C930u;
            return;
    }

label_80A873EC:
    ctx->pc = 0x80A873ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A873ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A873EC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A873F0:
    ctx->pc = 0x80A873F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A873F0: lfsu     f1, -25500(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A873F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25500);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[3] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A873F4:
    ctx->pc = 0x80A873F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A873F4: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A873F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80A873F8:
    ctx->pc = 0x80A873F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A873F8u)) return;
    // 80A873F8: bl      0x8060F438
    {
            ctx->lr = 0x80A873FCu;
            ctx->pc = 0x8060F438u;
            return;
    }

label_80A873FC:
    ctx->pc = 0x80A873FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A873FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A873FC: lwz     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87400:
    ctx->pc = 0x80A87400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A87400: lwz     r31, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87404:
    ctx->pc = 0x80A87404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A87404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A87404: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87408:
    ctx->pc = 0x80A87408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87408u)) return;
    // 80A87408: addi    r1, r1, 304
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(304);

label_80A8740C:
    ctx->pc = 0x80A8740Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8740Cu)) return;
    // 80A8740C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A86860;
        }
    }

label_80A87410:
    ctx->pc = 0x80A87410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A87410: stwu     r1, -272(r1)
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
label_80A87414:
    ctx->pc = 0x80A87414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A87414: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87418:
    ctx->pc = 0x80A87418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A87418: stw     r0, 276(r1)
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
label_80A8741C:
    ctx->pc = 0x80A8741Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8741Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A8741C: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8741Cu)) return;
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
label_80A87420:
    ctx->pc = 0x80A87420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A87420: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A87420u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80A87420u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87424:
    ctx->pc = 0x80A87424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A87424: stw     r31, 252(r1)
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
label_80A87428:
    ctx->pc = 0x80A87428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87428u)) return;
    // 80A87428: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A8742C:
    ctx->pc = 0x80A8742Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8742Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A8742C: lfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A8742Cu)) return;
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
label_80A87430:
    ctx->pc = 0x80A87430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A87430: lfs     f0, -29800(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A87430u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29800);
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
label_80A87434:
    ctx->pc = 0x80A87434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87434u)) return;
    // 80A87434: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A87438:
    ctx->pc = 0x80A87438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A87438: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87438u)) return;
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
label_80A8743C:
    ctx->pc = 0x80A8743Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8743Cu)) return;
    // 80A8743C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80A87440:
    ctx->pc = 0x80A87440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87440u)) return;
    // 80A87440: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A87444:
    ctx->pc = 0x80A87444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87444u)) return;
    // 80A87444: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A87448:
    ctx->pc = 0x80A87448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A87448: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87448u)) return;
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
label_80A8744C:
    ctx->pc = 0x80A8744Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8744Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A8744C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8744Cu)) return;
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
label_80A87450:
    ctx->pc = 0x80A87450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A87450: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87450u)) return;
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
label_80A87454:
    ctx->pc = 0x80A87454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A87454: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87454u)) return;
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
label_80A87458:
    ctx->pc = 0x80A87458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A87458: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87458u)) return;
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
label_80A8745C:
    ctx->pc = 0x80A8745Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8745Cu)) return;
    // 80A8745C: bl      0x80035FF4
    {
            ctx->lr = 0x80A87460u;
            ctx->pc = 0x80035FF4u;
            return;
    }

label_80A87460:
    ctx->pc = 0x80A87460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80A87460: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A87464:
    ctx->pc = 0x80A87464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87464u)) return;
    // 80A87464: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A87468:
    ctx->pc = 0x80A87468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87468u)) return;
    // 80A87468: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A8746C:
    ctx->pc = 0x80A8746Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8746Cu)) return;
    // 80A8746C: lis     r6, -27656
    ctx->gpr[6] = ((u32)(s32)(-27656) << 16);

label_80A87470:
    ctx->pc = 0x80A87470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A87470: lwz     r5, 0(r4)
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
label_80A87474:
    ctx->pc = 0x80A87474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87474u)) return;
    // 80A87474: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A87478:
    ctx->pc = 0x80A87478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A87478: lbz     r4, 56(r31)
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
label_80A8747C:
    ctx->pc = 0x80A8747Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8747Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A8747C: stw     r0, 224(r1)
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
label_80A87480:
    ctx->pc = 0x80A87480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87480u)) return;
    // 80A87480: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A87484:
    ctx->pc = 0x80A87484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A87484: lfd     f1, -29736(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A87484u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29736);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87488:
    ctx->pc = 0x80A87488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A87488: stw     r0, 228(r1)
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
label_80A8748C:
    ctx->pc = 0x80A8748Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8748Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A8748C: lfd     f2, -29752(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A8748Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-29752);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87490:
    ctx->pc = 0x80A87490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A87490: lfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87490u)) return;
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
label_80A87494:
    ctx->pc = 0x80A87494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87494u)) return;
    // 80A87494: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A87494u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80A87498:
    ctx->pc = 0x80A87498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87498u)) return;
    // 80A87498: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A87498u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80A8749C:
    ctx->pc = 0x80A8749Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8749Cu)) return;
    // 80A8749C: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A8749Cu)) return;
    ppc_frsp(ctx, 1, 1);

label_80A874A0:
    ctx->pc = 0x80A874A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874A0u)) return;
    // 80A874A0: bl      0x80014034
    {
            ctx->lr = 0x80A874A4u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80A874A4:
    ctx->pc = 0x80A874A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A874A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80A874A4: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A874A8:
    ctx->pc = 0x80A874A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874A8u)) return;
    // 80A874A8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A874AC:
    ctx->pc = 0x80A874ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874ACu)) return;
    // 80A874AC: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A874B0:
    ctx->pc = 0x80A874B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A874B0: stw     r0, 232(r1)
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
label_80A874B4:
    ctx->pc = 0x80A874B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A874B4: lwz     r5, 0(r4)
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
label_80A874B8:
    ctx->pc = 0x80A874B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874B8u)) return;
    // 80A874B8: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A874BC:
    ctx->pc = 0x80A874BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A874BC: lbz     r4, 56(r31)
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
label_80A874C0:
    ctx->pc = 0x80A874C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874C0u)) return;
    // 80A874C0: lis     r6, -27656
    ctx->gpr[6] = ((u32)(s32)(-27656) << 16);

label_80A874C4:
    ctx->pc = 0x80A874C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874C4u)) return;
    // 80A874C4: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80A874C4u)) return;
    ppc_frsp(ctx, 31, 1);

label_80A874C8:
    ctx->pc = 0x80A874C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A874C8: lfd     f2, -29736(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A874C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29736);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A874CC:
    ctx->pc = 0x80A874CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874CCu)) return;
    // 80A874CC: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A874D0:
    ctx->pc = 0x80A874D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A874D0: lfd     f1, -29752(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A874D0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-29752);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A874D4:
    ctx->pc = 0x80A874D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A874D4: stw     r0, 236(r1)
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
label_80A874D8:
    ctx->pc = 0x80A874D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A874D8: lfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A874D8u)) return;
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
label_80A874DC:
    ctx->pc = 0x80A874DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874DCu)) return;
    // 80A874DC: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A874DCu)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_80A874E0:
    ctx->pc = 0x80A874E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874E0u)) return;
    // 80A874E0: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A874E0u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80A874E4:
    ctx->pc = 0x80A874E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874E4u)) return;
    // 80A874E4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A874E4u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A874E8:
    ctx->pc = 0x80A874E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874E8u)) return;
    // 80A874E8: bl      0x80013948
    {
            ctx->lr = 0x80A874ECu;
            ctx->pc = 0x80013948u;
            return;
    }

label_80A874EC:
    ctx->pc = 0x80A874ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A874ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A874EC: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A874F0:
    ctx->pc = 0x80A874F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874F0u)) return;
    // 80A874F0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A874F0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A874F4:
    ctx->pc = 0x80A874F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A874F4: lfs     f3, -29800(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A874F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29800);
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
label_80A874F8:
    ctx->pc = 0x80A874F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874F8u)) return;
    // 80A874F8: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80A874F8u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80A874FC:
    ctx->pc = 0x80A874FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A874FCu)) return;
    // 80A874FC: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A87500:
    ctx->pc = 0x80A87500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87500u)) return;
    // 80A87500: bl      0x8003A888
    {
            ctx->lr = 0x80A87504u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80A87504:
    ctx->pc = 0x80A87504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A87504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A87504: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87504u)) return;
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
label_80A87508:
    ctx->pc = 0x80A87508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87508u)) return;
    // 80A87508: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A8750C:
    ctx->pc = 0x80A8750Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8750Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A8750C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A8750Cu)) return;
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
label_80A87510:
    ctx->pc = 0x80A87510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87510u)) return;
    // 80A87510: addi    r4, r3, -29800
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29800);

label_80A87514:
    ctx->pc = 0x80A87514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A87514: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87514u)) return;
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
label_80A87518:
    ctx->pc = 0x80A87518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87518u)) return;
    // 80A87518: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A8751C:
    ctx->pc = 0x80A8751Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8751Cu)) return;
    // 80A8751C: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A8751Cu)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80A87520:
    ctx->pc = 0x80A87520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A87520: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A87520u)) return;
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
label_80A87524:
    ctx->pc = 0x80A87524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87524u)) return;
    // 80A87524: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A87524u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_80A87528:
    ctx->pc = 0x80A87528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87528u)) return;
    // 80A87528: bl      0x8003A8BC
    {
            ctx->lr = 0x80A8752Cu;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80A8752C:
    ctx->pc = 0x80A8752Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8752Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A8752C: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A87530:
    ctx->pc = 0x80A87530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87530u)) return;
    // 80A87530: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80A87534:
    ctx->pc = 0x80A87534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87534u)) return;
    // 80A87534: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A87538:
    ctx->pc = 0x80A87538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87538u)) return;
    // 80A87538: bl      0x8003A434
    {
            ctx->lr = 0x80A8753Cu;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A8753C:
    ctx->pc = 0x80A8753Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8753Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A8753C: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A87540:
    ctx->pc = 0x80A87540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87540u)) return;
    // 80A87540: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80A87544:
    ctx->pc = 0x80A87544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87544u)) return;
    // 80A87544: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A87548:
    ctx->pc = 0x80A87548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87548u)) return;
    // 80A87548: bl      0x8003768C
    {
            ctx->lr = 0x80A8754Cu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80A8754C:
    ctx->pc = 0x80A8754Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 44u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A8754Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 44u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80A8754C: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A8754Cu)) return;
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
label_80A87550:
    ctx->pc = 0x80A87550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87550u)) return;
    // 80A87550: lis     r4, -27656
    ctx->gpr[4] = ((u32)(s32)(-27656) << 16);

label_80A87554:
    ctx->pc = 0x80A87554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87554u)) return;
    // 80A87554: lis     r3, -27656
    ctx->gpr[3] = ((u32)(s32)(-27656) << 16);

label_80A87558:
    ctx->pc = 0x80A87558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87558u)) return;
    // 80A87558: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80A8755C:
    ctx->pc = 0x80A8755Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8755Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80A8755C: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8755Cu)) return;
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
label_80A87560:
    ctx->pc = 0x80A87560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87560u)) return;
    // 80A87560: addi    r5, r4, -29800
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-29800);

label_80A87564:
    ctx->pc = 0x80A87564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87564u)) return;
    // 80A87564: addi    r4, r3, -29792
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29792);

label_80A87568:
    ctx->pc = 0x80A87568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80A87568: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A87568u)) return;
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
label_80A8756C:
    ctx->pc = 0x80A8756Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8756Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80A8756C: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A8756Cu)) return;
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
label_80A87570:
    ctx->pc = 0x80A87570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87570u)) return;
    // 80A87570: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_80A87574:
    ctx->pc = 0x80A87574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80A87574: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A87574u)) return;
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
label_80A87578:
    ctx->pc = 0x80A87578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87578u)) return;
    // 80A87578: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A8757C:
    ctx->pc = 0x80A8757Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8757Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A8757C: stfs     f2, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8757Cu)) return;
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
label_80A87580:
    ctx->pc = 0x80A87580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A87580: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87580u)) return;
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
label_80A87584:
    ctx->pc = 0x80A87584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A87584: stfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87584u)) return;
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
label_80A87588:
    ctx->pc = 0x80A87588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A87588: lfs     f2, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87588u)) return;
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
label_80A8758C:
    ctx->pc = 0x80A8758Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8758Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A8758C: stfs     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A8758Cu)) return;
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
label_80A87590:
    ctx->pc = 0x80A87590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A87590: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A87590u)) return;
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
label_80A87594:
    ctx->pc = 0x80A87594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A87594: stfs     f2, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87594u)) return;
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
label_80A87598:
    ctx->pc = 0x80A87598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A87598: stfs     f2, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87598u)) return;
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
label_80A8759C:
    ctx->pc = 0x80A8759Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A8759Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A8759C: lfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A8759Cu)) return;
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
label_80A875A0:
    ctx->pc = 0x80A875A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A875A0: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875A0u)) return;
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
label_80A875A4:
    ctx->pc = 0x80A875A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A875A4: stfs     f2, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875A4u)) return;
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
label_80A875A8:
    ctx->pc = 0x80A875A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A875A8: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A875A8u)) return;
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
label_80A875AC:
    ctx->pc = 0x80A875ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A875AC: stfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875ACu)) return;
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
label_80A875B0:
    ctx->pc = 0x80A875B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A875B0: lfs     f2, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A875B0u)) return;
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
label_80A875B4:
    ctx->pc = 0x80A875B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A875B4: stfs     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875B4u)) return;
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
label_80A875B8:
    ctx->pc = 0x80A875B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A875B8: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A875B8u)) return;
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
label_80A875BC:
    ctx->pc = 0x80A875BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A875BC: stfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875BCu)) return;
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
label_80A875C0:
    ctx->pc = 0x80A875C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A875C0: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A875C0u)) return;
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
label_80A875C4:
    ctx->pc = 0x80A875C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A875C4: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875C4u)) return;
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
label_80A875C8:
    ctx->pc = 0x80A875C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A875C8: stfs     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875C8u)) return;
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
label_80A875CC:
    ctx->pc = 0x80A875CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A875CC: stfs     f1, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875CCu)) return;
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
label_80A875D0:
    ctx->pc = 0x80A875D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A875D0: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875D0u)) return;
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
label_80A875D4:
    ctx->pc = 0x80A875D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A875D4: stfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875D4u)) return;
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
label_80A875D8:
    ctx->pc = 0x80A875D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A875D8: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875D8u)) return;
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
label_80A875DC:
    ctx->pc = 0x80A875DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A875DC: stfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875DCu)) return;
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
label_80A875E0:
    ctx->pc = 0x80A875E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A875E0: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875E0u)) return;
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
label_80A875E4:
    ctx->pc = 0x80A875E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A875E4: stfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A875E4u)) return;
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
label_80A875E8:
    ctx->pc = 0x80A875E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A875E8: stw     r0, 220(r1)
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
label_80A875EC:
    ctx->pc = 0x80A875ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A875EC: stw     r0, 196(r1)
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
label_80A875F0:
    ctx->pc = 0x80A875F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A875F0: stw     r0, 172(r1)
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
label_80A875F4:
    ctx->pc = 0x80A875F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A875F4: stw     r0, 148(r1)
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
label_80A875F8:
    ctx->pc = 0x80A875F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A875F8u)) return;
    // 80A875F8: bl      0x80050070
    {
            ctx->lr = 0x80A875FCu;
            ctx->pc = 0x80050070u;
            return;
    }

label_80A875FC:
    ctx->pc = 0x80A875FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A875FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A875FC: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A875FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80A875FCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87600:
    ctx->pc = 0x80A87600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A87600: lwz     r0, 276(r1)
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
label_80A87604:
    ctx->pc = 0x80A87604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A87604: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A87604u)) return;
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
label_80A87608:
    ctx->pc = 0x80A87608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A87608: lwz     r31, 252(r1)
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
label_80A8760C:
    ctx->pc = 0x80A8760Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A8760Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A8760C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A87610:
    ctx->pc = 0x80A87610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87610u)) return;
    // 80A87610: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_80A87614:
    ctx->pc = 0x80A87614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A87614u)) return;
    // 80A87614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A86860;
        }
    }

    ctx->pc = 0x80A87618u;
    return;
return_dispatch_80A86860:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80A868ECu: goto label_80A868EC;
    case 0x80A86904u: goto label_80A86904;
    case 0x80A8691Cu: goto label_80A8691C;
    case 0x80A86934u: goto label_80A86934;
    case 0x80A86974u: goto label_80A86974;
    case 0x80A86978u: goto label_80A86978;
    case 0x80A86980u: goto label_80A86980;
    case 0x80A869A4u: goto label_80A869A4;
    case 0x80A869C4u: goto label_80A869C4;
    case 0x80A869D0u: goto label_80A869D0;
    case 0x80A869D8u: goto label_80A869D8;
    case 0x80A869DCu: goto label_80A869DC;
    case 0x80A869F0u: goto label_80A869F0;
    case 0x80A869F4u: goto label_80A869F4;
    case 0x80A86A7Cu: goto label_80A86A7C;
    case 0x80A86A94u: goto label_80A86A94;
    case 0x80A86A9Cu: goto label_80A86A9C;
    case 0x80A86AA0u: goto label_80A86AA0;
    case 0x80A86AA8u: goto label_80A86AA8;
    case 0x80A86AB0u: goto label_80A86AB0;
    case 0x80A86AB8u: goto label_80A86AB8;
    case 0x80A86AC0u: goto label_80A86AC0;
    case 0x80A86ADCu: goto label_80A86ADC;
    case 0x80A86AF8u: goto label_80A86AF8;
    case 0x80A86B08u: goto label_80A86B08;
    case 0x80A86B20u: goto label_80A86B20;
    case 0x80A86B34u: goto label_80A86B34;
    case 0x80A86B40u: goto label_80A86B40;
    case 0x80A86B50u: goto label_80A86B50;
    case 0x80A86B64u: goto label_80A86B64;
    case 0x80A86BA0u: goto label_80A86BA0;
    case 0x80A86BE8u: goto label_80A86BE8;
    case 0x80A86C30u: goto label_80A86C30;
    case 0x80A86C48u: goto label_80A86C48;
    case 0x80A86C74u: goto label_80A86C74;
    case 0x80A86C84u: goto label_80A86C84;
    case 0x80A86C94u: goto label_80A86C94;
    case 0x80A86D44u: goto label_80A86D44;
    case 0x80A86D48u: goto label_80A86D48;
    case 0x80A86D50u: goto label_80A86D50;
    case 0x80A86D58u: goto label_80A86D58;
    case 0x80A86D5Cu: goto label_80A86D5C;
    case 0x80A86D64u: goto label_80A86D64;
    case 0x80A86D68u: goto label_80A86D68;
    case 0x80A86D78u: goto label_80A86D78;
    case 0x80A86E64u: goto label_80A86E64;
    case 0x80A86E68u: goto label_80A86E68;
    case 0x80A86E70u: goto label_80A86E70;
    case 0x80A86E98u: goto label_80A86E98;
    case 0x80A86EB8u: goto label_80A86EB8;
    case 0x80A86EC4u: goto label_80A86EC4;
    case 0x80A86ED0u: goto label_80A86ED0;
    case 0x80A86EDCu: goto label_80A86EDC;
    case 0x80A86EE4u: goto label_80A86EE4;
    case 0x80A86EECu: goto label_80A86EEC;
    case 0x80A86EF4u: goto label_80A86EF4;
    case 0x80A86EFCu: goto label_80A86EFC;
    case 0x80A86F04u: goto label_80A86F04;
    case 0x80A86F0Cu: goto label_80A86F0C;
    case 0x80A86F20u: goto label_80A86F20;
    case 0x80A86F34u: goto label_80A86F34;
    case 0x80A86F48u: goto label_80A86F48;
    case 0x80A86F60u: goto label_80A86F60;
    case 0x80A86F78u: goto label_80A86F78;
    case 0x80A86F94u: goto label_80A86F94;
    case 0x80A86FB0u: goto label_80A86FB0;
    case 0x80A86FC8u: goto label_80A86FC8;
    case 0x80A86FE0u: goto label_80A86FE0;
    case 0x80A86FFCu: goto label_80A86FFC;
    case 0x80A87018u: goto label_80A87018;
    case 0x80A87030u: goto label_80A87030;
    case 0x80A87048u: goto label_80A87048;
    case 0x80A87064u: goto label_80A87064;
    case 0x80A87080u: goto label_80A87080;
    case 0x80A87094u: goto label_80A87094;
    case 0x80A870A8u: goto label_80A870A8;
    case 0x80A870BCu: goto label_80A870BC;
    case 0x80A870D8u: goto label_80A870D8;
    case 0x80A870F4u: goto label_80A870F4;
    case 0x80A87110u: goto label_80A87110;
    case 0x80A8713Cu: goto label_80A8713C;
    case 0x80A8714Cu: goto label_80A8714C;
    case 0x80A871BCu: goto label_80A871BC;
    case 0x80A871E8u: goto label_80A871E8;
    case 0x80A871F8u: goto label_80A871F8;
    case 0x80A87208u: goto label_80A87208;
    case 0x80A87260u: goto label_80A87260;
    case 0x80A8728Cu: goto label_80A8728C;
    case 0x80A8729Cu: goto label_80A8729C;
    case 0x80A872ACu: goto label_80A872AC;
    case 0x80A872ECu: goto label_80A872EC;
    case 0x80A873C4u: goto label_80A873C4;
    case 0x80A873C8u: goto label_80A873C8;
    case 0x80A873D0u: goto label_80A873D0;
    case 0x80A873D8u: goto label_80A873D8;
    case 0x80A873E0u: goto label_80A873E0;
    case 0x80A873E8u: goto label_80A873E8;
    case 0x80A873ECu: goto label_80A873EC;
    case 0x80A873FCu: goto label_80A873FC;
    case 0x80A87460u: goto label_80A87460;
    case 0x80A874A4u: goto label_80A874A4;
    case 0x80A874ECu: goto label_80A874EC;
    case 0x80A87504u: goto label_80A87504;
    case 0x80A8752Cu: goto label_80A8752C;
    case 0x80A8753Cu: goto label_80A8753C;
    case 0x80A8754Cu: goto label_80A8754C;
    case 0x80A875FCu: goto label_80A875FC;
    default: return;
    }
}

