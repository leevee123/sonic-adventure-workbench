// DolRecomp output
#include "../generated.h"

void func_80D41860(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D41860[1900] = {
        &&label_80D41860,
        &&label_80D41864,
        &&label_80D41868,
        &&label_80D4186C,
        &&label_80D41870,
        &&label_80D41874,
        &&label_80D41878,
        &&label_80D4187C,
        &&label_80D41880,
        &&label_80D41884,
        &&label_80D41888,
        &&label_80D4188C,
        &&label_80D41890,
        &&label_80D41894,
        &&label_80D41898,
        &&label_80D4189C,
        &&label_80D418A0,
        &&label_80D418A4,
        &&label_80D418A8,
        &&label_80D418AC,
        &&label_80D418B0,
        &&label_80D418B4,
        &&label_80D418B8,
        &&label_80D418BC,
        &&label_80D418C0,
        &&label_80D418C4,
        &&label_80D418C8,
        &&label_80D418CC,
        &&label_80D418D0,
        &&label_80D418D4,
        &&label_80D418D8,
        &&label_80D418DC,
        &&label_80D418E0,
        &&label_80D418E4,
        &&label_80D418E8,
        &&label_80D418EC,
        &&label_80D418F0,
        &&label_80D418F4,
        &&label_80D418F8,
        &&label_80D418FC,
        &&label_80D41900,
        &&label_80D41904,
        &&label_80D41908,
        &&label_80D4190C,
        &&label_80D41910,
        &&label_80D41914,
        &&label_80D41918,
        &&label_80D4191C,
        &&label_80D41920,
        &&label_80D41924,
        &&label_80D41928,
        &&label_80D4192C,
        &&label_80D41930,
        &&label_80D41934,
        &&label_80D41938,
        &&label_80D4193C,
        &&label_80D41940,
        &&label_80D41944,
        &&label_80D41948,
        &&label_80D4194C,
        &&label_80D41950,
        &&label_80D41954,
        &&label_80D41958,
        &&label_80D4195C,
        &&label_80D41960,
        &&label_80D41964,
        &&label_80D41968,
        &&label_80D4196C,
        &&label_80D41970,
        &&label_80D41974,
        &&label_80D41978,
        &&label_80D4197C,
        &&label_80D41980,
        &&label_80D41984,
        &&label_80D41988,
        &&label_80D4198C,
        &&label_80D41990,
        &&label_80D41994,
        &&label_80D41998,
        &&label_80D4199C,
        &&label_80D419A0,
        &&label_80D419A4,
        &&label_80D419A8,
        &&label_80D419AC,
        &&label_80D419B0,
        &&label_80D419B4,
        &&label_80D419B8,
        &&label_80D419BC,
        &&label_80D419C0,
        &&label_80D419C4,
        &&label_80D419C8,
        &&label_80D419CC,
        &&label_80D419D0,
        &&label_80D419D4,
        &&label_80D419D8,
        &&label_80D419DC,
        &&label_80D419E0,
        &&label_80D419E4,
        &&label_80D419E8,
        &&label_80D419EC,
        &&label_80D419F0,
        &&label_80D419F4,
        &&label_80D419F8,
        &&label_80D419FC,
        &&label_80D41A00,
        &&label_80D41A04,
        &&label_80D41A08,
        &&label_80D41A0C,
        &&label_80D41A10,
        &&label_80D41A14,
        &&label_80D41A18,
        &&label_80D41A1C,
        &&label_80D41A20,
        &&label_80D41A24,
        &&label_80D41A28,
        &&label_80D41A2C,
        &&label_80D41A30,
        &&label_80D41A34,
        &&label_80D41A38,
        &&label_80D41A3C,
        &&label_80D41A40,
        &&label_80D41A44,
        &&label_80D41A48,
        &&label_80D41A4C,
        &&label_80D41A50,
        &&label_80D41A54,
        &&label_80D41A58,
        &&label_80D41A5C,
        &&label_80D41A60,
        &&label_80D41A64,
        &&label_80D41A68,
        &&label_80D41A6C,
        &&label_80D41A70,
        &&label_80D41A74,
        &&label_80D41A78,
        &&label_80D41A7C,
        &&label_80D41A80,
        &&label_80D41A84,
        &&label_80D41A88,
        &&label_80D41A8C,
        &&label_80D41A90,
        &&label_80D41A94,
        &&label_80D41A98,
        &&label_80D41A9C,
        &&label_80D41AA0,
        &&label_80D41AA4,
        &&label_80D41AA8,
        &&label_80D41AAC,
        &&label_80D41AB0,
        &&label_80D41AB4,
        &&label_80D41AB8,
        &&label_80D41ABC,
        &&label_80D41AC0,
        &&label_80D41AC4,
        &&label_80D41AC8,
        &&label_80D41ACC,
        &&label_80D41AD0,
        &&label_80D41AD4,
        &&label_80D41AD8,
        &&label_80D41ADC,
        &&label_80D41AE0,
        &&label_80D41AE4,
        &&label_80D41AE8,
        &&label_80D41AEC,
        &&label_80D41AF0,
        &&label_80D41AF4,
        &&label_80D41AF8,
        &&label_80D41AFC,
        &&label_80D41B00,
        &&label_80D41B04,
        &&label_80D41B08,
        &&label_80D41B0C,
        &&label_80D41B10,
        &&label_80D41B14,
        &&label_80D41B18,
        &&label_80D41B1C,
        &&label_80D41B20,
        &&label_80D41B24,
        &&label_80D41B28,
        &&label_80D41B2C,
        &&label_80D41B30,
        &&label_80D41B34,
        &&label_80D41B38,
        &&label_80D41B3C,
        &&label_80D41B40,
        &&label_80D41B44,
        &&label_80D41B48,
        &&label_80D41B4C,
        &&label_80D41B50,
        &&label_80D41B54,
        &&label_80D41B58,
        &&label_80D41B5C,
        &&label_80D41B60,
        &&label_80D41B64,
        &&label_80D41B68,
        &&label_80D41B6C,
        &&label_80D41B70,
        &&label_80D41B74,
        &&label_80D41B78,
        &&label_80D41B7C,
        &&label_80D41B80,
        &&label_80D41B84,
        &&label_80D41B88,
        &&label_80D41B8C,
        &&label_80D41B90,
        &&label_80D41B94,
        &&label_80D41B98,
        &&label_80D41B9C,
        &&label_80D41BA0,
        &&label_80D41BA4,
        &&label_80D41BA8,
        &&label_80D41BAC,
        &&label_80D41BB0,
        &&label_80D41BB4,
        &&label_80D41BB8,
        &&label_80D41BBC,
        &&label_80D41BC0,
        &&label_80D41BC4,
        &&label_80D41BC8,
        &&label_80D41BCC,
        &&label_80D41BD0,
        &&label_80D41BD4,
        &&label_80D41BD8,
        &&label_80D41BDC,
        &&label_80D41BE0,
        &&label_80D41BE4,
        &&label_80D41BE8,
        &&label_80D41BEC,
        &&label_80D41BF0,
        &&label_80D41BF4,
        &&label_80D41BF8,
        &&label_80D41BFC,
        &&label_80D41C00,
        &&label_80D41C04,
        &&label_80D41C08,
        &&label_80D41C0C,
        &&label_80D41C10,
        &&label_80D41C14,
        &&label_80D41C18,
        &&label_80D41C1C,
        &&label_80D41C20,
        &&label_80D41C24,
        &&label_80D41C28,
        &&label_80D41C2C,
        &&label_80D41C30,
        &&label_80D41C34,
        &&label_80D41C38,
        &&label_80D41C3C,
        &&label_80D41C40,
        &&label_80D41C44,
        &&label_80D41C48,
        &&label_80D41C4C,
        &&label_80D41C50,
        &&label_80D41C54,
        &&label_80D41C58,
        &&label_80D41C5C,
        &&label_80D41C60,
        &&label_80D41C64,
        &&label_80D41C68,
        &&label_80D41C6C,
        &&label_80D41C70,
        &&label_80D41C74,
        &&label_80D41C78,
        &&label_80D41C7C,
        &&label_80D41C80,
        &&label_80D41C84,
        &&label_80D41C88,
        &&label_80D41C8C,
        &&label_80D41C90,
        &&label_80D41C94,
        &&label_80D41C98,
        &&label_80D41C9C,
        &&label_80D41CA0,
        &&label_80D41CA4,
        &&label_80D41CA8,
        &&label_80D41CAC,
        &&label_80D41CB0,
        &&label_80D41CB4,
        &&label_80D41CB8,
        &&label_80D41CBC,
        &&label_80D41CC0,
        &&label_80D41CC4,
        &&label_80D41CC8,
        &&label_80D41CCC,
        &&label_80D41CD0,
        &&label_80D41CD4,
        &&label_80D41CD8,
        &&label_80D41CDC,
        &&label_80D41CE0,
        &&label_80D41CE4,
        &&label_80D41CE8,
        &&label_80D41CEC,
        &&label_80D41CF0,
        &&label_80D41CF4,
        &&label_80D41CF8,
        &&label_80D41CFC,
        &&label_80D41D00,
        &&label_80D41D04,
        &&label_80D41D08,
        &&label_80D41D0C,
        &&label_80D41D10,
        &&label_80D41D14,
        &&label_80D41D18,
        &&label_80D41D1C,
        &&label_80D41D20,
        &&label_80D41D24,
        &&label_80D41D28,
        &&label_80D41D2C,
        &&label_80D41D30,
        &&label_80D41D34,
        &&label_80D41D38,
        &&label_80D41D3C,
        &&label_80D41D40,
        &&label_80D41D44,
        &&label_80D41D48,
        &&label_80D41D4C,
        &&label_80D41D50,
        &&label_80D41D54,
        &&label_80D41D58,
        &&label_80D41D5C,
        &&label_80D41D60,
        &&label_80D41D64,
        &&label_80D41D68,
        &&label_80D41D6C,
        &&label_80D41D70,
        &&label_80D41D74,
        &&label_80D41D78,
        &&label_80D41D7C,
        &&label_80D41D80,
        &&label_80D41D84,
        &&label_80D41D88,
        &&label_80D41D8C,
        &&label_80D41D90,
        &&label_80D41D94,
        &&label_80D41D98,
        &&label_80D41D9C,
        &&label_80D41DA0,
        &&label_80D41DA4,
        &&label_80D41DA8,
        &&label_80D41DAC,
        &&label_80D41DB0,
        &&label_80D41DB4,
        &&label_80D41DB8,
        &&label_80D41DBC,
        &&label_80D41DC0,
        &&label_80D41DC4,
        &&label_80D41DC8,
        &&label_80D41DCC,
        &&label_80D41DD0,
        &&label_80D41DD4,
        &&label_80D41DD8,
        &&label_80D41DDC,
        &&label_80D41DE0,
        &&label_80D41DE4,
        &&label_80D41DE8,
        &&label_80D41DEC,
        &&label_80D41DF0,
        &&label_80D41DF4,
        &&label_80D41DF8,
        &&label_80D41DFC,
        &&label_80D41E00,
        &&label_80D41E04,
        &&label_80D41E08,
        &&label_80D41E0C,
        &&label_80D41E10,
        &&label_80D41E14,
        &&label_80D41E18,
        &&label_80D41E1C,
        &&label_80D41E20,
        &&label_80D41E24,
        &&label_80D41E28,
        &&label_80D41E2C,
        &&label_80D41E30,
        &&label_80D41E34,
        &&label_80D41E38,
        &&label_80D41E3C,
        &&label_80D41E40,
        &&label_80D41E44,
        &&label_80D41E48,
        &&label_80D41E4C,
        &&label_80D41E50,
        &&label_80D41E54,
        &&label_80D41E58,
        &&label_80D41E5C,
        &&label_80D41E60,
        &&label_80D41E64,
        &&label_80D41E68,
        &&label_80D41E6C,
        &&label_80D41E70,
        &&label_80D41E74,
        &&label_80D41E78,
        &&label_80D41E7C,
        &&label_80D41E80,
        &&label_80D41E84,
        &&label_80D41E88,
        &&label_80D41E8C,
        &&label_80D41E90,
        &&label_80D41E94,
        &&label_80D41E98,
        &&label_80D41E9C,
        &&label_80D41EA0,
        &&label_80D41EA4,
        &&label_80D41EA8,
        &&label_80D41EAC,
        &&label_80D41EB0,
        &&label_80D41EB4,
        &&label_80D41EB8,
        &&label_80D41EBC,
        &&label_80D41EC0,
        &&label_80D41EC4,
        &&label_80D41EC8,
        &&label_80D41ECC,
        &&label_80D41ED0,
        &&label_80D41ED4,
        &&label_80D41ED8,
        &&label_80D41EDC,
        &&label_80D41EE0,
        &&label_80D41EE4,
        &&label_80D41EE8,
        &&label_80D41EEC,
        &&label_80D41EF0,
        &&label_80D41EF4,
        &&label_80D41EF8,
        &&label_80D41EFC,
        &&label_80D41F00,
        &&label_80D41F04,
        &&label_80D41F08,
        &&label_80D41F0C,
        &&label_80D41F10,
        &&label_80D41F14,
        &&label_80D41F18,
        &&label_80D41F1C,
        &&label_80D41F20,
        &&label_80D41F24,
        &&label_80D41F28,
        &&label_80D41F2C,
        &&label_80D41F30,
        &&label_80D41F34,
        &&label_80D41F38,
        &&label_80D41F3C,
        &&label_80D41F40,
        &&label_80D41F44,
        &&label_80D41F48,
        &&label_80D41F4C,
        &&label_80D41F50,
        &&label_80D41F54,
        &&label_80D41F58,
        &&label_80D41F5C,
        &&label_80D41F60,
        &&label_80D41F64,
        &&label_80D41F68,
        &&label_80D41F6C,
        &&label_80D41F70,
        &&label_80D41F74,
        &&label_80D41F78,
        &&label_80D41F7C,
        &&label_80D41F80,
        &&label_80D41F84,
        &&label_80D41F88,
        &&label_80D41F8C,
        &&label_80D41F90,
        &&label_80D41F94,
        &&label_80D41F98,
        &&label_80D41F9C,
        &&label_80D41FA0,
        &&label_80D41FA4,
        &&label_80D41FA8,
        &&label_80D41FAC,
        &&label_80D41FB0,
        &&label_80D41FB4,
        &&label_80D41FB8,
        &&label_80D41FBC,
        &&label_80D41FC0,
        &&label_80D41FC4,
        &&label_80D41FC8,
        &&label_80D41FCC,
        &&label_80D41FD0,
        &&label_80D41FD4,
        &&label_80D41FD8,
        &&label_80D41FDC,
        &&label_80D41FE0,
        &&label_80D41FE4,
        &&label_80D41FE8,
        &&label_80D41FEC,
        &&label_80D41FF0,
        &&label_80D41FF4,
        &&label_80D41FF8,
        &&label_80D41FFC,
        &&label_80D42000,
        &&label_80D42004,
        &&label_80D42008,
        &&label_80D4200C,
        &&label_80D42010,
        &&label_80D42014,
        &&label_80D42018,
        &&label_80D4201C,
        &&label_80D42020,
        &&label_80D42024,
        &&label_80D42028,
        &&label_80D4202C,
        &&label_80D42030,
        &&label_80D42034,
        &&label_80D42038,
        &&label_80D4203C,
        &&label_80D42040,
        &&label_80D42044,
        &&label_80D42048,
        &&label_80D4204C,
        &&label_80D42050,
        &&label_80D42054,
        &&label_80D42058,
        &&label_80D4205C,
        &&label_80D42060,
        &&label_80D42064,
        &&label_80D42068,
        &&label_80D4206C,
        &&label_80D42070,
        &&label_80D42074,
        &&label_80D42078,
        &&label_80D4207C,
        &&label_80D42080,
        &&label_80D42084,
        &&label_80D42088,
        &&label_80D4208C,
        &&label_80D42090,
        &&label_80D42094,
        &&label_80D42098,
        &&label_80D4209C,
        &&label_80D420A0,
        &&label_80D420A4,
        &&label_80D420A8,
        &&label_80D420AC,
        &&label_80D420B0,
        &&label_80D420B4,
        &&label_80D420B8,
        &&label_80D420BC,
        &&label_80D420C0,
        &&label_80D420C4,
        &&label_80D420C8,
        &&label_80D420CC,
        &&label_80D420D0,
        &&label_80D420D4,
        &&label_80D420D8,
        &&label_80D420DC,
        &&label_80D420E0,
        &&label_80D420E4,
        &&label_80D420E8,
        &&label_80D420EC,
        &&label_80D420F0,
        &&label_80D420F4,
        &&label_80D420F8,
        &&label_80D420FC,
        &&label_80D42100,
        &&label_80D42104,
        &&label_80D42108,
        &&label_80D4210C,
        &&label_80D42110,
        &&label_80D42114,
        &&label_80D42118,
        &&label_80D4211C,
        &&label_80D42120,
        &&label_80D42124,
        &&label_80D42128,
        &&label_80D4212C,
        &&label_80D42130,
        &&label_80D42134,
        &&label_80D42138,
        &&label_80D4213C,
        &&label_80D42140,
        &&label_80D42144,
        &&label_80D42148,
        &&label_80D4214C,
        &&label_80D42150,
        &&label_80D42154,
        &&label_80D42158,
        &&label_80D4215C,
        &&label_80D42160,
        &&label_80D42164,
        &&label_80D42168,
        &&label_80D4216C,
        &&label_80D42170,
        &&label_80D42174,
        &&label_80D42178,
        &&label_80D4217C,
        &&label_80D42180,
        &&label_80D42184,
        &&label_80D42188,
        &&label_80D4218C,
        &&label_80D42190,
        &&label_80D42194,
        &&label_80D42198,
        &&label_80D4219C,
        &&label_80D421A0,
        &&label_80D421A4,
        &&label_80D421A8,
        &&label_80D421AC,
        &&label_80D421B0,
        &&label_80D421B4,
        &&label_80D421B8,
        &&label_80D421BC,
        &&label_80D421C0,
        &&label_80D421C4,
        &&label_80D421C8,
        &&label_80D421CC,
        &&label_80D421D0,
        &&label_80D421D4,
        &&label_80D421D8,
        &&label_80D421DC,
        &&label_80D421E0,
        &&label_80D421E4,
        &&label_80D421E8,
        &&label_80D421EC,
        &&label_80D421F0,
        &&label_80D421F4,
        &&label_80D421F8,
        &&label_80D421FC,
        &&label_80D42200,
        &&label_80D42204,
        &&label_80D42208,
        &&label_80D4220C,
        &&label_80D42210,
        &&label_80D42214,
        &&label_80D42218,
        &&label_80D4221C,
        &&label_80D42220,
        &&label_80D42224,
        &&label_80D42228,
        &&label_80D4222C,
        &&label_80D42230,
        &&label_80D42234,
        &&label_80D42238,
        &&label_80D4223C,
        &&label_80D42240,
        &&label_80D42244,
        &&label_80D42248,
        &&label_80D4224C,
        &&label_80D42250,
        &&label_80D42254,
        &&label_80D42258,
        &&label_80D4225C,
        &&label_80D42260,
        &&label_80D42264,
        &&label_80D42268,
        &&label_80D4226C,
        &&label_80D42270,
        &&label_80D42274,
        &&label_80D42278,
        &&label_80D4227C,
        &&label_80D42280,
        &&label_80D42284,
        &&label_80D42288,
        &&label_80D4228C,
        &&label_80D42290,
        &&label_80D42294,
        &&label_80D42298,
        &&label_80D4229C,
        &&label_80D422A0,
        &&label_80D422A4,
        &&label_80D422A8,
        &&label_80D422AC,
        &&label_80D422B0,
        &&label_80D422B4,
        &&label_80D422B8,
        &&label_80D422BC,
        &&label_80D422C0,
        &&label_80D422C4,
        &&label_80D422C8,
        &&label_80D422CC,
        &&label_80D422D0,
        &&label_80D422D4,
        &&label_80D422D8,
        &&label_80D422DC,
        &&label_80D422E0,
        &&label_80D422E4,
        &&label_80D422E8,
        &&label_80D422EC,
        &&label_80D422F0,
        &&label_80D422F4,
        &&label_80D422F8,
        &&label_80D422FC,
        &&label_80D42300,
        &&label_80D42304,
        &&label_80D42308,
        &&label_80D4230C,
        &&label_80D42310,
        &&label_80D42314,
        &&label_80D42318,
        &&label_80D4231C,
        &&label_80D42320,
        &&label_80D42324,
        &&label_80D42328,
        &&label_80D4232C,
        &&label_80D42330,
        &&label_80D42334,
        &&label_80D42338,
        &&label_80D4233C,
        &&label_80D42340,
        &&label_80D42344,
        &&label_80D42348,
        &&label_80D4234C,
        &&label_80D42350,
        &&label_80D42354,
        &&label_80D42358,
        &&label_80D4235C,
        &&label_80D42360,
        &&label_80D42364,
        &&label_80D42368,
        &&label_80D4236C,
        &&label_80D42370,
        &&label_80D42374,
        &&label_80D42378,
        &&label_80D4237C,
        &&label_80D42380,
        &&label_80D42384,
        &&label_80D42388,
        &&label_80D4238C,
        &&label_80D42390,
        &&label_80D42394,
        &&label_80D42398,
        &&label_80D4239C,
        &&label_80D423A0,
        &&label_80D423A4,
        &&label_80D423A8,
        &&label_80D423AC,
        &&label_80D423B0,
        &&label_80D423B4,
        &&label_80D423B8,
        &&label_80D423BC,
        &&label_80D423C0,
        &&label_80D423C4,
        &&label_80D423C8,
        &&label_80D423CC,
        &&label_80D423D0,
        &&label_80D423D4,
        &&label_80D423D8,
        &&label_80D423DC,
        &&label_80D423E0,
        &&label_80D423E4,
        &&label_80D423E8,
        &&label_80D423EC,
        &&label_80D423F0,
        &&label_80D423F4,
        &&label_80D423F8,
        &&label_80D423FC,
        &&label_80D42400,
        &&label_80D42404,
        &&label_80D42408,
        &&label_80D4240C,
        &&label_80D42410,
        &&label_80D42414,
        &&label_80D42418,
        &&label_80D4241C,
        &&label_80D42420,
        &&label_80D42424,
        &&label_80D42428,
        &&label_80D4242C,
        &&label_80D42430,
        &&label_80D42434,
        &&label_80D42438,
        &&label_80D4243C,
        &&label_80D42440,
        &&label_80D42444,
        &&label_80D42448,
        &&label_80D4244C,
        &&label_80D42450,
        &&label_80D42454,
        &&label_80D42458,
        &&label_80D4245C,
        &&label_80D42460,
        &&label_80D42464,
        &&label_80D42468,
        &&label_80D4246C,
        &&label_80D42470,
        &&label_80D42474,
        &&label_80D42478,
        &&label_80D4247C,
        &&label_80D42480,
        &&label_80D42484,
        &&label_80D42488,
        &&label_80D4248C,
        &&label_80D42490,
        &&label_80D42494,
        &&label_80D42498,
        &&label_80D4249C,
        &&label_80D424A0,
        &&label_80D424A4,
        &&label_80D424A8,
        &&label_80D424AC,
        &&label_80D424B0,
        &&label_80D424B4,
        &&label_80D424B8,
        &&label_80D424BC,
        &&label_80D424C0,
        &&label_80D424C4,
        &&label_80D424C8,
        &&label_80D424CC,
        &&label_80D424D0,
        &&label_80D424D4,
        &&label_80D424D8,
        &&label_80D424DC,
        &&label_80D424E0,
        &&label_80D424E4,
        &&label_80D424E8,
        &&label_80D424EC,
        &&label_80D424F0,
        &&label_80D424F4,
        &&label_80D424F8,
        &&label_80D424FC,
        &&label_80D42500,
        &&label_80D42504,
        &&label_80D42508,
        &&label_80D4250C,
        &&label_80D42510,
        &&label_80D42514,
        &&label_80D42518,
        &&label_80D4251C,
        &&label_80D42520,
        &&label_80D42524,
        &&label_80D42528,
        &&label_80D4252C,
        &&label_80D42530,
        &&label_80D42534,
        &&label_80D42538,
        &&label_80D4253C,
        &&label_80D42540,
        &&label_80D42544,
        &&label_80D42548,
        &&label_80D4254C,
        &&label_80D42550,
        &&label_80D42554,
        &&label_80D42558,
        &&label_80D4255C,
        &&label_80D42560,
        &&label_80D42564,
        &&label_80D42568,
        &&label_80D4256C,
        &&label_80D42570,
        &&label_80D42574,
        &&label_80D42578,
        &&label_80D4257C,
        &&label_80D42580,
        &&label_80D42584,
        &&label_80D42588,
        &&label_80D4258C,
        &&label_80D42590,
        &&label_80D42594,
        &&label_80D42598,
        &&label_80D4259C,
        &&label_80D425A0,
        &&label_80D425A4,
        &&label_80D425A8,
        &&label_80D425AC,
        &&label_80D425B0,
        &&label_80D425B4,
        &&label_80D425B8,
        &&label_80D425BC,
        &&label_80D425C0,
        &&label_80D425C4,
        &&label_80D425C8,
        &&label_80D425CC,
        &&label_80D425D0,
        &&label_80D425D4,
        &&label_80D425D8,
        &&label_80D425DC,
        &&label_80D425E0,
        &&label_80D425E4,
        &&label_80D425E8,
        &&label_80D425EC,
        &&label_80D425F0,
        &&label_80D425F4,
        &&label_80D425F8,
        &&label_80D425FC,
        &&label_80D42600,
        &&label_80D42604,
        &&label_80D42608,
        &&label_80D4260C,
        &&label_80D42610,
        &&label_80D42614,
        &&label_80D42618,
        &&label_80D4261C,
        &&label_80D42620,
        &&label_80D42624,
        &&label_80D42628,
        &&label_80D4262C,
        &&label_80D42630,
        &&label_80D42634,
        &&label_80D42638,
        &&label_80D4263C,
        &&label_80D42640,
        &&label_80D42644,
        &&label_80D42648,
        &&label_80D4264C,
        &&label_80D42650,
        &&label_80D42654,
        &&label_80D42658,
        &&label_80D4265C,
        &&label_80D42660,
        &&label_80D42664,
        &&label_80D42668,
        &&label_80D4266C,
        &&label_80D42670,
        &&label_80D42674,
        &&label_80D42678,
        &&label_80D4267C,
        &&label_80D42680,
        &&label_80D42684,
        &&label_80D42688,
        &&label_80D4268C,
        &&label_80D42690,
        &&label_80D42694,
        &&label_80D42698,
        &&label_80D4269C,
        &&label_80D426A0,
        &&label_80D426A4,
        &&label_80D426A8,
        &&label_80D426AC,
        &&label_80D426B0,
        &&label_80D426B4,
        &&label_80D426B8,
        &&label_80D426BC,
        &&label_80D426C0,
        &&label_80D426C4,
        &&label_80D426C8,
        &&label_80D426CC,
        &&label_80D426D0,
        &&label_80D426D4,
        &&label_80D426D8,
        &&label_80D426DC,
        &&label_80D426E0,
        &&label_80D426E4,
        &&label_80D426E8,
        &&label_80D426EC,
        &&label_80D426F0,
        &&label_80D426F4,
        &&label_80D426F8,
        &&label_80D426FC,
        &&label_80D42700,
        &&label_80D42704,
        &&label_80D42708,
        &&label_80D4270C,
        &&label_80D42710,
        &&label_80D42714,
        &&label_80D42718,
        &&label_80D4271C,
        &&label_80D42720,
        &&label_80D42724,
        &&label_80D42728,
        &&label_80D4272C,
        &&label_80D42730,
        &&label_80D42734,
        &&label_80D42738,
        &&label_80D4273C,
        &&label_80D42740,
        &&label_80D42744,
        &&label_80D42748,
        &&label_80D4274C,
        &&label_80D42750,
        &&label_80D42754,
        &&label_80D42758,
        &&label_80D4275C,
        &&label_80D42760,
        &&label_80D42764,
        &&label_80D42768,
        &&label_80D4276C,
        &&label_80D42770,
        &&label_80D42774,
        &&label_80D42778,
        &&label_80D4277C,
        &&label_80D42780,
        &&label_80D42784,
        &&label_80D42788,
        &&label_80D4278C,
        &&label_80D42790,
        &&label_80D42794,
        &&label_80D42798,
        &&label_80D4279C,
        &&label_80D427A0,
        &&label_80D427A4,
        &&label_80D427A8,
        &&label_80D427AC,
        &&label_80D427B0,
        &&label_80D427B4,
        &&label_80D427B8,
        &&label_80D427BC,
        &&label_80D427C0,
        &&label_80D427C4,
        &&label_80D427C8,
        &&label_80D427CC,
        &&label_80D427D0,
        &&label_80D427D4,
        &&label_80D427D8,
        &&label_80D427DC,
        &&label_80D427E0,
        &&label_80D427E4,
        &&label_80D427E8,
        &&label_80D427EC,
        &&label_80D427F0,
        &&label_80D427F4,
        &&label_80D427F8,
        &&label_80D427FC,
        &&label_80D42800,
        &&label_80D42804,
        &&label_80D42808,
        &&label_80D4280C,
        &&label_80D42810,
        &&label_80D42814,
        &&label_80D42818,
        &&label_80D4281C,
        &&label_80D42820,
        &&label_80D42824,
        &&label_80D42828,
        &&label_80D4282C,
        &&label_80D42830,
        &&label_80D42834,
        &&label_80D42838,
        &&label_80D4283C,
        &&label_80D42840,
        &&label_80D42844,
        &&label_80D42848,
        &&label_80D4284C,
        &&label_80D42850,
        &&label_80D42854,
        &&label_80D42858,
        &&label_80D4285C,
        &&label_80D42860,
        &&label_80D42864,
        &&label_80D42868,
        &&label_80D4286C,
        &&label_80D42870,
        &&label_80D42874,
        &&label_80D42878,
        &&label_80D4287C,
        &&label_80D42880,
        &&label_80D42884,
        &&label_80D42888,
        &&label_80D4288C,
        &&label_80D42890,
        &&label_80D42894,
        &&label_80D42898,
        &&label_80D4289C,
        &&label_80D428A0,
        &&label_80D428A4,
        &&label_80D428A8,
        &&label_80D428AC,
        &&label_80D428B0,
        &&label_80D428B4,
        &&label_80D428B8,
        &&label_80D428BC,
        &&label_80D428C0,
        &&label_80D428C4,
        &&label_80D428C8,
        &&label_80D428CC,
        &&label_80D428D0,
        &&label_80D428D4,
        &&label_80D428D8,
        &&label_80D428DC,
        &&label_80D428E0,
        &&label_80D428E4,
        &&label_80D428E8,
        &&label_80D428EC,
        &&label_80D428F0,
        &&label_80D428F4,
        &&label_80D428F8,
        &&label_80D428FC,
        &&label_80D42900,
        &&label_80D42904,
        &&label_80D42908,
        &&label_80D4290C,
        &&label_80D42910,
        &&label_80D42914,
        &&label_80D42918,
        &&label_80D4291C,
        &&label_80D42920,
        &&label_80D42924,
        &&label_80D42928,
        &&label_80D4292C,
        &&label_80D42930,
        &&label_80D42934,
        &&label_80D42938,
        &&label_80D4293C,
        &&label_80D42940,
        &&label_80D42944,
        &&label_80D42948,
        &&label_80D4294C,
        &&label_80D42950,
        &&label_80D42954,
        &&label_80D42958,
        &&label_80D4295C,
        &&label_80D42960,
        &&label_80D42964,
        &&label_80D42968,
        &&label_80D4296C,
        &&label_80D42970,
        &&label_80D42974,
        &&label_80D42978,
        &&label_80D4297C,
        &&label_80D42980,
        &&label_80D42984,
        &&label_80D42988,
        &&label_80D4298C,
        &&label_80D42990,
        &&label_80D42994,
        &&label_80D42998,
        &&label_80D4299C,
        &&label_80D429A0,
        &&label_80D429A4,
        &&label_80D429A8,
        &&label_80D429AC,
        &&label_80D429B0,
        &&label_80D429B4,
        &&label_80D429B8,
        &&label_80D429BC,
        &&label_80D429C0,
        &&label_80D429C4,
        &&label_80D429C8,
        &&label_80D429CC,
        &&label_80D429D0,
        &&label_80D429D4,
        &&label_80D429D8,
        &&label_80D429DC,
        &&label_80D429E0,
        &&label_80D429E4,
        &&label_80D429E8,
        &&label_80D429EC,
        &&label_80D429F0,
        &&label_80D429F4,
        &&label_80D429F8,
        &&label_80D429FC,
        &&label_80D42A00,
        &&label_80D42A04,
        &&label_80D42A08,
        &&label_80D42A0C,
        &&label_80D42A10,
        &&label_80D42A14,
        &&label_80D42A18,
        &&label_80D42A1C,
        &&label_80D42A20,
        &&label_80D42A24,
        &&label_80D42A28,
        &&label_80D42A2C,
        &&label_80D42A30,
        &&label_80D42A34,
        &&label_80D42A38,
        &&label_80D42A3C,
        &&label_80D42A40,
        &&label_80D42A44,
        &&label_80D42A48,
        &&label_80D42A4C,
        &&label_80D42A50,
        &&label_80D42A54,
        &&label_80D42A58,
        &&label_80D42A5C,
        &&label_80D42A60,
        &&label_80D42A64,
        &&label_80D42A68,
        &&label_80D42A6C,
        &&label_80D42A70,
        &&label_80D42A74,
        &&label_80D42A78,
        &&label_80D42A7C,
        &&label_80D42A80,
        &&label_80D42A84,
        &&label_80D42A88,
        &&label_80D42A8C,
        &&label_80D42A90,
        &&label_80D42A94,
        &&label_80D42A98,
        &&label_80D42A9C,
        &&label_80D42AA0,
        &&label_80D42AA4,
        &&label_80D42AA8,
        &&label_80D42AAC,
        &&label_80D42AB0,
        &&label_80D42AB4,
        &&label_80D42AB8,
        &&label_80D42ABC,
        &&label_80D42AC0,
        &&label_80D42AC4,
        &&label_80D42AC8,
        &&label_80D42ACC,
        &&label_80D42AD0,
        &&label_80D42AD4,
        &&label_80D42AD8,
        &&label_80D42ADC,
        &&label_80D42AE0,
        &&label_80D42AE4,
        &&label_80D42AE8,
        &&label_80D42AEC,
        &&label_80D42AF0,
        &&label_80D42AF4,
        &&label_80D42AF8,
        &&label_80D42AFC,
        &&label_80D42B00,
        &&label_80D42B04,
        &&label_80D42B08,
        &&label_80D42B0C,
        &&label_80D42B10,
        &&label_80D42B14,
        &&label_80D42B18,
        &&label_80D42B1C,
        &&label_80D42B20,
        &&label_80D42B24,
        &&label_80D42B28,
        &&label_80D42B2C,
        &&label_80D42B30,
        &&label_80D42B34,
        &&label_80D42B38,
        &&label_80D42B3C,
        &&label_80D42B40,
        &&label_80D42B44,
        &&label_80D42B48,
        &&label_80D42B4C,
        &&label_80D42B50,
        &&label_80D42B54,
        &&label_80D42B58,
        &&label_80D42B5C,
        &&label_80D42B60,
        &&label_80D42B64,
        &&label_80D42B68,
        &&label_80D42B6C,
        &&label_80D42B70,
        &&label_80D42B74,
        &&label_80D42B78,
        &&label_80D42B7C,
        &&label_80D42B80,
        &&label_80D42B84,
        &&label_80D42B88,
        &&label_80D42B8C,
        &&label_80D42B90,
        &&label_80D42B94,
        &&label_80D42B98,
        &&label_80D42B9C,
        &&label_80D42BA0,
        &&label_80D42BA4,
        &&label_80D42BA8,
        &&label_80D42BAC,
        &&label_80D42BB0,
        &&label_80D42BB4,
        &&label_80D42BB8,
        &&label_80D42BBC,
        &&label_80D42BC0,
        &&label_80D42BC4,
        &&label_80D42BC8,
        &&label_80D42BCC,
        &&label_80D42BD0,
        &&label_80D42BD4,
        &&label_80D42BD8,
        &&label_80D42BDC,
        &&label_80D42BE0,
        &&label_80D42BE4,
        &&label_80D42BE8,
        &&label_80D42BEC,
        &&label_80D42BF0,
        &&label_80D42BF4,
        &&label_80D42BF8,
        &&label_80D42BFC,
        &&label_80D42C00,
        &&label_80D42C04,
        &&label_80D42C08,
        &&label_80D42C0C,
        &&label_80D42C10,
        &&label_80D42C14,
        &&label_80D42C18,
        &&label_80D42C1C,
        &&label_80D42C20,
        &&label_80D42C24,
        &&label_80D42C28,
        &&label_80D42C2C,
        &&label_80D42C30,
        &&label_80D42C34,
        &&label_80D42C38,
        &&label_80D42C3C,
        &&label_80D42C40,
        &&label_80D42C44,
        &&label_80D42C48,
        &&label_80D42C4C,
        &&label_80D42C50,
        &&label_80D42C54,
        &&label_80D42C58,
        &&label_80D42C5C,
        &&label_80D42C60,
        &&label_80D42C64,
        &&label_80D42C68,
        &&label_80D42C6C,
        &&label_80D42C70,
        &&label_80D42C74,
        &&label_80D42C78,
        &&label_80D42C7C,
        &&label_80D42C80,
        &&label_80D42C84,
        &&label_80D42C88,
        &&label_80D42C8C,
        &&label_80D42C90,
        &&label_80D42C94,
        &&label_80D42C98,
        &&label_80D42C9C,
        &&label_80D42CA0,
        &&label_80D42CA4,
        &&label_80D42CA8,
        &&label_80D42CAC,
        &&label_80D42CB0,
        &&label_80D42CB4,
        &&label_80D42CB8,
        &&label_80D42CBC,
        &&label_80D42CC0,
        &&label_80D42CC4,
        &&label_80D42CC8,
        &&label_80D42CCC,
        &&label_80D42CD0,
        &&label_80D42CD4,
        &&label_80D42CD8,
        &&label_80D42CDC,
        &&label_80D42CE0,
        &&label_80D42CE4,
        &&label_80D42CE8,
        &&label_80D42CEC,
        &&label_80D42CF0,
        &&label_80D42CF4,
        &&label_80D42CF8,
        &&label_80D42CFC,
        &&label_80D42D00,
        &&label_80D42D04,
        &&label_80D42D08,
        &&label_80D42D0C,
        &&label_80D42D10,
        &&label_80D42D14,
        &&label_80D42D18,
        &&label_80D42D1C,
        &&label_80D42D20,
        &&label_80D42D24,
        &&label_80D42D28,
        &&label_80D42D2C,
        &&label_80D42D30,
        &&label_80D42D34,
        &&label_80D42D38,
        &&label_80D42D3C,
        &&label_80D42D40,
        &&label_80D42D44,
        &&label_80D42D48,
        &&label_80D42D4C,
        &&label_80D42D50,
        &&label_80D42D54,
        &&label_80D42D58,
        &&label_80D42D5C,
        &&label_80D42D60,
        &&label_80D42D64,
        &&label_80D42D68,
        &&label_80D42D6C,
        &&label_80D42D70,
        &&label_80D42D74,
        &&label_80D42D78,
        &&label_80D42D7C,
        &&label_80D42D80,
        &&label_80D42D84,
        &&label_80D42D88,
        &&label_80D42D8C,
        &&label_80D42D90,
        &&label_80D42D94,
        &&label_80D42D98,
        &&label_80D42D9C,
        &&label_80D42DA0,
        &&label_80D42DA4,
        &&label_80D42DA8,
        &&label_80D42DAC,
        &&label_80D42DB0,
        &&label_80D42DB4,
        &&label_80D42DB8,
        &&label_80D42DBC,
        &&label_80D42DC0,
        &&label_80D42DC4,
        &&label_80D42DC8,
        &&label_80D42DCC,
        &&label_80D42DD0,
        &&label_80D42DD4,
        &&label_80D42DD8,
        &&label_80D42DDC,
        &&label_80D42DE0,
        &&label_80D42DE4,
        &&label_80D42DE8,
        &&label_80D42DEC,
        &&label_80D42DF0,
        &&label_80D42DF4,
        &&label_80D42DF8,
        &&label_80D42DFC,
        &&label_80D42E00,
        &&label_80D42E04,
        &&label_80D42E08,
        &&label_80D42E0C,
        &&label_80D42E10,
        &&label_80D42E14,
        &&label_80D42E18,
        &&label_80D42E1C,
        &&label_80D42E20,
        &&label_80D42E24,
        &&label_80D42E28,
        &&label_80D42E2C,
        &&label_80D42E30,
        &&label_80D42E34,
        &&label_80D42E38,
        &&label_80D42E3C,
        &&label_80D42E40,
        &&label_80D42E44,
        &&label_80D42E48,
        &&label_80D42E4C,
        &&label_80D42E50,
        &&label_80D42E54,
        &&label_80D42E58,
        &&label_80D42E5C,
        &&label_80D42E60,
        &&label_80D42E64,
        &&label_80D42E68,
        &&label_80D42E6C,
        &&label_80D42E70,
        &&label_80D42E74,
        &&label_80D42E78,
        &&label_80D42E7C,
        &&label_80D42E80,
        &&label_80D42E84,
        &&label_80D42E88,
        &&label_80D42E8C,
        &&label_80D42E90,
        &&label_80D42E94,
        &&label_80D42E98,
        &&label_80D42E9C,
        &&label_80D42EA0,
        &&label_80D42EA4,
        &&label_80D42EA8,
        &&label_80D42EAC,
        &&label_80D42EB0,
        &&label_80D42EB4,
        &&label_80D42EB8,
        &&label_80D42EBC,
        &&label_80D42EC0,
        &&label_80D42EC4,
        &&label_80D42EC8,
        &&label_80D42ECC,
        &&label_80D42ED0,
        &&label_80D42ED4,
        &&label_80D42ED8,
        &&label_80D42EDC,
        &&label_80D42EE0,
        &&label_80D42EE4,
        &&label_80D42EE8,
        &&label_80D42EEC,
        &&label_80D42EF0,
        &&label_80D42EF4,
        &&label_80D42EF8,
        &&label_80D42EFC,
        &&label_80D42F00,
        &&label_80D42F04,
        &&label_80D42F08,
        &&label_80D42F0C,
        &&label_80D42F10,
        &&label_80D42F14,
        &&label_80D42F18,
        &&label_80D42F1C,
        &&label_80D42F20,
        &&label_80D42F24,
        &&label_80D42F28,
        &&label_80D42F2C,
        &&label_80D42F30,
        &&label_80D42F34,
        &&label_80D42F38,
        &&label_80D42F3C,
        &&label_80D42F40,
        &&label_80D42F44,
        &&label_80D42F48,
        &&label_80D42F4C,
        &&label_80D42F50,
        &&label_80D42F54,
        &&label_80D42F58,
        &&label_80D42F5C,
        &&label_80D42F60,
        &&label_80D42F64,
        &&label_80D42F68,
        &&label_80D42F6C,
        &&label_80D42F70,
        &&label_80D42F74,
        &&label_80D42F78,
        &&label_80D42F7C,
        &&label_80D42F80,
        &&label_80D42F84,
        &&label_80D42F88,
        &&label_80D42F8C,
        &&label_80D42F90,
        &&label_80D42F94,
        &&label_80D42F98,
        &&label_80D42F9C,
        &&label_80D42FA0,
        &&label_80D42FA4,
        &&label_80D42FA8,
        &&label_80D42FAC,
        &&label_80D42FB0,
        &&label_80D42FB4,
        &&label_80D42FB8,
        &&label_80D42FBC,
        &&label_80D42FC0,
        &&label_80D42FC4,
        &&label_80D42FC8,
        &&label_80D42FCC,
        &&label_80D42FD0,
        &&label_80D42FD4,
        &&label_80D42FD8,
        &&label_80D42FDC,
        &&label_80D42FE0,
        &&label_80D42FE4,
        &&label_80D42FE8,
        &&label_80D42FEC,
        &&label_80D42FF0,
        &&label_80D42FF4,
        &&label_80D42FF8,
        &&label_80D42FFC,
        &&label_80D43000,
        &&label_80D43004,
        &&label_80D43008,
        &&label_80D4300C,
        &&label_80D43010,
        &&label_80D43014,
        &&label_80D43018,
        &&label_80D4301C,
        &&label_80D43020,
        &&label_80D43024,
        &&label_80D43028,
        &&label_80D4302C,
        &&label_80D43030,
        &&label_80D43034,
        &&label_80D43038,
        &&label_80D4303C,
        &&label_80D43040,
        &&label_80D43044,
        &&label_80D43048,
        &&label_80D4304C,
        &&label_80D43050,
        &&label_80D43054,
        &&label_80D43058,
        &&label_80D4305C,
        &&label_80D43060,
        &&label_80D43064,
        &&label_80D43068,
        &&label_80D4306C,
        &&label_80D43070,
        &&label_80D43074,
        &&label_80D43078,
        &&label_80D4307C,
        &&label_80D43080,
        &&label_80D43084,
        &&label_80D43088,
        &&label_80D4308C,
        &&label_80D43090,
        &&label_80D43094,
        &&label_80D43098,
        &&label_80D4309C,
        &&label_80D430A0,
        &&label_80D430A4,
        &&label_80D430A8,
        &&label_80D430AC,
        &&label_80D430B0,
        &&label_80D430B4,
        &&label_80D430B8,
        &&label_80D430BC,
        &&label_80D430C0,
        &&label_80D430C4,
        &&label_80D430C8,
        &&label_80D430CC,
        &&label_80D430D0,
        &&label_80D430D4,
        &&label_80D430D8,
        &&label_80D430DC,
        &&label_80D430E0,
        &&label_80D430E4,
        &&label_80D430E8,
        &&label_80D430EC,
        &&label_80D430F0,
        &&label_80D430F4,
        &&label_80D430F8,
        &&label_80D430FC,
        &&label_80D43100,
        &&label_80D43104,
        &&label_80D43108,
        &&label_80D4310C,
        &&label_80D43110,
        &&label_80D43114,
        &&label_80D43118,
        &&label_80D4311C,
        &&label_80D43120,
        &&label_80D43124,
        &&label_80D43128,
        &&label_80D4312C,
        &&label_80D43130,
        &&label_80D43134,
        &&label_80D43138,
        &&label_80D4313C,
        &&label_80D43140,
        &&label_80D43144,
        &&label_80D43148,
        &&label_80D4314C,
        &&label_80D43150,
        &&label_80D43154,
        &&label_80D43158,
        &&label_80D4315C,
        &&label_80D43160,
        &&label_80D43164,
        &&label_80D43168,
        &&label_80D4316C,
        &&label_80D43170,
        &&label_80D43174,
        &&label_80D43178,
        &&label_80D4317C,
        &&label_80D43180,
        &&label_80D43184,
        &&label_80D43188,
        &&label_80D4318C,
        &&label_80D43190,
        &&label_80D43194,
        &&label_80D43198,
        &&label_80D4319C,
        &&label_80D431A0,
        &&label_80D431A4,
        &&label_80D431A8,
        &&label_80D431AC,
        &&label_80D431B0,
        &&label_80D431B4,
        &&label_80D431B8,
        &&label_80D431BC,
        &&label_80D431C0,
        &&label_80D431C4,
        &&label_80D431C8,
        &&label_80D431CC,
        &&label_80D431D0,
        &&label_80D431D4,
        &&label_80D431D8,
        &&label_80D431DC,
        &&label_80D431E0,
        &&label_80D431E4,
        &&label_80D431E8,
        &&label_80D431EC,
        &&label_80D431F0,
        &&label_80D431F4,
        &&label_80D431F8,
        &&label_80D431FC,
        &&label_80D43200,
        &&label_80D43204,
        &&label_80D43208,
        &&label_80D4320C,
        &&label_80D43210,
        &&label_80D43214,
        &&label_80D43218,
        &&label_80D4321C,
        &&label_80D43220,
        &&label_80D43224,
        &&label_80D43228,
        &&label_80D4322C,
        &&label_80D43230,
        &&label_80D43234,
        &&label_80D43238,
        &&label_80D4323C,
        &&label_80D43240,
        &&label_80D43244,
        &&label_80D43248,
        &&label_80D4324C,
        &&label_80D43250,
        &&label_80D43254,
        &&label_80D43258,
        &&label_80D4325C,
        &&label_80D43260,
        &&label_80D43264,
        &&label_80D43268,
        &&label_80D4326C,
        &&label_80D43270,
        &&label_80D43274,
        &&label_80D43278,
        &&label_80D4327C,
        &&label_80D43280,
        &&label_80D43284,
        &&label_80D43288,
        &&label_80D4328C,
        &&label_80D43290,
        &&label_80D43294,
        &&label_80D43298,
        &&label_80D4329C,
        &&label_80D432A0,
        &&label_80D432A4,
        &&label_80D432A8,
        &&label_80D432AC,
        &&label_80D432B0,
        &&label_80D432B4,
        &&label_80D432B8,
        &&label_80D432BC,
        &&label_80D432C0,
        &&label_80D432C4,
        &&label_80D432C8,
        &&label_80D432CC,
        &&label_80D432D0,
        &&label_80D432D4,
        &&label_80D432D8,
        &&label_80D432DC,
        &&label_80D432E0,
        &&label_80D432E4,
        &&label_80D432E8,
        &&label_80D432EC,
        &&label_80D432F0,
        &&label_80D432F4,
        &&label_80D432F8,
        &&label_80D432FC,
        &&label_80D43300,
        &&label_80D43304,
        &&label_80D43308,
        &&label_80D4330C,
        &&label_80D43310,
        &&label_80D43314,
        &&label_80D43318,
        &&label_80D4331C,
        &&label_80D43320,
        &&label_80D43324,
        &&label_80D43328,
        &&label_80D4332C,
        &&label_80D43330,
        &&label_80D43334,
        &&label_80D43338,
        &&label_80D4333C,
        &&label_80D43340,
        &&label_80D43344,
        &&label_80D43348,
        &&label_80D4334C,
        &&label_80D43350,
        &&label_80D43354,
        &&label_80D43358,
        &&label_80D4335C,
        &&label_80D43360,
        &&label_80D43364,
        &&label_80D43368,
        &&label_80D4336C,
        &&label_80D43370,
        &&label_80D43374,
        &&label_80D43378,
        &&label_80D4337C,
        &&label_80D43380,
        &&label_80D43384,
        &&label_80D43388,
        &&label_80D4338C,
        &&label_80D43390,
        &&label_80D43394,
        &&label_80D43398,
        &&label_80D4339C,
        &&label_80D433A0,
        &&label_80D433A4,
        &&label_80D433A8,
        &&label_80D433AC,
        &&label_80D433B0,
        &&label_80D433B4,
        &&label_80D433B8,
        &&label_80D433BC,
        &&label_80D433C0,
        &&label_80D433C4,
        &&label_80D433C8,
        &&label_80D433CC,
        &&label_80D433D0,
        &&label_80D433D4,
        &&label_80D433D8,
        &&label_80D433DC,
        &&label_80D433E0,
        &&label_80D433E4,
        &&label_80D433E8,
        &&label_80D433EC,
        &&label_80D433F0,
        &&label_80D433F4,
        &&label_80D433F8,
        &&label_80D433FC,
        &&label_80D43400,
        &&label_80D43404,
        &&label_80D43408,
        &&label_80D4340C,
        &&label_80D43410,
        &&label_80D43414,
        &&label_80D43418,
        &&label_80D4341C,
        &&label_80D43420,
        &&label_80D43424,
        &&label_80D43428,
        &&label_80D4342C,
        &&label_80D43430,
        &&label_80D43434,
        &&label_80D43438,
        &&label_80D4343C,
        &&label_80D43440,
        &&label_80D43444,
        &&label_80D43448,
        &&label_80D4344C,
        &&label_80D43450,
        &&label_80D43454,
        &&label_80D43458,
        &&label_80D4345C,
        &&label_80D43460,
        &&label_80D43464,
        &&label_80D43468,
        &&label_80D4346C,
        &&label_80D43470,
        &&label_80D43474,
        &&label_80D43478,
        &&label_80D4347C,
        &&label_80D43480,
        &&label_80D43484,
        &&label_80D43488,
        &&label_80D4348C,
        &&label_80D43490,
        &&label_80D43494,
        &&label_80D43498,
        &&label_80D4349C,
        &&label_80D434A0,
        &&label_80D434A4,
        &&label_80D434A8,
        &&label_80D434AC,
        &&label_80D434B0,
        &&label_80D434B4,
        &&label_80D434B8,
        &&label_80D434BC,
        &&label_80D434C0,
        &&label_80D434C4,
        &&label_80D434C8,
        &&label_80D434CC,
        &&label_80D434D0,
        &&label_80D434D4,
        &&label_80D434D8,
        &&label_80D434DC,
        &&label_80D434E0,
        &&label_80D434E4,
        &&label_80D434E8,
        &&label_80D434EC,
        &&label_80D434F0,
        &&label_80D434F4,
        &&label_80D434F8,
        &&label_80D434FC,
        &&label_80D43500,
        &&label_80D43504,
        &&label_80D43508,
        &&label_80D4350C,
        &&label_80D43510,
        &&label_80D43514,
        &&label_80D43518,
        &&label_80D4351C,
        &&label_80D43520,
        &&label_80D43524,
        &&label_80D43528,
        &&label_80D4352C,
        &&label_80D43530,
        &&label_80D43534,
        &&label_80D43538,
        &&label_80D4353C,
        &&label_80D43540,
        &&label_80D43544,
        &&label_80D43548,
        &&label_80D4354C,
        &&label_80D43550,
        &&label_80D43554,
        &&label_80D43558,
        &&label_80D4355C,
        &&label_80D43560,
        &&label_80D43564,
        &&label_80D43568,
        &&label_80D4356C,
        &&label_80D43570,
        &&label_80D43574,
        &&label_80D43578,
        &&label_80D4357C,
        &&label_80D43580,
        &&label_80D43584,
        &&label_80D43588,
        &&label_80D4358C,
        &&label_80D43590,
        &&label_80D43594,
        &&label_80D43598,
        &&label_80D4359C,
        &&label_80D435A0,
        &&label_80D435A4,
        &&label_80D435A8,
        &&label_80D435AC,
        &&label_80D435B0,
        &&label_80D435B4,
        &&label_80D435B8,
        &&label_80D435BC,
        &&label_80D435C0,
        &&label_80D435C4,
        &&label_80D435C8,
        &&label_80D435CC,
        &&label_80D435D0,
        &&label_80D435D4,
        &&label_80D435D8,
        &&label_80D435DC,
        &&label_80D435E0,
        &&label_80D435E4,
        &&label_80D435E8,
        &&label_80D435EC,
        &&label_80D435F0,
        &&label_80D435F4,
        &&label_80D435F8,
        &&label_80D435FC,
        &&label_80D43600,
        &&label_80D43604,
        &&label_80D43608,
        &&label_80D4360C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D41860u && pc <= 0x80D4360Cu && ((pc - 0x80D41860u) & 3u) == 0u)
            goto *pc_table_80D41860[(pc - 0x80D41860u) >> 2];
    }
    return;
label_80D41860:
    ctx->pc = 0x80D41860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41860: stwu     r1, -48(r1)
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
label_80D41864:
    ctx->pc = 0x80D41864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41864: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41868:
    ctx->pc = 0x80D41868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41868: stw     r0, 52(r1)
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
label_80D4186C:
    ctx->pc = 0x80D4186Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4186Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4186C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4186Cu)) return;
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
label_80D41870:
    ctx->pc = 0x80D41870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41870: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D41870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D41870u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41874:
    ctx->pc = 0x80D41874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41874: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D41874u)) return;
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
label_80D41878:
    ctx->pc = 0x80D41878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41878: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D41878u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D41878u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4187C:
    ctx->pc = 0x80D4187Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4187Cu)) return;
    // 80D4187C: cmpwi   r3, 2
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

label_80D41880:
    ctx->pc = 0x80D41880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41880u)) return;
    // 80D41880: bc    12, 2, 0x80D420EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D420EC;
        }
    }

label_80D41884:
    ctx->pc = 0x80D41884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41884: bc    4, 0, 0x80D41898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D41898;
        }
    }

label_80D41888:
    ctx->pc = 0x80D41888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41888: cmpwi   r3, 0
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

label_80D4188C:
    ctx->pc = 0x80D4188Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4188Cu)) return;
    // 80D4188C: bc    12, 2, 0x80D421A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D421A0;
        }
    }

label_80D41890:
    ctx->pc = 0x80D41890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41890: bc    4, 0, 0x80D418A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D418A0;
        }
    }

label_80D41894:
    ctx->pc = 0x80D41894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41894: b       0x80D421A0
    {
            goto label_80D421A0;
    }

label_80D41898:
    ctx->pc = 0x80D41898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41898: cmpwi   r3, 4
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

label_80D4189C:
    ctx->pc = 0x80D4189Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4189Cu)) return;
    // 80D4189C: b       0x80D421A0
    {
            goto label_80D421A0;
    }

label_80D418A0:
    ctx->pc = 0x80D418A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D418A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D418A4:
    ctx->pc = 0x80D418A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418A4u)) return;
    // 80D418A4: bl      0x80D42490
    {
            ctx->lr = 0x80D418A8u;
            goto label_80D42490;
    }

label_80D418A8:
    ctx->pc = 0x80D418A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D418A8: bl      0x8045DE7C
    {
            ctx->lr = 0x80D418ACu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D418AC:
    ctx->pc = 0x80D418ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D418AC: bl      0x80460A60
    {
            ctx->lr = 0x80D418B0u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D418B0:
    ctx->pc = 0x80D418B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D418B0: bl      0x80460A24
    {
            ctx->lr = 0x80D418B4u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D418B4:
    ctx->pc = 0x80D418B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D418B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D418B8:
    ctx->pc = 0x80D418B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418B8u)) return;
    // 80D418B8: bl      0x8045EC10
    {
            ctx->lr = 0x80D418BCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D418BC:
    ctx->pc = 0x80D418BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D418BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D418C0:
    ctx->pc = 0x80D418C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418C0u)) return;
    // 80D418C0: bl      0x8045F220
    {
            ctx->lr = 0x80D418C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D418C4:
    ctx->pc = 0x80D418C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D418C4: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D418C8:
    ctx->pc = 0x80D418C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418C8u)) return;
    // 80D418C8: addi    r4, r4, -3280
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3280);

label_80D418CC:
    ctx->pc = 0x80D418CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D418CC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D418CCu)) return;
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
label_80D418D0:
    ctx->pc = 0x80D418D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418D0u)) return;
    // 80D418D0: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D418D4:
    ctx->pc = 0x80D418D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418D4u)) return;
    // 80D418D4: addi    r4, r4, -3276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3276);

label_80D418D8:
    ctx->pc = 0x80D418D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D418D8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D418D8u)) return;
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
label_80D418DC:
    ctx->pc = 0x80D418DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418DCu)) return;
    // 80D418DC: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D418E0:
    ctx->pc = 0x80D418E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418E0u)) return;
    // 80D418E0: addi    r4, r4, -3272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3272);

label_80D418E4:
    ctx->pc = 0x80D418E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D418E4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D418E4u)) return;
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
label_80D418E8:
    ctx->pc = 0x80D418E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418E8u)) return;
    // 80D418E8: bl      0x8045EF2C
    {
            ctx->lr = 0x80D418ECu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D418EC:
    ctx->pc = 0x80D418ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D418EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D418F0:
    ctx->pc = 0x80D418F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418F0u)) return;
    // 80D418F0: bl      0x8045F220
    {
            ctx->lr = 0x80D418F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D418F4:
    ctx->pc = 0x80D418F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D418F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D418F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D418F8:
    ctx->pc = 0x80D418F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418F8u)) return;
    // 80D418F8: li      r5, 19419
    ctx->gpr[5] = (u32)(s32)(19419);

label_80D418FC:
    ctx->pc = 0x80D418FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D418FCu)) return;
    // 80D418FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D41900:
    ctx->pc = 0x80D41900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41900u)) return;
    // 80D41900: bl      0x8045EEA8
    {
            ctx->lr = 0x80D41904u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D41904:
    ctx->pc = 0x80D41904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41904: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41908:
    ctx->pc = 0x80D41908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41908u)) return;
    // 80D41908: bl      0x8045F7C8
    {
            ctx->lr = 0x80D4190Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D4190C:
    ctx->pc = 0x80D4190Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4190Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D4190C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41910:
    ctx->pc = 0x80D41910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41910u)) return;
    // 80D41910: bl      0x8045F220
    {
            ctx->lr = 0x80D41914u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41914:
    ctx->pc = 0x80D41914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41914: bl      0x8045EB8C
    {
            ctx->lr = 0x80D41918u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D41918:
    ctx->pc = 0x80D41918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41918: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D4191C:
    ctx->pc = 0x80D4191Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4191Cu)) return;
    // 80D4191C: bl      0x8045F220
    {
            ctx->lr = 0x80D41920u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41920:
    ctx->pc = 0x80D41920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D41920: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41924:
    ctx->pc = 0x80D41924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41924u)) return;
    // 80D41924: addi    r4, r4, 20652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20652);

label_80D41928:
    ctx->pc = 0x80D41928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41928u)) return;
    // 80D41928: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D4192C:
    ctx->pc = 0x80D4192Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4192Cu)) return;
    // 80D4192C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D41930:
    ctx->pc = 0x80D41930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41930u)) return;
    // 80D41930: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D41934:
    ctx->pc = 0x80D41934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41934u)) return;
    // 80D41934: addi    r6, r6, -3268
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3268);

label_80D41938:
    ctx->pc = 0x80D41938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41938: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D41938u)) return;
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
label_80D4193C:
    ctx->pc = 0x80D4193Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4193Cu)) return;
    // 80D4193C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D41940:
    ctx->pc = 0x80D41940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41940u)) return;
    // 80D41940: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D41944:
    ctx->pc = 0x80D41944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41944u)) return;
    // 80D41944: bl      0x8045EBE4
    {
            ctx->lr = 0x80D41948u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D41948:
    ctx->pc = 0x80D41948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41948: bl      0x8045C3AC
    {
            ctx->lr = 0x80D4194Cu;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80D4194C:
    ctx->pc = 0x80D4194Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4194Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D4194C: bl      0x8045C4A4
    {
            ctx->lr = 0x80D41950u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D41950:
    ctx->pc = 0x80D41950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41950: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41954:
    ctx->pc = 0x80D41954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41954u)) return;
    // 80D41954: bl      0x8045F220
    {
            ctx->lr = 0x80D41958u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41958:
    ctx->pc = 0x80D41958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D41958: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D4195C:
    ctx->pc = 0x80D4195Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4195Cu)) return;
    // 80D4195C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41960:
    ctx->pc = 0x80D41960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41960u)) return;
    // 80D41960: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D41964:
    ctx->pc = 0x80D41964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41964u)) return;
    // 80D41964: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D41968:
    ctx->pc = 0x80D41968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41968u)) return;
    // 80D41968: addi    r6, r6, -3264
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3264);

label_80D4196C:
    ctx->pc = 0x80D4196Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4196Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4196C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D4196Cu)) return;
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
label_80D41970:
    ctx->pc = 0x80D41970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41970u)) return;
    // 80D41970: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D41974:
    ctx->pc = 0x80D41974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41974u)) return;
    // 80D41974: addi    r6, r6, -3260
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3260);

label_80D41978:
    ctx->pc = 0x80D41978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41978: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D41978u)) return;
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
label_80D4197C:
    ctx->pc = 0x80D4197Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4197Cu)) return;
    // 80D4197C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D4197Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D41980:
    ctx->pc = 0x80D41980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41980u)) return;
    // 80D41980: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D41984:
    ctx->pc = 0x80D41984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41984u)) return;
    // 80D41984: bl      0x8045C3C0
    {
            ctx->lr = 0x80D41988u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D41988:
    ctx->pc = 0x80D41988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41988: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D4198C:
    ctx->pc = 0x80D4198Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4198Cu)) return;
    // 80D4198C: bl      0x8045F220
    {
            ctx->lr = 0x80D41990u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41990:
    ctx->pc = 0x80D41990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 80D41990: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D41994:
    ctx->pc = 0x80D41994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41994u)) return;
    // 80D41994: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D41998:
    ctx->pc = 0x80D41998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D41998: stw     r0, 8(r1)
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
label_80D4199C:
    ctx->pc = 0x80D4199Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4199Cu)) return;
    // 80D4199C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D419A0:
    ctx->pc = 0x80D419A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419A0u)) return;
    // 80D419A0: li      r4, 290
    ctx->gpr[4] = (u32)(s32)(290);

label_80D419A4:
    ctx->pc = 0x80D419A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419A4u)) return;
    // 80D419A4: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D419A8:
    ctx->pc = 0x80D419A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419A8u)) return;
    // 80D419A8: addi    r6, r6, -3256
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3256);

label_80D419AC:
    ctx->pc = 0x80D419ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D419AC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D419ACu)) return;
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
label_80D419B0:
    ctx->pc = 0x80D419B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419B0u)) return;
    // 80D419B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D419B4:
    ctx->pc = 0x80D419B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419B4u)) return;
    // 80D419B4: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D419B8:
    ctx->pc = 0x80D419B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419B8u)) return;
    // 80D419B8: addi    r7, r7, -32768
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-32768);

label_80D419BC:
    ctx->pc = 0x80D419BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419BCu)) return;
    // 80D419BC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80D419C0:
    ctx->pc = 0x80D419C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419C0u)) return;
    // 80D419C0: lis     r9, -27320
    ctx->gpr[9] = ((u32)(s32)(-27320) << 16);

label_80D419C4:
    ctx->pc = 0x80D419C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419C4u)) return;
    // 80D419C4: addi    r9, r9, -3252
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3252);

label_80D419C8:
    ctx->pc = 0x80D419C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D419C8: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80D419C8u)) return;
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
label_80D419CC:
    ctx->pc = 0x80D419CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419CCu)) return;
    // 80D419CC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80D419D0:
    ctx->pc = 0x80D419D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419D0u)) return;
    // 80D419D0: lis     r10, -1
    ctx->gpr[10] = ((u32)(s32)(-1) << 16);

label_80D419D4:
    ctx->pc = 0x80D419D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419D4u)) return;
    // 80D419D4: addi    r10, r10, 18205
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(18205);

label_80D419D8:
    ctx->pc = 0x80D419D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419D8u)) return;
    // 80D419D8: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D419D8u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D419DC:
    ctx->pc = 0x80D419DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419DCu)) return;
    // 80D419DC: bl      0x8045C260
    {
            ctx->lr = 0x80D419E0u;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80D419E0:
    ctx->pc = 0x80D419E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D419E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D419E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D419E4:
    ctx->pc = 0x80D419E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419E4u)) return;
    // 80D419E4: bl      0x8045F220
    {
            ctx->lr = 0x80D419E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D419E8:
    ctx->pc = 0x80D419E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D419E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D419E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D419EC:
    ctx->pc = 0x80D419ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419ECu)) return;
    // 80D419EC: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D419F0:
    ctx->pc = 0x80D419F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419F0u)) return;
    // 80D419F0: addi    r5, r5, -3248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3248);

label_80D419F4:
    ctx->pc = 0x80D419F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D419F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D419F4u)) return;
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
label_80D419F8:
    ctx->pc = 0x80D419F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419F8u)) return;
    // 80D419F8: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D419FC:
    ctx->pc = 0x80D419FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D419FCu)) return;
    // 80D419FC: addi    r5, r5, -3256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3256);

label_80D41A00:
    ctx->pc = 0x80D41A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41A00: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41A00u)) return;
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
label_80D41A04:
    ctx->pc = 0x80D41A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A04u)) return;
    // 80D41A04: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41A08:
    ctx->pc = 0x80D41A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A08u)) return;
    // 80D41A08: addi    r5, r5, -3244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3244);

label_80D41A0C:
    ctx->pc = 0x80D41A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41A0C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41A0Cu)) return;
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
label_80D41A10:
    ctx->pc = 0x80D41A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A10u)) return;
    // 80D41A10: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41A14:
    ctx->pc = 0x80D41A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A14u)) return;
    // 80D41A14: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41A18:
    ctx->pc = 0x80D41A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A18u)) return;
    // 80D41A18: bl      0x80D432C4
    {
            ctx->lr = 0x80D41A1Cu;
            goto label_80D432C4;
    }

label_80D41A1C:
    ctx->pc = 0x80D41A1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41A1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41A1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41A20:
    ctx->pc = 0x80D41A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A20u)) return;
    // 80D41A20: bl      0x8045F220
    {
            ctx->lr = 0x80D41A24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41A24:
    ctx->pc = 0x80D41A24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41A24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D41A24: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D41A28:
    ctx->pc = 0x80D41A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A28u)) return;
    // 80D41A28: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41A2C:
    ctx->pc = 0x80D41A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A2Cu)) return;
    // 80D41A2C: addi    r5, r5, -3240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3240);

label_80D41A30:
    ctx->pc = 0x80D41A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41A30: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41A30u)) return;
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
label_80D41A34:
    ctx->pc = 0x80D41A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A34u)) return;
    // 80D41A34: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41A38:
    ctx->pc = 0x80D41A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A38u)) return;
    // 80D41A38: addi    r5, r5, -3256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3256);

label_80D41A3C:
    ctx->pc = 0x80D41A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41A3C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41A3Cu)) return;
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
label_80D41A40:
    ctx->pc = 0x80D41A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A40u)) return;
    // 80D41A40: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41A40u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D41A44:
    ctx->pc = 0x80D41A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A44u)) return;
    // 80D41A44: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41A48:
    ctx->pc = 0x80D41A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A48u)) return;
    // 80D41A48: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41A4C:
    ctx->pc = 0x80D41A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A4Cu)) return;
    // 80D41A4C: bl      0x80D432C4
    {
            ctx->lr = 0x80D41A50u;
            goto label_80D432C4;
    }

label_80D41A50:
    ctx->pc = 0x80D41A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41A50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41A54:
    ctx->pc = 0x80D41A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A54u)) return;
    // 80D41A54: bl      0x8045F220
    {
            ctx->lr = 0x80D41A58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41A58:
    ctx->pc = 0x80D41A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D41A58: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80D41A5C:
    ctx->pc = 0x80D41A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A5Cu)) return;
    // 80D41A5C: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41A60:
    ctx->pc = 0x80D41A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A60u)) return;
    // 80D41A60: addi    r5, r5, -3236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3236);

label_80D41A64:
    ctx->pc = 0x80D41A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41A64: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41A64u)) return;
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
label_80D41A68:
    ctx->pc = 0x80D41A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A68u)) return;
    // 80D41A68: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41A6C:
    ctx->pc = 0x80D41A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A6Cu)) return;
    // 80D41A6C: addi    r5, r5, -3240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3240);

label_80D41A70:
    ctx->pc = 0x80D41A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41A70: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41A70u)) return;
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
label_80D41A74:
    ctx->pc = 0x80D41A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A74u)) return;
    // 80D41A74: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41A78:
    ctx->pc = 0x80D41A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A78u)) return;
    // 80D41A78: addi    r5, r5, -3244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3244);

label_80D41A7C:
    ctx->pc = 0x80D41A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41A7C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41A7Cu)) return;
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
label_80D41A80:
    ctx->pc = 0x80D41A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A80u)) return;
    // 80D41A80: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41A84:
    ctx->pc = 0x80D41A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A84u)) return;
    // 80D41A84: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41A88:
    ctx->pc = 0x80D41A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A88u)) return;
    // 80D41A88: bl      0x80D432C4
    {
            ctx->lr = 0x80D41A8Cu;
            goto label_80D432C4;
    }

label_80D41A8C:
    ctx->pc = 0x80D41A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41A8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41A90:
    ctx->pc = 0x80D41A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A90u)) return;
    // 80D41A90: bl      0x8045F220
    {
            ctx->lr = 0x80D41A94u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41A94:
    ctx->pc = 0x80D41A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D41A94: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80D41A98:
    ctx->pc = 0x80D41A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A98u)) return;
    // 80D41A98: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41A9C:
    ctx->pc = 0x80D41A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41A9Cu)) return;
    // 80D41A9C: addi    r5, r5, -3232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3232);

label_80D41AA0:
    ctx->pc = 0x80D41AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41AA0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41AA0u)) return;
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
label_80D41AA4:
    ctx->pc = 0x80D41AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AA4u)) return;
    // 80D41AA4: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41AA8:
    ctx->pc = 0x80D41AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AA8u)) return;
    // 80D41AA8: addi    r5, r5, -3240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3240);

label_80D41AAC:
    ctx->pc = 0x80D41AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41AAC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41AACu)) return;
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
label_80D41AB0:
    ctx->pc = 0x80D41AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AB0u)) return;
    // 80D41AB0: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41AB4:
    ctx->pc = 0x80D41AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AB4u)) return;
    // 80D41AB4: addi    r5, r5, -3236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3236);

label_80D41AB8:
    ctx->pc = 0x80D41AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41AB8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41AB8u)) return;
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
label_80D41ABC:
    ctx->pc = 0x80D41ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41ABCu)) return;
    // 80D41ABC: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41AC0:
    ctx->pc = 0x80D41AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AC0u)) return;
    // 80D41AC0: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41AC4:
    ctx->pc = 0x80D41AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AC4u)) return;
    // 80D41AC4: bl      0x80D432C4
    {
            ctx->lr = 0x80D41AC8u;
            goto label_80D432C4;
    }

label_80D41AC8:
    ctx->pc = 0x80D41AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41AC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41ACC:
    ctx->pc = 0x80D41ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41ACCu)) return;
    // 80D41ACC: bl      0x8045F220
    {
            ctx->lr = 0x80D41AD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41AD0:
    ctx->pc = 0x80D41AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D41AD0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D41AD4:
    ctx->pc = 0x80D41AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AD4u)) return;
    // 80D41AD4: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41AD8:
    ctx->pc = 0x80D41AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AD8u)) return;
    // 80D41AD8: addi    r5, r5, -3228
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3228);

label_80D41ADC:
    ctx->pc = 0x80D41ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41ADC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41ADCu)) return;
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
label_80D41AE0:
    ctx->pc = 0x80D41AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AE0u)) return;
    // 80D41AE0: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41AE4:
    ctx->pc = 0x80D41AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AE4u)) return;
    // 80D41AE4: addi    r5, r5, -3224
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3224);

label_80D41AE8:
    ctx->pc = 0x80D41AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41AE8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41AE8u)) return;
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
label_80D41AEC:
    ctx->pc = 0x80D41AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AECu)) return;
    // 80D41AEC: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41AF0:
    ctx->pc = 0x80D41AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AF0u)) return;
    // 80D41AF0: addi    r5, r5, -3220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3220);

label_80D41AF4:
    ctx->pc = 0x80D41AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41AF4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41AF4u)) return;
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
label_80D41AF8:
    ctx->pc = 0x80D41AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AF8u)) return;
    // 80D41AF8: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41AFC:
    ctx->pc = 0x80D41AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41AFCu)) return;
    // 80D41AFC: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41B00:
    ctx->pc = 0x80D41B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B00u)) return;
    // 80D41B00: bl      0x80D432C4
    {
            ctx->lr = 0x80D41B04u;
            goto label_80D432C4;
    }

label_80D41B04:
    ctx->pc = 0x80D41B04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41B04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41B04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41B08:
    ctx->pc = 0x80D41B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B08u)) return;
    // 80D41B08: bl      0x8045F220
    {
            ctx->lr = 0x80D41B0Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41B0C:
    ctx->pc = 0x80D41B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D41B0C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D41B10:
    ctx->pc = 0x80D41B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B10u)) return;
    // 80D41B10: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41B14:
    ctx->pc = 0x80D41B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B14u)) return;
    // 80D41B14: addi    r5, r5, -3220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3220);

label_80D41B18:
    ctx->pc = 0x80D41B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41B18: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41B18u)) return;
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
label_80D41B1C:
    ctx->pc = 0x80D41B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B1Cu)) return;
    // 80D41B1C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41B1Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41B20:
    ctx->pc = 0x80D41B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B20u)) return;
    // 80D41B20: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41B24:
    ctx->pc = 0x80D41B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B24u)) return;
    // 80D41B24: addi    r5, r5, -3216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3216);

label_80D41B28:
    ctx->pc = 0x80D41B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41B28: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41B28u)) return;
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
label_80D41B2C:
    ctx->pc = 0x80D41B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B2Cu)) return;
    // 80D41B2C: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41B30:
    ctx->pc = 0x80D41B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B30u)) return;
    // 80D41B30: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41B34:
    ctx->pc = 0x80D41B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B34u)) return;
    // 80D41B34: bl      0x80D432C4
    {
            ctx->lr = 0x80D41B38u;
            goto label_80D432C4;
    }

label_80D41B38:
    ctx->pc = 0x80D41B38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41B38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41B38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41B3C:
    ctx->pc = 0x80D41B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B3Cu)) return;
    // 80D41B3C: bl      0x8045F220
    {
            ctx->lr = 0x80D41B40u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41B40:
    ctx->pc = 0x80D41B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D41B40: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80D41B44:
    ctx->pc = 0x80D41B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B44u)) return;
    // 80D41B44: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41B48:
    ctx->pc = 0x80D41B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B48u)) return;
    // 80D41B48: addi    r5, r5, -3216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3216);

label_80D41B4C:
    ctx->pc = 0x80D41B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41B4C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41B4Cu)) return;
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
label_80D41B50:
    ctx->pc = 0x80D41B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B50u)) return;
    // 80D41B50: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41B54:
    ctx->pc = 0x80D41B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B54u)) return;
    // 80D41B54: addi    r5, r5, -3236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3236);

label_80D41B58:
    ctx->pc = 0x80D41B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41B58: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41B58u)) return;
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
label_80D41B5C:
    ctx->pc = 0x80D41B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B5Cu)) return;
    // 80D41B5C: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41B60:
    ctx->pc = 0x80D41B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B60u)) return;
    // 80D41B60: addi    r5, r5, -3228
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3228);

label_80D41B64:
    ctx->pc = 0x80D41B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41B64: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41B64u)) return;
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
label_80D41B68:
    ctx->pc = 0x80D41B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B68u)) return;
    // 80D41B68: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41B6C:
    ctx->pc = 0x80D41B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B6Cu)) return;
    // 80D41B6C: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41B70:
    ctx->pc = 0x80D41B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B70u)) return;
    // 80D41B70: bl      0x80D432C4
    {
            ctx->lr = 0x80D41B74u;
            goto label_80D432C4;
    }

label_80D41B74:
    ctx->pc = 0x80D41B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41B74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41B78:
    ctx->pc = 0x80D41B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B78u)) return;
    // 80D41B78: bl      0x8045F220
    {
            ctx->lr = 0x80D41B7Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41B7C:
    ctx->pc = 0x80D41B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D41B7C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D41B80:
    ctx->pc = 0x80D41B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B80u)) return;
    // 80D41B80: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41B84:
    ctx->pc = 0x80D41B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B84u)) return;
    // 80D41B84: addi    r5, r5, -3240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3240);

label_80D41B88:
    ctx->pc = 0x80D41B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41B88: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41B88u)) return;
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
label_80D41B8C:
    ctx->pc = 0x80D41B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B8Cu)) return;
    // 80D41B8C: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41B90:
    ctx->pc = 0x80D41B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B90u)) return;
    // 80D41B90: addi    r5, r5, -3212
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3212);

label_80D41B94:
    ctx->pc = 0x80D41B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41B94: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41B94u)) return;
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
label_80D41B98:
    ctx->pc = 0x80D41B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B98u)) return;
    // 80D41B98: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41B9C:
    ctx->pc = 0x80D41B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41B9Cu)) return;
    // 80D41B9C: addi    r5, r5, -3236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3236);

label_80D41BA0:
    ctx->pc = 0x80D41BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41BA0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41BA0u)) return;
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
label_80D41BA4:
    ctx->pc = 0x80D41BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BA4u)) return;
    // 80D41BA4: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41BA8:
    ctx->pc = 0x80D41BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BA8u)) return;
    // 80D41BA8: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41BAC:
    ctx->pc = 0x80D41BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BACu)) return;
    // 80D41BAC: bl      0x80D432C4
    {
            ctx->lr = 0x80D41BB0u;
            goto label_80D432C4;
    }

label_80D41BB0:
    ctx->pc = 0x80D41BB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41BB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41BB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41BB4:
    ctx->pc = 0x80D41BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BB4u)) return;
    // 80D41BB4: bl      0x8045F220
    {
            ctx->lr = 0x80D41BB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41BB8:
    ctx->pc = 0x80D41BB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41BB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D41BB8: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80D41BBC:
    ctx->pc = 0x80D41BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BBCu)) return;
    // 80D41BBC: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41BC0:
    ctx->pc = 0x80D41BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BC0u)) return;
    // 80D41BC0: addi    r5, r5, -3236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3236);

label_80D41BC4:
    ctx->pc = 0x80D41BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41BC4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41BC4u)) return;
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
label_80D41BC8:
    ctx->pc = 0x80D41BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BC8u)) return;
    // 80D41BC8: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41BCC:
    ctx->pc = 0x80D41BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BCCu)) return;
    // 80D41BCC: addi    r5, r5, -3228
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3228);

label_80D41BD0:
    ctx->pc = 0x80D41BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41BD0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41BD0u)) return;
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
label_80D41BD4:
    ctx->pc = 0x80D41BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BD4u)) return;
    // 80D41BD4: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41BD8:
    ctx->pc = 0x80D41BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BD8u)) return;
    // 80D41BD8: addi    r5, r5, -3216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3216);

label_80D41BDC:
    ctx->pc = 0x80D41BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41BDC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41BDCu)) return;
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
label_80D41BE0:
    ctx->pc = 0x80D41BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BE0u)) return;
    // 80D41BE0: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41BE4:
    ctx->pc = 0x80D41BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BE4u)) return;
    // 80D41BE4: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41BE8:
    ctx->pc = 0x80D41BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BE8u)) return;
    // 80D41BE8: bl      0x80D432C4
    {
            ctx->lr = 0x80D41BECu;
            goto label_80D432C4;
    }

label_80D41BEC:
    ctx->pc = 0x80D41BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41BEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41BF0:
    ctx->pc = 0x80D41BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BF0u)) return;
    // 80D41BF0: bl      0x8045F220
    {
            ctx->lr = 0x80D41BF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41BF4:
    ctx->pc = 0x80D41BF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41BF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D41BF4: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80D41BF8:
    ctx->pc = 0x80D41BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BF8u)) return;
    // 80D41BF8: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41BFC:
    ctx->pc = 0x80D41BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41BFCu)) return;
    // 80D41BFC: addi    r5, r5, -3216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3216);

label_80D41C00:
    ctx->pc = 0x80D41C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41C00: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41C00u)) return;
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
label_80D41C04:
    ctx->pc = 0x80D41C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C04u)) return;
    // 80D41C04: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41C08:
    ctx->pc = 0x80D41C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C08u)) return;
    // 80D41C08: addi    r5, r5, -3220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3220);

label_80D41C0C:
    ctx->pc = 0x80D41C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41C0C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41C0Cu)) return;
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
label_80D41C10:
    ctx->pc = 0x80D41C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C10u)) return;
    // 80D41C10: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D41C10u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D41C14:
    ctx->pc = 0x80D41C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C14u)) return;
    // 80D41C14: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41C18:
    ctx->pc = 0x80D41C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C18u)) return;
    // 80D41C18: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41C1C:
    ctx->pc = 0x80D41C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C1Cu)) return;
    // 80D41C1C: bl      0x80D432C4
    {
            ctx->lr = 0x80D41C20u;
            goto label_80D432C4;
    }

label_80D41C20:
    ctx->pc = 0x80D41C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41C20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41C24:
    ctx->pc = 0x80D41C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C24u)) return;
    // 80D41C24: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41C28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41C28:
    ctx->pc = 0x80D41C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41C28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41C2C:
    ctx->pc = 0x80D41C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C2Cu)) return;
    // 80D41C2C: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41C30:
    ctx->pc = 0x80D41C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C30u)) return;
    // 80D41C30: addi    r4, r4, -3208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3208);

label_80D41C34:
    ctx->pc = 0x80D41C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41C34: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41C34u)) return;
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
label_80D41C38:
    ctx->pc = 0x80D41C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C38u)) return;
    // 80D41C38: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41C38u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41C3C:
    ctx->pc = 0x80D41C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C3Cu)) return;
    // 80D41C3C: bl      0x80D434D0
    {
            ctx->lr = 0x80D41C40u;
            goto label_80D434D0;
    }

label_80D41C40:
    ctx->pc = 0x80D41C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41C40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41C44:
    ctx->pc = 0x80D41C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C44u)) return;
    // 80D41C44: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41C48:
    ctx->pc = 0x80D41C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C48u)) return;
    // 80D41C48: addi    r4, r4, -3204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3204);

label_80D41C4C:
    ctx->pc = 0x80D41C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41C4C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41C4Cu)) return;
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
label_80D41C50:
    ctx->pc = 0x80D41C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C50u)) return;
    // 80D41C50: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41C50u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41C54:
    ctx->pc = 0x80D41C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C54u)) return;
    // 80D41C54: bl      0x80D434D0
    {
            ctx->lr = 0x80D41C58u;
            goto label_80D434D0;
    }

label_80D41C58:
    ctx->pc = 0x80D41C58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41C58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41C58: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D41C5C:
    ctx->pc = 0x80D41C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C5Cu)) return;
    // 80D41C5C: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41C60:
    ctx->pc = 0x80D41C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C60u)) return;
    // 80D41C60: addi    r4, r4, -3200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3200);

label_80D41C64:
    ctx->pc = 0x80D41C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41C64: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41C64u)) return;
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
label_80D41C68:
    ctx->pc = 0x80D41C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C68u)) return;
    // 80D41C68: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41C68u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41C6C:
    ctx->pc = 0x80D41C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C6Cu)) return;
    // 80D41C6C: bl      0x80D434D0
    {
            ctx->lr = 0x80D41C70u;
            goto label_80D434D0;
    }

label_80D41C70:
    ctx->pc = 0x80D41C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41C70: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D41C74:
    ctx->pc = 0x80D41C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C74u)) return;
    // 80D41C74: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41C78:
    ctx->pc = 0x80D41C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C78u)) return;
    // 80D41C78: addi    r4, r4, -3196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3196);

label_80D41C7C:
    ctx->pc = 0x80D41C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41C7C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41C7Cu)) return;
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
label_80D41C80:
    ctx->pc = 0x80D41C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C80u)) return;
    // 80D41C80: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41C80u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41C84:
    ctx->pc = 0x80D41C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C84u)) return;
    // 80D41C84: bl      0x80D434D0
    {
            ctx->lr = 0x80D41C88u;
            goto label_80D434D0;
    }

label_80D41C88:
    ctx->pc = 0x80D41C88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41C88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41C88: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D41C8C:
    ctx->pc = 0x80D41C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C8Cu)) return;
    // 80D41C8C: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41C90:
    ctx->pc = 0x80D41C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C90u)) return;
    // 80D41C90: addi    r4, r4, -3192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3192);

label_80D41C94:
    ctx->pc = 0x80D41C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41C94: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41C94u)) return;
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
label_80D41C98:
    ctx->pc = 0x80D41C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C98u)) return;
    // 80D41C98: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41C98u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41C9C:
    ctx->pc = 0x80D41C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41C9Cu)) return;
    // 80D41C9C: bl      0x80D434D0
    {
            ctx->lr = 0x80D41CA0u;
            goto label_80D434D0;
    }

label_80D41CA0:
    ctx->pc = 0x80D41CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41CA0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D41CA4:
    ctx->pc = 0x80D41CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CA4u)) return;
    // 80D41CA4: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41CA8:
    ctx->pc = 0x80D41CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CA8u)) return;
    // 80D41CA8: addi    r4, r4, -3188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3188);

label_80D41CAC:
    ctx->pc = 0x80D41CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41CAC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41CACu)) return;
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
label_80D41CB0:
    ctx->pc = 0x80D41CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CB0u)) return;
    // 80D41CB0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41CB0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41CB4:
    ctx->pc = 0x80D41CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CB4u)) return;
    // 80D41CB4: bl      0x80D434D0
    {
            ctx->lr = 0x80D41CB8u;
            goto label_80D434D0;
    }

label_80D41CB8:
    ctx->pc = 0x80D41CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41CB8: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80D41CBC:
    ctx->pc = 0x80D41CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CBCu)) return;
    // 80D41CBC: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41CC0:
    ctx->pc = 0x80D41CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CC0u)) return;
    // 80D41CC0: addi    r4, r4, -3184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3184);

label_80D41CC4:
    ctx->pc = 0x80D41CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41CC4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41CC4u)) return;
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
label_80D41CC8:
    ctx->pc = 0x80D41CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CC8u)) return;
    // 80D41CC8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41CC8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41CCC:
    ctx->pc = 0x80D41CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CCCu)) return;
    // 80D41CCC: bl      0x80D434D0
    {
            ctx->lr = 0x80D41CD0u;
            goto label_80D434D0;
    }

label_80D41CD0:
    ctx->pc = 0x80D41CD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41CD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41CD0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80D41CD4:
    ctx->pc = 0x80D41CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CD4u)) return;
    // 80D41CD4: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41CD8:
    ctx->pc = 0x80D41CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CD8u)) return;
    // 80D41CD8: addi    r4, r4, -3204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3204);

label_80D41CDC:
    ctx->pc = 0x80D41CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41CDC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41CDCu)) return;
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
label_80D41CE0:
    ctx->pc = 0x80D41CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CE0u)) return;
    // 80D41CE0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41CE0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41CE4:
    ctx->pc = 0x80D41CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CE4u)) return;
    // 80D41CE4: bl      0x80D434D0
    {
            ctx->lr = 0x80D41CE8u;
            goto label_80D434D0;
    }

label_80D41CE8:
    ctx->pc = 0x80D41CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41CE8: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80D41CEC:
    ctx->pc = 0x80D41CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CECu)) return;
    // 80D41CEC: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41CF0:
    ctx->pc = 0x80D41CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CF0u)) return;
    // 80D41CF0: addi    r4, r4, -3192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3192);

label_80D41CF4:
    ctx->pc = 0x80D41CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41CF4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41CF4u)) return;
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
label_80D41CF8:
    ctx->pc = 0x80D41CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CF8u)) return;
    // 80D41CF8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41CF8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41CFC:
    ctx->pc = 0x80D41CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41CFCu)) return;
    // 80D41CFC: bl      0x80D434D0
    {
            ctx->lr = 0x80D41D00u;
            goto label_80D434D0;
    }

label_80D41D00:
    ctx->pc = 0x80D41D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41D00: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D41D04:
    ctx->pc = 0x80D41D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D04u)) return;
    // 80D41D04: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41D08:
    ctx->pc = 0x80D41D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D08u)) return;
    // 80D41D08: addi    r4, r4, -3208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3208);

label_80D41D0C:
    ctx->pc = 0x80D41D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41D0C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41D0Cu)) return;
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
label_80D41D10:
    ctx->pc = 0x80D41D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D10u)) return;
    // 80D41D10: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41D10u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41D14:
    ctx->pc = 0x80D41D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D14u)) return;
    // 80D41D14: bl      0x80D434D0
    {
            ctx->lr = 0x80D41D18u;
            goto label_80D434D0;
    }

label_80D41D18:
    ctx->pc = 0x80D41D18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41D18: li      r3, 1718
    ctx->gpr[3] = (u32)(s32)(1718);

label_80D41D1C:
    ctx->pc = 0x80D41D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D1Cu)) return;
    // 80D41D1C: bl      0x8045BFA0
    {
            ctx->lr = 0x80D41D20u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D41D20:
    ctx->pc = 0x80D41D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41D20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41D24:
    ctx->pc = 0x80D41D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D24u)) return;
    // 80D41D24: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41D28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41D28:
    ctx->pc = 0x80D41D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41D28: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D41D2C:
    ctx->pc = 0x80D41D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D2Cu)) return;
    // 80D41D2C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41D30u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41D30:
    ctx->pc = 0x80D41D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41D30: li      r3, 1623
    ctx->gpr[3] = (u32)(s32)(1623);

label_80D41D34:
    ctx->pc = 0x80D41D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D34u)) return;
    // 80D41D34: bl      0x8045BFA0
    {
            ctx->lr = 0x80D41D38u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D41D38:
    ctx->pc = 0x80D41D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D41D38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41D3C:
    ctx->pc = 0x80D41D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D3Cu)) return;
    // 80D41D3C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D41D40:
    ctx->pc = 0x80D41D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D40u)) return;
    // 80D41D40: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D41D44:
    ctx->pc = 0x80D41D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41D44: lwz     r0, 0(r4)
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
label_80D41D48:
    ctx->pc = 0x80D41D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D48u)) return;
    // 80D41D48: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D41D4C:
    ctx->pc = 0x80D41D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D4Cu)) return;
    // 80D41D4C: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41D50:
    ctx->pc = 0x80D41D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D50u)) return;
    // 80D41D50: addi    r4, r4, 5356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5356);

label_80D41D54:
    ctx->pc = 0x80D41D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41D54: lwzx    r4, r4, r0
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
label_80D41D58:
    ctx->pc = 0x80D41D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41D58: lwz     r4, 0(r4)
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
label_80D41D5C:
    ctx->pc = 0x80D41D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D5Cu)) return;
    // 80D41D5C: bl      0x8045F608
    {
            ctx->lr = 0x80D41D60u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D41D60:
    ctx->pc = 0x80D41D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41D60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41D64:
    ctx->pc = 0x80D41D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D64u)) return;
    // 80D41D64: bl      0x8045F220
    {
            ctx->lr = 0x80D41D68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41D68:
    ctx->pc = 0x80D41D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41D68: lwz     r3, 32(r3)
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
label_80D41D6C:
    ctx->pc = 0x80D41D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41D6C: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D41D6Cu)) return;
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
label_80D41D70:
    ctx->pc = 0x80D41D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D70u)) return;
    // 80D41D70: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D41D74:
    ctx->pc = 0x80D41D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D74u)) return;
    // 80D41D74: addi    r3, r3, -3172
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3172);

label_80D41D78:
    ctx->pc = 0x80D41D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41D78: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D41D78u)) return;
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
label_80D41D7C:
    ctx->pc = 0x80D41D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D7Cu)) return;
    // 80D41D7C: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41D7Cu)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80D41D80:
    ctx->pc = 0x80D41D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D80u)) return;
    // 80D41D80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41D84:
    ctx->pc = 0x80D41D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D84u)) return;
    // 80D41D84: bl      0x8045F220
    {
            ctx->lr = 0x80D41D88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41D88:
    ctx->pc = 0x80D41D88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41D88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41D88: lwz     r3, 32(r3)
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
label_80D41D8C:
    ctx->pc = 0x80D41D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41D8C: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D41D8Cu)) return;
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
label_80D41D90:
    ctx->pc = 0x80D41D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D90u)) return;
    // 80D41D90: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D41D94:
    ctx->pc = 0x80D41D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D94u)) return;
    // 80D41D94: addi    r3, r3, -3176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3176);

label_80D41D98:
    ctx->pc = 0x80D41D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41D98: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D41D98u)) return;
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
label_80D41D9C:
    ctx->pc = 0x80D41D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41D9Cu)) return;
    // 80D41D9C: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41D9Cu)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80D41DA0:
    ctx->pc = 0x80D41DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DA0u)) return;
    // 80D41DA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41DA4:
    ctx->pc = 0x80D41DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DA4u)) return;
    // 80D41DA4: bl      0x8045F220
    {
            ctx->lr = 0x80D41DA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41DA8:
    ctx->pc = 0x80D41DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41DA8: lwz     r3, 32(r3)
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
label_80D41DAC:
    ctx->pc = 0x80D41DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41DAC: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D41DACu)) return;
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
label_80D41DB0:
    ctx->pc = 0x80D41DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DB0u)) return;
    // 80D41DB0: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D41DB4:
    ctx->pc = 0x80D41DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DB4u)) return;
    // 80D41DB4: addi    r3, r3, -3180
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3180);

label_80D41DB8:
    ctx->pc = 0x80D41DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41DB8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D41DB8u)) return;
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
label_80D41DBC:
    ctx->pc = 0x80D41DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DBCu)) return;
    // 80D41DBC: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41DBCu)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80D41DC0:
    ctx->pc = 0x80D41DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DC0u)) return;
    // 80D41DC0: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80D41DC0u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80D41DC4:
    ctx->pc = 0x80D41DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DC4u)) return;
    // 80D41DC4: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80D41DC4u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80D41DC8:
    ctx->pc = 0x80D41DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DC8u)) return;
    // 80D41DC8: bl      0x80D42928
    {
            ctx->lr = 0x80D41DCCu;
            goto label_80D42928;
    }

label_80D41DCC:
    ctx->pc = 0x80D41DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D41DCC: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D41DD0:
    ctx->pc = 0x80D41DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DD0u)) return;
    // 80D41DD0: addi    r4, r4, -15264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15264);

label_80D41DD4:
    ctx->pc = 0x80D41DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41DD4: stw     r3, 0(r4)
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
label_80D41DD8:
    ctx->pc = 0x80D41DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DD8u)) return;
    // 80D41DD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41DDC:
    ctx->pc = 0x80D41DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DDCu)) return;
    // 80D41DDC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41DE0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41DE0:
    ctx->pc = 0x80D41DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D41DE0: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D41DE4:
    ctx->pc = 0x80D41DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DE4u)) return;
    // 80D41DE4: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D41DE8:
    ctx->pc = 0x80D41DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41DE8: lwz     r3, 0(r3)
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
label_80D41DEC:
    ctx->pc = 0x80D41DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DECu)) return;
    // 80D41DEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D41DF0:
    ctx->pc = 0x80D41DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DF0u)) return;
    // 80D41DF0: bl      0x8045EE90
    {
            ctx->lr = 0x80D41DF4u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80D41DF4:
    ctx->pc = 0x80D41DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D41DF4: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D41DF8:
    ctx->pc = 0x80D41DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DF8u)) return;
    // 80D41DF8: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D41DFC:
    ctx->pc = 0x80D41DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41DFC: lwz     r3, 0(r3)
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
label_80D41E00:
    ctx->pc = 0x80D41E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E00u)) return;
    // 80D41E00: bl      0x8045EAE8
    {
            ctx->lr = 0x80D41E04u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80D41E04:
    ctx->pc = 0x80D41E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D41E04: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D41E08:
    ctx->pc = 0x80D41E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E08u)) return;
    // 80D41E08: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D41E0C:
    ctx->pc = 0x80D41E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41E0C: lwz     r3, 0(r3)
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
label_80D41E10:
    ctx->pc = 0x80D41E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E10u)) return;
    // 80D41E10: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41E14:
    ctx->pc = 0x80D41E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E14u)) return;
    // 80D41E14: addi    r4, r4, 4624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4624);

label_80D41E18:
    ctx->pc = 0x80D41E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E18u)) return;
    // 80D41E18: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41E1C:
    ctx->pc = 0x80D41E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E1Cu)) return;
    // 80D41E1C: addi    r5, r5, -3220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3220);

label_80D41E20:
    ctx->pc = 0x80D41E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41E20: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41E20u)) return;
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
label_80D41E24:
    ctx->pc = 0x80D41E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E24u)) return;
    // 80D41E24: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80D41E28:
    ctx->pc = 0x80D41E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E28u)) return;
    // 80D41E28: bl      0x8045EB14
    {
            ctx->lr = 0x80D41E2Cu;
            ctx->pc = 0x8045EB14u;
            return;
    }

label_80D41E2C:
    ctx->pc = 0x80D41E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41E2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41E30:
    ctx->pc = 0x80D41E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E30u)) return;
    // 80D41E30: bl      0x8045F220
    {
            ctx->lr = 0x80D41E34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41E34:
    ctx->pc = 0x80D41E34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41E34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D41E34: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D41E38:
    ctx->pc = 0x80D41E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E38u)) return;
    // 80D41E38: addi    r4, r4, -32448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32448);

label_80D41E3C:
    ctx->pc = 0x80D41E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E3Cu)) return;
    // 80D41E3C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D41E40:
    ctx->pc = 0x80D41E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E40u)) return;
    // 80D41E40: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D41E44:
    ctx->pc = 0x80D41E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E44u)) return;
    // 80D41E44: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D41E48:
    ctx->pc = 0x80D41E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E48u)) return;
    // 80D41E48: addi    r6, r6, -3168
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3168);

label_80D41E4C:
    ctx->pc = 0x80D41E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41E4C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D41E4Cu)) return;
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
label_80D41E50:
    ctx->pc = 0x80D41E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E50u)) return;
    // 80D41E50: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D41E54:
    ctx->pc = 0x80D41E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E54u)) return;
    // 80D41E54: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D41E58:
    ctx->pc = 0x80D41E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E58u)) return;
    // 80D41E58: bl      0x8045EBE4
    {
            ctx->lr = 0x80D41E5Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D41E5C:
    ctx->pc = 0x80D41E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41E5C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D41E60:
    ctx->pc = 0x80D41E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E60u)) return;
    // 80D41E60: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41E64u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41E64:
    ctx->pc = 0x80D41E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D41E64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41E68:
    ctx->pc = 0x80D41E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E68u)) return;
    // 80D41E68: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D41E6C:
    ctx->pc = 0x80D41E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E6Cu)) return;
    // 80D41E6C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D41E70:
    ctx->pc = 0x80D41E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41E70: lwz     r0, 0(r4)
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
label_80D41E74:
    ctx->pc = 0x80D41E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E74u)) return;
    // 80D41E74: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D41E78:
    ctx->pc = 0x80D41E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E78u)) return;
    // 80D41E78: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41E7C:
    ctx->pc = 0x80D41E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E7Cu)) return;
    // 80D41E7C: addi    r4, r4, 5356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5356);

label_80D41E80:
    ctx->pc = 0x80D41E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41E80: lwzx    r4, r4, r0
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
label_80D41E84:
    ctx->pc = 0x80D41E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41E84: lwz     r4, 4(r4)
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
label_80D41E88:
    ctx->pc = 0x80D41E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E88u)) return;
    // 80D41E88: bl      0x8045F608
    {
            ctx->lr = 0x80D41E8Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D41E8C:
    ctx->pc = 0x80D41E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41E8C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D41E90:
    ctx->pc = 0x80D41E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E90u)) return;
    // 80D41E90: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41E94u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41E94:
    ctx->pc = 0x80D41E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D41E94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41E98:
    ctx->pc = 0x80D41E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E98u)) return;
    // 80D41E98: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D41E9C:
    ctx->pc = 0x80D41E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41E9Cu)) return;
    // 80D41E9C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D41EA0:
    ctx->pc = 0x80D41EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41EA0: lwz     r0, 0(r4)
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
label_80D41EA4:
    ctx->pc = 0x80D41EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EA4u)) return;
    // 80D41EA4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D41EA8:
    ctx->pc = 0x80D41EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EA8u)) return;
    // 80D41EA8: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41EAC:
    ctx->pc = 0x80D41EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EACu)) return;
    // 80D41EAC: addi    r4, r4, 5356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5356);

label_80D41EB0:
    ctx->pc = 0x80D41EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41EB0: lwzx    r4, r4, r0
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
label_80D41EB4:
    ctx->pc = 0x80D41EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41EB4: lwz     r4, 8(r4)
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
label_80D41EB8:
    ctx->pc = 0x80D41EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EB8u)) return;
    // 80D41EB8: bl      0x8045F608
    {
            ctx->lr = 0x80D41EBCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D41EBC:
    ctx->pc = 0x80D41EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D41EBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41EC0:
    ctx->pc = 0x80D41EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EC0u)) return;
    // 80D41EC0: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80D41EC4:
    ctx->pc = 0x80D41EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EC4u)) return;
    // 80D41EC4: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80D41EC8:
    ctx->pc = 0x80D41EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EC8u)) return;
    // 80D41EC8: bl      0x80D42598
    {
            ctx->lr = 0x80D41ECCu;
            goto label_80D42598;
    }

label_80D41ECC:
    ctx->pc = 0x80D41ECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41ECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41ECC: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D41ED0:
    ctx->pc = 0x80D41ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41ED0u)) return;
    // 80D41ED0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41ED4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41ED4:
    ctx->pc = 0x80D41ED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41ED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41ED4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41ED8:
    ctx->pc = 0x80D41ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41ED8u)) return;
    // 80D41ED8: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41EDCu;
            goto label_80D42E9C;
    }

label_80D41EDC:
    ctx->pc = 0x80D41EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41EDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41EE0:
    ctx->pc = 0x80D41EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EE0u)) return;
    // 80D41EE0: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41EE4u;
            goto label_80D42E9C;
    }

label_80D41EE4:
    ctx->pc = 0x80D41EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41EE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D41EE8:
    ctx->pc = 0x80D41EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EE8u)) return;
    // 80D41EE8: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41EECu;
            goto label_80D42E9C;
    }

label_80D41EEC:
    ctx->pc = 0x80D41EECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41EECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41EEC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D41EF0:
    ctx->pc = 0x80D41EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EF0u)) return;
    // 80D41EF0: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41EF4u;
            goto label_80D42E9C;
    }

label_80D41EF4:
    ctx->pc = 0x80D41EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41EF4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D41EF8:
    ctx->pc = 0x80D41EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41EF8u)) return;
    // 80D41EF8: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41EFCu;
            goto label_80D42E9C;
    }

label_80D41EFC:
    ctx->pc = 0x80D41EFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41EFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41EFC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D41F00:
    ctx->pc = 0x80D41F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F00u)) return;
    // 80D41F00: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41F04u;
            goto label_80D42E9C;
    }

label_80D41F04:
    ctx->pc = 0x80D41F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41F04: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80D41F08:
    ctx->pc = 0x80D41F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F08u)) return;
    // 80D41F08: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41F0Cu;
            goto label_80D42E9C;
    }

label_80D41F0C:
    ctx->pc = 0x80D41F0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41F0C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80D41F10:
    ctx->pc = 0x80D41F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F10u)) return;
    // 80D41F10: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41F14u;
            goto label_80D42E9C;
    }

label_80D41F14:
    ctx->pc = 0x80D41F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41F14: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80D41F18:
    ctx->pc = 0x80D41F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F18u)) return;
    // 80D41F18: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41F1Cu;
            goto label_80D42E9C;
    }

label_80D41F1C:
    ctx->pc = 0x80D41F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41F1C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D41F20:
    ctx->pc = 0x80D41F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F20u)) return;
    // 80D41F20: bl      0x80D42E9C
    {
            ctx->lr = 0x80D41F24u;
            goto label_80D42E9C;
    }

label_80D41F24:
    ctx->pc = 0x80D41F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41F24: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41F28:
    ctx->pc = 0x80D41F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F28u)) return;
    // 80D41F28: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41F2Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41F2C:
    ctx->pc = 0x80D41F2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41F2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41F30:
    ctx->pc = 0x80D41F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F30u)) return;
    // 80D41F30: bl      0x8045F220
    {
            ctx->lr = 0x80D41F34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D41F34:
    ctx->pc = 0x80D41F34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D41F34: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D41F38:
    ctx->pc = 0x80D41F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F38u)) return;
    // 80D41F38: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41F3C:
    ctx->pc = 0x80D41F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F3Cu)) return;
    // 80D41F3C: addi    r5, r5, -3220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3220);

label_80D41F40:
    ctx->pc = 0x80D41F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41F40: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41F40u)) return;
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
label_80D41F44:
    ctx->pc = 0x80D41F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F44u)) return;
    // 80D41F44: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41F48:
    ctx->pc = 0x80D41F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F48u)) return;
    // 80D41F48: addi    r5, r5, -3212
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3212);

label_80D41F4C:
    ctx->pc = 0x80D41F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41F4C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41F4Cu)) return;
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
label_80D41F50:
    ctx->pc = 0x80D41F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F50u)) return;
    // 80D41F50: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41F54:
    ctx->pc = 0x80D41F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F54u)) return;
    // 80D41F54: addi    r5, r5, -3264
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3264);

label_80D41F58:
    ctx->pc = 0x80D41F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41F58: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41F58u)) return;
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
label_80D41F5C:
    ctx->pc = 0x80D41F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F5Cu)) return;
    // 80D41F5C: lis     r5, -27319
    ctx->gpr[5] = ((u32)(s32)(-27319) << 16);

label_80D41F60:
    ctx->pc = 0x80D41F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F60u)) return;
    // 80D41F60: addi    r5, r5, -15712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15712);

label_80D41F64:
    ctx->pc = 0x80D41F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F64u)) return;
    // 80D41F64: bl      0x80D432C4
    {
            ctx->lr = 0x80D41F68u;
            goto label_80D432C4;
    }

label_80D41F68:
    ctx->pc = 0x80D41F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41F68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41F6C:
    ctx->pc = 0x80D41F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F6Cu)) return;
    // 80D41F6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41F70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41F70:
    ctx->pc = 0x80D41F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41F70: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D41F74:
    ctx->pc = 0x80D41F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F74u)) return;
    // 80D41F74: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41F78:
    ctx->pc = 0x80D41F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F78u)) return;
    // 80D41F78: addi    r4, r4, -3164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3164);

label_80D41F7C:
    ctx->pc = 0x80D41F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41F7C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41F7Cu)) return;
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
label_80D41F80:
    ctx->pc = 0x80D41F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F80u)) return;
    // 80D41F80: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41F80u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41F84:
    ctx->pc = 0x80D41F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F84u)) return;
    // 80D41F84: bl      0x80D4356C
    {
            ctx->lr = 0x80D41F88u;
            goto label_80D4356C;
    }

label_80D41F88:
    ctx->pc = 0x80D41F88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41F88: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_80D41F8C:
    ctx->pc = 0x80D41F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F8Cu)) return;
    // 80D41F8C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41F90u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41F90:
    ctx->pc = 0x80D41F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41F90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41F90: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D41F94:
    ctx->pc = 0x80D41F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F94u)) return;
    // 80D41F94: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41F98:
    ctx->pc = 0x80D41F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F98u)) return;
    // 80D41F98: addi    r4, r4, -3204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3204);

label_80D41F9C:
    ctx->pc = 0x80D41F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41F9C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D41F9Cu)) return;
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
label_80D41FA0:
    ctx->pc = 0x80D41FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FA0u)) return;
    // 80D41FA0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41FA0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D41FA4:
    ctx->pc = 0x80D41FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FA4u)) return;
    // 80D41FA4: bl      0x80D4356C
    {
            ctx->lr = 0x80D41FA8u;
            goto label_80D4356C;
    }

label_80D41FA8:
    ctx->pc = 0x80D41FA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41FA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41FA8: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80D41FAC:
    ctx->pc = 0x80D41FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FACu)) return;
    // 80D41FAC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D41FB0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D41FB0:
    ctx->pc = 0x80D41FB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41FB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D41FB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41FB4:
    ctx->pc = 0x80D41FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FB4u)) return;
    // 80D41FB4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D41FB8:
    ctx->pc = 0x80D41FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FB8u)) return;
    // 80D41FB8: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41FBC:
    ctx->pc = 0x80D41FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FBCu)) return;
    // 80D41FBC: addi    r5, r5, -3160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3160);

label_80D41FC0:
    ctx->pc = 0x80D41FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41FC0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41FC0u)) return;
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
label_80D41FC4:
    ctx->pc = 0x80D41FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FC4u)) return;
    // 80D41FC4: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41FC8:
    ctx->pc = 0x80D41FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FC8u)) return;
    // 80D41FC8: addi    r5, r5, -3156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3156);

label_80D41FCC:
    ctx->pc = 0x80D41FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41FCC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41FCCu)) return;
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
label_80D41FD0:
    ctx->pc = 0x80D41FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FD0u)) return;
    // 80D41FD0: lis     r5, -27320
    ctx->gpr[5] = ((u32)(s32)(-27320) << 16);

label_80D41FD4:
    ctx->pc = 0x80D41FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FD4u)) return;
    // 80D41FD4: addi    r5, r5, -3152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3152);

label_80D41FD8:
    ctx->pc = 0x80D41FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41FD8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D41FD8u)) return;
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
label_80D41FDC:
    ctx->pc = 0x80D41FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FDCu)) return;
    // 80D41FDC: bl      0x8045C750
    {
            ctx->lr = 0x80D41FE0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D41FE0:
    ctx->pc = 0x80D41FE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41FE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D41FE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D41FE4:
    ctx->pc = 0x80D41FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FE4u)) return;
    // 80D41FE4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D41FE8:
    ctx->pc = 0x80D41FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FE8u)) return;
    // 80D41FE8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D41FEC:
    ctx->pc = 0x80D41FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FECu)) return;
    // 80D41FEC: addi    r5, r5, -1154
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1154);

label_80D41FF0:
    ctx->pc = 0x80D41FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FF0u)) return;
    // 80D41FF0: li      r6, 18205
    ctx->gpr[6] = (u32)(s32)(18205);

label_80D41FF4:
    ctx->pc = 0x80D41FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FF4u)) return;
    // 80D41FF4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D41FF8:
    ctx->pc = 0x80D41FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41FF8u)) return;
    // 80D41FF8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D41FFCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D41FFC:
    ctx->pc = 0x80D41FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41FFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42000:
    ctx->pc = 0x80D42000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42000u)) return;
    // 80D42000: bl      0x8045F220
    {
            ctx->lr = 0x80D42004u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D42004:
    ctx->pc = 0x80D42004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D42004: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D42008:
    ctx->pc = 0x80D42008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42008u)) return;
    // 80D42008: addi    r4, r4, -16092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16092);

label_80D4200C:
    ctx->pc = 0x80D4200Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4200Cu)) return;
    // 80D4200C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D42010:
    ctx->pc = 0x80D42010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42010u)) return;
    // 80D42010: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D42014:
    ctx->pc = 0x80D42014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42014u)) return;
    // 80D42014: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D42018:
    ctx->pc = 0x80D42018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42018u)) return;
    // 80D42018: addi    r6, r6, -3168
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3168);

label_80D4201C:
    ctx->pc = 0x80D4201Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4201Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4201C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D4201Cu)) return;
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
label_80D42020:
    ctx->pc = 0x80D42020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42020u)) return;
    // 80D42020: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D42024:
    ctx->pc = 0x80D42024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42024u)) return;
    // 80D42024: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D42028:
    ctx->pc = 0x80D42028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42028u)) return;
    // 80D42028: bl      0x8045EBE4
    {
            ctx->lr = 0x80D4202Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D4202C:
    ctx->pc = 0x80D4202Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4202Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D4202C: bl      0x8045C3AC
    {
            ctx->lr = 0x80D42030u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80D42030:
    ctx->pc = 0x80D42030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42030: bl      0x8045C4A4
    {
            ctx->lr = 0x80D42034u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D42034:
    ctx->pc = 0x80D42034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D42034: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42038:
    ctx->pc = 0x80D42038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42038u)) return;
    // 80D42038: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80D4203C:
    ctx->pc = 0x80D4203Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4203Cu)) return;
    // 80D4203C: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80D42040:
    ctx->pc = 0x80D42040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42040u)) return;
    // 80D42040: bl      0x80D42674
    {
            ctx->lr = 0x80D42044u;
            goto label_80D42674;
    }

label_80D42044:
    ctx->pc = 0x80D42044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42044: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80D42048:
    ctx->pc = 0x80D42048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42048u)) return;
    // 80D42048: bl      0x8045F7C8
    {
            ctx->lr = 0x80D4204Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D4204C:
    ctx->pc = 0x80D4204Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4204Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D4204C: bl      0x8045F32C
    {
            ctx->lr = 0x80D42050u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D42050:
    ctx->pc = 0x80D42050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42050: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42054:
    ctx->pc = 0x80D42054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42054u)) return;
    // 80D42054: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42058u;
            goto label_80D42E9C;
    }

label_80D42058:
    ctx->pc = 0x80D42058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42058: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D4205C:
    ctx->pc = 0x80D4205Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4205Cu)) return;
    // 80D4205C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42060u;
            goto label_80D42E9C;
    }

label_80D42060:
    ctx->pc = 0x80D42060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42060: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D42064:
    ctx->pc = 0x80D42064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42064u)) return;
    // 80D42064: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42068u;
            goto label_80D42E9C;
    }

label_80D42068:
    ctx->pc = 0x80D42068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42068: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D4206C:
    ctx->pc = 0x80D4206Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4206Cu)) return;
    // 80D4206C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42070u;
            goto label_80D42E9C;
    }

label_80D42070:
    ctx->pc = 0x80D42070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42070: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D42074:
    ctx->pc = 0x80D42074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42074u)) return;
    // 80D42074: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42078u;
            goto label_80D42E9C;
    }

label_80D42078:
    ctx->pc = 0x80D42078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42078: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D4207C:
    ctx->pc = 0x80D4207Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4207Cu)) return;
    // 80D4207C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42080u;
            goto label_80D42E9C;
    }

label_80D42080:
    ctx->pc = 0x80D42080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42080: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D42084:
    ctx->pc = 0x80D42084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42084u)) return;
    // 80D42084: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42088u;
            goto label_80D42E9C;
    }

label_80D42088:
    ctx->pc = 0x80D42088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42088: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80D4208C:
    ctx->pc = 0x80D4208Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4208Cu)) return;
    // 80D4208C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42090u;
            goto label_80D42E9C;
    }

label_80D42090:
    ctx->pc = 0x80D42090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42090: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80D42094:
    ctx->pc = 0x80D42094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42094u)) return;
    // 80D42094: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42098u;
            goto label_80D42E9C;
    }

label_80D42098:
    ctx->pc = 0x80D42098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42098: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80D4209C:
    ctx->pc = 0x80D4209Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4209Cu)) return;
    // 80D4209C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D420A0u;
            goto label_80D42E9C;
    }

label_80D420A0:
    ctx->pc = 0x80D420A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D420A0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D420A4:
    ctx->pc = 0x80D420A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420A4u)) return;
    // 80D420A4: bl      0x80D42E9C
    {
            ctx->lr = 0x80D420A8u;
            goto label_80D42E9C;
    }

label_80D420A8:
    ctx->pc = 0x80D420A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D420A8: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D420AC:
    ctx->pc = 0x80D420ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420ACu)) return;
    // 80D420AC: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D420B0:
    ctx->pc = 0x80D420B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D420B0: lwz     r3, 0(r3)
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
label_80D420B4:
    ctx->pc = 0x80D420B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420B4u)) return;
    // 80D420B4: bl      0x8045EAE8
    {
            ctx->lr = 0x80D420B8u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80D420B8:
    ctx->pc = 0x80D420B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D420B8: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D420BC:
    ctx->pc = 0x80D420BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420BCu)) return;
    // 80D420BC: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D420C0:
    ctx->pc = 0x80D420C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D420C0: lwz     r3, 0(r3)
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
label_80D420C4:
    ctx->pc = 0x80D420C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420C4u)) return;
    // 80D420C4: cmplwi  r3, 0x0000
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

label_80D420C8:
    ctx->pc = 0x80D420C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420C8u)) return;
    // 80D420C8: bc    12, 2, 0x80D420E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D420E0;
        }
    }

label_80D420CC:
    ctx->pc = 0x80D420CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D420CC: bl      0x8050F9E0
    {
            ctx->lr = 0x80D420D0u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D420D0:
    ctx->pc = 0x80D420D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D420D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D420D4:
    ctx->pc = 0x80D420D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420D4u)) return;
    // 80D420D4: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D420D8:
    ctx->pc = 0x80D420D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420D8u)) return;
    // 80D420D8: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D420DC:
    ctx->pc = 0x80D420DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D420DC: stw     r0, 0(r3)
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
label_80D420E0:
    ctx->pc = 0x80D420E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D420E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D420E4:
    ctx->pc = 0x80D420E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420E4u)) return;
    // 80D420E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D420E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D420E8:
    ctx->pc = 0x80D420E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D420E8: b       0x80D421A0
    {
            goto label_80D421A0;
    }

label_80D420EC:
    ctx->pc = 0x80D420ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D420EC: bl      0x80D424EC
    {
            ctx->lr = 0x80D420F0u;
            goto label_80D424EC;
    }

label_80D420F0:
    ctx->pc = 0x80D420F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D420F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D420F0: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D420F4:
    ctx->pc = 0x80D420F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420F4u)) return;
    // 80D420F4: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D420F8:
    ctx->pc = 0x80D420F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D420F8: lwz     r3, 0(r3)
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
label_80D420FC:
    ctx->pc = 0x80D420FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D420FCu)) return;
    // 80D420FC: bl      0x8045EAE8
    {
            ctx->lr = 0x80D42100u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80D42100:
    ctx->pc = 0x80D42100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42100: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42104:
    ctx->pc = 0x80D42104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42104u)) return;
    // 80D42104: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42108u;
            goto label_80D42E9C;
    }

label_80D42108:
    ctx->pc = 0x80D42108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42108: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D4210C:
    ctx->pc = 0x80D4210Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4210Cu)) return;
    // 80D4210C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42110u;
            goto label_80D42E9C;
    }

label_80D42110:
    ctx->pc = 0x80D42110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42110: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D42114:
    ctx->pc = 0x80D42114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42114u)) return;
    // 80D42114: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42118u;
            goto label_80D42E9C;
    }

label_80D42118:
    ctx->pc = 0x80D42118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42118: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D4211C:
    ctx->pc = 0x80D4211Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4211Cu)) return;
    // 80D4211C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42120u;
            goto label_80D42E9C;
    }

label_80D42120:
    ctx->pc = 0x80D42120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42120: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D42124:
    ctx->pc = 0x80D42124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42124u)) return;
    // 80D42124: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42128u;
            goto label_80D42E9C;
    }

label_80D42128:
    ctx->pc = 0x80D42128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42128: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D4212C:
    ctx->pc = 0x80D4212Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4212Cu)) return;
    // 80D4212C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42130u;
            goto label_80D42E9C;
    }

label_80D42130:
    ctx->pc = 0x80D42130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42130: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D42134:
    ctx->pc = 0x80D42134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42134u)) return;
    // 80D42134: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42138u;
            goto label_80D42E9C;
    }

label_80D42138:
    ctx->pc = 0x80D42138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42138: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80D4213C:
    ctx->pc = 0x80D4213Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4213Cu)) return;
    // 80D4213C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42140u;
            goto label_80D42E9C;
    }

label_80D42140:
    ctx->pc = 0x80D42140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42140: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80D42144:
    ctx->pc = 0x80D42144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42144u)) return;
    // 80D42144: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42148u;
            goto label_80D42E9C;
    }

label_80D42148:
    ctx->pc = 0x80D42148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42148: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80D4214C:
    ctx->pc = 0x80D4214Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4214Cu)) return;
    // 80D4214C: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42150u;
            goto label_80D42E9C;
    }

label_80D42150:
    ctx->pc = 0x80D42150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42150: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D42154:
    ctx->pc = 0x80D42154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42154u)) return;
    // 80D42154: bl      0x80D42E9C
    {
            ctx->lr = 0x80D42158u;
            goto label_80D42E9C;
    }

label_80D42158:
    ctx->pc = 0x80D42158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42158: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D4215C:
    ctx->pc = 0x80D4215Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4215Cu)) return;
    // 80D4215C: bl      0x8045EC10
    {
            ctx->lr = 0x80D42160u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D42160:
    ctx->pc = 0x80D42160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42160: bl      0x8045C3AC
    {
            ctx->lr = 0x80D42164u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80D42164:
    ctx->pc = 0x80D42164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42164: bl      0x8045C4A4
    {
            ctx->lr = 0x80D42168u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D42168:
    ctx->pc = 0x80D42168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42168: bl      0x8045BF80
    {
            ctx->lr = 0x80D4216Cu;
            ctx->pc = 0x8045BF80u;
            return;
    }

label_80D4216C:
    ctx->pc = 0x80D4216Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4216Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D4216C: bl      0x8045F32C
    {
            ctx->lr = 0x80D42170u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D42170:
    ctx->pc = 0x80D42170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D42170: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D42174:
    ctx->pc = 0x80D42174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42174u)) return;
    // 80D42174: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D42178:
    ctx->pc = 0x80D42178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42178: lwz     r3, 0(r3)
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
label_80D4217C:
    ctx->pc = 0x80D4217Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4217Cu)) return;
    // 80D4217C: cmplwi  r3, 0x0000
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

label_80D42180:
    ctx->pc = 0x80D42180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42180u)) return;
    // 80D42180: bc    12, 2, 0x80D42198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42198;
        }
    }

label_80D42184:
    ctx->pc = 0x80D42184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42184: bl      0x8050F9E0
    {
            ctx->lr = 0x80D42188u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D42188:
    ctx->pc = 0x80D42188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D42188: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D4218C:
    ctx->pc = 0x80D4218Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4218Cu)) return;
    // 80D4218C: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D42190:
    ctx->pc = 0x80D42190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42190u)) return;
    // 80D42190: addi    r3, r3, -15264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15264);

label_80D42194:
    ctx->pc = 0x80D42194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42194: stw     r0, 0(r3)
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
label_80D42198:
    ctx->pc = 0x80D42198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42198: bl      0x8045DE34
    {
            ctx->lr = 0x80D4219Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D4219C:
    ctx->pc = 0x80D4219Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4219Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D4219C: bl      0x80460A80
    {
            ctx->lr = 0x80D421A0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D421A0:
    ctx->pc = 0x80D421A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D421A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D421A0: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D421A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D421A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D421A4:
    ctx->pc = 0x80D421A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D421A4: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D421A4u)) return;
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
label_80D421A8:
    ctx->pc = 0x80D421A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D421A8: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D421A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D421A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D421AC:
    ctx->pc = 0x80D421ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D421AC: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D421ACu)) return;
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
label_80D421B0:
    ctx->pc = 0x80D421B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D421B0: lwz     r0, 52(r1)
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
label_80D421B4:
    ctx->pc = 0x80D421B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D421B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D421B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D421B8:
    ctx->pc = 0x80D421B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421B8u)) return;
    // 80D421B8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80D421BC:
    ctx->pc = 0x80D421BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421BCu)) return;
    // 80D421BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D421C0:
    ctx->pc = 0x80D421C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D421C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D421C0: stwu     r1, -16(r1)
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
label_80D421C4:
    ctx->pc = 0x80D421C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D421C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D421C8:
    ctx->pc = 0x80D421C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D421C8: stw     r0, 20(r1)
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
label_80D421CC:
    ctx->pc = 0x80D421CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D421CC: lwz     r3, 32(r3)
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
label_80D421D0:
    ctx->pc = 0x80D421D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D421D0: lwz     r3, 16(r3)
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
label_80D421D4:
    ctx->pc = 0x80D421D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421D4u)) return;
    // 80D421D4: bl      0x80509CF0
    {
            ctx->lr = 0x80D421D8u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80D421D8:
    ctx->pc = 0x80D421D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D421D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D421D8: lwz     r0, 20(r1)
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
label_80D421DC:
    ctx->pc = 0x80D421DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D421DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D421DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D421E0:
    ctx->pc = 0x80D421E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421E0u)) return;
    // 80D421E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D421E4:
    ctx->pc = 0x80D421E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421E4u)) return;
    // 80D421E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D421E8:
    ctx->pc = 0x80D421E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D421E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D421E8: stwu     r1, -32(r1)
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
label_80D421EC:
    ctx->pc = 0x80D421ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D421EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D421F0:
    ctx->pc = 0x80D421F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D421F0: stw     r0, 36(r1)
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
label_80D421F4:
    ctx->pc = 0x80D421F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D421F4: stw     r31, 28(r1)
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
label_80D421F8:
    ctx->pc = 0x80D421F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D421F8: stw     r30, 24(r1)
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
label_80D421FC:
    ctx->pc = 0x80D421FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D421FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D421FC: stw     r29, 20(r1)
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
label_80D42200:
    ctx->pc = 0x80D42200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42200: lwz     r31, 32(r3)
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
label_80D42204:
    ctx->pc = 0x80D42204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42204: lwz     r30, 16(r31)
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
label_80D42208:
    ctx->pc = 0x80D42208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42208: lwz     r5, 28(r31)
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
label_80D4220C:
    ctx->pc = 0x80D4220Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4220Cu)) return;
    // 80D4220C: cmpwi   r5, 0
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

label_80D42210:
    ctx->pc = 0x80D42210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42210u)) return;
    // 80D42210: bc    4, 1, 0x80D42248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42248;
        }
    }

label_80D42214:
    ctx->pc = 0x80D42214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D42214: lwz     r4, 24(r31)
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
label_80D42218:
    ctx->pc = 0x80D42218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42218u)) return;
    // 80D42218: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D4221C:
    ctx->pc = 0x80D4221Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4221Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D4221C: lwz     r0, 20(r31)
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
label_80D42220:
    ctx->pc = 0x80D42220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D42220u)) return;
    // 80D42220: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D42224:
    ctx->pc = 0x80D42224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42224u)) return;
    // 80D42224: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D42228:
    ctx->pc = 0x80D42228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D42228u)) return;
    // 80D42228: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D4222C:
    ctx->pc = 0x80D4222Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4222Cu)) return;
    // 80D4222C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D42230:
    ctx->pc = 0x80D42230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42230u)) return;
    // 80D42230: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D42234:
    ctx->pc = 0x80D42234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42234u)) return;
    // 80D42234: bl      0x80509C74
    {
            ctx->lr = 0x80D42238u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D42238:
    ctx->pc = 0x80D42238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42238: stw     r29, 20(r31)
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
label_80D4223C:
    ctx->pc = 0x80D4223Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4223Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4223C: lwz     r3, 28(r31)
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
label_80D42240:
    ctx->pc = 0x80D42240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42240u)) return;
    // 80D42240: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D42244:
    ctx->pc = 0x80D42244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42244: stw     r0, 28(r31)
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
label_80D42248:
    ctx->pc = 0x80D42248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42248: lwz     r5, 40(r31)
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
label_80D4224C:
    ctx->pc = 0x80D4224Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4224Cu)) return;
    // 80D4224C: cmpwi   r5, 0
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

label_80D42250:
    ctx->pc = 0x80D42250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42250u)) return;
    // 80D42250: bc    4, 1, 0x80D42288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42288;
        }
    }

label_80D42254:
    ctx->pc = 0x80D42254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D42254: lwz     r4, 36(r31)
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
label_80D42258:
    ctx->pc = 0x80D42258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42258u)) return;
    // 80D42258: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D4225C:
    ctx->pc = 0x80D4225Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4225Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D4225C: lwz     r0, 32(r31)
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
label_80D42260:
    ctx->pc = 0x80D42260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D42260u)) return;
    // 80D42260: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D42264:
    ctx->pc = 0x80D42264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42264u)) return;
    // 80D42264: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D42268:
    ctx->pc = 0x80D42268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D42268u)) return;
    // 80D42268: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D4226C:
    ctx->pc = 0x80D4226Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4226Cu)) return;
    // 80D4226C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D42270:
    ctx->pc = 0x80D42270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42270u)) return;
    // 80D42270: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D42274:
    ctx->pc = 0x80D42274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42274u)) return;
    // 80D42274: bl      0x80509BF8
    {
            ctx->lr = 0x80D42278u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D42278:
    ctx->pc = 0x80D42278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42278: stw     r29, 32(r31)
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
label_80D4227C:
    ctx->pc = 0x80D4227Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4227Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4227C: lwz     r3, 40(r31)
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
label_80D42280:
    ctx->pc = 0x80D42280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42280u)) return;
    // 80D42280: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D42284:
    ctx->pc = 0x80D42284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42284: stw     r0, 40(r31)
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
label_80D42288:
    ctx->pc = 0x80D42288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42288: lwz     r5, 52(r31)
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
label_80D4228C:
    ctx->pc = 0x80D4228Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4228Cu)) return;
    // 80D4228C: cmpwi   r5, 0
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

label_80D42290:
    ctx->pc = 0x80D42290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42290u)) return;
    // 80D42290: bc    4, 1, 0x80D422C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D422C8;
        }
    }

label_80D42294:
    ctx->pc = 0x80D42294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D42294: lwz     r4, 48(r31)
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
label_80D42298:
    ctx->pc = 0x80D42298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42298u)) return;
    // 80D42298: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D4229C:
    ctx->pc = 0x80D4229Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4229Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D4229C: lwz     r0, 44(r31)
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
label_80D422A0:
    ctx->pc = 0x80D422A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D422A0u)) return;
    // 80D422A0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D422A4:
    ctx->pc = 0x80D422A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422A4u)) return;
    // 80D422A4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D422A8:
    ctx->pc = 0x80D422A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D422A8u)) return;
    // 80D422A8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D422AC:
    ctx->pc = 0x80D422ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422ACu)) return;
    // 80D422AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D422B0:
    ctx->pc = 0x80D422B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422B0u)) return;
    // 80D422B0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D422B4:
    ctx->pc = 0x80D422B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422B4u)) return;
    // 80D422B4: bl      0x80509B94
    {
            ctx->lr = 0x80D422B8u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D422B8:
    ctx->pc = 0x80D422B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D422B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D422B8: stw     r29, 44(r31)
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
label_80D422BC:
    ctx->pc = 0x80D422BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D422BC: lwz     r3, 52(r31)
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
label_80D422C0:
    ctx->pc = 0x80D422C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422C0u)) return;
    // 80D422C0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D422C4:
    ctx->pc = 0x80D422C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D422C4: stw     r0, 52(r31)
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
label_80D422C8:
    ctx->pc = 0x80D422C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D422C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D422C8: lwz     r31, 28(r1)
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
label_80D422CC:
    ctx->pc = 0x80D422CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D422CC: lwz     r30, 24(r1)
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
label_80D422D0:
    ctx->pc = 0x80D422D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D422D0: lwz     r29, 20(r1)
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
label_80D422D4:
    ctx->pc = 0x80D422D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D422D4: lwz     r0, 36(r1)
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
label_80D422D8:
    ctx->pc = 0x80D422D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D422D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D422D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D422DC:
    ctx->pc = 0x80D422DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422DCu)) return;
    // 80D422DC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D422E0:
    ctx->pc = 0x80D422E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422E0u)) return;
    // 80D422E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D422E4:
    ctx->pc = 0x80D422E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D422E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D422E4: stwu     r1, -32(r1)
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
label_80D422E8:
    ctx->pc = 0x80D422E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D422E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D422EC:
    ctx->pc = 0x80D422ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D422EC: stw     r0, 36(r1)
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
label_80D422F0:
    ctx->pc = 0x80D422F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D422F0: stw     r31, 28(r1)
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
label_80D422F4:
    ctx->pc = 0x80D422F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D422F4: stw     r30, 24(r1)
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
label_80D422F8:
    ctx->pc = 0x80D422F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D422F8: stw     r29, 20(r1)
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
label_80D422FC:
    ctx->pc = 0x80D422FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D422FCu)) return;
    // 80D422FC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D42300:
    ctx->pc = 0x80D42300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42300u)) return;
    // 80D42300: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D42304:
    ctx->pc = 0x80D42304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42304u)) return;
    // 80D42304: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D42308:
    ctx->pc = 0x80D42308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42308u)) return;
    // 80D42308: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D4230C:
    ctx->pc = 0x80D4230Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4230Cu)) return;
    // 80D4230C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D42310:
    ctx->pc = 0x80D42310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42310u)) return;
    // 80D42310: bl      0x8050FD60
    {
            ctx->lr = 0x80D42314u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D42314:
    ctx->pc = 0x80D42314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42314: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D42318:
    ctx->pc = 0x80D42318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42318u)) return;
    // 80D42318: cmplwi  r31, 0x0000
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

label_80D4231C:
    ctx->pc = 0x80D4231Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4231Cu)) return;
    // 80D4231C: bc    12, 2, 0x80D42380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42380;
        }
    }

label_80D42320:
    ctx->pc = 0x80D42320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D42320: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D42324:
    ctx->pc = 0x80D42324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42324u)) return;
    // 80D42324: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D42328:
    ctx->pc = 0x80D42328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42328u)) return;
    // 80D42328: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D4232C:
    ctx->pc = 0x80D4232Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4232Cu)) return;
    // 80D4232C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D42330:
    ctx->pc = 0x80D42330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42330u)) return;
    // 80D42330: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D42334:
    ctx->pc = 0x80D42334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42334u)) return;
    // 80D42334: bl      0x8050A0D4
    {
            ctx->lr = 0x80D42338u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D42338:
    ctx->pc = 0x80D42338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80D42338: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D4233C:
    ctx->pc = 0x80D4233Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4233Cu)) return;
    // 80D4233C: addi    r0, r3, 8680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8680);

label_80D42340:
    ctx->pc = 0x80D42340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D42340: stw     r0, 16(r31)
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
label_80D42344:
    ctx->pc = 0x80D42344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42344u)) return;
    // 80D42344: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D42348:
    ctx->pc = 0x80D42348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42348u)) return;
    // 80D42348: addi    r0, r3, 8640
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8640);

label_80D4234C:
    ctx->pc = 0x80D4234Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4234Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D4234C: stw     r0, 24(r31)
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
label_80D42350:
    ctx->pc = 0x80D42350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42350: lwz     r3, 32(r31)
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
label_80D42354:
    ctx->pc = 0x80D42354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42354: stw     r31, 16(r3)
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
label_80D42358:
    ctx->pc = 0x80D42358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42358u)) return;
    // 80D42358: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D4235C:
    ctx->pc = 0x80D4235Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4235Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D4235C: stw     r0, 20(r3)
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
label_80D42360:
    ctx->pc = 0x80D42360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42360: stw     r0, 24(r3)
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
label_80D42364:
    ctx->pc = 0x80D42364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42364: stw     r0, 28(r3)
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
label_80D42368:
    ctx->pc = 0x80D42368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42368: stw     r0, 32(r3)
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
label_80D4236C:
    ctx->pc = 0x80D4236Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4236Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4236C: stw     r0, 36(r3)
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
label_80D42370:
    ctx->pc = 0x80D42370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42370: stw     r0, 40(r3)
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
label_80D42374:
    ctx->pc = 0x80D42374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42374: stw     r0, 44(r3)
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
label_80D42378:
    ctx->pc = 0x80D42378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42378: stw     r0, 48(r3)
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
label_80D4237C:
    ctx->pc = 0x80D4237Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4237Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D4237C: stw     r0, 52(r3)
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
label_80D42380:
    ctx->pc = 0x80D42380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D42380: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D42384:
    ctx->pc = 0x80D42384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42384: lwz     r31, 28(r1)
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
label_80D42388:
    ctx->pc = 0x80D42388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42388: lwz     r30, 24(r1)
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
label_80D4238C:
    ctx->pc = 0x80D4238Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4238Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4238C: lwz     r29, 20(r1)
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
label_80D42390:
    ctx->pc = 0x80D42390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42390: lwz     r0, 36(r1)
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
label_80D42394:
    ctx->pc = 0x80D42394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42394: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42398:
    ctx->pc = 0x80D42398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42398u)) return;
    // 80D42398: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D4239C:
    ctx->pc = 0x80D4239Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4239Cu)) return;
    // 80D4239C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D423A0:
    ctx->pc = 0x80D423A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D423A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D423A0: stwu     r1, -16(r1)
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
label_80D423A4:
    ctx->pc = 0x80D423A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D423A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D423A8:
    ctx->pc = 0x80D423A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D423A8: stw     r0, 20(r1)
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
label_80D423AC:
    ctx->pc = 0x80D423ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D423AC: stw     r31, 12(r1)
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
label_80D423B0:
    ctx->pc = 0x80D423B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D423B0: stw     r30, 8(r1)
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
label_80D423B4:
    ctx->pc = 0x80D423B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423B4u)) return;
    // 80D423B4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D423B8:
    ctx->pc = 0x80D423B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D423B8: lwz     r31, 32(r3)
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
label_80D423BC:
    ctx->pc = 0x80D423BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D423BC: stw     r30, 24(r31)
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
label_80D423C0:
    ctx->pc = 0x80D423C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D423C0: stw     r5, 28(r31)
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
label_80D423C4:
    ctx->pc = 0x80D423C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423C4u)) return;
    // 80D423C4: cmpwi   r5, 0
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

label_80D423C8:
    ctx->pc = 0x80D423C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423C8u)) return;
    // 80D423C8: bc    12, 1, 0x80D423D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D423D8;
        }
    }

label_80D423CC:
    ctx->pc = 0x80D423CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D423CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D423CC: lwz     r3, 16(r31)
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
label_80D423D0:
    ctx->pc = 0x80D423D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423D0u)) return;
    // 80D423D0: bl      0x80509C74
    {
            ctx->lr = 0x80D423D4u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D423D4:
    ctx->pc = 0x80D423D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D423D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D423D4: stw     r30, 20(r31)
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
label_80D423D8:
    ctx->pc = 0x80D423D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D423D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D423D8: lwz     r31, 12(r1)
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
label_80D423DC:
    ctx->pc = 0x80D423DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D423DC: lwz     r30, 8(r1)
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
label_80D423E0:
    ctx->pc = 0x80D423E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D423E0: lwz     r0, 20(r1)
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
label_80D423E4:
    ctx->pc = 0x80D423E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D423E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D423E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D423E8:
    ctx->pc = 0x80D423E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423E8u)) return;
    // 80D423E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D423EC:
    ctx->pc = 0x80D423ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423ECu)) return;
    // 80D423EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D423F0:
    ctx->pc = 0x80D423F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D423F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D423F0: stwu     r1, -16(r1)
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
label_80D423F4:
    ctx->pc = 0x80D423F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D423F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D423F8:
    ctx->pc = 0x80D423F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D423F8: stw     r0, 20(r1)
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
label_80D423FC:
    ctx->pc = 0x80D423FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D423FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D423FC: stw     r31, 12(r1)
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
label_80D42400:
    ctx->pc = 0x80D42400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42400: stw     r30, 8(r1)
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
label_80D42404:
    ctx->pc = 0x80D42404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42404u)) return;
    // 80D42404: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D42408:
    ctx->pc = 0x80D42408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42408: lwz     r31, 32(r3)
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
label_80D4240C:
    ctx->pc = 0x80D4240Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4240Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4240C: stw     r30, 36(r31)
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
label_80D42410:
    ctx->pc = 0x80D42410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42410: stw     r5, 40(r31)
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
label_80D42414:
    ctx->pc = 0x80D42414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42414u)) return;
    // 80D42414: cmpwi   r5, 0
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

label_80D42418:
    ctx->pc = 0x80D42418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42418u)) return;
    // 80D42418: bc    12, 1, 0x80D42428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42428;
        }
    }

label_80D4241C:
    ctx->pc = 0x80D4241Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4241Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4241C: lwz     r3, 16(r31)
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
label_80D42420:
    ctx->pc = 0x80D42420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42420u)) return;
    // 80D42420: bl      0x80509BF8
    {
            ctx->lr = 0x80D42424u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D42424:
    ctx->pc = 0x80D42424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42424: stw     r30, 32(r31)
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
label_80D42428:
    ctx->pc = 0x80D42428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42428: lwz     r31, 12(r1)
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
label_80D4242C:
    ctx->pc = 0x80D4242Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4242Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4242C: lwz     r30, 8(r1)
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
label_80D42430:
    ctx->pc = 0x80D42430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42430: lwz     r0, 20(r1)
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
label_80D42434:
    ctx->pc = 0x80D42434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42434: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42438:
    ctx->pc = 0x80D42438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42438u)) return;
    // 80D42438: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D4243C:
    ctx->pc = 0x80D4243Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4243Cu)) return;
    // 80D4243C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42440:
    ctx->pc = 0x80D42440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42440: stwu     r1, -16(r1)
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
label_80D42444:
    ctx->pc = 0x80D42444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42444: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42448:
    ctx->pc = 0x80D42448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42448: stw     r0, 20(r1)
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
label_80D4244C:
    ctx->pc = 0x80D4244Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4244Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D4244C: stw     r31, 12(r1)
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
label_80D42450:
    ctx->pc = 0x80D42450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42450: stw     r30, 8(r1)
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
label_80D42454:
    ctx->pc = 0x80D42454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42454u)) return;
    // 80D42454: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D42458:
    ctx->pc = 0x80D42458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42458: lwz     r31, 32(r3)
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
label_80D4245C:
    ctx->pc = 0x80D4245Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4245Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4245C: stw     r30, 48(r31)
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
label_80D42460:
    ctx->pc = 0x80D42460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42460: stw     r5, 52(r31)
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
label_80D42464:
    ctx->pc = 0x80D42464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42464u)) return;
    // 80D42464: cmpwi   r5, 0
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

label_80D42468:
    ctx->pc = 0x80D42468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42468u)) return;
    // 80D42468: bc    12, 1, 0x80D42478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42478;
        }
    }

label_80D4246C:
    ctx->pc = 0x80D4246Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4246Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4246C: lwz     r3, 16(r31)
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
label_80D42470:
    ctx->pc = 0x80D42470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42470u)) return;
    // 80D42470: bl      0x80509B94
    {
            ctx->lr = 0x80D42474u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D42474:
    ctx->pc = 0x80D42474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42474: stw     r30, 44(r31)
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
label_80D42478:
    ctx->pc = 0x80D42478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42478: lwz     r31, 12(r1)
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
label_80D4247C:
    ctx->pc = 0x80D4247Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4247Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4247C: lwz     r30, 8(r1)
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
label_80D42480:
    ctx->pc = 0x80D42480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42480: lwz     r0, 20(r1)
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
label_80D42484:
    ctx->pc = 0x80D42484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42484: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42488:
    ctx->pc = 0x80D42488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42488u)) return;
    // 80D42488: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D4248C:
    ctx->pc = 0x80D4248Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4248Cu)) return;
    // 80D4248C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42490:
    ctx->pc = 0x80D42490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42490: stwu     r1, -16(r1)
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
label_80D42494:
    ctx->pc = 0x80D42494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42494: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42498:
    ctx->pc = 0x80D42498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42498: stw     r0, 20(r1)
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
label_80D4249C:
    ctx->pc = 0x80D4249Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4249Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4249C: stw     r31, 12(r1)
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
label_80D424A0:
    ctx->pc = 0x80D424A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424A0u)) return;
    // 80D424A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D424A4:
    ctx->pc = 0x80D424A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424A4u)) return;
    // 80D424A4: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D424A8:
    ctx->pc = 0x80D424A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424A8u)) return;
    // 80D424A8: addi    r4, r4, -15252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15252);

label_80D424AC:
    ctx->pc = 0x80D424ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D424AC: lwz     r0, 0(r4)
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
label_80D424B0:
    ctx->pc = 0x80D424B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424B0u)) return;
    // 80D424B0: cmplwi  r0, 0x0000
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

label_80D424B4:
    ctx->pc = 0x80D424B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424B4u)) return;
    // 80D424B4: bc    4, 2, 0x80D424D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D424D8;
        }
    }

label_80D424B8:
    ctx->pc = 0x80D424B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D424B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D424B8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D424BC:
    ctx->pc = 0x80D424BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424BCu)) return;
    // 80D424BC: bl      0x8050EEC0
    {
            ctx->lr = 0x80D424C0u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80D424C0:
    ctx->pc = 0x80D424C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D424C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D424C0: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D424C4:
    ctx->pc = 0x80D424C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424C4u)) return;
    // 80D424C4: addi    r4, r4, -15252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15252);

label_80D424C8:
    ctx->pc = 0x80D424C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D424C8: stw     r3, 0(r4)
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
label_80D424CC:
    ctx->pc = 0x80D424CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424CCu)) return;
    // 80D424CC: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D424D0:
    ctx->pc = 0x80D424D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424D0u)) return;
    // 80D424D0: addi    r3, r3, -15256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15256);

label_80D424D4:
    ctx->pc = 0x80D424D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D424D4: stw     r31, 0(r3)
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
label_80D424D8:
    ctx->pc = 0x80D424D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D424D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D424D8: lwz     r31, 12(r1)
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
label_80D424DC:
    ctx->pc = 0x80D424DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D424DC: lwz     r0, 20(r1)
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
label_80D424E0:
    ctx->pc = 0x80D424E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D424E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D424E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D424E4:
    ctx->pc = 0x80D424E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424E4u)) return;
    // 80D424E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D424E8:
    ctx->pc = 0x80D424E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424E8u)) return;
    // 80D424E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D424EC:
    ctx->pc = 0x80D424ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D424ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D424EC: stwu     r1, -32(r1)
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
label_80D424F0:
    ctx->pc = 0x80D424F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D424F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D424F4:
    ctx->pc = 0x80D424F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D424F4: stw     r0, 36(r1)
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
label_80D424F8:
    ctx->pc = 0x80D424F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D424F8: stw     r31, 28(r1)
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
label_80D424FC:
    ctx->pc = 0x80D424FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D424FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D424FC: stw     r30, 24(r1)
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
label_80D42500:
    ctx->pc = 0x80D42500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42500: stw     r29, 20(r1)
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
label_80D42504:
    ctx->pc = 0x80D42504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42504: stw     r28, 16(r1)
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
label_80D42508:
    ctx->pc = 0x80D42508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42508u)) return;
    // 80D42508: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D4250C:
    ctx->pc = 0x80D4250Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4250Cu)) return;
    // 80D4250C: addi    r30, r3, -15252
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-15252);

label_80D42510:
    ctx->pc = 0x80D42510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42510: lwz     r0, 0(r30)
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
label_80D42514:
    ctx->pc = 0x80D42514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42514u)) return;
    // 80D42514: cmplwi  r0, 0x0000
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

label_80D42518:
    ctx->pc = 0x80D42518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42518u)) return;
    // 80D42518: bc    12, 2, 0x80D42578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42578;
        }
    }

label_80D4251C:
    ctx->pc = 0x80D4251Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4251Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D4251C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80D42520:
    ctx->pc = 0x80D42520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42520u)) return;
    // 80D42520: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80D42524:
    ctx->pc = 0x80D42524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42524u)) return;
    // 80D42524: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D42528:
    ctx->pc = 0x80D42528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42528u)) return;
    // 80D42528: addi    r31, r3, -15256
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-15256);

label_80D4252C:
    ctx->pc = 0x80D4252Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4252Cu)) return;
    // 80D4252C: b       0x80D4254C
    {
            goto label_80D4254C;
    }

label_80D42530:
    ctx->pc = 0x80D42530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42530: lwz     r3, 0(r30)
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
label_80D42534:
    ctx->pc = 0x80D42534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42534: lwzx    r3, r3, r29
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
label_80D42538:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42538u)) return;
    // 80D42538: cmplwi  r3, 0x0000
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

label_80D4253C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4253Cu)) return;
    // 80D4253C: bc    12, 2, 0x80D42544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42544;
        }
    }

label_80D42540:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42540: bl      0x8050F9E0
    {
            ctx->lr = 0x80D42544u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D42544:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42544: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80D42548:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42548u)) return;
    // 80D42548: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80D4254C:
    ctx->pc = 0x80D4254Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4254Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4254C: lwz     r0, 0(r31)
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
label_80D42550:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42550u)) return;
    // 80D42550: cmpw    r28, r0
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

label_80D42554:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42554u)) return;
    // 80D42554: bc    12, 0, 0x80D42530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D42530u;
                return;
            }
            goto label_80D42530;
        }
    }

label_80D42558:
    ctx->pc = 0x80D42558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D42558: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D4255C:
    ctx->pc = 0x80D4255Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4255Cu)) return;
    // 80D4255C: addi    r3, r3, -15252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15252);

label_80D42560:
    ctx->pc = 0x80D42560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42560: lwz     r3, 0(r3)
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
label_80D42564:
    ctx->pc = 0x80D42564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42564u)) return;
    // 80D42564: bl      0x8050ED40
    {
            ctx->lr = 0x80D42568u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D42568:
    ctx->pc = 0x80D42568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D42568: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D4256C:
    ctx->pc = 0x80D4256Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4256Cu)) return;
    // 80D4256C: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D42570:
    ctx->pc = 0x80D42570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42570u)) return;
    // 80D42570: addi    r3, r3, -15252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15252);

label_80D42574:
    ctx->pc = 0x80D42574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42574: stw     r0, 0(r3)
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
label_80D42578:
    ctx->pc = 0x80D42578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42578: lwz     r31, 28(r1)
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
label_80D4257C:
    ctx->pc = 0x80D4257Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4257Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D4257C: lwz     r30, 24(r1)
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
label_80D42580:
    ctx->pc = 0x80D42580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42580: lwz     r29, 20(r1)
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
label_80D42584:
    ctx->pc = 0x80D42584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42584: lwz     r28, 16(r1)
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
label_80D42588:
    ctx->pc = 0x80D42588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42588: lwz     r0, 36(r1)
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
label_80D4258C:
    ctx->pc = 0x80D4258Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D4258Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4258C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42590:
    ctx->pc = 0x80D42590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42590u)) return;
    // 80D42590: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D42594:
    ctx->pc = 0x80D42594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42594u)) return;
    // 80D42594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42598:
    ctx->pc = 0x80D42598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42598: stwu     r1, -16(r1)
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
label_80D4259C:
    ctx->pc = 0x80D4259Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4259Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D4259C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D425A0:
    ctx->pc = 0x80D425A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D425A0: stw     r0, 20(r1)
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
label_80D425A4:
    ctx->pc = 0x80D425A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D425A4: stw     r31, 12(r1)
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
label_80D425A8:
    ctx->pc = 0x80D425A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425A8u)) return;
    // 80D425A8: lis     r6, -27319
    ctx->gpr[6] = ((u32)(s32)(-27319) << 16);

label_80D425AC:
    ctx->pc = 0x80D425ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425ACu)) return;
    // 80D425AC: addi    r6, r6, -15256
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15256);

label_80D425B0:
    ctx->pc = 0x80D425B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D425B0: lwz     r0, 0(r6)
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
label_80D425B4:
    ctx->pc = 0x80D425B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425B4u)) return;
    // 80D425B4: cmpw    r3, r0
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

label_80D425B8:
    ctx->pc = 0x80D425B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425B8u)) return;
    // 80D425B8: bc    4, 0, 0x80D425F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D425F4;
        }
    }

label_80D425BC:
    ctx->pc = 0x80D425BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D425BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D425BC: lis     r6, -27319
    ctx->gpr[6] = ((u32)(s32)(-27319) << 16);

label_80D425C0:
    ctx->pc = 0x80D425C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425C0u)) return;
    // 80D425C0: addi    r6, r6, -15252
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15252);

label_80D425C4:
    ctx->pc = 0x80D425C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D425C4: lwz     r6, 0(r6)
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
label_80D425C8:
    ctx->pc = 0x80D425C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425C8u)) return;
    // 80D425C8: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D425CC:
    ctx->pc = 0x80D425CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D425CC: lwzx    r0, r6, r31
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
label_80D425D0:
    ctx->pc = 0x80D425D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425D0u)) return;
    // 80D425D0: cmplwi  r0, 0x0000
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

label_80D425D4:
    ctx->pc = 0x80D425D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425D4u)) return;
    // 80D425D4: bc    4, 2, 0x80D425F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D425F4;
        }
    }

label_80D425D8:
    ctx->pc = 0x80D425D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D425D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D425D8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D425DC:
    ctx->pc = 0x80D425DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425DCu)) return;
    // 80D425DC: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D425E0:
    ctx->pc = 0x80D425E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425E0u)) return;
    // 80D425E0: bl      0x80D422E4
    {
            ctx->lr = 0x80D425E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D422E4u;
                return;
            }
            goto label_80D422E4;
    }

label_80D425E4:
    ctx->pc = 0x80D425E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D425E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D425E4: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D425E8:
    ctx->pc = 0x80D425E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425E8u)) return;
    // 80D425E8: addi    r4, r4, -15252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15252);

label_80D425EC:
    ctx->pc = 0x80D425ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D425EC: lwz     r4, 0(r4)
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
label_80D425F0:
    ctx->pc = 0x80D425F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D425F0: stwx    r3, r4, r31
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
label_80D425F4:
    ctx->pc = 0x80D425F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D425F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D425F4: lwz     r31, 12(r1)
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
label_80D425F8:
    ctx->pc = 0x80D425F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D425F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D425F8: lwz     r0, 20(r1)
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
label_80D425FC:
    ctx->pc = 0x80D425FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D425FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D425FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42600:
    ctx->pc = 0x80D42600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42600u)) return;
    // 80D42600: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42604:
    ctx->pc = 0x80D42604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42604u)) return;
    // 80D42604: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42608:
    ctx->pc = 0x80D42608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42608: stwu     r1, -16(r1)
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
label_80D4260C:
    ctx->pc = 0x80D4260Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4260Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D4260C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42610:
    ctx->pc = 0x80D42610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42610: stw     r0, 20(r1)
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
label_80D42614:
    ctx->pc = 0x80D42614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42614: stw     r31, 12(r1)
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
label_80D42618:
    ctx->pc = 0x80D42618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42618u)) return;
    // 80D42618: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D4261C:
    ctx->pc = 0x80D4261Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4261Cu)) return;
    // 80D4261C: addi    r4, r4, -15256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15256);

label_80D42620:
    ctx->pc = 0x80D42620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42620: lwz     r0, 0(r4)
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
label_80D42624:
    ctx->pc = 0x80D42624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42624u)) return;
    // 80D42624: cmpw    r3, r0
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

label_80D42628:
    ctx->pc = 0x80D42628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42628u)) return;
    // 80D42628: bc    4, 0, 0x80D42660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42660;
        }
    }

label_80D4262C:
    ctx->pc = 0x80D4262Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4262Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D4262C: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D42630:
    ctx->pc = 0x80D42630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42630u)) return;
    // 80D42630: addi    r4, r4, -15252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15252);

label_80D42634:
    ctx->pc = 0x80D42634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42634: lwz     r4, 0(r4)
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
label_80D42638:
    ctx->pc = 0x80D42638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42638u)) return;
    // 80D42638: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D4263C:
    ctx->pc = 0x80D4263Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4263Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4263C: lwzx    r3, r4, r31
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
label_80D42640:
    ctx->pc = 0x80D42640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42640u)) return;
    // 80D42640: cmplwi  r3, 0x0000
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

label_80D42644:
    ctx->pc = 0x80D42644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42644u)) return;
    // 80D42644: bc    12, 2, 0x80D42660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42660;
        }
    }

label_80D42648:
    ctx->pc = 0x80D42648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42648: bl      0x8050F9E0
    {
            ctx->lr = 0x80D4264Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D4264C:
    ctx->pc = 0x80D4264Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4264Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D4264C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D42650:
    ctx->pc = 0x80D42650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42650u)) return;
    // 80D42650: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D42654:
    ctx->pc = 0x80D42654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42654u)) return;
    // 80D42654: addi    r3, r3, -15252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15252);

label_80D42658:
    ctx->pc = 0x80D42658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42658: lwz     r3, 0(r3)
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
label_80D4265C:
    ctx->pc = 0x80D4265Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4265Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D4265C: stwx    r0, r3, r31
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
label_80D42660:
    ctx->pc = 0x80D42660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42660: lwz     r31, 12(r1)
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
label_80D42664:
    ctx->pc = 0x80D42664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42664: lwz     r0, 20(r1)
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
label_80D42668:
    ctx->pc = 0x80D42668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42668: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4266C:
    ctx->pc = 0x80D4266Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4266Cu)) return;
    // 80D4266C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42670:
    ctx->pc = 0x80D42670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42670u)) return;
    // 80D42670: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42674:
    ctx->pc = 0x80D42674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42674: stwu     r1, -16(r1)
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
label_80D42678:
    ctx->pc = 0x80D42678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42678: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4267C:
    ctx->pc = 0x80D4267Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4267Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4267C: stw     r0, 20(r1)
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
label_80D42680:
    ctx->pc = 0x80D42680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42680u)) return;
    // 80D42680: lis     r6, -27319
    ctx->gpr[6] = ((u32)(s32)(-27319) << 16);

label_80D42684:
    ctx->pc = 0x80D42684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42684u)) return;
    // 80D42684: addi    r6, r6, -15256
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15256);

label_80D42688:
    ctx->pc = 0x80D42688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42688: lwz     r0, 0(r6)
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
label_80D4268C:
    ctx->pc = 0x80D4268Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4268Cu)) return;
    // 80D4268C: cmpw    r3, r0
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

label_80D42690:
    ctx->pc = 0x80D42690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42690u)) return;
    // 80D42690: bc    4, 0, 0x80D426B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D426B4;
        }
    }

label_80D42694:
    ctx->pc = 0x80D42694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D42694: lis     r6, -27319
    ctx->gpr[6] = ((u32)(s32)(-27319) << 16);

label_80D42698:
    ctx->pc = 0x80D42698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42698u)) return;
    // 80D42698: addi    r6, r6, -15252
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15252);

label_80D4269C:
    ctx->pc = 0x80D4269Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4269Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4269C: lwz     r6, 0(r6)
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
label_80D426A0:
    ctx->pc = 0x80D426A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426A0u)) return;
    // 80D426A0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D426A4:
    ctx->pc = 0x80D426A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D426A4: lwzx    r3, r6, r0
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
label_80D426A8:
    ctx->pc = 0x80D426A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426A8u)) return;
    // 80D426A8: cmplwi  r3, 0x0000
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

label_80D426AC:
    ctx->pc = 0x80D426ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426ACu)) return;
    // 80D426AC: bc    12, 2, 0x80D426B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D426B4;
        }
    }

label_80D426B0:
    ctx->pc = 0x80D426B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D426B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D426B0: bl      0x80D423A0
    {
            ctx->lr = 0x80D426B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D423A0u;
                return;
            }
            goto label_80D423A0;
    }

label_80D426B4:
    ctx->pc = 0x80D426B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D426B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D426B4: lwz     r0, 20(r1)
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
label_80D426B8:
    ctx->pc = 0x80D426B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D426B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D426B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D426BC:
    ctx->pc = 0x80D426BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426BCu)) return;
    // 80D426BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D426C0:
    ctx->pc = 0x80D426C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426C0u)) return;
    // 80D426C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D426C4:
    ctx->pc = 0x80D426C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D426C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D426C4: stwu     r1, -16(r1)
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
label_80D426C8:
    ctx->pc = 0x80D426C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D426C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D426CC:
    ctx->pc = 0x80D426CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D426CC: stw     r0, 20(r1)
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
label_80D426D0:
    ctx->pc = 0x80D426D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426D0u)) return;
    // 80D426D0: lis     r6, -27319
    ctx->gpr[6] = ((u32)(s32)(-27319) << 16);

label_80D426D4:
    ctx->pc = 0x80D426D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426D4u)) return;
    // 80D426D4: addi    r6, r6, -15256
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15256);

label_80D426D8:
    ctx->pc = 0x80D426D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D426D8: lwz     r0, 0(r6)
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
label_80D426DC:
    ctx->pc = 0x80D426DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426DCu)) return;
    // 80D426DC: cmpw    r3, r0
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

label_80D426E0:
    ctx->pc = 0x80D426E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426E0u)) return;
    // 80D426E0: bc    4, 0, 0x80D42704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42704;
        }
    }

label_80D426E4:
    ctx->pc = 0x80D426E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D426E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D426E4: lis     r6, -27319
    ctx->gpr[6] = ((u32)(s32)(-27319) << 16);

label_80D426E8:
    ctx->pc = 0x80D426E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426E8u)) return;
    // 80D426E8: addi    r6, r6, -15252
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15252);

label_80D426EC:
    ctx->pc = 0x80D426ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D426EC: lwz     r6, 0(r6)
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
label_80D426F0:
    ctx->pc = 0x80D426F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426F0u)) return;
    // 80D426F0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D426F4:
    ctx->pc = 0x80D426F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D426F4: lwzx    r3, r6, r0
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
label_80D426F8:
    ctx->pc = 0x80D426F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426F8u)) return;
    // 80D426F8: cmplwi  r3, 0x0000
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

label_80D426FC:
    ctx->pc = 0x80D426FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D426FCu)) return;
    // 80D426FC: bc    12, 2, 0x80D42704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42704;
        }
    }

label_80D42700:
    ctx->pc = 0x80D42700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42700: bl      0x80D423F0
    {
            ctx->lr = 0x80D42704u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D423F0u;
                return;
            }
            goto label_80D423F0;
    }

label_80D42704:
    ctx->pc = 0x80D42704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42704: lwz     r0, 20(r1)
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
label_80D42708:
    ctx->pc = 0x80D42708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42708: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4270C:
    ctx->pc = 0x80D4270Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4270Cu)) return;
    // 80D4270C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42710:
    ctx->pc = 0x80D42710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42710u)) return;
    // 80D42710: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42714:
    ctx->pc = 0x80D42714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42714: stwu     r1, -16(r1)
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
label_80D42718:
    ctx->pc = 0x80D42718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42718: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4271C:
    ctx->pc = 0x80D4271Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4271Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4271C: stw     r0, 20(r1)
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
label_80D42720:
    ctx->pc = 0x80D42720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42720u)) return;
    // 80D42720: lis     r6, -27319
    ctx->gpr[6] = ((u32)(s32)(-27319) << 16);

label_80D42724:
    ctx->pc = 0x80D42724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42724u)) return;
    // 80D42724: addi    r6, r6, -15256
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15256);

label_80D42728:
    ctx->pc = 0x80D42728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42728: lwz     r0, 0(r6)
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
label_80D4272C:
    ctx->pc = 0x80D4272Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4272Cu)) return;
    // 80D4272C: cmpw    r3, r0
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

label_80D42730:
    ctx->pc = 0x80D42730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42730u)) return;
    // 80D42730: bc    4, 0, 0x80D42754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42754;
        }
    }

label_80D42734:
    ctx->pc = 0x80D42734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D42734: lis     r6, -27319
    ctx->gpr[6] = ((u32)(s32)(-27319) << 16);

label_80D42738:
    ctx->pc = 0x80D42738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42738u)) return;
    // 80D42738: addi    r6, r6, -15252
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15252);

label_80D4273C:
    ctx->pc = 0x80D4273Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4273Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4273C: lwz     r6, 0(r6)
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
label_80D42740:
    ctx->pc = 0x80D42740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42740u)) return;
    // 80D42740: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D42744:
    ctx->pc = 0x80D42744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42744: lwzx    r3, r6, r0
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
label_80D42748:
    ctx->pc = 0x80D42748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42748u)) return;
    // 80D42748: cmplwi  r3, 0x0000
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

label_80D4274C:
    ctx->pc = 0x80D4274Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4274Cu)) return;
    // 80D4274C: bc    12, 2, 0x80D42754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42754;
        }
    }

label_80D42750:
    ctx->pc = 0x80D42750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42750: bl      0x80D42440
    {
            ctx->lr = 0x80D42754u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D42440u;
                return;
            }
            goto label_80D42440;
    }

label_80D42754:
    ctx->pc = 0x80D42754u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42754u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42754: lwz     r0, 20(r1)
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
label_80D42758:
    ctx->pc = 0x80D42758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42758: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4275C:
    ctx->pc = 0x80D4275Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4275Cu)) return;
    // 80D4275C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42760:
    ctx->pc = 0x80D42760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42760u)) return;
    // 80D42760: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42764:
    ctx->pc = 0x80D42764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D42764: stwu     r1, -32(r1)
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
label_80D42768:
    ctx->pc = 0x80D42768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42768: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4276C:
    ctx->pc = 0x80D4276Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4276Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D4276C: stw     r0, 36(r1)
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
label_80D42770:
    ctx->pc = 0x80D42770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42770: stw     r31, 28(r1)
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
label_80D42774:
    ctx->pc = 0x80D42774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42774: stw     r30, 24(r1)
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
label_80D42778:
    ctx->pc = 0x80D42778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42778: stw     r29, 20(r1)
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
label_80D4277C:
    ctx->pc = 0x80D4277Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4277Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4277C: stw     r28, 16(r1)
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
label_80D42780:
    ctx->pc = 0x80D42780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42780u)) return;
    // 80D42780: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D42784:
    ctx->pc = 0x80D42784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42784u)) return;
    // 80D42784: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D42788:
    ctx->pc = 0x80D42788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42788u)) return;
    // 80D42788: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D4278C:
    ctx->pc = 0x80D4278Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4278Cu)) return;
    // 80D4278C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D42790:
    ctx->pc = 0x80D42790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42790u)) return;
    // 80D42790: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42794:
    ctx->pc = 0x80D42794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42794u)) return;
    // 80D42794: bl      0x80401DB0
    {
            ctx->lr = 0x80D42798u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80D42798:
    ctx->pc = 0x80D42798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D42798: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D4279C:
    ctx->pc = 0x80D4279Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4279Cu)) return;
    // 80D4279C: addi    r4, r4, -15248
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15248);

label_80D427A0:
    ctx->pc = 0x80D427A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D427A0: lwz     r0, 0(r4)
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
label_80D427A4:
    ctx->pc = 0x80D427A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427A4u)) return;
    // 80D427A4: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D427A8:
    ctx->pc = 0x80D427A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427A8u)) return;
    // 80D427A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D427AC:
    ctx->pc = 0x80D427ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427ACu)) return;
    // 80D427AC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D427B0:
    ctx->pc = 0x80D427B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427B0u)) return;
    // 80D427B0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D427B4:
    ctx->pc = 0x80D427B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427B4u)) return;
    // 80D427B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D427B8:
    ctx->pc = 0x80D427B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427B8u)) return;
    // 80D427B8: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80D427BC:
    ctx->pc = 0x80D427BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427BCu)) return;
    // 80D427BC: bl      0x8050A0D4
    {
            ctx->lr = 0x80D427C0u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D427C0:
    ctx->pc = 0x80D427C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D427C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D427C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D427C4:
    ctx->pc = 0x80D427C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427C4u)) return;
    // 80D427C4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80D427C8:
    ctx->pc = 0x80D427C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427C8u)) return;
    // 80D427C8: bl      0x80509C74
    {
            ctx->lr = 0x80D427CCu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D427CC:
    ctx->pc = 0x80D427CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D427CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D427CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D427D0:
    ctx->pc = 0x80D427D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427D0u)) return;
    // 80D427D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D427D4:
    ctx->pc = 0x80D427D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427D4u)) return;
    // 80D427D4: bl      0x80509BF8
    {
            ctx->lr = 0x80D427D8u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D427D8:
    ctx->pc = 0x80D427D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D427D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D427D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D427DC:
    ctx->pc = 0x80D427DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427DCu)) return;
    // 80D427DC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D427E0:
    ctx->pc = 0x80D427E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427E0u)) return;
    // 80D427E0: bl      0x80509B94
    {
            ctx->lr = 0x80D427E4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D427E4:
    ctx->pc = 0x80D427E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D427E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D427E4: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D427E8:
    ctx->pc = 0x80D427E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427E8u)) return;
    // 80D427E8: addi    r4, r3, -15248
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15248);

label_80D427EC:
    ctx->pc = 0x80D427ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D427EC: lwz     r3, 0(r4)
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
label_80D427F0:
    ctx->pc = 0x80D427F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427F0u)) return;
    // 80D427F0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D427F4:
    ctx->pc = 0x80D427F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D427F4: stw     r0, 0(r4)
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
label_80D427F8:
    ctx->pc = 0x80D427F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427F8u)) return;
    // 80D427F8: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80D427FC:
    ctx->pc = 0x80D427FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D427FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D427FC: stw     r0, 0(r4)
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
label_80D42800:
    ctx->pc = 0x80D42800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42800: lwz     r31, 28(r1)
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
label_80D42804:
    ctx->pc = 0x80D42804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42804: lwz     r30, 24(r1)
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
label_80D42808:
    ctx->pc = 0x80D42808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42808: lwz     r29, 20(r1)
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
label_80D4280C:
    ctx->pc = 0x80D4280Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4280Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4280C: lwz     r28, 16(r1)
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
label_80D42810:
    ctx->pc = 0x80D42810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42810: lwz     r0, 36(r1)
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
label_80D42814:
    ctx->pc = 0x80D42814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42814: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42818:
    ctx->pc = 0x80D42818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42818u)) return;
    // 80D42818: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D4281C:
    ctx->pc = 0x80D4281Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4281Cu)) return;
    // 80D4281C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42820:
    ctx->pc = 0x80D42820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42820: stwu     r1, -16(r1)
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
label_80D42824:
    ctx->pc = 0x80D42824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42824: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42828:
    ctx->pc = 0x80D42828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42828: stw     r0, 20(r1)
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
label_80D4282C:
    ctx->pc = 0x80D4282Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4282Cu)) return;
    // 80D4282C: bl      0x8050E9CC
    {
            ctx->lr = 0x80D42830u;
            ctx->pc = 0x8050E9CCu;
            return;
    }

label_80D42830:
    ctx->pc = 0x80D42830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42830: lwz     r0, 20(r1)
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
label_80D42834:
    ctx->pc = 0x80D42834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42834: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42838:
    ctx->pc = 0x80D42838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42838u)) return;
    // 80D42838: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D4283C:
    ctx->pc = 0x80D4283Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4283Cu)) return;
    // 80D4283C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42840:
    ctx->pc = 0x80D42840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42844:
    ctx->pc = 0x80D42844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42844: stwu     r1, -16(r1)
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
label_80D42848:
    ctx->pc = 0x80D42848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42848: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4284C:
    ctx->pc = 0x80D4284Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4284Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D4284C: stw     r0, 20(r1)
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
label_80D42850:
    ctx->pc = 0x80D42850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42850: stw     r31, 12(r1)
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
label_80D42854:
    ctx->pc = 0x80D42854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42854: stw     r30, 8(r1)
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
label_80D42858:
    ctx->pc = 0x80D42858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42858u)) return;
    // 80D42858: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D4285C:
    ctx->pc = 0x80D4285Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4285Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4285C: lwz     r31, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42860:
    ctx->pc = 0x80D42860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42860: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42864:
    ctx->pc = 0x80D42864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42864: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42868:
    ctx->pc = 0x80D42868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42868u)) return;
    // 80D42868: cmplwi  r0, 0x0000
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

label_80D4286C:
    ctx->pc = 0x80D4286Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4286Cu)) return;
    // 80D4286C: bc    12, 2, 0x80D42878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42878;
        }
    }

label_80D42870:
    ctx->pc = 0x80D42870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42870: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D42874:
    ctx->pc = 0x80D42874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42874u)) return;
    // 80D42874: bl      0x80461320
    {
            ctx->lr = 0x80D42878u;
            ctx->pc = 0x80461320u;
            return;
    }

label_80D42878:
    ctx->pc = 0x80D42878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42878: lfs     f1, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42878u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4287C:
    ctx->pc = 0x80D4287Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4287Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D4287C: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D4287Cu)) return;
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
label_80D42880:
    ctx->pc = 0x80D42880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42880u)) return;
    // 80D42880: fadds   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42880u)) return;
    ppc_fadds(ctx, 2, 1, 0);

label_80D42884:
    ctx->pc = 0x80D42884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42884: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42884u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42888:
    ctx->pc = 0x80D42888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42888: lfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42888u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
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
label_80D4288C:
    ctx->pc = 0x80D4288Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4288Cu)) return;
    // 80D4288C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D4288Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80D42890:
    ctx->pc = 0x80D42890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42890u)) return;
    // 80D42890: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42894:
    ctx->pc = 0x80D42894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42894u)) return;
    // 80D42894: addi    r3, r3, -3144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3144);

label_80D42898:
    ctx->pc = 0x80D42898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42898: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42898u)) return;
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
label_80D4289C:
    ctx->pc = 0x80D4289Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4289Cu)) return;
    // 80D4289C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D4289Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80D428A0:
    ctx->pc = 0x80D428A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428A0u)) return;
    // 80D428A0: bc    4, 0, 0x80D428AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D428AC;
        }
    }

label_80D428A4:
    ctx->pc = 0x80D428A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D428A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D428A4: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D428A4u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_80D428A8:
    ctx->pc = 0x80D428A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428A8u)) return;
    // 80D428A8: b       0x80D428C4
    {
            goto label_80D428C4;
    }

label_80D428AC:
    ctx->pc = 0x80D428ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D428ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D428AC: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D428B0:
    ctx->pc = 0x80D428B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428B0u)) return;
    // 80D428B0: addi    r3, r3, -3140
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3140);

label_80D428B4:
    ctx->pc = 0x80D428B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D428B4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D428B4u)) return;
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
label_80D428B8:
    ctx->pc = 0x80D428B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428B8u)) return;
    // 80D428B8: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D428B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80D428BC:
    ctx->pc = 0x80D428BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428BCu)) return;
    // 80D428BC: bc    4, 1, 0x80D428C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D428C4;
        }
    }

label_80D428C0:
    ctx->pc = 0x80D428C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D428C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D428C0: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D428C0u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_80D428C4:
    ctx->pc = 0x80D428C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D428C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D428C4: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D428C8:
    ctx->pc = 0x80D428C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428C8u)) return;
    // 80D428C8: addi    r3, r3, -3144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3144);

label_80D428CC:
    ctx->pc = 0x80D428CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D428CC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D428CCu)) return;
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
label_80D428D0:
    ctx->pc = 0x80D428D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428D0u)) return;
    // 80D428D0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D428D0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D428D4:
    ctx->pc = 0x80D428D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428D4u)) return;
    // 80D428D4: bc    4, 0, 0x80D428DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D428DC;
        }
    }

label_80D428D8:
    ctx->pc = 0x80D428D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D428D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D428D8: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D428D8u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80D428DC:
    ctx->pc = 0x80D428DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D428DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D428DC: lwz     r3, 16(r31)
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
label_80D428E0:
    ctx->pc = 0x80D428E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428E0u)) return;
    // 80D428E0: bl      0x804C079C
    {
            ctx->lr = 0x80D428E4u;
            ctx->pc = 0x804C079Cu;
            return;
    }

label_80D428E4:
    ctx->pc = 0x80D428E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D428E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D428E4: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D428E8:
    ctx->pc = 0x80D428E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428E8u)) return;
    // 80D428E8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D428EC:
    ctx->pc = 0x80D428ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D428EC: stw     r0, 24(r31)
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
label_80D428F0:
    ctx->pc = 0x80D428F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428F0u)) return;
    // 80D428F0: cmpwi   r0, 0
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

label_80D428F4:
    ctx->pc = 0x80D428F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428F4u)) return;
    // 80D428F4: bc    4, 2, 0x80D42908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42908;
        }
    }

label_80D428F8:
    ctx->pc = 0x80D428F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D428F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D428F8: lwz     r3, 16(r31)
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
label_80D428FC:
    ctx->pc = 0x80D428FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D428FCu)) return;
    // 80D428FC: bl      0x804C0688
    {
            ctx->lr = 0x80D42900u;
            ctx->pc = 0x804C0688u;
            return;
    }

label_80D42900:
    ctx->pc = 0x80D42900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42900: lwz     r0, 20(r31)
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
label_80D42904:
    ctx->pc = 0x80D42904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42904: stw     r0, 24(r31)
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
label_80D42908:
    ctx->pc = 0x80D42908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42908: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D4290C:
    ctx->pc = 0x80D4290Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4290Cu)) return;
    // 80D4290C: bl      0x8050E95C
    {
            ctx->lr = 0x80D42910u;
            ctx->pc = 0x8050E95Cu;
            return;
    }

label_80D42910:
    ctx->pc = 0x80D42910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42910: lwz     r31, 12(r1)
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
label_80D42914:
    ctx->pc = 0x80D42914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42914: lwz     r30, 8(r1)
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
label_80D42918:
    ctx->pc = 0x80D42918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42918: lwz     r0, 20(r1)
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
label_80D4291C:
    ctx->pc = 0x80D4291Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D4291Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4291C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42920:
    ctx->pc = 0x80D42920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42920u)) return;
    // 80D42920: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42924:
    ctx->pc = 0x80D42924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42924u)) return;
    // 80D42924: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42928:
    ctx->pc = 0x80D42928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D42928: stwu     r1, -64(r1)
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
label_80D4292C:
    ctx->pc = 0x80D4292Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4292Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D4292C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42930:
    ctx->pc = 0x80D42930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D42930: stw     r0, 68(r1)
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
label_80D42934:
    ctx->pc = 0x80D42934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D42934: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42934u)) return;
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
label_80D42938:
    ctx->pc = 0x80D42938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D42938: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D42938u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D42938u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4293C:
    ctx->pc = 0x80D4293Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4293Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D4293C: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4293Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42940:
    ctx->pc = 0x80D42940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42940: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D42940u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D42940u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42944:
    ctx->pc = 0x80D42944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42944: stfd     f29, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42948:
    ctx->pc = 0x80D42948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42948: psq_st   f29, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D42948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D42948u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4294C:
    ctx->pc = 0x80D4294Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4294Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D4294C: stw     r31, 12(r1)
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
label_80D42950:
    ctx->pc = 0x80D42950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42950: stw     r30, 8(r1)
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
label_80D42954:
    ctx->pc = 0x80D42954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42954u)) return;
    // 80D42954: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80D42954u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80D42958:
    ctx->pc = 0x80D42958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42958u)) return;
    // 80D42958: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80D42958u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80D4295C:
    ctx->pc = 0x80D4295Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4295Cu)) return;
    // 80D4295C: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80D4295Cu)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80D42960:
    ctx->pc = 0x80D42960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42960u)) return;
    // 80D42960: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D42964:
    ctx->pc = 0x80D42964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42964u)) return;
    // 80D42964: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D42968:
    ctx->pc = 0x80D42968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42968u)) return;
    // 80D42968: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D4296C:
    ctx->pc = 0x80D4296Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4296Cu)) return;
    // 80D4296C: bl      0x8050FD60
    {
            ctx->lr = 0x80D42970u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D42970:
    ctx->pc = 0x80D42970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42970: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D42974:
    ctx->pc = 0x80D42974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42974u)) return;
    // 80D42974: cmplwi  r31, 0x0000
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

label_80D42978:
    ctx->pc = 0x80D42978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42978u)) return;
    // 80D42978: bc    12, 2, 0x80D42A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42A0C;
        }
    }

label_80D4297C:
    ctx->pc = 0x80D4297Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4297Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D4297C: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D42980:
    ctx->pc = 0x80D42980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42980u)) return;
    // 80D42980: addi    r0, r3, 10308
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10308);

label_80D42984:
    ctx->pc = 0x80D42984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42984: stw     r0, 16(r31)
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
label_80D42988:
    ctx->pc = 0x80D42988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42988u)) return;
    // 80D42988: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D4298C:
    ctx->pc = 0x80D4298Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4298Cu)) return;
    // 80D4298C: addi    r0, r3, 10304
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10304);

label_80D42990:
    ctx->pc = 0x80D42990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42990: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42994:
    ctx->pc = 0x80D42994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42994u)) return;
    // 80D42994: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D42998:
    ctx->pc = 0x80D42998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42998u)) return;
    // 80D42998: addi    r0, r3, 10272
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10272);

label_80D4299C:
    ctx->pc = 0x80D4299Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4299Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4299C: stw     r0, 24(r31)
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
label_80D429A0:
    ctx->pc = 0x80D429A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D429A0: lwz     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429A4:
    ctx->pc = 0x80D429A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429A4u)) return;
    // 80D429A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D429A8:
    ctx->pc = 0x80D429A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429A8u)) return;
    // 80D429A8: bl      0x80462174
    {
            ctx->lr = 0x80D429ACu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80D429AC:
    ctx->pc = 0x80D429ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D429ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D429AC: stfs     f29, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D429ACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429B0:
    ctx->pc = 0x80D429B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D429B0: stfs     f30, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D429B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429B4:
    ctx->pc = 0x80D429B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D429B4: stfs     f31, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D429B4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429B8:
    ctx->pc = 0x80D429B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429B8u)) return;
    // 80D429B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D429BC:
    ctx->pc = 0x80D429BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D429BC: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429C0:
    ctx->pc = 0x80D429C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D429C0: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429C4:
    ctx->pc = 0x80D429C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429C4u)) return;
    // 80D429C4: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D429C8:
    ctx->pc = 0x80D429C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429C8u)) return;
    // 80D429C8: addi    r3, r3, -3140
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3140);

label_80D429CC:
    ctx->pc = 0x80D429CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D429CC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D429CCu)) return;
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
label_80D429D0:
    ctx->pc = 0x80D429D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D429D0: stfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D429D0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429D4:
    ctx->pc = 0x80D429D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429D4u)) return;
    // 80D429D4: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D429D8:
    ctx->pc = 0x80D429D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429D8u)) return;
    // 80D429D8: addi    r3, r3, -3144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3144);

label_80D429DC:
    ctx->pc = 0x80D429DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D429DC: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D429DCu)) return;
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
label_80D429E0:
    ctx->pc = 0x80D429E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D429E0: stfs     f1, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D429E0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429E4:
    ctx->pc = 0x80D429E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429E4u)) return;
    // 80D429E4: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D429E8:
    ctx->pc = 0x80D429E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429E8u)) return;
    // 80D429E8: addi    r3, r3, -3136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3136);

label_80D429EC:
    ctx->pc = 0x80D429ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D429EC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D429ECu)) return;
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
label_80D429F0:
    ctx->pc = 0x80D429F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D429F0: stfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D429F0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429F4:
    ctx->pc = 0x80D429F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D429F4: stfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D429F4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D429F8:
    ctx->pc = 0x80D429F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429F8u)) return;
    // 80D429F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D429FC:
    ctx->pc = 0x80D429FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D429FCu)) return;
    // 80D429FC: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_80D42A00:
    ctx->pc = 0x80D42A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A00u)) return;
    // 80D42A00: addi    r5, r30, 32
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(32);

label_80D42A04:
    ctx->pc = 0x80D42A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A04u)) return;
    // 80D42A04: bl      0x804C07B4
    {
            ctx->lr = 0x80D42A08u;
            ctx->pc = 0x804C07B4u;
            return;
    }

label_80D42A08:
    ctx->pc = 0x80D42A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42A08: stw     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A0C:
    ctx->pc = 0x80D42A0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42A0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80D42A0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D42A10:
    ctx->pc = 0x80D42A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D42A10: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D42A10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D42A10u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A14:
    ctx->pc = 0x80D42A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42A14: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42A14u)) return;
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
label_80D42A18:
    ctx->pc = 0x80D42A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42A18: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D42A18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D42A18u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A1C:
    ctx->pc = 0x80D42A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42A1C: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42A1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A20:
    ctx->pc = 0x80D42A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42A20: psq_l   f29, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D42A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D42A20u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A24:
    ctx->pc = 0x80D42A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42A24: lfd     f29, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A28:
    ctx->pc = 0x80D42A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42A28: lwz     r31, 12(r1)
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
label_80D42A2C:
    ctx->pc = 0x80D42A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42A2C: lwz     r30, 8(r1)
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
label_80D42A30:
    ctx->pc = 0x80D42A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42A30: lwz     r0, 68(r1)
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
label_80D42A34:
    ctx->pc = 0x80D42A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42A34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A38:
    ctx->pc = 0x80D42A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A38u)) return;
    // 80D42A38: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80D42A3C:
    ctx->pc = 0x80D42A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A3Cu)) return;
    // 80D42A3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42A40:
    ctx->pc = 0x80D42A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42A40: stwu     r1, -16(r1)
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
label_80D42A44:
    ctx->pc = 0x80D42A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42A44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A48:
    ctx->pc = 0x80D42A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42A48: stw     r0, 20(r1)
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
label_80D42A4C:
    ctx->pc = 0x80D42A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A4Cu)) return;
    // 80D42A4C: bl      0x80D435CC
    {
            ctx->lr = 0x80D42A50u;
            goto label_80D435CC;
    }

label_80D42A50:
    ctx->pc = 0x80D42A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42A50: lwz     r0, 20(r1)
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
label_80D42A54:
    ctx->pc = 0x80D42A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42A54: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A58:
    ctx->pc = 0x80D42A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A58u)) return;
    // 80D42A58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42A5C:
    ctx->pc = 0x80D42A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A5Cu)) return;
    // 80D42A5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42A60:
    ctx->pc = 0x80D42A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 35u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 35u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80D42A60: stwu     r1, -64(r1)
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
label_80D42A64:
    ctx->pc = 0x80D42A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D42A64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A68:
    ctx->pc = 0x80D42A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80D42A68: stw     r0, 68(r1)
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
label_80D42A6C:
    ctx->pc = 0x80D42A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80D42A6C: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A70:
    ctx->pc = 0x80D42A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D42A70: lwz     r31, 32(r3)
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
label_80D42A74:
    ctx->pc = 0x80D42A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80D42A74: lwz     r0, 16(r31)
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
label_80D42A78:
    ctx->pc = 0x80D42A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80D42A78: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42A7C:
    ctx->pc = 0x80D42A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A7Cu)) return;
    // 80D42A7C: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D42A80:
    ctx->pc = 0x80D42A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A80u)) return;
    // 80D42A80: addi    r0, r3, -15600
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-15600);

label_80D42A84:
    ctx->pc = 0x80D42A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80D42A84: stw     r0, 52(r1)
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
label_80D42A88:
    ctx->pc = 0x80D42A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A88u)) return;
    // 80D42A88: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42A8C:
    ctx->pc = 0x80D42A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A8Cu)) return;
    // 80D42A8C: addi    r3, r3, -3128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3128);

label_80D42A90:
    ctx->pc = 0x80D42A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D42A90: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42A90u)) return;
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
label_80D42A94:
    ctx->pc = 0x80D42A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D42A94: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42A94u)) return;
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
label_80D42A98:
    ctx->pc = 0x80D42A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A98u)) return;
    // 80D42A98: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42A98u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D42A9C:
    ctx->pc = 0x80D42A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D42A9C: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42A9Cu)) return;
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
label_80D42AA0:
    ctx->pc = 0x80D42AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D42AA0: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42AA0u)) return;
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
label_80D42AA4:
    ctx->pc = 0x80D42AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AA4u)) return;
    // 80D42AA4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42AA4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D42AA8:
    ctx->pc = 0x80D42AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D42AA8: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42AA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42AAC:
    ctx->pc = 0x80D42AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AACu)) return;
    // 80D42AAC: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42AB0:
    ctx->pc = 0x80D42AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AB0u)) return;
    // 80D42AB0: addi    r3, r3, -3124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3124);

label_80D42AB4:
    ctx->pc = 0x80D42AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D42AB4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42AB4u)) return;
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
label_80D42AB8:
    ctx->pc = 0x80D42AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D42AB8: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42AB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42ABC:
    ctx->pc = 0x80D42ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42ABC: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42ABCu)) return;
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
label_80D42AC0:
    ctx->pc = 0x80D42AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42AC0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42AC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42AC4:
    ctx->pc = 0x80D42AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AC4u)) return;
    // 80D42AC4: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42AC8:
    ctx->pc = 0x80D42AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AC8u)) return;
    // 80D42AC8: addi    r3, r3, -3120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3120);

label_80D42ACC:
    ctx->pc = 0x80D42ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42ACC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42ACCu)) return;
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
label_80D42AD0:
    ctx->pc = 0x80D42AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42AD0: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42AD0u)) return;
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
label_80D42AD4:
    ctx->pc = 0x80D42AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42AD4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42AD4u)) return;
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
label_80D42AD8:
    ctx->pc = 0x80D42AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42AD8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42AD8u)) return;
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
label_80D42ADC:
    ctx->pc = 0x80D42ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42ADC: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42ADCu)) return;
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
label_80D42AE0:
    ctx->pc = 0x80D42AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42AE0: lhz     r3, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42AE4:
    ctx->pc = 0x80D42AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AE4u)) return;
    // 80D42AE4: cmplwi  r3, 0x0008
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

label_80D42AE8:
    ctx->pc = 0x80D42AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AE8u)) return;
    // 80D42AE8: bc    4, 0, 0x80D42B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42B54;
        }
    }

label_80D42AEC:
    ctx->pc = 0x80D42AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D42AEC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D42AF0:
    ctx->pc = 0x80D42AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42AF0: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42AF4:
    ctx->pc = 0x80D42AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AF4u)) return;
    // 80D42AF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42AF8:
    ctx->pc = 0x80D42AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AF8u)) return;
    // 80D42AF8: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80D42AFC:
    ctx->pc = 0x80D42AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42AFCu)) return;
    // 80D42AFC: bl      0x8060F4F8
    {
            ctx->lr = 0x80D42B00u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D42B00:
    ctx->pc = 0x80D42B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42B00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D42B04:
    ctx->pc = 0x80D42B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B04u)) return;
    // 80D42B04: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80D42B08:
    ctx->pc = 0x80D42B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B08u)) return;
    // 80D42B08: bl      0x8060F4F8
    {
            ctx->lr = 0x80D42B0Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D42B0C:
    ctx->pc = 0x80D42B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42B0C: bl      0x80052080
    {
            ctx->lr = 0x80D42B10u;
            ctx->pc = 0x80052080u;
            return;
    }

label_80D42B10:
    ctx->pc = 0x80D42B10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42B10: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D42B14:
    ctx->pc = 0x80D42B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B14u)) return;
    // 80D42B14: bl      0x8060F5C8
    {
            ctx->lr = 0x80D42B18u;
            ctx->pc = 0x8060F5C8u;
            return;
    }

label_80D42B18:
    ctx->pc = 0x80D42B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42B18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42B1C:
    ctx->pc = 0x80D42B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B1Cu)) return;
    // 80D42B1C: bl      0x8004B49C
    {
            ctx->lr = 0x80D42B20u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D42B20:
    ctx->pc = 0x80D42B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D42B20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42B24:
    ctx->pc = 0x80D42B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42B24: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42B24u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42B28:
    ctx->pc = 0x80D42B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42B28: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42B28u)) return;
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
label_80D42B2C:
    ctx->pc = 0x80D42B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42B2C: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42B2Cu)) return;
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
label_80D42B30:
    ctx->pc = 0x80D42B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B30u)) return;
    // 80D42B30: bl      0x8004B35C
    {
            ctx->lr = 0x80D42B34u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80D42B34:
    ctx->pc = 0x80D42B34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D42B34: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80D42B38:
    ctx->pc = 0x80D42B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42B38: lhz     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42B3C:
    ctx->pc = 0x80D42B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B3Cu)) return;
    // 80D42B3C: rlwinm r4, r0, 0, 29, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000007u;
    }

label_80D42B40:
    ctx->pc = 0x80D42B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B40u)) return;
    // 80D42B40: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80D42B44:
    ctx->pc = 0x80D42B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B44u)) return;
    // 80D42B44: bl      0x80D435EC
    {
            ctx->lr = 0x80D42B48u;
            goto label_80D435EC;
    }

label_80D42B48:
    ctx->pc = 0x80D42B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42B48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D42B4C:
    ctx->pc = 0x80D42B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B4Cu)) return;
    // 80D42B4C: bl      0x8004B504
    {
            ctx->lr = 0x80D42B50u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D42B50:
    ctx->pc = 0x80D42B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42B50: b       0x80D42B5C
    {
            goto label_80D42B5C;
    }

label_80D42B54:
    ctx->pc = 0x80D42B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42B54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D42B58:
    ctx->pc = 0x80D42B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42B58: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42B5C:
    ctx->pc = 0x80D42B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42B5C: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42B60:
    ctx->pc = 0x80D42B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42B60: lwz     r0, 68(r1)
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
label_80D42B64:
    ctx->pc = 0x80D42B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42B64: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42B68:
    ctx->pc = 0x80D42B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B68u)) return;
    // 80D42B68: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80D42B6C:
    ctx->pc = 0x80D42B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B6Cu)) return;
    // 80D42B6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42B70:
    ctx->pc = 0x80D42B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42B70: stwu     r1, -16(r1)
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
label_80D42B74:
    ctx->pc = 0x80D42B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42B74: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42B78:
    ctx->pc = 0x80D42B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42B78: stw     r0, 20(r1)
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
label_80D42B7C:
    ctx->pc = 0x80D42B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B7Cu)) return;
    // 80D42B7C: bl      0x80D42A60
    {
            ctx->lr = 0x80D42B80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D42A60u;
                return;
            }
            goto label_80D42A60;
    }

label_80D42B80:
    ctx->pc = 0x80D42B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42B80: lwz     r0, 20(r1)
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
label_80D42B84:
    ctx->pc = 0x80D42B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42B84: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42B88:
    ctx->pc = 0x80D42B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B88u)) return;
    // 80D42B88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42B8C:
    ctx->pc = 0x80D42B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B8Cu)) return;
    // 80D42B8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42B90:
    ctx->pc = 0x80D42B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42B90: stwu     r1, -16(r1)
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
label_80D42B94:
    ctx->pc = 0x80D42B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42B94: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42B98:
    ctx->pc = 0x80D42B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42B98: stw     r0, 20(r1)
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
label_80D42B9C:
    ctx->pc = 0x80D42B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42B9C: lwz     r3, 32(r3)
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
label_80D42BA0:
    ctx->pc = 0x80D42BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42BA0: lwz     r3, 12(r3)
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
label_80D42BA4:
    ctx->pc = 0x80D42BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BA4u)) return;
    // 80D42BA4: cmplwi  r3, 0x0000
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

label_80D42BA8:
    ctx->pc = 0x80D42BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BA8u)) return;
    // 80D42BA8: bc    12, 2, 0x80D42BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42BB0;
        }
    }

label_80D42BAC:
    ctx->pc = 0x80D42BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42BAC: bl      0x8050ED40
    {
            ctx->lr = 0x80D42BB0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D42BB0:
    ctx->pc = 0x80D42BB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42BB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42BB0: lwz     r0, 20(r1)
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
label_80D42BB4:
    ctx->pc = 0x80D42BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42BB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BB8:
    ctx->pc = 0x80D42BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BB8u)) return;
    // 80D42BB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42BBC:
    ctx->pc = 0x80D42BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BBCu)) return;
    // 80D42BBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42BC0:
    ctx->pc = 0x80D42BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D42BC0: stwu     r1, -128(r1)
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
label_80D42BC4:
    ctx->pc = 0x80D42BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D42BC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BC8:
    ctx->pc = 0x80D42BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D42BC8: stw     r0, 132(r1)
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
label_80D42BCC:
    ctx->pc = 0x80D42BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D42BCC: stw     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BD0:
    ctx->pc = 0x80D42BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D42BD0: stw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BD4:
    ctx->pc = 0x80D42BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D42BD4: lwz     r31, 32(r3)
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
label_80D42BD8:
    ctx->pc = 0x80D42BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D42BD8: lwz     r30, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BDC:
    ctx->pc = 0x80D42BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D42BDC: lwz     r0, 16(r31)
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
label_80D42BE0:
    ctx->pc = 0x80D42BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D42BE0: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BE4:
    ctx->pc = 0x80D42BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BE4u)) return;
    // 80D42BE4: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D42BE8:
    ctx->pc = 0x80D42BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BE8u)) return;
    // 80D42BE8: addi    r0, r3, -15600
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-15600);

label_80D42BEC:
    ctx->pc = 0x80D42BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42BEC: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BF0:
    ctx->pc = 0x80D42BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42BF0: lfs     f2, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42BF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
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
label_80D42BF4:
    ctx->pc = 0x80D42BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42BF4: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42BF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BF8:
    ctx->pc = 0x80D42BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42BF8: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42BF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42BFC:
    ctx->pc = 0x80D42BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42BFC: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42BFCu)) return;
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
label_80D42C00:
    ctx->pc = 0x80D42C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C00u)) return;
    // 80D42C00: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42C04:
    ctx->pc = 0x80D42C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C04u)) return;
    // 80D42C04: addi    r3, r3, -3116
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3116);

label_80D42C08:
    ctx->pc = 0x80D42C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42C08: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42C08u)) return;
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
label_80D42C0C:
    ctx->pc = 0x80D42C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C0Cu)) return;
    // 80D42C0C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42C0Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80D42C10:
    ctx->pc = 0x80D42C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C10u)) return;
    // 80D42C10: bc    4, 0, 0x80D42C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42C54;
        }
    }

label_80D42C14:
    ctx->pc = 0x80D42C14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42C14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42C14: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42C14u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D42C18:
    ctx->pc = 0x80D42C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C18u)) return;
    // 80D42C18: bc    4, 0, 0x80D42C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42C54;
        }
    }

label_80D42C1C:
    ctx->pc = 0x80D42C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D42C1C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42C20:
    ctx->pc = 0x80D42C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C20u)) return;
    // 80D42C20: addi    r3, r3, -3124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3124);

label_80D42C24:
    ctx->pc = 0x80D42C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42C24: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42C24u)) return;
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
label_80D42C28:
    ctx->pc = 0x80D42C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C28u)) return;
    // 80D42C28: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42C28u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80D42C2C:
    ctx->pc = 0x80D42C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C2Cu)) return;
    // 80D42C2C: bc    4, 1, 0x80D42C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42C54;
        }
    }

label_80D42C30:
    ctx->pc = 0x80D42C30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42C30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42C30: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42C30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D42C34:
    ctx->pc = 0x80D42C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C34u)) return;
    // 80D42C34: bc    4, 1, 0x80D42C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42C54;
        }
    }

label_80D42C38:
    ctx->pc = 0x80D42C38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42C38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42C38: lfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42C38u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
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
label_80D42C3C:
    ctx->pc = 0x80D42C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C3Cu)) return;
    // 80D42C3C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42C3Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80D42C40:
    ctx->pc = 0x80D42C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42C40: stfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42C40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42C44:
    ctx->pc = 0x80D42C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42C44: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42C44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42C48:
    ctx->pc = 0x80D42C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42C48: lfs     f0, 28(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42C48u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
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
label_80D42C4C:
    ctx->pc = 0x80D42C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C4Cu)) return;
    // 80D42C4C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42C4Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D42C50:
    ctx->pc = 0x80D42C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42C50: stfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42C50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42C54:
    ctx->pc = 0x80D42C54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42C54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42C54: lwz     r0, 0(r30)
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
label_80D42C58:
    ctx->pc = 0x80D42C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C58u)) return;
    // 80D42C58: cmplwi  r0, 0x0000
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

label_80D42C5C:
    ctx->pc = 0x80D42C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C5Cu)) return;
    // 80D42C5C: bc    12, 2, 0x80D42D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42D3C;
        }
    }

label_80D42C60:
    ctx->pc = 0x80D42C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42C60: lfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42C60u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
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
label_80D42C64:
    ctx->pc = 0x80D42C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42C64: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42C64u)) return;
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
label_80D42C68:
    ctx->pc = 0x80D42C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42C68: lfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42C68u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
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
label_80D42C6C:
    ctx->pc = 0x80D42C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42C6C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42C6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42C70:
    ctx->pc = 0x80D42C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42C70: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42C70u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
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
label_80D42C74:
    ctx->pc = 0x80D42C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42C74: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42C74u)) return;
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
label_80D42C78:
    ctx->pc = 0x80D42C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C78u)) return;
    // 80D42C78: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_80D42C7C:
    ctx->pc = 0x80D42C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C7Cu)) return;
    // 80D42C7C: bl      0x8004AAF4
    {
            ctx->lr = 0x80D42C80u;
            ctx->pc = 0x8004AAF4u;
            return;
    }

label_80D42C80:
    ctx->pc = 0x80D42C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42C80: lwz     r3, 0(r30)
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
label_80D42C84:
    ctx->pc = 0x80D42C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42C84: lwz     r3, 32(r3)
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
label_80D42C88:
    ctx->pc = 0x80D42C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42C88: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42C8C:
    ctx->pc = 0x80D42C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C8Cu)) return;
    // 80D42C8C: cmpwi   r0, 0
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

label_80D42C90:
    ctx->pc = 0x80D42C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C90u)) return;
    // 80D42C90: bc    12, 2, 0x80D42CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42CA0;
        }
    }

label_80D42C94:
    ctx->pc = 0x80D42C94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42C94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42C94: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_80D42C98:
    ctx->pc = 0x80D42C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C98u)) return;
    // 80D42C98: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D42C9C:
    ctx->pc = 0x80D42C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42C9Cu)) return;
    // 80D42C9C: bl      0x8004AFDC
    {
            ctx->lr = 0x80D42CA0u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80D42CA0:
    ctx->pc = 0x80D42CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42CA0: lwz     r3, 0(r30)
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
label_80D42CA4:
    ctx->pc = 0x80D42CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42CA4: lwz     r3, 32(r3)
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
label_80D42CA8:
    ctx->pc = 0x80D42CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42CA8: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42CAC:
    ctx->pc = 0x80D42CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CACu)) return;
    // 80D42CAC: cmpwi   r0, 0
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

label_80D42CB0:
    ctx->pc = 0x80D42CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CB0u)) return;
    // 80D42CB0: bc    12, 2, 0x80D42CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42CC0;
        }
    }

label_80D42CB4:
    ctx->pc = 0x80D42CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42CB4: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_80D42CB8:
    ctx->pc = 0x80D42CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CB8u)) return;
    // 80D42CB8: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D42CBC:
    ctx->pc = 0x80D42CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CBCu)) return;
    // 80D42CBC: bl      0x8004B3E0
    {
            ctx->lr = 0x80D42CC0u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80D42CC0:
    ctx->pc = 0x80D42CC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42CC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42CC0: lwz     r3, 0(r30)
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
label_80D42CC4:
    ctx->pc = 0x80D42CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42CC4: lwz     r3, 32(r3)
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
label_80D42CC8:
    ctx->pc = 0x80D42CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42CC8: lwz     r0, 24(r3)
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
label_80D42CCC:
    ctx->pc = 0x80D42CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CCCu)) return;
    // 80D42CCC: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80D42CD0:
    ctx->pc = 0x80D42CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CD0u)) return;
    // 80D42CD0: cmpwi   r0, 0
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

label_80D42CD4:
    ctx->pc = 0x80D42CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CD4u)) return;
    // 80D42CD4: bc    12, 2, 0x80D42CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42CE4;
        }
    }

label_80D42CD8:
    ctx->pc = 0x80D42CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42CD8: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_80D42CDC:
    ctx->pc = 0x80D42CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CDCu)) return;
    // 80D42CDC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D42CE0:
    ctx->pc = 0x80D42CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CE0u)) return;
    // 80D42CE0: bl      0x8004AF5C
    {
            ctx->lr = 0x80D42CE4u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80D42CE4:
    ctx->pc = 0x80D42CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D42CE4: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_80D42CE8:
    ctx->pc = 0x80D42CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CE8u)) return;
    // 80D42CE8: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80D42CEC:
    ctx->pc = 0x80D42CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CECu)) return;
    // 80D42CEC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80D42CF0:
    ctx->pc = 0x80D42CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CF0u)) return;
    // 80D42CF0: bl      0x8004ABF4
    {
            ctx->lr = 0x80D42CF4u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D42CF4:
    ctx->pc = 0x80D42CF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42CF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D42CF4: lwz     r3, 0(r30)
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
label_80D42CF8:
    ctx->pc = 0x80D42CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D42CF8: lwz     r3, 32(r3)
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
label_80D42CFC:
    ctx->pc = 0x80D42CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D42CFC: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42CFCu)) return;
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
label_80D42D00:
    ctx->pc = 0x80D42D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D42D00: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42D00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_80D42D04:
    ctx->pc = 0x80D42D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D04u)) return;
    // 80D42D04: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42D04u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D42D08:
    ctx->pc = 0x80D42D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D42D08: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42D08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D0C:
    ctx->pc = 0x80D42D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42D0C: lwz     r3, 0(r30)
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
label_80D42D10:
    ctx->pc = 0x80D42D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42D10: lwz     r3, 32(r3)
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
label_80D42D14:
    ctx->pc = 0x80D42D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42D14: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42D14u)) return;
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
label_80D42D18:
    ctx->pc = 0x80D42D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42D18: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42D18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_80D42D1C:
    ctx->pc = 0x80D42D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D1Cu)) return;
    // 80D42D1C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42D1Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D42D20:
    ctx->pc = 0x80D42D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42D20: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42D20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D24:
    ctx->pc = 0x80D42D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42D24: lwz     r3, 0(r30)
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
label_80D42D28:
    ctx->pc = 0x80D42D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42D28: lwz     r3, 32(r3)
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
label_80D42D2C:
    ctx->pc = 0x80D42D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42D2C: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42D2Cu)) return;
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
label_80D42D30:
    ctx->pc = 0x80D42D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42D30: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42D30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_80D42D34:
    ctx->pc = 0x80D42D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D34u)) return;
    // 80D42D34: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42D34u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D42D38:
    ctx->pc = 0x80D42D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42D38: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42D38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D3C:
    ctx->pc = 0x80D42D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D42D3C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42D40:
    ctx->pc = 0x80D42D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D40u)) return;
    // 80D42D40: addi    r3, r3, -3124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3124);

label_80D42D44:
    ctx->pc = 0x80D42D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D42D44: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42D44u)) return;
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
label_80D42D48:
    ctx->pc = 0x80D42D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D42D48: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42D48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D4C:
    ctx->pc = 0x80D42D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42D4C: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42D4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D50:
    ctx->pc = 0x80D42D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42D50: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42D50u)) return;
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
label_80D42D54:
    ctx->pc = 0x80D42D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42D54: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D58:
    ctx->pc = 0x80D42D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42D58: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D5C:
    ctx->pc = 0x80D42D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42D5C: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D60:
    ctx->pc = 0x80D42D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D60u)) return;
    // 80D42D60: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D42D64:
    ctx->pc = 0x80D42D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42D64: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D68:
    ctx->pc = 0x80D42D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42D68: lhz     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D6C:
    ctx->pc = 0x80D42D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42D6C: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42D70:
    ctx->pc = 0x80D42D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42D70: lwz     r0, 4(r3)
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
label_80D42D74:
    ctx->pc = 0x80D42D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D74u)) return;
    // 80D42D74: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D42D78:
    ctx->pc = 0x80D42D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D78u)) return;
    // 80D42D78: bc    4, 0, 0x80D42E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42E18;
        }
    }

label_80D42D7C:
    ctx->pc = 0x80D42D7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42D7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42D7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42D80:
    ctx->pc = 0x80D42D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D80u)) return;
    // 80D42D80: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80D42D84:
    ctx->pc = 0x80D42D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D84u)) return;
    // 80D42D84: bl      0x8060F4F8
    {
            ctx->lr = 0x80D42D88u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D42D88:
    ctx->pc = 0x80D42D88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42D88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42D88: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D42D8C:
    ctx->pc = 0x80D42D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D8Cu)) return;
    // 80D42D8C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80D42D90:
    ctx->pc = 0x80D42D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D90u)) return;
    // 80D42D90: bl      0x8060F4F8
    {
            ctx->lr = 0x80D42D94u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D42D94:
    ctx->pc = 0x80D42D94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42D94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42D94: bl      0x80052080
    {
            ctx->lr = 0x80D42D98u;
            ctx->pc = 0x80052080u;
            return;
    }

label_80D42D98:
    ctx->pc = 0x80D42D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42D98: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_80D42D9C:
    ctx->pc = 0x80D42D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42D9Cu)) return;
    // 80D42D9C: bl      0x8060F5C8
    {
            ctx->lr = 0x80D42DA0u;
            ctx->pc = 0x8060F5C8u;
            return;
    }

label_80D42DA0:
    ctx->pc = 0x80D42DA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42DA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42DA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42DA4:
    ctx->pc = 0x80D42DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DA4u)) return;
    // 80D42DA4: bl      0x8004B49C
    {
            ctx->lr = 0x80D42DA8u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D42DA8:
    ctx->pc = 0x80D42DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D42DA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D42DAC:
    ctx->pc = 0x80D42DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42DAC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42DACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42DB0:
    ctx->pc = 0x80D42DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42DB0: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42DB0u)) return;
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
label_80D42DB4:
    ctx->pc = 0x80D42DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42DB4: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D42DB4u)) return;
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
label_80D42DB8:
    ctx->pc = 0x80D42DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DB8u)) return;
    // 80D42DB8: bl      0x8004B35C
    {
            ctx->lr = 0x80D42DBCu;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80D42DBC:
    ctx->pc = 0x80D42DBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42DBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D42DBC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D42DC0:
    ctx->pc = 0x80D42DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42DC0: lhz     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42DC4:
    ctx->pc = 0x80D42DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DC4u)) return;
    // 80D42DC4: li      r5, 51
    ctx->gpr[5] = (u32)(s32)(51);

label_80D42DC8:
    ctx->pc = 0x80D42DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DC8u)) return;
    // 80D42DC8: bl      0x80D435EC
    {
            ctx->lr = 0x80D42DCCu;
            goto label_80D435EC;
    }

label_80D42DCC:
    ctx->pc = 0x80D42DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42DCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D42DD0:
    ctx->pc = 0x80D42DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DD0u)) return;
    // 80D42DD0: bl      0x8004B504
    {
            ctx->lr = 0x80D42DD4u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D42DD4:
    ctx->pc = 0x80D42DD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42DD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42DD4: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42DD4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80D42DD8:
    ctx->pc = 0x80D42DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DD8u)) return;
    // 80D42DD8: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42DDC:
    ctx->pc = 0x80D42DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DDCu)) return;
    // 80D42DDC: addi    r3, r3, -3120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3120);

label_80D42DE0:
    ctx->pc = 0x80D42DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42DE0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42DE0u)) return;
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
label_80D42DE4:
    ctx->pc = 0x80D42DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DE4u)) return;
    // 80D42DE4: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D42DE4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_80D42DE8:
    ctx->pc = 0x80D42DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DE8u)) return;
    // 80D42DE8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D42DEC:
    ctx->pc = 0x80D42DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DECu)) return;
    // 80D42DEC: bc    4, 2, 0x80D42E08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D42E08;
        }
    }

label_80D42DF0:
    ctx->pc = 0x80D42DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42DF0: lhz     r3, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42DF4:
    ctx->pc = 0x80D42DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DF4u)) return;
    // 80D42DF4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D42DF8:
    ctx->pc = 0x80D42DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42DF8: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42DFC:
    ctx->pc = 0x80D42DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42DFC: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42DFCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80D42E00:
    ctx->pc = 0x80D42E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E00u)) return;
    // 80D42E00: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D42E00u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80D42E04:
    ctx->pc = 0x80D42E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42E04: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42E04u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E08:
    ctx->pc = 0x80D42E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42E08: lfs     f1, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42E08u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E0C:
    ctx->pc = 0x80D42E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42E0C: lfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42E0Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
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
label_80D42E10:
    ctx->pc = 0x80D42E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E10u)) return;
    // 80D42E10: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D42E10u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D42E14:
    ctx->pc = 0x80D42E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42E14: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D42E14u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E18:
    ctx->pc = 0x80D42E18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42E18: lhz     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E1C:
    ctx->pc = 0x80D42E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42E1C: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E20:
    ctx->pc = 0x80D42E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42E20: lwz     r0, 4(r3)
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
label_80D42E24:
    ctx->pc = 0x80D42E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E24u)) return;
    // 80D42E24: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D42E28:
    ctx->pc = 0x80D42E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E28u)) return;
    // 80D42E28: bc    12, 0, 0x80D42E34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42E34;
        }
    }

label_80D42E2C:
    ctx->pc = 0x80D42E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42E2C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D42E30:
    ctx->pc = 0x80D42E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42E30: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E34:
    ctx->pc = 0x80D42E34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42E34: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E38:
    ctx->pc = 0x80D42E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42E38: lwz     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E3C:
    ctx->pc = 0x80D42E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42E3C: lwz     r0, 132(r1)
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
label_80D42E40:
    ctx->pc = 0x80D42E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42E40: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E44:
    ctx->pc = 0x80D42E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E44u)) return;
    // 80D42E44: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80D42E48:
    ctx->pc = 0x80D42E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E48u)) return;
    // 80D42E48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42E4C:
    ctx->pc = 0x80D42E4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42E4C: stwu     r1, -16(r1)
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
label_80D42E50:
    ctx->pc = 0x80D42E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42E50: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E54:
    ctx->pc = 0x80D42E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D42E54: stw     r0, 20(r1)
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
label_80D42E58:
    ctx->pc = 0x80D42E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E58u)) return;
    // 80D42E58: bl      0x80D42BC0
    {
            ctx->lr = 0x80D42E5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D42BC0u;
                return;
            }
            goto label_80D42BC0;
    }

label_80D42E5C:
    ctx->pc = 0x80D42E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42E5C: lwz     r0, 20(r1)
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
label_80D42E60:
    ctx->pc = 0x80D42E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42E60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42E60: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E64:
    ctx->pc = 0x80D42E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E64u)) return;
    // 80D42E64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42E68:
    ctx->pc = 0x80D42E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E68u)) return;
    // 80D42E68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42E6C:
    ctx->pc = 0x80D42E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42E6C: stwu     r1, -16(r1)
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
label_80D42E70:
    ctx->pc = 0x80D42E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42E70: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E74:
    ctx->pc = 0x80D42E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42E74: stw     r0, 20(r1)
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
label_80D42E78:
    ctx->pc = 0x80D42E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42E78: lwz     r3, 32(r3)
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
label_80D42E7C:
    ctx->pc = 0x80D42E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42E7C: lwz     r3, 12(r3)
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
label_80D42E80:
    ctx->pc = 0x80D42E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E80u)) return;
    // 80D42E80: cmplwi  r3, 0x0000
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

label_80D42E84:
    ctx->pc = 0x80D42E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E84u)) return;
    // 80D42E84: bc    12, 2, 0x80D42E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42E8C;
        }
    }

label_80D42E88:
    ctx->pc = 0x80D42E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42E88: bl      0x8050ED40
    {
            ctx->lr = 0x80D42E8Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D42E8C:
    ctx->pc = 0x80D42E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42E8C: lwz     r0, 20(r1)
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
label_80D42E90:
    ctx->pc = 0x80D42E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42E90: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42E94:
    ctx->pc = 0x80D42E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E94u)) return;
    // 80D42E94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42E98:
    ctx->pc = 0x80D42E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42E98u)) return;
    // 80D42E98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42E9C:
    ctx->pc = 0x80D42E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42E9C: stwu     r1, -16(r1)
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
label_80D42EA0:
    ctx->pc = 0x80D42EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42EA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42EA4:
    ctx->pc = 0x80D42EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42EA4: stw     r0, 20(r1)
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
label_80D42EA8:
    ctx->pc = 0x80D42EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42EA8: stw     r31, 12(r1)
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
label_80D42EAC:
    ctx->pc = 0x80D42EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42EAC: stw     r30, 8(r1)
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
label_80D42EB0:
    ctx->pc = 0x80D42EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EB0u)) return;
    // 80D42EB0: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80D42EB4:
    ctx->pc = 0x80D42EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EB4u)) return;
    // 80D42EB4: rlwinm r30, r0, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D42EB8:
    ctx->pc = 0x80D42EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EB8u)) return;
    // 80D42EB8: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D42EBC:
    ctx->pc = 0x80D42EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EBCu)) return;
    // 80D42EBC: addi    r31, r3, -16080
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-16080);

label_80D42EC0:
    ctx->pc = 0x80D42EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42EC0: lwzx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42EC4:
    ctx->pc = 0x80D42EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EC4u)) return;
    // 80D42EC4: cmplwi  r3, 0x0000
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

label_80D42EC8:
    ctx->pc = 0x80D42EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EC8u)) return;
    // 80D42EC8: bc    12, 2, 0x80D42ED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42ED8;
        }
    }

label_80D42ECC:
    ctx->pc = 0x80D42ECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42ECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D42ECC: bl      0x8050F9F0
    {
            ctx->lr = 0x80D42ED0u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80D42ED0:
    ctx->pc = 0x80D42ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D42ED0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D42ED4:
    ctx->pc = 0x80D42ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D42ED4: stwx    r0, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42ED8:
    ctx->pc = 0x80D42ED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42ED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42ED8: lwz     r31, 12(r1)
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
label_80D42EDC:
    ctx->pc = 0x80D42EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42EDC: lwz     r30, 8(r1)
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
label_80D42EE0:
    ctx->pc = 0x80D42EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42EE0: lwz     r0, 20(r1)
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
label_80D42EE4:
    ctx->pc = 0x80D42EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42EE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42EE8:
    ctx->pc = 0x80D42EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EE8u)) return;
    // 80D42EE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D42EEC:
    ctx->pc = 0x80D42EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EECu)) return;
    // 80D42EEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42EF0:
    ctx->pc = 0x80D42EF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42EF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D42EF0: stwu     r1, -96(r1)
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
label_80D42EF4:
    ctx->pc = 0x80D42EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D42EF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42EF8:
    ctx->pc = 0x80D42EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D42EF8: stw     r0, 100(r1)
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
label_80D42EFC:
    ctx->pc = 0x80D42EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D42EFC: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F00:
    ctx->pc = 0x80D42F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42F00: stw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F04:
    ctx->pc = 0x80D42F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D42F04: stw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F08:
    ctx->pc = 0x80D42F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F08u)) return;
    // 80D42F08: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D42F0C:
    ctx->pc = 0x80D42F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42F0C: lwz     r31, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F10:
    ctx->pc = 0x80D42F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42F10: lbz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F14:
    ctx->pc = 0x80D42F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F14u)) return;
    // 80D42F14: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D42F18:
    ctx->pc = 0x80D42F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F18u)) return;
    // 80D42F18: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_80D42F1C:
    ctx->pc = 0x80D42F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F1Cu)) return;
    // 80D42F1C: addi    r3, r3, -14944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80D42F20:
    ctx->pc = 0x80D42F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42F20: lwzx    r29, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F24:
    ctx->pc = 0x80D42F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F24u)) return;
    // 80D42F24: cmplwi  r29, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D42F28:
    ctx->pc = 0x80D42F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F28u)) return;
    // 80D42F28: bc    12, 2, 0x80D42FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42FB4;
        }
    }

label_80D42F2C:
    ctx->pc = 0x80D42F2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42F2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D42F2C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42F30:
    ctx->pc = 0x80D42F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F30u)) return;
    // 80D42F30: addi    r3, r3, -3112
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3112);

label_80D42F34:
    ctx->pc = 0x80D42F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42F34: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42F34u)) return;
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
label_80D42F38:
    ctx->pc = 0x80D42F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42F38: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42F38u)) return;
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
label_80D42F3C:
    ctx->pc = 0x80D42F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42F3C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42F3Cu)) return;
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
label_80D42F40:
    ctx->pc = 0x80D42F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F40u)) return;
    // 80D42F40: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D42F44:
    ctx->pc = 0x80D42F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F44u)) return;
    // 80D42F44: addi    r3, r3, -3108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3108);

label_80D42F48:
    ctx->pc = 0x80D42F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42F48: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D42F48u)) return;
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
label_80D42F4C:
    ctx->pc = 0x80D42F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42F4C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D42F4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F50:
    ctx->pc = 0x80D42F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F50u)) return;
    // 80D42F50: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D42F54:
    ctx->pc = 0x80D42F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F54u)) return;
    // 80D42F54: bl      0x8004AAF4
    {
            ctx->lr = 0x80D42F58u;
            ctx->pc = 0x8004AAF4u;
            return;
    }

label_80D42F58:
    ctx->pc = 0x80D42F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42F58: lwz     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F5C:
    ctx->pc = 0x80D42F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F5Cu)) return;
    // 80D42F5C: cmpwi   r0, 0
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

label_80D42F60:
    ctx->pc = 0x80D42F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F60u)) return;
    // 80D42F60: bc    12, 2, 0x80D42F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42F70;
        }
    }

label_80D42F64:
    ctx->pc = 0x80D42F64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42F64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42F64: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D42F68:
    ctx->pc = 0x80D42F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F68u)) return;
    // 80D42F68: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D42F6C:
    ctx->pc = 0x80D42F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F6Cu)) return;
    // 80D42F6C: bl      0x8004AFDC
    {
            ctx->lr = 0x80D42F70u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80D42F70:
    ctx->pc = 0x80D42F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42F70: lwz     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F74:
    ctx->pc = 0x80D42F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F74u)) return;
    // 80D42F74: cmpwi   r0, 0
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

label_80D42F78:
    ctx->pc = 0x80D42F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F78u)) return;
    // 80D42F78: bc    12, 2, 0x80D42F88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42F88;
        }
    }

label_80D42F7C:
    ctx->pc = 0x80D42F7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42F7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42F7C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D42F80:
    ctx->pc = 0x80D42F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F80u)) return;
    // 80D42F80: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D42F84:
    ctx->pc = 0x80D42F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F84u)) return;
    // 80D42F84: bl      0x8004B3E0
    {
            ctx->lr = 0x80D42F88u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80D42F88:
    ctx->pc = 0x80D42F88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42F88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D42F88: lwz     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42F8C:
    ctx->pc = 0x80D42F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F8Cu)) return;
    // 80D42F8C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80D42F90:
    ctx->pc = 0x80D42F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F90u)) return;
    // 80D42F90: cmpwi   r0, 0
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

label_80D42F94:
    ctx->pc = 0x80D42F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F94u)) return;
    // 80D42F94: bc    12, 2, 0x80D42FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D42FA4;
        }
    }

label_80D42F98:
    ctx->pc = 0x80D42F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D42F98: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D42F9C:
    ctx->pc = 0x80D42F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42F9Cu)) return;
    // 80D42F9C: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D42FA0:
    ctx->pc = 0x80D42FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FA0u)) return;
    // 80D42FA0: bl      0x8004AF5C
    {
            ctx->lr = 0x80D42FA4u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80D42FA4:
    ctx->pc = 0x80D42FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D42FA4: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D42FA8:
    ctx->pc = 0x80D42FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FA8u)) return;
    // 80D42FA8: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80D42FAC:
    ctx->pc = 0x80D42FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FACu)) return;
    // 80D42FAC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80D42FB0:
    ctx->pc = 0x80D42FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FB0u)) return;
    // 80D42FB0: bl      0x8004ABF4
    {
            ctx->lr = 0x80D42FB4u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D42FB4:
    ctx->pc = 0x80D42FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80D42FB4: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D42FB8:
    ctx->pc = 0x80D42FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FB8u)) return;
    // 80D42FB8: addi    r0, r3, 11120
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11120);

label_80D42FBC:
    ctx->pc = 0x80D42FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D42FBC: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42FC0:
    ctx->pc = 0x80D42FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FC0u)) return;
    // 80D42FC0: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D42FC4:
    ctx->pc = 0x80D42FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FC4u)) return;
    // 80D42FC4: addi    r0, r3, 10848
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10848);

label_80D42FC8:
    ctx->pc = 0x80D42FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D42FC8: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42FCC:
    ctx->pc = 0x80D42FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FCCu)) return;
    // 80D42FCC: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D42FD0:
    ctx->pc = 0x80D42FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FD0u)) return;
    // 80D42FD0: addi    r0, r3, 11152
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11152);

label_80D42FD4:
    ctx->pc = 0x80D42FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D42FD4: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42FD8:
    ctx->pc = 0x80D42FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FD8u)) return;
    // 80D42FD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D42FDC:
    ctx->pc = 0x80D42FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D42FDC: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42FE0:
    ctx->pc = 0x80D42FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D42FE0: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42FE4:
    ctx->pc = 0x80D42FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D42FE4: lwz     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42FE8:
    ctx->pc = 0x80D42FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D42FE8: lwz     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42FEC:
    ctx->pc = 0x80D42FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D42FEC: lwz     r0, 100(r1)
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
label_80D42FF0:
    ctx->pc = 0x80D42FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D42FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D42FF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D42FF4:
    ctx->pc = 0x80D42FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FF4u)) return;
    // 80D42FF4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80D42FF8:
    ctx->pc = 0x80D42FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D42FF8u)) return;
    // 80D42FF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D42FFC:
    ctx->pc = 0x80D42FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D42FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D42FFC: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43000:
    ctx->pc = 0x80D43000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D43000: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43004:
    ctx->pc = 0x80D43004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D43004: stw     r0, 148(r1)
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
label_80D43008:
    ctx->pc = 0x80D43008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D43008: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4300C:
    ctx->pc = 0x80D4300Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4300Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D4300C: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D4300Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D4300Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43010:
    ctx->pc = 0x80D43010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D43010: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43010u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43014:
    ctx->pc = 0x80D43014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D43014: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D43014u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D43014u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43018:
    ctx->pc = 0x80D43018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D43018: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43018u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4301C:
    ctx->pc = 0x80D4301Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4301Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D4301C: psq_st   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D4301Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D4301Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43020:
    ctx->pc = 0x80D43020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D43020: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43024:
    ctx->pc = 0x80D43024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D43024: stw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43028:
    ctx->pc = 0x80D43028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D43028: stw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4302C:
    ctx->pc = 0x80D4302Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4302Cu)) return;
    // 80D4302C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D43030:
    ctx->pc = 0x80D43030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43030u)) return;
    // 80D43030: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D43034:
    ctx->pc = 0x80D43034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43034u)) return;
    // 80D43034: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80D43034u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80D43038:
    ctx->pc = 0x80D43038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43038u)) return;
    // 80D43038: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80D43038u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80D4303C:
    ctx->pc = 0x80D4303Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4303Cu)) return;
    // 80D4303C: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80D4303Cu)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80D43040:
    ctx->pc = 0x80D43040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43040u)) return;
    // 80D43040: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D43044:
    ctx->pc = 0x80D43044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43044u)) return;
    // 80D43044: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D43048:
    ctx->pc = 0x80D43048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43048u)) return;
    // 80D43048: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D4304C:
    ctx->pc = 0x80D4304Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4304Cu)) return;
    // 80D4304C: lis     r5, -32556
    ctx->gpr[5] = ((u32)(s32)(-32556) << 16);

label_80D43050:
    ctx->pc = 0x80D43050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43050u)) return;
    // 80D43050: addi    r5, r5, 12016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12016);

label_80D43054:
    ctx->pc = 0x80D43054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43054u)) return;
    // 80D43054: bl      0x8050FD60
    {
            ctx->lr = 0x80D43058u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D43058:
    ctx->pc = 0x80D43058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D43058: extsh r0, r30
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_80D4305C:
    ctx->pc = 0x80D4305Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4305Cu)) return;
    // 80D4305C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D43060:
    ctx->pc = 0x80D43060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43060u)) return;
    // 80D43060: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D43064:
    ctx->pc = 0x80D43064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43064u)) return;
    // 80D43064: addi    r4, r4, -16080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16080);

label_80D43068:
    ctx->pc = 0x80D43068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43068: stwx    r3, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4306C:
    ctx->pc = 0x80D4306Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4306Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4306C: lwzx    r3, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43070:
    ctx->pc = 0x80D43070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43070u)) return;
    // 80D43070: cmplwi  r3, 0x0000
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

label_80D43074:
    ctx->pc = 0x80D43074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43074u)) return;
    // 80D43074: bc    12, 2, 0x80D43184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D43184;
        }
    }

label_80D43078:
    ctx->pc = 0x80D43078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D43078: lwz     r30, 32(r3)
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
label_80D4307C:
    ctx->pc = 0x80D4307Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4307Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4307C: stw     r29, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43080:
    ctx->pc = 0x80D43080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43080: stfs     f29, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43080u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43084:
    ctx->pc = 0x80D43084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43084: stfs     f30, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43084u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43088:
    ctx->pc = 0x80D43088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43088: stfs     f31, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4308C:
    ctx->pc = 0x80D4308Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4308Cu)) return;
    // 80D4308C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43090:
    ctx->pc = 0x80D43090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43090u)) return;
    // 80D43090: bl      0x8004AAF4
    {
            ctx->lr = 0x80D43094u;
            ctx->pc = 0x8004AAF4u;
            return;
    }

label_80D43094:
    ctx->pc = 0x80D43094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D43094: cmplwi  r31, 0x0000
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

label_80D43098:
    ctx->pc = 0x80D43098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43098u)) return;
    // 80D43098: bc    12, 2, 0x80D43144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D43144;
        }
    }

label_80D4309C:
    ctx->pc = 0x80D4309Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4309Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4309C: lwz     r3, 32(r31)
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
label_80D430A0:
    ctx->pc = 0x80D430A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D430A0: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D430A4:
    ctx->pc = 0x80D430A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430A4u)) return;
    // 80D430A4: cmpwi   r0, 0
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

label_80D430A8:
    ctx->pc = 0x80D430A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430A8u)) return;
    // 80D430A8: bc    12, 2, 0x80D430B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D430B8;
        }
    }

label_80D430AC:
    ctx->pc = 0x80D430ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D430ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D430AC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D430B0:
    ctx->pc = 0x80D430B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430B0u)) return;
    // 80D430B0: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D430B4:
    ctx->pc = 0x80D430B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430B4u)) return;
    // 80D430B4: bl      0x8004AFDC
    {
            ctx->lr = 0x80D430B8u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80D430B8:
    ctx->pc = 0x80D430B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D430B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D430B8: lwz     r3, 32(r31)
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
label_80D430BC:
    ctx->pc = 0x80D430BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D430BC: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D430C0:
    ctx->pc = 0x80D430C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430C0u)) return;
    // 80D430C0: cmpwi   r0, 0
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

label_80D430C4:
    ctx->pc = 0x80D430C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430C4u)) return;
    // 80D430C4: bc    12, 2, 0x80D430D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D430D4;
        }
    }

label_80D430C8:
    ctx->pc = 0x80D430C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D430C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D430C8: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D430CC:
    ctx->pc = 0x80D430CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430CCu)) return;
    // 80D430CC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D430D0:
    ctx->pc = 0x80D430D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430D0u)) return;
    // 80D430D0: bl      0x8004B3E0
    {
            ctx->lr = 0x80D430D4u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80D430D4:
    ctx->pc = 0x80D430D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D430D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D430D4: lwz     r3, 32(r31)
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
label_80D430D8:
    ctx->pc = 0x80D430D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D430D8: lwz     r0, 24(r3)
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
label_80D430DC:
    ctx->pc = 0x80D430DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430DCu)) return;
    // 80D430DC: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80D430E0:
    ctx->pc = 0x80D430E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430E0u)) return;
    // 80D430E0: cmpwi   r0, 0
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

label_80D430E4:
    ctx->pc = 0x80D430E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430E4u)) return;
    // 80D430E4: bc    12, 2, 0x80D430F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D430F4;
        }
    }

label_80D430E8:
    ctx->pc = 0x80D430E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D430E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D430E8: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D430EC:
    ctx->pc = 0x80D430ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430ECu)) return;
    // 80D430EC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D430F0:
    ctx->pc = 0x80D430F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430F0u)) return;
    // 80D430F0: bl      0x8004AF5C
    {
            ctx->lr = 0x80D430F4u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80D430F4:
    ctx->pc = 0x80D430F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D430F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D430F4: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D430F8:
    ctx->pc = 0x80D430F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430F8u)) return;
    // 80D430F8: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80D430FC:
    ctx->pc = 0x80D430FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D430FCu)) return;
    // 80D430FC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80D43100:
    ctx->pc = 0x80D43100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43100u)) return;
    // 80D43100: bl      0x8004ABF4
    {
            ctx->lr = 0x80D43104u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D43104:
    ctx->pc = 0x80D43104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D43104: lwz     r3, 32(r31)
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
label_80D43108:
    ctx->pc = 0x80D43108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D43108: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43108u)) return;
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
label_80D4310C:
    ctx->pc = 0x80D4310Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4310Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D4310C: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4310Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_80D43110:
    ctx->pc = 0x80D43110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43110u)) return;
    // 80D43110: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D43110u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D43114:
    ctx->pc = 0x80D43114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D43114: stfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43114u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43118:
    ctx->pc = 0x80D43118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D43118: lwz     r3, 32(r31)
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
label_80D4311C:
    ctx->pc = 0x80D4311Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4311Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D4311C: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D4311Cu)) return;
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
label_80D43120:
    ctx->pc = 0x80D43120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D43120: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_80D43124:
    ctx->pc = 0x80D43124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43124u)) return;
    // 80D43124: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D43124u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D43128:
    ctx->pc = 0x80D43128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D43128: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43128u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4312C:
    ctx->pc = 0x80D4312Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4312Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4312C: lwz     r3, 32(r31)
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
label_80D43130:
    ctx->pc = 0x80D43130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43130: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43130u)) return;
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
label_80D43134:
    ctx->pc = 0x80D43134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43134: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_80D43138:
    ctx->pc = 0x80D43138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43138u)) return;
    // 80D43138: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D43138u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D4313C:
    ctx->pc = 0x80D4313Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4313Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4313C: stfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D4313Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43140:
    ctx->pc = 0x80D43140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43140u)) return;
    // 80D43140: b       0x80D4316C
    {
            goto label_80D4316C;
    }

label_80D43144:
    ctx->pc = 0x80D43144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D43144: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43148:
    ctx->pc = 0x80D43148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43148u)) return;
    // 80D43148: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80D4314C:
    ctx->pc = 0x80D4314Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4314Cu)) return;
    // 80D4314C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80D43150:
    ctx->pc = 0x80D43150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43150u)) return;
    // 80D43150: bl      0x8004ABF4
    {
            ctx->lr = 0x80D43154u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D43154:
    ctx->pc = 0x80D43154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D43154: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_80D43158:
    ctx->pc = 0x80D43158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43158: stfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43158u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4315C:
    ctx->pc = 0x80D4315Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4315Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4315C: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4315Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_80D43160:
    ctx->pc = 0x80D43160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43160: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43160u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43164:
    ctx->pc = 0x80D43164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D43164: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43164u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_80D43168:
    ctx->pc = 0x80D43168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D43168: stfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43168u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4316C:
    ctx->pc = 0x80D4316Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4316Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D4316C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D43170:
    ctx->pc = 0x80D43170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43170u)) return;
    // 80D43170: addi    r3, r3, -3124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3124);

label_80D43174:
    ctx->pc = 0x80D43174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43174: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43174u)) return;
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
label_80D43178:
    ctx->pc = 0x80D43178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43178: stfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43178u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4317C:
    ctx->pc = 0x80D4317Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4317Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4317C: stfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D4317Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43180:
    ctx->pc = 0x80D43180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D43180: stfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43180u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43184:
    ctx->pc = 0x80D43184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D43184: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D43184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D43184u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43188:
    ctx->pc = 0x80D43188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D43188: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4318C:
    ctx->pc = 0x80D4318Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4318Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D4318C: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D4318Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D4318Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43190:
    ctx->pc = 0x80D43190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D43190: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43190u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43194:
    ctx->pc = 0x80D43194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D43194: psq_l   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D43194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D43194u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43198:
    ctx->pc = 0x80D43198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D43198: lfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4319C:
    ctx->pc = 0x80D4319Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4319Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D4319C: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431A0:
    ctx->pc = 0x80D431A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D431A0: lwz     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431A4:
    ctx->pc = 0x80D431A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D431A4: lwz     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431A8:
    ctx->pc = 0x80D431A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D431A8: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431AC:
    ctx->pc = 0x80D431ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D431ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D431AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431B0:
    ctx->pc = 0x80D431B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431B0u)) return;
    // 80D431B0: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_80D431B4:
    ctx->pc = 0x80D431B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431B4u)) return;
    // 80D431B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D431B8:
    ctx->pc = 0x80D431B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D431B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D431B8: stwu     r1, -96(r1)
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
label_80D431BC:
    ctx->pc = 0x80D431BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D431BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431C0:
    ctx->pc = 0x80D431C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D431C0: stw     r0, 100(r1)
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
label_80D431C4:
    ctx->pc = 0x80D431C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D431C4: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431C8:
    ctx->pc = 0x80D431C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D431C8: stw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431CC:
    ctx->pc = 0x80D431CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D431CC: stw     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431D0:
    ctx->pc = 0x80D431D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431D0u)) return;
    // 80D431D0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D431D4:
    ctx->pc = 0x80D431D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D431D4: lwz     r31, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431D8:
    ctx->pc = 0x80D431D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D431D8: lbz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431DC:
    ctx->pc = 0x80D431DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431DCu)) return;
    // 80D431DC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D431E0:
    ctx->pc = 0x80D431E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431E0u)) return;
    // 80D431E0: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_80D431E4:
    ctx->pc = 0x80D431E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431E4u)) return;
    // 80D431E4: addi    r3, r3, -14944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80D431E8:
    ctx->pc = 0x80D431E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D431E8: lwzx    r29, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D431EC:
    ctx->pc = 0x80D431ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431ECu)) return;
    // 80D431EC: cmplwi  r29, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D431F0:
    ctx->pc = 0x80D431F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431F0u)) return;
    // 80D431F0: bc    12, 2, 0x80D4327C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D4327C;
        }
    }

label_80D431F4:
    ctx->pc = 0x80D431F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D431F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D431F4: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D431F8:
    ctx->pc = 0x80D431F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431F8u)) return;
    // 80D431F8: addi    r3, r3, -3112
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3112);

label_80D431FC:
    ctx->pc = 0x80D431FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D431FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D431FC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D431FCu)) return;
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
label_80D43200:
    ctx->pc = 0x80D43200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D43200: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43200u)) return;
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
label_80D43204:
    ctx->pc = 0x80D43204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D43204: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43204u)) return;
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
label_80D43208:
    ctx->pc = 0x80D43208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43208u)) return;
    // 80D43208: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D4320C:
    ctx->pc = 0x80D4320Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4320Cu)) return;
    // 80D4320C: addi    r3, r3, -3108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3108);

label_80D43210:
    ctx->pc = 0x80D43210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43210: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43210u)) return;
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
label_80D43214:
    ctx->pc = 0x80D43214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43214: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43214u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43218:
    ctx->pc = 0x80D43218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43218u)) return;
    // 80D43218: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D4321C:
    ctx->pc = 0x80D4321Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4321Cu)) return;
    // 80D4321C: bl      0x8004AAF4
    {
            ctx->lr = 0x80D43220u;
            ctx->pc = 0x8004AAF4u;
            return;
    }

label_80D43220:
    ctx->pc = 0x80D43220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43220: lwz     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43224:
    ctx->pc = 0x80D43224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43224u)) return;
    // 80D43224: cmpwi   r0, 0
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

label_80D43228:
    ctx->pc = 0x80D43228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43228u)) return;
    // 80D43228: bc    12, 2, 0x80D43238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D43238;
        }
    }

label_80D4322C:
    ctx->pc = 0x80D4322Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4322Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D4322C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43230:
    ctx->pc = 0x80D43230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43230u)) return;
    // 80D43230: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D43234:
    ctx->pc = 0x80D43234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43234u)) return;
    // 80D43234: bl      0x8004AFDC
    {
            ctx->lr = 0x80D43238u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80D43238:
    ctx->pc = 0x80D43238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43238: lwz     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4323C:
    ctx->pc = 0x80D4323Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4323Cu)) return;
    // 80D4323C: cmpwi   r0, 0
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

label_80D43240:
    ctx->pc = 0x80D43240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43240u)) return;
    // 80D43240: bc    12, 2, 0x80D43250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D43250;
        }
    }

label_80D43244:
    ctx->pc = 0x80D43244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D43244: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43248:
    ctx->pc = 0x80D43248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43248u)) return;
    // 80D43248: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D4324C:
    ctx->pc = 0x80D4324Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4324Cu)) return;
    // 80D4324C: bl      0x8004B3E0
    {
            ctx->lr = 0x80D43250u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80D43250:
    ctx->pc = 0x80D43250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43250: lwz     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43254:
    ctx->pc = 0x80D43254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43254u)) return;
    // 80D43254: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80D43258:
    ctx->pc = 0x80D43258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43258u)) return;
    // 80D43258: cmpwi   r0, 0
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

label_80D4325C:
    ctx->pc = 0x80D4325Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4325Cu)) return;
    // 80D4325C: bc    12, 2, 0x80D4326C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D4326C;
        }
    }

label_80D43260:
    ctx->pc = 0x80D43260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D43260: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43264:
    ctx->pc = 0x80D43264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43264u)) return;
    // 80D43264: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D43268:
    ctx->pc = 0x80D43268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43268u)) return;
    // 80D43268: bl      0x8004AF5C
    {
            ctx->lr = 0x80D4326Cu;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80D4326C:
    ctx->pc = 0x80D4326Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4326Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D4326C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43270:
    ctx->pc = 0x80D43270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43270u)) return;
    // 80D43270: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80D43274:
    ctx->pc = 0x80D43274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43274u)) return;
    // 80D43274: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80D43278:
    ctx->pc = 0x80D43278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43278u)) return;
    // 80D43278: bl      0x8004ABF4
    {
            ctx->lr = 0x80D4327Cu;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D4327C:
    ctx->pc = 0x80D4327Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4327Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80D4327C: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D43280:
    ctx->pc = 0x80D43280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43280u)) return;
    // 80D43280: addi    r0, r3, 11852
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11852);

label_80D43284:
    ctx->pc = 0x80D43284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D43284: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43288:
    ctx->pc = 0x80D43288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43288u)) return;
    // 80D43288: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D4328C:
    ctx->pc = 0x80D4328Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4328Cu)) return;
    // 80D4328C: addi    r0, r3, 11200
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11200);

label_80D43290:
    ctx->pc = 0x80D43290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D43290: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43294:
    ctx->pc = 0x80D43294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43294u)) return;
    // 80D43294: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D43298:
    ctx->pc = 0x80D43298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43298u)) return;
    // 80D43298: addi    r0, r3, 11152
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11152);

label_80D4329C:
    ctx->pc = 0x80D4329Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4329Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D4329C: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432A0:
    ctx->pc = 0x80D432A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432A0u)) return;
    // 80D432A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D432A4:
    ctx->pc = 0x80D432A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D432A4: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432A8:
    ctx->pc = 0x80D432A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D432A8: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432AC:
    ctx->pc = 0x80D432ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D432AC: lwz     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432B0:
    ctx->pc = 0x80D432B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D432B0: lwz     r29, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432B4:
    ctx->pc = 0x80D432B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D432B4: lwz     r0, 100(r1)
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
label_80D432B8:
    ctx->pc = 0x80D432B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D432B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D432B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432BC:
    ctx->pc = 0x80D432BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432BCu)) return;
    // 80D432BC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80D432C0:
    ctx->pc = 0x80D432C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432C0u)) return;
    // 80D432C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D432C4:
    ctx->pc = 0x80D432C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D432C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D432C4: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432C8:
    ctx->pc = 0x80D432C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D432C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432CC:
    ctx->pc = 0x80D432CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D432CC: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432D0:
    ctx->pc = 0x80D432D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D432D0: stfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D432D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432D4:
    ctx->pc = 0x80D432D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D432D4: psq_st   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D432D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D432D4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432D8:
    ctx->pc = 0x80D432D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D432D8: stfd     f30, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D432D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432DC:
    ctx->pc = 0x80D432DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D432DC: psq_st   f30, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D432DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D432DCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432E0:
    ctx->pc = 0x80D432E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D432E0: stfd     f29, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D432E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432E4:
    ctx->pc = 0x80D432E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D432E4: psq_st   f29, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D432E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D432E4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D432E8:
    ctx->pc = 0x80D432E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432E8u)) return;
    // 80D432E8: addi    r11, r1, 112
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(112);

label_80D432EC:
    ctx->pc = 0x80D432ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432ECu)) return;
    // 80D432EC: bl      0x80006DD4
    {
            ctx->lr = 0x80D432F0u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80D432F0:
    ctx->pc = 0x80D432F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D432F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D432F0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D432F4:
    ctx->pc = 0x80D432F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432F4u)) return;
    // 80D432F4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D432F8:
    ctx->pc = 0x80D432F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432F8u)) return;
    // 80D432F8: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80D432F8u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80D432FC:
    ctx->pc = 0x80D432FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D432FCu)) return;
    // 80D432FC: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80D432FCu)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80D43300:
    ctx->pc = 0x80D43300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43300u)) return;
    // 80D43300: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80D43300u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80D43304:
    ctx->pc = 0x80D43304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43304u)) return;
    // 80D43304: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D43308:
    ctx->pc = 0x80D43308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43308u)) return;
    // 80D43308: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D4330C:
    ctx->pc = 0x80D4330Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4330Cu)) return;
    // 80D4330C: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D43310:
    ctx->pc = 0x80D43310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43310u)) return;
    // 80D43310: lis     r5, -32556
    ctx->gpr[5] = ((u32)(s32)(-32556) << 16);

label_80D43314:
    ctx->pc = 0x80D43314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43314u)) return;
    // 80D43314: addi    r5, r5, 12728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12728);

label_80D43318:
    ctx->pc = 0x80D43318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43318u)) return;
    // 80D43318: bl      0x8050FD60
    {
            ctx->lr = 0x80D4331Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D4331C:
    ctx->pc = 0x80D4331Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4331Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D4331C: extsh r0, r28
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[28];
    }

label_80D43320:
    ctx->pc = 0x80D43320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43320u)) return;
    // 80D43320: rlwinm r28, r0, 2, 0, 29
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D43324:
    ctx->pc = 0x80D43324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43324u)) return;
    // 80D43324: lis     r4, -27319
    ctx->gpr[4] = ((u32)(s32)(-27319) << 16);

label_80D43328:
    ctx->pc = 0x80D43328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43328u)) return;
    // 80D43328: addi    r30, r4, -16080
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-16080);

label_80D4332C:
    ctx->pc = 0x80D4332Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4332Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4332C: stwx    r3, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43330:
    ctx->pc = 0x80D43330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43330u)) return;
    // 80D43330: li      r3, 52
    ctx->gpr[3] = (u32)(s32)(52);

label_80D43334:
    ctx->pc = 0x80D43334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43334u)) return;
    // 80D43334: bl      0x8050EF60
    {
            ctx->lr = 0x80D43338u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80D43338:
    ctx->pc = 0x80D43338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D43338: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D4333C:
    ctx->pc = 0x80D4333Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4333Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4333C: lwzx    r3, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43340:
    ctx->pc = 0x80D43340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43340u)) return;
    // 80D43340: cmplwi  r3, 0x0000
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

label_80D43344:
    ctx->pc = 0x80D43344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43344u)) return;
    // 80D43344: bc    12, 2, 0x80D434A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D434A0;
        }
    }

label_80D43348:
    ctx->pc = 0x80D43348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D43348: lwz     r30, 32(r3)
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
label_80D4334C:
    ctx->pc = 0x80D4334Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4334Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D4334C: stw     r27, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43350:
    ctx->pc = 0x80D43350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D43350: stw     r31, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43354:
    ctx->pc = 0x80D43354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D43354: stw     r29, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43358:
    ctx->pc = 0x80D43358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43358: stfs     f29, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4335C:
    ctx->pc = 0x80D4335Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4335Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4335C: stfs     f30, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4335Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43360:
    ctx->pc = 0x80D43360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43360: stfs     f31, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43360u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43364:
    ctx->pc = 0x80D43364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43364u)) return;
    // 80D43364: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43368:
    ctx->pc = 0x80D43368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43368u)) return;
    // 80D43368: bl      0x8004AAF4
    {
            ctx->lr = 0x80D4336Cu;
            ctx->pc = 0x8004AAF4u;
            return;
    }

label_80D4336C:
    ctx->pc = 0x80D4336Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4336Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D4336C: cmplwi  r29, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D43370:
    ctx->pc = 0x80D43370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43370u)) return;
    // 80D43370: bc    12, 2, 0x80D4341C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D4341C;
        }
    }

label_80D43374:
    ctx->pc = 0x80D43374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43374: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43378:
    ctx->pc = 0x80D43378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43378: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4337C:
    ctx->pc = 0x80D4337Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4337Cu)) return;
    // 80D4337C: cmpwi   r0, 0
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

label_80D43380:
    ctx->pc = 0x80D43380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43380u)) return;
    // 80D43380: bc    12, 2, 0x80D43390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D43390;
        }
    }

label_80D43384:
    ctx->pc = 0x80D43384u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43384u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D43384: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43388:
    ctx->pc = 0x80D43388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43388u)) return;
    // 80D43388: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D4338C:
    ctx->pc = 0x80D4338Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4338Cu)) return;
    // 80D4338C: bl      0x8004AFDC
    {
            ctx->lr = 0x80D43390u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80D43390:
    ctx->pc = 0x80D43390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43390: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43394:
    ctx->pc = 0x80D43394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43394: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43398:
    ctx->pc = 0x80D43398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43398u)) return;
    // 80D43398: cmpwi   r0, 0
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

label_80D4339C:
    ctx->pc = 0x80D4339Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4339Cu)) return;
    // 80D4339C: bc    12, 2, 0x80D433AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D433AC;
        }
    }

label_80D433A0:
    ctx->pc = 0x80D433A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D433A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D433A0: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D433A4:
    ctx->pc = 0x80D433A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433A4u)) return;
    // 80D433A4: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D433A8:
    ctx->pc = 0x80D433A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433A8u)) return;
    // 80D433A8: bl      0x8004B3E0
    {
            ctx->lr = 0x80D433ACu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80D433AC:
    ctx->pc = 0x80D433ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D433ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D433AC: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D433B0:
    ctx->pc = 0x80D433B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D433B0: lwz     r0, 24(r3)
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
label_80D433B4:
    ctx->pc = 0x80D433B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433B4u)) return;
    // 80D433B4: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80D433B8:
    ctx->pc = 0x80D433B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433B8u)) return;
    // 80D433B8: cmpwi   r0, 0
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

label_80D433BC:
    ctx->pc = 0x80D433BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433BCu)) return;
    // 80D433BC: bc    12, 2, 0x80D433CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D433CC;
        }
    }

label_80D433C0:
    ctx->pc = 0x80D433C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D433C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D433C0: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D433C4:
    ctx->pc = 0x80D433C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433C4u)) return;
    // 80D433C4: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D433C8:
    ctx->pc = 0x80D433C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433C8u)) return;
    // 80D433C8: bl      0x8004AF5C
    {
            ctx->lr = 0x80D433CCu;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80D433CC:
    ctx->pc = 0x80D433CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D433CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D433CC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D433D0:
    ctx->pc = 0x80D433D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433D0u)) return;
    // 80D433D0: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80D433D4:
    ctx->pc = 0x80D433D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433D4u)) return;
    // 80D433D4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80D433D8:
    ctx->pc = 0x80D433D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433D8u)) return;
    // 80D433D8: bl      0x8004ABF4
    {
            ctx->lr = 0x80D433DCu;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D433DC:
    ctx->pc = 0x80D433DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D433DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D433DC: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D433E0:
    ctx->pc = 0x80D433E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D433E0: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D433E0u)) return;
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
label_80D433E4:
    ctx->pc = 0x80D433E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D433E4: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D433E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_80D433E8:
    ctx->pc = 0x80D433E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433E8u)) return;
    // 80D433E8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D433E8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D433EC:
    ctx->pc = 0x80D433ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D433EC: stfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D433ECu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D433F0:
    ctx->pc = 0x80D433F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D433F0: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D433F4:
    ctx->pc = 0x80D433F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D433F4: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D433F4u)) return;
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
label_80D433F8:
    ctx->pc = 0x80D433F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D433F8: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D433F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_80D433FC:
    ctx->pc = 0x80D433FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D433FCu)) return;
    // 80D433FC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D433FCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D43400:
    ctx->pc = 0x80D43400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D43400: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43400u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43404:
    ctx->pc = 0x80D43404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D43404: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43408:
    ctx->pc = 0x80D43408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43408: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43408u)) return;
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
label_80D4340C:
    ctx->pc = 0x80D4340Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4340Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4340C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4340Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_80D43410:
    ctx->pc = 0x80D43410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43410u)) return;
    // 80D43410: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D43410u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D43414:
    ctx->pc = 0x80D43414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D43414: stfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43414u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43418:
    ctx->pc = 0x80D43418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43418u)) return;
    // 80D43418: b       0x80D43444
    {
            goto label_80D43444;
    }

label_80D4341C:
    ctx->pc = 0x80D4341Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4341Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D4341C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D43420:
    ctx->pc = 0x80D43420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43420u)) return;
    // 80D43420: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80D43424:
    ctx->pc = 0x80D43424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43424u)) return;
    // 80D43424: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80D43428:
    ctx->pc = 0x80D43428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43428u)) return;
    // 80D43428: bl      0x8004ABF4
    {
            ctx->lr = 0x80D4342Cu;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D4342C:
    ctx->pc = 0x80D4342Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4342Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4342C: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4342Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_80D43430:
    ctx->pc = 0x80D43430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43430: stfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43430u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43434:
    ctx->pc = 0x80D43434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43434: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D43434u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_80D43438:
    ctx->pc = 0x80D43438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43438: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43438u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4343C:
    ctx->pc = 0x80D4343Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4343Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4343C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4343Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_80D43440:
    ctx->pc = 0x80D43440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D43440: stfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43440u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43444:
    ctx->pc = 0x80D43444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80D43444: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D43448:
    ctx->pc = 0x80D43448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43448u)) return;
    // 80D43448: addi    r3, r3, -3120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3120);

label_80D4344C:
    ctx->pc = 0x80D4344Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4344Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D4344C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D4344Cu)) return;
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
label_80D43450:
    ctx->pc = 0x80D43450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D43450: stfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D43450u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43454:
    ctx->pc = 0x80D43454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D43454: stfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D43454u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43458:
    ctx->pc = 0x80D43458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D43458: stfs     f1, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D43458u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4345C:
    ctx->pc = 0x80D4345Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4345Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D4345C: stfs     f1, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D4345Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43460:
    ctx->pc = 0x80D43460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43460u)) return;
    // 80D43460: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D43464:
    ctx->pc = 0x80D43464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D43464: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43468:
    ctx->pc = 0x80D43468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D43468: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4346C:
    ctx->pc = 0x80D4346Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4346Cu)) return;
    // 80D4346C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D43470:
    ctx->pc = 0x80D43470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43470u)) return;
    // 80D43470: addi    r3, r3, -3124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3124);

label_80D43474:
    ctx->pc = 0x80D43474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D43474: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43474u)) return;
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
label_80D43478:
    ctx->pc = 0x80D43478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D43478: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D43478u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4347C:
    ctx->pc = 0x80D4347Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4347Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D4347C: stfs     f0, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D4347Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43480:
    ctx->pc = 0x80D43480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D43480: stfs     f1, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43480u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43484:
    ctx->pc = 0x80D43484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D43484: stfs     f1, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43484u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43488:
    ctx->pc = 0x80D43488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D43488: stfs     f1, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D43488u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4348C:
    ctx->pc = 0x80D4348Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4348Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4348C: stfs     f29, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D4348Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43490:
    ctx->pc = 0x80D43490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43490: stfs     f30, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D43490u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43494:
    ctx->pc = 0x80D43494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43494: stfs     f31, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D43494u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43498:
    ctx->pc = 0x80D43498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D43498: stfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D43498u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4349C:
    ctx->pc = 0x80D4349Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4349Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D4349C: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D4349Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434A0:
    ctx->pc = 0x80D434A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D434A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D434A0: psq_l   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D434A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D434A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434A4:
    ctx->pc = 0x80D434A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D434A4: lfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D434A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434A8:
    ctx->pc = 0x80D434A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D434A8: psq_l   f30, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D434A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D434A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434AC:
    ctx->pc = 0x80D434ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D434AC: lfd     f30, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D434ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434B0:
    ctx->pc = 0x80D434B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D434B0: psq_l   f29, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D434B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D434B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434B4:
    ctx->pc = 0x80D434B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D434B4: lfd     f29, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D434B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434B8:
    ctx->pc = 0x80D434B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434B8u)) return;
    // 80D434B8: addi    r11, r1, 112
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(112);

label_80D434BC:
    ctx->pc = 0x80D434BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434BCu)) return;
    // 80D434BC: bl      0x80006E20
    {
            ctx->lr = 0x80D434C0u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80D434C0:
    ctx->pc = 0x80D434C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D434C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D434C0: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434C4:
    ctx->pc = 0x80D434C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D434C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D434C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D434C8:
    ctx->pc = 0x80D434C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434C8u)) return;
    // 80D434C8: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_80D434CC:
    ctx->pc = 0x80D434CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434CCu)) return;
    // 80D434CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D434D0:
    ctx->pc = 0x80D434D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D434D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D434D0: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80D434D4:
    ctx->pc = 0x80D434D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434D4u)) return;
    // 80D434D4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D434D8:
    ctx->pc = 0x80D434D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434D8u)) return;
    // 80D434D8: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D434DC:
    ctx->pc = 0x80D434DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434DCu)) return;
    // 80D434DC: addi    r3, r3, -16080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16080);

label_80D434E0:
    ctx->pc = 0x80D434E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D434E0: lwzx    r3, r3, r0
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
label_80D434E4:
    ctx->pc = 0x80D434E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434E4u)) return;
    // 80D434E4: cmplwi  r3, 0x0000
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

label_80D434E8:
    ctx->pc = 0x80D434E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434E8u)) return;
    // 80D434E8: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D434EC:
    ctx->pc = 0x80D434ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D434ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D434EC: lwz     r3, 32(r3)
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
label_80D434F0:
    ctx->pc = 0x80D434F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D434F0: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D434F0u)) return;
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
label_80D434F4:
    ctx->pc = 0x80D434F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D434F4: stfs     f2, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D434F4u)) return;
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
label_80D434F8:
    ctx->pc = 0x80D434F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D434F8u)) return;
    // 80D434F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D434FC:
    ctx->pc = 0x80D434FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D434FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D434FC: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80D43500:
    ctx->pc = 0x80D43500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43500u)) return;
    // 80D43500: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D43504:
    ctx->pc = 0x80D43504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43504u)) return;
    // 80D43504: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D43508:
    ctx->pc = 0x80D43508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43508u)) return;
    // 80D43508: addi    r3, r3, -16080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16080);

label_80D4350C:
    ctx->pc = 0x80D4350Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4350Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4350C: lwzx    r3, r3, r0
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
label_80D43510:
    ctx->pc = 0x80D43510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43510u)) return;
    // 80D43510: cmplwi  r3, 0x0000
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

label_80D43514:
    ctx->pc = 0x80D43514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43514u)) return;
    // 80D43514: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D43518:
    ctx->pc = 0x80D43518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D43518: lwz     r3, 32(r3)
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
label_80D4351C:
    ctx->pc = 0x80D4351Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4351Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4351C: lwz     r3, 12(r3)
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
label_80D43520:
    ctx->pc = 0x80D43520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43520: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43520u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43524:
    ctx->pc = 0x80D43524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D43524: stfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43524u)) return;
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
label_80D43528:
    ctx->pc = 0x80D43528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43528: stfs     f3, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43528u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4352C:
    ctx->pc = 0x80D4352Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4352Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4352C: stfs     f4, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D4352Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43530:
    ctx->pc = 0x80D43530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43530u)) return;
    // 80D43530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D43534:
    ctx->pc = 0x80D43534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D43534: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80D43538:
    ctx->pc = 0x80D43538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43538u)) return;
    // 80D43538: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D4353C:
    ctx->pc = 0x80D4353Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4353Cu)) return;
    // 80D4353C: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D43540:
    ctx->pc = 0x80D43540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43540u)) return;
    // 80D43540: addi    r3, r3, -16080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16080);

label_80D43544:
    ctx->pc = 0x80D43544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43544: lwzx    r3, r3, r0
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
label_80D43548:
    ctx->pc = 0x80D43548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43548u)) return;
    // 80D43548: cmplwi  r3, 0x0000
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

label_80D4354C:
    ctx->pc = 0x80D4354Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4354Cu)) return;
    // 80D4354C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D43550:
    ctx->pc = 0x80D43550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D43550: lwz     r3, 32(r3)
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
label_80D43554:
    ctx->pc = 0x80D43554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D43554: lwz     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43558:
    ctx->pc = 0x80D43558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43558: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4355C:
    ctx->pc = 0x80D4355Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4355Cu)) return;
    // 80D4355C: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D43560:
    ctx->pc = 0x80D43560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43560: stw     r0, 20(r3)
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
label_80D43564:
    ctx->pc = 0x80D43564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D43564: stw     r5, 20(r6)
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
label_80D43568:
    ctx->pc = 0x80D43568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43568u)) return;
    // 80D43568: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D4356C:
    ctx->pc = 0x80D4356Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4356Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D4356C: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80D43570:
    ctx->pc = 0x80D43570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43570u)) return;
    // 80D43570: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D43574:
    ctx->pc = 0x80D43574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43574u)) return;
    // 80D43574: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D43578:
    ctx->pc = 0x80D43578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43578u)) return;
    // 80D43578: addi    r3, r3, -16080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16080);

label_80D4357C:
    ctx->pc = 0x80D4357Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4357Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4357C: lwzx    r3, r3, r0
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
label_80D43580:
    ctx->pc = 0x80D43580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43580u)) return;
    // 80D43580: cmplwi  r3, 0x0000
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

label_80D43584:
    ctx->pc = 0x80D43584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43584u)) return;
    // 80D43584: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D43588:
    ctx->pc = 0x80D43588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43588: lwz     r3, 32(r3)
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
label_80D4358C:
    ctx->pc = 0x80D4358Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4358Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4358C: lwz     r3, 12(r3)
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
label_80D43590:
    ctx->pc = 0x80D43590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43590: stfs     f1, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43590u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43594:
    ctx->pc = 0x80D43594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D43594: stfs     f2, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D43594u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43598:
    ctx->pc = 0x80D43598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43598u)) return;
    // 80D43598: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D4359C:
    ctx->pc = 0x80D4359Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4359Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D4359C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D435A0:
    ctx->pc = 0x80D435A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D435A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D435A0: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80D435A4:
    ctx->pc = 0x80D435A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435A4u)) return;
    // 80D435A4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D435A8:
    ctx->pc = 0x80D435A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435A8u)) return;
    // 80D435A8: lis     r3, -27319
    ctx->gpr[3] = ((u32)(s32)(-27319) << 16);

label_80D435AC:
    ctx->pc = 0x80D435ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435ACu)) return;
    // 80D435AC: addi    r3, r3, -16080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16080);

label_80D435B0:
    ctx->pc = 0x80D435B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D435B0: lwzx    r3, r3, r0
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
label_80D435B4:
    ctx->pc = 0x80D435B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435B4u)) return;
    // 80D435B4: cmplwi  r3, 0x0000
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

label_80D435B8:
    ctx->pc = 0x80D435B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435B8u)) return;
    // 80D435B8: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D435BC:
    ctx->pc = 0x80D435BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D435BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D435BC: lwz     r3, 32(r3)
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
label_80D435C0:
    ctx->pc = 0x80D435C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D435C0: lwz     r3, 12(r3)
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
label_80D435C4:
    ctx->pc = 0x80D435C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D435C4: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D435C4u)) return;
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
label_80D435C8:
    ctx->pc = 0x80D435C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435C8u)) return;
    // 80D435C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D435CC:
    ctx->pc = 0x80D435CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D435CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D435CC: stwu     r1, -16(r1)
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
label_80D435D0:
    ctx->pc = 0x80D435D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D435D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D435D4:
    ctx->pc = 0x80D435D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D435D4: stw     r0, 20(r1)
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
label_80D435D8:
    ctx->pc = 0x80D435D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435D8u)) return;
    // 80D435D8: bl      0x8004DFB8
    {
            ctx->lr = 0x80D435DCu;
            ctx->pc = 0x8004DFB8u;
            return;
    }

label_80D435DC:
    ctx->pc = 0x80D435DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D435DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D435DC: lwz     r0, 20(r1)
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
label_80D435E0:
    ctx->pc = 0x80D435E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D435E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D435E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D435E4:
    ctx->pc = 0x80D435E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435E4u)) return;
    // 80D435E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D435E8:
    ctx->pc = 0x80D435E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435E8u)) return;
    // 80D435E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

label_80D435EC:
    ctx->pc = 0x80D435ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D435ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D435EC: stwu     r1, -16(r1)
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
label_80D435F0:
    ctx->pc = 0x80D435F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D435F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D435F4:
    ctx->pc = 0x80D435F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D435F4: stw     r0, 20(r1)
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
label_80D435F8:
    ctx->pc = 0x80D435F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435F8u)) return;
    // 80D435F8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80D435FC:
    ctx->pc = 0x80D435FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D435FCu)) return;
    // 80D435FC: bl      0x80606098
    {
            ctx->lr = 0x80D43600u;
            ctx->pc = 0x80606098u;
            return;
    }

label_80D43600:
    ctx->pc = 0x80D43600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D43600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D43600: lwz     r0, 20(r1)
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
label_80D43604:
    ctx->pc = 0x80D43604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D43604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D43604: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D43608:
    ctx->pc = 0x80D43608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D43608u)) return;
    // 80D43608: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D4360C:
    ctx->pc = 0x80D4360Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4360Cu)) return;
    // 80D4360C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D41860;
        }
    }

    ctx->pc = 0x80D43610u;
    return;
return_dispatch_80D41860:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D418A8u: goto label_80D418A8;
    case 0x80D418ACu: goto label_80D418AC;
    case 0x80D418B0u: goto label_80D418B0;
    case 0x80D418B4u: goto label_80D418B4;
    case 0x80D418BCu: goto label_80D418BC;
    case 0x80D418C4u: goto label_80D418C4;
    case 0x80D418ECu: goto label_80D418EC;
    case 0x80D418F4u: goto label_80D418F4;
    case 0x80D41904u: goto label_80D41904;
    case 0x80D4190Cu: goto label_80D4190C;
    case 0x80D41914u: goto label_80D41914;
    case 0x80D41918u: goto label_80D41918;
    case 0x80D41920u: goto label_80D41920;
    case 0x80D41948u: goto label_80D41948;
    case 0x80D4194Cu: goto label_80D4194C;
    case 0x80D41950u: goto label_80D41950;
    case 0x80D41958u: goto label_80D41958;
    case 0x80D41988u: goto label_80D41988;
    case 0x80D41990u: goto label_80D41990;
    case 0x80D419E0u: goto label_80D419E0;
    case 0x80D419E8u: goto label_80D419E8;
    case 0x80D41A1Cu: goto label_80D41A1C;
    case 0x80D41A24u: goto label_80D41A24;
    case 0x80D41A50u: goto label_80D41A50;
    case 0x80D41A58u: goto label_80D41A58;
    case 0x80D41A8Cu: goto label_80D41A8C;
    case 0x80D41A94u: goto label_80D41A94;
    case 0x80D41AC8u: goto label_80D41AC8;
    case 0x80D41AD0u: goto label_80D41AD0;
    case 0x80D41B04u: goto label_80D41B04;
    case 0x80D41B0Cu: goto label_80D41B0C;
    case 0x80D41B38u: goto label_80D41B38;
    case 0x80D41B40u: goto label_80D41B40;
    case 0x80D41B74u: goto label_80D41B74;
    case 0x80D41B7Cu: goto label_80D41B7C;
    case 0x80D41BB0u: goto label_80D41BB0;
    case 0x80D41BB8u: goto label_80D41BB8;
    case 0x80D41BECu: goto label_80D41BEC;
    case 0x80D41BF4u: goto label_80D41BF4;
    case 0x80D41C20u: goto label_80D41C20;
    case 0x80D41C28u: goto label_80D41C28;
    case 0x80D41C40u: goto label_80D41C40;
    case 0x80D41C58u: goto label_80D41C58;
    case 0x80D41C70u: goto label_80D41C70;
    case 0x80D41C88u: goto label_80D41C88;
    case 0x80D41CA0u: goto label_80D41CA0;
    case 0x80D41CB8u: goto label_80D41CB8;
    case 0x80D41CD0u: goto label_80D41CD0;
    case 0x80D41CE8u: goto label_80D41CE8;
    case 0x80D41D00u: goto label_80D41D00;
    case 0x80D41D18u: goto label_80D41D18;
    case 0x80D41D20u: goto label_80D41D20;
    case 0x80D41D28u: goto label_80D41D28;
    case 0x80D41D30u: goto label_80D41D30;
    case 0x80D41D38u: goto label_80D41D38;
    case 0x80D41D60u: goto label_80D41D60;
    case 0x80D41D68u: goto label_80D41D68;
    case 0x80D41D88u: goto label_80D41D88;
    case 0x80D41DA8u: goto label_80D41DA8;
    case 0x80D41DCCu: goto label_80D41DCC;
    case 0x80D41DE0u: goto label_80D41DE0;
    case 0x80D41DF4u: goto label_80D41DF4;
    case 0x80D41E04u: goto label_80D41E04;
    case 0x80D41E2Cu: goto label_80D41E2C;
    case 0x80D41E34u: goto label_80D41E34;
    case 0x80D41E5Cu: goto label_80D41E5C;
    case 0x80D41E64u: goto label_80D41E64;
    case 0x80D41E8Cu: goto label_80D41E8C;
    case 0x80D41E94u: goto label_80D41E94;
    case 0x80D41EBCu: goto label_80D41EBC;
    case 0x80D41ECCu: goto label_80D41ECC;
    case 0x80D41ED4u: goto label_80D41ED4;
    case 0x80D41EDCu: goto label_80D41EDC;
    case 0x80D41EE4u: goto label_80D41EE4;
    case 0x80D41EECu: goto label_80D41EEC;
    case 0x80D41EF4u: goto label_80D41EF4;
    case 0x80D41EFCu: goto label_80D41EFC;
    case 0x80D41F04u: goto label_80D41F04;
    case 0x80D41F0Cu: goto label_80D41F0C;
    case 0x80D41F14u: goto label_80D41F14;
    case 0x80D41F1Cu: goto label_80D41F1C;
    case 0x80D41F24u: goto label_80D41F24;
    case 0x80D41F2Cu: goto label_80D41F2C;
    case 0x80D41F34u: goto label_80D41F34;
    case 0x80D41F68u: goto label_80D41F68;
    case 0x80D41F70u: goto label_80D41F70;
    case 0x80D41F88u: goto label_80D41F88;
    case 0x80D41F90u: goto label_80D41F90;
    case 0x80D41FA8u: goto label_80D41FA8;
    case 0x80D41FB0u: goto label_80D41FB0;
    case 0x80D41FE0u: goto label_80D41FE0;
    case 0x80D41FFCu: goto label_80D41FFC;
    case 0x80D42004u: goto label_80D42004;
    case 0x80D4202Cu: goto label_80D4202C;
    case 0x80D42030u: goto label_80D42030;
    case 0x80D42034u: goto label_80D42034;
    case 0x80D42044u: goto label_80D42044;
    case 0x80D4204Cu: goto label_80D4204C;
    case 0x80D42050u: goto label_80D42050;
    case 0x80D42058u: goto label_80D42058;
    case 0x80D42060u: goto label_80D42060;
    case 0x80D42068u: goto label_80D42068;
    case 0x80D42070u: goto label_80D42070;
    case 0x80D42078u: goto label_80D42078;
    case 0x80D42080u: goto label_80D42080;
    case 0x80D42088u: goto label_80D42088;
    case 0x80D42090u: goto label_80D42090;
    case 0x80D42098u: goto label_80D42098;
    case 0x80D420A0u: goto label_80D420A0;
    case 0x80D420A8u: goto label_80D420A8;
    case 0x80D420B8u: goto label_80D420B8;
    case 0x80D420D0u: goto label_80D420D0;
    case 0x80D420E8u: goto label_80D420E8;
    case 0x80D420F0u: goto label_80D420F0;
    case 0x80D42100u: goto label_80D42100;
    case 0x80D42108u: goto label_80D42108;
    case 0x80D42110u: goto label_80D42110;
    case 0x80D42118u: goto label_80D42118;
    case 0x80D42120u: goto label_80D42120;
    case 0x80D42128u: goto label_80D42128;
    case 0x80D42130u: goto label_80D42130;
    case 0x80D42138u: goto label_80D42138;
    case 0x80D42140u: goto label_80D42140;
    case 0x80D42148u: goto label_80D42148;
    case 0x80D42150u: goto label_80D42150;
    case 0x80D42158u: goto label_80D42158;
    case 0x80D42160u: goto label_80D42160;
    case 0x80D42164u: goto label_80D42164;
    case 0x80D42168u: goto label_80D42168;
    case 0x80D4216Cu: goto label_80D4216C;
    case 0x80D42170u: goto label_80D42170;
    case 0x80D42188u: goto label_80D42188;
    case 0x80D4219Cu: goto label_80D4219C;
    case 0x80D421A0u: goto label_80D421A0;
    case 0x80D421D8u: goto label_80D421D8;
    case 0x80D42238u: goto label_80D42238;
    case 0x80D42278u: goto label_80D42278;
    case 0x80D422B8u: goto label_80D422B8;
    case 0x80D42314u: goto label_80D42314;
    case 0x80D42338u: goto label_80D42338;
    case 0x80D423D4u: goto label_80D423D4;
    case 0x80D42424u: goto label_80D42424;
    case 0x80D42474u: goto label_80D42474;
    case 0x80D424C0u: goto label_80D424C0;
    case 0x80D42544u: goto label_80D42544;
    case 0x80D42568u: goto label_80D42568;
    case 0x80D425E4u: goto label_80D425E4;
    case 0x80D4264Cu: goto label_80D4264C;
    case 0x80D426B4u: goto label_80D426B4;
    case 0x80D42704u: goto label_80D42704;
    case 0x80D42754u: goto label_80D42754;
    case 0x80D42798u: goto label_80D42798;
    case 0x80D427C0u: goto label_80D427C0;
    case 0x80D427CCu: goto label_80D427CC;
    case 0x80D427D8u: goto label_80D427D8;
    case 0x80D427E4u: goto label_80D427E4;
    case 0x80D42830u: goto label_80D42830;
    case 0x80D42878u: goto label_80D42878;
    case 0x80D428E4u: goto label_80D428E4;
    case 0x80D42900u: goto label_80D42900;
    case 0x80D42910u: goto label_80D42910;
    case 0x80D42970u: goto label_80D42970;
    case 0x80D429ACu: goto label_80D429AC;
    case 0x80D42A08u: goto label_80D42A08;
    case 0x80D42A50u: goto label_80D42A50;
    case 0x80D42B00u: goto label_80D42B00;
    case 0x80D42B0Cu: goto label_80D42B0C;
    case 0x80D42B10u: goto label_80D42B10;
    case 0x80D42B18u: goto label_80D42B18;
    case 0x80D42B20u: goto label_80D42B20;
    case 0x80D42B34u: goto label_80D42B34;
    case 0x80D42B48u: goto label_80D42B48;
    case 0x80D42B50u: goto label_80D42B50;
    case 0x80D42B80u: goto label_80D42B80;
    case 0x80D42BB0u: goto label_80D42BB0;
    case 0x80D42C80u: goto label_80D42C80;
    case 0x80D42CA0u: goto label_80D42CA0;
    case 0x80D42CC0u: goto label_80D42CC0;
    case 0x80D42CE4u: goto label_80D42CE4;
    case 0x80D42CF4u: goto label_80D42CF4;
    case 0x80D42D88u: goto label_80D42D88;
    case 0x80D42D94u: goto label_80D42D94;
    case 0x80D42D98u: goto label_80D42D98;
    case 0x80D42DA0u: goto label_80D42DA0;
    case 0x80D42DA8u: goto label_80D42DA8;
    case 0x80D42DBCu: goto label_80D42DBC;
    case 0x80D42DCCu: goto label_80D42DCC;
    case 0x80D42DD4u: goto label_80D42DD4;
    case 0x80D42E5Cu: goto label_80D42E5C;
    case 0x80D42E8Cu: goto label_80D42E8C;
    case 0x80D42ED0u: goto label_80D42ED0;
    case 0x80D42F58u: goto label_80D42F58;
    case 0x80D42F70u: goto label_80D42F70;
    case 0x80D42F88u: goto label_80D42F88;
    case 0x80D42FA4u: goto label_80D42FA4;
    case 0x80D42FB4u: goto label_80D42FB4;
    case 0x80D43058u: goto label_80D43058;
    case 0x80D43094u: goto label_80D43094;
    case 0x80D430B8u: goto label_80D430B8;
    case 0x80D430D4u: goto label_80D430D4;
    case 0x80D430F4u: goto label_80D430F4;
    case 0x80D43104u: goto label_80D43104;
    case 0x80D43154u: goto label_80D43154;
    case 0x80D43220u: goto label_80D43220;
    case 0x80D43238u: goto label_80D43238;
    case 0x80D43250u: goto label_80D43250;
    case 0x80D4326Cu: goto label_80D4326C;
    case 0x80D4327Cu: goto label_80D4327C;
    case 0x80D432F0u: goto label_80D432F0;
    case 0x80D4331Cu: goto label_80D4331C;
    case 0x80D43338u: goto label_80D43338;
    case 0x80D4336Cu: goto label_80D4336C;
    case 0x80D43390u: goto label_80D43390;
    case 0x80D433ACu: goto label_80D433AC;
    case 0x80D433CCu: goto label_80D433CC;
    case 0x80D433DCu: goto label_80D433DC;
    case 0x80D4342Cu: goto label_80D4342C;
    case 0x80D434C0u: goto label_80D434C0;
    case 0x80D435DCu: goto label_80D435DC;
    case 0x80D43600u: goto label_80D43600;
    default: return;
    }
}

