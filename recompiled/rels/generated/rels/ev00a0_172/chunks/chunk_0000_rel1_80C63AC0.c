// DolRecomp output
#include "../generated.h"

void func_80C63AC0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C63AC0[1133] = {
        &&label_80C63AC0,
        &&label_80C63AC4,
        &&label_80C63AC8,
        &&label_80C63ACC,
        &&label_80C63AD0,
        &&label_80C63AD4,
        &&label_80C63AD8,
        &&label_80C63ADC,
        &&label_80C63AE0,
        &&label_80C63AE4,
        &&label_80C63AE8,
        &&label_80C63AEC,
        &&label_80C63AF0,
        &&label_80C63AF4,
        &&label_80C63AF8,
        &&label_80C63AFC,
        &&label_80C63B00,
        &&label_80C63B04,
        &&label_80C63B08,
        &&label_80C63B0C,
        &&label_80C63B10,
        &&label_80C63B14,
        &&label_80C63B18,
        &&label_80C63B1C,
        &&label_80C63B20,
        &&label_80C63B24,
        &&label_80C63B28,
        &&label_80C63B2C,
        &&label_80C63B30,
        &&label_80C63B34,
        &&label_80C63B38,
        &&label_80C63B3C,
        &&label_80C63B40,
        &&label_80C63B44,
        &&label_80C63B48,
        &&label_80C63B4C,
        &&label_80C63B50,
        &&label_80C63B54,
        &&label_80C63B58,
        &&label_80C63B5C,
        &&label_80C63B60,
        &&label_80C63B64,
        &&label_80C63B68,
        &&label_80C63B6C,
        &&label_80C63B70,
        &&label_80C63B74,
        &&label_80C63B78,
        &&label_80C63B7C,
        &&label_80C63B80,
        &&label_80C63B84,
        &&label_80C63B88,
        &&label_80C63B8C,
        &&label_80C63B90,
        &&label_80C63B94,
        &&label_80C63B98,
        &&label_80C63B9C,
        &&label_80C63BA0,
        &&label_80C63BA4,
        &&label_80C63BA8,
        &&label_80C63BAC,
        &&label_80C63BB0,
        &&label_80C63BB4,
        &&label_80C63BB8,
        &&label_80C63BBC,
        &&label_80C63BC0,
        &&label_80C63BC4,
        &&label_80C63BC8,
        &&label_80C63BCC,
        &&label_80C63BD0,
        &&label_80C63BD4,
        &&label_80C63BD8,
        &&label_80C63BDC,
        &&label_80C63BE0,
        &&label_80C63BE4,
        &&label_80C63BE8,
        &&label_80C63BEC,
        &&label_80C63BF0,
        &&label_80C63BF4,
        &&label_80C63BF8,
        &&label_80C63BFC,
        &&label_80C63C00,
        &&label_80C63C04,
        &&label_80C63C08,
        &&label_80C63C0C,
        &&label_80C63C10,
        &&label_80C63C14,
        &&label_80C63C18,
        &&label_80C63C1C,
        &&label_80C63C20,
        &&label_80C63C24,
        &&label_80C63C28,
        &&label_80C63C2C,
        &&label_80C63C30,
        &&label_80C63C34,
        &&label_80C63C38,
        &&label_80C63C3C,
        &&label_80C63C40,
        &&label_80C63C44,
        &&label_80C63C48,
        &&label_80C63C4C,
        &&label_80C63C50,
        &&label_80C63C54,
        &&label_80C63C58,
        &&label_80C63C5C,
        &&label_80C63C60,
        &&label_80C63C64,
        &&label_80C63C68,
        &&label_80C63C6C,
        &&label_80C63C70,
        &&label_80C63C74,
        &&label_80C63C78,
        &&label_80C63C7C,
        &&label_80C63C80,
        &&label_80C63C84,
        &&label_80C63C88,
        &&label_80C63C8C,
        &&label_80C63C90,
        &&label_80C63C94,
        &&label_80C63C98,
        &&label_80C63C9C,
        &&label_80C63CA0,
        &&label_80C63CA4,
        &&label_80C63CA8,
        &&label_80C63CAC,
        &&label_80C63CB0,
        &&label_80C63CB4,
        &&label_80C63CB8,
        &&label_80C63CBC,
        &&label_80C63CC0,
        &&label_80C63CC4,
        &&label_80C63CC8,
        &&label_80C63CCC,
        &&label_80C63CD0,
        &&label_80C63CD4,
        &&label_80C63CD8,
        &&label_80C63CDC,
        &&label_80C63CE0,
        &&label_80C63CE4,
        &&label_80C63CE8,
        &&label_80C63CEC,
        &&label_80C63CF0,
        &&label_80C63CF4,
        &&label_80C63CF8,
        &&label_80C63CFC,
        &&label_80C63D00,
        &&label_80C63D04,
        &&label_80C63D08,
        &&label_80C63D0C,
        &&label_80C63D10,
        &&label_80C63D14,
        &&label_80C63D18,
        &&label_80C63D1C,
        &&label_80C63D20,
        &&label_80C63D24,
        &&label_80C63D28,
        &&label_80C63D2C,
        &&label_80C63D30,
        &&label_80C63D34,
        &&label_80C63D38,
        &&label_80C63D3C,
        &&label_80C63D40,
        &&label_80C63D44,
        &&label_80C63D48,
        &&label_80C63D4C,
        &&label_80C63D50,
        &&label_80C63D54,
        &&label_80C63D58,
        &&label_80C63D5C,
        &&label_80C63D60,
        &&label_80C63D64,
        &&label_80C63D68,
        &&label_80C63D6C,
        &&label_80C63D70,
        &&label_80C63D74,
        &&label_80C63D78,
        &&label_80C63D7C,
        &&label_80C63D80,
        &&label_80C63D84,
        &&label_80C63D88,
        &&label_80C63D8C,
        &&label_80C63D90,
        &&label_80C63D94,
        &&label_80C63D98,
        &&label_80C63D9C,
        &&label_80C63DA0,
        &&label_80C63DA4,
        &&label_80C63DA8,
        &&label_80C63DAC,
        &&label_80C63DB0,
        &&label_80C63DB4,
        &&label_80C63DB8,
        &&label_80C63DBC,
        &&label_80C63DC0,
        &&label_80C63DC4,
        &&label_80C63DC8,
        &&label_80C63DCC,
        &&label_80C63DD0,
        &&label_80C63DD4,
        &&label_80C63DD8,
        &&label_80C63DDC,
        &&label_80C63DE0,
        &&label_80C63DE4,
        &&label_80C63DE8,
        &&label_80C63DEC,
        &&label_80C63DF0,
        &&label_80C63DF4,
        &&label_80C63DF8,
        &&label_80C63DFC,
        &&label_80C63E00,
        &&label_80C63E04,
        &&label_80C63E08,
        &&label_80C63E0C,
        &&label_80C63E10,
        &&label_80C63E14,
        &&label_80C63E18,
        &&label_80C63E1C,
        &&label_80C63E20,
        &&label_80C63E24,
        &&label_80C63E28,
        &&label_80C63E2C,
        &&label_80C63E30,
        &&label_80C63E34,
        &&label_80C63E38,
        &&label_80C63E3C,
        &&label_80C63E40,
        &&label_80C63E44,
        &&label_80C63E48,
        &&label_80C63E4C,
        &&label_80C63E50,
        &&label_80C63E54,
        &&label_80C63E58,
        &&label_80C63E5C,
        &&label_80C63E60,
        &&label_80C63E64,
        &&label_80C63E68,
        &&label_80C63E6C,
        &&label_80C63E70,
        &&label_80C63E74,
        &&label_80C63E78,
        &&label_80C63E7C,
        &&label_80C63E80,
        &&label_80C63E84,
        &&label_80C63E88,
        &&label_80C63E8C,
        &&label_80C63E90,
        &&label_80C63E94,
        &&label_80C63E98,
        &&label_80C63E9C,
        &&label_80C63EA0,
        &&label_80C63EA4,
        &&label_80C63EA8,
        &&label_80C63EAC,
        &&label_80C63EB0,
        &&label_80C63EB4,
        &&label_80C63EB8,
        &&label_80C63EBC,
        &&label_80C63EC0,
        &&label_80C63EC4,
        &&label_80C63EC8,
        &&label_80C63ECC,
        &&label_80C63ED0,
        &&label_80C63ED4,
        &&label_80C63ED8,
        &&label_80C63EDC,
        &&label_80C63EE0,
        &&label_80C63EE4,
        &&label_80C63EE8,
        &&label_80C63EEC,
        &&label_80C63EF0,
        &&label_80C63EF4,
        &&label_80C63EF8,
        &&label_80C63EFC,
        &&label_80C63F00,
        &&label_80C63F04,
        &&label_80C63F08,
        &&label_80C63F0C,
        &&label_80C63F10,
        &&label_80C63F14,
        &&label_80C63F18,
        &&label_80C63F1C,
        &&label_80C63F20,
        &&label_80C63F24,
        &&label_80C63F28,
        &&label_80C63F2C,
        &&label_80C63F30,
        &&label_80C63F34,
        &&label_80C63F38,
        &&label_80C63F3C,
        &&label_80C63F40,
        &&label_80C63F44,
        &&label_80C63F48,
        &&label_80C63F4C,
        &&label_80C63F50,
        &&label_80C63F54,
        &&label_80C63F58,
        &&label_80C63F5C,
        &&label_80C63F60,
        &&label_80C63F64,
        &&label_80C63F68,
        &&label_80C63F6C,
        &&label_80C63F70,
        &&label_80C63F74,
        &&label_80C63F78,
        &&label_80C63F7C,
        &&label_80C63F80,
        &&label_80C63F84,
        &&label_80C63F88,
        &&label_80C63F8C,
        &&label_80C63F90,
        &&label_80C63F94,
        &&label_80C63F98,
        &&label_80C63F9C,
        &&label_80C63FA0,
        &&label_80C63FA4,
        &&label_80C63FA8,
        &&label_80C63FAC,
        &&label_80C63FB0,
        &&label_80C63FB4,
        &&label_80C63FB8,
        &&label_80C63FBC,
        &&label_80C63FC0,
        &&label_80C63FC4,
        &&label_80C63FC8,
        &&label_80C63FCC,
        &&label_80C63FD0,
        &&label_80C63FD4,
        &&label_80C63FD8,
        &&label_80C63FDC,
        &&label_80C63FE0,
        &&label_80C63FE4,
        &&label_80C63FE8,
        &&label_80C63FEC,
        &&label_80C63FF0,
        &&label_80C63FF4,
        &&label_80C63FF8,
        &&label_80C63FFC,
        &&label_80C64000,
        &&label_80C64004,
        &&label_80C64008,
        &&label_80C6400C,
        &&label_80C64010,
        &&label_80C64014,
        &&label_80C64018,
        &&label_80C6401C,
        &&label_80C64020,
        &&label_80C64024,
        &&label_80C64028,
        &&label_80C6402C,
        &&label_80C64030,
        &&label_80C64034,
        &&label_80C64038,
        &&label_80C6403C,
        &&label_80C64040,
        &&label_80C64044,
        &&label_80C64048,
        &&label_80C6404C,
        &&label_80C64050,
        &&label_80C64054,
        &&label_80C64058,
        &&label_80C6405C,
        &&label_80C64060,
        &&label_80C64064,
        &&label_80C64068,
        &&label_80C6406C,
        &&label_80C64070,
        &&label_80C64074,
        &&label_80C64078,
        &&label_80C6407C,
        &&label_80C64080,
        &&label_80C64084,
        &&label_80C64088,
        &&label_80C6408C,
        &&label_80C64090,
        &&label_80C64094,
        &&label_80C64098,
        &&label_80C6409C,
        &&label_80C640A0,
        &&label_80C640A4,
        &&label_80C640A8,
        &&label_80C640AC,
        &&label_80C640B0,
        &&label_80C640B4,
        &&label_80C640B8,
        &&label_80C640BC,
        &&label_80C640C0,
        &&label_80C640C4,
        &&label_80C640C8,
        &&label_80C640CC,
        &&label_80C640D0,
        &&label_80C640D4,
        &&label_80C640D8,
        &&label_80C640DC,
        &&label_80C640E0,
        &&label_80C640E4,
        &&label_80C640E8,
        &&label_80C640EC,
        &&label_80C640F0,
        &&label_80C640F4,
        &&label_80C640F8,
        &&label_80C640FC,
        &&label_80C64100,
        &&label_80C64104,
        &&label_80C64108,
        &&label_80C6410C,
        &&label_80C64110,
        &&label_80C64114,
        &&label_80C64118,
        &&label_80C6411C,
        &&label_80C64120,
        &&label_80C64124,
        &&label_80C64128,
        &&label_80C6412C,
        &&label_80C64130,
        &&label_80C64134,
        &&label_80C64138,
        &&label_80C6413C,
        &&label_80C64140,
        &&label_80C64144,
        &&label_80C64148,
        &&label_80C6414C,
        &&label_80C64150,
        &&label_80C64154,
        &&label_80C64158,
        &&label_80C6415C,
        &&label_80C64160,
        &&label_80C64164,
        &&label_80C64168,
        &&label_80C6416C,
        &&label_80C64170,
        &&label_80C64174,
        &&label_80C64178,
        &&label_80C6417C,
        &&label_80C64180,
        &&label_80C64184,
        &&label_80C64188,
        &&label_80C6418C,
        &&label_80C64190,
        &&label_80C64194,
        &&label_80C64198,
        &&label_80C6419C,
        &&label_80C641A0,
        &&label_80C641A4,
        &&label_80C641A8,
        &&label_80C641AC,
        &&label_80C641B0,
        &&label_80C641B4,
        &&label_80C641B8,
        &&label_80C641BC,
        &&label_80C641C0,
        &&label_80C641C4,
        &&label_80C641C8,
        &&label_80C641CC,
        &&label_80C641D0,
        &&label_80C641D4,
        &&label_80C641D8,
        &&label_80C641DC,
        &&label_80C641E0,
        &&label_80C641E4,
        &&label_80C641E8,
        &&label_80C641EC,
        &&label_80C641F0,
        &&label_80C641F4,
        &&label_80C641F8,
        &&label_80C641FC,
        &&label_80C64200,
        &&label_80C64204,
        &&label_80C64208,
        &&label_80C6420C,
        &&label_80C64210,
        &&label_80C64214,
        &&label_80C64218,
        &&label_80C6421C,
        &&label_80C64220,
        &&label_80C64224,
        &&label_80C64228,
        &&label_80C6422C,
        &&label_80C64230,
        &&label_80C64234,
        &&label_80C64238,
        &&label_80C6423C,
        &&label_80C64240,
        &&label_80C64244,
        &&label_80C64248,
        &&label_80C6424C,
        &&label_80C64250,
        &&label_80C64254,
        &&label_80C64258,
        &&label_80C6425C,
        &&label_80C64260,
        &&label_80C64264,
        &&label_80C64268,
        &&label_80C6426C,
        &&label_80C64270,
        &&label_80C64274,
        &&label_80C64278,
        &&label_80C6427C,
        &&label_80C64280,
        &&label_80C64284,
        &&label_80C64288,
        &&label_80C6428C,
        &&label_80C64290,
        &&label_80C64294,
        &&label_80C64298,
        &&label_80C6429C,
        &&label_80C642A0,
        &&label_80C642A4,
        &&label_80C642A8,
        &&label_80C642AC,
        &&label_80C642B0,
        &&label_80C642B4,
        &&label_80C642B8,
        &&label_80C642BC,
        &&label_80C642C0,
        &&label_80C642C4,
        &&label_80C642C8,
        &&label_80C642CC,
        &&label_80C642D0,
        &&label_80C642D4,
        &&label_80C642D8,
        &&label_80C642DC,
        &&label_80C642E0,
        &&label_80C642E4,
        &&label_80C642E8,
        &&label_80C642EC,
        &&label_80C642F0,
        &&label_80C642F4,
        &&label_80C642F8,
        &&label_80C642FC,
        &&label_80C64300,
        &&label_80C64304,
        &&label_80C64308,
        &&label_80C6430C,
        &&label_80C64310,
        &&label_80C64314,
        &&label_80C64318,
        &&label_80C6431C,
        &&label_80C64320,
        &&label_80C64324,
        &&label_80C64328,
        &&label_80C6432C,
        &&label_80C64330,
        &&label_80C64334,
        &&label_80C64338,
        &&label_80C6433C,
        &&label_80C64340,
        &&label_80C64344,
        &&label_80C64348,
        &&label_80C6434C,
        &&label_80C64350,
        &&label_80C64354,
        &&label_80C64358,
        &&label_80C6435C,
        &&label_80C64360,
        &&label_80C64364,
        &&label_80C64368,
        &&label_80C6436C,
        &&label_80C64370,
        &&label_80C64374,
        &&label_80C64378,
        &&label_80C6437C,
        &&label_80C64380,
        &&label_80C64384,
        &&label_80C64388,
        &&label_80C6438C,
        &&label_80C64390,
        &&label_80C64394,
        &&label_80C64398,
        &&label_80C6439C,
        &&label_80C643A0,
        &&label_80C643A4,
        &&label_80C643A8,
        &&label_80C643AC,
        &&label_80C643B0,
        &&label_80C643B4,
        &&label_80C643B8,
        &&label_80C643BC,
        &&label_80C643C0,
        &&label_80C643C4,
        &&label_80C643C8,
        &&label_80C643CC,
        &&label_80C643D0,
        &&label_80C643D4,
        &&label_80C643D8,
        &&label_80C643DC,
        &&label_80C643E0,
        &&label_80C643E4,
        &&label_80C643E8,
        &&label_80C643EC,
        &&label_80C643F0,
        &&label_80C643F4,
        &&label_80C643F8,
        &&label_80C643FC,
        &&label_80C64400,
        &&label_80C64404,
        &&label_80C64408,
        &&label_80C6440C,
        &&label_80C64410,
        &&label_80C64414,
        &&label_80C64418,
        &&label_80C6441C,
        &&label_80C64420,
        &&label_80C64424,
        &&label_80C64428,
        &&label_80C6442C,
        &&label_80C64430,
        &&label_80C64434,
        &&label_80C64438,
        &&label_80C6443C,
        &&label_80C64440,
        &&label_80C64444,
        &&label_80C64448,
        &&label_80C6444C,
        &&label_80C64450,
        &&label_80C64454,
        &&label_80C64458,
        &&label_80C6445C,
        &&label_80C64460,
        &&label_80C64464,
        &&label_80C64468,
        &&label_80C6446C,
        &&label_80C64470,
        &&label_80C64474,
        &&label_80C64478,
        &&label_80C6447C,
        &&label_80C64480,
        &&label_80C64484,
        &&label_80C64488,
        &&label_80C6448C,
        &&label_80C64490,
        &&label_80C64494,
        &&label_80C64498,
        &&label_80C6449C,
        &&label_80C644A0,
        &&label_80C644A4,
        &&label_80C644A8,
        &&label_80C644AC,
        &&label_80C644B0,
        &&label_80C644B4,
        &&label_80C644B8,
        &&label_80C644BC,
        &&label_80C644C0,
        &&label_80C644C4,
        &&label_80C644C8,
        &&label_80C644CC,
        &&label_80C644D0,
        &&label_80C644D4,
        &&label_80C644D8,
        &&label_80C644DC,
        &&label_80C644E0,
        &&label_80C644E4,
        &&label_80C644E8,
        &&label_80C644EC,
        &&label_80C644F0,
        &&label_80C644F4,
        &&label_80C644F8,
        &&label_80C644FC,
        &&label_80C64500,
        &&label_80C64504,
        &&label_80C64508,
        &&label_80C6450C,
        &&label_80C64510,
        &&label_80C64514,
        &&label_80C64518,
        &&label_80C6451C,
        &&label_80C64520,
        &&label_80C64524,
        &&label_80C64528,
        &&label_80C6452C,
        &&label_80C64530,
        &&label_80C64534,
        &&label_80C64538,
        &&label_80C6453C,
        &&label_80C64540,
        &&label_80C64544,
        &&label_80C64548,
        &&label_80C6454C,
        &&label_80C64550,
        &&label_80C64554,
        &&label_80C64558,
        &&label_80C6455C,
        &&label_80C64560,
        &&label_80C64564,
        &&label_80C64568,
        &&label_80C6456C,
        &&label_80C64570,
        &&label_80C64574,
        &&label_80C64578,
        &&label_80C6457C,
        &&label_80C64580,
        &&label_80C64584,
        &&label_80C64588,
        &&label_80C6458C,
        &&label_80C64590,
        &&label_80C64594,
        &&label_80C64598,
        &&label_80C6459C,
        &&label_80C645A0,
        &&label_80C645A4,
        &&label_80C645A8,
        &&label_80C645AC,
        &&label_80C645B0,
        &&label_80C645B4,
        &&label_80C645B8,
        &&label_80C645BC,
        &&label_80C645C0,
        &&label_80C645C4,
        &&label_80C645C8,
        &&label_80C645CC,
        &&label_80C645D0,
        &&label_80C645D4,
        &&label_80C645D8,
        &&label_80C645DC,
        &&label_80C645E0,
        &&label_80C645E4,
        &&label_80C645E8,
        &&label_80C645EC,
        &&label_80C645F0,
        &&label_80C645F4,
        &&label_80C645F8,
        &&label_80C645FC,
        &&label_80C64600,
        &&label_80C64604,
        &&label_80C64608,
        &&label_80C6460C,
        &&label_80C64610,
        &&label_80C64614,
        &&label_80C64618,
        &&label_80C6461C,
        &&label_80C64620,
        &&label_80C64624,
        &&label_80C64628,
        &&label_80C6462C,
        &&label_80C64630,
        &&label_80C64634,
        &&label_80C64638,
        &&label_80C6463C,
        &&label_80C64640,
        &&label_80C64644,
        &&label_80C64648,
        &&label_80C6464C,
        &&label_80C64650,
        &&label_80C64654,
        &&label_80C64658,
        &&label_80C6465C,
        &&label_80C64660,
        &&label_80C64664,
        &&label_80C64668,
        &&label_80C6466C,
        &&label_80C64670,
        &&label_80C64674,
        &&label_80C64678,
        &&label_80C6467C,
        &&label_80C64680,
        &&label_80C64684,
        &&label_80C64688,
        &&label_80C6468C,
        &&label_80C64690,
        &&label_80C64694,
        &&label_80C64698,
        &&label_80C6469C,
        &&label_80C646A0,
        &&label_80C646A4,
        &&label_80C646A8,
        &&label_80C646AC,
        &&label_80C646B0,
        &&label_80C646B4,
        &&label_80C646B8,
        &&label_80C646BC,
        &&label_80C646C0,
        &&label_80C646C4,
        &&label_80C646C8,
        &&label_80C646CC,
        &&label_80C646D0,
        &&label_80C646D4,
        &&label_80C646D8,
        &&label_80C646DC,
        &&label_80C646E0,
        &&label_80C646E4,
        &&label_80C646E8,
        &&label_80C646EC,
        &&label_80C646F0,
        &&label_80C646F4,
        &&label_80C646F8,
        &&label_80C646FC,
        &&label_80C64700,
        &&label_80C64704,
        &&label_80C64708,
        &&label_80C6470C,
        &&label_80C64710,
        &&label_80C64714,
        &&label_80C64718,
        &&label_80C6471C,
        &&label_80C64720,
        &&label_80C64724,
        &&label_80C64728,
        &&label_80C6472C,
        &&label_80C64730,
        &&label_80C64734,
        &&label_80C64738,
        &&label_80C6473C,
        &&label_80C64740,
        &&label_80C64744,
        &&label_80C64748,
        &&label_80C6474C,
        &&label_80C64750,
        &&label_80C64754,
        &&label_80C64758,
        &&label_80C6475C,
        &&label_80C64760,
        &&label_80C64764,
        &&label_80C64768,
        &&label_80C6476C,
        &&label_80C64770,
        &&label_80C64774,
        &&label_80C64778,
        &&label_80C6477C,
        &&label_80C64780,
        &&label_80C64784,
        &&label_80C64788,
        &&label_80C6478C,
        &&label_80C64790,
        &&label_80C64794,
        &&label_80C64798,
        &&label_80C6479C,
        &&label_80C647A0,
        &&label_80C647A4,
        &&label_80C647A8,
        &&label_80C647AC,
        &&label_80C647B0,
        &&label_80C647B4,
        &&label_80C647B8,
        &&label_80C647BC,
        &&label_80C647C0,
        &&label_80C647C4,
        &&label_80C647C8,
        &&label_80C647CC,
        &&label_80C647D0,
        &&label_80C647D4,
        &&label_80C647D8,
        &&label_80C647DC,
        &&label_80C647E0,
        &&label_80C647E4,
        &&label_80C647E8,
        &&label_80C647EC,
        &&label_80C647F0,
        &&label_80C647F4,
        &&label_80C647F8,
        &&label_80C647FC,
        &&label_80C64800,
        &&label_80C64804,
        &&label_80C64808,
        &&label_80C6480C,
        &&label_80C64810,
        &&label_80C64814,
        &&label_80C64818,
        &&label_80C6481C,
        &&label_80C64820,
        &&label_80C64824,
        &&label_80C64828,
        &&label_80C6482C,
        &&label_80C64830,
        &&label_80C64834,
        &&label_80C64838,
        &&label_80C6483C,
        &&label_80C64840,
        &&label_80C64844,
        &&label_80C64848,
        &&label_80C6484C,
        &&label_80C64850,
        &&label_80C64854,
        &&label_80C64858,
        &&label_80C6485C,
        &&label_80C64860,
        &&label_80C64864,
        &&label_80C64868,
        &&label_80C6486C,
        &&label_80C64870,
        &&label_80C64874,
        &&label_80C64878,
        &&label_80C6487C,
        &&label_80C64880,
        &&label_80C64884,
        &&label_80C64888,
        &&label_80C6488C,
        &&label_80C64890,
        &&label_80C64894,
        &&label_80C64898,
        &&label_80C6489C,
        &&label_80C648A0,
        &&label_80C648A4,
        &&label_80C648A8,
        &&label_80C648AC,
        &&label_80C648B0,
        &&label_80C648B4,
        &&label_80C648B8,
        &&label_80C648BC,
        &&label_80C648C0,
        &&label_80C648C4,
        &&label_80C648C8,
        &&label_80C648CC,
        &&label_80C648D0,
        &&label_80C648D4,
        &&label_80C648D8,
        &&label_80C648DC,
        &&label_80C648E0,
        &&label_80C648E4,
        &&label_80C648E8,
        &&label_80C648EC,
        &&label_80C648F0,
        &&label_80C648F4,
        &&label_80C648F8,
        &&label_80C648FC,
        &&label_80C64900,
        &&label_80C64904,
        &&label_80C64908,
        &&label_80C6490C,
        &&label_80C64910,
        &&label_80C64914,
        &&label_80C64918,
        &&label_80C6491C,
        &&label_80C64920,
        &&label_80C64924,
        &&label_80C64928,
        &&label_80C6492C,
        &&label_80C64930,
        &&label_80C64934,
        &&label_80C64938,
        &&label_80C6493C,
        &&label_80C64940,
        &&label_80C64944,
        &&label_80C64948,
        &&label_80C6494C,
        &&label_80C64950,
        &&label_80C64954,
        &&label_80C64958,
        &&label_80C6495C,
        &&label_80C64960,
        &&label_80C64964,
        &&label_80C64968,
        &&label_80C6496C,
        &&label_80C64970,
        &&label_80C64974,
        &&label_80C64978,
        &&label_80C6497C,
        &&label_80C64980,
        &&label_80C64984,
        &&label_80C64988,
        &&label_80C6498C,
        &&label_80C64990,
        &&label_80C64994,
        &&label_80C64998,
        &&label_80C6499C,
        &&label_80C649A0,
        &&label_80C649A4,
        &&label_80C649A8,
        &&label_80C649AC,
        &&label_80C649B0,
        &&label_80C649B4,
        &&label_80C649B8,
        &&label_80C649BC,
        &&label_80C649C0,
        &&label_80C649C4,
        &&label_80C649C8,
        &&label_80C649CC,
        &&label_80C649D0,
        &&label_80C649D4,
        &&label_80C649D8,
        &&label_80C649DC,
        &&label_80C649E0,
        &&label_80C649E4,
        &&label_80C649E8,
        &&label_80C649EC,
        &&label_80C649F0,
        &&label_80C649F4,
        &&label_80C649F8,
        &&label_80C649FC,
        &&label_80C64A00,
        &&label_80C64A04,
        &&label_80C64A08,
        &&label_80C64A0C,
        &&label_80C64A10,
        &&label_80C64A14,
        &&label_80C64A18,
        &&label_80C64A1C,
        &&label_80C64A20,
        &&label_80C64A24,
        &&label_80C64A28,
        &&label_80C64A2C,
        &&label_80C64A30,
        &&label_80C64A34,
        &&label_80C64A38,
        &&label_80C64A3C,
        &&label_80C64A40,
        &&label_80C64A44,
        &&label_80C64A48,
        &&label_80C64A4C,
        &&label_80C64A50,
        &&label_80C64A54,
        &&label_80C64A58,
        &&label_80C64A5C,
        &&label_80C64A60,
        &&label_80C64A64,
        &&label_80C64A68,
        &&label_80C64A6C,
        &&label_80C64A70,
        &&label_80C64A74,
        &&label_80C64A78,
        &&label_80C64A7C,
        &&label_80C64A80,
        &&label_80C64A84,
        &&label_80C64A88,
        &&label_80C64A8C,
        &&label_80C64A90,
        &&label_80C64A94,
        &&label_80C64A98,
        &&label_80C64A9C,
        &&label_80C64AA0,
        &&label_80C64AA4,
        &&label_80C64AA8,
        &&label_80C64AAC,
        &&label_80C64AB0,
        &&label_80C64AB4,
        &&label_80C64AB8,
        &&label_80C64ABC,
        &&label_80C64AC0,
        &&label_80C64AC4,
        &&label_80C64AC8,
        &&label_80C64ACC,
        &&label_80C64AD0,
        &&label_80C64AD4,
        &&label_80C64AD8,
        &&label_80C64ADC,
        &&label_80C64AE0,
        &&label_80C64AE4,
        &&label_80C64AE8,
        &&label_80C64AEC,
        &&label_80C64AF0,
        &&label_80C64AF4,
        &&label_80C64AF8,
        &&label_80C64AFC,
        &&label_80C64B00,
        &&label_80C64B04,
        &&label_80C64B08,
        &&label_80C64B0C,
        &&label_80C64B10,
        &&label_80C64B14,
        &&label_80C64B18,
        &&label_80C64B1C,
        &&label_80C64B20,
        &&label_80C64B24,
        &&label_80C64B28,
        &&label_80C64B2C,
        &&label_80C64B30,
        &&label_80C64B34,
        &&label_80C64B38,
        &&label_80C64B3C,
        &&label_80C64B40,
        &&label_80C64B44,
        &&label_80C64B48,
        &&label_80C64B4C,
        &&label_80C64B50,
        &&label_80C64B54,
        &&label_80C64B58,
        &&label_80C64B5C,
        &&label_80C64B60,
        &&label_80C64B64,
        &&label_80C64B68,
        &&label_80C64B6C,
        &&label_80C64B70,
        &&label_80C64B74,
        &&label_80C64B78,
        &&label_80C64B7C,
        &&label_80C64B80,
        &&label_80C64B84,
        &&label_80C64B88,
        &&label_80C64B8C,
        &&label_80C64B90,
        &&label_80C64B94,
        &&label_80C64B98,
        &&label_80C64B9C,
        &&label_80C64BA0,
        &&label_80C64BA4,
        &&label_80C64BA8,
        &&label_80C64BAC,
        &&label_80C64BB0,
        &&label_80C64BB4,
        &&label_80C64BB8,
        &&label_80C64BBC,
        &&label_80C64BC0,
        &&label_80C64BC4,
        &&label_80C64BC8,
        &&label_80C64BCC,
        &&label_80C64BD0,
        &&label_80C64BD4,
        &&label_80C64BD8,
        &&label_80C64BDC,
        &&label_80C64BE0,
        &&label_80C64BE4,
        &&label_80C64BE8,
        &&label_80C64BEC,
        &&label_80C64BF0,
        &&label_80C64BF4,
        &&label_80C64BF8,
        &&label_80C64BFC,
        &&label_80C64C00,
        &&label_80C64C04,
        &&label_80C64C08,
        &&label_80C64C0C,
        &&label_80C64C10,
        &&label_80C64C14,
        &&label_80C64C18,
        &&label_80C64C1C,
        &&label_80C64C20,
        &&label_80C64C24,
        &&label_80C64C28,
        &&label_80C64C2C,
        &&label_80C64C30,
        &&label_80C64C34,
        &&label_80C64C38,
        &&label_80C64C3C,
        &&label_80C64C40,
        &&label_80C64C44,
        &&label_80C64C48,
        &&label_80C64C4C,
        &&label_80C64C50,
        &&label_80C64C54,
        &&label_80C64C58,
        &&label_80C64C5C,
        &&label_80C64C60,
        &&label_80C64C64,
        &&label_80C64C68,
        &&label_80C64C6C,
        &&label_80C64C70
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C63AC0u && pc <= 0x80C64C70u && ((pc - 0x80C63AC0u) & 3u) == 0u)
            goto *pc_table_80C63AC0[(pc - 0x80C63AC0u) >> 2];
    }
    return;
label_80C63AC0:
    ctx->pc = 0x80C63AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63AC0: stwu     r1, -16(r1)
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
label_80C63AC4:
    ctx->pc = 0x80C63AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C63AC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C63AC8:
    ctx->pc = 0x80C63AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C63AC8: stw     r0, 20(r1)
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
label_80C63ACC:
    ctx->pc = 0x80C63ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63ACCu)) return;
    // 80C63ACC: cmpwi   r3, 2
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

label_80C63AD0:
    ctx->pc = 0x80C63AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63AD0u)) return;
    // 80C63AD0: bc    12, 2, 0x80C6431C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6431C;
        }
    }

label_80C63AD4:
    ctx->pc = 0x80C63AD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63AD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63AD4: bc    4, 0, 0x80C63AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C63AE8;
        }
    }

label_80C63AD8:
    ctx->pc = 0x80C63AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63AD8: cmpwi   r3, 0
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

label_80C63ADC:
    ctx->pc = 0x80C63ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63ADCu)) return;
    // 80C63ADC: bc    12, 2, 0x80C64398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64398;
        }
    }

label_80C63AE0:
    ctx->pc = 0x80C63AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63AE0: bc    4, 0, 0x80C63AF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C63AF0;
        }
    }

label_80C63AE4:
    ctx->pc = 0x80C63AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63AE4: b       0x80C64398
    {
            goto label_80C64398;
    }

label_80C63AE8:
    ctx->pc = 0x80C63AE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63AE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63AE8: cmpwi   r3, 4
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

label_80C63AEC:
    ctx->pc = 0x80C63AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63AECu)) return;
    // 80C63AEC: b       0x80C64398
    {
            goto label_80C64398;
    }

label_80C63AF0:
    ctx->pc = 0x80C63AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C63AF0: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C63AF4:
    ctx->pc = 0x80C63AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63AF4u)) return;
    // 80C63AF4: addi    r3, r3, -28144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28144);

label_80C63AF8:
    ctx->pc = 0x80C63AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63AF8u)) return;
    // 80C63AF8: bl      0x8050AF58
    {
            ctx->lr = 0x80C63AFCu;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80C63AFC:
    ctx->pc = 0x80C63AFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63AFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63AFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C63B00:
    ctx->pc = 0x80C63B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B00u)) return;
    // 80C63B00: bl      0x80C64678
    {
            ctx->lr = 0x80C63B04u;
            goto label_80C64678;
    }

label_80C63B04:
    ctx->pc = 0x80C63B04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63B04: bl      0x8045DE7C
    {
            ctx->lr = 0x80C63B08u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C63B08:
    ctx->pc = 0x80C63B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63B08: bl      0x80460A60
    {
            ctx->lr = 0x80C63B0Cu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C63B0C:
    ctx->pc = 0x80C63B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63B0C: bl      0x80460A24
    {
            ctx->lr = 0x80C63B10u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C63B10:
    ctx->pc = 0x80C63B10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63B10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63B14:
    ctx->pc = 0x80C63B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B14u)) return;
    // 80C63B14: bl      0x8045EC10
    {
            ctx->lr = 0x80C63B18u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C63B18:
    ctx->pc = 0x80C63B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63B18: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_80C63B1C:
    ctx->pc = 0x80C63B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B1Cu)) return;
    // 80C63B1C: bl      0x80406090
    {
            ctx->lr = 0x80C63B20u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C63B20:
    ctx->pc = 0x80C63B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C63B20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C63B24:
    ctx->pc = 0x80C63B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B24u)) return;
    // 80C63B24: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C63B28:
    ctx->pc = 0x80C63B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B28u)) return;
    // 80C63B28: li      r5, 20025
    ctx->gpr[5] = (u32)(s32)(20025);

label_80C63B2C:
    ctx->pc = 0x80C63B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B2Cu)) return;
    // 80C63B2C: bl      0x8045C0F8
    {
            ctx->lr = 0x80C63B30u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C63B30:
    ctx->pc = 0x80C63B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80C63B30: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C63B34:
    ctx->pc = 0x80C63B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B34u)) return;
    // 80C63B34: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80C63B38:
    ctx->pc = 0x80C63B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B38u)) return;
    // 80C63B38: addi    r4, r4, 13404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13404);

label_80C63B3C:
    ctx->pc = 0x80C63B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B3Cu)) return;
    // 80C63B3C: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63B40:
    ctx->pc = 0x80C63B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B40u)) return;
    // 80C63B40: addi    r5, r5, -29072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29072);

label_80C63B44:
    ctx->pc = 0x80C63B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C63B44: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63B44u)) return;
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
label_80C63B48:
    ctx->pc = 0x80C63B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B48u)) return;
    // 80C63B48: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63B4C:
    ctx->pc = 0x80C63B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B4Cu)) return;
    // 80C63B4C: addi    r5, r5, -29068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29068);

label_80C63B50:
    ctx->pc = 0x80C63B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C63B50: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63B50u)) return;
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
label_80C63B54:
    ctx->pc = 0x80C63B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B54u)) return;
    // 80C63B54: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63B58:
    ctx->pc = 0x80C63B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B58u)) return;
    // 80C63B58: addi    r5, r5, -29064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29064);

label_80C63B5C:
    ctx->pc = 0x80C63B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C63B5C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63B5Cu)) return;
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
label_80C63B60:
    ctx->pc = 0x80C63B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B60u)) return;
    // 80C63B60: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C63B64:
    ctx->pc = 0x80C63B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B64u)) return;
    // 80C63B64: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C63B68:
    ctx->pc = 0x80C63B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B68u)) return;
    // 80C63B68: addi    r6, r6, -22788
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22788);

label_80C63B6C:
    ctx->pc = 0x80C63B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B6Cu)) return;
    // 80C63B6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C63B70:
    ctx->pc = 0x80C63B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B70u)) return;
    // 80C63B70: bl      0x8045ED84
    {
            ctx->lr = 0x80C63B74u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80C63B74:
    ctx->pc = 0x80C63B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63B74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C63B78:
    ctx->pc = 0x80C63B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B78u)) return;
    // 80C63B78: bl      0x8045F7C8
    {
            ctx->lr = 0x80C63B7Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C63B7C:
    ctx->pc = 0x80C63B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63B7C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C63B80:
    ctx->pc = 0x80C63B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B80u)) return;
    // 80C63B80: bl      0x8045F220
    {
            ctx->lr = 0x80C63B84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63B84:
    ctx->pc = 0x80C63B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C63B84: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63B88:
    ctx->pc = 0x80C63B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B88u)) return;
    // 80C63B88: addi    r4, r4, -29060
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29060);

label_80C63B8C:
    ctx->pc = 0x80C63B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C63B8C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63B8Cu)) return;
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
label_80C63B90:
    ctx->pc = 0x80C63B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B90u)) return;
    // 80C63B90: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63B94:
    ctx->pc = 0x80C63B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B94u)) return;
    // 80C63B94: addi    r4, r4, -29056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29056);

label_80C63B98:
    ctx->pc = 0x80C63B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63B98: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63B98u)) return;
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
label_80C63B9C:
    ctx->pc = 0x80C63B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63B9Cu)) return;
    // 80C63B9C: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63BA0:
    ctx->pc = 0x80C63BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BA0u)) return;
    // 80C63BA0: addi    r4, r4, -29052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29052);

label_80C63BA4:
    ctx->pc = 0x80C63BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63BA4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63BA4u)) return;
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
label_80C63BA8:
    ctx->pc = 0x80C63BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BA8u)) return;
    // 80C63BA8: bl      0x8045EF2C
    {
            ctx->lr = 0x80C63BACu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C63BAC:
    ctx->pc = 0x80C63BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63BAC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C63BB0:
    ctx->pc = 0x80C63BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BB0u)) return;
    // 80C63BB0: bl      0x8045F220
    {
            ctx->lr = 0x80C63BB4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63BB4:
    ctx->pc = 0x80C63BB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63BB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C63BB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C63BB8:
    ctx->pc = 0x80C63BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BB8u)) return;
    // 80C63BB8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C63BBC:
    ctx->pc = 0x80C63BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BBCu)) return;
    // 80C63BBC: addi    r5, r5, -15724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15724);

label_80C63BC0:
    ctx->pc = 0x80C63BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BC0u)) return;
    // 80C63BC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C63BC4:
    ctx->pc = 0x80C63BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BC4u)) return;
    // 80C63BC4: bl      0x8045EEA8
    {
            ctx->lr = 0x80C63BC8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C63BC8:
    ctx->pc = 0x80C63BC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63BC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63BC8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C63BCC:
    ctx->pc = 0x80C63BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BCCu)) return;
    // 80C63BCC: bl      0x8045F220
    {
            ctx->lr = 0x80C63BD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63BD0:
    ctx->pc = 0x80C63BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63BD0: bl      0x8045EB8C
    {
            ctx->lr = 0x80C63BD4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C63BD4:
    ctx->pc = 0x80C63BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63BD4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C63BD8:
    ctx->pc = 0x80C63BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BD8u)) return;
    // 80C63BD8: bl      0x8045F220
    {
            ctx->lr = 0x80C63BDCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63BDC:
    ctx->pc = 0x80C63BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C63BDC: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63BE0:
    ctx->pc = 0x80C63BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BE0u)) return;
    // 80C63BE0: addi    r4, r4, 3620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3620);

label_80C63BE4:
    ctx->pc = 0x80C63BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BE4u)) return;
    // 80C63BE4: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C63BE8:
    ctx->pc = 0x80C63BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BE8u)) return;
    // 80C63BE8: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C63BEC:
    ctx->pc = 0x80C63BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BECu)) return;
    // 80C63BEC: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C63BF0:
    ctx->pc = 0x80C63BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BF0u)) return;
    // 80C63BF0: addi    r6, r6, -29048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29048);

label_80C63BF4:
    ctx->pc = 0x80C63BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C63BF4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C63BF4u)) return;
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
label_80C63BF8:
    ctx->pc = 0x80C63BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BF8u)) return;
    // 80C63BF8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C63BFC:
    ctx->pc = 0x80C63BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63BFCu)) return;
    // 80C63BFC: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C63C00:
    ctx->pc = 0x80C63C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C00u)) return;
    // 80C63C00: bl      0x8045EBE4
    {
            ctx->lr = 0x80C63C04u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C63C04:
    ctx->pc = 0x80C63C04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63C04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63C04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63C08:
    ctx->pc = 0x80C63C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C08u)) return;
    // 80C63C08: bl      0x8045F220
    {
            ctx->lr = 0x80C63C0Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63C0C:
    ctx->pc = 0x80C63C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C63C0C: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63C10:
    ctx->pc = 0x80C63C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C10u)) return;
    // 80C63C10: addi    r4, r4, -29044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29044);

label_80C63C14:
    ctx->pc = 0x80C63C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C63C14: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63C14u)) return;
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
label_80C63C18:
    ctx->pc = 0x80C63C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C18u)) return;
    // 80C63C18: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63C1C:
    ctx->pc = 0x80C63C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C1Cu)) return;
    // 80C63C1C: addi    r4, r4, -29056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29056);

label_80C63C20:
    ctx->pc = 0x80C63C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63C20: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63C20u)) return;
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
label_80C63C24:
    ctx->pc = 0x80C63C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C24u)) return;
    // 80C63C24: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63C28:
    ctx->pc = 0x80C63C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C28u)) return;
    // 80C63C28: addi    r4, r4, -29040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29040);

label_80C63C2C:
    ctx->pc = 0x80C63C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63C2C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63C2Cu)) return;
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
label_80C63C30:
    ctx->pc = 0x80C63C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C30u)) return;
    // 80C63C30: bl      0x8045EF2C
    {
            ctx->lr = 0x80C63C34u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C63C34:
    ctx->pc = 0x80C63C34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63C34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63C34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63C38:
    ctx->pc = 0x80C63C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C38u)) return;
    // 80C63C38: bl      0x8045F220
    {
            ctx->lr = 0x80C63C3Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63C3C:
    ctx->pc = 0x80C63C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C63C3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C63C40:
    ctx->pc = 0x80C63C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C40u)) return;
    // 80C63C40: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C63C44:
    ctx->pc = 0x80C63C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C44u)) return;
    // 80C63C44: addi    r5, r5, -8906
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8906);

label_80C63C48:
    ctx->pc = 0x80C63C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C48u)) return;
    // 80C63C48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C63C4C:
    ctx->pc = 0x80C63C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C4Cu)) return;
    // 80C63C4C: bl      0x8045EEA8
    {
            ctx->lr = 0x80C63C50u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C63C50:
    ctx->pc = 0x80C63C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C63C50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63C54:
    ctx->pc = 0x80C63C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C54u)) return;
    // 80C63C54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C63C58:
    ctx->pc = 0x80C63C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C58u)) return;
    // 80C63C58: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63C5C:
    ctx->pc = 0x80C63C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C5Cu)) return;
    // 80C63C5C: addi    r5, r5, -29036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29036);

label_80C63C60:
    ctx->pc = 0x80C63C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C63C60: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63C60u)) return;
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
label_80C63C64:
    ctx->pc = 0x80C63C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C64u)) return;
    // 80C63C64: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63C68:
    ctx->pc = 0x80C63C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C68u)) return;
    // 80C63C68: addi    r5, r5, -29032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29032);

label_80C63C6C:
    ctx->pc = 0x80C63C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63C6C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63C6Cu)) return;
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
label_80C63C70:
    ctx->pc = 0x80C63C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C70u)) return;
    // 80C63C70: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63C74:
    ctx->pc = 0x80C63C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C74u)) return;
    // 80C63C74: addi    r5, r5, -29028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29028);

label_80C63C78:
    ctx->pc = 0x80C63C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63C78: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63C78u)) return;
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
label_80C63C7C:
    ctx->pc = 0x80C63C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C7Cu)) return;
    // 80C63C7C: bl      0x8045C750
    {
            ctx->lr = 0x80C63C80u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C63C80:
    ctx->pc = 0x80C63C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C63C80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63C84:
    ctx->pc = 0x80C63C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C84u)) return;
    // 80C63C84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C63C88:
    ctx->pc = 0x80C63C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C88u)) return;
    // 80C63C88: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C63C8C:
    ctx->pc = 0x80C63C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C8Cu)) return;
    // 80C63C8C: addi    r5, r5, -631
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-631);

label_80C63C90:
    ctx->pc = 0x80C63C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C90u)) return;
    // 80C63C90: li      r6, 17920
    ctx->gpr[6] = (u32)(s32)(17920);

label_80C63C94:
    ctx->pc = 0x80C63C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C94u)) return;
    // 80C63C94: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C63C98:
    ctx->pc = 0x80C63C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63C98u)) return;
    // 80C63C98: bl      0x8045C7B4
    {
            ctx->lr = 0x80C63C9Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C63C9C:
    ctx->pc = 0x80C63C9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63C9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63C9C: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C63CA0:
    ctx->pc = 0x80C63CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CA0u)) return;
    // 80C63CA0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C63CA4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C63CA4:
    ctx->pc = 0x80C63CA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63CA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C63CA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63CA8:
    ctx->pc = 0x80C63CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CA8u)) return;
    // 80C63CA8: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80C63CAC:
    ctx->pc = 0x80C63CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CACu)) return;
    // 80C63CAC: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63CB0:
    ctx->pc = 0x80C63CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CB0u)) return;
    // 80C63CB0: addi    r5, r5, -29024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29024);

label_80C63CB4:
    ctx->pc = 0x80C63CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C63CB4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63CB4u)) return;
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
label_80C63CB8:
    ctx->pc = 0x80C63CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CB8u)) return;
    // 80C63CB8: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63CBC:
    ctx->pc = 0x80C63CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CBCu)) return;
    // 80C63CBC: addi    r5, r5, -29020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29020);

label_80C63CC0:
    ctx->pc = 0x80C63CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63CC0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63CC0u)) return;
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
label_80C63CC4:
    ctx->pc = 0x80C63CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CC4u)) return;
    // 80C63CC4: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63CC8:
    ctx->pc = 0x80C63CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CC8u)) return;
    // 80C63CC8: addi    r5, r5, -29016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29016);

label_80C63CCC:
    ctx->pc = 0x80C63CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63CCC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63CCCu)) return;
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
label_80C63CD0:
    ctx->pc = 0x80C63CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CD0u)) return;
    // 80C63CD0: bl      0x8045C750
    {
            ctx->lr = 0x80C63CD4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C63CD4:
    ctx->pc = 0x80C63CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C63CD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63CD8:
    ctx->pc = 0x80C63CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CD8u)) return;
    // 80C63CD8: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80C63CDC:
    ctx->pc = 0x80C63CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CDCu)) return;
    // 80C63CDC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C63CE0:
    ctx->pc = 0x80C63CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CE0u)) return;
    // 80C63CE0: addi    r5, r5, -631
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-631);

label_80C63CE4:
    ctx->pc = 0x80C63CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CE4u)) return;
    // 80C63CE4: li      r6, 17920
    ctx->gpr[6] = (u32)(s32)(17920);

label_80C63CE8:
    ctx->pc = 0x80C63CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CE8u)) return;
    // 80C63CE8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C63CEC:
    ctx->pc = 0x80C63CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CECu)) return;
    // 80C63CEC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C63CF0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C63CF0:
    ctx->pc = 0x80C63CF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63CF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63CF0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C63CF4:
    ctx->pc = 0x80C63CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CF4u)) return;
    // 80C63CF4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C63CF8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C63CF8:
    ctx->pc = 0x80C63CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C63CF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63CFC:
    ctx->pc = 0x80C63CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63CFCu)) return;
    // 80C63CFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C63D00:
    ctx->pc = 0x80C63D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D00u)) return;
    // 80C63D00: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63D04:
    ctx->pc = 0x80C63D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D04u)) return;
    // 80C63D04: addi    r5, r5, -29012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29012);

label_80C63D08:
    ctx->pc = 0x80C63D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C63D08: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63D08u)) return;
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
label_80C63D0C:
    ctx->pc = 0x80C63D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D0Cu)) return;
    // 80C63D0C: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63D10:
    ctx->pc = 0x80C63D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D10u)) return;
    // 80C63D10: addi    r5, r5, -29008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29008);

label_80C63D14:
    ctx->pc = 0x80C63D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63D14: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63D14u)) return;
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
label_80C63D18:
    ctx->pc = 0x80C63D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D18u)) return;
    // 80C63D18: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63D1C:
    ctx->pc = 0x80C63D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D1Cu)) return;
    // 80C63D1C: addi    r5, r5, -29004
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29004);

label_80C63D20:
    ctx->pc = 0x80C63D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63D20: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63D20u)) return;
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
label_80C63D24:
    ctx->pc = 0x80C63D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D24u)) return;
    // 80C63D24: bl      0x8045C750
    {
            ctx->lr = 0x80C63D28u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C63D28:
    ctx->pc = 0x80C63D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C63D28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63D2C:
    ctx->pc = 0x80C63D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D2Cu)) return;
    // 80C63D2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C63D30:
    ctx->pc = 0x80C63D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D30u)) return;
    // 80C63D30: li      r5, 649
    ctx->gpr[5] = (u32)(s32)(649);

label_80C63D34:
    ctx->pc = 0x80C63D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D34u)) return;
    // 80C63D34: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C63D38:
    ctx->pc = 0x80C63D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D38u)) return;
    // 80C63D38: addi    r6, r6, -8704
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8704);

label_80C63D3C:
    ctx->pc = 0x80C63D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D3Cu)) return;
    // 80C63D3C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C63D40:
    ctx->pc = 0x80C63D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D40u)) return;
    // 80C63D40: bl      0x8045C7B4
    {
            ctx->lr = 0x80C63D44u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C63D44:
    ctx->pc = 0x80C63D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C63D44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C63D48:
    ctx->pc = 0x80C63D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D48u)) return;
    // 80C63D48: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C63D4C:
    ctx->pc = 0x80C63D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D4Cu)) return;
    // 80C63D4C: li      r5, 12561
    ctx->gpr[5] = (u32)(s32)(12561);

label_80C63D50:
    ctx->pc = 0x80C63D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D50u)) return;
    // 80C63D50: bl      0x8045C0F8
    {
            ctx->lr = 0x80C63D54u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C63D54:
    ctx->pc = 0x80C63D54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63D54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63D54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63D58:
    ctx->pc = 0x80C63D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D58u)) return;
    // 80C63D58: bl      0x8045F220
    {
            ctx->lr = 0x80C63D5Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63D5C:
    ctx->pc = 0x80C63D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63D5C: bl      0x8045EB8C
    {
            ctx->lr = 0x80C63D60u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C63D60:
    ctx->pc = 0x80C63D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63D60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63D64:
    ctx->pc = 0x80C63D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D64u)) return;
    // 80C63D64: bl      0x8045F220
    {
            ctx->lr = 0x80C63D68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63D68:
    ctx->pc = 0x80C63D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C63D68: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63D6C:
    ctx->pc = 0x80C63D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D6Cu)) return;
    // 80C63D6C: addi    r4, r4, -15284
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15284);

label_80C63D70:
    ctx->pc = 0x80C63D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D70u)) return;
    // 80C63D70: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C63D74:
    ctx->pc = 0x80C63D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D74u)) return;
    // 80C63D74: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C63D78:
    ctx->pc = 0x80C63D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D78u)) return;
    // 80C63D78: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C63D7C:
    ctx->pc = 0x80C63D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D7Cu)) return;
    // 80C63D7C: addi    r6, r6, -29000
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29000);

label_80C63D80:
    ctx->pc = 0x80C63D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C63D80: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C63D80u)) return;
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
label_80C63D84:
    ctx->pc = 0x80C63D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D84u)) return;
    // 80C63D84: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C63D88:
    ctx->pc = 0x80C63D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D88u)) return;
    // 80C63D88: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C63D8C:
    ctx->pc = 0x80C63D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D8Cu)) return;
    // 80C63D8C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C63D90u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C63D90:
    ctx->pc = 0x80C63D90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63D90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63D90: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C63D94:
    ctx->pc = 0x80C63D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D94u)) return;
    // 80C63D94: bl      0x8045F7C8
    {
            ctx->lr = 0x80C63D98u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C63D98:
    ctx->pc = 0x80C63D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63D98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63D9C:
    ctx->pc = 0x80C63D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63D9Cu)) return;
    // 80C63D9C: bl      0x8045F220
    {
            ctx->lr = 0x80C63DA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63DA0:
    ctx->pc = 0x80C63DA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63DA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C63DA0: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63DA4:
    ctx->pc = 0x80C63DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DA4u)) return;
    // 80C63DA4: addi    r4, r4, -6384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6384);

label_80C63DA8:
    ctx->pc = 0x80C63DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DA8u)) return;
    // 80C63DA8: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C63DAC:
    ctx->pc = 0x80C63DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DACu)) return;
    // 80C63DAC: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C63DB0:
    ctx->pc = 0x80C63DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DB0u)) return;
    // 80C63DB0: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C63DB4:
    ctx->pc = 0x80C63DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DB4u)) return;
    // 80C63DB4: addi    r6, r6, -28996
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28996);

label_80C63DB8:
    ctx->pc = 0x80C63DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C63DB8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C63DB8u)) return;
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
label_80C63DBC:
    ctx->pc = 0x80C63DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DBCu)) return;
    // 80C63DBC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C63DC0:
    ctx->pc = 0x80C63DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DC0u)) return;
    // 80C63DC0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C63DC4:
    ctx->pc = 0x80C63DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DC4u)) return;
    // 80C63DC4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C63DC8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C63DC8:
    ctx->pc = 0x80C63DC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63DC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63DC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C63DCC:
    ctx->pc = 0x80C63DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DCCu)) return;
    // 80C63DCC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C63DD0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C63DD0:
    ctx->pc = 0x80C63DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63DD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63DD4:
    ctx->pc = 0x80C63DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DD4u)) return;
    // 80C63DD4: bl      0x8045F220
    {
            ctx->lr = 0x80C63DD8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63DD8:
    ctx->pc = 0x80C63DD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63DD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63DD8: bl      0x8045C034
    {
            ctx->lr = 0x80C63DDCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C63DDC:
    ctx->pc = 0x80C63DDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63DDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C63DDC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C63DE0:
    ctx->pc = 0x80C63DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DE0u)) return;
    // 80C63DE0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C63DE4:
    ctx->pc = 0x80C63DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C63DE4: lwz     r0, 0(r3)
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
label_80C63DE8:
    ctx->pc = 0x80C63DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DE8u)) return;
    // 80C63DE8: cmpwi   r0, 0
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

label_80C63DEC:
    ctx->pc = 0x80C63DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DECu)) return;
    // 80C63DEC: bc    4, 2, 0x80C63E04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C63E04;
        }
    }

label_80C63DF0:
    ctx->pc = 0x80C63DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63DF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63DF4:
    ctx->pc = 0x80C63DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DF4u)) return;
    // 80C63DF4: bl      0x8045F220
    {
            ctx->lr = 0x80C63DF8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63DF8:
    ctx->pc = 0x80C63DF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63DF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C63DF8: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63DFC:
    ctx->pc = 0x80C63DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63DFCu)) return;
    // 80C63DFC: addi    r4, r4, -28132
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28132);

label_80C63E00:
    ctx->pc = 0x80C63E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E00u)) return;
    // 80C63E00: bl      0x8045C060
    {
            ctx->lr = 0x80C63E04u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C63E04:
    ctx->pc = 0x80C63E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C63E04: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C63E08:
    ctx->pc = 0x80C63E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E08u)) return;
    // 80C63E08: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C63E0C:
    ctx->pc = 0x80C63E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C63E0C: lwz     r0, 0(r3)
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
label_80C63E10:
    ctx->pc = 0x80C63E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E10u)) return;
    // 80C63E10: cmpwi   r0, 1
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

label_80C63E14:
    ctx->pc = 0x80C63E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E14u)) return;
    // 80C63E14: bc    4, 2, 0x80C63E2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C63E2C;
        }
    }

label_80C63E18:
    ctx->pc = 0x80C63E18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63E18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63E18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63E1C:
    ctx->pc = 0x80C63E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E1Cu)) return;
    // 80C63E1C: bl      0x8045F220
    {
            ctx->lr = 0x80C63E20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63E20:
    ctx->pc = 0x80C63E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C63E20: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63E24:
    ctx->pc = 0x80C63E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E24u)) return;
    // 80C63E24: addi    r4, r4, -28128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28128);

label_80C63E28:
    ctx->pc = 0x80C63E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E28u)) return;
    // 80C63E28: bl      0x8045C060
    {
            ctx->lr = 0x80C63E2Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C63E2C:
    ctx->pc = 0x80C63E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63E2C: li      r3, 1167
    ctx->gpr[3] = (u32)(s32)(1167);

label_80C63E30:
    ctx->pc = 0x80C63E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E30u)) return;
    // 80C63E30: bl      0x8045BFA0
    {
            ctx->lr = 0x80C63E34u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C63E34:
    ctx->pc = 0x80C63E34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63E34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C63E34: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C63E38:
    ctx->pc = 0x80C63E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E38u)) return;
    // 80C63E38: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C63E3C:
    ctx->pc = 0x80C63E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E3Cu)) return;
    // 80C63E3C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C63E40:
    ctx->pc = 0x80C63E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C63E40: lwz     r0, 0(r4)
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
label_80C63E44:
    ctx->pc = 0x80C63E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E44u)) return;
    // 80C63E44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C63E48:
    ctx->pc = 0x80C63E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E48u)) return;
    // 80C63E48: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63E4C:
    ctx->pc = 0x80C63E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E4Cu)) return;
    // 80C63E4C: addi    r4, r4, -28188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28188);

label_80C63E50:
    ctx->pc = 0x80C63E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C63E50: lwzx    r4, r4, r0
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
label_80C63E54:
    ctx->pc = 0x80C63E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63E54: lwz     r4, 0(r4)
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
label_80C63E58:
    ctx->pc = 0x80C63E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E58u)) return;
    // 80C63E58: bl      0x8045F608
    {
            ctx->lr = 0x80C63E5Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C63E5C:
    ctx->pc = 0x80C63E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63E5C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C63E60:
    ctx->pc = 0x80C63E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E60u)) return;
    // 80C63E60: bl      0x8045F7C8
    {
            ctx->lr = 0x80C63E64u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C63E64:
    ctx->pc = 0x80C63E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63E64: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C63E68:
    ctx->pc = 0x80C63E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E68u)) return;
    // 80C63E68: bl      0x8045F220
    {
            ctx->lr = 0x80C63E6Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C63E6C:
    ctx->pc = 0x80C63E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C63E6C: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63E70:
    ctx->pc = 0x80C63E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E70u)) return;
    // 80C63E70: addi    r4, r4, -28992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28992);

label_80C63E74:
    ctx->pc = 0x80C63E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C63E74: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63E74u)) return;
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
label_80C63E78:
    ctx->pc = 0x80C63E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E78u)) return;
    // 80C63E78: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63E7C:
    ctx->pc = 0x80C63E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E7Cu)) return;
    // 80C63E7C: addi    r4, r4, -29056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29056);

label_80C63E80:
    ctx->pc = 0x80C63E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C63E80: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63E80u)) return;
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
label_80C63E84:
    ctx->pc = 0x80C63E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E84u)) return;
    // 80C63E84: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63E88:
    ctx->pc = 0x80C63E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E88u)) return;
    // 80C63E88: addi    r4, r4, -28988
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28988);

label_80C63E8C:
    ctx->pc = 0x80C63E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C63E8C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63E8Cu)) return;
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
label_80C63E90:
    ctx->pc = 0x80C63E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E90u)) return;
    // 80C63E90: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63E94:
    ctx->pc = 0x80C63E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E94u)) return;
    // 80C63E94: addi    r4, r4, -28984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28984);

label_80C63E98:
    ctx->pc = 0x80C63E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63E98: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63E98u)) return;
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
label_80C63E9C:
    ctx->pc = 0x80C63E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63E9Cu)) return;
    // 80C63E9C: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63EA0:
    ctx->pc = 0x80C63EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EA0u)) return;
    // 80C63EA0: addi    r4, r4, -28980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28980);

label_80C63EA4:
    ctx->pc = 0x80C63EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63EA4: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C63EA4u)) return;
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
label_80C63EA8:
    ctx->pc = 0x80C63EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EA8u)) return;
    // 80C63EA8: bl      0x8045E570
    {
            ctx->lr = 0x80C63EACu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C63EAC:
    ctx->pc = 0x80C63EACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63EACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C63EAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63EB0:
    ctx->pc = 0x80C63EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EB0u)) return;
    // 80C63EB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C63EB4:
    ctx->pc = 0x80C63EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EB4u)) return;
    // 80C63EB4: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63EB8:
    ctx->pc = 0x80C63EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EB8u)) return;
    // 80C63EB8: addi    r5, r5, -28976
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28976);

label_80C63EBC:
    ctx->pc = 0x80C63EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C63EBC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63EBCu)) return;
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
label_80C63EC0:
    ctx->pc = 0x80C63EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EC0u)) return;
    // 80C63EC0: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63EC4:
    ctx->pc = 0x80C63EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EC4u)) return;
    // 80C63EC4: addi    r5, r5, -28972
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28972);

label_80C63EC8:
    ctx->pc = 0x80C63EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63EC8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63EC8u)) return;
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
label_80C63ECC:
    ctx->pc = 0x80C63ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63ECCu)) return;
    // 80C63ECC: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63ED0:
    ctx->pc = 0x80C63ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63ED0u)) return;
    // 80C63ED0: addi    r5, r5, -28968
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28968);

label_80C63ED4:
    ctx->pc = 0x80C63ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63ED4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63ED4u)) return;
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
label_80C63ED8:
    ctx->pc = 0x80C63ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63ED8u)) return;
    // 80C63ED8: bl      0x8045C750
    {
            ctx->lr = 0x80C63EDCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C63EDC:
    ctx->pc = 0x80C63EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C63EDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63EE0:
    ctx->pc = 0x80C63EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EE0u)) return;
    // 80C63EE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C63EE4:
    ctx->pc = 0x80C63EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EE4u)) return;
    // 80C63EE4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C63EE8:
    ctx->pc = 0x80C63EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EE8u)) return;
    // 80C63EE8: addi    r5, r5, -2285
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2285);

label_80C63EEC:
    ctx->pc = 0x80C63EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EECu)) return;
    // 80C63EEC: li      r6, 24090
    ctx->gpr[6] = (u32)(s32)(24090);

label_80C63EF0:
    ctx->pc = 0x80C63EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EF0u)) return;
    // 80C63EF0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C63EF4:
    ctx->pc = 0x80C63EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EF4u)) return;
    // 80C63EF4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C63EF8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C63EF8:
    ctx->pc = 0x80C63EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C63EF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63EFC:
    ctx->pc = 0x80C63EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63EFCu)) return;
    // 80C63EFC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C63F00:
    ctx->pc = 0x80C63F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F00u)) return;
    // 80C63F00: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63F04:
    ctx->pc = 0x80C63F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F04u)) return;
    // 80C63F04: addi    r5, r5, -28964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28964);

label_80C63F08:
    ctx->pc = 0x80C63F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C63F08: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63F08u)) return;
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
label_80C63F0C:
    ctx->pc = 0x80C63F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F0Cu)) return;
    // 80C63F0C: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63F10:
    ctx->pc = 0x80C63F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F10u)) return;
    // 80C63F10: addi    r5, r5, -28960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28960);

label_80C63F14:
    ctx->pc = 0x80C63F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C63F14: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63F14u)) return;
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
label_80C63F18:
    ctx->pc = 0x80C63F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F18u)) return;
    // 80C63F18: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63F1C:
    ctx->pc = 0x80C63F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F1Cu)) return;
    // 80C63F1C: addi    r5, r5, -28956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28956);

label_80C63F20:
    ctx->pc = 0x80C63F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63F20: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63F20u)) return;
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
label_80C63F24:
    ctx->pc = 0x80C63F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F24u)) return;
    // 80C63F24: bl      0x8045C750
    {
            ctx->lr = 0x80C63F28u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C63F28:
    ctx->pc = 0x80C63F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C63F28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63F2C:
    ctx->pc = 0x80C63F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F2Cu)) return;
    // 80C63F2C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C63F30:
    ctx->pc = 0x80C63F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F30u)) return;
    // 80C63F30: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C63F34:
    ctx->pc = 0x80C63F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F34u)) return;
    // 80C63F34: addi    r5, r5, -2658
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2658);

label_80C63F38:
    ctx->pc = 0x80C63F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F38u)) return;
    // 80C63F38: li      r6, 19943
    ctx->gpr[6] = (u32)(s32)(19943);

label_80C63F3C:
    ctx->pc = 0x80C63F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F3Cu)) return;
    // 80C63F3C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C63F40:
    ctx->pc = 0x80C63F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F40u)) return;
    // 80C63F40: bl      0x8045C7B4
    {
            ctx->lr = 0x80C63F44u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C63F44:
    ctx->pc = 0x80C63F44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63F44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C63F44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63F48:
    ctx->pc = 0x80C63F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F48u)) return;
    // 80C63F48: li      r4, 1335
    ctx->gpr[4] = (u32)(s32)(1335);

label_80C63F4C:
    ctx->pc = 0x80C63F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F4Cu)) return;
    // 80C63F4C: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80C63F50:
    ctx->pc = 0x80C63F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F50u)) return;
    // 80C63F50: bl      0x80C64780
    {
            ctx->lr = 0x80C63F54u;
            goto label_80C64780;
    }

label_80C63F54:
    ctx->pc = 0x80C63F54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63F54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    // 80C63F54: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C63F58:
    ctx->pc = 0x80C63F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F58u)) return;
    // 80C63F58: addi    r3, r3, -28952
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28952);

label_80C63F5C:
    ctx->pc = 0x80C63F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C63F5C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C63F5Cu)) return;
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
label_80C63F60:
    ctx->pc = 0x80C63F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F60u)) return;
    // 80C63F60: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C63F64:
    ctx->pc = 0x80C63F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F64u)) return;
    // 80C63F64: addi    r3, r3, -28948
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28948);

label_80C63F68:
    ctx->pc = 0x80C63F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C63F68: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C63F68u)) return;
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
label_80C63F6C:
    ctx->pc = 0x80C63F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F6Cu)) return;
    // 80C63F6C: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C63F70:
    ctx->pc = 0x80C63F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F70u)) return;
    // 80C63F70: addi    r3, r3, -28944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28944);

label_80C63F74:
    ctx->pc = 0x80C63F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C63F74: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C63F74u)) return;
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
label_80C63F78:
    ctx->pc = 0x80C63F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F78u)) return;
    // 80C63F78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C63F7C:
    ctx->pc = 0x80C63F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F7Cu)) return;
    // 80C63F7C: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C63F80:
    ctx->pc = 0x80C63F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F80u)) return;
    // 80C63F80: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63F84:
    ctx->pc = 0x80C63F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F84u)) return;
    // 80C63F84: addi    r5, r5, -28940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28940);

label_80C63F88:
    ctx->pc = 0x80C63F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C63F88: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63F88u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80C63F8C:
    ctx->pc = 0x80C63F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F8Cu)) return;
    // 80C63F8C: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C63F90:
    ctx->pc = 0x80C63F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F90u)) return;
    // 80C63F90: addi    r5, r5, -28936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28936);

label_80C63F94:
    ctx->pc = 0x80C63F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C63F94: lfs     f5, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C63F94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80C63F98:
    ctx->pc = 0x80C63F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F98u)) return;
    // 80C63F98: lis     r5, -19200
    ctx->gpr[5] = ((u32)(s32)(-19200) << 16);

label_80C63F9C:
    ctx->pc = 0x80C63F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63F9Cu)) return;
    // 80C63F9C: addi    r5, r5, -111
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-111);

label_80C63FA0:
    ctx->pc = 0x80C63FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FA0u)) return;
    // 80C63FA0: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_80C63FA4:
    ctx->pc = 0x80C63FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FA4u)) return;
    // 80C63FA4: addi    r6, r6, -206
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-206);

label_80C63FA8:
    ctx->pc = 0x80C63FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FA8u)) return;
    // 80C63FA8: bl      0x80C64A08
    {
            ctx->lr = 0x80C63FACu;
            goto label_80C64A08;
    }

label_80C63FAC:
    ctx->pc = 0x80C63FACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63FACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63FAC: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C63FB0:
    ctx->pc = 0x80C63FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FB0u)) return;
    // 80C63FB0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C63FB4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C63FB4:
    ctx->pc = 0x80C63FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C63FB4: bl      0x80C64B54
    {
            ctx->lr = 0x80C63FB8u;
            goto label_80C64B54;
    }

label_80C63FB8:
    ctx->pc = 0x80C63FB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63FB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63FB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63FBC:
    ctx->pc = 0x80C63FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FBCu)) return;
    // 80C63FBC: bl      0x80C647F0
    {
            ctx->lr = 0x80C63FC0u;
            goto label_80C647F0;
    }

label_80C63FC0:
    ctx->pc = 0x80C63FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63FC0: li      r3, 1168
    ctx->gpr[3] = (u32)(s32)(1168);

label_80C63FC4:
    ctx->pc = 0x80C63FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FC4u)) return;
    // 80C63FC4: bl      0x8045BFA0
    {
            ctx->lr = 0x80C63FC8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C63FC8:
    ctx->pc = 0x80C63FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C63FC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C63FCC:
    ctx->pc = 0x80C63FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FCCu)) return;
    // 80C63FCC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C63FD0:
    ctx->pc = 0x80C63FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FD0u)) return;
    // 80C63FD0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C63FD4:
    ctx->pc = 0x80C63FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C63FD4: lwz     r0, 0(r4)
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
label_80C63FD8:
    ctx->pc = 0x80C63FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FD8u)) return;
    // 80C63FD8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C63FDC:
    ctx->pc = 0x80C63FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FDCu)) return;
    // 80C63FDC: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C63FE0:
    ctx->pc = 0x80C63FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FE0u)) return;
    // 80C63FE0: addi    r4, r4, -28188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28188);

label_80C63FE4:
    ctx->pc = 0x80C63FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C63FE4: lwzx    r4, r4, r0
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
label_80C63FE8:
    ctx->pc = 0x80C63FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C63FE8: lwz     r4, 4(r4)
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
label_80C63FEC:
    ctx->pc = 0x80C63FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FECu)) return;
    // 80C63FEC: bl      0x8045F608
    {
            ctx->lr = 0x80C63FF0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C63FF0:
    ctx->pc = 0x80C63FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63FF0: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80C63FF4:
    ctx->pc = 0x80C63FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FF4u)) return;
    // 80C63FF4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C63FF8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C63FF8:
    ctx->pc = 0x80C63FF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C63FF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C63FF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C63FFC:
    ctx->pc = 0x80C63FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C63FFCu)) return;
    // 80C63FFC: bl      0x8045F220
    {
            ctx->lr = 0x80C64000u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C64000:
    ctx->pc = 0x80C64000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64000: bl      0x8045C034
    {
            ctx->lr = 0x80C64004u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C64004:
    ctx->pc = 0x80C64004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C64004: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C64008:
    ctx->pc = 0x80C64008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64008u)) return;
    // 80C64008: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C6400C:
    ctx->pc = 0x80C6400Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6400Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6400C: lwz     r0, 0(r3)
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
label_80C64010:
    ctx->pc = 0x80C64010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64010u)) return;
    // 80C64010: cmpwi   r0, 0
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

label_80C64014:
    ctx->pc = 0x80C64014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64014u)) return;
    // 80C64014: bc    4, 2, 0x80C6402C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6402C;
        }
    }

label_80C64018:
    ctx->pc = 0x80C64018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64018: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6401C:
    ctx->pc = 0x80C6401Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6401Cu)) return;
    // 80C6401C: bl      0x8045F220
    {
            ctx->lr = 0x80C64020u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C64020:
    ctx->pc = 0x80C64020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C64020: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64024:
    ctx->pc = 0x80C64024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64024u)) return;
    // 80C64024: addi    r4, r4, -28132
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28132);

label_80C64028:
    ctx->pc = 0x80C64028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64028u)) return;
    // 80C64028: bl      0x8045C060
    {
            ctx->lr = 0x80C6402Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C6402C:
    ctx->pc = 0x80C6402Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6402Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C6402C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C64030:
    ctx->pc = 0x80C64030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64030u)) return;
    // 80C64030: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C64034:
    ctx->pc = 0x80C64034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64034: lwz     r0, 0(r3)
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
label_80C64038:
    ctx->pc = 0x80C64038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64038u)) return;
    // 80C64038: cmpwi   r0, 1
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

label_80C6403C:
    ctx->pc = 0x80C6403Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6403Cu)) return;
    // 80C6403C: bc    4, 2, 0x80C64054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C64054;
        }
    }

label_80C64040:
    ctx->pc = 0x80C64040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64040: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64044:
    ctx->pc = 0x80C64044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64044u)) return;
    // 80C64044: bl      0x8045F220
    {
            ctx->lr = 0x80C64048u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C64048:
    ctx->pc = 0x80C64048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C64048: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C6404C:
    ctx->pc = 0x80C6404Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6404Cu)) return;
    // 80C6404C: addi    r4, r4, -28124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28124);

label_80C64050:
    ctx->pc = 0x80C64050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64050u)) return;
    // 80C64050: bl      0x8045C060
    {
            ctx->lr = 0x80C64054u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C64054:
    ctx->pc = 0x80C64054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64054: li      r3, 1169
    ctx->gpr[3] = (u32)(s32)(1169);

label_80C64058:
    ctx->pc = 0x80C64058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64058u)) return;
    // 80C64058: bl      0x8045BFA0
    {
            ctx->lr = 0x80C6405Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C6405C:
    ctx->pc = 0x80C6405Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6405Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C6405C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C64060:
    ctx->pc = 0x80C64060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64060u)) return;
    // 80C64060: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C64064:
    ctx->pc = 0x80C64064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64064u)) return;
    // 80C64064: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C64068:
    ctx->pc = 0x80C64068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64068: lwz     r0, 0(r4)
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
label_80C6406C:
    ctx->pc = 0x80C6406Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6406Cu)) return;
    // 80C6406C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C64070:
    ctx->pc = 0x80C64070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64070u)) return;
    // 80C64070: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64074:
    ctx->pc = 0x80C64074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64074u)) return;
    // 80C64074: addi    r4, r4, -28188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28188);

label_80C64078:
    ctx->pc = 0x80C64078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64078: lwzx    r4, r4, r0
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
label_80C6407C:
    ctx->pc = 0x80C6407Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6407Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6407C: lwz     r4, 8(r4)
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
label_80C64080:
    ctx->pc = 0x80C64080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64080u)) return;
    // 80C64080: bl      0x8045F608
    {
            ctx->lr = 0x80C64084u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C64084:
    ctx->pc = 0x80C64084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C64084: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64088:
    ctx->pc = 0x80C64088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64088u)) return;
    // 80C64088: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6408C:
    ctx->pc = 0x80C6408Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6408Cu)) return;
    // 80C6408C: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C64090:
    ctx->pc = 0x80C64090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64090u)) return;
    // 80C64090: addi    r5, r5, -28932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28932);

label_80C64094:
    ctx->pc = 0x80C64094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64094: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64094u)) return;
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
label_80C64098:
    ctx->pc = 0x80C64098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64098u)) return;
    // 80C64098: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C6409C:
    ctx->pc = 0x80C6409Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6409Cu)) return;
    // 80C6409C: addi    r5, r5, -28928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28928);

label_80C640A0:
    ctx->pc = 0x80C640A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C640A0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C640A0u)) return;
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
label_80C640A4:
    ctx->pc = 0x80C640A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640A4u)) return;
    // 80C640A4: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C640A8:
    ctx->pc = 0x80C640A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640A8u)) return;
    // 80C640A8: addi    r5, r5, -28924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28924);

label_80C640AC:
    ctx->pc = 0x80C640ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C640AC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C640ACu)) return;
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
label_80C640B0:
    ctx->pc = 0x80C640B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640B0u)) return;
    // 80C640B0: bl      0x8045C750
    {
            ctx->lr = 0x80C640B4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C640B4:
    ctx->pc = 0x80C640B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C640B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C640B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C640B8:
    ctx->pc = 0x80C640B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640B8u)) return;
    // 80C640B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C640BC:
    ctx->pc = 0x80C640BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640BCu)) return;
    // 80C640BC: li      r5, 531
    ctx->gpr[5] = (u32)(s32)(531);

label_80C640C0:
    ctx->pc = 0x80C640C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640C0u)) return;
    // 80C640C0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C640C4:
    ctx->pc = 0x80C640C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640C4u)) return;
    // 80C640C4: addi    r6, r6, -7910
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7910);

label_80C640C8:
    ctx->pc = 0x80C640C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640C8u)) return;
    // 80C640C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C640CC:
    ctx->pc = 0x80C640CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640CCu)) return;
    // 80C640CC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C640D0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C640D0:
    ctx->pc = 0x80C640D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C640D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C640D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C640D4:
    ctx->pc = 0x80C640D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640D4u)) return;
    // 80C640D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C640D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C640D8:
    ctx->pc = 0x80C640D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C640D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C640D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C640DC:
    ctx->pc = 0x80C640DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640DCu)) return;
    // 80C640DC: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C640E0:
    ctx->pc = 0x80C640E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640E0u)) return;
    // 80C640E0: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C640E4:
    ctx->pc = 0x80C640E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640E4u)) return;
    // 80C640E4: addi    r5, r5, -28920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28920);

label_80C640E8:
    ctx->pc = 0x80C640E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C640E8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C640E8u)) return;
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
label_80C640EC:
    ctx->pc = 0x80C640ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640ECu)) return;
    // 80C640EC: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C640F0:
    ctx->pc = 0x80C640F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640F0u)) return;
    // 80C640F0: addi    r5, r5, -28916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28916);

label_80C640F4:
    ctx->pc = 0x80C640F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C640F4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C640F4u)) return;
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
label_80C640F8:
    ctx->pc = 0x80C640F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640F8u)) return;
    // 80C640F8: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C640FC:
    ctx->pc = 0x80C640FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C640FCu)) return;
    // 80C640FC: addi    r5, r5, -28912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28912);

label_80C64100:
    ctx->pc = 0x80C64100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64100: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64100u)) return;
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
label_80C64104:
    ctx->pc = 0x80C64104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64104u)) return;
    // 80C64104: bl      0x8045C750
    {
            ctx->lr = 0x80C64108u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C64108:
    ctx->pc = 0x80C64108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C64108: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6410C:
    ctx->pc = 0x80C6410Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6410Cu)) return;
    // 80C6410C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C64110:
    ctx->pc = 0x80C64110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64110u)) return;
    // 80C64110: li      r5, 531
    ctx->gpr[5] = (u32)(s32)(531);

label_80C64114:
    ctx->pc = 0x80C64114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64114u)) return;
    // 80C64114: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C64118:
    ctx->pc = 0x80C64118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64118u)) return;
    // 80C64118: addi    r6, r6, -7910
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7910);

label_80C6411C:
    ctx->pc = 0x80C6411Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6411Cu)) return;
    // 80C6411C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C64120:
    ctx->pc = 0x80C64120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64120u)) return;
    // 80C64120: bl      0x8045C7B4
    {
            ctx->lr = 0x80C64124u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C64124:
    ctx->pc = 0x80C64124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64124: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C64128:
    ctx->pc = 0x80C64128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64128u)) return;
    // 80C64128: bl      0x8045F7C8
    {
            ctx->lr = 0x80C6412Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C6412C:
    ctx->pc = 0x80C6412Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6412Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C6412C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64130:
    ctx->pc = 0x80C64130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64130u)) return;
    // 80C64130: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C64134:
    ctx->pc = 0x80C64134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64134u)) return;
    // 80C64134: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C64138:
    ctx->pc = 0x80C64138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64138u)) return;
    // 80C64138: addi    r5, r5, -28908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28908);

label_80C6413C:
    ctx->pc = 0x80C6413Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6413Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6413C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6413Cu)) return;
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
label_80C64140:
    ctx->pc = 0x80C64140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64140u)) return;
    // 80C64140: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C64144:
    ctx->pc = 0x80C64144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64144u)) return;
    // 80C64144: addi    r5, r5, -28904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28904);

label_80C64148:
    ctx->pc = 0x80C64148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64148: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64148u)) return;
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
label_80C6414C:
    ctx->pc = 0x80C6414Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6414Cu)) return;
    // 80C6414C: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C64150:
    ctx->pc = 0x80C64150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64150u)) return;
    // 80C64150: addi    r5, r5, -28900
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28900);

label_80C64154:
    ctx->pc = 0x80C64154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64154: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64154u)) return;
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
label_80C64158:
    ctx->pc = 0x80C64158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64158u)) return;
    // 80C64158: bl      0x8045C750
    {
            ctx->lr = 0x80C6415Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C6415C:
    ctx->pc = 0x80C6415Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6415Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6415C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64160:
    ctx->pc = 0x80C64160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64160u)) return;
    // 80C64160: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C64164:
    ctx->pc = 0x80C64164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64164u)) return;
    // 80C64164: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C64168:
    ctx->pc = 0x80C64168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64168u)) return;
    // 80C64168: addi    r5, r5, -749
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-749);

label_80C6416C:
    ctx->pc = 0x80C6416Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6416Cu)) return;
    // 80C6416C: li      r6, 25626
    ctx->gpr[6] = (u32)(s32)(25626);

label_80C64170:
    ctx->pc = 0x80C64170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64170u)) return;
    // 80C64170: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C64174:
    ctx->pc = 0x80C64174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64174u)) return;
    // 80C64174: bl      0x8045C7B4
    {
            ctx->lr = 0x80C64178u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C64178:
    ctx->pc = 0x80C64178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64178: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80C6417C:
    ctx->pc = 0x80C6417Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6417Cu)) return;
    // 80C6417C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C64180u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C64180:
    ctx->pc = 0x80C64180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64180: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64184:
    ctx->pc = 0x80C64184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64184u)) return;
    // 80C64184: bl      0x8045F220
    {
            ctx->lr = 0x80C64188u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C64188:
    ctx->pc = 0x80C64188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64188: bl      0x8045C034
    {
            ctx->lr = 0x80C6418Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C6418C:
    ctx->pc = 0x80C6418Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6418Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6418C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64190:
    ctx->pc = 0x80C64190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64190u)) return;
    // 80C64190: bl      0x8045F220
    {
            ctx->lr = 0x80C64194u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C64194:
    ctx->pc = 0x80C64194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C64194: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64198:
    ctx->pc = 0x80C64198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64198u)) return;
    // 80C64198: addi    r4, r4, -28128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28128);

label_80C6419C:
    ctx->pc = 0x80C6419Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6419Cu)) return;
    // 80C6419C: bl      0x8045C060
    {
            ctx->lr = 0x80C641A0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C641A0:
    ctx->pc = 0x80C641A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C641A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C641A0: li      r3, 1170
    ctx->gpr[3] = (u32)(s32)(1170);

label_80C641A4:
    ctx->pc = 0x80C641A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641A4u)) return;
    // 80C641A4: bl      0x8045BFA0
    {
            ctx->lr = 0x80C641A8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C641A8:
    ctx->pc = 0x80C641A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C641A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C641A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C641AC:
    ctx->pc = 0x80C641ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641ACu)) return;
    // 80C641AC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C641B0:
    ctx->pc = 0x80C641B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641B0u)) return;
    // 80C641B0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C641B4:
    ctx->pc = 0x80C641B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C641B4: lwz     r0, 0(r4)
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
label_80C641B8:
    ctx->pc = 0x80C641B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641B8u)) return;
    // 80C641B8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C641BC:
    ctx->pc = 0x80C641BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641BCu)) return;
    // 80C641BC: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C641C0:
    ctx->pc = 0x80C641C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641C0u)) return;
    // 80C641C0: addi    r4, r4, -28188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28188);

label_80C641C4:
    ctx->pc = 0x80C641C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C641C4: lwzx    r4, r4, r0
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
label_80C641C8:
    ctx->pc = 0x80C641C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C641C8: lwz     r4, 12(r4)
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
label_80C641CC:
    ctx->pc = 0x80C641CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641CCu)) return;
    // 80C641CC: bl      0x8045F608
    {
            ctx->lr = 0x80C641D0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C641D0:
    ctx->pc = 0x80C641D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C641D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C641D0: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C641D4:
    ctx->pc = 0x80C641D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641D4u)) return;
    // 80C641D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C641D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C641D8:
    ctx->pc = 0x80C641D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C641D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C641D8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C641DC:
    ctx->pc = 0x80C641DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641DCu)) return;
    // 80C641DC: bl      0x8045ED54
    {
            ctx->lr = 0x80C641E0u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C641E0:
    ctx->pc = 0x80C641E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C641E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C641E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C641E4:
    ctx->pc = 0x80C641E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641E4u)) return;
    // 80C641E4: bl      0x8045F220
    {
            ctx->lr = 0x80C641E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C641E8:
    ctx->pc = 0x80C641E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C641E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C641E8: bl      0x8045EB8C
    {
            ctx->lr = 0x80C641ECu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C641EC:
    ctx->pc = 0x80C641ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C641ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C641EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C641F0:
    ctx->pc = 0x80C641F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641F0u)) return;
    // 80C641F0: bl      0x8045F220
    {
            ctx->lr = 0x80C641F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C641F4:
    ctx->pc = 0x80C641F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C641F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C641F4: lis     r4, -28570
    ctx->gpr[4] = ((u32)(s32)(-28570) << 16);

label_80C641F8:
    ctx->pc = 0x80C641F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641F8u)) return;
    // 80C641F8: addi    r4, r4, -18088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18088);

label_80C641FC:
    ctx->pc = 0x80C641FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C641FCu)) return;
    // 80C641FC: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C64200:
    ctx->pc = 0x80C64200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64200u)) return;
    // 80C64200: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C64204:
    ctx->pc = 0x80C64204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64204u)) return;
    // 80C64204: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C64208:
    ctx->pc = 0x80C64208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64208u)) return;
    // 80C64208: addi    r6, r6, -28896
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28896);

label_80C6420C:
    ctx->pc = 0x80C6420Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6420Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6420C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C6420Cu)) return;
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
label_80C64210:
    ctx->pc = 0x80C64210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64210u)) return;
    // 80C64210: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C64214:
    ctx->pc = 0x80C64214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64214u)) return;
    // 80C64214: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C64218:
    ctx->pc = 0x80C64218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64218u)) return;
    // 80C64218: bl      0x8045EBE4
    {
            ctx->lr = 0x80C6421Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C6421C:
    ctx->pc = 0x80C6421Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6421Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6421C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C64220:
    ctx->pc = 0x80C64220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64220u)) return;
    // 80C64220: bl      0x8045F7C8
    {
            ctx->lr = 0x80C64224u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C64224:
    ctx->pc = 0x80C64224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64224: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64228:
    ctx->pc = 0x80C64228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64228u)) return;
    // 80C64228: bl      0x8045F220
    {
            ctx->lr = 0x80C6422Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C6422C:
    ctx->pc = 0x80C6422Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6422Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C6422C: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64230:
    ctx->pc = 0x80C64230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64230u)) return;
    // 80C64230: addi    r4, r4, -28892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28892);

label_80C64234:
    ctx->pc = 0x80C64234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C64234: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C64234u)) return;
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
label_80C64238:
    ctx->pc = 0x80C64238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64238u)) return;
    // 80C64238: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C6423C:
    ctx->pc = 0x80C6423Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6423Cu)) return;
    // 80C6423C: addi    r4, r4, -29056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29056);

label_80C64240:
    ctx->pc = 0x80C64240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C64240: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C64240u)) return;
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
label_80C64244:
    ctx->pc = 0x80C64244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64244u)) return;
    // 80C64244: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64248:
    ctx->pc = 0x80C64248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64248u)) return;
    // 80C64248: addi    r4, r4, -28888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28888);

label_80C6424C:
    ctx->pc = 0x80C6424Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6424Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6424C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C6424Cu)) return;
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
label_80C64250:
    ctx->pc = 0x80C64250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64250u)) return;
    // 80C64250: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64254:
    ctx->pc = 0x80C64254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64254u)) return;
    // 80C64254: addi    r4, r4, -28884
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28884);

label_80C64258:
    ctx->pc = 0x80C64258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64258: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C64258u)) return;
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
label_80C6425C:
    ctx->pc = 0x80C6425Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6425Cu)) return;
    // 80C6425C: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64260:
    ctx->pc = 0x80C64260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64260u)) return;
    // 80C64260: addi    r4, r4, -28980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28980);

label_80C64264:
    ctx->pc = 0x80C64264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64264: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C64264u)) return;
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
label_80C64268:
    ctx->pc = 0x80C64268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64268u)) return;
    // 80C64268: bl      0x8045E570
    {
            ctx->lr = 0x80C6426Cu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C6426C:
    ctx->pc = 0x80C6426Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6426Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C6426C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64270:
    ctx->pc = 0x80C64270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64270u)) return;
    // 80C64270: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C64274:
    ctx->pc = 0x80C64274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64274u)) return;
    // 80C64274: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C64278:
    ctx->pc = 0x80C64278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64278u)) return;
    // 80C64278: addi    r5, r5, -28932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28932);

label_80C6427C:
    ctx->pc = 0x80C6427Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6427Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6427C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6427Cu)) return;
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
label_80C64280:
    ctx->pc = 0x80C64280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64280u)) return;
    // 80C64280: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C64284:
    ctx->pc = 0x80C64284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64284u)) return;
    // 80C64284: addi    r5, r5, -28928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28928);

label_80C64288:
    ctx->pc = 0x80C64288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64288: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64288u)) return;
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
label_80C6428C:
    ctx->pc = 0x80C6428Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6428Cu)) return;
    // 80C6428C: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C64290:
    ctx->pc = 0x80C64290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64290u)) return;
    // 80C64290: addi    r5, r5, -28924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28924);

label_80C64294:
    ctx->pc = 0x80C64294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64294: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64294u)) return;
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
label_80C64298:
    ctx->pc = 0x80C64298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64298u)) return;
    // 80C64298: bl      0x8045C750
    {
            ctx->lr = 0x80C6429Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C6429C:
    ctx->pc = 0x80C6429Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6429Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6429C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C642A0:
    ctx->pc = 0x80C642A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642A0u)) return;
    // 80C642A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C642A4:
    ctx->pc = 0x80C642A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642A4u)) return;
    // 80C642A4: li      r5, 531
    ctx->gpr[5] = (u32)(s32)(531);

label_80C642A8:
    ctx->pc = 0x80C642A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642A8u)) return;
    // 80C642A8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C642AC:
    ctx->pc = 0x80C642ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642ACu)) return;
    // 80C642AC: addi    r6, r6, -7910
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7910);

label_80C642B0:
    ctx->pc = 0x80C642B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642B0u)) return;
    // 80C642B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C642B4:
    ctx->pc = 0x80C642B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642B4u)) return;
    // 80C642B4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C642B8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C642B8:
    ctx->pc = 0x80C642B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C642B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C642B8: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80C642BC:
    ctx->pc = 0x80C642BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642BCu)) return;
    // 80C642BC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C642C0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C642C0:
    ctx->pc = 0x80C642C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C642C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C642C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C642C4:
    ctx->pc = 0x80C642C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642C4u)) return;
    // 80C642C4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80C642C8:
    ctx->pc = 0x80C642C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642C8u)) return;
    // 80C642C8: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C642CC:
    ctx->pc = 0x80C642CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642CCu)) return;
    // 80C642CC: addi    r5, r5, -29036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29036);

label_80C642D0:
    ctx->pc = 0x80C642D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C642D0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C642D0u)) return;
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
label_80C642D4:
    ctx->pc = 0x80C642D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642D4u)) return;
    // 80C642D4: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C642D8:
    ctx->pc = 0x80C642D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642D8u)) return;
    // 80C642D8: addi    r5, r5, -29032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29032);

label_80C642DC:
    ctx->pc = 0x80C642DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C642DC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C642DCu)) return;
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
label_80C642E0:
    ctx->pc = 0x80C642E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642E0u)) return;
    // 80C642E0: lis     r5, -27429
    ctx->gpr[5] = ((u32)(s32)(-27429) << 16);

label_80C642E4:
    ctx->pc = 0x80C642E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642E4u)) return;
    // 80C642E4: addi    r5, r5, -29028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29028);

label_80C642E8:
    ctx->pc = 0x80C642E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C642E8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C642E8u)) return;
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
label_80C642EC:
    ctx->pc = 0x80C642ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642ECu)) return;
    // 80C642EC: bl      0x8045C750
    {
            ctx->lr = 0x80C642F0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C642F0:
    ctx->pc = 0x80C642F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C642F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C642F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C642F4:
    ctx->pc = 0x80C642F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642F4u)) return;
    // 80C642F4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80C642F8:
    ctx->pc = 0x80C642F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642F8u)) return;
    // 80C642F8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C642FC:
    ctx->pc = 0x80C642FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C642FCu)) return;
    // 80C642FC: addi    r5, r5, -631
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-631);

label_80C64300:
    ctx->pc = 0x80C64300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64300u)) return;
    // 80C64300: li      r6, 17920
    ctx->gpr[6] = (u32)(s32)(17920);

label_80C64304:
    ctx->pc = 0x80C64304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64304u)) return;
    // 80C64304: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C64308:
    ctx->pc = 0x80C64308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64308u)) return;
    // 80C64308: bl      0x8045C7B4
    {
            ctx->lr = 0x80C6430Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C6430C:
    ctx->pc = 0x80C6430Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6430Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6430C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80C64310:
    ctx->pc = 0x80C64310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64310u)) return;
    // 80C64310: bl      0x8045F7C8
    {
            ctx->lr = 0x80C64314u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C64314:
    ctx->pc = 0x80C64314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64314: bl      0x8045F32C
    {
            ctx->lr = 0x80C64318u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C64318:
    ctx->pc = 0x80C64318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64318: b       0x80C64398
    {
            goto label_80C64398;
    }

label_80C6431C:
    ctx->pc = 0x80C6431Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6431Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6431C: bl      0x80C646D4
    {
            ctx->lr = 0x80C64320u;
            goto label_80C646D4;
    }

label_80C64320:
    ctx->pc = 0x80C64320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64320: bl      0x80C64B54
    {
            ctx->lr = 0x80C64324u;
            goto label_80C64B54;
    }

label_80C64324:
    ctx->pc = 0x80C64324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64324: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64328:
    ctx->pc = 0x80C64328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64328u)) return;
    // 80C64328: bl      0x8045EC10
    {
            ctx->lr = 0x80C6432Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C6432C:
    ctx->pc = 0x80C6432Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6432Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6432C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64330:
    ctx->pc = 0x80C64330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64330u)) return;
    // 80C64330: bl      0x8045F220
    {
            ctx->lr = 0x80C64334u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C64334:
    ctx->pc = 0x80C64334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C64334: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64338:
    ctx->pc = 0x80C64338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64338u)) return;
    // 80C64338: addi    r4, r4, -28892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28892);

label_80C6433C:
    ctx->pc = 0x80C6433Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6433Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6433C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C6433Cu)) return;
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
label_80C64340:
    ctx->pc = 0x80C64340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64340u)) return;
    // 80C64340: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64344:
    ctx->pc = 0x80C64344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64344u)) return;
    // 80C64344: addi    r4, r4, -29056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29056);

label_80C64348:
    ctx->pc = 0x80C64348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64348: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C64348u)) return;
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
label_80C6434C:
    ctx->pc = 0x80C6434Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6434Cu)) return;
    // 80C6434C: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64350:
    ctx->pc = 0x80C64350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64350u)) return;
    // 80C64350: addi    r4, r4, -28888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28888);

label_80C64354:
    ctx->pc = 0x80C64354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64354: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C64354u)) return;
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
label_80C64358:
    ctx->pc = 0x80C64358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64358u)) return;
    // 80C64358: bl      0x8045EF2C
    {
            ctx->lr = 0x80C6435Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C6435C:
    ctx->pc = 0x80C6435Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6435Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6435C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C64360:
    ctx->pc = 0x80C64360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64360u)) return;
    // 80C64360: bl      0x8045F220
    {
            ctx->lr = 0x80C64364u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C64364:
    ctx->pc = 0x80C64364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C64364: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C64368:
    ctx->pc = 0x80C64368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64368u)) return;
    // 80C64368: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C6436C:
    ctx->pc = 0x80C6436Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6436Cu)) return;
    // 80C6436C: addi    r5, r5, -15282
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15282);

label_80C64370:
    ctx->pc = 0x80C64370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64370u)) return;
    // 80C64370: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C64374:
    ctx->pc = 0x80C64374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64374u)) return;
    // 80C64374: bl      0x8045EEA8
    {
            ctx->lr = 0x80C64378u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C64378:
    ctx->pc = 0x80C64378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64378: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C6437C:
    ctx->pc = 0x80C6437Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6437Cu)) return;
    // 80C6437C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C64380u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C64380:
    ctx->pc = 0x80C64380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64380: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C64384:
    ctx->pc = 0x80C64384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64384u)) return;
    // 80C64384: bl      0x8045ED54
    {
            ctx->lr = 0x80C64388u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C64388:
    ctx->pc = 0x80C64388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64388: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C6438C:
    ctx->pc = 0x80C6438Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6438Cu)) return;
    // 80C6438C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C64390u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C64390:
    ctx->pc = 0x80C64390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64390: bl      0x8045DE34
    {
            ctx->lr = 0x80C64394u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C64394:
    ctx->pc = 0x80C64394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64394: bl      0x80460A80
    {
            ctx->lr = 0x80C64398u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C64398:
    ctx->pc = 0x80C64398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64398: lwz     r0, 20(r1)
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
label_80C6439C:
    ctx->pc = 0x80C6439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6439Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6439C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C643A0:
    ctx->pc = 0x80C643A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643A0u)) return;
    // 80C643A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C643A4:
    ctx->pc = 0x80C643A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643A4u)) return;
    // 80C643A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C643A8:
    ctx->pc = 0x80C643A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C643A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C643A8: stwu     r1, -16(r1)
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
label_80C643AC:
    ctx->pc = 0x80C643ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C643AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C643B0:
    ctx->pc = 0x80C643B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C643B0: stw     r0, 20(r1)
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
label_80C643B4:
    ctx->pc = 0x80C643B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C643B4: lwz     r3, 32(r3)
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
label_80C643B8:
    ctx->pc = 0x80C643B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C643B8: lwz     r3, 16(r3)
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
label_80C643BC:
    ctx->pc = 0x80C643BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643BCu)) return;
    // 80C643BC: bl      0x80509CF0
    {
            ctx->lr = 0x80C643C0u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C643C0:
    ctx->pc = 0x80C643C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C643C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C643C0: lwz     r0, 20(r1)
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
label_80C643C4:
    ctx->pc = 0x80C643C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C643C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C643C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C643C8:
    ctx->pc = 0x80C643C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643C8u)) return;
    // 80C643C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C643CC:
    ctx->pc = 0x80C643CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643CCu)) return;
    // 80C643CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C643D0:
    ctx->pc = 0x80C643D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C643D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C643D0: stwu     r1, -32(r1)
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
label_80C643D4:
    ctx->pc = 0x80C643D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C643D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C643D8:
    ctx->pc = 0x80C643D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C643D8: stw     r0, 36(r1)
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
label_80C643DC:
    ctx->pc = 0x80C643DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C643DC: stw     r31, 28(r1)
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
label_80C643E0:
    ctx->pc = 0x80C643E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C643E0: stw     r30, 24(r1)
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
label_80C643E4:
    ctx->pc = 0x80C643E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C643E4: stw     r29, 20(r1)
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
label_80C643E8:
    ctx->pc = 0x80C643E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C643E8: lwz     r31, 32(r3)
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
label_80C643EC:
    ctx->pc = 0x80C643ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C643EC: lwz     r30, 16(r31)
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
label_80C643F0:
    ctx->pc = 0x80C643F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C643F0: lwz     r5, 28(r31)
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
label_80C643F4:
    ctx->pc = 0x80C643F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643F4u)) return;
    // 80C643F4: cmpwi   r5, 0
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

label_80C643F8:
    ctx->pc = 0x80C643F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C643F8u)) return;
    // 80C643F8: bc    4, 1, 0x80C64430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C64430;
        }
    }

label_80C643FC:
    ctx->pc = 0x80C643FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C643FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C643FC: lwz     r4, 24(r31)
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
label_80C64400:
    ctx->pc = 0x80C64400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64400u)) return;
    // 80C64400: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C64404:
    ctx->pc = 0x80C64404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C64404: lwz     r0, 20(r31)
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
label_80C64408:
    ctx->pc = 0x80C64408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C64408u)) return;
    // 80C64408: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C6440C:
    ctx->pc = 0x80C6440Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6440Cu)) return;
    // 80C6440C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C64410:
    ctx->pc = 0x80C64410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C64410u)) return;
    // 80C64410: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C64414:
    ctx->pc = 0x80C64414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64414u)) return;
    // 80C64414: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C64418:
    ctx->pc = 0x80C64418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64418u)) return;
    // 80C64418: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C6441C:
    ctx->pc = 0x80C6441Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6441Cu)) return;
    // 80C6441C: bl      0x80509C74
    {
            ctx->lr = 0x80C64420u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C64420:
    ctx->pc = 0x80C64420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C64420: stw     r29, 20(r31)
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
label_80C64424:
    ctx->pc = 0x80C64424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64424: lwz     r3, 28(r31)
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
label_80C64428:
    ctx->pc = 0x80C64428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64428u)) return;
    // 80C64428: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C6442C:
    ctx->pc = 0x80C6442Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6442Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C6442C: stw     r0, 28(r31)
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
label_80C64430:
    ctx->pc = 0x80C64430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64430: lwz     r5, 40(r31)
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
label_80C64434:
    ctx->pc = 0x80C64434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64434u)) return;
    // 80C64434: cmpwi   r5, 0
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

label_80C64438:
    ctx->pc = 0x80C64438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64438u)) return;
    // 80C64438: bc    4, 1, 0x80C64470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C64470;
        }
    }

label_80C6443C:
    ctx->pc = 0x80C6443Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6443Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C6443C: lwz     r4, 36(r31)
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
label_80C64440:
    ctx->pc = 0x80C64440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64440u)) return;
    // 80C64440: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C64444:
    ctx->pc = 0x80C64444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C64444: lwz     r0, 32(r31)
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
label_80C64448:
    ctx->pc = 0x80C64448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C64448u)) return;
    // 80C64448: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C6444C:
    ctx->pc = 0x80C6444Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6444Cu)) return;
    // 80C6444C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C64450:
    ctx->pc = 0x80C64450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C64450u)) return;
    // 80C64450: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C64454:
    ctx->pc = 0x80C64454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64454u)) return;
    // 80C64454: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C64458:
    ctx->pc = 0x80C64458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64458u)) return;
    // 80C64458: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C6445C:
    ctx->pc = 0x80C6445Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6445Cu)) return;
    // 80C6445C: bl      0x80509BF8
    {
            ctx->lr = 0x80C64460u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C64460:
    ctx->pc = 0x80C64460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C64460: stw     r29, 32(r31)
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
label_80C64464:
    ctx->pc = 0x80C64464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64464: lwz     r3, 40(r31)
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
label_80C64468:
    ctx->pc = 0x80C64468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64468u)) return;
    // 80C64468: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C6446C:
    ctx->pc = 0x80C6446Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6446Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C6446C: stw     r0, 40(r31)
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
label_80C64470:
    ctx->pc = 0x80C64470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64470: lwz     r5, 52(r31)
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
label_80C64474:
    ctx->pc = 0x80C64474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64474u)) return;
    // 80C64474: cmpwi   r5, 0
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

label_80C64478:
    ctx->pc = 0x80C64478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64478u)) return;
    // 80C64478: bc    4, 1, 0x80C644B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C644B0;
        }
    }

label_80C6447C:
    ctx->pc = 0x80C6447Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6447Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C6447C: lwz     r4, 48(r31)
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
label_80C64480:
    ctx->pc = 0x80C64480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64480u)) return;
    // 80C64480: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C64484:
    ctx->pc = 0x80C64484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C64484: lwz     r0, 44(r31)
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
label_80C64488:
    ctx->pc = 0x80C64488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C64488u)) return;
    // 80C64488: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C6448C:
    ctx->pc = 0x80C6448Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6448Cu)) return;
    // 80C6448C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C64490:
    ctx->pc = 0x80C64490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C64490u)) return;
    // 80C64490: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C64494:
    ctx->pc = 0x80C64494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64494u)) return;
    // 80C64494: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C64498:
    ctx->pc = 0x80C64498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64498u)) return;
    // 80C64498: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C6449C:
    ctx->pc = 0x80C6449Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6449Cu)) return;
    // 80C6449C: bl      0x80509B94
    {
            ctx->lr = 0x80C644A0u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C644A0:
    ctx->pc = 0x80C644A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C644A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C644A0: stw     r29, 44(r31)
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
label_80C644A4:
    ctx->pc = 0x80C644A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C644A4: lwz     r3, 52(r31)
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
label_80C644A8:
    ctx->pc = 0x80C644A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644A8u)) return;
    // 80C644A8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C644AC:
    ctx->pc = 0x80C644ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C644AC: stw     r0, 52(r31)
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
label_80C644B0:
    ctx->pc = 0x80C644B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C644B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C644B0: lwz     r31, 28(r1)
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
label_80C644B4:
    ctx->pc = 0x80C644B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C644B4: lwz     r30, 24(r1)
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
label_80C644B8:
    ctx->pc = 0x80C644B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C644B8: lwz     r29, 20(r1)
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
label_80C644BC:
    ctx->pc = 0x80C644BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C644BC: lwz     r0, 36(r1)
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
label_80C644C0:
    ctx->pc = 0x80C644C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C644C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C644C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C644C4:
    ctx->pc = 0x80C644C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644C4u)) return;
    // 80C644C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C644C8:
    ctx->pc = 0x80C644C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644C8u)) return;
    // 80C644C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C644CC:
    ctx->pc = 0x80C644CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C644CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C644CC: stwu     r1, -32(r1)
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
label_80C644D0:
    ctx->pc = 0x80C644D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C644D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C644D4:
    ctx->pc = 0x80C644D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C644D4: stw     r0, 36(r1)
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
label_80C644D8:
    ctx->pc = 0x80C644D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C644D8: stw     r31, 28(r1)
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
label_80C644DC:
    ctx->pc = 0x80C644DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C644DC: stw     r30, 24(r1)
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
label_80C644E0:
    ctx->pc = 0x80C644E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C644E0: stw     r29, 20(r1)
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
label_80C644E4:
    ctx->pc = 0x80C644E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644E4u)) return;
    // 80C644E4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C644E8:
    ctx->pc = 0x80C644E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644E8u)) return;
    // 80C644E8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C644EC:
    ctx->pc = 0x80C644ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644ECu)) return;
    // 80C644EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C644F0:
    ctx->pc = 0x80C644F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644F0u)) return;
    // 80C644F0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C644F4:
    ctx->pc = 0x80C644F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644F4u)) return;
    // 80C644F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C644F8:
    ctx->pc = 0x80C644F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C644F8u)) return;
    // 80C644F8: bl      0x8050FD60
    {
            ctx->lr = 0x80C644FCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C644FC:
    ctx->pc = 0x80C644FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C644FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C644FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C64500:
    ctx->pc = 0x80C64500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64500u)) return;
    // 80C64500: cmplwi  r31, 0x0000
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

label_80C64504:
    ctx->pc = 0x80C64504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64504u)) return;
    // 80C64504: bc    12, 2, 0x80C64568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64568;
        }
    }

label_80C64508:
    ctx->pc = 0x80C64508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C64508: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C6450C:
    ctx->pc = 0x80C6450Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6450Cu)) return;
    // 80C6450C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C64510:
    ctx->pc = 0x80C64510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64510u)) return;
    // 80C64510: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C64514:
    ctx->pc = 0x80C64514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64514u)) return;
    // 80C64514: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C64518:
    ctx->pc = 0x80C64518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64518u)) return;
    // 80C64518: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C6451C:
    ctx->pc = 0x80C6451Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6451Cu)) return;
    // 80C6451C: bl      0x8050A0D4
    {
            ctx->lr = 0x80C64520u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C64520:
    ctx->pc = 0x80C64520u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64520u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C64520: lis     r3, -32570
    ctx->gpr[3] = ((u32)(s32)(-32570) << 16);

label_80C64524:
    ctx->pc = 0x80C64524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64524u)) return;
    // 80C64524: addi    r0, r3, 17360
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17360);

label_80C64528:
    ctx->pc = 0x80C64528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C64528: stw     r0, 16(r31)
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
label_80C6452C:
    ctx->pc = 0x80C6452Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6452Cu)) return;
    // 80C6452C: lis     r3, -32570
    ctx->gpr[3] = ((u32)(s32)(-32570) << 16);

label_80C64530:
    ctx->pc = 0x80C64530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64530u)) return;
    // 80C64530: addi    r0, r3, 17320
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17320);

label_80C64534:
    ctx->pc = 0x80C64534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C64534: stw     r0, 24(r31)
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
label_80C64538:
    ctx->pc = 0x80C64538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C64538: lwz     r3, 32(r31)
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
label_80C6453C:
    ctx->pc = 0x80C6453Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6453Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C6453C: stw     r31, 16(r3)
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
label_80C64540:
    ctx->pc = 0x80C64540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64540u)) return;
    // 80C64540: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C64544:
    ctx->pc = 0x80C64544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C64544: stw     r0, 20(r3)
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
label_80C64548:
    ctx->pc = 0x80C64548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64548: stw     r0, 24(r3)
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
label_80C6454C:
    ctx->pc = 0x80C6454Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6454Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6454C: stw     r0, 28(r3)
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
label_80C64550:
    ctx->pc = 0x80C64550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64550: stw     r0, 32(r3)
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
label_80C64554:
    ctx->pc = 0x80C64554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64554: stw     r0, 36(r3)
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
label_80C64558:
    ctx->pc = 0x80C64558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C64558: stw     r0, 40(r3)
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
label_80C6455C:
    ctx->pc = 0x80C6455Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6455Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6455C: stw     r0, 44(r3)
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
label_80C64560:
    ctx->pc = 0x80C64560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64560: stw     r0, 48(r3)
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
label_80C64564:
    ctx->pc = 0x80C64564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C64564: stw     r0, 52(r3)
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
label_80C64568:
    ctx->pc = 0x80C64568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C64568: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C6456C:
    ctx->pc = 0x80C6456Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6456Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6456C: lwz     r31, 28(r1)
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
label_80C64570:
    ctx->pc = 0x80C64570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64570: lwz     r30, 24(r1)
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
label_80C64574:
    ctx->pc = 0x80C64574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64574: lwz     r29, 20(r1)
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
label_80C64578:
    ctx->pc = 0x80C64578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64578: lwz     r0, 36(r1)
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
label_80C6457C:
    ctx->pc = 0x80C6457Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6457Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6457C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64580:
    ctx->pc = 0x80C64580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64580u)) return;
    // 80C64580: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C64584:
    ctx->pc = 0x80C64584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64584u)) return;
    // 80C64584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64588:
    ctx->pc = 0x80C64588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C64588: stwu     r1, -16(r1)
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
label_80C6458C:
    ctx->pc = 0x80C6458Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6458Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C6458C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64590:
    ctx->pc = 0x80C64590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C64590: stw     r0, 20(r1)
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
label_80C64594:
    ctx->pc = 0x80C64594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64594: stw     r31, 12(r1)
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
label_80C64598:
    ctx->pc = 0x80C64598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64598: stw     r30, 8(r1)
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
label_80C6459C:
    ctx->pc = 0x80C6459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6459Cu)) return;
    // 80C6459C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C645A0:
    ctx->pc = 0x80C645A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C645A0: lwz     r31, 32(r3)
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
label_80C645A4:
    ctx->pc = 0x80C645A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C645A4: stw     r30, 24(r31)
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
label_80C645A8:
    ctx->pc = 0x80C645A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C645A8: stw     r5, 28(r31)
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
label_80C645AC:
    ctx->pc = 0x80C645ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645ACu)) return;
    // 80C645AC: cmpwi   r5, 0
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

label_80C645B0:
    ctx->pc = 0x80C645B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645B0u)) return;
    // 80C645B0: bc    12, 1, 0x80C645C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C645C0;
        }
    }

label_80C645B4:
    ctx->pc = 0x80C645B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C645B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C645B4: lwz     r3, 16(r31)
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
label_80C645B8:
    ctx->pc = 0x80C645B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645B8u)) return;
    // 80C645B8: bl      0x80509C74
    {
            ctx->lr = 0x80C645BCu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C645BC:
    ctx->pc = 0x80C645BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C645BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C645BC: stw     r30, 20(r31)
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
label_80C645C0:
    ctx->pc = 0x80C645C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C645C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C645C0: lwz     r31, 12(r1)
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
label_80C645C4:
    ctx->pc = 0x80C645C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C645C4: lwz     r30, 8(r1)
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
label_80C645C8:
    ctx->pc = 0x80C645C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C645C8: lwz     r0, 20(r1)
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
label_80C645CC:
    ctx->pc = 0x80C645CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C645CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C645CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C645D0:
    ctx->pc = 0x80C645D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645D0u)) return;
    // 80C645D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C645D4:
    ctx->pc = 0x80C645D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645D4u)) return;
    // 80C645D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C645D8:
    ctx->pc = 0x80C645D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C645D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C645D8: stwu     r1, -16(r1)
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
label_80C645DC:
    ctx->pc = 0x80C645DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C645DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C645E0:
    ctx->pc = 0x80C645E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C645E0: stw     r0, 20(r1)
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
label_80C645E4:
    ctx->pc = 0x80C645E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C645E4: stw     r31, 12(r1)
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
label_80C645E8:
    ctx->pc = 0x80C645E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C645E8: stw     r30, 8(r1)
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
label_80C645EC:
    ctx->pc = 0x80C645ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645ECu)) return;
    // 80C645EC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C645F0:
    ctx->pc = 0x80C645F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C645F0: lwz     r31, 32(r3)
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
label_80C645F4:
    ctx->pc = 0x80C645F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C645F4: stw     r30, 36(r31)
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
label_80C645F8:
    ctx->pc = 0x80C645F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C645F8: stw     r5, 40(r31)
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
label_80C645FC:
    ctx->pc = 0x80C645FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C645FCu)) return;
    // 80C645FC: cmpwi   r5, 0
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

label_80C64600:
    ctx->pc = 0x80C64600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64600u)) return;
    // 80C64600: bc    12, 1, 0x80C64610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64610;
        }
    }

label_80C64604:
    ctx->pc = 0x80C64604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64604: lwz     r3, 16(r31)
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
label_80C64608:
    ctx->pc = 0x80C64608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64608u)) return;
    // 80C64608: bl      0x80509BF8
    {
            ctx->lr = 0x80C6460Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C6460C:
    ctx->pc = 0x80C6460Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6460Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C6460C: stw     r30, 32(r31)
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
label_80C64610:
    ctx->pc = 0x80C64610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64610: lwz     r31, 12(r1)
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
label_80C64614:
    ctx->pc = 0x80C64614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64614: lwz     r30, 8(r1)
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
label_80C64618:
    ctx->pc = 0x80C64618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64618: lwz     r0, 20(r1)
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
label_80C6461C:
    ctx->pc = 0x80C6461Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6461Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6461C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64620:
    ctx->pc = 0x80C64620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64620u)) return;
    // 80C64620: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C64624:
    ctx->pc = 0x80C64624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64624u)) return;
    // 80C64624: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64628:
    ctx->pc = 0x80C64628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C64628: stwu     r1, -16(r1)
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
label_80C6462C:
    ctx->pc = 0x80C6462Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6462Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C6462C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64630:
    ctx->pc = 0x80C64630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C64630: stw     r0, 20(r1)
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
label_80C64634:
    ctx->pc = 0x80C64634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64634: stw     r31, 12(r1)
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
label_80C64638:
    ctx->pc = 0x80C64638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64638: stw     r30, 8(r1)
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
label_80C6463C:
    ctx->pc = 0x80C6463Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6463Cu)) return;
    // 80C6463C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C64640:
    ctx->pc = 0x80C64640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64640: lwz     r31, 32(r3)
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
label_80C64644:
    ctx->pc = 0x80C64644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C64644: stw     r30, 48(r31)
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
label_80C64648:
    ctx->pc = 0x80C64648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64648: stw     r5, 52(r31)
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
label_80C6464C:
    ctx->pc = 0x80C6464Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6464Cu)) return;
    // 80C6464C: cmpwi   r5, 0
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

label_80C64650:
    ctx->pc = 0x80C64650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64650u)) return;
    // 80C64650: bc    12, 1, 0x80C64660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64660;
        }
    }

label_80C64654:
    ctx->pc = 0x80C64654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64654: lwz     r3, 16(r31)
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
label_80C64658:
    ctx->pc = 0x80C64658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64658u)) return;
    // 80C64658: bl      0x80509B94
    {
            ctx->lr = 0x80C6465Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C6465C:
    ctx->pc = 0x80C6465Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6465Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C6465C: stw     r30, 44(r31)
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
label_80C64660:
    ctx->pc = 0x80C64660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64660: lwz     r31, 12(r1)
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
label_80C64664:
    ctx->pc = 0x80C64664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64664: lwz     r30, 8(r1)
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
label_80C64668:
    ctx->pc = 0x80C64668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64668: lwz     r0, 20(r1)
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
label_80C6466C:
    ctx->pc = 0x80C6466Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6466Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6466C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64670:
    ctx->pc = 0x80C64670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64670u)) return;
    // 80C64670: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C64674:
    ctx->pc = 0x80C64674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64674u)) return;
    // 80C64674: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64678:
    ctx->pc = 0x80C64678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C64678: stwu     r1, -16(r1)
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
label_80C6467C:
    ctx->pc = 0x80C6467Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6467Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C6467C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64680:
    ctx->pc = 0x80C64680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64680: stw     r0, 20(r1)
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
label_80C64684:
    ctx->pc = 0x80C64684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64684: stw     r31, 12(r1)
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
label_80C64688:
    ctx->pc = 0x80C64688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64688u)) return;
    // 80C64688: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C6468C:
    ctx->pc = 0x80C6468Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6468Cu)) return;
    // 80C6468C: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64690:
    ctx->pc = 0x80C64690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64690u)) return;
    // 80C64690: addi    r4, r4, 3652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3652);

label_80C64694:
    ctx->pc = 0x80C64694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64694: lwz     r0, 0(r4)
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
label_80C64698:
    ctx->pc = 0x80C64698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64698u)) return;
    // 80C64698: cmplwi  r0, 0x0000
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

label_80C6469C:
    ctx->pc = 0x80C6469Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6469Cu)) return;
    // 80C6469C: bc    4, 2, 0x80C646C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C646C0;
        }
    }

label_80C646A0:
    ctx->pc = 0x80C646A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C646A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C646A0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C646A4:
    ctx->pc = 0x80C646A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646A4u)) return;
    // 80C646A4: bl      0x8050EEC0
    {
            ctx->lr = 0x80C646A8u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C646A8:
    ctx->pc = 0x80C646A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C646A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C646A8: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C646AC:
    ctx->pc = 0x80C646ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646ACu)) return;
    // 80C646AC: addi    r4, r4, 3652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3652);

label_80C646B0:
    ctx->pc = 0x80C646B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C646B0: stw     r3, 0(r4)
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
label_80C646B4:
    ctx->pc = 0x80C646B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646B4u)) return;
    // 80C646B4: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C646B8:
    ctx->pc = 0x80C646B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646B8u)) return;
    // 80C646B8: addi    r3, r3, 3648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3648);

label_80C646BC:
    ctx->pc = 0x80C646BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C646BC: stw     r31, 0(r3)
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
label_80C646C0:
    ctx->pc = 0x80C646C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C646C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C646C0: lwz     r31, 12(r1)
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
label_80C646C4:
    ctx->pc = 0x80C646C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C646C4: lwz     r0, 20(r1)
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
label_80C646C8:
    ctx->pc = 0x80C646C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C646C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C646C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C646CC:
    ctx->pc = 0x80C646CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646CCu)) return;
    // 80C646CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C646D0:
    ctx->pc = 0x80C646D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646D0u)) return;
    // 80C646D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C646D4:
    ctx->pc = 0x80C646D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C646D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C646D4: stwu     r1, -32(r1)
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
label_80C646D8:
    ctx->pc = 0x80C646D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C646D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C646DC:
    ctx->pc = 0x80C646DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C646DC: stw     r0, 36(r1)
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
label_80C646E0:
    ctx->pc = 0x80C646E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C646E0: stw     r31, 28(r1)
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
label_80C646E4:
    ctx->pc = 0x80C646E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C646E4: stw     r30, 24(r1)
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
label_80C646E8:
    ctx->pc = 0x80C646E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C646E8: stw     r29, 20(r1)
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
label_80C646EC:
    ctx->pc = 0x80C646ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C646EC: stw     r28, 16(r1)
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
label_80C646F0:
    ctx->pc = 0x80C646F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646F0u)) return;
    // 80C646F0: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C646F4:
    ctx->pc = 0x80C646F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646F4u)) return;
    // 80C646F4: addi    r30, r3, 3652
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(3652);

label_80C646F8:
    ctx->pc = 0x80C646F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C646F8: lwz     r0, 0(r30)
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
label_80C646FC:
    ctx->pc = 0x80C646FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C646FCu)) return;
    // 80C646FC: cmplwi  r0, 0x0000
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

label_80C64700:
    ctx->pc = 0x80C64700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64700u)) return;
    // 80C64700: bc    12, 2, 0x80C64760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64760;
        }
    }

label_80C64704:
    ctx->pc = 0x80C64704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C64704: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C64708:
    ctx->pc = 0x80C64708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64708u)) return;
    // 80C64708: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C6470C:
    ctx->pc = 0x80C6470Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6470Cu)) return;
    // 80C6470C: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C64710:
    ctx->pc = 0x80C64710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64710u)) return;
    // 80C64710: addi    r31, r3, 3648
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(3648);

label_80C64714:
    ctx->pc = 0x80C64714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64714u)) return;
    // 80C64714: b       0x80C64734
    {
            goto label_80C64734;
    }

label_80C64718:
    ctx->pc = 0x80C64718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C64718: lwz     r3, 0(r30)
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
label_80C6471C:
    ctx->pc = 0x80C6471Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6471Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6471C: lwzx    r3, r3, r29
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
label_80C64720:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64720u)) return;
    // 80C64720: cmplwi  r3, 0x0000
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

label_80C64724:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64724u)) return;
    // 80C64724: bc    12, 2, 0x80C6472C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6472C;
        }
    }

label_80C64728:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64728: bl      0x8050F9E0
    {
            ctx->lr = 0x80C6472Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C6472C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6472Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6472C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C64730:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64730u)) return;
    // 80C64730: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C64734:
    ctx->pc = 0x80C64734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64734: lwz     r0, 0(r31)
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
label_80C64738:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64738u)) return;
    // 80C64738: cmpw    r28, r0
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

label_80C6473C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6473Cu)) return;
    // 80C6473C: bc    12, 0, 0x80C64718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C64718u;
                return;
            }
            goto label_80C64718;
        }
    }

label_80C64740:
    ctx->pc = 0x80C64740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C64740: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C64744:
    ctx->pc = 0x80C64744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64744u)) return;
    // 80C64744: addi    r3, r3, 3652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3652);

label_80C64748:
    ctx->pc = 0x80C64748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64748: lwz     r3, 0(r3)
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
label_80C6474C:
    ctx->pc = 0x80C6474Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6474Cu)) return;
    // 80C6474C: bl      0x8050ED40
    {
            ctx->lr = 0x80C64750u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C64750:
    ctx->pc = 0x80C64750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C64750: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C64754:
    ctx->pc = 0x80C64754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64754u)) return;
    // 80C64754: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C64758:
    ctx->pc = 0x80C64758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64758u)) return;
    // 80C64758: addi    r3, r3, 3652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3652);

label_80C6475C:
    ctx->pc = 0x80C6475Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6475Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C6475C: stw     r0, 0(r3)
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
label_80C64760:
    ctx->pc = 0x80C64760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C64760: lwz     r31, 28(r1)
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
label_80C64764:
    ctx->pc = 0x80C64764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64764: lwz     r30, 24(r1)
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
label_80C64768:
    ctx->pc = 0x80C64768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64768: lwz     r29, 20(r1)
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
label_80C6476C:
    ctx->pc = 0x80C6476Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6476Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6476C: lwz     r28, 16(r1)
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
label_80C64770:
    ctx->pc = 0x80C64770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64770: lwz     r0, 36(r1)
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
label_80C64774:
    ctx->pc = 0x80C64774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C64774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64774: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64778:
    ctx->pc = 0x80C64778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64778u)) return;
    // 80C64778: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C6477C:
    ctx->pc = 0x80C6477Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6477Cu)) return;
    // 80C6477C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64780:
    ctx->pc = 0x80C64780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C64780: stwu     r1, -16(r1)
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
label_80C64784:
    ctx->pc = 0x80C64784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64784: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64788:
    ctx->pc = 0x80C64788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64788: stw     r0, 20(r1)
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
label_80C6478C:
    ctx->pc = 0x80C6478Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6478Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6478C: stw     r31, 12(r1)
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
label_80C64790:
    ctx->pc = 0x80C64790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64790u)) return;
    // 80C64790: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C64794:
    ctx->pc = 0x80C64794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64794u)) return;
    // 80C64794: addi    r6, r6, 3648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3648);

label_80C64798:
    ctx->pc = 0x80C64798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64798: lwz     r0, 0(r6)
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
label_80C6479C:
    ctx->pc = 0x80C6479Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6479Cu)) return;
    // 80C6479C: cmpw    r3, r0
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

label_80C647A0:
    ctx->pc = 0x80C647A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647A0u)) return;
    // 80C647A0: bc    4, 0, 0x80C647DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C647DC;
        }
    }

label_80C647A4:
    ctx->pc = 0x80C647A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C647A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C647A4: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C647A8:
    ctx->pc = 0x80C647A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647A8u)) return;
    // 80C647A8: addi    r6, r6, 3652
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3652);

label_80C647AC:
    ctx->pc = 0x80C647ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C647AC: lwz     r6, 0(r6)
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
label_80C647B0:
    ctx->pc = 0x80C647B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647B0u)) return;
    // 80C647B0: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C647B4:
    ctx->pc = 0x80C647B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C647B4: lwzx    r0, r6, r31
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
label_80C647B8:
    ctx->pc = 0x80C647B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647B8u)) return;
    // 80C647B8: cmplwi  r0, 0x0000
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

label_80C647BC:
    ctx->pc = 0x80C647BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647BCu)) return;
    // 80C647BC: bc    4, 2, 0x80C647DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C647DC;
        }
    }

label_80C647C0:
    ctx->pc = 0x80C647C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C647C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C647C0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C647C4:
    ctx->pc = 0x80C647C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647C4u)) return;
    // 80C647C4: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C647C8:
    ctx->pc = 0x80C647C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647C8u)) return;
    // 80C647C8: bl      0x80C644CC
    {
            ctx->lr = 0x80C647CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C644CCu;
                return;
            }
            goto label_80C644CC;
    }

label_80C647CC:
    ctx->pc = 0x80C647CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C647CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C647CC: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C647D0:
    ctx->pc = 0x80C647D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647D0u)) return;
    // 80C647D0: addi    r4, r4, 3652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3652);

label_80C647D4:
    ctx->pc = 0x80C647D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C647D4: lwz     r4, 0(r4)
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
label_80C647D8:
    ctx->pc = 0x80C647D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C647D8: stwx    r3, r4, r31
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
label_80C647DC:
    ctx->pc = 0x80C647DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C647DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C647DC: lwz     r31, 12(r1)
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
label_80C647E0:
    ctx->pc = 0x80C647E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C647E0: lwz     r0, 20(r1)
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
label_80C647E4:
    ctx->pc = 0x80C647E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C647E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C647E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C647E8:
    ctx->pc = 0x80C647E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647E8u)) return;
    // 80C647E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C647EC:
    ctx->pc = 0x80C647ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647ECu)) return;
    // 80C647EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C647F0:
    ctx->pc = 0x80C647F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C647F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C647F0: stwu     r1, -16(r1)
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
label_80C647F4:
    ctx->pc = 0x80C647F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C647F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C647F8:
    ctx->pc = 0x80C647F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C647F8: stw     r0, 20(r1)
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
label_80C647FC:
    ctx->pc = 0x80C647FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C647FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C647FC: stw     r31, 12(r1)
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
label_80C64800:
    ctx->pc = 0x80C64800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64800u)) return;
    // 80C64800: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64804:
    ctx->pc = 0x80C64804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64804u)) return;
    // 80C64804: addi    r4, r4, 3648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3648);

label_80C64808:
    ctx->pc = 0x80C64808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64808: lwz     r0, 0(r4)
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
label_80C6480C:
    ctx->pc = 0x80C6480Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6480Cu)) return;
    // 80C6480C: cmpw    r3, r0
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

label_80C64810:
    ctx->pc = 0x80C64810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64810u)) return;
    // 80C64810: bc    4, 0, 0x80C64848
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C64848;
        }
    }

label_80C64814:
    ctx->pc = 0x80C64814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C64814: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64818:
    ctx->pc = 0x80C64818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64818u)) return;
    // 80C64818: addi    r4, r4, 3652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3652);

label_80C6481C:
    ctx->pc = 0x80C6481Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6481Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6481C: lwz     r4, 0(r4)
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
label_80C64820:
    ctx->pc = 0x80C64820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64820u)) return;
    // 80C64820: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C64824:
    ctx->pc = 0x80C64824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64824: lwzx    r3, r4, r31
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
label_80C64828:
    ctx->pc = 0x80C64828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64828u)) return;
    // 80C64828: cmplwi  r3, 0x0000
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

label_80C6482C:
    ctx->pc = 0x80C6482Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6482Cu)) return;
    // 80C6482C: bc    12, 2, 0x80C64848
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64848;
        }
    }

label_80C64830:
    ctx->pc = 0x80C64830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64830: bl      0x8050F9E0
    {
            ctx->lr = 0x80C64834u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C64834:
    ctx->pc = 0x80C64834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C64834: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C64838:
    ctx->pc = 0x80C64838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64838u)) return;
    // 80C64838: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C6483C:
    ctx->pc = 0x80C6483Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6483Cu)) return;
    // 80C6483C: addi    r3, r3, 3652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3652);

label_80C64840:
    ctx->pc = 0x80C64840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64840: lwz     r3, 0(r3)
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
label_80C64844:
    ctx->pc = 0x80C64844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C64844: stwx    r0, r3, r31
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
label_80C64848:
    ctx->pc = 0x80C64848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64848: lwz     r31, 12(r1)
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
label_80C6484C:
    ctx->pc = 0x80C6484Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6484Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6484C: lwz     r0, 20(r1)
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
label_80C64850:
    ctx->pc = 0x80C64850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C64850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64850: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64854:
    ctx->pc = 0x80C64854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64854u)) return;
    // 80C64854: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C64858:
    ctx->pc = 0x80C64858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64858u)) return;
    // 80C64858: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C6485C:
    ctx->pc = 0x80C6485Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6485Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6485C: stwu     r1, -16(r1)
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
label_80C64860:
    ctx->pc = 0x80C64860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64860: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64864:
    ctx->pc = 0x80C64864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64864: stw     r0, 20(r1)
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
label_80C64868:
    ctx->pc = 0x80C64868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64868u)) return;
    // 80C64868: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C6486C:
    ctx->pc = 0x80C6486Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6486Cu)) return;
    // 80C6486C: addi    r6, r6, 3648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3648);

label_80C64870:
    ctx->pc = 0x80C64870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64870: lwz     r0, 0(r6)
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
label_80C64874:
    ctx->pc = 0x80C64874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64874u)) return;
    // 80C64874: cmpw    r3, r0
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

label_80C64878:
    ctx->pc = 0x80C64878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64878u)) return;
    // 80C64878: bc    4, 0, 0x80C6489C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6489C;
        }
    }

label_80C6487C:
    ctx->pc = 0x80C6487Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6487Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6487C: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C64880:
    ctx->pc = 0x80C64880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64880u)) return;
    // 80C64880: addi    r6, r6, 3652
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3652);

label_80C64884:
    ctx->pc = 0x80C64884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64884: lwz     r6, 0(r6)
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
label_80C64888:
    ctx->pc = 0x80C64888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64888u)) return;
    // 80C64888: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C6488C:
    ctx->pc = 0x80C6488Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6488Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6488C: lwzx    r3, r6, r0
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
label_80C64890:
    ctx->pc = 0x80C64890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64890u)) return;
    // 80C64890: cmplwi  r3, 0x0000
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

label_80C64894:
    ctx->pc = 0x80C64894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64894u)) return;
    // 80C64894: bc    12, 2, 0x80C6489C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6489C;
        }
    }

label_80C64898:
    ctx->pc = 0x80C64898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64898: bl      0x80C64588
    {
            ctx->lr = 0x80C6489Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C64588u;
                return;
            }
            goto label_80C64588;
    }

label_80C6489C:
    ctx->pc = 0x80C6489Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6489Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6489C: lwz     r0, 20(r1)
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
label_80C648A0:
    ctx->pc = 0x80C648A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C648A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C648A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C648A4:
    ctx->pc = 0x80C648A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648A4u)) return;
    // 80C648A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C648A8:
    ctx->pc = 0x80C648A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648A8u)) return;
    // 80C648A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C648AC:
    ctx->pc = 0x80C648ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C648ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C648AC: stwu     r1, -16(r1)
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
label_80C648B0:
    ctx->pc = 0x80C648B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C648B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C648B4:
    ctx->pc = 0x80C648B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C648B4: stw     r0, 20(r1)
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
label_80C648B8:
    ctx->pc = 0x80C648B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648B8u)) return;
    // 80C648B8: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C648BC:
    ctx->pc = 0x80C648BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648BCu)) return;
    // 80C648BC: addi    r6, r6, 3648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3648);

label_80C648C0:
    ctx->pc = 0x80C648C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C648C0: lwz     r0, 0(r6)
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
label_80C648C4:
    ctx->pc = 0x80C648C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648C4u)) return;
    // 80C648C4: cmpw    r3, r0
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

label_80C648C8:
    ctx->pc = 0x80C648C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648C8u)) return;
    // 80C648C8: bc    4, 0, 0x80C648EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C648EC;
        }
    }

label_80C648CC:
    ctx->pc = 0x80C648CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C648CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C648CC: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C648D0:
    ctx->pc = 0x80C648D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648D0u)) return;
    // 80C648D0: addi    r6, r6, 3652
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3652);

label_80C648D4:
    ctx->pc = 0x80C648D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C648D4: lwz     r6, 0(r6)
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
label_80C648D8:
    ctx->pc = 0x80C648D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648D8u)) return;
    // 80C648D8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C648DC:
    ctx->pc = 0x80C648DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C648DC: lwzx    r3, r6, r0
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
label_80C648E0:
    ctx->pc = 0x80C648E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648E0u)) return;
    // 80C648E0: cmplwi  r3, 0x0000
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

label_80C648E4:
    ctx->pc = 0x80C648E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648E4u)) return;
    // 80C648E4: bc    12, 2, 0x80C648EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C648EC;
        }
    }

label_80C648E8:
    ctx->pc = 0x80C648E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C648E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C648E8: bl      0x80C645D8
    {
            ctx->lr = 0x80C648ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C645D8u;
                return;
            }
            goto label_80C645D8;
    }

label_80C648EC:
    ctx->pc = 0x80C648ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C648ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C648EC: lwz     r0, 20(r1)
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
label_80C648F0:
    ctx->pc = 0x80C648F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C648F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C648F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C648F4:
    ctx->pc = 0x80C648F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648F4u)) return;
    // 80C648F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C648F8:
    ctx->pc = 0x80C648F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C648F8u)) return;
    // 80C648F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C648FC:
    ctx->pc = 0x80C648FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C648FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C648FC: stwu     r1, -16(r1)
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
label_80C64900:
    ctx->pc = 0x80C64900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64900: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64904:
    ctx->pc = 0x80C64904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64904: stw     r0, 20(r1)
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
label_80C64908:
    ctx->pc = 0x80C64908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64908u)) return;
    // 80C64908: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C6490C:
    ctx->pc = 0x80C6490Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6490Cu)) return;
    // 80C6490C: addi    r6, r6, 3648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3648);

label_80C64910:
    ctx->pc = 0x80C64910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64910: lwz     r0, 0(r6)
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
label_80C64914:
    ctx->pc = 0x80C64914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64914u)) return;
    // 80C64914: cmpw    r3, r0
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

label_80C64918:
    ctx->pc = 0x80C64918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64918u)) return;
    // 80C64918: bc    4, 0, 0x80C6493C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6493C;
        }
    }

label_80C6491C:
    ctx->pc = 0x80C6491Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6491Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6491C: lis     r6, -27429
    ctx->gpr[6] = ((u32)(s32)(-27429) << 16);

label_80C64920:
    ctx->pc = 0x80C64920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64920u)) return;
    // 80C64920: addi    r6, r6, 3652
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3652);

label_80C64924:
    ctx->pc = 0x80C64924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64924: lwz     r6, 0(r6)
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
label_80C64928:
    ctx->pc = 0x80C64928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64928u)) return;
    // 80C64928: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C6492C:
    ctx->pc = 0x80C6492Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6492Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6492C: lwzx    r3, r6, r0
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
label_80C64930:
    ctx->pc = 0x80C64930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64930u)) return;
    // 80C64930: cmplwi  r3, 0x0000
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

label_80C64934:
    ctx->pc = 0x80C64934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64934u)) return;
    // 80C64934: bc    12, 2, 0x80C6493C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6493C;
        }
    }

label_80C64938:
    ctx->pc = 0x80C64938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64938: bl      0x80C64628
    {
            ctx->lr = 0x80C6493Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C64628u;
                return;
            }
            goto label_80C64628;
    }

label_80C6493C:
    ctx->pc = 0x80C6493Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6493Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6493C: lwz     r0, 20(r1)
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
label_80C64940:
    ctx->pc = 0x80C64940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C64940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64940: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64944:
    ctx->pc = 0x80C64944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64944u)) return;
    // 80C64944: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C64948:
    ctx->pc = 0x80C64948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64948u)) return;
    // 80C64948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C6494C:
    ctx->pc = 0x80C6494Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6494Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C6494C: stwu     r1, -32(r1)
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
label_80C64950:
    ctx->pc = 0x80C64950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C64950: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64954:
    ctx->pc = 0x80C64954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C64954: stw     r0, 36(r1)
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
label_80C64958:
    ctx->pc = 0x80C64958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C64958: stw     r31, 28(r1)
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
label_80C6495C:
    ctx->pc = 0x80C6495Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6495Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C6495C: stw     r30, 24(r1)
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
label_80C64960:
    ctx->pc = 0x80C64960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64960: stw     r29, 20(r1)
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
label_80C64964:
    ctx->pc = 0x80C64964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64964: stw     r28, 16(r1)
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
label_80C64968:
    ctx->pc = 0x80C64968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64968u)) return;
    // 80C64968: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C6496C:
    ctx->pc = 0x80C6496Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6496Cu)) return;
    // 80C6496C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C64970:
    ctx->pc = 0x80C64970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64970u)) return;
    // 80C64970: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C64974:
    ctx->pc = 0x80C64974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64974u)) return;
    // 80C64974: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C64978:
    ctx->pc = 0x80C64978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64978u)) return;
    // 80C64978: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6497C:
    ctx->pc = 0x80C6497Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6497Cu)) return;
    // 80C6497C: bl      0x80401DB0
    {
            ctx->lr = 0x80C64980u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C64980:
    ctx->pc = 0x80C64980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C64980: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64984:
    ctx->pc = 0x80C64984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64984u)) return;
    // 80C64984: addi    r4, r4, 3656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3656);

label_80C64988:
    ctx->pc = 0x80C64988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64988: lwz     r0, 0(r4)
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
label_80C6498C:
    ctx->pc = 0x80C6498Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6498Cu)) return;
    // 80C6498C: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C64990:
    ctx->pc = 0x80C64990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64990u)) return;
    // 80C64990: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C64994:
    ctx->pc = 0x80C64994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64994u)) return;
    // 80C64994: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C64998:
    ctx->pc = 0x80C64998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64998u)) return;
    // 80C64998: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C6499C:
    ctx->pc = 0x80C6499Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6499Cu)) return;
    // 80C6499C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C649A0:
    ctx->pc = 0x80C649A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649A0u)) return;
    // 80C649A0: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C649A4:
    ctx->pc = 0x80C649A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649A4u)) return;
    // 80C649A4: bl      0x8050A0D4
    {
            ctx->lr = 0x80C649A8u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C649A8:
    ctx->pc = 0x80C649A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C649A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C649A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C649AC:
    ctx->pc = 0x80C649ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649ACu)) return;
    // 80C649AC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C649B0:
    ctx->pc = 0x80C649B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649B0u)) return;
    // 80C649B0: bl      0x80509C74
    {
            ctx->lr = 0x80C649B4u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C649B4:
    ctx->pc = 0x80C649B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C649B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C649B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C649B8:
    ctx->pc = 0x80C649B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649B8u)) return;
    // 80C649B8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C649BC:
    ctx->pc = 0x80C649BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649BCu)) return;
    // 80C649BC: bl      0x80509BF8
    {
            ctx->lr = 0x80C649C0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C649C0:
    ctx->pc = 0x80C649C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C649C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C649C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C649C4:
    ctx->pc = 0x80C649C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649C4u)) return;
    // 80C649C4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C649C8:
    ctx->pc = 0x80C649C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649C8u)) return;
    // 80C649C8: bl      0x80509B94
    {
            ctx->lr = 0x80C649CCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C649CC:
    ctx->pc = 0x80C649CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C649CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C649CC: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C649D0:
    ctx->pc = 0x80C649D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649D0u)) return;
    // 80C649D0: addi    r4, r3, 3656
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3656);

label_80C649D4:
    ctx->pc = 0x80C649D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C649D4: lwz     r3, 0(r4)
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
label_80C649D8:
    ctx->pc = 0x80C649D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649D8u)) return;
    // 80C649D8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C649DC:
    ctx->pc = 0x80C649DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C649DC: stw     r0, 0(r4)
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
label_80C649E0:
    ctx->pc = 0x80C649E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649E0u)) return;
    // 80C649E0: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C649E4:
    ctx->pc = 0x80C649E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C649E4: stw     r0, 0(r4)
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
label_80C649E8:
    ctx->pc = 0x80C649E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C649E8: lwz     r31, 28(r1)
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
label_80C649EC:
    ctx->pc = 0x80C649ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C649EC: lwz     r30, 24(r1)
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
label_80C649F0:
    ctx->pc = 0x80C649F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C649F0: lwz     r29, 20(r1)
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
label_80C649F4:
    ctx->pc = 0x80C649F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C649F4: lwz     r28, 16(r1)
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
label_80C649F8:
    ctx->pc = 0x80C649F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C649F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C649F8: lwz     r0, 36(r1)
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
label_80C649FC:
    ctx->pc = 0x80C649FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C649FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C649FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A00:
    ctx->pc = 0x80C64A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A00u)) return;
    // 80C64A00: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C64A04:
    ctx->pc = 0x80C64A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A04u)) return;
    // 80C64A04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64A08:
    ctx->pc = 0x80C64A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C64A08: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A0C:
    ctx->pc = 0x80C64A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C64A0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A10:
    ctx->pc = 0x80C64A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C64A10: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A14:
    ctx->pc = 0x80C64A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C64A14: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64A14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A18:
    ctx->pc = 0x80C64A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C64A18: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64A18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C64A18u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A1C:
    ctx->pc = 0x80C64A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C64A1C: stfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64A1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A20:
    ctx->pc = 0x80C64A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C64A20: psq_st   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C64A20u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A24:
    ctx->pc = 0x80C64A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C64A24: stfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A28:
    ctx->pc = 0x80C64A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C64A28: psq_st   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C64A28u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A2C:
    ctx->pc = 0x80C64A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C64A2C: stfd     f28, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64A2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A30:
    ctx->pc = 0x80C64A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C64A30: psq_st   f28, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80C64A30u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A34:
    ctx->pc = 0x80C64A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C64A34: stfd     f27, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64A34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A38:
    ctx->pc = 0x80C64A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C64A38: psq_st   f27, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64A38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80C64A38u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64A3C:
    ctx->pc = 0x80C64A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C64A3C: stw     r31, 28(r1)
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
label_80C64A40:
    ctx->pc = 0x80C64A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C64A40: stw     r30, 24(r1)
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
label_80C64A44:
    ctx->pc = 0x80C64A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C64A44: stw     r29, 20(r1)
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
label_80C64A48:
    ctx->pc = 0x80C64A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C64A48: stw     r28, 16(r1)
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
label_80C64A4C:
    ctx->pc = 0x80C64A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A4Cu)) return;
    // 80C64A4C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80C64A4Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80C64A50:
    ctx->pc = 0x80C64A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A50u)) return;
    // 80C64A50: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80C64A50u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80C64A54:
    ctx->pc = 0x80C64A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A54u)) return;
    // 80C64A54: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80C64A54u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80C64A58:
    ctx->pc = 0x80C64A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A58u)) return;
    // 80C64A58: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C64A5C:
    ctx->pc = 0x80C64A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A5Cu)) return;
    // 80C64A5C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C64A60:
    ctx->pc = 0x80C64A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A60u)) return;
    // 80C64A60: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80C64A60u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80C64A64:
    ctx->pc = 0x80C64A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A64u)) return;
    // 80C64A64: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80C64A64u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80C64A68:
    ctx->pc = 0x80C64A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A68u)) return;
    // 80C64A68: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C64A6C:
    ctx->pc = 0x80C64A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A6Cu)) return;
    // 80C64A6C: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C64A70:
    ctx->pc = 0x80C64A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A70u)) return;
    // 80C64A70: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C64A74:
    ctx->pc = 0x80C64A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A74u)) return;
    // 80C64A74: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C64A78:
    ctx->pc = 0x80C64A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A78u)) return;
    // 80C64A78: lis     r5, -32570
    ctx->gpr[5] = ((u32)(s32)(-32570) << 16);

label_80C64A7C:
    ctx->pc = 0x80C64A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A7Cu)) return;
    // 80C64A7C: addi    r5, r5, 19352
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19352);

label_80C64A80:
    ctx->pc = 0x80C64A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A80u)) return;
    // 80C64A80: bl      0x8050FD60
    {
            ctx->lr = 0x80C64A84u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C64A84:
    ctx->pc = 0x80C64A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C64A84: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64A88:
    ctx->pc = 0x80C64A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A88u)) return;
    // 80C64A88: addi    r4, r4, 3664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3664);

label_80C64A8C:
    ctx->pc = 0x80C64A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64A8C: stw     r3, 0(r4)
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
label_80C64A90:
    ctx->pc = 0x80C64A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A90u)) return;
    // 80C64A90: li      r3, 36
    ctx->gpr[3] = (u32)(s32)(36);

label_80C64A94:
    ctx->pc = 0x80C64A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A94u)) return;
    // 80C64A94: bl      0x8050EF60
    {
            ctx->lr = 0x80C64A98u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80C64A98:
    ctx->pc = 0x80C64A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 48u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 48u : 1u;
    // 80C64A98: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64A9C:
    ctx->pc = 0x80C64A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64A9Cu)) return;
    // 80C64A9C: addi    r4, r4, 3664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3664);

label_80C64AA0:
    ctx->pc = 0x80C64AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80C64AA0: lwz     r4, 0(r4)
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
label_80C64AA4:
    ctx->pc = 0x80C64AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80C64AA4: lwz     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64AA8:
    ctx->pc = 0x80C64AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80C64AA8: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64AAC:
    ctx->pc = 0x80C64AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AACu)) return;
    // 80C64AAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C64AB0:
    ctx->pc = 0x80C64AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80C64AB0: stb     r0, 0(r5)
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
label_80C64AB4:
    ctx->pc = 0x80C64AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80C64AB4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64AB8:
    ctx->pc = 0x80C64AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80C64AB8: stfs     f27, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64AB8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64ABC:
    ctx->pc = 0x80C64ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80C64ABC: stfs     f28, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64ABCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64AC0:
    ctx->pc = 0x80C64AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80C64AC0: stfs     f29, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C64AC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64AC4:
    ctx->pc = 0x80C64AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C64AC4: stw     r29, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64AC8:
    ctx->pc = 0x80C64AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80C64AC8: stfs     f30, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C64AC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64ACC:
    ctx->pc = 0x80C64ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C64ACC: stfs     f31, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C64ACCu)) return;
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
label_80C64AD0:
    ctx->pc = 0x80C64AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C64AD0: stw     r30, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64AD4:
    ctx->pc = 0x80C64AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C64AD4: stw     r31, 16(r3)
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
label_80C64AD8:
    ctx->pc = 0x80C64AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AD8u)) return;
    // 80C64AD8: li      r0, 91
    ctx->gpr[0] = (u32)(s32)(91);

label_80C64ADC:
    ctx->pc = 0x80C64ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C64ADC: stw     r0, 20(r3)
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
label_80C64AE0:
    ctx->pc = 0x80C64AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AE0u)) return;
    // 80C64AE0: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64AE4:
    ctx->pc = 0x80C64AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AE4u)) return;
    // 80C64AE4: addi    r4, r4, -28880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28880);

label_80C64AE8:
    ctx->pc = 0x80C64AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C64AE8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C64AE8u)) return;
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
label_80C64AEC:
    ctx->pc = 0x80C64AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C64AEC: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C64AECu)) return;
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
label_80C64AF0:
    ctx->pc = 0x80C64AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AF0u)) return;
    // 80C64AF0: lis     r4, -27429
    ctx->gpr[4] = ((u32)(s32)(-27429) << 16);

label_80C64AF4:
    ctx->pc = 0x80C64AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AF4u)) return;
    // 80C64AF4: addi    r4, r4, -28876
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28876);

label_80C64AF8:
    ctx->pc = 0x80C64AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C64AF8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C64AF8u)) return;
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
label_80C64AFC:
    ctx->pc = 0x80C64AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C64AFC: stfs     f0, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C64AFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B00:
    ctx->pc = 0x80C64B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C64B00: stw     r28, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B04:
    ctx->pc = 0x80C64B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B04u)) return;
    // 80C64B04: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80C64B08:
    ctx->pc = 0x80C64B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C64B08: stb     r0, 0(r5)
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
label_80C64B0C:
    ctx->pc = 0x80C64B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C64B0C: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C64B0Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B10:
    ctx->pc = 0x80C64B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C64B10: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64B10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B14:
    ctx->pc = 0x80C64B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C64B14: psq_l   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64B14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C64B14u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B18:
    ctx->pc = 0x80C64B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C64B18: lfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64B18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B1C:
    ctx->pc = 0x80C64B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C64B1C: psq_l   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64B1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C64B1Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B20:
    ctx->pc = 0x80C64B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C64B20: lfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64B20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B24:
    ctx->pc = 0x80C64B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C64B24: psq_l   f28, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64B24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80C64B24u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B28:
    ctx->pc = 0x80C64B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C64B28: lfd     f28, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64B28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B2C:
    ctx->pc = 0x80C64B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C64B2C: psq_l   f27, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C64B2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80C64B2Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B30:
    ctx->pc = 0x80C64B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C64B30: lfd     f27, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C64B30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B34:
    ctx->pc = 0x80C64B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C64B34: lwz     r31, 28(r1)
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
label_80C64B38:
    ctx->pc = 0x80C64B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64B38: lwz     r30, 24(r1)
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
label_80C64B3C:
    ctx->pc = 0x80C64B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64B3C: lwz     r29, 20(r1)
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
label_80C64B40:
    ctx->pc = 0x80C64B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64B40: lwz     r28, 16(r1)
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
label_80C64B44:
    ctx->pc = 0x80C64B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64B44: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B48:
    ctx->pc = 0x80C64B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C64B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64B48: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B4C:
    ctx->pc = 0x80C64B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B4Cu)) return;
    // 80C64B4C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80C64B50:
    ctx->pc = 0x80C64B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B50u)) return;
    // 80C64B50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64B54:
    ctx->pc = 0x80C64B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64B54: stwu     r1, -16(r1)
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
label_80C64B58:
    ctx->pc = 0x80C64B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64B58: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B5C:
    ctx->pc = 0x80C64B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64B5C: stw     r0, 20(r1)
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
label_80C64B60:
    ctx->pc = 0x80C64B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B60u)) return;
    // 80C64B60: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C64B64:
    ctx->pc = 0x80C64B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B64u)) return;
    // 80C64B64: addi    r3, r3, 3664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3664);

label_80C64B68:
    ctx->pc = 0x80C64B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64B68: lwz     r3, 0(r3)
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
label_80C64B6C:
    ctx->pc = 0x80C64B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B6Cu)) return;
    // 80C64B6C: cmplwi  r3, 0x0000
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

label_80C64B70:
    ctx->pc = 0x80C64B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B70u)) return;
    // 80C64B70: bc    12, 2, 0x80C64B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64B88;
        }
    }

label_80C64B74:
    ctx->pc = 0x80C64B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64B74: bl      0x8050F9E0
    {
            ctx->lr = 0x80C64B78u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C64B78:
    ctx->pc = 0x80C64B78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64B78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C64B78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C64B7C:
    ctx->pc = 0x80C64B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B7Cu)) return;
    // 80C64B7C: lis     r3, -27429
    ctx->gpr[3] = ((u32)(s32)(-27429) << 16);

label_80C64B80:
    ctx->pc = 0x80C64B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B80u)) return;
    // 80C64B80: addi    r3, r3, 3664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3664);

label_80C64B84:
    ctx->pc = 0x80C64B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C64B84: stw     r0, 0(r3)
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
label_80C64B88:
    ctx->pc = 0x80C64B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64B88: lwz     r0, 20(r1)
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
label_80C64B8C:
    ctx->pc = 0x80C64B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C64B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64B8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64B90:
    ctx->pc = 0x80C64B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B90u)) return;
    // 80C64B90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C64B94:
    ctx->pc = 0x80C64B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B94u)) return;
    // 80C64B94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64B98:
    ctx->pc = 0x80C64B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C64B98: lis     r4, -32570
    ctx->gpr[4] = ((u32)(s32)(-32570) << 16);

label_80C64B9C:
    ctx->pc = 0x80C64B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64B9Cu)) return;
    // 80C64B9C: addi    r0, r4, 19388
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(19388);

label_80C64BA0:
    ctx->pc = 0x80C64BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64BA0: stw     r0, 16(r3)
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
label_80C64BA4:
    ctx->pc = 0x80C64BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BA4u)) return;
    // 80C64BA4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C64BA8:
    ctx->pc = 0x80C64BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64BA8: stw     r0, 20(r3)
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
label_80C64BAC:
    ctx->pc = 0x80C64BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BACu)) return;
    // 80C64BAC: lis     r4, -32570
    ctx->gpr[4] = ((u32)(s32)(-32570) << 16);

label_80C64BB0:
    ctx->pc = 0x80C64BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BB0u)) return;
    // 80C64BB0: addi    r0, r4, 19524
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(19524);

label_80C64BB4:
    ctx->pc = 0x80C64BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C64BB4: stw     r0, 24(r3)
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
label_80C64BB8:
    ctx->pc = 0x80C64BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BB8u)) return;
    // 80C64BB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64BBC:
    ctx->pc = 0x80C64BBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64BBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C64BBC: stwu     r1, -32(r1)
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
label_80C64BC0:
    ctx->pc = 0x80C64BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C64BC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64BC4:
    ctx->pc = 0x80C64BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C64BC4: stw     r0, 36(r1)
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
label_80C64BC8:
    ctx->pc = 0x80C64BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C64BC8: stw     r31, 28(r1)
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
label_80C64BCC:
    ctx->pc = 0x80C64BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64BCC: stw     r30, 24(r1)
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
label_80C64BD0:
    ctx->pc = 0x80C64BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64BD0: stw     r29, 20(r1)
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
label_80C64BD4:
    ctx->pc = 0x80C64BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64BD4: lwz     r31, 32(r3)
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
label_80C64BD8:
    ctx->pc = 0x80C64BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64BD8: lwz     r30, 16(r31)
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
label_80C64BDC:
    ctx->pc = 0x80C64BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C64BDC: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64BE0:
    ctx->pc = 0x80C64BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BE0u)) return;
    // 80C64BE0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80C64BE4:
    ctx->pc = 0x80C64BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BE4u)) return;
    // 80C64BE4: cmpwi   r0, 1
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

label_80C64BE8:
    ctx->pc = 0x80C64BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BE8u)) return;
    // 80C64BE8: bc    12, 2, 0x80C64BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64BF8;
        }
    }

label_80C64BEC:
    ctx->pc = 0x80C64BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64BEC: bc    4, 0, 0x80C64C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C64C28;
        }
    }

label_80C64BF0:
    ctx->pc = 0x80C64BF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64BF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C64BF0: cmpwi   r0, 0
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

label_80C64BF4:
    ctx->pc = 0x80C64BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BF4u)) return;
    // 80C64BF4: b       0x80C64C28
    {
            goto label_80C64C28;
    }

label_80C64BF8:
    ctx->pc = 0x80C64BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64BF8: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64BFC:
    ctx->pc = 0x80C64BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64BFCu)) return;
    // 80C64BFC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C64C00:
    ctx->pc = 0x80C64C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64C00: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64C04:
    ctx->pc = 0x80C64C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C04u)) return;
    // 80C64C04: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C64C08:
    ctx->pc = 0x80C64C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C08u)) return;
    // 80C64C08: b       0x80C64C1C
    {
            goto label_80C64C1C;
    }

label_80C64C0C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C64C0C: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_80C64C10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C10u)) return;
    // 80C64C10: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C64C14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C14u)) return;
    // 80C64C14: bl      0x8044B63C
    {
            ctx->lr = 0x80C64C18u;
            ctx->pc = 0x8044B63Cu;
            return;
    }

label_80C64C18:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64C18: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80C64C1C:
    ctx->pc = 0x80C64C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64C1C: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64C20:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C20u)) return;
    // 80C64C20: cmpw    r29, r0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C64C24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C24u)) return;
    // 80C64C24: bc    12, 0, 0x80C64C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C64C0Cu;
                return;
            }
            goto label_80C64C0C;
        }
    }

label_80C64C28:
    ctx->pc = 0x80C64C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C64C28: lwz     r31, 28(r1)
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
label_80C64C2C:
    ctx->pc = 0x80C64C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64C2C: lwz     r30, 24(r1)
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
label_80C64C30:
    ctx->pc = 0x80C64C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64C30: lwz     r29, 20(r1)
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
label_80C64C34:
    ctx->pc = 0x80C64C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64C34: lwz     r0, 36(r1)
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
label_80C64C38:
    ctx->pc = 0x80C64C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C64C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64C38: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64C3C:
    ctx->pc = 0x80C64C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C3Cu)) return;
    // 80C64C3C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C64C40:
    ctx->pc = 0x80C64C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C40u)) return;
    // 80C64C40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

label_80C64C44:
    ctx->pc = 0x80C64C44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64C44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C64C44: stwu     r1, -16(r1)
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
label_80C64C48:
    ctx->pc = 0x80C64C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C64C48: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64C4C:
    ctx->pc = 0x80C64C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64C4C: stw     r0, 20(r1)
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
label_80C64C50:
    ctx->pc = 0x80C64C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C64C50: lwz     r3, 32(r3)
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
label_80C64C54:
    ctx->pc = 0x80C64C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64C54: lwz     r3, 16(r3)
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
label_80C64C58:
    ctx->pc = 0x80C64C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C58u)) return;
    // 80C64C58: cmplwi  r3, 0x0000
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

label_80C64C5C:
    ctx->pc = 0x80C64C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C5Cu)) return;
    // 80C64C5C: bc    12, 2, 0x80C64C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C64C64;
        }
    }

label_80C64C60:
    ctx->pc = 0x80C64C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C64C60: bl      0x8050ED40
    {
            ctx->lr = 0x80C64C64u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C64C64:
    ctx->pc = 0x80C64C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C64C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C64C64: lwz     r0, 20(r1)
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
label_80C64C68:
    ctx->pc = 0x80C64C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C64C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C64C68: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C64C6C:
    ctx->pc = 0x80C64C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C6Cu)) return;
    // 80C64C6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C64C70:
    ctx->pc = 0x80C64C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C64C70u)) return;
    // 80C64C70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C63AC0;
        }
    }

    ctx->pc = 0x80C64C74u;
    return;
return_dispatch_80C63AC0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C63AFCu: goto label_80C63AFC;
    case 0x80C63B04u: goto label_80C63B04;
    case 0x80C63B08u: goto label_80C63B08;
    case 0x80C63B0Cu: goto label_80C63B0C;
    case 0x80C63B10u: goto label_80C63B10;
    case 0x80C63B18u: goto label_80C63B18;
    case 0x80C63B20u: goto label_80C63B20;
    case 0x80C63B30u: goto label_80C63B30;
    case 0x80C63B74u: goto label_80C63B74;
    case 0x80C63B7Cu: goto label_80C63B7C;
    case 0x80C63B84u: goto label_80C63B84;
    case 0x80C63BACu: goto label_80C63BAC;
    case 0x80C63BB4u: goto label_80C63BB4;
    case 0x80C63BC8u: goto label_80C63BC8;
    case 0x80C63BD0u: goto label_80C63BD0;
    case 0x80C63BD4u: goto label_80C63BD4;
    case 0x80C63BDCu: goto label_80C63BDC;
    case 0x80C63C04u: goto label_80C63C04;
    case 0x80C63C0Cu: goto label_80C63C0C;
    case 0x80C63C34u: goto label_80C63C34;
    case 0x80C63C3Cu: goto label_80C63C3C;
    case 0x80C63C50u: goto label_80C63C50;
    case 0x80C63C80u: goto label_80C63C80;
    case 0x80C63C9Cu: goto label_80C63C9C;
    case 0x80C63CA4u: goto label_80C63CA4;
    case 0x80C63CD4u: goto label_80C63CD4;
    case 0x80C63CF0u: goto label_80C63CF0;
    case 0x80C63CF8u: goto label_80C63CF8;
    case 0x80C63D28u: goto label_80C63D28;
    case 0x80C63D44u: goto label_80C63D44;
    case 0x80C63D54u: goto label_80C63D54;
    case 0x80C63D5Cu: goto label_80C63D5C;
    case 0x80C63D60u: goto label_80C63D60;
    case 0x80C63D68u: goto label_80C63D68;
    case 0x80C63D90u: goto label_80C63D90;
    case 0x80C63D98u: goto label_80C63D98;
    case 0x80C63DA0u: goto label_80C63DA0;
    case 0x80C63DC8u: goto label_80C63DC8;
    case 0x80C63DD0u: goto label_80C63DD0;
    case 0x80C63DD8u: goto label_80C63DD8;
    case 0x80C63DDCu: goto label_80C63DDC;
    case 0x80C63DF8u: goto label_80C63DF8;
    case 0x80C63E04u: goto label_80C63E04;
    case 0x80C63E20u: goto label_80C63E20;
    case 0x80C63E2Cu: goto label_80C63E2C;
    case 0x80C63E34u: goto label_80C63E34;
    case 0x80C63E5Cu: goto label_80C63E5C;
    case 0x80C63E64u: goto label_80C63E64;
    case 0x80C63E6Cu: goto label_80C63E6C;
    case 0x80C63EACu: goto label_80C63EAC;
    case 0x80C63EDCu: goto label_80C63EDC;
    case 0x80C63EF8u: goto label_80C63EF8;
    case 0x80C63F28u: goto label_80C63F28;
    case 0x80C63F44u: goto label_80C63F44;
    case 0x80C63F54u: goto label_80C63F54;
    case 0x80C63FACu: goto label_80C63FAC;
    case 0x80C63FB4u: goto label_80C63FB4;
    case 0x80C63FB8u: goto label_80C63FB8;
    case 0x80C63FC0u: goto label_80C63FC0;
    case 0x80C63FC8u: goto label_80C63FC8;
    case 0x80C63FF0u: goto label_80C63FF0;
    case 0x80C63FF8u: goto label_80C63FF8;
    case 0x80C64000u: goto label_80C64000;
    case 0x80C64004u: goto label_80C64004;
    case 0x80C64020u: goto label_80C64020;
    case 0x80C6402Cu: goto label_80C6402C;
    case 0x80C64048u: goto label_80C64048;
    case 0x80C64054u: goto label_80C64054;
    case 0x80C6405Cu: goto label_80C6405C;
    case 0x80C64084u: goto label_80C64084;
    case 0x80C640B4u: goto label_80C640B4;
    case 0x80C640D0u: goto label_80C640D0;
    case 0x80C640D8u: goto label_80C640D8;
    case 0x80C64108u: goto label_80C64108;
    case 0x80C64124u: goto label_80C64124;
    case 0x80C6412Cu: goto label_80C6412C;
    case 0x80C6415Cu: goto label_80C6415C;
    case 0x80C64178u: goto label_80C64178;
    case 0x80C64180u: goto label_80C64180;
    case 0x80C64188u: goto label_80C64188;
    case 0x80C6418Cu: goto label_80C6418C;
    case 0x80C64194u: goto label_80C64194;
    case 0x80C641A0u: goto label_80C641A0;
    case 0x80C641A8u: goto label_80C641A8;
    case 0x80C641D0u: goto label_80C641D0;
    case 0x80C641D8u: goto label_80C641D8;
    case 0x80C641E0u: goto label_80C641E0;
    case 0x80C641E8u: goto label_80C641E8;
    case 0x80C641ECu: goto label_80C641EC;
    case 0x80C641F4u: goto label_80C641F4;
    case 0x80C6421Cu: goto label_80C6421C;
    case 0x80C64224u: goto label_80C64224;
    case 0x80C6422Cu: goto label_80C6422C;
    case 0x80C6426Cu: goto label_80C6426C;
    case 0x80C6429Cu: goto label_80C6429C;
    case 0x80C642B8u: goto label_80C642B8;
    case 0x80C642C0u: goto label_80C642C0;
    case 0x80C642F0u: goto label_80C642F0;
    case 0x80C6430Cu: goto label_80C6430C;
    case 0x80C64314u: goto label_80C64314;
    case 0x80C64318u: goto label_80C64318;
    case 0x80C64320u: goto label_80C64320;
    case 0x80C64324u: goto label_80C64324;
    case 0x80C6432Cu: goto label_80C6432C;
    case 0x80C64334u: goto label_80C64334;
    case 0x80C6435Cu: goto label_80C6435C;
    case 0x80C64364u: goto label_80C64364;
    case 0x80C64378u: goto label_80C64378;
    case 0x80C64380u: goto label_80C64380;
    case 0x80C64388u: goto label_80C64388;
    case 0x80C64390u: goto label_80C64390;
    case 0x80C64394u: goto label_80C64394;
    case 0x80C64398u: goto label_80C64398;
    case 0x80C643C0u: goto label_80C643C0;
    case 0x80C64420u: goto label_80C64420;
    case 0x80C64460u: goto label_80C64460;
    case 0x80C644A0u: goto label_80C644A0;
    case 0x80C644FCu: goto label_80C644FC;
    case 0x80C64520u: goto label_80C64520;
    case 0x80C645BCu: goto label_80C645BC;
    case 0x80C6460Cu: goto label_80C6460C;
    case 0x80C6465Cu: goto label_80C6465C;
    case 0x80C646A8u: goto label_80C646A8;
    case 0x80C6472Cu: goto label_80C6472C;
    case 0x80C64750u: goto label_80C64750;
    case 0x80C647CCu: goto label_80C647CC;
    case 0x80C64834u: goto label_80C64834;
    case 0x80C6489Cu: goto label_80C6489C;
    case 0x80C648ECu: goto label_80C648EC;
    case 0x80C6493Cu: goto label_80C6493C;
    case 0x80C64980u: goto label_80C64980;
    case 0x80C649A8u: goto label_80C649A8;
    case 0x80C649B4u: goto label_80C649B4;
    case 0x80C649C0u: goto label_80C649C0;
    case 0x80C649CCu: goto label_80C649CC;
    case 0x80C64A84u: goto label_80C64A84;
    case 0x80C64A98u: goto label_80C64A98;
    case 0x80C64B78u: goto label_80C64B78;
    case 0x80C64C18u: goto label_80C64C18;
    case 0x80C64C64u: goto label_80C64C64;
    default: return;
    }
}

