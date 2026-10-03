// DolRecomp output
#include "../generated.h"

void func_80C20B20(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C20B20[810] = {
        &&label_80C20B20,
        &&label_80C20B24,
        &&label_80C20B28,
        &&label_80C20B2C,
        &&label_80C20B30,
        &&label_80C20B34,
        &&label_80C20B38,
        &&label_80C20B3C,
        &&label_80C20B40,
        &&label_80C20B44,
        &&label_80C20B48,
        &&label_80C20B4C,
        &&label_80C20B50,
        &&label_80C20B54,
        &&label_80C20B58,
        &&label_80C20B5C,
        &&label_80C20B60,
        &&label_80C20B64,
        &&label_80C20B68,
        &&label_80C20B6C,
        &&label_80C20B70,
        &&label_80C20B74,
        &&label_80C20B78,
        &&label_80C20B7C,
        &&label_80C20B80,
        &&label_80C20B84,
        &&label_80C20B88,
        &&label_80C20B8C,
        &&label_80C20B90,
        &&label_80C20B94,
        &&label_80C20B98,
        &&label_80C20B9C,
        &&label_80C20BA0,
        &&label_80C20BA4,
        &&label_80C20BA8,
        &&label_80C20BAC,
        &&label_80C20BB0,
        &&label_80C20BB4,
        &&label_80C20BB8,
        &&label_80C20BBC,
        &&label_80C20BC0,
        &&label_80C20BC4,
        &&label_80C20BC8,
        &&label_80C20BCC,
        &&label_80C20BD0,
        &&label_80C20BD4,
        &&label_80C20BD8,
        &&label_80C20BDC,
        &&label_80C20BE0,
        &&label_80C20BE4,
        &&label_80C20BE8,
        &&label_80C20BEC,
        &&label_80C20BF0,
        &&label_80C20BF4,
        &&label_80C20BF8,
        &&label_80C20BFC,
        &&label_80C20C00,
        &&label_80C20C04,
        &&label_80C20C08,
        &&label_80C20C0C,
        &&label_80C20C10,
        &&label_80C20C14,
        &&label_80C20C18,
        &&label_80C20C1C,
        &&label_80C20C20,
        &&label_80C20C24,
        &&label_80C20C28,
        &&label_80C20C2C,
        &&label_80C20C30,
        &&label_80C20C34,
        &&label_80C20C38,
        &&label_80C20C3C,
        &&label_80C20C40,
        &&label_80C20C44,
        &&label_80C20C48,
        &&label_80C20C4C,
        &&label_80C20C50,
        &&label_80C20C54,
        &&label_80C20C58,
        &&label_80C20C5C,
        &&label_80C20C60,
        &&label_80C20C64,
        &&label_80C20C68,
        &&label_80C20C6C,
        &&label_80C20C70,
        &&label_80C20C74,
        &&label_80C20C78,
        &&label_80C20C7C,
        &&label_80C20C80,
        &&label_80C20C84,
        &&label_80C20C88,
        &&label_80C20C8C,
        &&label_80C20C90,
        &&label_80C20C94,
        &&label_80C20C98,
        &&label_80C20C9C,
        &&label_80C20CA0,
        &&label_80C20CA4,
        &&label_80C20CA8,
        &&label_80C20CAC,
        &&label_80C20CB0,
        &&label_80C20CB4,
        &&label_80C20CB8,
        &&label_80C20CBC,
        &&label_80C20CC0,
        &&label_80C20CC4,
        &&label_80C20CC8,
        &&label_80C20CCC,
        &&label_80C20CD0,
        &&label_80C20CD4,
        &&label_80C20CD8,
        &&label_80C20CDC,
        &&label_80C20CE0,
        &&label_80C20CE4,
        &&label_80C20CE8,
        &&label_80C20CEC,
        &&label_80C20CF0,
        &&label_80C20CF4,
        &&label_80C20CF8,
        &&label_80C20CFC,
        &&label_80C20D00,
        &&label_80C20D04,
        &&label_80C20D08,
        &&label_80C20D0C,
        &&label_80C20D10,
        &&label_80C20D14,
        &&label_80C20D18,
        &&label_80C20D1C,
        &&label_80C20D20,
        &&label_80C20D24,
        &&label_80C20D28,
        &&label_80C20D2C,
        &&label_80C20D30,
        &&label_80C20D34,
        &&label_80C20D38,
        &&label_80C20D3C,
        &&label_80C20D40,
        &&label_80C20D44,
        &&label_80C20D48,
        &&label_80C20D4C,
        &&label_80C20D50,
        &&label_80C20D54,
        &&label_80C20D58,
        &&label_80C20D5C,
        &&label_80C20D60,
        &&label_80C20D64,
        &&label_80C20D68,
        &&label_80C20D6C,
        &&label_80C20D70,
        &&label_80C20D74,
        &&label_80C20D78,
        &&label_80C20D7C,
        &&label_80C20D80,
        &&label_80C20D84,
        &&label_80C20D88,
        &&label_80C20D8C,
        &&label_80C20D90,
        &&label_80C20D94,
        &&label_80C20D98,
        &&label_80C20D9C,
        &&label_80C20DA0,
        &&label_80C20DA4,
        &&label_80C20DA8,
        &&label_80C20DAC,
        &&label_80C20DB0,
        &&label_80C20DB4,
        &&label_80C20DB8,
        &&label_80C20DBC,
        &&label_80C20DC0,
        &&label_80C20DC4,
        &&label_80C20DC8,
        &&label_80C20DCC,
        &&label_80C20DD0,
        &&label_80C20DD4,
        &&label_80C20DD8,
        &&label_80C20DDC,
        &&label_80C20DE0,
        &&label_80C20DE4,
        &&label_80C20DE8,
        &&label_80C20DEC,
        &&label_80C20DF0,
        &&label_80C20DF4,
        &&label_80C20DF8,
        &&label_80C20DFC,
        &&label_80C20E00,
        &&label_80C20E04,
        &&label_80C20E08,
        &&label_80C20E0C,
        &&label_80C20E10,
        &&label_80C20E14,
        &&label_80C20E18,
        &&label_80C20E1C,
        &&label_80C20E20,
        &&label_80C20E24,
        &&label_80C20E28,
        &&label_80C20E2C,
        &&label_80C20E30,
        &&label_80C20E34,
        &&label_80C20E38,
        &&label_80C20E3C,
        &&label_80C20E40,
        &&label_80C20E44,
        &&label_80C20E48,
        &&label_80C20E4C,
        &&label_80C20E50,
        &&label_80C20E54,
        &&label_80C20E58,
        &&label_80C20E5C,
        &&label_80C20E60,
        &&label_80C20E64,
        &&label_80C20E68,
        &&label_80C20E6C,
        &&label_80C20E70,
        &&label_80C20E74,
        &&label_80C20E78,
        &&label_80C20E7C,
        &&label_80C20E80,
        &&label_80C20E84,
        &&label_80C20E88,
        &&label_80C20E8C,
        &&label_80C20E90,
        &&label_80C20E94,
        &&label_80C20E98,
        &&label_80C20E9C,
        &&label_80C20EA0,
        &&label_80C20EA4,
        &&label_80C20EA8,
        &&label_80C20EAC,
        &&label_80C20EB0,
        &&label_80C20EB4,
        &&label_80C20EB8,
        &&label_80C20EBC,
        &&label_80C20EC0,
        &&label_80C20EC4,
        &&label_80C20EC8,
        &&label_80C20ECC,
        &&label_80C20ED0,
        &&label_80C20ED4,
        &&label_80C20ED8,
        &&label_80C20EDC,
        &&label_80C20EE0,
        &&label_80C20EE4,
        &&label_80C20EE8,
        &&label_80C20EEC,
        &&label_80C20EF0,
        &&label_80C20EF4,
        &&label_80C20EF8,
        &&label_80C20EFC,
        &&label_80C20F00,
        &&label_80C20F04,
        &&label_80C20F08,
        &&label_80C20F0C,
        &&label_80C20F10,
        &&label_80C20F14,
        &&label_80C20F18,
        &&label_80C20F1C,
        &&label_80C20F20,
        &&label_80C20F24,
        &&label_80C20F28,
        &&label_80C20F2C,
        &&label_80C20F30,
        &&label_80C20F34,
        &&label_80C20F38,
        &&label_80C20F3C,
        &&label_80C20F40,
        &&label_80C20F44,
        &&label_80C20F48,
        &&label_80C20F4C,
        &&label_80C20F50,
        &&label_80C20F54,
        &&label_80C20F58,
        &&label_80C20F5C,
        &&label_80C20F60,
        &&label_80C20F64,
        &&label_80C20F68,
        &&label_80C20F6C,
        &&label_80C20F70,
        &&label_80C20F74,
        &&label_80C20F78,
        &&label_80C20F7C,
        &&label_80C20F80,
        &&label_80C20F84,
        &&label_80C20F88,
        &&label_80C20F8C,
        &&label_80C20F90,
        &&label_80C20F94,
        &&label_80C20F98,
        &&label_80C20F9C,
        &&label_80C20FA0,
        &&label_80C20FA4,
        &&label_80C20FA8,
        &&label_80C20FAC,
        &&label_80C20FB0,
        &&label_80C20FB4,
        &&label_80C20FB8,
        &&label_80C20FBC,
        &&label_80C20FC0,
        &&label_80C20FC4,
        &&label_80C20FC8,
        &&label_80C20FCC,
        &&label_80C20FD0,
        &&label_80C20FD4,
        &&label_80C20FD8,
        &&label_80C20FDC,
        &&label_80C20FE0,
        &&label_80C20FE4,
        &&label_80C20FE8,
        &&label_80C20FEC,
        &&label_80C20FF0,
        &&label_80C20FF4,
        &&label_80C20FF8,
        &&label_80C20FFC,
        &&label_80C21000,
        &&label_80C21004,
        &&label_80C21008,
        &&label_80C2100C,
        &&label_80C21010,
        &&label_80C21014,
        &&label_80C21018,
        &&label_80C2101C,
        &&label_80C21020,
        &&label_80C21024,
        &&label_80C21028,
        &&label_80C2102C,
        &&label_80C21030,
        &&label_80C21034,
        &&label_80C21038,
        &&label_80C2103C,
        &&label_80C21040,
        &&label_80C21044,
        &&label_80C21048,
        &&label_80C2104C,
        &&label_80C21050,
        &&label_80C21054,
        &&label_80C21058,
        &&label_80C2105C,
        &&label_80C21060,
        &&label_80C21064,
        &&label_80C21068,
        &&label_80C2106C,
        &&label_80C21070,
        &&label_80C21074,
        &&label_80C21078,
        &&label_80C2107C,
        &&label_80C21080,
        &&label_80C21084,
        &&label_80C21088,
        &&label_80C2108C,
        &&label_80C21090,
        &&label_80C21094,
        &&label_80C21098,
        &&label_80C2109C,
        &&label_80C210A0,
        &&label_80C210A4,
        &&label_80C210A8,
        &&label_80C210AC,
        &&label_80C210B0,
        &&label_80C210B4,
        &&label_80C210B8,
        &&label_80C210BC,
        &&label_80C210C0,
        &&label_80C210C4,
        &&label_80C210C8,
        &&label_80C210CC,
        &&label_80C210D0,
        &&label_80C210D4,
        &&label_80C210D8,
        &&label_80C210DC,
        &&label_80C210E0,
        &&label_80C210E4,
        &&label_80C210E8,
        &&label_80C210EC,
        &&label_80C210F0,
        &&label_80C210F4,
        &&label_80C210F8,
        &&label_80C210FC,
        &&label_80C21100,
        &&label_80C21104,
        &&label_80C21108,
        &&label_80C2110C,
        &&label_80C21110,
        &&label_80C21114,
        &&label_80C21118,
        &&label_80C2111C,
        &&label_80C21120,
        &&label_80C21124,
        &&label_80C21128,
        &&label_80C2112C,
        &&label_80C21130,
        &&label_80C21134,
        &&label_80C21138,
        &&label_80C2113C,
        &&label_80C21140,
        &&label_80C21144,
        &&label_80C21148,
        &&label_80C2114C,
        &&label_80C21150,
        &&label_80C21154,
        &&label_80C21158,
        &&label_80C2115C,
        &&label_80C21160,
        &&label_80C21164,
        &&label_80C21168,
        &&label_80C2116C,
        &&label_80C21170,
        &&label_80C21174,
        &&label_80C21178,
        &&label_80C2117C,
        &&label_80C21180,
        &&label_80C21184,
        &&label_80C21188,
        &&label_80C2118C,
        &&label_80C21190,
        &&label_80C21194,
        &&label_80C21198,
        &&label_80C2119C,
        &&label_80C211A0,
        &&label_80C211A4,
        &&label_80C211A8,
        &&label_80C211AC,
        &&label_80C211B0,
        &&label_80C211B4,
        &&label_80C211B8,
        &&label_80C211BC,
        &&label_80C211C0,
        &&label_80C211C4,
        &&label_80C211C8,
        &&label_80C211CC,
        &&label_80C211D0,
        &&label_80C211D4,
        &&label_80C211D8,
        &&label_80C211DC,
        &&label_80C211E0,
        &&label_80C211E4,
        &&label_80C211E8,
        &&label_80C211EC,
        &&label_80C211F0,
        &&label_80C211F4,
        &&label_80C211F8,
        &&label_80C211FC,
        &&label_80C21200,
        &&label_80C21204,
        &&label_80C21208,
        &&label_80C2120C,
        &&label_80C21210,
        &&label_80C21214,
        &&label_80C21218,
        &&label_80C2121C,
        &&label_80C21220,
        &&label_80C21224,
        &&label_80C21228,
        &&label_80C2122C,
        &&label_80C21230,
        &&label_80C21234,
        &&label_80C21238,
        &&label_80C2123C,
        &&label_80C21240,
        &&label_80C21244,
        &&label_80C21248,
        &&label_80C2124C,
        &&label_80C21250,
        &&label_80C21254,
        &&label_80C21258,
        &&label_80C2125C,
        &&label_80C21260,
        &&label_80C21264,
        &&label_80C21268,
        &&label_80C2126C,
        &&label_80C21270,
        &&label_80C21274,
        &&label_80C21278,
        &&label_80C2127C,
        &&label_80C21280,
        &&label_80C21284,
        &&label_80C21288,
        &&label_80C2128C,
        &&label_80C21290,
        &&label_80C21294,
        &&label_80C21298,
        &&label_80C2129C,
        &&label_80C212A0,
        &&label_80C212A4,
        &&label_80C212A8,
        &&label_80C212AC,
        &&label_80C212B0,
        &&label_80C212B4,
        &&label_80C212B8,
        &&label_80C212BC,
        &&label_80C212C0,
        &&label_80C212C4,
        &&label_80C212C8,
        &&label_80C212CC,
        &&label_80C212D0,
        &&label_80C212D4,
        &&label_80C212D8,
        &&label_80C212DC,
        &&label_80C212E0,
        &&label_80C212E4,
        &&label_80C212E8,
        &&label_80C212EC,
        &&label_80C212F0,
        &&label_80C212F4,
        &&label_80C212F8,
        &&label_80C212FC,
        &&label_80C21300,
        &&label_80C21304,
        &&label_80C21308,
        &&label_80C2130C,
        &&label_80C21310,
        &&label_80C21314,
        &&label_80C21318,
        &&label_80C2131C,
        &&label_80C21320,
        &&label_80C21324,
        &&label_80C21328,
        &&label_80C2132C,
        &&label_80C21330,
        &&label_80C21334,
        &&label_80C21338,
        &&label_80C2133C,
        &&label_80C21340,
        &&label_80C21344,
        &&label_80C21348,
        &&label_80C2134C,
        &&label_80C21350,
        &&label_80C21354,
        &&label_80C21358,
        &&label_80C2135C,
        &&label_80C21360,
        &&label_80C21364,
        &&label_80C21368,
        &&label_80C2136C,
        &&label_80C21370,
        &&label_80C21374,
        &&label_80C21378,
        &&label_80C2137C,
        &&label_80C21380,
        &&label_80C21384,
        &&label_80C21388,
        &&label_80C2138C,
        &&label_80C21390,
        &&label_80C21394,
        &&label_80C21398,
        &&label_80C2139C,
        &&label_80C213A0,
        &&label_80C213A4,
        &&label_80C213A8,
        &&label_80C213AC,
        &&label_80C213B0,
        &&label_80C213B4,
        &&label_80C213B8,
        &&label_80C213BC,
        &&label_80C213C0,
        &&label_80C213C4,
        &&label_80C213C8,
        &&label_80C213CC,
        &&label_80C213D0,
        &&label_80C213D4,
        &&label_80C213D8,
        &&label_80C213DC,
        &&label_80C213E0,
        &&label_80C213E4,
        &&label_80C213E8,
        &&label_80C213EC,
        &&label_80C213F0,
        &&label_80C213F4,
        &&label_80C213F8,
        &&label_80C213FC,
        &&label_80C21400,
        &&label_80C21404,
        &&label_80C21408,
        &&label_80C2140C,
        &&label_80C21410,
        &&label_80C21414,
        &&label_80C21418,
        &&label_80C2141C,
        &&label_80C21420,
        &&label_80C21424,
        &&label_80C21428,
        &&label_80C2142C,
        &&label_80C21430,
        &&label_80C21434,
        &&label_80C21438,
        &&label_80C2143C,
        &&label_80C21440,
        &&label_80C21444,
        &&label_80C21448,
        &&label_80C2144C,
        &&label_80C21450,
        &&label_80C21454,
        &&label_80C21458,
        &&label_80C2145C,
        &&label_80C21460,
        &&label_80C21464,
        &&label_80C21468,
        &&label_80C2146C,
        &&label_80C21470,
        &&label_80C21474,
        &&label_80C21478,
        &&label_80C2147C,
        &&label_80C21480,
        &&label_80C21484,
        &&label_80C21488,
        &&label_80C2148C,
        &&label_80C21490,
        &&label_80C21494,
        &&label_80C21498,
        &&label_80C2149C,
        &&label_80C214A0,
        &&label_80C214A4,
        &&label_80C214A8,
        &&label_80C214AC,
        &&label_80C214B0,
        &&label_80C214B4,
        &&label_80C214B8,
        &&label_80C214BC,
        &&label_80C214C0,
        &&label_80C214C4,
        &&label_80C214C8,
        &&label_80C214CC,
        &&label_80C214D0,
        &&label_80C214D4,
        &&label_80C214D8,
        &&label_80C214DC,
        &&label_80C214E0,
        &&label_80C214E4,
        &&label_80C214E8,
        &&label_80C214EC,
        &&label_80C214F0,
        &&label_80C214F4,
        &&label_80C214F8,
        &&label_80C214FC,
        &&label_80C21500,
        &&label_80C21504,
        &&label_80C21508,
        &&label_80C2150C,
        &&label_80C21510,
        &&label_80C21514,
        &&label_80C21518,
        &&label_80C2151C,
        &&label_80C21520,
        &&label_80C21524,
        &&label_80C21528,
        &&label_80C2152C,
        &&label_80C21530,
        &&label_80C21534,
        &&label_80C21538,
        &&label_80C2153C,
        &&label_80C21540,
        &&label_80C21544,
        &&label_80C21548,
        &&label_80C2154C,
        &&label_80C21550,
        &&label_80C21554,
        &&label_80C21558,
        &&label_80C2155C,
        &&label_80C21560,
        &&label_80C21564,
        &&label_80C21568,
        &&label_80C2156C,
        &&label_80C21570,
        &&label_80C21574,
        &&label_80C21578,
        &&label_80C2157C,
        &&label_80C21580,
        &&label_80C21584,
        &&label_80C21588,
        &&label_80C2158C,
        &&label_80C21590,
        &&label_80C21594,
        &&label_80C21598,
        &&label_80C2159C,
        &&label_80C215A0,
        &&label_80C215A4,
        &&label_80C215A8,
        &&label_80C215AC,
        &&label_80C215B0,
        &&label_80C215B4,
        &&label_80C215B8,
        &&label_80C215BC,
        &&label_80C215C0,
        &&label_80C215C4,
        &&label_80C215C8,
        &&label_80C215CC,
        &&label_80C215D0,
        &&label_80C215D4,
        &&label_80C215D8,
        &&label_80C215DC,
        &&label_80C215E0,
        &&label_80C215E4,
        &&label_80C215E8,
        &&label_80C215EC,
        &&label_80C215F0,
        &&label_80C215F4,
        &&label_80C215F8,
        &&label_80C215FC,
        &&label_80C21600,
        &&label_80C21604,
        &&label_80C21608,
        &&label_80C2160C,
        &&label_80C21610,
        &&label_80C21614,
        &&label_80C21618,
        &&label_80C2161C,
        &&label_80C21620,
        &&label_80C21624,
        &&label_80C21628,
        &&label_80C2162C,
        &&label_80C21630,
        &&label_80C21634,
        &&label_80C21638,
        &&label_80C2163C,
        &&label_80C21640,
        &&label_80C21644,
        &&label_80C21648,
        &&label_80C2164C,
        &&label_80C21650,
        &&label_80C21654,
        &&label_80C21658,
        &&label_80C2165C,
        &&label_80C21660,
        &&label_80C21664,
        &&label_80C21668,
        &&label_80C2166C,
        &&label_80C21670,
        &&label_80C21674,
        &&label_80C21678,
        &&label_80C2167C,
        &&label_80C21680,
        &&label_80C21684,
        &&label_80C21688,
        &&label_80C2168C,
        &&label_80C21690,
        &&label_80C21694,
        &&label_80C21698,
        &&label_80C2169C,
        &&label_80C216A0,
        &&label_80C216A4,
        &&label_80C216A8,
        &&label_80C216AC,
        &&label_80C216B0,
        &&label_80C216B4,
        &&label_80C216B8,
        &&label_80C216BC,
        &&label_80C216C0,
        &&label_80C216C4,
        &&label_80C216C8,
        &&label_80C216CC,
        &&label_80C216D0,
        &&label_80C216D4,
        &&label_80C216D8,
        &&label_80C216DC,
        &&label_80C216E0,
        &&label_80C216E4,
        &&label_80C216E8,
        &&label_80C216EC,
        &&label_80C216F0,
        &&label_80C216F4,
        &&label_80C216F8,
        &&label_80C216FC,
        &&label_80C21700,
        &&label_80C21704,
        &&label_80C21708,
        &&label_80C2170C,
        &&label_80C21710,
        &&label_80C21714,
        &&label_80C21718,
        &&label_80C2171C,
        &&label_80C21720,
        &&label_80C21724,
        &&label_80C21728,
        &&label_80C2172C,
        &&label_80C21730,
        &&label_80C21734,
        &&label_80C21738,
        &&label_80C2173C,
        &&label_80C21740,
        &&label_80C21744,
        &&label_80C21748,
        &&label_80C2174C,
        &&label_80C21750,
        &&label_80C21754,
        &&label_80C21758,
        &&label_80C2175C,
        &&label_80C21760,
        &&label_80C21764,
        &&label_80C21768,
        &&label_80C2176C,
        &&label_80C21770,
        &&label_80C21774,
        &&label_80C21778,
        &&label_80C2177C,
        &&label_80C21780,
        &&label_80C21784,
        &&label_80C21788,
        &&label_80C2178C,
        &&label_80C21790,
        &&label_80C21794,
        &&label_80C21798,
        &&label_80C2179C,
        &&label_80C217A0,
        &&label_80C217A4,
        &&label_80C217A8,
        &&label_80C217AC,
        &&label_80C217B0,
        &&label_80C217B4,
        &&label_80C217B8,
        &&label_80C217BC,
        &&label_80C217C0,
        &&label_80C217C4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C20B20u && pc <= 0x80C217C4u && ((pc - 0x80C20B20u) & 3u) == 0u)
            goto *pc_table_80C20B20[(pc - 0x80C20B20u) >> 2];
    }
    return;
label_80C20B20:
    ctx->pc = 0x80C20B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C20B20: stwu     r1, -48(r1)
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
label_80C20B24:
    ctx->pc = 0x80C20B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20B24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C20B28:
    ctx->pc = 0x80C20B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20B28: stw     r0, 52(r1)
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
label_80C20B2C:
    ctx->pc = 0x80C20B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C20B2C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C20B2Cu)) return;
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
label_80C20B30:
    ctx->pc = 0x80C20B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C20B30: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C20B30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C20B30u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C20B34:
    ctx->pc = 0x80C20B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C20B34: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C20B34u)) return;
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
label_80C20B38:
    ctx->pc = 0x80C20B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C20B38: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C20B38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C20B38u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C20B3C:
    ctx->pc = 0x80C20B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B3Cu)) return;
    // 80C20B3C: cmpwi   r3, 2
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

label_80C20B40:
    ctx->pc = 0x80C20B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B40u)) return;
    // 80C20B40: bc    12, 2, 0x80C21750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C21750;
        }
    }

label_80C20B44:
    ctx->pc = 0x80C20B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20B44: bc    4, 0, 0x80C20B58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C20B58;
        }
    }

label_80C20B48:
    ctx->pc = 0x80C20B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20B48: cmpwi   r3, 0
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

label_80C20B4C:
    ctx->pc = 0x80C20B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B4Cu)) return;
    // 80C20B4C: bc    12, 2, 0x80C217A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C217A8;
        }
    }

label_80C20B50:
    ctx->pc = 0x80C20B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20B50: bc    4, 0, 0x80C20B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C20B60;
        }
    }

label_80C20B54:
    ctx->pc = 0x80C20B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20B54: b       0x80C217A8
    {
            goto label_80C217A8;
    }

label_80C20B58:
    ctx->pc = 0x80C20B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20B58: cmpwi   r3, 4
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

label_80C20B5C:
    ctx->pc = 0x80C20B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B5Cu)) return;
    // 80C20B5C: b       0x80C217A8
    {
            goto label_80C217A8;
    }

label_80C20B60:
    ctx->pc = 0x80C20B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20B60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20B64:
    ctx->pc = 0x80C20B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B64u)) return;
    // 80C20B64: bl      0x8045EC10
    {
            ctx->lr = 0x80C20B68u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C20B68:
    ctx->pc = 0x80C20B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20B68: bl      0x8045DE7C
    {
            ctx->lr = 0x80C20B6Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C20B6C:
    ctx->pc = 0x80C20B6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20B6C: bl      0x80460A60
    {
            ctx->lr = 0x80C20B70u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C20B70:
    ctx->pc = 0x80C20B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20B70: bl      0x80460A24
    {
            ctx->lr = 0x80C20B74u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C20B74:
    ctx->pc = 0x80C20B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20B74: li      r3, 76
    ctx->gpr[3] = (u32)(s32)(76);

label_80C20B78:
    ctx->pc = 0x80C20B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B78u)) return;
    // 80C20B78: bl      0x80406090
    {
            ctx->lr = 0x80C20B7Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C20B7C:
    ctx->pc = 0x80C20B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20B7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20B80:
    ctx->pc = 0x80C20B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B80u)) return;
    // 80C20B80: bl      0x8045F220
    {
            ctx->lr = 0x80C20B84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20B84:
    ctx->pc = 0x80C20B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20B84: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20B88:
    ctx->pc = 0x80C20B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B88u)) return;
    // 80C20B88: addi    r4, r4, -14928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14928);

label_80C20B8C:
    ctx->pc = 0x80C20B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20B8C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20B8Cu)) return;
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
label_80C20B90:
    ctx->pc = 0x80C20B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B90u)) return;
    // 80C20B90: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20B94:
    ctx->pc = 0x80C20B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B94u)) return;
    // 80C20B94: addi    r4, r4, -14924
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14924);

label_80C20B98:
    ctx->pc = 0x80C20B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C20B98: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20B98u)) return;
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
label_80C20B9C:
    ctx->pc = 0x80C20B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20B9Cu)) return;
    // 80C20B9C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20BA0:
    ctx->pc = 0x80C20BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BA0u)) return;
    // 80C20BA0: addi    r4, r4, -14920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14920);

label_80C20BA4:
    ctx->pc = 0x80C20BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20BA4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20BA4u)) return;
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
label_80C20BA8:
    ctx->pc = 0x80C20BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BA8u)) return;
    // 80C20BA8: bl      0x8045EF2C
    {
            ctx->lr = 0x80C20BACu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C20BAC:
    ctx->pc = 0x80C20BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20BAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20BB0:
    ctx->pc = 0x80C20BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BB0u)) return;
    // 80C20BB0: bl      0x8045F220
    {
            ctx->lr = 0x80C20BB4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20BB4:
    ctx->pc = 0x80C20BB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20BB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C20BB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C20BB8:
    ctx->pc = 0x80C20BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BB8u)) return;
    // 80C20BB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C20BBC:
    ctx->pc = 0x80C20BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BBCu)) return;
    // 80C20BBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C20BC0:
    ctx->pc = 0x80C20BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BC0u)) return;
    // 80C20BC0: bl      0x8045EEA8
    {
            ctx->lr = 0x80C20BC4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C20BC4:
    ctx->pc = 0x80C20BC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20BC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C20BC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C20BC8:
    ctx->pc = 0x80C20BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BC8u)) return;
    // 80C20BC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C20BCC:
    ctx->pc = 0x80C20BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BCCu)) return;
    // 80C20BCC: li      r5, 2304
    ctx->gpr[5] = (u32)(s32)(2304);

label_80C20BD0:
    ctx->pc = 0x80C20BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BD0u)) return;
    // 80C20BD0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C20BD4:
    ctx->pc = 0x80C20BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BD4u)) return;
    // 80C20BD4: addi    r6, r6, -27904
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27904);

label_80C20BD8:
    ctx->pc = 0x80C20BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BD8u)) return;
    // 80C20BD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C20BDC:
    ctx->pc = 0x80C20BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BDCu)) return;
    // 80C20BDC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C20BE0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C20BE0:
    ctx->pc = 0x80C20BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C20BE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C20BE4:
    ctx->pc = 0x80C20BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BE4u)) return;
    // 80C20BE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C20BE8:
    ctx->pc = 0x80C20BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BE8u)) return;
    // 80C20BE8: lis     r5, -27459
    ctx->gpr[5] = ((u32)(s32)(-27459) << 16);

label_80C20BEC:
    ctx->pc = 0x80C20BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BECu)) return;
    // 80C20BEC: addi    r5, r5, -14916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14916);

label_80C20BF0:
    ctx->pc = 0x80C20BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20BF0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C20BF0u)) return;
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
label_80C20BF4:
    ctx->pc = 0x80C20BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BF4u)) return;
    // 80C20BF4: lis     r5, -27459
    ctx->gpr[5] = ((u32)(s32)(-27459) << 16);

label_80C20BF8:
    ctx->pc = 0x80C20BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BF8u)) return;
    // 80C20BF8: addi    r5, r5, -14912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14912);

label_80C20BFC:
    ctx->pc = 0x80C20BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C20BFC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C20BFCu)) return;
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
label_80C20C00:
    ctx->pc = 0x80C20C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C00u)) return;
    // 80C20C00: lis     r5, -27459
    ctx->gpr[5] = ((u32)(s32)(-27459) << 16);

label_80C20C04:
    ctx->pc = 0x80C20C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C04u)) return;
    // 80C20C04: addi    r5, r5, -14908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14908);

label_80C20C08:
    ctx->pc = 0x80C20C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20C08: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C20C08u)) return;
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
label_80C20C0C:
    ctx->pc = 0x80C20C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C0Cu)) return;
    // 80C20C0C: bl      0x8045C750
    {
            ctx->lr = 0x80C20C10u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C20C10:
    ctx->pc = 0x80C20C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C20C10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20C14:
    ctx->pc = 0x80C20C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C14u)) return;
    // 80C20C14: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C20C18:
    ctx->pc = 0x80C20C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C18u)) return;
    // 80C20C18: lis     r5, -27459
    ctx->gpr[5] = ((u32)(s32)(-27459) << 16);

label_80C20C1C:
    ctx->pc = 0x80C20C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C1Cu)) return;
    // 80C20C1C: addi    r5, r5, -14904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14904);

label_80C20C20:
    ctx->pc = 0x80C20C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20C20: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C20C20u)) return;
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
label_80C20C24:
    ctx->pc = 0x80C20C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C24u)) return;
    // 80C20C24: lis     r5, -27459
    ctx->gpr[5] = ((u32)(s32)(-27459) << 16);

label_80C20C28:
    ctx->pc = 0x80C20C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C28u)) return;
    // 80C20C28: addi    r5, r5, -14900
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14900);

label_80C20C2C:
    ctx->pc = 0x80C20C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C20C2C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C20C2Cu)) return;
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
label_80C20C30:
    ctx->pc = 0x80C20C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C30u)) return;
    // 80C20C30: lis     r5, -27459
    ctx->gpr[5] = ((u32)(s32)(-27459) << 16);

label_80C20C34:
    ctx->pc = 0x80C20C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C34u)) return;
    // 80C20C34: addi    r5, r5, -14896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14896);

label_80C20C38:
    ctx->pc = 0x80C20C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20C38: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C20C38u)) return;
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
label_80C20C3C:
    ctx->pc = 0x80C20C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C3Cu)) return;
    // 80C20C3C: bl      0x8045C750
    {
            ctx->lr = 0x80C20C40u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C20C40:
    ctx->pc = 0x80C20C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20C40: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C20C44:
    ctx->pc = 0x80C20C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C44u)) return;
    // 80C20C44: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20C48u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20C48:
    ctx->pc = 0x80C20C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20C48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20C4C:
    ctx->pc = 0x80C20C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C4Cu)) return;
    // 80C20C4C: bl      0x8045F220
    {
            ctx->lr = 0x80C20C50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20C50:
    ctx->pc = 0x80C20C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20C50: lwz     r3, 32(r3)
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
label_80C20C54:
    ctx->pc = 0x80C20C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20C54: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20C54u)) return;
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
label_80C20C58:
    ctx->pc = 0x80C20C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C58u)) return;
    // 80C20C58: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C20C5C:
    ctx->pc = 0x80C20C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C5Cu)) return;
    // 80C20C5C: addi    r3, r3, -14884
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14884);

label_80C20C60:
    ctx->pc = 0x80C20C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C20C60: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20C60u)) return;
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
label_80C20C64:
    ctx->pc = 0x80C20C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C64u)) return;
    // 80C20C64: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C20C64u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80C20C68:
    ctx->pc = 0x80C20C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C68u)) return;
    // 80C20C68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20C6C:
    ctx->pc = 0x80C20C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C6Cu)) return;
    // 80C20C6C: bl      0x8045F220
    {
            ctx->lr = 0x80C20C70u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20C70:
    ctx->pc = 0x80C20C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20C70: lwz     r3, 32(r3)
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
label_80C20C74:
    ctx->pc = 0x80C20C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20C74: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20C74u)) return;
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
label_80C20C78:
    ctx->pc = 0x80C20C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C78u)) return;
    // 80C20C78: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C20C7C:
    ctx->pc = 0x80C20C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C7Cu)) return;
    // 80C20C7C: addi    r3, r3, -14888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14888);

label_80C20C80:
    ctx->pc = 0x80C20C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C20C80: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20C80u)) return;
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
label_80C20C84:
    ctx->pc = 0x80C20C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C84u)) return;
    // 80C20C84: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C20C84u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80C20C88:
    ctx->pc = 0x80C20C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C88u)) return;
    // 80C20C88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20C8C:
    ctx->pc = 0x80C20C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C8Cu)) return;
    // 80C20C8C: bl      0x8045F220
    {
            ctx->lr = 0x80C20C90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20C90:
    ctx->pc = 0x80C20C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C20C90: lwz     r3, 32(r3)
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
label_80C20C94:
    ctx->pc = 0x80C20C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C20C94: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20C94u)) return;
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
label_80C20C98:
    ctx->pc = 0x80C20C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C98u)) return;
    // 80C20C98: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C20C9C:
    ctx->pc = 0x80C20C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20C9Cu)) return;
    // 80C20C9C: addi    r3, r3, -14892
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14892);

label_80C20CA0:
    ctx->pc = 0x80C20CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20CA0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20CA0u)) return;
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
label_80C20CA4:
    ctx->pc = 0x80C20CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CA4u)) return;
    // 80C20CA4: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C20CA4u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80C20CA8:
    ctx->pc = 0x80C20CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CA8u)) return;
    // 80C20CA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20CAC:
    ctx->pc = 0x80C20CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CACu)) return;
    // 80C20CAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C20CB0:
    ctx->pc = 0x80C20CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CB0u)) return;
    // 80C20CB0: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80C20CB0u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80C20CB4:
    ctx->pc = 0x80C20CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CB4u)) return;
    // 80C20CB4: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80C20CB4u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80C20CB8:
    ctx->pc = 0x80C20CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CB8u)) return;
    // 80C20CB8: bl      0x8045C750
    {
            ctx->lr = 0x80C20CBCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C20CBC:
    ctx->pc = 0x80C20CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C20CBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20CC0:
    ctx->pc = 0x80C20CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CC0u)) return;
    // 80C20CC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C20CC4:
    ctx->pc = 0x80C20CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CC4u)) return;
    // 80C20CC4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C20CC8:
    ctx->pc = 0x80C20CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CC8u)) return;
    // 80C20CC8: addi    r5, r5, -1280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1280);

label_80C20CCC:
    ctx->pc = 0x80C20CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CCCu)) return;
    // 80C20CCC: li      r6, 4352
    ctx->gpr[6] = (u32)(s32)(4352);

label_80C20CD0:
    ctx->pc = 0x80C20CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CD0u)) return;
    // 80C20CD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C20CD4:
    ctx->pc = 0x80C20CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CD4u)) return;
    // 80C20CD4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C20CD8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C20CD8:
    ctx->pc = 0x80C20CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20CD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20CDC:
    ctx->pc = 0x80C20CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CDCu)) return;
    // 80C20CDC: bl      0x8045F220
    {
            ctx->lr = 0x80C20CE0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20CE0:
    ctx->pc = 0x80C20CE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20CE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20CE0: lwz     r3, 32(r3)
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
label_80C20CE4:
    ctx->pc = 0x80C20CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20CE4: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20CE4u)) return;
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
label_80C20CE8:
    ctx->pc = 0x80C20CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CE8u)) return;
    // 80C20CE8: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C20CEC:
    ctx->pc = 0x80C20CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CECu)) return;
    // 80C20CEC: addi    r3, r3, -14872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14872);

label_80C20CF0:
    ctx->pc = 0x80C20CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C20CF0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20CF0u)) return;
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
label_80C20CF4:
    ctx->pc = 0x80C20CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CF4u)) return;
    // 80C20CF4: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C20CF4u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80C20CF8:
    ctx->pc = 0x80C20CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CF8u)) return;
    // 80C20CF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20CFC:
    ctx->pc = 0x80C20CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20CFCu)) return;
    // 80C20CFC: bl      0x8045F220
    {
            ctx->lr = 0x80C20D00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20D00:
    ctx->pc = 0x80C20D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20D00: lwz     r3, 32(r3)
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
label_80C20D04:
    ctx->pc = 0x80C20D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20D04: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20D04u)) return;
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
label_80C20D08:
    ctx->pc = 0x80C20D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D08u)) return;
    // 80C20D08: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C20D0C:
    ctx->pc = 0x80C20D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D0Cu)) return;
    // 80C20D0C: addi    r3, r3, -14876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14876);

label_80C20D10:
    ctx->pc = 0x80C20D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C20D10: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20D10u)) return;
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
label_80C20D14:
    ctx->pc = 0x80C20D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D14u)) return;
    // 80C20D14: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C20D14u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80C20D18:
    ctx->pc = 0x80C20D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D18u)) return;
    // 80C20D18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20D1C:
    ctx->pc = 0x80C20D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D1Cu)) return;
    // 80C20D1C: bl      0x8045F220
    {
            ctx->lr = 0x80C20D20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20D20:
    ctx->pc = 0x80C20D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C20D20: lwz     r3, 32(r3)
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
label_80C20D24:
    ctx->pc = 0x80C20D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C20D24: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20D24u)) return;
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
label_80C20D28:
    ctx->pc = 0x80C20D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D28u)) return;
    // 80C20D28: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C20D2C:
    ctx->pc = 0x80C20D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D2Cu)) return;
    // 80C20D2C: addi    r3, r3, -14880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14880);

label_80C20D30:
    ctx->pc = 0x80C20D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20D30: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C20D30u)) return;
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
label_80C20D34:
    ctx->pc = 0x80C20D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D34u)) return;
    // 80C20D34: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C20D34u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80C20D38:
    ctx->pc = 0x80C20D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D38u)) return;
    // 80C20D38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20D3C:
    ctx->pc = 0x80C20D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D3Cu)) return;
    // 80C20D3C: li      r4, 480
    ctx->gpr[4] = (u32)(s32)(480);

label_80C20D40:
    ctx->pc = 0x80C20D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D40u)) return;
    // 80C20D40: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80C20D40u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80C20D44:
    ctx->pc = 0x80C20D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D44u)) return;
    // 80C20D44: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80C20D44u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80C20D48:
    ctx->pc = 0x80C20D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D48u)) return;
    // 80C20D48: bl      0x8045C750
    {
            ctx->lr = 0x80C20D4Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C20D4C:
    ctx->pc = 0x80C20D4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20D4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20D4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20D50:
    ctx->pc = 0x80C20D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D50u)) return;
    // 80C20D50: bl      0x8045F220
    {
            ctx->lr = 0x80C20D54u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20D54:
    ctx->pc = 0x80C20D54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20D54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20D54: bl      0x8045EB8C
    {
            ctx->lr = 0x80C20D58u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C20D58:
    ctx->pc = 0x80C20D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20D58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20D5C:
    ctx->pc = 0x80C20D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D5Cu)) return;
    // 80C20D5C: bl      0x8045F220
    {
            ctx->lr = 0x80C20D60u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20D60:
    ctx->pc = 0x80C20D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20D60: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20D64:
    ctx->pc = 0x80C20D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D64u)) return;
    // 80C20D64: addi    r4, r4, 5252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5252);

label_80C20D68:
    ctx->pc = 0x80C20D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D68u)) return;
    // 80C20D68: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C20D6C:
    ctx->pc = 0x80C20D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D6Cu)) return;
    // 80C20D6C: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C20D70:
    ctx->pc = 0x80C20D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D70u)) return;
    // 80C20D70: lis     r6, -27459
    ctx->gpr[6] = ((u32)(s32)(-27459) << 16);

label_80C20D74:
    ctx->pc = 0x80C20D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D74u)) return;
    // 80C20D74: addi    r6, r6, -14868
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14868);

label_80C20D78:
    ctx->pc = 0x80C20D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C20D78: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C20D78u)) return;
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
label_80C20D7C:
    ctx->pc = 0x80C20D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D7Cu)) return;
    // 80C20D7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C20D80:
    ctx->pc = 0x80C20D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D80u)) return;
    // 80C20D80: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C20D84:
    ctx->pc = 0x80C20D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D84u)) return;
    // 80C20D84: bl      0x8045EBE4
    {
            ctx->lr = 0x80C20D88u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C20D88:
    ctx->pc = 0x80C20D88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20D88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20D88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20D8C:
    ctx->pc = 0x80C20D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D8Cu)) return;
    // 80C20D8C: bl      0x8045F220
    {
            ctx->lr = 0x80C20D90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20D90:
    ctx->pc = 0x80C20D90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20D90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20D90: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20D94:
    ctx->pc = 0x80C20D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D94u)) return;
    // 80C20D94: addi    r4, r4, 13768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13768);

label_80C20D98:
    ctx->pc = 0x80C20D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D98u)) return;
    // 80C20D98: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C20D9C:
    ctx->pc = 0x80C20D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20D9Cu)) return;
    // 80C20D9C: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C20DA0:
    ctx->pc = 0x80C20DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DA0u)) return;
    // 80C20DA0: lis     r6, -27459
    ctx->gpr[6] = ((u32)(s32)(-27459) << 16);

label_80C20DA4:
    ctx->pc = 0x80C20DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DA4u)) return;
    // 80C20DA4: addi    r6, r6, -14864
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14864);

label_80C20DA8:
    ctx->pc = 0x80C20DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C20DA8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C20DA8u)) return;
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
label_80C20DAC:
    ctx->pc = 0x80C20DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DACu)) return;
    // 80C20DAC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C20DB0:
    ctx->pc = 0x80C20DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DB0u)) return;
    // 80C20DB0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C20DB4:
    ctx->pc = 0x80C20DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DB4u)) return;
    // 80C20DB4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C20DB8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C20DB8:
    ctx->pc = 0x80C20DB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20DB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20DB8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C20DBC:
    ctx->pc = 0x80C20DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DBCu)) return;
    // 80C20DBC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20DC0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20DC0:
    ctx->pc = 0x80C20DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20DC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20DC4:
    ctx->pc = 0x80C20DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DC4u)) return;
    // 80C20DC4: bl      0x8045F220
    {
            ctx->lr = 0x80C20DC8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20DC8:
    ctx->pc = 0x80C20DC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20DC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20DC8: bl      0x8045C034
    {
            ctx->lr = 0x80C20DCCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C20DCC:
    ctx->pc = 0x80C20DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C20DCC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C20DD0:
    ctx->pc = 0x80C20DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DD0u)) return;
    // 80C20DD0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C20DD4:
    ctx->pc = 0x80C20DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C20DD4: lwz     r0, 0(r3)
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
label_80C20DD8:
    ctx->pc = 0x80C20DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DD8u)) return;
    // 80C20DD8: cmpwi   r0, 0
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

label_80C20DDC:
    ctx->pc = 0x80C20DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DDCu)) return;
    // 80C20DDC: bc    4, 2, 0x80C20DF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C20DF4;
        }
    }

label_80C20DE0:
    ctx->pc = 0x80C20DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20DE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20DE4:
    ctx->pc = 0x80C20DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DE4u)) return;
    // 80C20DE4: bl      0x8045F220
    {
            ctx->lr = 0x80C20DE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20DE8:
    ctx->pc = 0x80C20DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C20DE8: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20DEC:
    ctx->pc = 0x80C20DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DECu)) return;
    // 80C20DEC: addi    r4, r4, -13764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13764);

label_80C20DF0:
    ctx->pc = 0x80C20DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DF0u)) return;
    // 80C20DF0: bl      0x8045C060
    {
            ctx->lr = 0x80C20DF4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C20DF4:
    ctx->pc = 0x80C20DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C20DF4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C20DF8:
    ctx->pc = 0x80C20DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DF8u)) return;
    // 80C20DF8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C20DFC:
    ctx->pc = 0x80C20DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C20DFC: lwz     r0, 0(r3)
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
label_80C20E00:
    ctx->pc = 0x80C20E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E00u)) return;
    // 80C20E00: cmpwi   r0, 1
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

label_80C20E04:
    ctx->pc = 0x80C20E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E04u)) return;
    // 80C20E04: bc    4, 2, 0x80C20E1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C20E1C;
        }
    }

label_80C20E08:
    ctx->pc = 0x80C20E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20E08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20E0C:
    ctx->pc = 0x80C20E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E0Cu)) return;
    // 80C20E0C: bl      0x8045F220
    {
            ctx->lr = 0x80C20E10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20E10:
    ctx->pc = 0x80C20E10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C20E10: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20E14:
    ctx->pc = 0x80C20E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E14u)) return;
    // 80C20E14: addi    r4, r4, -13764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13764);

label_80C20E18:
    ctx->pc = 0x80C20E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E18u)) return;
    // 80C20E18: bl      0x8045C060
    {
            ctx->lr = 0x80C20E1Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C20E1C:
    ctx->pc = 0x80C20E1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20E1C: li      r3, 1017
    ctx->gpr[3] = (u32)(s32)(1017);

label_80C20E20:
    ctx->pc = 0x80C20E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E20u)) return;
    // 80C20E20: bl      0x8045BFA0
    {
            ctx->lr = 0x80C20E24u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C20E24:
    ctx->pc = 0x80C20E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C20E24: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C20E28:
    ctx->pc = 0x80C20E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E28u)) return;
    // 80C20E28: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C20E2C:
    ctx->pc = 0x80C20E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20E2C: lwz     r0, 0(r3)
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
label_80C20E30:
    ctx->pc = 0x80C20E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E30u)) return;
    // 80C20E30: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C20E34:
    ctx->pc = 0x80C20E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E34u)) return;
    // 80C20E34: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C20E38:
    ctx->pc = 0x80C20E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E38u)) return;
    // 80C20E38: addi    r3, r3, -13792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13792);

label_80C20E3C:
    ctx->pc = 0x80C20E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C20E3C: lwzx    r3, r3, r0
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
label_80C20E40:
    ctx->pc = 0x80C20E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20E40: lwz     r3, 0(r3)
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
label_80C20E44:
    ctx->pc = 0x80C20E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E44u)) return;
    // 80C20E44: bl      0x8045F6FC
    {
            ctx->lr = 0x80C20E48u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C20E48:
    ctx->pc = 0x80C20E48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20E48: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80C20E4C:
    ctx->pc = 0x80C20E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E4Cu)) return;
    // 80C20E4C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20E50u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20E50:
    ctx->pc = 0x80C20E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C20E50: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C20E54:
    ctx->pc = 0x80C20E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E54u)) return;
    // 80C20E54: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C20E58:
    ctx->pc = 0x80C20E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C20E58: lwz     r0, 0(r3)
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
label_80C20E5C:
    ctx->pc = 0x80C20E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E5Cu)) return;
    // 80C20E5C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C20E60:
    ctx->pc = 0x80C20E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E60u)) return;
    // 80C20E60: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C20E64:
    ctx->pc = 0x80C20E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E64u)) return;
    // 80C20E64: addi    r3, r3, -13792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13792);

label_80C20E68:
    ctx->pc = 0x80C20E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C20E68: lwzx    r3, r3, r0
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
label_80C20E6C:
    ctx->pc = 0x80C20E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20E6C: lwz     r3, 4(r3)
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
label_80C20E70:
    ctx->pc = 0x80C20E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E70u)) return;
    // 80C20E70: bl      0x8045F6FC
    {
            ctx->lr = 0x80C20E74u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C20E74:
    ctx->pc = 0x80C20E74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20E74: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C20E78:
    ctx->pc = 0x80C20E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E78u)) return;
    // 80C20E78: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20E7Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20E7C:
    ctx->pc = 0x80C20E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C20E7C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C20E80:
    ctx->pc = 0x80C20E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E80u)) return;
    // 80C20E80: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C20E84:
    ctx->pc = 0x80C20E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C20E84: lwz     r0, 0(r3)
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
label_80C20E88:
    ctx->pc = 0x80C20E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E88u)) return;
    // 80C20E88: cmpwi   r0, 1
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

label_80C20E8C:
    ctx->pc = 0x80C20E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E8Cu)) return;
    // 80C20E8C: bc    4, 2, 0x80C20E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C20E9C;
        }
    }

label_80C20E90:
    ctx->pc = 0x80C20E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20E90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20E94:
    ctx->pc = 0x80C20E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20E94u)) return;
    // 80C20E94: bl      0x8045F220
    {
            ctx->lr = 0x80C20E98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20E98:
    ctx->pc = 0x80C20E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20E98: bl      0x8045C034
    {
            ctx->lr = 0x80C20E9Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C20E9C:
    ctx->pc = 0x80C20E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20E9C: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80C20EA0:
    ctx->pc = 0x80C20EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EA0u)) return;
    // 80C20EA0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20EA4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20EA4:
    ctx->pc = 0x80C20EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C20EA4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C20EA8:
    ctx->pc = 0x80C20EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EA8u)) return;
    // 80C20EA8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C20EAC:
    ctx->pc = 0x80C20EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C20EAC: lwz     r0, 0(r3)
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
label_80C20EB0:
    ctx->pc = 0x80C20EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EB0u)) return;
    // 80C20EB0: cmpwi   r0, 0
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

label_80C20EB4:
    ctx->pc = 0x80C20EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EB4u)) return;
    // 80C20EB4: bc    4, 2, 0x80C20EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C20EC4;
        }
    }

label_80C20EB8:
    ctx->pc = 0x80C20EB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20EB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20EB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20EBC:
    ctx->pc = 0x80C20EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EBCu)) return;
    // 80C20EBC: bl      0x8045F220
    {
            ctx->lr = 0x80C20EC0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20EC0:
    ctx->pc = 0x80C20EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20EC0: bl      0x8045C034
    {
            ctx->lr = 0x80C20EC4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C20EC4:
    ctx->pc = 0x80C20EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20EC4: bl      0x8045F32C
    {
            ctx->lr = 0x80C20EC8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C20EC8:
    ctx->pc = 0x80C20EC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20EC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20EC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20ECC:
    ctx->pc = 0x80C20ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20ECCu)) return;
    // 80C20ECC: bl      0x8045F220
    {
            ctx->lr = 0x80C20ED0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20ED0:
    ctx->pc = 0x80C20ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20ED0: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C20ED4:
    ctx->pc = 0x80C20ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20ED4u)) return;
    // 80C20ED4: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C20ED8:
    ctx->pc = 0x80C20ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20ED8u)) return;
    // 80C20ED8: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C20EDC:
    ctx->pc = 0x80C20EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EDCu)) return;
    // 80C20EDC: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C20EE0:
    ctx->pc = 0x80C20EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EE0u)) return;
    // 80C20EE0: lis     r6, -27459
    ctx->gpr[6] = ((u32)(s32)(-27459) << 16);

label_80C20EE4:
    ctx->pc = 0x80C20EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EE4u)) return;
    // 80C20EE4: addi    r6, r6, -14864
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14864);

label_80C20EE8:
    ctx->pc = 0x80C20EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C20EE8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C20EE8u)) return;
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
label_80C20EEC:
    ctx->pc = 0x80C20EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EECu)) return;
    // 80C20EEC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C20EF0:
    ctx->pc = 0x80C20EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EF0u)) return;
    // 80C20EF0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C20EF4:
    ctx->pc = 0x80C20EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EF4u)) return;
    // 80C20EF4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C20EF8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C20EF8:
    ctx->pc = 0x80C20EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20EF8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C20EFC:
    ctx->pc = 0x80C20EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20EFCu)) return;
    // 80C20EFC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20F00u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20F00:
    ctx->pc = 0x80C20F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20F00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20F04:
    ctx->pc = 0x80C20F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F04u)) return;
    // 80C20F04: bl      0x8045F220
    {
            ctx->lr = 0x80C20F08u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20F08:
    ctx->pc = 0x80C20F08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C20F08: bl      0x8045E760
    {
            ctx->lr = 0x80C20F0Cu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80C20F0C:
    ctx->pc = 0x80C20F0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20F0C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C20F10:
    ctx->pc = 0x80C20F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F10u)) return;
    // 80C20F10: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20F14u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20F14:
    ctx->pc = 0x80C20F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20F14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20F18:
    ctx->pc = 0x80C20F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F18u)) return;
    // 80C20F18: bl      0x8045F220
    {
            ctx->lr = 0x80C20F1Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20F1C:
    ctx->pc = 0x80C20F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20F1C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20F20:
    ctx->pc = 0x80C20F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F20u)) return;
    // 80C20F20: addi    r4, r4, -14860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14860);

label_80C20F24:
    ctx->pc = 0x80C20F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20F24: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20F24u)) return;
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
label_80C20F28:
    ctx->pc = 0x80C20F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F28u)) return;
    // 80C20F28: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20F2C:
    ctx->pc = 0x80C20F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F2Cu)) return;
    // 80C20F2C: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C20F30:
    ctx->pc = 0x80C20F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C20F30: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20F30u)) return;
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
label_80C20F34:
    ctx->pc = 0x80C20F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F34u)) return;
    // 80C20F34: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20F38:
    ctx->pc = 0x80C20F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F38u)) return;
    // 80C20F38: addi    r4, r4, -14852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14852);

label_80C20F3C:
    ctx->pc = 0x80C20F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20F3C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20F3Cu)) return;
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
label_80C20F40:
    ctx->pc = 0x80C20F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F40u)) return;
    // 80C20F40: bl      0x8045E70C
    {
            ctx->lr = 0x80C20F44u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C20F44:
    ctx->pc = 0x80C20F44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20F44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C20F48:
    ctx->pc = 0x80C20F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F48u)) return;
    // 80C20F48: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20F4Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20F4C:
    ctx->pc = 0x80C20F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20F4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20F50:
    ctx->pc = 0x80C20F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F50u)) return;
    // 80C20F50: bl      0x8045F220
    {
            ctx->lr = 0x80C20F54u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20F54:
    ctx->pc = 0x80C20F54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20F54: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20F58:
    ctx->pc = 0x80C20F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F58u)) return;
    // 80C20F58: addi    r4, r4, -14848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14848);

label_80C20F5C:
    ctx->pc = 0x80C20F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20F5C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20F5Cu)) return;
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
label_80C20F60:
    ctx->pc = 0x80C20F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F60u)) return;
    // 80C20F60: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20F64:
    ctx->pc = 0x80C20F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F64u)) return;
    // 80C20F64: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C20F68:
    ctx->pc = 0x80C20F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C20F68: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20F68u)) return;
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
label_80C20F6C:
    ctx->pc = 0x80C20F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F6Cu)) return;
    // 80C20F6C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20F70:
    ctx->pc = 0x80C20F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F70u)) return;
    // 80C20F70: addi    r4, r4, -14844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14844);

label_80C20F74:
    ctx->pc = 0x80C20F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20F74: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20F74u)) return;
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
label_80C20F78:
    ctx->pc = 0x80C20F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F78u)) return;
    // 80C20F78: bl      0x8045E70C
    {
            ctx->lr = 0x80C20F7Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C20F7C:
    ctx->pc = 0x80C20F7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20F7C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C20F80:
    ctx->pc = 0x80C20F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F80u)) return;
    // 80C20F80: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20F84u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20F84:
    ctx->pc = 0x80C20F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20F84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20F88:
    ctx->pc = 0x80C20F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F88u)) return;
    // 80C20F88: bl      0x8045F220
    {
            ctx->lr = 0x80C20F8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20F8C:
    ctx->pc = 0x80C20F8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20F8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20F8C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20F90:
    ctx->pc = 0x80C20F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F90u)) return;
    // 80C20F90: addi    r4, r4, -14840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14840);

label_80C20F94:
    ctx->pc = 0x80C20F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20F94: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20F94u)) return;
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
label_80C20F98:
    ctx->pc = 0x80C20F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F98u)) return;
    // 80C20F98: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20F9C:
    ctx->pc = 0x80C20F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20F9Cu)) return;
    // 80C20F9C: addi    r4, r4, -14836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14836);

label_80C20FA0:
    ctx->pc = 0x80C20FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C20FA0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20FA0u)) return;
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
label_80C20FA4:
    ctx->pc = 0x80C20FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FA4u)) return;
    // 80C20FA4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20FA8:
    ctx->pc = 0x80C20FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FA8u)) return;
    // 80C20FA8: addi    r4, r4, -14832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14832);

label_80C20FAC:
    ctx->pc = 0x80C20FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20FAC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20FACu)) return;
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
label_80C20FB0:
    ctx->pc = 0x80C20FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FB0u)) return;
    // 80C20FB0: bl      0x8045E70C
    {
            ctx->lr = 0x80C20FB4u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C20FB4:
    ctx->pc = 0x80C20FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20FB4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C20FB8:
    ctx->pc = 0x80C20FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FB8u)) return;
    // 80C20FB8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20FBCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20FBC:
    ctx->pc = 0x80C20FBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20FBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20FC0:
    ctx->pc = 0x80C20FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FC0u)) return;
    // 80C20FC0: bl      0x8045F220
    {
            ctx->lr = 0x80C20FC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20FC4:
    ctx->pc = 0x80C20FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20FC4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20FC8:
    ctx->pc = 0x80C20FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FC8u)) return;
    // 80C20FC8: addi    r4, r4, -14848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14848);

label_80C20FCC:
    ctx->pc = 0x80C20FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C20FCC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20FCCu)) return;
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
label_80C20FD0:
    ctx->pc = 0x80C20FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FD0u)) return;
    // 80C20FD0: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20FD4:
    ctx->pc = 0x80C20FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FD4u)) return;
    // 80C20FD4: addi    r4, r4, -14828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14828);

label_80C20FD8:
    ctx->pc = 0x80C20FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C20FD8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20FD8u)) return;
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
label_80C20FDC:
    ctx->pc = 0x80C20FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FDCu)) return;
    // 80C20FDC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C20FE0:
    ctx->pc = 0x80C20FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FE0u)) return;
    // 80C20FE0: addi    r4, r4, -14844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14844);

label_80C20FE4:
    ctx->pc = 0x80C20FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C20FE4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C20FE4u)) return;
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
label_80C20FE8:
    ctx->pc = 0x80C20FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FE8u)) return;
    // 80C20FE8: bl      0x8045E70C
    {
            ctx->lr = 0x80C20FECu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C20FEC:
    ctx->pc = 0x80C20FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20FEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C20FF0:
    ctx->pc = 0x80C20FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FF0u)) return;
    // 80C20FF0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C20FF4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C20FF4:
    ctx->pc = 0x80C20FF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20FF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C20FF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C20FF8:
    ctx->pc = 0x80C20FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C20FF8u)) return;
    // 80C20FF8: bl      0x8045F220
    {
            ctx->lr = 0x80C20FFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C20FFC:
    ctx->pc = 0x80C20FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C20FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C20FFC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21000:
    ctx->pc = 0x80C21000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21000u)) return;
    // 80C21000: addi    r4, r4, -14860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14860);

label_80C21004:
    ctx->pc = 0x80C21004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21004: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21004u)) return;
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
label_80C21008:
    ctx->pc = 0x80C21008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21008u)) return;
    // 80C21008: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2100C:
    ctx->pc = 0x80C2100Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2100Cu)) return;
    // 80C2100C: addi    r4, r4, -14824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14824);

label_80C21010:
    ctx->pc = 0x80C21010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21010: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21010u)) return;
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
label_80C21014:
    ctx->pc = 0x80C21014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21014u)) return;
    // 80C21014: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21018:
    ctx->pc = 0x80C21018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21018u)) return;
    // 80C21018: addi    r4, r4, -14852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14852);

label_80C2101C:
    ctx->pc = 0x80C2101Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2101Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2101C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2101Cu)) return;
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
label_80C21020:
    ctx->pc = 0x80C21020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21020u)) return;
    // 80C21020: bl      0x8045E70C
    {
            ctx->lr = 0x80C21024u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21024:
    ctx->pc = 0x80C21024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21024: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21028:
    ctx->pc = 0x80C21028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21028u)) return;
    // 80C21028: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2102Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2102C:
    ctx->pc = 0x80C2102Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2102Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2102C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21030:
    ctx->pc = 0x80C21030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21030u)) return;
    // 80C21030: bl      0x8045F220
    {
            ctx->lr = 0x80C21034u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21034:
    ctx->pc = 0x80C21034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21034: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21038:
    ctx->pc = 0x80C21038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21038u)) return;
    // 80C21038: addi    r4, r4, -14820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14820);

label_80C2103C:
    ctx->pc = 0x80C2103Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2103Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2103C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2103Cu)) return;
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
label_80C21040:
    ctx->pc = 0x80C21040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21040u)) return;
    // 80C21040: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21044:
    ctx->pc = 0x80C21044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21044u)) return;
    // 80C21044: addi    r4, r4, -14816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14816);

label_80C21048:
    ctx->pc = 0x80C21048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21048: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21048u)) return;
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
label_80C2104C:
    ctx->pc = 0x80C2104Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2104Cu)) return;
    // 80C2104C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21050:
    ctx->pc = 0x80C21050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21050u)) return;
    // 80C21050: addi    r4, r4, -14812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14812);

label_80C21054:
    ctx->pc = 0x80C21054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21054: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21054u)) return;
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
label_80C21058:
    ctx->pc = 0x80C21058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21058u)) return;
    // 80C21058: bl      0x8045E70C
    {
            ctx->lr = 0x80C2105Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2105C:
    ctx->pc = 0x80C2105Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2105Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2105C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C21060:
    ctx->pc = 0x80C21060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21060u)) return;
    // 80C21060: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21064u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21064:
    ctx->pc = 0x80C21064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21064: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21068:
    ctx->pc = 0x80C21068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21068u)) return;
    // 80C21068: bl      0x8045F220
    {
            ctx->lr = 0x80C2106Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2106C:
    ctx->pc = 0x80C2106Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2106Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2106C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21070:
    ctx->pc = 0x80C21070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21070u)) return;
    // 80C21070: addi    r4, r4, -14808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14808);

label_80C21074:
    ctx->pc = 0x80C21074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21074: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21074u)) return;
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
label_80C21078:
    ctx->pc = 0x80C21078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21078u)) return;
    // 80C21078: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2107C:
    ctx->pc = 0x80C2107Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2107Cu)) return;
    // 80C2107C: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21080:
    ctx->pc = 0x80C21080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21080: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21080u)) return;
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
label_80C21084:
    ctx->pc = 0x80C21084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21084u)) return;
    // 80C21084: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21088:
    ctx->pc = 0x80C21088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21088u)) return;
    // 80C21088: addi    r4, r4, -14804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14804);

label_80C2108C:
    ctx->pc = 0x80C2108Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2108Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2108C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2108Cu)) return;
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
label_80C21090:
    ctx->pc = 0x80C21090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21090u)) return;
    // 80C21090: bl      0x8045E70C
    {
            ctx->lr = 0x80C21094u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21094:
    ctx->pc = 0x80C21094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21094: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21098:
    ctx->pc = 0x80C21098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21098u)) return;
    // 80C21098: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2109Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2109C:
    ctx->pc = 0x80C2109Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2109Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2109C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C210A0:
    ctx->pc = 0x80C210A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210A0u)) return;
    // 80C210A0: bl      0x8045F220
    {
            ctx->lr = 0x80C210A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C210A4:
    ctx->pc = 0x80C210A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C210A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C210A4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C210A8:
    ctx->pc = 0x80C210A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210A8u)) return;
    // 80C210A8: addi    r4, r4, -14800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14800);

label_80C210AC:
    ctx->pc = 0x80C210ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C210AC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C210ACu)) return;
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
label_80C210B0:
    ctx->pc = 0x80C210B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210B0u)) return;
    // 80C210B0: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C210B4:
    ctx->pc = 0x80C210B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210B4u)) return;
    // 80C210B4: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C210B8:
    ctx->pc = 0x80C210B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C210B8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C210B8u)) return;
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
label_80C210BC:
    ctx->pc = 0x80C210BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210BCu)) return;
    // 80C210BC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C210C0:
    ctx->pc = 0x80C210C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210C0u)) return;
    // 80C210C0: addi    r4, r4, -14796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14796);

label_80C210C4:
    ctx->pc = 0x80C210C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C210C4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C210C4u)) return;
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
label_80C210C8:
    ctx->pc = 0x80C210C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210C8u)) return;
    // 80C210C8: bl      0x8045E70C
    {
            ctx->lr = 0x80C210CCu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C210CC:
    ctx->pc = 0x80C210CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C210CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C210CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C210D0:
    ctx->pc = 0x80C210D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210D0u)) return;
    // 80C210D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C210D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C210D4:
    ctx->pc = 0x80C210D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C210D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C210D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C210D8:
    ctx->pc = 0x80C210D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210D8u)) return;
    // 80C210D8: bl      0x8045F220
    {
            ctx->lr = 0x80C210DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C210DC:
    ctx->pc = 0x80C210DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C210DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C210DC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C210E0:
    ctx->pc = 0x80C210E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210E0u)) return;
    // 80C210E0: addi    r4, r4, -14792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14792);

label_80C210E4:
    ctx->pc = 0x80C210E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C210E4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C210E4u)) return;
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
label_80C210E8:
    ctx->pc = 0x80C210E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210E8u)) return;
    // 80C210E8: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C210EC:
    ctx->pc = 0x80C210ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210ECu)) return;
    // 80C210EC: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C210F0:
    ctx->pc = 0x80C210F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C210F0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C210F0u)) return;
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
label_80C210F4:
    ctx->pc = 0x80C210F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210F4u)) return;
    // 80C210F4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C210F8:
    ctx->pc = 0x80C210F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210F8u)) return;
    // 80C210F8: addi    r4, r4, -14832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14832);

label_80C210FC:
    ctx->pc = 0x80C210FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C210FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C210FC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C210FCu)) return;
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
label_80C21100:
    ctx->pc = 0x80C21100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21100u)) return;
    // 80C21100: bl      0x8045E70C
    {
            ctx->lr = 0x80C21104u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21104:
    ctx->pc = 0x80C21104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21104: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C21108:
    ctx->pc = 0x80C21108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21108u)) return;
    // 80C21108: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2110Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2110C:
    ctx->pc = 0x80C2110Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2110Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2110C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21110:
    ctx->pc = 0x80C21110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21110u)) return;
    // 80C21110: bl      0x8045F220
    {
            ctx->lr = 0x80C21114u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21114:
    ctx->pc = 0x80C21114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21114: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21118:
    ctx->pc = 0x80C21118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21118u)) return;
    // 80C21118: addi    r4, r4, -14800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14800);

label_80C2111C:
    ctx->pc = 0x80C2111Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2111Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2111C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2111Cu)) return;
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
label_80C21120:
    ctx->pc = 0x80C21120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21120u)) return;
    // 80C21120: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21124:
    ctx->pc = 0x80C21124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21124u)) return;
    // 80C21124: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21128:
    ctx->pc = 0x80C21128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21128: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21128u)) return;
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
label_80C2112C:
    ctx->pc = 0x80C2112Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2112Cu)) return;
    // 80C2112C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21130:
    ctx->pc = 0x80C21130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21130u)) return;
    // 80C21130: addi    r4, r4, -14796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14796);

label_80C21134:
    ctx->pc = 0x80C21134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21134: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21134u)) return;
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
label_80C21138:
    ctx->pc = 0x80C21138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21138u)) return;
    // 80C21138: bl      0x8045E70C
    {
            ctx->lr = 0x80C2113Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2113C:
    ctx->pc = 0x80C2113Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2113Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2113C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21140:
    ctx->pc = 0x80C21140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21140u)) return;
    // 80C21140: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21144u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21144:
    ctx->pc = 0x80C21144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21144: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21148:
    ctx->pc = 0x80C21148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21148u)) return;
    // 80C21148: bl      0x8045F220
    {
            ctx->lr = 0x80C2114Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2114C:
    ctx->pc = 0x80C2114Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2114Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2114C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21150:
    ctx->pc = 0x80C21150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21150u)) return;
    // 80C21150: addi    r4, r4, -14808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14808);

label_80C21154:
    ctx->pc = 0x80C21154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21154: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21154u)) return;
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
label_80C21158:
    ctx->pc = 0x80C21158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21158u)) return;
    // 80C21158: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2115C:
    ctx->pc = 0x80C2115Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2115Cu)) return;
    // 80C2115C: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21160:
    ctx->pc = 0x80C21160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21160: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21160u)) return;
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
label_80C21164:
    ctx->pc = 0x80C21164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21164u)) return;
    // 80C21164: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21168:
    ctx->pc = 0x80C21168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21168u)) return;
    // 80C21168: addi    r4, r4, -14804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14804);

label_80C2116C:
    ctx->pc = 0x80C2116Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2116Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2116C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2116Cu)) return;
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
label_80C21170:
    ctx->pc = 0x80C21170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21170u)) return;
    // 80C21170: bl      0x8045E70C
    {
            ctx->lr = 0x80C21174u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21174:
    ctx->pc = 0x80C21174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21174: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21178:
    ctx->pc = 0x80C21178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21178u)) return;
    // 80C21178: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2117Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2117C:
    ctx->pc = 0x80C2117Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2117Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2117C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21180:
    ctx->pc = 0x80C21180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21180u)) return;
    // 80C21180: bl      0x8045F220
    {
            ctx->lr = 0x80C21184u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21184:
    ctx->pc = 0x80C21184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21184: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21188:
    ctx->pc = 0x80C21188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21188u)) return;
    // 80C21188: addi    r4, r4, -14820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14820);

label_80C2118C:
    ctx->pc = 0x80C2118Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2118Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2118C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2118Cu)) return;
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
label_80C21190:
    ctx->pc = 0x80C21190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21190u)) return;
    // 80C21190: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21194:
    ctx->pc = 0x80C21194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21194u)) return;
    // 80C21194: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21198:
    ctx->pc = 0x80C21198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21198: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21198u)) return;
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
label_80C2119C:
    ctx->pc = 0x80C2119Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2119Cu)) return;
    // 80C2119C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C211A0:
    ctx->pc = 0x80C211A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211A0u)) return;
    // 80C211A0: addi    r4, r4, -14812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14812);

label_80C211A4:
    ctx->pc = 0x80C211A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C211A4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C211A4u)) return;
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
label_80C211A8:
    ctx->pc = 0x80C211A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211A8u)) return;
    // 80C211A8: bl      0x8045E70C
    {
            ctx->lr = 0x80C211ACu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C211AC:
    ctx->pc = 0x80C211ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C211ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C211AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C211B0:
    ctx->pc = 0x80C211B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211B0u)) return;
    // 80C211B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C211B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C211B4:
    ctx->pc = 0x80C211B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C211B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C211B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C211B8:
    ctx->pc = 0x80C211B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211B8u)) return;
    // 80C211B8: bl      0x8045F220
    {
            ctx->lr = 0x80C211BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C211BC:
    ctx->pc = 0x80C211BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C211BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C211BC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C211C0:
    ctx->pc = 0x80C211C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211C0u)) return;
    // 80C211C0: addi    r4, r4, -14860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14860);

label_80C211C4:
    ctx->pc = 0x80C211C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C211C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C211C4u)) return;
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
label_80C211C8:
    ctx->pc = 0x80C211C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211C8u)) return;
    // 80C211C8: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C211CC:
    ctx->pc = 0x80C211CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211CCu)) return;
    // 80C211CC: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C211D0:
    ctx->pc = 0x80C211D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C211D0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C211D0u)) return;
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
label_80C211D4:
    ctx->pc = 0x80C211D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211D4u)) return;
    // 80C211D4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C211D8:
    ctx->pc = 0x80C211D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211D8u)) return;
    // 80C211D8: addi    r4, r4, -14852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14852);

label_80C211DC:
    ctx->pc = 0x80C211DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C211DC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C211DCu)) return;
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
label_80C211E0:
    ctx->pc = 0x80C211E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211E0u)) return;
    // 80C211E0: bl      0x8045E70C
    {
            ctx->lr = 0x80C211E4u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C211E4:
    ctx->pc = 0x80C211E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C211E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C211E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C211E8:
    ctx->pc = 0x80C211E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211E8u)) return;
    // 80C211E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C211ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C211EC:
    ctx->pc = 0x80C211ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C211ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C211EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C211F0:
    ctx->pc = 0x80C211F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211F0u)) return;
    // 80C211F0: bl      0x8045F220
    {
            ctx->lr = 0x80C211F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C211F4:
    ctx->pc = 0x80C211F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C211F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C211F4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C211F8:
    ctx->pc = 0x80C211F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211F8u)) return;
    // 80C211F8: addi    r4, r4, -14848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14848);

label_80C211FC:
    ctx->pc = 0x80C211FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C211FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C211FC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C211FCu)) return;
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
label_80C21200:
    ctx->pc = 0x80C21200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21200u)) return;
    // 80C21200: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21204:
    ctx->pc = 0x80C21204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21204u)) return;
    // 80C21204: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21208:
    ctx->pc = 0x80C21208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21208: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21208u)) return;
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
label_80C2120C:
    ctx->pc = 0x80C2120Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2120Cu)) return;
    // 80C2120C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21210:
    ctx->pc = 0x80C21210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21210u)) return;
    // 80C21210: addi    r4, r4, -14844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14844);

label_80C21214:
    ctx->pc = 0x80C21214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21214: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21214u)) return;
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
label_80C21218:
    ctx->pc = 0x80C21218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21218u)) return;
    // 80C21218: bl      0x8045E70C
    {
            ctx->lr = 0x80C2121Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2121C:
    ctx->pc = 0x80C2121Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2121Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2121C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C21220:
    ctx->pc = 0x80C21220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21220u)) return;
    // 80C21220: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21224u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21224:
    ctx->pc = 0x80C21224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21224: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21228:
    ctx->pc = 0x80C21228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21228u)) return;
    // 80C21228: bl      0x8045F220
    {
            ctx->lr = 0x80C2122Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2122C:
    ctx->pc = 0x80C2122Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2122Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2122C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21230:
    ctx->pc = 0x80C21230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21230u)) return;
    // 80C21230: addi    r4, r4, -14840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14840);

label_80C21234:
    ctx->pc = 0x80C21234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21234: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21234u)) return;
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
label_80C21238:
    ctx->pc = 0x80C21238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21238u)) return;
    // 80C21238: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2123C:
    ctx->pc = 0x80C2123Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2123Cu)) return;
    // 80C2123C: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21240:
    ctx->pc = 0x80C21240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21240: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21240u)) return;
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
label_80C21244:
    ctx->pc = 0x80C21244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21244u)) return;
    // 80C21244: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21248:
    ctx->pc = 0x80C21248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21248u)) return;
    // 80C21248: addi    r4, r4, -14832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14832);

label_80C2124C:
    ctx->pc = 0x80C2124Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2124Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2124C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2124Cu)) return;
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
label_80C21250:
    ctx->pc = 0x80C21250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21250u)) return;
    // 80C21250: bl      0x8045E70C
    {
            ctx->lr = 0x80C21254u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21254:
    ctx->pc = 0x80C21254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21254: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C21258:
    ctx->pc = 0x80C21258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21258u)) return;
    // 80C21258: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2125Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2125C:
    ctx->pc = 0x80C2125Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2125Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2125C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21260:
    ctx->pc = 0x80C21260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21260u)) return;
    // 80C21260: bl      0x8045F220
    {
            ctx->lr = 0x80C21264u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21264:
    ctx->pc = 0x80C21264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21264: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21268:
    ctx->pc = 0x80C21268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21268u)) return;
    // 80C21268: addi    r4, r4, -14848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14848);

label_80C2126C:
    ctx->pc = 0x80C2126Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2126Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2126C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2126Cu)) return;
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
label_80C21270:
    ctx->pc = 0x80C21270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21270u)) return;
    // 80C21270: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21274:
    ctx->pc = 0x80C21274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21274u)) return;
    // 80C21274: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21278:
    ctx->pc = 0x80C21278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21278: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21278u)) return;
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
label_80C2127C:
    ctx->pc = 0x80C2127Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2127Cu)) return;
    // 80C2127C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21280:
    ctx->pc = 0x80C21280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21280u)) return;
    // 80C21280: addi    r4, r4, -14844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14844);

label_80C21284:
    ctx->pc = 0x80C21284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21284: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21284u)) return;
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
label_80C21288:
    ctx->pc = 0x80C21288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21288u)) return;
    // 80C21288: bl      0x8045E70C
    {
            ctx->lr = 0x80C2128Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2128C:
    ctx->pc = 0x80C2128Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2128Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2128C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21290:
    ctx->pc = 0x80C21290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21290u)) return;
    // 80C21290: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21294u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21294:
    ctx->pc = 0x80C21294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21294: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21298:
    ctx->pc = 0x80C21298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21298u)) return;
    // 80C21298: bl      0x8045F220
    {
            ctx->lr = 0x80C2129Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2129C:
    ctx->pc = 0x80C2129Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2129Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2129C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C212A0:
    ctx->pc = 0x80C212A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212A0u)) return;
    // 80C212A0: addi    r4, r4, -14860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14860);

label_80C212A4:
    ctx->pc = 0x80C212A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C212A4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C212A4u)) return;
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
label_80C212A8:
    ctx->pc = 0x80C212A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212A8u)) return;
    // 80C212A8: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C212AC:
    ctx->pc = 0x80C212ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212ACu)) return;
    // 80C212AC: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C212B0:
    ctx->pc = 0x80C212B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C212B0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C212B0u)) return;
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
label_80C212B4:
    ctx->pc = 0x80C212B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212B4u)) return;
    // 80C212B4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C212B8:
    ctx->pc = 0x80C212B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212B8u)) return;
    // 80C212B8: addi    r4, r4, -14852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14852);

label_80C212BC:
    ctx->pc = 0x80C212BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C212BC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C212BCu)) return;
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
label_80C212C0:
    ctx->pc = 0x80C212C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212C0u)) return;
    // 80C212C0: bl      0x8045E70C
    {
            ctx->lr = 0x80C212C4u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C212C4:
    ctx->pc = 0x80C212C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C212C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C212C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C212C8:
    ctx->pc = 0x80C212C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212C8u)) return;
    // 80C212C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C212CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C212CC:
    ctx->pc = 0x80C212CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C212CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C212CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C212D0:
    ctx->pc = 0x80C212D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212D0u)) return;
    // 80C212D0: bl      0x8045F220
    {
            ctx->lr = 0x80C212D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C212D4:
    ctx->pc = 0x80C212D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C212D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C212D4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C212D8:
    ctx->pc = 0x80C212D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212D8u)) return;
    // 80C212D8: addi    r4, r4, -14820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14820);

label_80C212DC:
    ctx->pc = 0x80C212DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C212DC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C212DCu)) return;
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
label_80C212E0:
    ctx->pc = 0x80C212E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212E0u)) return;
    // 80C212E0: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C212E4:
    ctx->pc = 0x80C212E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212E4u)) return;
    // 80C212E4: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C212E8:
    ctx->pc = 0x80C212E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C212E8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C212E8u)) return;
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
label_80C212EC:
    ctx->pc = 0x80C212ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212ECu)) return;
    // 80C212EC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C212F0:
    ctx->pc = 0x80C212F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212F0u)) return;
    // 80C212F0: addi    r4, r4, -14812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14812);

label_80C212F4:
    ctx->pc = 0x80C212F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C212F4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C212F4u)) return;
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
label_80C212F8:
    ctx->pc = 0x80C212F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C212F8u)) return;
    // 80C212F8: bl      0x8045E70C
    {
            ctx->lr = 0x80C212FCu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C212FC:
    ctx->pc = 0x80C212FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C212FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C212FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21300:
    ctx->pc = 0x80C21300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21300u)) return;
    // 80C21300: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21304u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21304:
    ctx->pc = 0x80C21304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21304: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21308:
    ctx->pc = 0x80C21308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21308u)) return;
    // 80C21308: bl      0x8045F220
    {
            ctx->lr = 0x80C2130Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2130C:
    ctx->pc = 0x80C2130Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2130Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2130C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21310:
    ctx->pc = 0x80C21310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21310u)) return;
    // 80C21310: addi    r4, r4, -14808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14808);

label_80C21314:
    ctx->pc = 0x80C21314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21314: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21314u)) return;
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
label_80C21318:
    ctx->pc = 0x80C21318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21318u)) return;
    // 80C21318: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2131C:
    ctx->pc = 0x80C2131Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2131Cu)) return;
    // 80C2131C: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21320:
    ctx->pc = 0x80C21320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21320: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21320u)) return;
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
label_80C21324:
    ctx->pc = 0x80C21324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21324u)) return;
    // 80C21324: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21328:
    ctx->pc = 0x80C21328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21328u)) return;
    // 80C21328: addi    r4, r4, -14804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14804);

label_80C2132C:
    ctx->pc = 0x80C2132Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2132Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2132C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2132Cu)) return;
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
label_80C21330:
    ctx->pc = 0x80C21330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21330u)) return;
    // 80C21330: bl      0x8045E70C
    {
            ctx->lr = 0x80C21334u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21334:
    ctx->pc = 0x80C21334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21334: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21338:
    ctx->pc = 0x80C21338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21338u)) return;
    // 80C21338: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2133Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2133C:
    ctx->pc = 0x80C2133Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2133Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2133C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21340:
    ctx->pc = 0x80C21340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21340u)) return;
    // 80C21340: bl      0x8045F220
    {
            ctx->lr = 0x80C21344u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21344:
    ctx->pc = 0x80C21344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21344: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21348:
    ctx->pc = 0x80C21348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21348u)) return;
    // 80C21348: addi    r4, r4, -14800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14800);

label_80C2134C:
    ctx->pc = 0x80C2134Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2134Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2134C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2134Cu)) return;
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
label_80C21350:
    ctx->pc = 0x80C21350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21350u)) return;
    // 80C21350: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21354:
    ctx->pc = 0x80C21354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21354u)) return;
    // 80C21354: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21358:
    ctx->pc = 0x80C21358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21358: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21358u)) return;
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
label_80C2135C:
    ctx->pc = 0x80C2135Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2135Cu)) return;
    // 80C2135C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21360:
    ctx->pc = 0x80C21360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21360u)) return;
    // 80C21360: addi    r4, r4, -14796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14796);

label_80C21364:
    ctx->pc = 0x80C21364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21364: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21364u)) return;
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
label_80C21368:
    ctx->pc = 0x80C21368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21368u)) return;
    // 80C21368: bl      0x8045E70C
    {
            ctx->lr = 0x80C2136Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2136C:
    ctx->pc = 0x80C2136Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2136Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2136C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21370:
    ctx->pc = 0x80C21370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21370u)) return;
    // 80C21370: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21374u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21374:
    ctx->pc = 0x80C21374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21378:
    ctx->pc = 0x80C21378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21378u)) return;
    // 80C21378: bl      0x8045F220
    {
            ctx->lr = 0x80C2137Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2137C:
    ctx->pc = 0x80C2137Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2137Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2137C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21380:
    ctx->pc = 0x80C21380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21380u)) return;
    // 80C21380: addi    r4, r4, -14792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14792);

label_80C21384:
    ctx->pc = 0x80C21384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21384: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21384u)) return;
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
label_80C21388:
    ctx->pc = 0x80C21388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21388u)) return;
    // 80C21388: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2138C:
    ctx->pc = 0x80C2138Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2138Cu)) return;
    // 80C2138C: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21390:
    ctx->pc = 0x80C21390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21390: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21390u)) return;
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
label_80C21394:
    ctx->pc = 0x80C21394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21394u)) return;
    // 80C21394: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21398:
    ctx->pc = 0x80C21398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21398u)) return;
    // 80C21398: addi    r4, r4, -14832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14832);

label_80C2139C:
    ctx->pc = 0x80C2139Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2139Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2139C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2139Cu)) return;
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
label_80C213A0:
    ctx->pc = 0x80C213A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213A0u)) return;
    // 80C213A0: bl      0x8045E70C
    {
            ctx->lr = 0x80C213A4u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C213A4:
    ctx->pc = 0x80C213A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C213A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C213A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C213A8:
    ctx->pc = 0x80C213A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213A8u)) return;
    // 80C213A8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C213ACu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C213AC:
    ctx->pc = 0x80C213ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C213ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C213AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C213B0:
    ctx->pc = 0x80C213B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213B0u)) return;
    // 80C213B0: bl      0x8045F220
    {
            ctx->lr = 0x80C213B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C213B4:
    ctx->pc = 0x80C213B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C213B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C213B4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C213B8:
    ctx->pc = 0x80C213B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213B8u)) return;
    // 80C213B8: addi    r4, r4, -14800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14800);

label_80C213BC:
    ctx->pc = 0x80C213BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C213BC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C213BCu)) return;
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
label_80C213C0:
    ctx->pc = 0x80C213C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213C0u)) return;
    // 80C213C0: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C213C4:
    ctx->pc = 0x80C213C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213C4u)) return;
    // 80C213C4: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C213C8:
    ctx->pc = 0x80C213C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C213C8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C213C8u)) return;
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
label_80C213CC:
    ctx->pc = 0x80C213CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213CCu)) return;
    // 80C213CC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C213D0:
    ctx->pc = 0x80C213D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213D0u)) return;
    // 80C213D0: addi    r4, r4, -14796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14796);

label_80C213D4:
    ctx->pc = 0x80C213D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C213D4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C213D4u)) return;
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
label_80C213D8:
    ctx->pc = 0x80C213D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213D8u)) return;
    // 80C213D8: bl      0x8045E70C
    {
            ctx->lr = 0x80C213DCu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C213DC:
    ctx->pc = 0x80C213DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C213DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C213DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C213E0:
    ctx->pc = 0x80C213E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213E0u)) return;
    // 80C213E0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C213E4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C213E4:
    ctx->pc = 0x80C213E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C213E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C213E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C213E8:
    ctx->pc = 0x80C213E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213E8u)) return;
    // 80C213E8: bl      0x8045F220
    {
            ctx->lr = 0x80C213ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C213EC:
    ctx->pc = 0x80C213ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C213ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C213EC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C213F0:
    ctx->pc = 0x80C213F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213F0u)) return;
    // 80C213F0: addi    r4, r4, -14808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14808);

label_80C213F4:
    ctx->pc = 0x80C213F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C213F4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C213F4u)) return;
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
label_80C213F8:
    ctx->pc = 0x80C213F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213F8u)) return;
    // 80C213F8: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C213FC:
    ctx->pc = 0x80C213FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C213FCu)) return;
    // 80C213FC: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21400:
    ctx->pc = 0x80C21400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21400: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21400u)) return;
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
label_80C21404:
    ctx->pc = 0x80C21404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21404u)) return;
    // 80C21404: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21408:
    ctx->pc = 0x80C21408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21408u)) return;
    // 80C21408: addi    r4, r4, -14804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14804);

label_80C2140C:
    ctx->pc = 0x80C2140Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2140Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2140C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2140Cu)) return;
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
label_80C21410:
    ctx->pc = 0x80C21410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21410u)) return;
    // 80C21410: bl      0x8045E70C
    {
            ctx->lr = 0x80C21414u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21414:
    ctx->pc = 0x80C21414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21414: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21418:
    ctx->pc = 0x80C21418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21418u)) return;
    // 80C21418: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2141Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2141C:
    ctx->pc = 0x80C2141Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2141Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2141C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21420:
    ctx->pc = 0x80C21420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21420u)) return;
    // 80C21420: bl      0x8045F220
    {
            ctx->lr = 0x80C21424u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21424:
    ctx->pc = 0x80C21424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21424: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21428:
    ctx->pc = 0x80C21428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21428u)) return;
    // 80C21428: addi    r4, r4, -14820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14820);

label_80C2142C:
    ctx->pc = 0x80C2142Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2142Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2142C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2142Cu)) return;
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
label_80C21430:
    ctx->pc = 0x80C21430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21430u)) return;
    // 80C21430: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21434:
    ctx->pc = 0x80C21434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21434u)) return;
    // 80C21434: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21438:
    ctx->pc = 0x80C21438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21438: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21438u)) return;
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
label_80C2143C:
    ctx->pc = 0x80C2143Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2143Cu)) return;
    // 80C2143C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21440:
    ctx->pc = 0x80C21440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21440u)) return;
    // 80C21440: addi    r4, r4, -14812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14812);

label_80C21444:
    ctx->pc = 0x80C21444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21444: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21444u)) return;
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
label_80C21448:
    ctx->pc = 0x80C21448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21448u)) return;
    // 80C21448: bl      0x8045E70C
    {
            ctx->lr = 0x80C2144Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2144C:
    ctx->pc = 0x80C2144Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2144Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2144C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21450:
    ctx->pc = 0x80C21450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21450u)) return;
    // 80C21450: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21454u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21454:
    ctx->pc = 0x80C21454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21454: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21458:
    ctx->pc = 0x80C21458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21458u)) return;
    // 80C21458: bl      0x8045F220
    {
            ctx->lr = 0x80C2145Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2145C:
    ctx->pc = 0x80C2145Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2145Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2145C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21460:
    ctx->pc = 0x80C21460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21460u)) return;
    // 80C21460: addi    r4, r4, -14860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14860);

label_80C21464:
    ctx->pc = 0x80C21464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21464: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21464u)) return;
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
label_80C21468:
    ctx->pc = 0x80C21468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21468u)) return;
    // 80C21468: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2146C:
    ctx->pc = 0x80C2146Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2146Cu)) return;
    // 80C2146C: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21470:
    ctx->pc = 0x80C21470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21470: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21470u)) return;
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
label_80C21474:
    ctx->pc = 0x80C21474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21474u)) return;
    // 80C21474: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21478:
    ctx->pc = 0x80C21478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21478u)) return;
    // 80C21478: addi    r4, r4, -14852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14852);

label_80C2147C:
    ctx->pc = 0x80C2147Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2147Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2147C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2147Cu)) return;
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
label_80C21480:
    ctx->pc = 0x80C21480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21480u)) return;
    // 80C21480: bl      0x8045E70C
    {
            ctx->lr = 0x80C21484u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21484:
    ctx->pc = 0x80C21484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21484: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21488:
    ctx->pc = 0x80C21488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21488u)) return;
    // 80C21488: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2148Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2148C:
    ctx->pc = 0x80C2148Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2148Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2148C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21490:
    ctx->pc = 0x80C21490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21490u)) return;
    // 80C21490: bl      0x8045F220
    {
            ctx->lr = 0x80C21494u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21494:
    ctx->pc = 0x80C21494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21494: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21498:
    ctx->pc = 0x80C21498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21498u)) return;
    // 80C21498: addi    r4, r4, -14848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14848);

label_80C2149C:
    ctx->pc = 0x80C2149Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2149Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2149C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2149Cu)) return;
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
label_80C214A0:
    ctx->pc = 0x80C214A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214A0u)) return;
    // 80C214A0: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C214A4:
    ctx->pc = 0x80C214A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214A4u)) return;
    // 80C214A4: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C214A8:
    ctx->pc = 0x80C214A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C214A8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C214A8u)) return;
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
label_80C214AC:
    ctx->pc = 0x80C214ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214ACu)) return;
    // 80C214AC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C214B0:
    ctx->pc = 0x80C214B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214B0u)) return;
    // 80C214B0: addi    r4, r4, -14844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14844);

label_80C214B4:
    ctx->pc = 0x80C214B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C214B4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C214B4u)) return;
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
label_80C214B8:
    ctx->pc = 0x80C214B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214B8u)) return;
    // 80C214B8: bl      0x8045E70C
    {
            ctx->lr = 0x80C214BCu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C214BC:
    ctx->pc = 0x80C214BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C214BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C214BC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C214C0:
    ctx->pc = 0x80C214C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214C0u)) return;
    // 80C214C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C214C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C214C4:
    ctx->pc = 0x80C214C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C214C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C214C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C214C8:
    ctx->pc = 0x80C214C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214C8u)) return;
    // 80C214C8: bl      0x8045F220
    {
            ctx->lr = 0x80C214CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C214CC:
    ctx->pc = 0x80C214CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C214CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C214CC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C214D0:
    ctx->pc = 0x80C214D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214D0u)) return;
    // 80C214D0: addi    r4, r4, -14840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14840);

label_80C214D4:
    ctx->pc = 0x80C214D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C214D4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C214D4u)) return;
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
label_80C214D8:
    ctx->pc = 0x80C214D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214D8u)) return;
    // 80C214D8: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C214DC:
    ctx->pc = 0x80C214DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214DCu)) return;
    // 80C214DC: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C214E0:
    ctx->pc = 0x80C214E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C214E0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C214E0u)) return;
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
label_80C214E4:
    ctx->pc = 0x80C214E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214E4u)) return;
    // 80C214E4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C214E8:
    ctx->pc = 0x80C214E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214E8u)) return;
    // 80C214E8: addi    r4, r4, -14832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14832);

label_80C214EC:
    ctx->pc = 0x80C214ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C214EC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C214ECu)) return;
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
label_80C214F0:
    ctx->pc = 0x80C214F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214F0u)) return;
    // 80C214F0: bl      0x8045E70C
    {
            ctx->lr = 0x80C214F4u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C214F4:
    ctx->pc = 0x80C214F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C214F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C214F4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C214F8:
    ctx->pc = 0x80C214F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C214F8u)) return;
    // 80C214F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C214FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C214FC:
    ctx->pc = 0x80C214FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C214FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C214FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21500:
    ctx->pc = 0x80C21500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21500u)) return;
    // 80C21500: bl      0x8045F220
    {
            ctx->lr = 0x80C21504u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21504:
    ctx->pc = 0x80C21504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21504: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21508:
    ctx->pc = 0x80C21508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21508u)) return;
    // 80C21508: addi    r4, r4, -14848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14848);

label_80C2150C:
    ctx->pc = 0x80C2150Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2150Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2150C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2150Cu)) return;
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
label_80C21510:
    ctx->pc = 0x80C21510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21510u)) return;
    // 80C21510: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21514:
    ctx->pc = 0x80C21514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21514u)) return;
    // 80C21514: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21518:
    ctx->pc = 0x80C21518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21518: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21518u)) return;
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
label_80C2151C:
    ctx->pc = 0x80C2151Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2151Cu)) return;
    // 80C2151C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21520:
    ctx->pc = 0x80C21520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21520u)) return;
    // 80C21520: addi    r4, r4, -14844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14844);

label_80C21524:
    ctx->pc = 0x80C21524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21524: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21524u)) return;
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
label_80C21528:
    ctx->pc = 0x80C21528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21528u)) return;
    // 80C21528: bl      0x8045E70C
    {
            ctx->lr = 0x80C2152Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2152C:
    ctx->pc = 0x80C2152Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2152Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2152C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21530:
    ctx->pc = 0x80C21530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21530u)) return;
    // 80C21530: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21534u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21534:
    ctx->pc = 0x80C21534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21534: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21538:
    ctx->pc = 0x80C21538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21538u)) return;
    // 80C21538: bl      0x8045F220
    {
            ctx->lr = 0x80C2153Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2153C:
    ctx->pc = 0x80C2153Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2153Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2153C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21540:
    ctx->pc = 0x80C21540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21540u)) return;
    // 80C21540: addi    r4, r4, -14860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14860);

label_80C21544:
    ctx->pc = 0x80C21544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21544: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21544u)) return;
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
label_80C21548:
    ctx->pc = 0x80C21548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21548u)) return;
    // 80C21548: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2154C:
    ctx->pc = 0x80C2154Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2154Cu)) return;
    // 80C2154C: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21550:
    ctx->pc = 0x80C21550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21550: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21550u)) return;
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
label_80C21554:
    ctx->pc = 0x80C21554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21554u)) return;
    // 80C21554: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21558:
    ctx->pc = 0x80C21558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21558u)) return;
    // 80C21558: addi    r4, r4, -14852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14852);

label_80C2155C:
    ctx->pc = 0x80C2155Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2155Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2155C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2155Cu)) return;
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
label_80C21560:
    ctx->pc = 0x80C21560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21560u)) return;
    // 80C21560: bl      0x8045E70C
    {
            ctx->lr = 0x80C21564u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C21564:
    ctx->pc = 0x80C21564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21564: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C21568:
    ctx->pc = 0x80C21568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21568u)) return;
    // 80C21568: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2156Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2156C:
    ctx->pc = 0x80C2156Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2156Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2156C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21570:
    ctx->pc = 0x80C21570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21570u)) return;
    // 80C21570: bl      0x8045F220
    {
            ctx->lr = 0x80C21574u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21574:
    ctx->pc = 0x80C21574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21574: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21578:
    ctx->pc = 0x80C21578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21578u)) return;
    // 80C21578: addi    r4, r4, -14820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14820);

label_80C2157C:
    ctx->pc = 0x80C2157Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2157Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2157C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2157Cu)) return;
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
label_80C21580:
    ctx->pc = 0x80C21580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21580u)) return;
    // 80C21580: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21584:
    ctx->pc = 0x80C21584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21584u)) return;
    // 80C21584: addi    r4, r4, -14856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14856);

label_80C21588:
    ctx->pc = 0x80C21588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C21588: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21588u)) return;
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
label_80C2158C:
    ctx->pc = 0x80C2158Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2158Cu)) return;
    // 80C2158C: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21590:
    ctx->pc = 0x80C21590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21590u)) return;
    // 80C21590: addi    r4, r4, -14812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14812);

label_80C21594:
    ctx->pc = 0x80C21594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21594: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21594u)) return;
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
label_80C21598:
    ctx->pc = 0x80C21598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21598u)) return;
    // 80C21598: bl      0x8045E70C
    {
            ctx->lr = 0x80C2159Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2159C:
    ctx->pc = 0x80C2159Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2159Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2159C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C215A0:
    ctx->pc = 0x80C215A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215A0u)) return;
    // 80C215A0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C215A4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C215A4:
    ctx->pc = 0x80C215A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C215A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C215A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C215A8:
    ctx->pc = 0x80C215A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215A8u)) return;
    // 80C215A8: bl      0x8045F220
    {
            ctx->lr = 0x80C215ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C215AC:
    ctx->pc = 0x80C215ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C215ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C215AC: bl      0x8045C034
    {
            ctx->lr = 0x80C215B0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C215B0:
    ctx->pc = 0x80C215B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C215B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C215B0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C215B4:
    ctx->pc = 0x80C215B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215B4u)) return;
    // 80C215B4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C215B8:
    ctx->pc = 0x80C215B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C215B8: lwz     r0, 0(r3)
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
label_80C215BC:
    ctx->pc = 0x80C215BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215BCu)) return;
    // 80C215BC: cmpwi   r0, 0
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

label_80C215C0:
    ctx->pc = 0x80C215C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215C0u)) return;
    // 80C215C0: bc    4, 2, 0x80C215D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C215D8;
        }
    }

label_80C215C4:
    ctx->pc = 0x80C215C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C215C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C215C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C215C8:
    ctx->pc = 0x80C215C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215C8u)) return;
    // 80C215C8: bl      0x8045F220
    {
            ctx->lr = 0x80C215CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C215CC:
    ctx->pc = 0x80C215CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C215CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C215CC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C215D0:
    ctx->pc = 0x80C215D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215D0u)) return;
    // 80C215D0: addi    r4, r4, -13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13756);

label_80C215D4:
    ctx->pc = 0x80C215D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215D4u)) return;
    // 80C215D4: bl      0x8045C060
    {
            ctx->lr = 0x80C215D8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C215D8:
    ctx->pc = 0x80C215D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C215D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C215D8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C215DC:
    ctx->pc = 0x80C215DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215DCu)) return;
    // 80C215DC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C215E0:
    ctx->pc = 0x80C215E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C215E0: lwz     r0, 0(r3)
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
label_80C215E4:
    ctx->pc = 0x80C215E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215E4u)) return;
    // 80C215E4: cmpwi   r0, 1
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

label_80C215E8:
    ctx->pc = 0x80C215E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215E8u)) return;
    // 80C215E8: bc    4, 2, 0x80C21600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C21600;
        }
    }

label_80C215EC:
    ctx->pc = 0x80C215ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C215ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C215EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C215F0:
    ctx->pc = 0x80C215F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215F0u)) return;
    // 80C215F0: bl      0x8045F220
    {
            ctx->lr = 0x80C215F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C215F4:
    ctx->pc = 0x80C215F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C215F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C215F4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C215F8:
    ctx->pc = 0x80C215F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215F8u)) return;
    // 80C215F8: addi    r4, r4, -13736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13736);

label_80C215FC:
    ctx->pc = 0x80C215FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C215FCu)) return;
    // 80C215FC: bl      0x8045C060
    {
            ctx->lr = 0x80C21600u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C21600:
    ctx->pc = 0x80C21600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21600: li      r3, 1018
    ctx->gpr[3] = (u32)(s32)(1018);

label_80C21604:
    ctx->pc = 0x80C21604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21604u)) return;
    // 80C21604: bl      0x8045BFA0
    {
            ctx->lr = 0x80C21608u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C21608:
    ctx->pc = 0x80C21608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C21608: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2160C:
    ctx->pc = 0x80C2160Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2160Cu)) return;
    // 80C2160C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C21610:
    ctx->pc = 0x80C21610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C21610: lwz     r0, 0(r3)
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
label_80C21614:
    ctx->pc = 0x80C21614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21614u)) return;
    // 80C21614: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C21618:
    ctx->pc = 0x80C21618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21618u)) return;
    // 80C21618: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C2161C:
    ctx->pc = 0x80C2161Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2161Cu)) return;
    // 80C2161C: addi    r3, r3, -13792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13792);

label_80C21620:
    ctx->pc = 0x80C21620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C21620: lwzx    r3, r3, r0
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
label_80C21624:
    ctx->pc = 0x80C21624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21624: lwz     r3, 8(r3)
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
label_80C21628:
    ctx->pc = 0x80C21628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21628u)) return;
    // 80C21628: bl      0x8045F6FC
    {
            ctx->lr = 0x80C2162Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C2162C:
    ctx->pc = 0x80C2162Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2162Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2162C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C21630:
    ctx->pc = 0x80C21630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21630u)) return;
    // 80C21630: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21634u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21634:
    ctx->pc = 0x80C21634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C21634: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C21638:
    ctx->pc = 0x80C21638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21638u)) return;
    // 80C21638: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C2163C:
    ctx->pc = 0x80C2163Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2163Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2163C: lwz     r0, 0(r3)
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
label_80C21640:
    ctx->pc = 0x80C21640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21640u)) return;
    // 80C21640: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C21644:
    ctx->pc = 0x80C21644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21644u)) return;
    // 80C21644: lis     r3, -27459
    ctx->gpr[3] = ((u32)(s32)(-27459) << 16);

label_80C21648:
    ctx->pc = 0x80C21648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21648u)) return;
    // 80C21648: addi    r3, r3, -13792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13792);

label_80C2164C:
    ctx->pc = 0x80C2164Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2164Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2164C: lwzx    r3, r3, r0
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
label_80C21650:
    ctx->pc = 0x80C21650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21650: lwz     r3, 12(r3)
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
label_80C21654:
    ctx->pc = 0x80C21654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21654u)) return;
    // 80C21654: bl      0x8045F6FC
    {
            ctx->lr = 0x80C21658u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C21658:
    ctx->pc = 0x80C21658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21658: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C2165C:
    ctx->pc = 0x80C2165Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2165Cu)) return;
    // 80C2165C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C21660u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C21660:
    ctx->pc = 0x80C21660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C21660: bl      0x8045BFF4
    {
            ctx->lr = 0x80C21664u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C21664:
    ctx->pc = 0x80C21664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C21664: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C21668:
    ctx->pc = 0x80C21668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21668u)) return;
    // 80C21668: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C2166C:
    ctx->pc = 0x80C2166Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2166Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2166C: lwz     r0, 0(r3)
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
label_80C21670:
    ctx->pc = 0x80C21670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21670u)) return;
    // 80C21670: cmpwi   r0, 0
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

label_80C21674:
    ctx->pc = 0x80C21674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21674u)) return;
    // 80C21674: bc    4, 2, 0x80C21684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C21684;
        }
    }

label_80C21678:
    ctx->pc = 0x80C21678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21678: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2167C:
    ctx->pc = 0x80C2167Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2167Cu)) return;
    // 80C2167C: bl      0x8045F220
    {
            ctx->lr = 0x80C21680u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21680:
    ctx->pc = 0x80C21680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C21680: bl      0x8045C034
    {
            ctx->lr = 0x80C21684u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C21684:
    ctx->pc = 0x80C21684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C21684: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C21688:
    ctx->pc = 0x80C21688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21688u)) return;
    // 80C21688: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C2168C:
    ctx->pc = 0x80C2168Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2168Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2168C: lwz     r0, 0(r3)
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
label_80C21690:
    ctx->pc = 0x80C21690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21690u)) return;
    // 80C21690: cmpwi   r0, 1
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

label_80C21694:
    ctx->pc = 0x80C21694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21694u)) return;
    // 80C21694: bc    4, 2, 0x80C216A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C216A4;
        }
    }

label_80C21698:
    ctx->pc = 0x80C21698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21698: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2169C:
    ctx->pc = 0x80C2169Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2169Cu)) return;
    // 80C2169C: bl      0x8045F220
    {
            ctx->lr = 0x80C216A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C216A0:
    ctx->pc = 0x80C216A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C216A0: bl      0x8045C034
    {
            ctx->lr = 0x80C216A4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C216A4:
    ctx->pc = 0x80C216A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C216A4: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C216A8:
    ctx->pc = 0x80C216A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216A8u)) return;
    // 80C216A8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C216ACu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C216AC:
    ctx->pc = 0x80C216ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C216AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C216B0:
    ctx->pc = 0x80C216B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216B0u)) return;
    // 80C216B0: bl      0x8045F220
    {
            ctx->lr = 0x80C216B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C216B4:
    ctx->pc = 0x80C216B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C216B4: bl      0x8045C034
    {
            ctx->lr = 0x80C216B8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C216B8:
    ctx->pc = 0x80C216B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C216B8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C216BC:
    ctx->pc = 0x80C216BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216BCu)) return;
    // 80C216BC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C216C0:
    ctx->pc = 0x80C216C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C216C0: lwz     r0, 0(r3)
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
label_80C216C4:
    ctx->pc = 0x80C216C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216C4u)) return;
    // 80C216C4: cmpwi   r0, 0
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

label_80C216C8:
    ctx->pc = 0x80C216C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216C8u)) return;
    // 80C216C8: bc    4, 2, 0x80C216E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C216E0;
        }
    }

label_80C216CC:
    ctx->pc = 0x80C216CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C216CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C216D0:
    ctx->pc = 0x80C216D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216D0u)) return;
    // 80C216D0: bl      0x8045F220
    {
            ctx->lr = 0x80C216D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C216D4:
    ctx->pc = 0x80C216D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C216D4: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C216D8:
    ctx->pc = 0x80C216D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216D8u)) return;
    // 80C216D8: addi    r4, r4, -13728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13728);

label_80C216DC:
    ctx->pc = 0x80C216DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216DCu)) return;
    // 80C216DC: bl      0x8045C060
    {
            ctx->lr = 0x80C216E0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C216E0:
    ctx->pc = 0x80C216E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C216E0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C216E4:
    ctx->pc = 0x80C216E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216E4u)) return;
    // 80C216E4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C216E8:
    ctx->pc = 0x80C216E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C216E8: lwz     r0, 0(r3)
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
label_80C216EC:
    ctx->pc = 0x80C216ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216ECu)) return;
    // 80C216EC: cmpwi   r0, 1
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

label_80C216F0:
    ctx->pc = 0x80C216F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216F0u)) return;
    // 80C216F0: bc    4, 2, 0x80C21708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C21708;
        }
    }

label_80C216F4:
    ctx->pc = 0x80C216F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C216F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C216F8:
    ctx->pc = 0x80C216F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C216F8u)) return;
    // 80C216F8: bl      0x8045F220
    {
            ctx->lr = 0x80C216FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C216FC:
    ctx->pc = 0x80C216FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C216FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C216FC: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21700:
    ctx->pc = 0x80C21700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21700u)) return;
    // 80C21700: addi    r4, r4, -13724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13724);

label_80C21704:
    ctx->pc = 0x80C21704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21704u)) return;
    // 80C21704: bl      0x8045C060
    {
            ctx->lr = 0x80C21708u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C21708:
    ctx->pc = 0x80C21708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21708: li      r3, 1019
    ctx->gpr[3] = (u32)(s32)(1019);

label_80C2170C:
    ctx->pc = 0x80C2170Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2170Cu)) return;
    // 80C2170C: bl      0x8045BFA0
    {
            ctx->lr = 0x80C21710u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C21710:
    ctx->pc = 0x80C21710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21710: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C21714:
    ctx->pc = 0x80C21714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21714u)) return;
    // 80C21714: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C21718:
    ctx->pc = 0x80C21718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21718u)) return;
    // 80C21718: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2171C:
    ctx->pc = 0x80C2171Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2171Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2171C: lwz     r0, 0(r4)
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
label_80C21720:
    ctx->pc = 0x80C21720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21720u)) return;
    // 80C21720: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C21724:
    ctx->pc = 0x80C21724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21724u)) return;
    // 80C21724: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21728:
    ctx->pc = 0x80C21728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21728u)) return;
    // 80C21728: addi    r4, r4, -13792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13792);

label_80C2172C:
    ctx->pc = 0x80C2172Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2172Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2172C: lwzx    r4, r4, r0
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
label_80C21730:
    ctx->pc = 0x80C21730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21730: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C21734:
    ctx->pc = 0x80C21734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21734u)) return;
    // 80C21734: bl      0x8045F608
    {
            ctx->lr = 0x80C21738u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C21738:
    ctx->pc = 0x80C21738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21738: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2173C:
    ctx->pc = 0x80C2173Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2173Cu)) return;
    // 80C2173C: bl      0x8045F220
    {
            ctx->lr = 0x80C21740u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21740:
    ctx->pc = 0x80C21740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C21740: bl      0x8045C034
    {
            ctx->lr = 0x80C21744u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C21744:
    ctx->pc = 0x80C21744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21744: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C21748:
    ctx->pc = 0x80C21748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21748u)) return;
    // 80C21748: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2174Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2174C:
    ctx->pc = 0x80C2174Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2174Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2174C: b       0x80C217A8
    {
            goto label_80C217A8;
    }

label_80C21750:
    ctx->pc = 0x80C21750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21750: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21754:
    ctx->pc = 0x80C21754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21754u)) return;
    // 80C21754: bl      0x8045F220
    {
            ctx->lr = 0x80C21758u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21758:
    ctx->pc = 0x80C21758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C21758: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C2175C:
    ctx->pc = 0x80C2175Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2175Cu)) return;
    // 80C2175C: addi    r4, r4, -14928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14928);

label_80C21760:
    ctx->pc = 0x80C21760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C21760: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21760u)) return;
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
label_80C21764:
    ctx->pc = 0x80C21764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21764u)) return;
    // 80C21764: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21768:
    ctx->pc = 0x80C21768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21768u)) return;
    // 80C21768: addi    r4, r4, -14924
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14924);

label_80C2176C:
    ctx->pc = 0x80C2176Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2176Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2176C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2176Cu)) return;
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
label_80C21770:
    ctx->pc = 0x80C21770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21770u)) return;
    // 80C21770: lis     r4, -27459
    ctx->gpr[4] = ((u32)(s32)(-27459) << 16);

label_80C21774:
    ctx->pc = 0x80C21774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21774u)) return;
    // 80C21774: addi    r4, r4, -14920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14920);

label_80C21778:
    ctx->pc = 0x80C21778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C21778: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C21778u)) return;
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
label_80C2177C:
    ctx->pc = 0x80C2177Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2177Cu)) return;
    // 80C2177C: bl      0x8045EF2C
    {
            ctx->lr = 0x80C21780u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C21780:
    ctx->pc = 0x80C21780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21780: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C21784:
    ctx->pc = 0x80C21784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21784u)) return;
    // 80C21784: bl      0x8045F220
    {
            ctx->lr = 0x80C21788u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C21788:
    ctx->pc = 0x80C21788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C21788: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2178C:
    ctx->pc = 0x80C2178Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2178Cu)) return;
    // 80C2178C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C21790:
    ctx->pc = 0x80C21790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21790u)) return;
    // 80C21790: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C21794:
    ctx->pc = 0x80C21794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C21794u)) return;
    // 80C21794: bl      0x8045EEA8
    {
            ctx->lr = 0x80C21798u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C21798:
    ctx->pc = 0x80C21798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C21798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C21798: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2179C:
    ctx->pc = 0x80C2179Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2179Cu)) return;
    // 80C2179C: bl      0x8045EC10
    {
            ctx->lr = 0x80C217A0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C217A0:
    ctx->pc = 0x80C217A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C217A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C217A0: bl      0x8045DE34
    {
            ctx->lr = 0x80C217A4u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C217A4:
    ctx->pc = 0x80C217A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C217A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C217A4: bl      0x80460A80
    {
            ctx->lr = 0x80C217A8u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C217A8:
    ctx->pc = 0x80C217A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C217A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C217A8: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C217A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C217A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C217AC:
    ctx->pc = 0x80C217ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C217ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C217AC: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C217ACu)) return;
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
label_80C217B0:
    ctx->pc = 0x80C217B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C217B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C217B0: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C217B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C217B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C217B4:
    ctx->pc = 0x80C217B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C217B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C217B4: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C217B4u)) return;
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
label_80C217B8:
    ctx->pc = 0x80C217B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C217B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C217B8: lwz     r0, 52(r1)
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
label_80C217BC:
    ctx->pc = 0x80C217BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C217BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C217BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C217C0:
    ctx->pc = 0x80C217C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C217C0u)) return;
    // 80C217C0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80C217C4:
    ctx->pc = 0x80C217C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C217C4u)) return;
    // 80C217C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C20B20;
        }
    }

    ctx->pc = 0x80C217C8u;
    return;
return_dispatch_80C20B20:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C20B68u: goto label_80C20B68;
    case 0x80C20B6Cu: goto label_80C20B6C;
    case 0x80C20B70u: goto label_80C20B70;
    case 0x80C20B74u: goto label_80C20B74;
    case 0x80C20B7Cu: goto label_80C20B7C;
    case 0x80C20B84u: goto label_80C20B84;
    case 0x80C20BACu: goto label_80C20BAC;
    case 0x80C20BB4u: goto label_80C20BB4;
    case 0x80C20BC4u: goto label_80C20BC4;
    case 0x80C20BE0u: goto label_80C20BE0;
    case 0x80C20C10u: goto label_80C20C10;
    case 0x80C20C40u: goto label_80C20C40;
    case 0x80C20C48u: goto label_80C20C48;
    case 0x80C20C50u: goto label_80C20C50;
    case 0x80C20C70u: goto label_80C20C70;
    case 0x80C20C90u: goto label_80C20C90;
    case 0x80C20CBCu: goto label_80C20CBC;
    case 0x80C20CD8u: goto label_80C20CD8;
    case 0x80C20CE0u: goto label_80C20CE0;
    case 0x80C20D00u: goto label_80C20D00;
    case 0x80C20D20u: goto label_80C20D20;
    case 0x80C20D4Cu: goto label_80C20D4C;
    case 0x80C20D54u: goto label_80C20D54;
    case 0x80C20D58u: goto label_80C20D58;
    case 0x80C20D60u: goto label_80C20D60;
    case 0x80C20D88u: goto label_80C20D88;
    case 0x80C20D90u: goto label_80C20D90;
    case 0x80C20DB8u: goto label_80C20DB8;
    case 0x80C20DC0u: goto label_80C20DC0;
    case 0x80C20DC8u: goto label_80C20DC8;
    case 0x80C20DCCu: goto label_80C20DCC;
    case 0x80C20DE8u: goto label_80C20DE8;
    case 0x80C20DF4u: goto label_80C20DF4;
    case 0x80C20E10u: goto label_80C20E10;
    case 0x80C20E1Cu: goto label_80C20E1C;
    case 0x80C20E24u: goto label_80C20E24;
    case 0x80C20E48u: goto label_80C20E48;
    case 0x80C20E50u: goto label_80C20E50;
    case 0x80C20E74u: goto label_80C20E74;
    case 0x80C20E7Cu: goto label_80C20E7C;
    case 0x80C20E98u: goto label_80C20E98;
    case 0x80C20E9Cu: goto label_80C20E9C;
    case 0x80C20EA4u: goto label_80C20EA4;
    case 0x80C20EC0u: goto label_80C20EC0;
    case 0x80C20EC4u: goto label_80C20EC4;
    case 0x80C20EC8u: goto label_80C20EC8;
    case 0x80C20ED0u: goto label_80C20ED0;
    case 0x80C20EF8u: goto label_80C20EF8;
    case 0x80C20F00u: goto label_80C20F00;
    case 0x80C20F08u: goto label_80C20F08;
    case 0x80C20F0Cu: goto label_80C20F0C;
    case 0x80C20F14u: goto label_80C20F14;
    case 0x80C20F1Cu: goto label_80C20F1C;
    case 0x80C20F44u: goto label_80C20F44;
    case 0x80C20F4Cu: goto label_80C20F4C;
    case 0x80C20F54u: goto label_80C20F54;
    case 0x80C20F7Cu: goto label_80C20F7C;
    case 0x80C20F84u: goto label_80C20F84;
    case 0x80C20F8Cu: goto label_80C20F8C;
    case 0x80C20FB4u: goto label_80C20FB4;
    case 0x80C20FBCu: goto label_80C20FBC;
    case 0x80C20FC4u: goto label_80C20FC4;
    case 0x80C20FECu: goto label_80C20FEC;
    case 0x80C20FF4u: goto label_80C20FF4;
    case 0x80C20FFCu: goto label_80C20FFC;
    case 0x80C21024u: goto label_80C21024;
    case 0x80C2102Cu: goto label_80C2102C;
    case 0x80C21034u: goto label_80C21034;
    case 0x80C2105Cu: goto label_80C2105C;
    case 0x80C21064u: goto label_80C21064;
    case 0x80C2106Cu: goto label_80C2106C;
    case 0x80C21094u: goto label_80C21094;
    case 0x80C2109Cu: goto label_80C2109C;
    case 0x80C210A4u: goto label_80C210A4;
    case 0x80C210CCu: goto label_80C210CC;
    case 0x80C210D4u: goto label_80C210D4;
    case 0x80C210DCu: goto label_80C210DC;
    case 0x80C21104u: goto label_80C21104;
    case 0x80C2110Cu: goto label_80C2110C;
    case 0x80C21114u: goto label_80C21114;
    case 0x80C2113Cu: goto label_80C2113C;
    case 0x80C21144u: goto label_80C21144;
    case 0x80C2114Cu: goto label_80C2114C;
    case 0x80C21174u: goto label_80C21174;
    case 0x80C2117Cu: goto label_80C2117C;
    case 0x80C21184u: goto label_80C21184;
    case 0x80C211ACu: goto label_80C211AC;
    case 0x80C211B4u: goto label_80C211B4;
    case 0x80C211BCu: goto label_80C211BC;
    case 0x80C211E4u: goto label_80C211E4;
    case 0x80C211ECu: goto label_80C211EC;
    case 0x80C211F4u: goto label_80C211F4;
    case 0x80C2121Cu: goto label_80C2121C;
    case 0x80C21224u: goto label_80C21224;
    case 0x80C2122Cu: goto label_80C2122C;
    case 0x80C21254u: goto label_80C21254;
    case 0x80C2125Cu: goto label_80C2125C;
    case 0x80C21264u: goto label_80C21264;
    case 0x80C2128Cu: goto label_80C2128C;
    case 0x80C21294u: goto label_80C21294;
    case 0x80C2129Cu: goto label_80C2129C;
    case 0x80C212C4u: goto label_80C212C4;
    case 0x80C212CCu: goto label_80C212CC;
    case 0x80C212D4u: goto label_80C212D4;
    case 0x80C212FCu: goto label_80C212FC;
    case 0x80C21304u: goto label_80C21304;
    case 0x80C2130Cu: goto label_80C2130C;
    case 0x80C21334u: goto label_80C21334;
    case 0x80C2133Cu: goto label_80C2133C;
    case 0x80C21344u: goto label_80C21344;
    case 0x80C2136Cu: goto label_80C2136C;
    case 0x80C21374u: goto label_80C21374;
    case 0x80C2137Cu: goto label_80C2137C;
    case 0x80C213A4u: goto label_80C213A4;
    case 0x80C213ACu: goto label_80C213AC;
    case 0x80C213B4u: goto label_80C213B4;
    case 0x80C213DCu: goto label_80C213DC;
    case 0x80C213E4u: goto label_80C213E4;
    case 0x80C213ECu: goto label_80C213EC;
    case 0x80C21414u: goto label_80C21414;
    case 0x80C2141Cu: goto label_80C2141C;
    case 0x80C21424u: goto label_80C21424;
    case 0x80C2144Cu: goto label_80C2144C;
    case 0x80C21454u: goto label_80C21454;
    case 0x80C2145Cu: goto label_80C2145C;
    case 0x80C21484u: goto label_80C21484;
    case 0x80C2148Cu: goto label_80C2148C;
    case 0x80C21494u: goto label_80C21494;
    case 0x80C214BCu: goto label_80C214BC;
    case 0x80C214C4u: goto label_80C214C4;
    case 0x80C214CCu: goto label_80C214CC;
    case 0x80C214F4u: goto label_80C214F4;
    case 0x80C214FCu: goto label_80C214FC;
    case 0x80C21504u: goto label_80C21504;
    case 0x80C2152Cu: goto label_80C2152C;
    case 0x80C21534u: goto label_80C21534;
    case 0x80C2153Cu: goto label_80C2153C;
    case 0x80C21564u: goto label_80C21564;
    case 0x80C2156Cu: goto label_80C2156C;
    case 0x80C21574u: goto label_80C21574;
    case 0x80C2159Cu: goto label_80C2159C;
    case 0x80C215A4u: goto label_80C215A4;
    case 0x80C215ACu: goto label_80C215AC;
    case 0x80C215B0u: goto label_80C215B0;
    case 0x80C215CCu: goto label_80C215CC;
    case 0x80C215D8u: goto label_80C215D8;
    case 0x80C215F4u: goto label_80C215F4;
    case 0x80C21600u: goto label_80C21600;
    case 0x80C21608u: goto label_80C21608;
    case 0x80C2162Cu: goto label_80C2162C;
    case 0x80C21634u: goto label_80C21634;
    case 0x80C21658u: goto label_80C21658;
    case 0x80C21660u: goto label_80C21660;
    case 0x80C21664u: goto label_80C21664;
    case 0x80C21680u: goto label_80C21680;
    case 0x80C21684u: goto label_80C21684;
    case 0x80C216A0u: goto label_80C216A0;
    case 0x80C216A4u: goto label_80C216A4;
    case 0x80C216ACu: goto label_80C216AC;
    case 0x80C216B4u: goto label_80C216B4;
    case 0x80C216B8u: goto label_80C216B8;
    case 0x80C216D4u: goto label_80C216D4;
    case 0x80C216E0u: goto label_80C216E0;
    case 0x80C216FCu: goto label_80C216FC;
    case 0x80C21708u: goto label_80C21708;
    case 0x80C21710u: goto label_80C21710;
    case 0x80C21738u: goto label_80C21738;
    case 0x80C21740u: goto label_80C21740;
    case 0x80C21744u: goto label_80C21744;
    case 0x80C2174Cu: goto label_80C2174C;
    case 0x80C21758u: goto label_80C21758;
    case 0x80C21780u: goto label_80C21780;
    case 0x80C21788u: goto label_80C21788;
    case 0x80C21798u: goto label_80C21798;
    case 0x80C217A0u: goto label_80C217A0;
    case 0x80C217A4u: goto label_80C217A4;
    case 0x80C217A8u: goto label_80C217A8;
    default: return;
    }
}

