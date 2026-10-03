// DolRecomp output
#include "../generated.h"

void func_80B83AC0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80B83AC0[1892] = {
        &&label_80B83AC0,
        &&label_80B83AC4,
        &&label_80B83AC8,
        &&label_80B83ACC,
        &&label_80B83AD0,
        &&label_80B83AD4,
        &&label_80B83AD8,
        &&label_80B83ADC,
        &&label_80B83AE0,
        &&label_80B83AE4,
        &&label_80B83AE8,
        &&label_80B83AEC,
        &&label_80B83AF0,
        &&label_80B83AF4,
        &&label_80B83AF8,
        &&label_80B83AFC,
        &&label_80B83B00,
        &&label_80B83B04,
        &&label_80B83B08,
        &&label_80B83B0C,
        &&label_80B83B10,
        &&label_80B83B14,
        &&label_80B83B18,
        &&label_80B83B1C,
        &&label_80B83B20,
        &&label_80B83B24,
        &&label_80B83B28,
        &&label_80B83B2C,
        &&label_80B83B30,
        &&label_80B83B34,
        &&label_80B83B38,
        &&label_80B83B3C,
        &&label_80B83B40,
        &&label_80B83B44,
        &&label_80B83B48,
        &&label_80B83B4C,
        &&label_80B83B50,
        &&label_80B83B54,
        &&label_80B83B58,
        &&label_80B83B5C,
        &&label_80B83B60,
        &&label_80B83B64,
        &&label_80B83B68,
        &&label_80B83B6C,
        &&label_80B83B70,
        &&label_80B83B74,
        &&label_80B83B78,
        &&label_80B83B7C,
        &&label_80B83B80,
        &&label_80B83B84,
        &&label_80B83B88,
        &&label_80B83B8C,
        &&label_80B83B90,
        &&label_80B83B94,
        &&label_80B83B98,
        &&label_80B83B9C,
        &&label_80B83BA0,
        &&label_80B83BA4,
        &&label_80B83BA8,
        &&label_80B83BAC,
        &&label_80B83BB0,
        &&label_80B83BB4,
        &&label_80B83BB8,
        &&label_80B83BBC,
        &&label_80B83BC0,
        &&label_80B83BC4,
        &&label_80B83BC8,
        &&label_80B83BCC,
        &&label_80B83BD0,
        &&label_80B83BD4,
        &&label_80B83BD8,
        &&label_80B83BDC,
        &&label_80B83BE0,
        &&label_80B83BE4,
        &&label_80B83BE8,
        &&label_80B83BEC,
        &&label_80B83BF0,
        &&label_80B83BF4,
        &&label_80B83BF8,
        &&label_80B83BFC,
        &&label_80B83C00,
        &&label_80B83C04,
        &&label_80B83C08,
        &&label_80B83C0C,
        &&label_80B83C10,
        &&label_80B83C14,
        &&label_80B83C18,
        &&label_80B83C1C,
        &&label_80B83C20,
        &&label_80B83C24,
        &&label_80B83C28,
        &&label_80B83C2C,
        &&label_80B83C30,
        &&label_80B83C34,
        &&label_80B83C38,
        &&label_80B83C3C,
        &&label_80B83C40,
        &&label_80B83C44,
        &&label_80B83C48,
        &&label_80B83C4C,
        &&label_80B83C50,
        &&label_80B83C54,
        &&label_80B83C58,
        &&label_80B83C5C,
        &&label_80B83C60,
        &&label_80B83C64,
        &&label_80B83C68,
        &&label_80B83C6C,
        &&label_80B83C70,
        &&label_80B83C74,
        &&label_80B83C78,
        &&label_80B83C7C,
        &&label_80B83C80,
        &&label_80B83C84,
        &&label_80B83C88,
        &&label_80B83C8C,
        &&label_80B83C90,
        &&label_80B83C94,
        &&label_80B83C98,
        &&label_80B83C9C,
        &&label_80B83CA0,
        &&label_80B83CA4,
        &&label_80B83CA8,
        &&label_80B83CAC,
        &&label_80B83CB0,
        &&label_80B83CB4,
        &&label_80B83CB8,
        &&label_80B83CBC,
        &&label_80B83CC0,
        &&label_80B83CC4,
        &&label_80B83CC8,
        &&label_80B83CCC,
        &&label_80B83CD0,
        &&label_80B83CD4,
        &&label_80B83CD8,
        &&label_80B83CDC,
        &&label_80B83CE0,
        &&label_80B83CE4,
        &&label_80B83CE8,
        &&label_80B83CEC,
        &&label_80B83CF0,
        &&label_80B83CF4,
        &&label_80B83CF8,
        &&label_80B83CFC,
        &&label_80B83D00,
        &&label_80B83D04,
        &&label_80B83D08,
        &&label_80B83D0C,
        &&label_80B83D10,
        &&label_80B83D14,
        &&label_80B83D18,
        &&label_80B83D1C,
        &&label_80B83D20,
        &&label_80B83D24,
        &&label_80B83D28,
        &&label_80B83D2C,
        &&label_80B83D30,
        &&label_80B83D34,
        &&label_80B83D38,
        &&label_80B83D3C,
        &&label_80B83D40,
        &&label_80B83D44,
        &&label_80B83D48,
        &&label_80B83D4C,
        &&label_80B83D50,
        &&label_80B83D54,
        &&label_80B83D58,
        &&label_80B83D5C,
        &&label_80B83D60,
        &&label_80B83D64,
        &&label_80B83D68,
        &&label_80B83D6C,
        &&label_80B83D70,
        &&label_80B83D74,
        &&label_80B83D78,
        &&label_80B83D7C,
        &&label_80B83D80,
        &&label_80B83D84,
        &&label_80B83D88,
        &&label_80B83D8C,
        &&label_80B83D90,
        &&label_80B83D94,
        &&label_80B83D98,
        &&label_80B83D9C,
        &&label_80B83DA0,
        &&label_80B83DA4,
        &&label_80B83DA8,
        &&label_80B83DAC,
        &&label_80B83DB0,
        &&label_80B83DB4,
        &&label_80B83DB8,
        &&label_80B83DBC,
        &&label_80B83DC0,
        &&label_80B83DC4,
        &&label_80B83DC8,
        &&label_80B83DCC,
        &&label_80B83DD0,
        &&label_80B83DD4,
        &&label_80B83DD8,
        &&label_80B83DDC,
        &&label_80B83DE0,
        &&label_80B83DE4,
        &&label_80B83DE8,
        &&label_80B83DEC,
        &&label_80B83DF0,
        &&label_80B83DF4,
        &&label_80B83DF8,
        &&label_80B83DFC,
        &&label_80B83E00,
        &&label_80B83E04,
        &&label_80B83E08,
        &&label_80B83E0C,
        &&label_80B83E10,
        &&label_80B83E14,
        &&label_80B83E18,
        &&label_80B83E1C,
        &&label_80B83E20,
        &&label_80B83E24,
        &&label_80B83E28,
        &&label_80B83E2C,
        &&label_80B83E30,
        &&label_80B83E34,
        &&label_80B83E38,
        &&label_80B83E3C,
        &&label_80B83E40,
        &&label_80B83E44,
        &&label_80B83E48,
        &&label_80B83E4C,
        &&label_80B83E50,
        &&label_80B83E54,
        &&label_80B83E58,
        &&label_80B83E5C,
        &&label_80B83E60,
        &&label_80B83E64,
        &&label_80B83E68,
        &&label_80B83E6C,
        &&label_80B83E70,
        &&label_80B83E74,
        &&label_80B83E78,
        &&label_80B83E7C,
        &&label_80B83E80,
        &&label_80B83E84,
        &&label_80B83E88,
        &&label_80B83E8C,
        &&label_80B83E90,
        &&label_80B83E94,
        &&label_80B83E98,
        &&label_80B83E9C,
        &&label_80B83EA0,
        &&label_80B83EA4,
        &&label_80B83EA8,
        &&label_80B83EAC,
        &&label_80B83EB0,
        &&label_80B83EB4,
        &&label_80B83EB8,
        &&label_80B83EBC,
        &&label_80B83EC0,
        &&label_80B83EC4,
        &&label_80B83EC8,
        &&label_80B83ECC,
        &&label_80B83ED0,
        &&label_80B83ED4,
        &&label_80B83ED8,
        &&label_80B83EDC,
        &&label_80B83EE0,
        &&label_80B83EE4,
        &&label_80B83EE8,
        &&label_80B83EEC,
        &&label_80B83EF0,
        &&label_80B83EF4,
        &&label_80B83EF8,
        &&label_80B83EFC,
        &&label_80B83F00,
        &&label_80B83F04,
        &&label_80B83F08,
        &&label_80B83F0C,
        &&label_80B83F10,
        &&label_80B83F14,
        &&label_80B83F18,
        &&label_80B83F1C,
        &&label_80B83F20,
        &&label_80B83F24,
        &&label_80B83F28,
        &&label_80B83F2C,
        &&label_80B83F30,
        &&label_80B83F34,
        &&label_80B83F38,
        &&label_80B83F3C,
        &&label_80B83F40,
        &&label_80B83F44,
        &&label_80B83F48,
        &&label_80B83F4C,
        &&label_80B83F50,
        &&label_80B83F54,
        &&label_80B83F58,
        &&label_80B83F5C,
        &&label_80B83F60,
        &&label_80B83F64,
        &&label_80B83F68,
        &&label_80B83F6C,
        &&label_80B83F70,
        &&label_80B83F74,
        &&label_80B83F78,
        &&label_80B83F7C,
        &&label_80B83F80,
        &&label_80B83F84,
        &&label_80B83F88,
        &&label_80B83F8C,
        &&label_80B83F90,
        &&label_80B83F94,
        &&label_80B83F98,
        &&label_80B83F9C,
        &&label_80B83FA0,
        &&label_80B83FA4,
        &&label_80B83FA8,
        &&label_80B83FAC,
        &&label_80B83FB0,
        &&label_80B83FB4,
        &&label_80B83FB8,
        &&label_80B83FBC,
        &&label_80B83FC0,
        &&label_80B83FC4,
        &&label_80B83FC8,
        &&label_80B83FCC,
        &&label_80B83FD0,
        &&label_80B83FD4,
        &&label_80B83FD8,
        &&label_80B83FDC,
        &&label_80B83FE0,
        &&label_80B83FE4,
        &&label_80B83FE8,
        &&label_80B83FEC,
        &&label_80B83FF0,
        &&label_80B83FF4,
        &&label_80B83FF8,
        &&label_80B83FFC,
        &&label_80B84000,
        &&label_80B84004,
        &&label_80B84008,
        &&label_80B8400C,
        &&label_80B84010,
        &&label_80B84014,
        &&label_80B84018,
        &&label_80B8401C,
        &&label_80B84020,
        &&label_80B84024,
        &&label_80B84028,
        &&label_80B8402C,
        &&label_80B84030,
        &&label_80B84034,
        &&label_80B84038,
        &&label_80B8403C,
        &&label_80B84040,
        &&label_80B84044,
        &&label_80B84048,
        &&label_80B8404C,
        &&label_80B84050,
        &&label_80B84054,
        &&label_80B84058,
        &&label_80B8405C,
        &&label_80B84060,
        &&label_80B84064,
        &&label_80B84068,
        &&label_80B8406C,
        &&label_80B84070,
        &&label_80B84074,
        &&label_80B84078,
        &&label_80B8407C,
        &&label_80B84080,
        &&label_80B84084,
        &&label_80B84088,
        &&label_80B8408C,
        &&label_80B84090,
        &&label_80B84094,
        &&label_80B84098,
        &&label_80B8409C,
        &&label_80B840A0,
        &&label_80B840A4,
        &&label_80B840A8,
        &&label_80B840AC,
        &&label_80B840B0,
        &&label_80B840B4,
        &&label_80B840B8,
        &&label_80B840BC,
        &&label_80B840C0,
        &&label_80B840C4,
        &&label_80B840C8,
        &&label_80B840CC,
        &&label_80B840D0,
        &&label_80B840D4,
        &&label_80B840D8,
        &&label_80B840DC,
        &&label_80B840E0,
        &&label_80B840E4,
        &&label_80B840E8,
        &&label_80B840EC,
        &&label_80B840F0,
        &&label_80B840F4,
        &&label_80B840F8,
        &&label_80B840FC,
        &&label_80B84100,
        &&label_80B84104,
        &&label_80B84108,
        &&label_80B8410C,
        &&label_80B84110,
        &&label_80B84114,
        &&label_80B84118,
        &&label_80B8411C,
        &&label_80B84120,
        &&label_80B84124,
        &&label_80B84128,
        &&label_80B8412C,
        &&label_80B84130,
        &&label_80B84134,
        &&label_80B84138,
        &&label_80B8413C,
        &&label_80B84140,
        &&label_80B84144,
        &&label_80B84148,
        &&label_80B8414C,
        &&label_80B84150,
        &&label_80B84154,
        &&label_80B84158,
        &&label_80B8415C,
        &&label_80B84160,
        &&label_80B84164,
        &&label_80B84168,
        &&label_80B8416C,
        &&label_80B84170,
        &&label_80B84174,
        &&label_80B84178,
        &&label_80B8417C,
        &&label_80B84180,
        &&label_80B84184,
        &&label_80B84188,
        &&label_80B8418C,
        &&label_80B84190,
        &&label_80B84194,
        &&label_80B84198,
        &&label_80B8419C,
        &&label_80B841A0,
        &&label_80B841A4,
        &&label_80B841A8,
        &&label_80B841AC,
        &&label_80B841B0,
        &&label_80B841B4,
        &&label_80B841B8,
        &&label_80B841BC,
        &&label_80B841C0,
        &&label_80B841C4,
        &&label_80B841C8,
        &&label_80B841CC,
        &&label_80B841D0,
        &&label_80B841D4,
        &&label_80B841D8,
        &&label_80B841DC,
        &&label_80B841E0,
        &&label_80B841E4,
        &&label_80B841E8,
        &&label_80B841EC,
        &&label_80B841F0,
        &&label_80B841F4,
        &&label_80B841F8,
        &&label_80B841FC,
        &&label_80B84200,
        &&label_80B84204,
        &&label_80B84208,
        &&label_80B8420C,
        &&label_80B84210,
        &&label_80B84214,
        &&label_80B84218,
        &&label_80B8421C,
        &&label_80B84220,
        &&label_80B84224,
        &&label_80B84228,
        &&label_80B8422C,
        &&label_80B84230,
        &&label_80B84234,
        &&label_80B84238,
        &&label_80B8423C,
        &&label_80B84240,
        &&label_80B84244,
        &&label_80B84248,
        &&label_80B8424C,
        &&label_80B84250,
        &&label_80B84254,
        &&label_80B84258,
        &&label_80B8425C,
        &&label_80B84260,
        &&label_80B84264,
        &&label_80B84268,
        &&label_80B8426C,
        &&label_80B84270,
        &&label_80B84274,
        &&label_80B84278,
        &&label_80B8427C,
        &&label_80B84280,
        &&label_80B84284,
        &&label_80B84288,
        &&label_80B8428C,
        &&label_80B84290,
        &&label_80B84294,
        &&label_80B84298,
        &&label_80B8429C,
        &&label_80B842A0,
        &&label_80B842A4,
        &&label_80B842A8,
        &&label_80B842AC,
        &&label_80B842B0,
        &&label_80B842B4,
        &&label_80B842B8,
        &&label_80B842BC,
        &&label_80B842C0,
        &&label_80B842C4,
        &&label_80B842C8,
        &&label_80B842CC,
        &&label_80B842D0,
        &&label_80B842D4,
        &&label_80B842D8,
        &&label_80B842DC,
        &&label_80B842E0,
        &&label_80B842E4,
        &&label_80B842E8,
        &&label_80B842EC,
        &&label_80B842F0,
        &&label_80B842F4,
        &&label_80B842F8,
        &&label_80B842FC,
        &&label_80B84300,
        &&label_80B84304,
        &&label_80B84308,
        &&label_80B8430C,
        &&label_80B84310,
        &&label_80B84314,
        &&label_80B84318,
        &&label_80B8431C,
        &&label_80B84320,
        &&label_80B84324,
        &&label_80B84328,
        &&label_80B8432C,
        &&label_80B84330,
        &&label_80B84334,
        &&label_80B84338,
        &&label_80B8433C,
        &&label_80B84340,
        &&label_80B84344,
        &&label_80B84348,
        &&label_80B8434C,
        &&label_80B84350,
        &&label_80B84354,
        &&label_80B84358,
        &&label_80B8435C,
        &&label_80B84360,
        &&label_80B84364,
        &&label_80B84368,
        &&label_80B8436C,
        &&label_80B84370,
        &&label_80B84374,
        &&label_80B84378,
        &&label_80B8437C,
        &&label_80B84380,
        &&label_80B84384,
        &&label_80B84388,
        &&label_80B8438C,
        &&label_80B84390,
        &&label_80B84394,
        &&label_80B84398,
        &&label_80B8439C,
        &&label_80B843A0,
        &&label_80B843A4,
        &&label_80B843A8,
        &&label_80B843AC,
        &&label_80B843B0,
        &&label_80B843B4,
        &&label_80B843B8,
        &&label_80B843BC,
        &&label_80B843C0,
        &&label_80B843C4,
        &&label_80B843C8,
        &&label_80B843CC,
        &&label_80B843D0,
        &&label_80B843D4,
        &&label_80B843D8,
        &&label_80B843DC,
        &&label_80B843E0,
        &&label_80B843E4,
        &&label_80B843E8,
        &&label_80B843EC,
        &&label_80B843F0,
        &&label_80B843F4,
        &&label_80B843F8,
        &&label_80B843FC,
        &&label_80B84400,
        &&label_80B84404,
        &&label_80B84408,
        &&label_80B8440C,
        &&label_80B84410,
        &&label_80B84414,
        &&label_80B84418,
        &&label_80B8441C,
        &&label_80B84420,
        &&label_80B84424,
        &&label_80B84428,
        &&label_80B8442C,
        &&label_80B84430,
        &&label_80B84434,
        &&label_80B84438,
        &&label_80B8443C,
        &&label_80B84440,
        &&label_80B84444,
        &&label_80B84448,
        &&label_80B8444C,
        &&label_80B84450,
        &&label_80B84454,
        &&label_80B84458,
        &&label_80B8445C,
        &&label_80B84460,
        &&label_80B84464,
        &&label_80B84468,
        &&label_80B8446C,
        &&label_80B84470,
        &&label_80B84474,
        &&label_80B84478,
        &&label_80B8447C,
        &&label_80B84480,
        &&label_80B84484,
        &&label_80B84488,
        &&label_80B8448C,
        &&label_80B84490,
        &&label_80B84494,
        &&label_80B84498,
        &&label_80B8449C,
        &&label_80B844A0,
        &&label_80B844A4,
        &&label_80B844A8,
        &&label_80B844AC,
        &&label_80B844B0,
        &&label_80B844B4,
        &&label_80B844B8,
        &&label_80B844BC,
        &&label_80B844C0,
        &&label_80B844C4,
        &&label_80B844C8,
        &&label_80B844CC,
        &&label_80B844D0,
        &&label_80B844D4,
        &&label_80B844D8,
        &&label_80B844DC,
        &&label_80B844E0,
        &&label_80B844E4,
        &&label_80B844E8,
        &&label_80B844EC,
        &&label_80B844F0,
        &&label_80B844F4,
        &&label_80B844F8,
        &&label_80B844FC,
        &&label_80B84500,
        &&label_80B84504,
        &&label_80B84508,
        &&label_80B8450C,
        &&label_80B84510,
        &&label_80B84514,
        &&label_80B84518,
        &&label_80B8451C,
        &&label_80B84520,
        &&label_80B84524,
        &&label_80B84528,
        &&label_80B8452C,
        &&label_80B84530,
        &&label_80B84534,
        &&label_80B84538,
        &&label_80B8453C,
        &&label_80B84540,
        &&label_80B84544,
        &&label_80B84548,
        &&label_80B8454C,
        &&label_80B84550,
        &&label_80B84554,
        &&label_80B84558,
        &&label_80B8455C,
        &&label_80B84560,
        &&label_80B84564,
        &&label_80B84568,
        &&label_80B8456C,
        &&label_80B84570,
        &&label_80B84574,
        &&label_80B84578,
        &&label_80B8457C,
        &&label_80B84580,
        &&label_80B84584,
        &&label_80B84588,
        &&label_80B8458C,
        &&label_80B84590,
        &&label_80B84594,
        &&label_80B84598,
        &&label_80B8459C,
        &&label_80B845A0,
        &&label_80B845A4,
        &&label_80B845A8,
        &&label_80B845AC,
        &&label_80B845B0,
        &&label_80B845B4,
        &&label_80B845B8,
        &&label_80B845BC,
        &&label_80B845C0,
        &&label_80B845C4,
        &&label_80B845C8,
        &&label_80B845CC,
        &&label_80B845D0,
        &&label_80B845D4,
        &&label_80B845D8,
        &&label_80B845DC,
        &&label_80B845E0,
        &&label_80B845E4,
        &&label_80B845E8,
        &&label_80B845EC,
        &&label_80B845F0,
        &&label_80B845F4,
        &&label_80B845F8,
        &&label_80B845FC,
        &&label_80B84600,
        &&label_80B84604,
        &&label_80B84608,
        &&label_80B8460C,
        &&label_80B84610,
        &&label_80B84614,
        &&label_80B84618,
        &&label_80B8461C,
        &&label_80B84620,
        &&label_80B84624,
        &&label_80B84628,
        &&label_80B8462C,
        &&label_80B84630,
        &&label_80B84634,
        &&label_80B84638,
        &&label_80B8463C,
        &&label_80B84640,
        &&label_80B84644,
        &&label_80B84648,
        &&label_80B8464C,
        &&label_80B84650,
        &&label_80B84654,
        &&label_80B84658,
        &&label_80B8465C,
        &&label_80B84660,
        &&label_80B84664,
        &&label_80B84668,
        &&label_80B8466C,
        &&label_80B84670,
        &&label_80B84674,
        &&label_80B84678,
        &&label_80B8467C,
        &&label_80B84680,
        &&label_80B84684,
        &&label_80B84688,
        &&label_80B8468C,
        &&label_80B84690,
        &&label_80B84694,
        &&label_80B84698,
        &&label_80B8469C,
        &&label_80B846A0,
        &&label_80B846A4,
        &&label_80B846A8,
        &&label_80B846AC,
        &&label_80B846B0,
        &&label_80B846B4,
        &&label_80B846B8,
        &&label_80B846BC,
        &&label_80B846C0,
        &&label_80B846C4,
        &&label_80B846C8,
        &&label_80B846CC,
        &&label_80B846D0,
        &&label_80B846D4,
        &&label_80B846D8,
        &&label_80B846DC,
        &&label_80B846E0,
        &&label_80B846E4,
        &&label_80B846E8,
        &&label_80B846EC,
        &&label_80B846F0,
        &&label_80B846F4,
        &&label_80B846F8,
        &&label_80B846FC,
        &&label_80B84700,
        &&label_80B84704,
        &&label_80B84708,
        &&label_80B8470C,
        &&label_80B84710,
        &&label_80B84714,
        &&label_80B84718,
        &&label_80B8471C,
        &&label_80B84720,
        &&label_80B84724,
        &&label_80B84728,
        &&label_80B8472C,
        &&label_80B84730,
        &&label_80B84734,
        &&label_80B84738,
        &&label_80B8473C,
        &&label_80B84740,
        &&label_80B84744,
        &&label_80B84748,
        &&label_80B8474C,
        &&label_80B84750,
        &&label_80B84754,
        &&label_80B84758,
        &&label_80B8475C,
        &&label_80B84760,
        &&label_80B84764,
        &&label_80B84768,
        &&label_80B8476C,
        &&label_80B84770,
        &&label_80B84774,
        &&label_80B84778,
        &&label_80B8477C,
        &&label_80B84780,
        &&label_80B84784,
        &&label_80B84788,
        &&label_80B8478C,
        &&label_80B84790,
        &&label_80B84794,
        &&label_80B84798,
        &&label_80B8479C,
        &&label_80B847A0,
        &&label_80B847A4,
        &&label_80B847A8,
        &&label_80B847AC,
        &&label_80B847B0,
        &&label_80B847B4,
        &&label_80B847B8,
        &&label_80B847BC,
        &&label_80B847C0,
        &&label_80B847C4,
        &&label_80B847C8,
        &&label_80B847CC,
        &&label_80B847D0,
        &&label_80B847D4,
        &&label_80B847D8,
        &&label_80B847DC,
        &&label_80B847E0,
        &&label_80B847E4,
        &&label_80B847E8,
        &&label_80B847EC,
        &&label_80B847F0,
        &&label_80B847F4,
        &&label_80B847F8,
        &&label_80B847FC,
        &&label_80B84800,
        &&label_80B84804,
        &&label_80B84808,
        &&label_80B8480C,
        &&label_80B84810,
        &&label_80B84814,
        &&label_80B84818,
        &&label_80B8481C,
        &&label_80B84820,
        &&label_80B84824,
        &&label_80B84828,
        &&label_80B8482C,
        &&label_80B84830,
        &&label_80B84834,
        &&label_80B84838,
        &&label_80B8483C,
        &&label_80B84840,
        &&label_80B84844,
        &&label_80B84848,
        &&label_80B8484C,
        &&label_80B84850,
        &&label_80B84854,
        &&label_80B84858,
        &&label_80B8485C,
        &&label_80B84860,
        &&label_80B84864,
        &&label_80B84868,
        &&label_80B8486C,
        &&label_80B84870,
        &&label_80B84874,
        &&label_80B84878,
        &&label_80B8487C,
        &&label_80B84880,
        &&label_80B84884,
        &&label_80B84888,
        &&label_80B8488C,
        &&label_80B84890,
        &&label_80B84894,
        &&label_80B84898,
        &&label_80B8489C,
        &&label_80B848A0,
        &&label_80B848A4,
        &&label_80B848A8,
        &&label_80B848AC,
        &&label_80B848B0,
        &&label_80B848B4,
        &&label_80B848B8,
        &&label_80B848BC,
        &&label_80B848C0,
        &&label_80B848C4,
        &&label_80B848C8,
        &&label_80B848CC,
        &&label_80B848D0,
        &&label_80B848D4,
        &&label_80B848D8,
        &&label_80B848DC,
        &&label_80B848E0,
        &&label_80B848E4,
        &&label_80B848E8,
        &&label_80B848EC,
        &&label_80B848F0,
        &&label_80B848F4,
        &&label_80B848F8,
        &&label_80B848FC,
        &&label_80B84900,
        &&label_80B84904,
        &&label_80B84908,
        &&label_80B8490C,
        &&label_80B84910,
        &&label_80B84914,
        &&label_80B84918,
        &&label_80B8491C,
        &&label_80B84920,
        &&label_80B84924,
        &&label_80B84928,
        &&label_80B8492C,
        &&label_80B84930,
        &&label_80B84934,
        &&label_80B84938,
        &&label_80B8493C,
        &&label_80B84940,
        &&label_80B84944,
        &&label_80B84948,
        &&label_80B8494C,
        &&label_80B84950,
        &&label_80B84954,
        &&label_80B84958,
        &&label_80B8495C,
        &&label_80B84960,
        &&label_80B84964,
        &&label_80B84968,
        &&label_80B8496C,
        &&label_80B84970,
        &&label_80B84974,
        &&label_80B84978,
        &&label_80B8497C,
        &&label_80B84980,
        &&label_80B84984,
        &&label_80B84988,
        &&label_80B8498C,
        &&label_80B84990,
        &&label_80B84994,
        &&label_80B84998,
        &&label_80B8499C,
        &&label_80B849A0,
        &&label_80B849A4,
        &&label_80B849A8,
        &&label_80B849AC,
        &&label_80B849B0,
        &&label_80B849B4,
        &&label_80B849B8,
        &&label_80B849BC,
        &&label_80B849C0,
        &&label_80B849C4,
        &&label_80B849C8,
        &&label_80B849CC,
        &&label_80B849D0,
        &&label_80B849D4,
        &&label_80B849D8,
        &&label_80B849DC,
        &&label_80B849E0,
        &&label_80B849E4,
        &&label_80B849E8,
        &&label_80B849EC,
        &&label_80B849F0,
        &&label_80B849F4,
        &&label_80B849F8,
        &&label_80B849FC,
        &&label_80B84A00,
        &&label_80B84A04,
        &&label_80B84A08,
        &&label_80B84A0C,
        &&label_80B84A10,
        &&label_80B84A14,
        &&label_80B84A18,
        &&label_80B84A1C,
        &&label_80B84A20,
        &&label_80B84A24,
        &&label_80B84A28,
        &&label_80B84A2C,
        &&label_80B84A30,
        &&label_80B84A34,
        &&label_80B84A38,
        &&label_80B84A3C,
        &&label_80B84A40,
        &&label_80B84A44,
        &&label_80B84A48,
        &&label_80B84A4C,
        &&label_80B84A50,
        &&label_80B84A54,
        &&label_80B84A58,
        &&label_80B84A5C,
        &&label_80B84A60,
        &&label_80B84A64,
        &&label_80B84A68,
        &&label_80B84A6C,
        &&label_80B84A70,
        &&label_80B84A74,
        &&label_80B84A78,
        &&label_80B84A7C,
        &&label_80B84A80,
        &&label_80B84A84,
        &&label_80B84A88,
        &&label_80B84A8C,
        &&label_80B84A90,
        &&label_80B84A94,
        &&label_80B84A98,
        &&label_80B84A9C,
        &&label_80B84AA0,
        &&label_80B84AA4,
        &&label_80B84AA8,
        &&label_80B84AAC,
        &&label_80B84AB0,
        &&label_80B84AB4,
        &&label_80B84AB8,
        &&label_80B84ABC,
        &&label_80B84AC0,
        &&label_80B84AC4,
        &&label_80B84AC8,
        &&label_80B84ACC,
        &&label_80B84AD0,
        &&label_80B84AD4,
        &&label_80B84AD8,
        &&label_80B84ADC,
        &&label_80B84AE0,
        &&label_80B84AE4,
        &&label_80B84AE8,
        &&label_80B84AEC,
        &&label_80B84AF0,
        &&label_80B84AF4,
        &&label_80B84AF8,
        &&label_80B84AFC,
        &&label_80B84B00,
        &&label_80B84B04,
        &&label_80B84B08,
        &&label_80B84B0C,
        &&label_80B84B10,
        &&label_80B84B14,
        &&label_80B84B18,
        &&label_80B84B1C,
        &&label_80B84B20,
        &&label_80B84B24,
        &&label_80B84B28,
        &&label_80B84B2C,
        &&label_80B84B30,
        &&label_80B84B34,
        &&label_80B84B38,
        &&label_80B84B3C,
        &&label_80B84B40,
        &&label_80B84B44,
        &&label_80B84B48,
        &&label_80B84B4C,
        &&label_80B84B50,
        &&label_80B84B54,
        &&label_80B84B58,
        &&label_80B84B5C,
        &&label_80B84B60,
        &&label_80B84B64,
        &&label_80B84B68,
        &&label_80B84B6C,
        &&label_80B84B70,
        &&label_80B84B74,
        &&label_80B84B78,
        &&label_80B84B7C,
        &&label_80B84B80,
        &&label_80B84B84,
        &&label_80B84B88,
        &&label_80B84B8C,
        &&label_80B84B90,
        &&label_80B84B94,
        &&label_80B84B98,
        &&label_80B84B9C,
        &&label_80B84BA0,
        &&label_80B84BA4,
        &&label_80B84BA8,
        &&label_80B84BAC,
        &&label_80B84BB0,
        &&label_80B84BB4,
        &&label_80B84BB8,
        &&label_80B84BBC,
        &&label_80B84BC0,
        &&label_80B84BC4,
        &&label_80B84BC8,
        &&label_80B84BCC,
        &&label_80B84BD0,
        &&label_80B84BD4,
        &&label_80B84BD8,
        &&label_80B84BDC,
        &&label_80B84BE0,
        &&label_80B84BE4,
        &&label_80B84BE8,
        &&label_80B84BEC,
        &&label_80B84BF0,
        &&label_80B84BF4,
        &&label_80B84BF8,
        &&label_80B84BFC,
        &&label_80B84C00,
        &&label_80B84C04,
        &&label_80B84C08,
        &&label_80B84C0C,
        &&label_80B84C10,
        &&label_80B84C14,
        &&label_80B84C18,
        &&label_80B84C1C,
        &&label_80B84C20,
        &&label_80B84C24,
        &&label_80B84C28,
        &&label_80B84C2C,
        &&label_80B84C30,
        &&label_80B84C34,
        &&label_80B84C38,
        &&label_80B84C3C,
        &&label_80B84C40,
        &&label_80B84C44,
        &&label_80B84C48,
        &&label_80B84C4C,
        &&label_80B84C50,
        &&label_80B84C54,
        &&label_80B84C58,
        &&label_80B84C5C,
        &&label_80B84C60,
        &&label_80B84C64,
        &&label_80B84C68,
        &&label_80B84C6C,
        &&label_80B84C70,
        &&label_80B84C74,
        &&label_80B84C78,
        &&label_80B84C7C,
        &&label_80B84C80,
        &&label_80B84C84,
        &&label_80B84C88,
        &&label_80B84C8C,
        &&label_80B84C90,
        &&label_80B84C94,
        &&label_80B84C98,
        &&label_80B84C9C,
        &&label_80B84CA0,
        &&label_80B84CA4,
        &&label_80B84CA8,
        &&label_80B84CAC,
        &&label_80B84CB0,
        &&label_80B84CB4,
        &&label_80B84CB8,
        &&label_80B84CBC,
        &&label_80B84CC0,
        &&label_80B84CC4,
        &&label_80B84CC8,
        &&label_80B84CCC,
        &&label_80B84CD0,
        &&label_80B84CD4,
        &&label_80B84CD8,
        &&label_80B84CDC,
        &&label_80B84CE0,
        &&label_80B84CE4,
        &&label_80B84CE8,
        &&label_80B84CEC,
        &&label_80B84CF0,
        &&label_80B84CF4,
        &&label_80B84CF8,
        &&label_80B84CFC,
        &&label_80B84D00,
        &&label_80B84D04,
        &&label_80B84D08,
        &&label_80B84D0C,
        &&label_80B84D10,
        &&label_80B84D14,
        &&label_80B84D18,
        &&label_80B84D1C,
        &&label_80B84D20,
        &&label_80B84D24,
        &&label_80B84D28,
        &&label_80B84D2C,
        &&label_80B84D30,
        &&label_80B84D34,
        &&label_80B84D38,
        &&label_80B84D3C,
        &&label_80B84D40,
        &&label_80B84D44,
        &&label_80B84D48,
        &&label_80B84D4C,
        &&label_80B84D50,
        &&label_80B84D54,
        &&label_80B84D58,
        &&label_80B84D5C,
        &&label_80B84D60,
        &&label_80B84D64,
        &&label_80B84D68,
        &&label_80B84D6C,
        &&label_80B84D70,
        &&label_80B84D74,
        &&label_80B84D78,
        &&label_80B84D7C,
        &&label_80B84D80,
        &&label_80B84D84,
        &&label_80B84D88,
        &&label_80B84D8C,
        &&label_80B84D90,
        &&label_80B84D94,
        &&label_80B84D98,
        &&label_80B84D9C,
        &&label_80B84DA0,
        &&label_80B84DA4,
        &&label_80B84DA8,
        &&label_80B84DAC,
        &&label_80B84DB0,
        &&label_80B84DB4,
        &&label_80B84DB8,
        &&label_80B84DBC,
        &&label_80B84DC0,
        &&label_80B84DC4,
        &&label_80B84DC8,
        &&label_80B84DCC,
        &&label_80B84DD0,
        &&label_80B84DD4,
        &&label_80B84DD8,
        &&label_80B84DDC,
        &&label_80B84DE0,
        &&label_80B84DE4,
        &&label_80B84DE8,
        &&label_80B84DEC,
        &&label_80B84DF0,
        &&label_80B84DF4,
        &&label_80B84DF8,
        &&label_80B84DFC,
        &&label_80B84E00,
        &&label_80B84E04,
        &&label_80B84E08,
        &&label_80B84E0C,
        &&label_80B84E10,
        &&label_80B84E14,
        &&label_80B84E18,
        &&label_80B84E1C,
        &&label_80B84E20,
        &&label_80B84E24,
        &&label_80B84E28,
        &&label_80B84E2C,
        &&label_80B84E30,
        &&label_80B84E34,
        &&label_80B84E38,
        &&label_80B84E3C,
        &&label_80B84E40,
        &&label_80B84E44,
        &&label_80B84E48,
        &&label_80B84E4C,
        &&label_80B84E50,
        &&label_80B84E54,
        &&label_80B84E58,
        &&label_80B84E5C,
        &&label_80B84E60,
        &&label_80B84E64,
        &&label_80B84E68,
        &&label_80B84E6C,
        &&label_80B84E70,
        &&label_80B84E74,
        &&label_80B84E78,
        &&label_80B84E7C,
        &&label_80B84E80,
        &&label_80B84E84,
        &&label_80B84E88,
        &&label_80B84E8C,
        &&label_80B84E90,
        &&label_80B84E94,
        &&label_80B84E98,
        &&label_80B84E9C,
        &&label_80B84EA0,
        &&label_80B84EA4,
        &&label_80B84EA8,
        &&label_80B84EAC,
        &&label_80B84EB0,
        &&label_80B84EB4,
        &&label_80B84EB8,
        &&label_80B84EBC,
        &&label_80B84EC0,
        &&label_80B84EC4,
        &&label_80B84EC8,
        &&label_80B84ECC,
        &&label_80B84ED0,
        &&label_80B84ED4,
        &&label_80B84ED8,
        &&label_80B84EDC,
        &&label_80B84EE0,
        &&label_80B84EE4,
        &&label_80B84EE8,
        &&label_80B84EEC,
        &&label_80B84EF0,
        &&label_80B84EF4,
        &&label_80B84EF8,
        &&label_80B84EFC,
        &&label_80B84F00,
        &&label_80B84F04,
        &&label_80B84F08,
        &&label_80B84F0C,
        &&label_80B84F10,
        &&label_80B84F14,
        &&label_80B84F18,
        &&label_80B84F1C,
        &&label_80B84F20,
        &&label_80B84F24,
        &&label_80B84F28,
        &&label_80B84F2C,
        &&label_80B84F30,
        &&label_80B84F34,
        &&label_80B84F38,
        &&label_80B84F3C,
        &&label_80B84F40,
        &&label_80B84F44,
        &&label_80B84F48,
        &&label_80B84F4C,
        &&label_80B84F50,
        &&label_80B84F54,
        &&label_80B84F58,
        &&label_80B84F5C,
        &&label_80B84F60,
        &&label_80B84F64,
        &&label_80B84F68,
        &&label_80B84F6C,
        &&label_80B84F70,
        &&label_80B84F74,
        &&label_80B84F78,
        &&label_80B84F7C,
        &&label_80B84F80,
        &&label_80B84F84,
        &&label_80B84F88,
        &&label_80B84F8C,
        &&label_80B84F90,
        &&label_80B84F94,
        &&label_80B84F98,
        &&label_80B84F9C,
        &&label_80B84FA0,
        &&label_80B84FA4,
        &&label_80B84FA8,
        &&label_80B84FAC,
        &&label_80B84FB0,
        &&label_80B84FB4,
        &&label_80B84FB8,
        &&label_80B84FBC,
        &&label_80B84FC0,
        &&label_80B84FC4,
        &&label_80B84FC8,
        &&label_80B84FCC,
        &&label_80B84FD0,
        &&label_80B84FD4,
        &&label_80B84FD8,
        &&label_80B84FDC,
        &&label_80B84FE0,
        &&label_80B84FE4,
        &&label_80B84FE8,
        &&label_80B84FEC,
        &&label_80B84FF0,
        &&label_80B84FF4,
        &&label_80B84FF8,
        &&label_80B84FFC,
        &&label_80B85000,
        &&label_80B85004,
        &&label_80B85008,
        &&label_80B8500C,
        &&label_80B85010,
        &&label_80B85014,
        &&label_80B85018,
        &&label_80B8501C,
        &&label_80B85020,
        &&label_80B85024,
        &&label_80B85028,
        &&label_80B8502C,
        &&label_80B85030,
        &&label_80B85034,
        &&label_80B85038,
        &&label_80B8503C,
        &&label_80B85040,
        &&label_80B85044,
        &&label_80B85048,
        &&label_80B8504C,
        &&label_80B85050,
        &&label_80B85054,
        &&label_80B85058,
        &&label_80B8505C,
        &&label_80B85060,
        &&label_80B85064,
        &&label_80B85068,
        &&label_80B8506C,
        &&label_80B85070,
        &&label_80B85074,
        &&label_80B85078,
        &&label_80B8507C,
        &&label_80B85080,
        &&label_80B85084,
        &&label_80B85088,
        &&label_80B8508C,
        &&label_80B85090,
        &&label_80B85094,
        &&label_80B85098,
        &&label_80B8509C,
        &&label_80B850A0,
        &&label_80B850A4,
        &&label_80B850A8,
        &&label_80B850AC,
        &&label_80B850B0,
        &&label_80B850B4,
        &&label_80B850B8,
        &&label_80B850BC,
        &&label_80B850C0,
        &&label_80B850C4,
        &&label_80B850C8,
        &&label_80B850CC,
        &&label_80B850D0,
        &&label_80B850D4,
        &&label_80B850D8,
        &&label_80B850DC,
        &&label_80B850E0,
        &&label_80B850E4,
        &&label_80B850E8,
        &&label_80B850EC,
        &&label_80B850F0,
        &&label_80B850F4,
        &&label_80B850F8,
        &&label_80B850FC,
        &&label_80B85100,
        &&label_80B85104,
        &&label_80B85108,
        &&label_80B8510C,
        &&label_80B85110,
        &&label_80B85114,
        &&label_80B85118,
        &&label_80B8511C,
        &&label_80B85120,
        &&label_80B85124,
        &&label_80B85128,
        &&label_80B8512C,
        &&label_80B85130,
        &&label_80B85134,
        &&label_80B85138,
        &&label_80B8513C,
        &&label_80B85140,
        &&label_80B85144,
        &&label_80B85148,
        &&label_80B8514C,
        &&label_80B85150,
        &&label_80B85154,
        &&label_80B85158,
        &&label_80B8515C,
        &&label_80B85160,
        &&label_80B85164,
        &&label_80B85168,
        &&label_80B8516C,
        &&label_80B85170,
        &&label_80B85174,
        &&label_80B85178,
        &&label_80B8517C,
        &&label_80B85180,
        &&label_80B85184,
        &&label_80B85188,
        &&label_80B8518C,
        &&label_80B85190,
        &&label_80B85194,
        &&label_80B85198,
        &&label_80B8519C,
        &&label_80B851A0,
        &&label_80B851A4,
        &&label_80B851A8,
        &&label_80B851AC,
        &&label_80B851B0,
        &&label_80B851B4,
        &&label_80B851B8,
        &&label_80B851BC,
        &&label_80B851C0,
        &&label_80B851C4,
        &&label_80B851C8,
        &&label_80B851CC,
        &&label_80B851D0,
        &&label_80B851D4,
        &&label_80B851D8,
        &&label_80B851DC,
        &&label_80B851E0,
        &&label_80B851E4,
        &&label_80B851E8,
        &&label_80B851EC,
        &&label_80B851F0,
        &&label_80B851F4,
        &&label_80B851F8,
        &&label_80B851FC,
        &&label_80B85200,
        &&label_80B85204,
        &&label_80B85208,
        &&label_80B8520C,
        &&label_80B85210,
        &&label_80B85214,
        &&label_80B85218,
        &&label_80B8521C,
        &&label_80B85220,
        &&label_80B85224,
        &&label_80B85228,
        &&label_80B8522C,
        &&label_80B85230,
        &&label_80B85234,
        &&label_80B85238,
        &&label_80B8523C,
        &&label_80B85240,
        &&label_80B85244,
        &&label_80B85248,
        &&label_80B8524C,
        &&label_80B85250,
        &&label_80B85254,
        &&label_80B85258,
        &&label_80B8525C,
        &&label_80B85260,
        &&label_80B85264,
        &&label_80B85268,
        &&label_80B8526C,
        &&label_80B85270,
        &&label_80B85274,
        &&label_80B85278,
        &&label_80B8527C,
        &&label_80B85280,
        &&label_80B85284,
        &&label_80B85288,
        &&label_80B8528C,
        &&label_80B85290,
        &&label_80B85294,
        &&label_80B85298,
        &&label_80B8529C,
        &&label_80B852A0,
        &&label_80B852A4,
        &&label_80B852A8,
        &&label_80B852AC,
        &&label_80B852B0,
        &&label_80B852B4,
        &&label_80B852B8,
        &&label_80B852BC,
        &&label_80B852C0,
        &&label_80B852C4,
        &&label_80B852C8,
        &&label_80B852CC,
        &&label_80B852D0,
        &&label_80B852D4,
        &&label_80B852D8,
        &&label_80B852DC,
        &&label_80B852E0,
        &&label_80B852E4,
        &&label_80B852E8,
        &&label_80B852EC,
        &&label_80B852F0,
        &&label_80B852F4,
        &&label_80B852F8,
        &&label_80B852FC,
        &&label_80B85300,
        &&label_80B85304,
        &&label_80B85308,
        &&label_80B8530C,
        &&label_80B85310,
        &&label_80B85314,
        &&label_80B85318,
        &&label_80B8531C,
        &&label_80B85320,
        &&label_80B85324,
        &&label_80B85328,
        &&label_80B8532C,
        &&label_80B85330,
        &&label_80B85334,
        &&label_80B85338,
        &&label_80B8533C,
        &&label_80B85340,
        &&label_80B85344,
        &&label_80B85348,
        &&label_80B8534C,
        &&label_80B85350,
        &&label_80B85354,
        &&label_80B85358,
        &&label_80B8535C,
        &&label_80B85360,
        &&label_80B85364,
        &&label_80B85368,
        &&label_80B8536C,
        &&label_80B85370,
        &&label_80B85374,
        &&label_80B85378,
        &&label_80B8537C,
        &&label_80B85380,
        &&label_80B85384,
        &&label_80B85388,
        &&label_80B8538C,
        &&label_80B85390,
        &&label_80B85394,
        &&label_80B85398,
        &&label_80B8539C,
        &&label_80B853A0,
        &&label_80B853A4,
        &&label_80B853A8,
        &&label_80B853AC,
        &&label_80B853B0,
        &&label_80B853B4,
        &&label_80B853B8,
        &&label_80B853BC,
        &&label_80B853C0,
        &&label_80B853C4,
        &&label_80B853C8,
        &&label_80B853CC,
        &&label_80B853D0,
        &&label_80B853D4,
        &&label_80B853D8,
        &&label_80B853DC,
        &&label_80B853E0,
        &&label_80B853E4,
        &&label_80B853E8,
        &&label_80B853EC,
        &&label_80B853F0,
        &&label_80B853F4,
        &&label_80B853F8,
        &&label_80B853FC,
        &&label_80B85400,
        &&label_80B85404,
        &&label_80B85408,
        &&label_80B8540C,
        &&label_80B85410,
        &&label_80B85414,
        &&label_80B85418,
        &&label_80B8541C,
        &&label_80B85420,
        &&label_80B85424,
        &&label_80B85428,
        &&label_80B8542C,
        &&label_80B85430,
        &&label_80B85434,
        &&label_80B85438,
        &&label_80B8543C,
        &&label_80B85440,
        &&label_80B85444,
        &&label_80B85448,
        &&label_80B8544C,
        &&label_80B85450,
        &&label_80B85454,
        &&label_80B85458,
        &&label_80B8545C,
        &&label_80B85460,
        &&label_80B85464,
        &&label_80B85468,
        &&label_80B8546C,
        &&label_80B85470,
        &&label_80B85474,
        &&label_80B85478,
        &&label_80B8547C,
        &&label_80B85480,
        &&label_80B85484,
        &&label_80B85488,
        &&label_80B8548C,
        &&label_80B85490,
        &&label_80B85494,
        &&label_80B85498,
        &&label_80B8549C,
        &&label_80B854A0,
        &&label_80B854A4,
        &&label_80B854A8,
        &&label_80B854AC,
        &&label_80B854B0,
        &&label_80B854B4,
        &&label_80B854B8,
        &&label_80B854BC,
        &&label_80B854C0,
        &&label_80B854C4,
        &&label_80B854C8,
        &&label_80B854CC,
        &&label_80B854D0,
        &&label_80B854D4,
        &&label_80B854D8,
        &&label_80B854DC,
        &&label_80B854E0,
        &&label_80B854E4,
        &&label_80B854E8,
        &&label_80B854EC,
        &&label_80B854F0,
        &&label_80B854F4,
        &&label_80B854F8,
        &&label_80B854FC,
        &&label_80B85500,
        &&label_80B85504,
        &&label_80B85508,
        &&label_80B8550C,
        &&label_80B85510,
        &&label_80B85514,
        &&label_80B85518,
        &&label_80B8551C,
        &&label_80B85520,
        &&label_80B85524,
        &&label_80B85528,
        &&label_80B8552C,
        &&label_80B85530,
        &&label_80B85534,
        &&label_80B85538,
        &&label_80B8553C,
        &&label_80B85540,
        &&label_80B85544,
        &&label_80B85548,
        &&label_80B8554C,
        &&label_80B85550,
        &&label_80B85554,
        &&label_80B85558,
        &&label_80B8555C,
        &&label_80B85560,
        &&label_80B85564,
        &&label_80B85568,
        &&label_80B8556C,
        &&label_80B85570,
        &&label_80B85574,
        &&label_80B85578,
        &&label_80B8557C,
        &&label_80B85580,
        &&label_80B85584,
        &&label_80B85588,
        &&label_80B8558C,
        &&label_80B85590,
        &&label_80B85594,
        &&label_80B85598,
        &&label_80B8559C,
        &&label_80B855A0,
        &&label_80B855A4,
        &&label_80B855A8,
        &&label_80B855AC,
        &&label_80B855B0,
        &&label_80B855B4,
        &&label_80B855B8,
        &&label_80B855BC,
        &&label_80B855C0,
        &&label_80B855C4,
        &&label_80B855C8,
        &&label_80B855CC,
        &&label_80B855D0,
        &&label_80B855D4,
        &&label_80B855D8,
        &&label_80B855DC,
        &&label_80B855E0,
        &&label_80B855E4,
        &&label_80B855E8,
        &&label_80B855EC,
        &&label_80B855F0,
        &&label_80B855F4,
        &&label_80B855F8,
        &&label_80B855FC,
        &&label_80B85600,
        &&label_80B85604,
        &&label_80B85608,
        &&label_80B8560C,
        &&label_80B85610,
        &&label_80B85614,
        &&label_80B85618,
        &&label_80B8561C,
        &&label_80B85620,
        &&label_80B85624,
        &&label_80B85628,
        &&label_80B8562C,
        &&label_80B85630,
        &&label_80B85634,
        &&label_80B85638,
        &&label_80B8563C,
        &&label_80B85640,
        &&label_80B85644,
        &&label_80B85648,
        &&label_80B8564C,
        &&label_80B85650,
        &&label_80B85654,
        &&label_80B85658,
        &&label_80B8565C,
        &&label_80B85660,
        &&label_80B85664,
        &&label_80B85668,
        &&label_80B8566C,
        &&label_80B85670,
        &&label_80B85674,
        &&label_80B85678,
        &&label_80B8567C,
        &&label_80B85680,
        &&label_80B85684,
        &&label_80B85688,
        &&label_80B8568C,
        &&label_80B85690,
        &&label_80B85694,
        &&label_80B85698,
        &&label_80B8569C,
        &&label_80B856A0,
        &&label_80B856A4,
        &&label_80B856A8,
        &&label_80B856AC,
        &&label_80B856B0,
        &&label_80B856B4,
        &&label_80B856B8,
        &&label_80B856BC,
        &&label_80B856C0,
        &&label_80B856C4,
        &&label_80B856C8,
        &&label_80B856CC,
        &&label_80B856D0,
        &&label_80B856D4,
        &&label_80B856D8,
        &&label_80B856DC,
        &&label_80B856E0,
        &&label_80B856E4,
        &&label_80B856E8,
        &&label_80B856EC,
        &&label_80B856F0,
        &&label_80B856F4,
        &&label_80B856F8,
        &&label_80B856FC,
        &&label_80B85700,
        &&label_80B85704,
        &&label_80B85708,
        &&label_80B8570C,
        &&label_80B85710,
        &&label_80B85714,
        &&label_80B85718,
        &&label_80B8571C,
        &&label_80B85720,
        &&label_80B85724,
        &&label_80B85728,
        &&label_80B8572C,
        &&label_80B85730,
        &&label_80B85734,
        &&label_80B85738,
        &&label_80B8573C,
        &&label_80B85740,
        &&label_80B85744,
        &&label_80B85748,
        &&label_80B8574C,
        &&label_80B85750,
        &&label_80B85754,
        &&label_80B85758,
        &&label_80B8575C,
        &&label_80B85760,
        &&label_80B85764,
        &&label_80B85768,
        &&label_80B8576C,
        &&label_80B85770,
        &&label_80B85774,
        &&label_80B85778,
        &&label_80B8577C,
        &&label_80B85780,
        &&label_80B85784,
        &&label_80B85788,
        &&label_80B8578C,
        &&label_80B85790,
        &&label_80B85794,
        &&label_80B85798,
        &&label_80B8579C,
        &&label_80B857A0,
        &&label_80B857A4,
        &&label_80B857A8,
        &&label_80B857AC,
        &&label_80B857B0,
        &&label_80B857B4,
        &&label_80B857B8,
        &&label_80B857BC,
        &&label_80B857C0,
        &&label_80B857C4,
        &&label_80B857C8,
        &&label_80B857CC,
        &&label_80B857D0,
        &&label_80B857D4,
        &&label_80B857D8,
        &&label_80B857DC,
        &&label_80B857E0,
        &&label_80B857E4,
        &&label_80B857E8,
        &&label_80B857EC,
        &&label_80B857F0,
        &&label_80B857F4,
        &&label_80B857F8,
        &&label_80B857FC,
        &&label_80B85800,
        &&label_80B85804,
        &&label_80B85808,
        &&label_80B8580C,
        &&label_80B85810,
        &&label_80B85814,
        &&label_80B85818,
        &&label_80B8581C,
        &&label_80B85820,
        &&label_80B85824,
        &&label_80B85828,
        &&label_80B8582C,
        &&label_80B85830,
        &&label_80B85834,
        &&label_80B85838,
        &&label_80B8583C,
        &&label_80B85840,
        &&label_80B85844,
        &&label_80B85848,
        &&label_80B8584C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80B83AC0u && pc <= 0x80B8584Cu && ((pc - 0x80B83AC0u) & 3u) == 0u)
            goto *pc_table_80B83AC0[(pc - 0x80B83AC0u) >> 2];
    }
    return;
label_80B83AC0:
    ctx->pc = 0x80B83AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83AC0: stwu     r1, -16(r1)
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
label_80B83AC4:
    ctx->pc = 0x80B83AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B83AC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B83AC8:
    ctx->pc = 0x80B83AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B83AC8: stw     r0, 20(r1)
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
label_80B83ACC:
    ctx->pc = 0x80B83ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83ACCu)) return;
    // 80B83ACC: cmpwi   r3, 2
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

label_80B83AD0:
    ctx->pc = 0x80B83AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83AD0u)) return;
    // 80B83AD0: bc    12, 2, 0x80B84D24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B84D24;
        }
    }

label_80B83AD4:
    ctx->pc = 0x80B83AD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83AD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83AD4: bc    4, 0, 0x80B83AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B83AE8;
        }
    }

label_80B83AD8:
    ctx->pc = 0x80B83AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83AD8: cmpwi   r3, 0
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

label_80B83ADC:
    ctx->pc = 0x80B83ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83ADCu)) return;
    // 80B83ADC: bc    12, 2, 0x80B84D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B84D48;
        }
    }

label_80B83AE0:
    ctx->pc = 0x80B83AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83AE0: bc    4, 0, 0x80B83AF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B83AF0;
        }
    }

label_80B83AE4:
    ctx->pc = 0x80B83AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83AE4: b       0x80B84D48
    {
            goto label_80B84D48;
    }

label_80B83AE8:
    ctx->pc = 0x80B83AE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83AE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83AE8: cmpwi   r3, 4
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

label_80B83AEC:
    ctx->pc = 0x80B83AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83AECu)) return;
    // 80B83AEC: b       0x80B84D48
    {
            goto label_80B84D48;
    }

label_80B83AF0:
    ctx->pc = 0x80B83AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B83AF0: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B83AF4:
    ctx->pc = 0x80B83AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83AF4u)) return;
    // 80B83AF4: addi    r3, r3, 12072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12072);

label_80B83AF8:
    ctx->pc = 0x80B83AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83AF8u)) return;
    // 80B83AF8: bl      0x8050AF58
    {
            ctx->lr = 0x80B83AFCu;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80B83AFC:
    ctx->pc = 0x80B83AFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83AFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83AFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83B00:
    ctx->pc = 0x80B83B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B00u)) return;
    // 80B83B00: bl      0x80B854C0
    {
            ctx->lr = 0x80B83B04u;
            goto label_80B854C0;
    }

label_80B83B04:
    ctx->pc = 0x80B83B04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83B04: bl      0x8045DE7C
    {
            ctx->lr = 0x80B83B08u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80B83B08:
    ctx->pc = 0x80B83B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83B08: bl      0x80460A60
    {
            ctx->lr = 0x80B83B0Cu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80B83B0C:
    ctx->pc = 0x80B83B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83B0C: bl      0x80460A24
    {
            ctx->lr = 0x80B83B10u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80B83B10:
    ctx->pc = 0x80B83B10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83B10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83B14:
    ctx->pc = 0x80B83B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B14u)) return;
    // 80B83B14: bl      0x8045EC10
    {
            ctx->lr = 0x80B83B18u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B83B18:
    ctx->pc = 0x80B83B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83B18: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_80B83B1C:
    ctx->pc = 0x80B83B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B1Cu)) return;
    // 80B83B1C: bl      0x80406090
    {
            ctx->lr = 0x80B83B20u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80B83B20:
    ctx->pc = 0x80B83B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B83B20: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83B24:
    ctx->pc = 0x80B83B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B24u)) return;
    // 80B83B24: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_80B83B28:
    ctx->pc = 0x80B83B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B28u)) return;
    // 80B83B28: addi    r4, r4, 18200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18200);

label_80B83B2C:
    ctx->pc = 0x80B83B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B2Cu)) return;
    // 80B83B2C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83B30:
    ctx->pc = 0x80B83B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B30u)) return;
    // 80B83B30: addi    r5, r5, 8528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8528);

label_80B83B34:
    ctx->pc = 0x80B83B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B83B34: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83B34u)) return;
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
label_80B83B38:
    ctx->pc = 0x80B83B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B38u)) return;
    // 80B83B38: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83B3C:
    ctx->pc = 0x80B83B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B3Cu)) return;
    // 80B83B3C: addi    r5, r5, 8532
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8532);

label_80B83B40:
    ctx->pc = 0x80B83B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B83B40: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83B40u)) return;
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
label_80B83B44:
    ctx->pc = 0x80B83B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B44u)) return;
    // 80B83B44: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83B48:
    ctx->pc = 0x80B83B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B48u)) return;
    // 80B83B48: addi    r5, r5, 8536
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8536);

label_80B83B4C:
    ctx->pc = 0x80B83B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B83B4C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83B4Cu)) return;
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
label_80B83B50:
    ctx->pc = 0x80B83B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B50u)) return;
    // 80B83B50: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B83B54:
    ctx->pc = 0x80B83B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B54u)) return;
    // 80B83B54: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B83B58:
    ctx->pc = 0x80B83B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B58u)) return;
    // 80B83B58: addi    r6, r6, -30606
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30606);

label_80B83B5C:
    ctx->pc = 0x80B83B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B5Cu)) return;
    // 80B83B5C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B83B60:
    ctx->pc = 0x80B83B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B60u)) return;
    // 80B83B60: bl      0x8045ED84
    {
            ctx->lr = 0x80B83B64u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80B83B64:
    ctx->pc = 0x80B83B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83B64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83B68:
    ctx->pc = 0x80B83B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B68u)) return;
    // 80B83B68: bl      0x8045F7C8
    {
            ctx->lr = 0x80B83B6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B83B6C:
    ctx->pc = 0x80B83B6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83B6C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83B70:
    ctx->pc = 0x80B83B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B70u)) return;
    // 80B83B70: bl      0x8045EC10
    {
            ctx->lr = 0x80B83B74u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B83B74:
    ctx->pc = 0x80B83B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83B74: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83B78:
    ctx->pc = 0x80B83B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B78u)) return;
    // 80B83B78: bl      0x8045F220
    {
            ctx->lr = 0x80B83B7Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83B7C:
    ctx->pc = 0x80B83B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B83B7C: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83B80:
    ctx->pc = 0x80B83B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B80u)) return;
    // 80B83B80: addi    r4, r4, 8528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8528);

label_80B83B84:
    ctx->pc = 0x80B83B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83B84: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83B84u)) return;
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
label_80B83B88:
    ctx->pc = 0x80B83B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B88u)) return;
    // 80B83B88: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83B8C:
    ctx->pc = 0x80B83B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B8Cu)) return;
    // 80B83B8C: addi    r4, r4, 8540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8540);

label_80B83B90:
    ctx->pc = 0x80B83B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83B90: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83B90u)) return;
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
label_80B83B94:
    ctx->pc = 0x80B83B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B94u)) return;
    // 80B83B94: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83B98:
    ctx->pc = 0x80B83B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B98u)) return;
    // 80B83B98: addi    r4, r4, 8536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8536);

label_80B83B9C:
    ctx->pc = 0x80B83B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83B9C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83B9Cu)) return;
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
label_80B83BA0:
    ctx->pc = 0x80B83BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BA0u)) return;
    // 80B83BA0: bl      0x8045EF2C
    {
            ctx->lr = 0x80B83BA4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B83BA4:
    ctx->pc = 0x80B83BA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83BA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83BA4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83BA8:
    ctx->pc = 0x80B83BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BA8u)) return;
    // 80B83BA8: bl      0x8045F220
    {
            ctx->lr = 0x80B83BACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83BAC:
    ctx->pc = 0x80B83BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B83BAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83BB0:
    ctx->pc = 0x80B83BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BB0u)) return;
    // 80B83BB0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B83BB4:
    ctx->pc = 0x80B83BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BB4u)) return;
    // 80B83BB4: addi    r5, r5, -30606
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30606);

label_80B83BB8:
    ctx->pc = 0x80B83BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BB8u)) return;
    // 80B83BB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B83BBC:
    ctx->pc = 0x80B83BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BBCu)) return;
    // 80B83BBC: bl      0x8045EEA8
    {
            ctx->lr = 0x80B83BC0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B83BC0:
    ctx->pc = 0x80B83BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83BC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83BC4:
    ctx->pc = 0x80B83BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BC4u)) return;
    // 80B83BC4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B83BC8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B83BC8:
    ctx->pc = 0x80B83BC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83BC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83BC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83BCC:
    ctx->pc = 0x80B83BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BCCu)) return;
    // 80B83BCC: bl      0x8045F220
    {
            ctx->lr = 0x80B83BD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83BD0:
    ctx->pc = 0x80B83BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B83BD0: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83BD4:
    ctx->pc = 0x80B83BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BD4u)) return;
    // 80B83BD4: addi    r4, r4, 8544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8544);

label_80B83BD8:
    ctx->pc = 0x80B83BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83BD8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83BD8u)) return;
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
label_80B83BDC:
    ctx->pc = 0x80B83BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BDCu)) return;
    // 80B83BDC: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83BE0:
    ctx->pc = 0x80B83BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BE0u)) return;
    // 80B83BE0: addi    r4, r4, 8548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8548);

label_80B83BE4:
    ctx->pc = 0x80B83BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83BE4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83BE4u)) return;
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
label_80B83BE8:
    ctx->pc = 0x80B83BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BE8u)) return;
    // 80B83BE8: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83BEC:
    ctx->pc = 0x80B83BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BECu)) return;
    // 80B83BEC: addi    r4, r4, 8552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8552);

label_80B83BF0:
    ctx->pc = 0x80B83BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83BF0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83BF0u)) return;
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
label_80B83BF4:
    ctx->pc = 0x80B83BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BF4u)) return;
    // 80B83BF4: bl      0x8045EF2C
    {
            ctx->lr = 0x80B83BF8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B83BF8:
    ctx->pc = 0x80B83BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83BF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83BFC:
    ctx->pc = 0x80B83BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83BFCu)) return;
    // 80B83BFC: bl      0x8045F220
    {
            ctx->lr = 0x80B83C00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83C00:
    ctx->pc = 0x80B83C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B83C00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83C04:
    ctx->pc = 0x80B83C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C04u)) return;
    // 80B83C04: li      r5, 9789
    ctx->gpr[5] = (u32)(s32)(9789);

label_80B83C08:
    ctx->pc = 0x80B83C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C08u)) return;
    // 80B83C08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B83C0C:
    ctx->pc = 0x80B83C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C0Cu)) return;
    // 80B83C0C: bl      0x8045EEA8
    {
            ctx->lr = 0x80B83C10u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B83C10:
    ctx->pc = 0x80B83C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83C10: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83C14:
    ctx->pc = 0x80B83C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C14u)) return;
    // 80B83C14: bl      0x8045F7C8
    {
            ctx->lr = 0x80B83C18u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B83C18:
    ctx->pc = 0x80B83C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83C18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83C1C:
    ctx->pc = 0x80B83C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C1Cu)) return;
    // 80B83C1C: bl      0x8045F220
    {
            ctx->lr = 0x80B83C20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83C20:
    ctx->pc = 0x80B83C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B83C20: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83C24:
    ctx->pc = 0x80B83C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C24u)) return;
    // 80B83C24: addi    r4, r4, 8556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8556);

label_80B83C28:
    ctx->pc = 0x80B83C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B83C28: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83C28u)) return;
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
label_80B83C2C:
    ctx->pc = 0x80B83C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C2Cu)) return;
    // 80B83C2C: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83C30:
    ctx->pc = 0x80B83C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C30u)) return;
    // 80B83C30: addi    r4, r4, 8560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8560);

label_80B83C34:
    ctx->pc = 0x80B83C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B83C34: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83C34u)) return;
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
label_80B83C38:
    ctx->pc = 0x80B83C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C38u)) return;
    // 80B83C38: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83C3C:
    ctx->pc = 0x80B83C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C3Cu)) return;
    // 80B83C3C: addi    r4, r4, 8564
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8564);

label_80B83C40:
    ctx->pc = 0x80B83C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83C40: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83C40u)) return;
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
label_80B83C44:
    ctx->pc = 0x80B83C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C44u)) return;
    // 80B83C44: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83C48:
    ctx->pc = 0x80B83C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C48u)) return;
    // 80B83C48: addi    r4, r4, 8568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8568);

label_80B83C4C:
    ctx->pc = 0x80B83C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83C4C: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83C4Cu)) return;
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
label_80B83C50:
    ctx->pc = 0x80B83C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C50u)) return;
    // 80B83C50: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83C54:
    ctx->pc = 0x80B83C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C54u)) return;
    // 80B83C54: addi    r4, r4, 8572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8572);

label_80B83C58:
    ctx->pc = 0x80B83C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83C58: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B83C58u)) return;
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
label_80B83C5C:
    ctx->pc = 0x80B83C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C5Cu)) return;
    // 80B83C5C: bl      0x8045E570
    {
            ctx->lr = 0x80B83C60u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B83C60:
    ctx->pc = 0x80B83C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B83C60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83C64:
    ctx->pc = 0x80B83C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C64u)) return;
    // 80B83C64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83C68:
    ctx->pc = 0x80B83C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C68u)) return;
    // 80B83C68: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83C6C:
    ctx->pc = 0x80B83C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C6Cu)) return;
    // 80B83C6C: addi    r5, r5, 8576
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8576);

label_80B83C70:
    ctx->pc = 0x80B83C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83C70: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83C70u)) return;
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
label_80B83C74:
    ctx->pc = 0x80B83C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C74u)) return;
    // 80B83C74: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83C78:
    ctx->pc = 0x80B83C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C78u)) return;
    // 80B83C78: addi    r5, r5, 8580
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8580);

label_80B83C7C:
    ctx->pc = 0x80B83C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83C7C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83C7Cu)) return;
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
label_80B83C80:
    ctx->pc = 0x80B83C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C80u)) return;
    // 80B83C80: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83C84:
    ctx->pc = 0x80B83C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C84u)) return;
    // 80B83C84: addi    r5, r5, 8584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8584);

label_80B83C88:
    ctx->pc = 0x80B83C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83C88: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83C88u)) return;
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
label_80B83C8C:
    ctx->pc = 0x80B83C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C8Cu)) return;
    // 80B83C8C: bl      0x8045C750
    {
            ctx->lr = 0x80B83C90u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B83C90:
    ctx->pc = 0x80B83C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B83C90: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83C94:
    ctx->pc = 0x80B83C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C94u)) return;
    // 80B83C94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83C98:
    ctx->pc = 0x80B83C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C98u)) return;
    // 80B83C98: li      r5, 645
    ctx->gpr[5] = (u32)(s32)(645);

label_80B83C9C:
    ctx->pc = 0x80B83C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83C9Cu)) return;
    // 80B83C9C: li      r6, 12049
    ctx->gpr[6] = (u32)(s32)(12049);

label_80B83CA0:
    ctx->pc = 0x80B83CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CA0u)) return;
    // 80B83CA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B83CA4:
    ctx->pc = 0x80B83CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CA4u)) return;
    // 80B83CA4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B83CA8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B83CA8:
    ctx->pc = 0x80B83CA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83CA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B83CA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83CAC:
    ctx->pc = 0x80B83CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CACu)) return;
    // 80B83CAC: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80B83CB0:
    ctx->pc = 0x80B83CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CB0u)) return;
    // 80B83CB0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83CB4:
    ctx->pc = 0x80B83CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CB4u)) return;
    // 80B83CB4: addi    r5, r5, 8588
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8588);

label_80B83CB8:
    ctx->pc = 0x80B83CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83CB8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83CB8u)) return;
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
label_80B83CBC:
    ctx->pc = 0x80B83CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CBCu)) return;
    // 80B83CBC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83CC0:
    ctx->pc = 0x80B83CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CC0u)) return;
    // 80B83CC0: addi    r5, r5, 8592
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8592);

label_80B83CC4:
    ctx->pc = 0x80B83CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83CC4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83CC4u)) return;
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
label_80B83CC8:
    ctx->pc = 0x80B83CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CC8u)) return;
    // 80B83CC8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83CCC:
    ctx->pc = 0x80B83CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CCCu)) return;
    // 80B83CCC: addi    r5, r5, 8596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8596);

label_80B83CD0:
    ctx->pc = 0x80B83CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83CD0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83CD0u)) return;
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
label_80B83CD4:
    ctx->pc = 0x80B83CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CD4u)) return;
    // 80B83CD4: bl      0x8045C750
    {
            ctx->lr = 0x80B83CD8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B83CD8:
    ctx->pc = 0x80B83CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B83CD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83CDC:
    ctx->pc = 0x80B83CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CDCu)) return;
    // 80B83CDC: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80B83CE0:
    ctx->pc = 0x80B83CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CE0u)) return;
    // 80B83CE0: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80B83CE4:
    ctx->pc = 0x80B83CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CE4u)) return;
    // 80B83CE4: li      r6, 5393
    ctx->gpr[6] = (u32)(s32)(5393);

label_80B83CE8:
    ctx->pc = 0x80B83CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CE8u)) return;
    // 80B83CE8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B83CEC:
    ctx->pc = 0x80B83CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CECu)) return;
    // 80B83CEC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B83CF0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B83CF0:
    ctx->pc = 0x80B83CF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83CF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83CF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83CF4:
    ctx->pc = 0x80B83CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83CF4u)) return;
    // 80B83CF4: bl      0x8045F220
    {
            ctx->lr = 0x80B83CF8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83CF8:
    ctx->pc = 0x80B83CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83CF8: bl      0x8045EB8C
    {
            ctx->lr = 0x80B83CFCu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B83CFC:
    ctx->pc = 0x80B83CFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83CFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83CFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83D00:
    ctx->pc = 0x80B83D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D00u)) return;
    // 80B83D00: bl      0x8045F220
    {
            ctx->lr = 0x80B83D04u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83D04:
    ctx->pc = 0x80B83D04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83D04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B83D04: lis     r4, -28604
    ctx->gpr[4] = ((u32)(s32)(-28604) << 16);

label_80B83D08:
    ctx->pc = 0x80B83D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D08u)) return;
    // 80B83D08: addi    r4, r4, 16948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16948);

label_80B83D0C:
    ctx->pc = 0x80B83D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D0Cu)) return;
    // 80B83D0C: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B83D10:
    ctx->pc = 0x80B83D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D10u)) return;
    // 80B83D10: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B83D14:
    ctx->pc = 0x80B83D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D14u)) return;
    // 80B83D14: lis     r6, -27540
    ctx->gpr[6] = ((u32)(s32)(-27540) << 16);

label_80B83D18:
    ctx->pc = 0x80B83D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D18u)) return;
    // 80B83D18: addi    r6, r6, 8600
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8600);

label_80B83D1C:
    ctx->pc = 0x80B83D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B83D1C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B83D1Cu)) return;
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
label_80B83D20:
    ctx->pc = 0x80B83D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D20u)) return;
    // 80B83D20: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B83D24:
    ctx->pc = 0x80B83D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D24u)) return;
    // 80B83D24: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B83D28:
    ctx->pc = 0x80B83D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D28u)) return;
    // 80B83D28: bl      0x8045EBE4
    {
            ctx->lr = 0x80B83D2Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B83D2C:
    ctx->pc = 0x80B83D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83D2C: li      r3, 732
    ctx->gpr[3] = (u32)(s32)(732);

label_80B83D30:
    ctx->pc = 0x80B83D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D30u)) return;
    // 80B83D30: bl      0x8045BFA0
    {
            ctx->lr = 0x80B83D34u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B83D34:
    ctx->pc = 0x80B83D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B83D34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83D38:
    ctx->pc = 0x80B83D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D38u)) return;
    // 80B83D38: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B83D3C:
    ctx->pc = 0x80B83D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D3Cu)) return;
    // 80B83D3C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B83D40:
    ctx->pc = 0x80B83D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B83D40: lwz     r0, 0(r4)
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
label_80B83D44:
    ctx->pc = 0x80B83D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D44u)) return;
    // 80B83D44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B83D48:
    ctx->pc = 0x80B83D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D48u)) return;
    // 80B83D48: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83D4C:
    ctx->pc = 0x80B83D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D4Cu)) return;
    // 80B83D4C: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B83D50:
    ctx->pc = 0x80B83D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B83D50: lwzx    r4, r4, r0
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
label_80B83D54:
    ctx->pc = 0x80B83D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83D54: lwz     r4, 0(r4)
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
label_80B83D58:
    ctx->pc = 0x80B83D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D58u)) return;
    // 80B83D58: bl      0x8045F608
    {
            ctx->lr = 0x80B83D5Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B83D5C:
    ctx->pc = 0x80B83D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83D5C: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B83D60:
    ctx->pc = 0x80B83D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D60u)) return;
    // 80B83D60: bl      0x8045F7C8
    {
            ctx->lr = 0x80B83D64u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B83D64:
    ctx->pc = 0x80B83D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83D64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83D68:
    ctx->pc = 0x80B83D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D68u)) return;
    // 80B83D68: bl      0x8045F220
    {
            ctx->lr = 0x80B83D6Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83D6C:
    ctx->pc = 0x80B83D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83D6C: bl      0x8045EB8C
    {
            ctx->lr = 0x80B83D70u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B83D70:
    ctx->pc = 0x80B83D70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83D70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83D70: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B83D74:
    ctx->pc = 0x80B83D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D74u)) return;
    // 80B83D74: bl      0x8045F7C8
    {
            ctx->lr = 0x80B83D78u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B83D78:
    ctx->pc = 0x80B83D78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83D78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B83D78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83D7C:
    ctx->pc = 0x80B83D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D7Cu)) return;
    // 80B83D7C: li      r4, 25
    ctx->gpr[4] = (u32)(s32)(25);

label_80B83D80:
    ctx->pc = 0x80B83D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D80u)) return;
    // 80B83D80: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83D84:
    ctx->pc = 0x80B83D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D84u)) return;
    // 80B83D84: addi    r5, r5, 8604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8604);

label_80B83D88:
    ctx->pc = 0x80B83D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83D88: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83D88u)) return;
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
label_80B83D8C:
    ctx->pc = 0x80B83D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D8Cu)) return;
    // 80B83D8C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83D90:
    ctx->pc = 0x80B83D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D90u)) return;
    // 80B83D90: addi    r5, r5, 8608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8608);

label_80B83D94:
    ctx->pc = 0x80B83D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83D94: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83D94u)) return;
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
label_80B83D98:
    ctx->pc = 0x80B83D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D98u)) return;
    // 80B83D98: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83D9C:
    ctx->pc = 0x80B83D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83D9Cu)) return;
    // 80B83D9C: addi    r5, r5, 8612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8612);

label_80B83DA0:
    ctx->pc = 0x80B83DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83DA0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83DA0u)) return;
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
label_80B83DA4:
    ctx->pc = 0x80B83DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DA4u)) return;
    // 80B83DA4: bl      0x8045C750
    {
            ctx->lr = 0x80B83DA8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B83DA8:
    ctx->pc = 0x80B83DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B83DA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83DAC:
    ctx->pc = 0x80B83DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DACu)) return;
    // 80B83DAC: li      r4, 25
    ctx->gpr[4] = (u32)(s32)(25);

label_80B83DB0:
    ctx->pc = 0x80B83DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DB0u)) return;
    // 80B83DB0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80B83DB4:
    ctx->pc = 0x80B83DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DB4u)) return;
    // 80B83DB4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B83DB8:
    ctx->pc = 0x80B83DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DB8u)) return;
    // 80B83DB8: addi    r6, r6, -5871
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5871);

label_80B83DBC:
    ctx->pc = 0x80B83DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DBCu)) return;
    // 80B83DBC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B83DC0:
    ctx->pc = 0x80B83DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DC0u)) return;
    // 80B83DC0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B83DC4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B83DC4:
    ctx->pc = 0x80B83DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83DC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83DC8:
    ctx->pc = 0x80B83DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DC8u)) return;
    // 80B83DC8: bl      0x8045F220
    {
            ctx->lr = 0x80B83DCCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83DCC:
    ctx->pc = 0x80B83DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83DCC: bl      0x8045EB8C
    {
            ctx->lr = 0x80B83DD0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B83DD0:
    ctx->pc = 0x80B83DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83DD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83DD4:
    ctx->pc = 0x80B83DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DD4u)) return;
    // 80B83DD4: bl      0x8045F220
    {
            ctx->lr = 0x80B83DD8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83DD8:
    ctx->pc = 0x80B83DD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83DD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B83DD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83DDC:
    ctx->pc = 0x80B83DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DDCu)) return;
    // 80B83DDC: li      r5, 27351
    ctx->gpr[5] = (u32)(s32)(27351);

label_80B83DE0:
    ctx->pc = 0x80B83DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DE0u)) return;
    // 80B83DE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B83DE4:
    ctx->pc = 0x80B83DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DE4u)) return;
    // 80B83DE4: bl      0x8045EEA8
    {
            ctx->lr = 0x80B83DE8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B83DE8:
    ctx->pc = 0x80B83DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83DE8: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80B83DEC:
    ctx->pc = 0x80B83DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DECu)) return;
    // 80B83DEC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B83DF0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B83DF0:
    ctx->pc = 0x80B83DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B83DF0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83DF4:
    ctx->pc = 0x80B83DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DF4u)) return;
    // 80B83DF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83DF8:
    ctx->pc = 0x80B83DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DF8u)) return;
    // 80B83DF8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83DFC:
    ctx->pc = 0x80B83DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83DFCu)) return;
    // 80B83DFC: addi    r5, r5, 8616
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8616);

label_80B83E00:
    ctx->pc = 0x80B83E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83E00: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83E00u)) return;
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
label_80B83E04:
    ctx->pc = 0x80B83E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E04u)) return;
    // 80B83E04: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83E08:
    ctx->pc = 0x80B83E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E08u)) return;
    // 80B83E08: addi    r5, r5, 8620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8620);

label_80B83E0C:
    ctx->pc = 0x80B83E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83E0C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83E0Cu)) return;
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
label_80B83E10:
    ctx->pc = 0x80B83E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E10u)) return;
    // 80B83E10: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83E14:
    ctx->pc = 0x80B83E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E14u)) return;
    // 80B83E14: addi    r5, r5, 8624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8624);

label_80B83E18:
    ctx->pc = 0x80B83E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83E18: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83E18u)) return;
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
label_80B83E1C:
    ctx->pc = 0x80B83E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E1Cu)) return;
    // 80B83E1C: bl      0x8045C750
    {
            ctx->lr = 0x80B83E20u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B83E20:
    ctx->pc = 0x80B83E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B83E20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83E24:
    ctx->pc = 0x80B83E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E24u)) return;
    // 80B83E24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83E28:
    ctx->pc = 0x80B83E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E28u)) return;
    // 80B83E28: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B83E2C:
    ctx->pc = 0x80B83E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E2Cu)) return;
    // 80B83E2C: addi    r5, r5, -512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-512);

label_80B83E30:
    ctx->pc = 0x80B83E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E30u)) return;
    // 80B83E30: li      r6, 28177
    ctx->gpr[6] = (u32)(s32)(28177);

label_80B83E34:
    ctx->pc = 0x80B83E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E34u)) return;
    // 80B83E34: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B83E38:
    ctx->pc = 0x80B83E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E38u)) return;
    // 80B83E38: bl      0x8045C7B4
    {
            ctx->lr = 0x80B83E3Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B83E3C:
    ctx->pc = 0x80B83E3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83E3C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83E40:
    ctx->pc = 0x80B83E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E40u)) return;
    // 80B83E40: bl      0x8045F220
    {
            ctx->lr = 0x80B83E44u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83E44:
    ctx->pc = 0x80B83E44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B83E44: lis     r4, -27539
    ctx->gpr[4] = ((u32)(s32)(-27539) << 16);

label_80B83E48:
    ctx->pc = 0x80B83E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E48u)) return;
    // 80B83E48: addi    r4, r4, -8764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8764);

label_80B83E4C:
    ctx->pc = 0x80B83E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E4Cu)) return;
    // 80B83E4C: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B83E50:
    ctx->pc = 0x80B83E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E50u)) return;
    // 80B83E50: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B83E54:
    ctx->pc = 0x80B83E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E54u)) return;
    // 80B83E54: lis     r6, -27540
    ctx->gpr[6] = ((u32)(s32)(-27540) << 16);

label_80B83E58:
    ctx->pc = 0x80B83E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E58u)) return;
    // 80B83E58: addi    r6, r6, 8628
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8628);

label_80B83E5C:
    ctx->pc = 0x80B83E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B83E5C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B83E5Cu)) return;
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
label_80B83E60:
    ctx->pc = 0x80B83E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E60u)) return;
    // 80B83E60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B83E64:
    ctx->pc = 0x80B83E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E64u)) return;
    // 80B83E64: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B83E68:
    ctx->pc = 0x80B83E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E68u)) return;
    // 80B83E68: bl      0x8045EBE4
    {
            ctx->lr = 0x80B83E6Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B83E6C:
    ctx->pc = 0x80B83E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83E6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83E70:
    ctx->pc = 0x80B83E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E70u)) return;
    // 80B83E70: bl      0x8045F7C8
    {
            ctx->lr = 0x80B83E74u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B83E74:
    ctx->pc = 0x80B83E74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83E74: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83E78:
    ctx->pc = 0x80B83E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E78u)) return;
    // 80B83E78: bl      0x8045F220
    {
            ctx->lr = 0x80B83E7Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83E7C:
    ctx->pc = 0x80B83E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83E7C: bl      0x8045EB40
    {
            ctx->lr = 0x80B83E80u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80B83E80:
    ctx->pc = 0x80B83E80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83E80: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83E84:
    ctx->pc = 0x80B83E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E84u)) return;
    // 80B83E84: bl      0x8045F220
    {
            ctx->lr = 0x80B83E88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83E88:
    ctx->pc = 0x80B83E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83E88: bl      0x8045C034
    {
            ctx->lr = 0x80B83E8Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B83E8C:
    ctx->pc = 0x80B83E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B83E8C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83E90:
    ctx->pc = 0x80B83E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E90u)) return;
    // 80B83E90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83E94:
    ctx->pc = 0x80B83E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E94u)) return;
    // 80B83E94: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83E98:
    ctx->pc = 0x80B83E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E98u)) return;
    // 80B83E98: addi    r5, r5, 8632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8632);

label_80B83E9C:
    ctx->pc = 0x80B83E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83E9C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83E9Cu)) return;
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
label_80B83EA0:
    ctx->pc = 0x80B83EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EA0u)) return;
    // 80B83EA0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83EA4:
    ctx->pc = 0x80B83EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EA4u)) return;
    // 80B83EA4: addi    r5, r5, 8636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8636);

label_80B83EA8:
    ctx->pc = 0x80B83EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83EA8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83EA8u)) return;
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
label_80B83EAC:
    ctx->pc = 0x80B83EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EACu)) return;
    // 80B83EAC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83EB0:
    ctx->pc = 0x80B83EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EB0u)) return;
    // 80B83EB0: addi    r5, r5, 8640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8640);

label_80B83EB4:
    ctx->pc = 0x80B83EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83EB4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83EB4u)) return;
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
label_80B83EB8:
    ctx->pc = 0x80B83EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EB8u)) return;
    // 80B83EB8: bl      0x8045C750
    {
            ctx->lr = 0x80B83EBCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B83EBC:
    ctx->pc = 0x80B83EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B83EBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83EC0:
    ctx->pc = 0x80B83EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EC0u)) return;
    // 80B83EC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83EC4:
    ctx->pc = 0x80B83EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EC4u)) return;
    // 80B83EC4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B83EC8:
    ctx->pc = 0x80B83EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EC8u)) return;
    // 80B83EC8: addi    r5, r6, -1024
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1024);

label_80B83ECC:
    ctx->pc = 0x80B83ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83ECCu)) return;
    // 80B83ECC: addi    r6, r6, -4591
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4591);

label_80B83ED0:
    ctx->pc = 0x80B83ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83ED0u)) return;
    // 80B83ED0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B83ED4:
    ctx->pc = 0x80B83ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83ED4u)) return;
    // 80B83ED4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B83ED8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B83ED8:
    ctx->pc = 0x80B83ED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83ED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B83ED8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83EDC:
    ctx->pc = 0x80B83EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EDCu)) return;
    // 80B83EDC: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80B83EE0:
    ctx->pc = 0x80B83EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EE0u)) return;
    // 80B83EE0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83EE4:
    ctx->pc = 0x80B83EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EE4u)) return;
    // 80B83EE4: addi    r5, r5, 8644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8644);

label_80B83EE8:
    ctx->pc = 0x80B83EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B83EE8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83EE8u)) return;
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
label_80B83EEC:
    ctx->pc = 0x80B83EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EECu)) return;
    // 80B83EEC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83EF0:
    ctx->pc = 0x80B83EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EF0u)) return;
    // 80B83EF0: addi    r5, r5, 8648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8648);

label_80B83EF4:
    ctx->pc = 0x80B83EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B83EF4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83EF4u)) return;
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
label_80B83EF8:
    ctx->pc = 0x80B83EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EF8u)) return;
    // 80B83EF8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B83EFC:
    ctx->pc = 0x80B83EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83EFCu)) return;
    // 80B83EFC: addi    r5, r5, 8652
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8652);

label_80B83F00:
    ctx->pc = 0x80B83F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83F00: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B83F00u)) return;
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
label_80B83F04:
    ctx->pc = 0x80B83F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F04u)) return;
    // 80B83F04: bl      0x8045C750
    {
            ctx->lr = 0x80B83F08u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B83F08:
    ctx->pc = 0x80B83F08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B83F08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83F0C:
    ctx->pc = 0x80B83F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F0Cu)) return;
    // 80B83F0C: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80B83F10:
    ctx->pc = 0x80B83F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F10u)) return;
    // 80B83F10: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B83F14:
    ctx->pc = 0x80B83F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F14u)) return;
    // 80B83F14: addi    r5, r6, -1024
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1024);

label_80B83F18:
    ctx->pc = 0x80B83F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F18u)) return;
    // 80B83F18: addi    r6, r6, -4591
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4591);

label_80B83F1C:
    ctx->pc = 0x80B83F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F1Cu)) return;
    // 80B83F1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B83F20:
    ctx->pc = 0x80B83F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F20u)) return;
    // 80B83F20: bl      0x8045C7B4
    {
            ctx->lr = 0x80B83F24u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B83F24:
    ctx->pc = 0x80B83F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B83F24: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B83F28:
    ctx->pc = 0x80B83F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F28u)) return;
    // 80B83F28: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B83F2C:
    ctx->pc = 0x80B83F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B83F2C: lwz     r0, 0(r3)
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
label_80B83F30:
    ctx->pc = 0x80B83F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F30u)) return;
    // 80B83F30: cmpwi   r0, 1
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

label_80B83F34:
    ctx->pc = 0x80B83F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F34u)) return;
    // 80B83F34: bc    4, 2, 0x80B83F4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B83F4C;
        }
    }

label_80B83F38:
    ctx->pc = 0x80B83F38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83F38: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83F3C:
    ctx->pc = 0x80B83F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F3Cu)) return;
    // 80B83F3C: bl      0x8045F220
    {
            ctx->lr = 0x80B83F40u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83F40:
    ctx->pc = 0x80B83F40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B83F40: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83F44:
    ctx->pc = 0x80B83F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F44u)) return;
    // 80B83F44: addi    r4, r4, 12084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12084);

label_80B83F48:
    ctx->pc = 0x80B83F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F48u)) return;
    // 80B83F48: bl      0x8045C060
    {
            ctx->lr = 0x80B83F4Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B83F4C:
    ctx->pc = 0x80B83F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83F4C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83F50:
    ctx->pc = 0x80B83F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F50u)) return;
    // 80B83F50: bl      0x8045F220
    {
            ctx->lr = 0x80B83F54u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83F54:
    ctx->pc = 0x80B83F54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B83F54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B83F58:
    ctx->pc = 0x80B83F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F58u)) return;
    // 80B83F58: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B83F5C:
    ctx->pc = 0x80B83F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F5Cu)) return;
    // 80B83F5C: addi    r5, r5, -4590
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4590);

label_80B83F60:
    ctx->pc = 0x80B83F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F60u)) return;
    // 80B83F60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B83F64:
    ctx->pc = 0x80B83F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F64u)) return;
    // 80B83F64: bl      0x8045EEA8
    {
            ctx->lr = 0x80B83F68u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B83F68:
    ctx->pc = 0x80B83F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83F68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B83F6C:
    ctx->pc = 0x80B83F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F6Cu)) return;
    // 80B83F6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B83F70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B83F70:
    ctx->pc = 0x80B83F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83F70: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83F74:
    ctx->pc = 0x80B83F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F74u)) return;
    // 80B83F74: bl      0x8045F220
    {
            ctx->lr = 0x80B83F78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83F78:
    ctx->pc = 0x80B83F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B83F78: bl      0x8045EB8C
    {
            ctx->lr = 0x80B83F7Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B83F7C:
    ctx->pc = 0x80B83F7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83F7C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83F80:
    ctx->pc = 0x80B83F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F80u)) return;
    // 80B83F80: bl      0x8045F220
    {
            ctx->lr = 0x80B83F84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83F84:
    ctx->pc = 0x80B83F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B83F84: lis     r4, -27539
    ctx->gpr[4] = ((u32)(s32)(-27539) << 16);

label_80B83F88:
    ctx->pc = 0x80B83F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F88u)) return;
    // 80B83F88: addi    r4, r4, -27952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27952);

label_80B83F8C:
    ctx->pc = 0x80B83F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F8Cu)) return;
    // 80B83F8C: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B83F90:
    ctx->pc = 0x80B83F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F90u)) return;
    // 80B83F90: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B83F94:
    ctx->pc = 0x80B83F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F94u)) return;
    // 80B83F94: lis     r6, -27540
    ctx->gpr[6] = ((u32)(s32)(-27540) << 16);

label_80B83F98:
    ctx->pc = 0x80B83F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F98u)) return;
    // 80B83F98: addi    r6, r6, 8656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8656);

label_80B83F9C:
    ctx->pc = 0x80B83F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B83F9C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B83F9Cu)) return;
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
label_80B83FA0:
    ctx->pc = 0x80B83FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FA0u)) return;
    // 80B83FA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B83FA4:
    ctx->pc = 0x80B83FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FA4u)) return;
    // 80B83FA4: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B83FA8:
    ctx->pc = 0x80B83FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FA8u)) return;
    // 80B83FA8: bl      0x8045EBE4
    {
            ctx->lr = 0x80B83FACu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B83FAC:
    ctx->pc = 0x80B83FACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83FACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B83FAC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B83FB0:
    ctx->pc = 0x80B83FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FB0u)) return;
    // 80B83FB0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B83FB4:
    ctx->pc = 0x80B83FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B83FB4: lwz     r0, 0(r3)
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
label_80B83FB8:
    ctx->pc = 0x80B83FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FB8u)) return;
    // 80B83FB8: cmpwi   r0, 0
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

label_80B83FBC:
    ctx->pc = 0x80B83FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FBCu)) return;
    // 80B83FBC: bc    4, 2, 0x80B83FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B83FD4;
        }
    }

label_80B83FC0:
    ctx->pc = 0x80B83FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83FC0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B83FC4:
    ctx->pc = 0x80B83FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FC4u)) return;
    // 80B83FC4: bl      0x8045F220
    {
            ctx->lr = 0x80B83FC8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B83FC8:
    ctx->pc = 0x80B83FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B83FC8: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83FCC:
    ctx->pc = 0x80B83FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FCCu)) return;
    // 80B83FCC: addi    r4, r4, 12088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12088);

label_80B83FD0:
    ctx->pc = 0x80B83FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FD0u)) return;
    // 80B83FD0: bl      0x8045C060
    {
            ctx->lr = 0x80B83FD4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B83FD4:
    ctx->pc = 0x80B83FD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B83FD4: li      r3, 733
    ctx->gpr[3] = (u32)(s32)(733);

label_80B83FD8:
    ctx->pc = 0x80B83FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FD8u)) return;
    // 80B83FD8: bl      0x8045BFA0
    {
            ctx->lr = 0x80B83FDCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B83FDC:
    ctx->pc = 0x80B83FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B83FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B83FDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B83FE0:
    ctx->pc = 0x80B83FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FE0u)) return;
    // 80B83FE0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B83FE4:
    ctx->pc = 0x80B83FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FE4u)) return;
    // 80B83FE4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B83FE8:
    ctx->pc = 0x80B83FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B83FE8: lwz     r0, 0(r4)
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
label_80B83FEC:
    ctx->pc = 0x80B83FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FECu)) return;
    // 80B83FEC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B83FF0:
    ctx->pc = 0x80B83FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FF0u)) return;
    // 80B83FF0: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B83FF4:
    ctx->pc = 0x80B83FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FF4u)) return;
    // 80B83FF4: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B83FF8:
    ctx->pc = 0x80B83FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B83FF8: lwzx    r4, r4, r0
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
label_80B83FFC:
    ctx->pc = 0x80B83FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B83FFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B83FFC: lwz     r4, 4(r4)
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
label_80B84000:
    ctx->pc = 0x80B84000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84000u)) return;
    // 80B84000: bl      0x8045F608
    {
            ctx->lr = 0x80B84004u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84004:
    ctx->pc = 0x80B84004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84004: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B84008:
    ctx->pc = 0x80B84008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84008u)) return;
    // 80B84008: bl      0x8045F7C8
    {
            ctx->lr = 0x80B8400Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B8400C:
    ctx->pc = 0x80B8400Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8400Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8400C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84010:
    ctx->pc = 0x80B84010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84010u)) return;
    // 80B84010: bl      0x8045F220
    {
            ctx->lr = 0x80B84014u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84014:
    ctx->pc = 0x80B84014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84014: bl      0x8045EB40
    {
            ctx->lr = 0x80B84018u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80B84018:
    ctx->pc = 0x80B84018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84018: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8401C:
    ctx->pc = 0x80B8401Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8401Cu)) return;
    // 80B8401C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84020:
    ctx->pc = 0x80B84020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84020u)) return;
    // 80B84020: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84024:
    ctx->pc = 0x80B84024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84024u)) return;
    // 80B84024: addi    r5, r5, 8660
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8660);

label_80B84028:
    ctx->pc = 0x80B84028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84028: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84028u)) return;
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
label_80B8402C:
    ctx->pc = 0x80B8402Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8402Cu)) return;
    // 80B8402C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84030:
    ctx->pc = 0x80B84030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84030u)) return;
    // 80B84030: addi    r5, r5, 8664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8664);

label_80B84034:
    ctx->pc = 0x80B84034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84034: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84034u)) return;
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
label_80B84038:
    ctx->pc = 0x80B84038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84038u)) return;
    // 80B84038: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B8403C:
    ctx->pc = 0x80B8403Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8403Cu)) return;
    // 80B8403C: addi    r5, r5, 8668
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8668);

label_80B84040:
    ctx->pc = 0x80B84040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84040: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84040u)) return;
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
label_80B84044:
    ctx->pc = 0x80B84044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84044u)) return;
    // 80B84044: bl      0x8045C750
    {
            ctx->lr = 0x80B84048u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84048:
    ctx->pc = 0x80B84048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84048: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8404C:
    ctx->pc = 0x80B8404Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8404Cu)) return;
    // 80B8404C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84050:
    ctx->pc = 0x80B84050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84050u)) return;
    // 80B84050: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80B84054:
    ctx->pc = 0x80B84054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84054u)) return;
    // 80B84054: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B84058:
    ctx->pc = 0x80B84058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84058u)) return;
    // 80B84058: addi    r6, r6, -31471
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31471);

label_80B8405C:
    ctx->pc = 0x80B8405Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8405Cu)) return;
    // 80B8405C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84060:
    ctx->pc = 0x80B84060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84060u)) return;
    // 80B84060: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84064u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84064:
    ctx->pc = 0x80B84064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84064: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84068:
    ctx->pc = 0x80B84068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84068u)) return;
    // 80B84068: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80B8406C:
    ctx->pc = 0x80B8406Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8406Cu)) return;
    // 80B8406C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84070:
    ctx->pc = 0x80B84070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84070u)) return;
    // 80B84070: addi    r5, r5, 8660
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8660);

label_80B84074:
    ctx->pc = 0x80B84074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84074: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84074u)) return;
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
label_80B84078:
    ctx->pc = 0x80B84078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84078u)) return;
    // 80B84078: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B8407C:
    ctx->pc = 0x80B8407Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8407Cu)) return;
    // 80B8407C: addi    r5, r5, 8664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8664);

label_80B84080:
    ctx->pc = 0x80B84080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84080: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84080u)) return;
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
label_80B84084:
    ctx->pc = 0x80B84084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84084u)) return;
    // 80B84084: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84088:
    ctx->pc = 0x80B84088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84088u)) return;
    // 80B84088: addi    r5, r5, 8668
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8668);

label_80B8408C:
    ctx->pc = 0x80B8408Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8408Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B8408C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B8408Cu)) return;
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
label_80B84090:
    ctx->pc = 0x80B84090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84090u)) return;
    // 80B84090: bl      0x8045C750
    {
            ctx->lr = 0x80B84094u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84094:
    ctx->pc = 0x80B84094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84094: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84098:
    ctx->pc = 0x80B84098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84098u)) return;
    // 80B84098: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80B8409C:
    ctx->pc = 0x80B8409Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8409Cu)) return;
    // 80B8409C: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80B840A0:
    ctx->pc = 0x80B840A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840A0u)) return;
    // 80B840A0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B840A4:
    ctx->pc = 0x80B840A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840A4u)) return;
    // 80B840A4: addi    r6, r6, -31471
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31471);

label_80B840A8:
    ctx->pc = 0x80B840A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840A8u)) return;
    // 80B840A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B840AC:
    ctx->pc = 0x80B840ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840ACu)) return;
    // 80B840AC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B840B0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B840B0:
    ctx->pc = 0x80B840B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B840B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B840B0: bl      0x8045BFF4
    {
            ctx->lr = 0x80B840B4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B840B4:
    ctx->pc = 0x80B840B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B840B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B840B4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B840B8:
    ctx->pc = 0x80B840B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840B8u)) return;
    // 80B840B8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B840BC:
    ctx->pc = 0x80B840BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B840BC: lwz     r0, 0(r3)
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
label_80B840C0:
    ctx->pc = 0x80B840C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840C0u)) return;
    // 80B840C0: cmpwi   r0, 0
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

label_80B840C4:
    ctx->pc = 0x80B840C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840C4u)) return;
    // 80B840C4: bc    4, 2, 0x80B840D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B840D4;
        }
    }

label_80B840C8:
    ctx->pc = 0x80B840C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B840C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B840C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B840CC:
    ctx->pc = 0x80B840CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840CCu)) return;
    // 80B840CC: bl      0x8045F220
    {
            ctx->lr = 0x80B840D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B840D0:
    ctx->pc = 0x80B840D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B840D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B840D0: bl      0x8045C034
    {
            ctx->lr = 0x80B840D4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B840D4:
    ctx->pc = 0x80B840D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B840D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B840D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B840D8:
    ctx->pc = 0x80B840D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840D8u)) return;
    // 80B840D8: bl      0x8045F220
    {
            ctx->lr = 0x80B840DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B840DC:
    ctx->pc = 0x80B840DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B840DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B840DC: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B840E0:
    ctx->pc = 0x80B840E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840E0u)) return;
    // 80B840E0: addi    r4, r4, 12096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12096);

label_80B840E4:
    ctx->pc = 0x80B840E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840E4u)) return;
    // 80B840E4: bl      0x8045C060
    {
            ctx->lr = 0x80B840E8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B840E8:
    ctx->pc = 0x80B840E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B840E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B840E8: li      r3, 734
    ctx->gpr[3] = (u32)(s32)(734);

label_80B840EC:
    ctx->pc = 0x80B840ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840ECu)) return;
    // 80B840EC: bl      0x8045BFA0
    {
            ctx->lr = 0x80B840F0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B840F0:
    ctx->pc = 0x80B840F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B840F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B840F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B840F4:
    ctx->pc = 0x80B840F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840F4u)) return;
    // 80B840F4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B840F8:
    ctx->pc = 0x80B840F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840F8u)) return;
    // 80B840F8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B840FC:
    ctx->pc = 0x80B840FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B840FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B840FC: lwz     r0, 0(r4)
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
label_80B84100:
    ctx->pc = 0x80B84100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84100u)) return;
    // 80B84100: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84104:
    ctx->pc = 0x80B84104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84104u)) return;
    // 80B84104: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84108:
    ctx->pc = 0x80B84108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84108u)) return;
    // 80B84108: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B8410C:
    ctx->pc = 0x80B8410Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8410Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8410C: lwzx    r4, r4, r0
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
label_80B84110:
    ctx->pc = 0x80B84110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84110: lwz     r4, 8(r4)
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
label_80B84114:
    ctx->pc = 0x80B84114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84114u)) return;
    // 80B84114: bl      0x8045F608
    {
            ctx->lr = 0x80B84118u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84118:
    ctx->pc = 0x80B84118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84118: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B8411C:
    ctx->pc = 0x80B8411Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8411Cu)) return;
    // 80B8411C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84120u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84120:
    ctx->pc = 0x80B84120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84120: li      r3, 735
    ctx->gpr[3] = (u32)(s32)(735);

label_80B84124:
    ctx->pc = 0x80B84124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84124u)) return;
    // 80B84124: bl      0x8045BFA0
    {
            ctx->lr = 0x80B84128u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B84128:
    ctx->pc = 0x80B84128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84128: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B8412C:
    ctx->pc = 0x80B8412Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8412Cu)) return;
    // 80B8412C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84130:
    ctx->pc = 0x80B84130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84130u)) return;
    // 80B84130: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84134:
    ctx->pc = 0x80B84134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84134: lwz     r0, 0(r4)
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
label_80B84138:
    ctx->pc = 0x80B84138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84138u)) return;
    // 80B84138: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B8413C:
    ctx->pc = 0x80B8413Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8413Cu)) return;
    // 80B8413C: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84140:
    ctx->pc = 0x80B84140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84140u)) return;
    // 80B84140: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84144:
    ctx->pc = 0x80B84144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84144: lwzx    r4, r4, r0
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
label_80B84148:
    ctx->pc = 0x80B84148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84148: lwz     r4, 12(r4)
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
label_80B8414C:
    ctx->pc = 0x80B8414Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8414Cu)) return;
    // 80B8414C: bl      0x8045F608
    {
            ctx->lr = 0x80B84150u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84150:
    ctx->pc = 0x80B84150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84150: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B84154:
    ctx->pc = 0x80B84154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84154u)) return;
    // 80B84154: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84158u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84158:
    ctx->pc = 0x80B84158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84158: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8415C:
    ctx->pc = 0x80B8415Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8415Cu)) return;
    // 80B8415C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84160:
    ctx->pc = 0x80B84160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84160u)) return;
    // 80B84160: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84164:
    ctx->pc = 0x80B84164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84164u)) return;
    // 80B84164: addi    r5, r5, 8672
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8672);

label_80B84168:
    ctx->pc = 0x80B84168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84168: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84168u)) return;
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
label_80B8416C:
    ctx->pc = 0x80B8416Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8416Cu)) return;
    // 80B8416C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84170:
    ctx->pc = 0x80B84170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84170u)) return;
    // 80B84170: addi    r5, r5, 8676
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8676);

label_80B84174:
    ctx->pc = 0x80B84174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84174: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84174u)) return;
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
label_80B84178:
    ctx->pc = 0x80B84178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84178u)) return;
    // 80B84178: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B8417C:
    ctx->pc = 0x80B8417Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8417Cu)) return;
    // 80B8417C: addi    r5, r5, 8680
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8680);

label_80B84180:
    ctx->pc = 0x80B84180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84180: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84180u)) return;
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
label_80B84184:
    ctx->pc = 0x80B84184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84184u)) return;
    // 80B84184: bl      0x8045C750
    {
            ctx->lr = 0x80B84188u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84188:
    ctx->pc = 0x80B84188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84188: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8418C:
    ctx->pc = 0x80B8418Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8418Cu)) return;
    // 80B8418C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84190:
    ctx->pc = 0x80B84190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84190u)) return;
    // 80B84190: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B84194:
    ctx->pc = 0x80B84194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84194u)) return;
    // 80B84194: addi    r5, r6, -1280
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1280);

label_80B84198:
    ctx->pc = 0x80B84198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84198u)) return;
    // 80B84198: addi    r6, r6, -1775
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1775);

label_80B8419C:
    ctx->pc = 0x80B8419Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8419Cu)) return;
    // 80B8419C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B841A0:
    ctx->pc = 0x80B841A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841A0u)) return;
    // 80B841A0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B841A4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B841A4:
    ctx->pc = 0x80B841A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B841A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B841A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B841A8:
    ctx->pc = 0x80B841A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841A8u)) return;
    // 80B841A8: li      r4, 330
    ctx->gpr[4] = (u32)(s32)(330);

label_80B841AC:
    ctx->pc = 0x80B841ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841ACu)) return;
    // 80B841AC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B841B0:
    ctx->pc = 0x80B841B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841B0u)) return;
    // 80B841B0: addi    r5, r5, 8684
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8684);

label_80B841B4:
    ctx->pc = 0x80B841B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B841B4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B841B4u)) return;
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
label_80B841B8:
    ctx->pc = 0x80B841B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841B8u)) return;
    // 80B841B8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B841BC:
    ctx->pc = 0x80B841BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841BCu)) return;
    // 80B841BC: addi    r5, r5, 8688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8688);

label_80B841C0:
    ctx->pc = 0x80B841C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B841C0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B841C0u)) return;
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
label_80B841C4:
    ctx->pc = 0x80B841C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841C4u)) return;
    // 80B841C4: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B841C8:
    ctx->pc = 0x80B841C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841C8u)) return;
    // 80B841C8: addi    r5, r5, 8692
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8692);

label_80B841CC:
    ctx->pc = 0x80B841CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B841CC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B841CCu)) return;
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
label_80B841D0:
    ctx->pc = 0x80B841D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841D0u)) return;
    // 80B841D0: bl      0x8045C750
    {
            ctx->lr = 0x80B841D4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B841D4:
    ctx->pc = 0x80B841D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B841D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B841D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B841D8:
    ctx->pc = 0x80B841D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841D8u)) return;
    // 80B841D8: li      r4, 330
    ctx->gpr[4] = (u32)(s32)(330);

label_80B841DC:
    ctx->pc = 0x80B841DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841DCu)) return;
    // 80B841DC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B841E0:
    ctx->pc = 0x80B841E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841E0u)) return;
    // 80B841E0: addi    r5, r6, -1280
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1280);

label_80B841E4:
    ctx->pc = 0x80B841E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841E4u)) return;
    // 80B841E4: addi    r6, r6, -11503
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11503);

label_80B841E8:
    ctx->pc = 0x80B841E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841E8u)) return;
    // 80B841E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B841EC:
    ctx->pc = 0x80B841ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841ECu)) return;
    // 80B841EC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B841F0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B841F0:
    ctx->pc = 0x80B841F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B841F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B841F0: li      r3, 736
    ctx->gpr[3] = (u32)(s32)(736);

label_80B841F4:
    ctx->pc = 0x80B841F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841F4u)) return;
    // 80B841F4: bl      0x8045BFA0
    {
            ctx->lr = 0x80B841F8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B841F8:
    ctx->pc = 0x80B841F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B841F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B841F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B841FC:
    ctx->pc = 0x80B841FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B841FCu)) return;
    // 80B841FC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84200:
    ctx->pc = 0x80B84200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84200u)) return;
    // 80B84200: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84204:
    ctx->pc = 0x80B84204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84204: lwz     r0, 0(r4)
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
label_80B84208:
    ctx->pc = 0x80B84208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84208u)) return;
    // 80B84208: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B8420C:
    ctx->pc = 0x80B8420Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8420Cu)) return;
    // 80B8420C: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84210:
    ctx->pc = 0x80B84210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84210u)) return;
    // 80B84210: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84214:
    ctx->pc = 0x80B84214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84214: lwzx    r4, r4, r0
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
label_80B84218:
    ctx->pc = 0x80B84218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84218: lwz     r4, 16(r4)
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
label_80B8421C:
    ctx->pc = 0x80B8421Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8421Cu)) return;
    // 80B8421C: bl      0x8045F608
    {
            ctx->lr = 0x80B84220u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84220:
    ctx->pc = 0x80B84220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84220: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B84224:
    ctx->pc = 0x80B84224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84224u)) return;
    // 80B84224: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84228u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84228:
    ctx->pc = 0x80B84228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84228: bl      0x8045F32C
    {
            ctx->lr = 0x80B8422Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B8422C:
    ctx->pc = 0x80B8422Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8422Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8422C: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B84230:
    ctx->pc = 0x80B84230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84230u)) return;
    // 80B84230: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84234u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84234:
    ctx->pc = 0x80B84234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84234: li      r3, 737
    ctx->gpr[3] = (u32)(s32)(737);

label_80B84238:
    ctx->pc = 0x80B84238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84238u)) return;
    // 80B84238: bl      0x8045BFA0
    {
            ctx->lr = 0x80B8423Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B8423C:
    ctx->pc = 0x80B8423Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8423Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B8423C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84240:
    ctx->pc = 0x80B84240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84240u)) return;
    // 80B84240: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84244:
    ctx->pc = 0x80B84244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84244u)) return;
    // 80B84244: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84248:
    ctx->pc = 0x80B84248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84248: lwz     r0, 0(r4)
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
label_80B8424C:
    ctx->pc = 0x80B8424Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8424Cu)) return;
    // 80B8424C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84250:
    ctx->pc = 0x80B84250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84250u)) return;
    // 80B84250: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84254:
    ctx->pc = 0x80B84254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84254u)) return;
    // 80B84254: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84258:
    ctx->pc = 0x80B84258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84258: lwzx    r4, r4, r0
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
label_80B8425C:
    ctx->pc = 0x80B8425Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8425Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B8425C: lwz     r4, 20(r4)
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
label_80B84260:
    ctx->pc = 0x80B84260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84260u)) return;
    // 80B84260: bl      0x8045F608
    {
            ctx->lr = 0x80B84264u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84264:
    ctx->pc = 0x80B84264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84264: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B84268:
    ctx->pc = 0x80B84268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84268u)) return;
    // 80B84268: bl      0x8045F7C8
    {
            ctx->lr = 0x80B8426Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B8426C:
    ctx->pc = 0x80B8426Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8426Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8426C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84270:
    ctx->pc = 0x80B84270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84270u)) return;
    // 80B84270: bl      0x8045F220
    {
            ctx->lr = 0x80B84274u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84274:
    ctx->pc = 0x80B84274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84274: bl      0x8045C034
    {
            ctx->lr = 0x80B84278u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84278:
    ctx->pc = 0x80B84278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84278: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B8427C:
    ctx->pc = 0x80B8427Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8427Cu)) return;
    // 80B8427C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84280:
    ctx->pc = 0x80B84280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84280: lwz     r0, 0(r3)
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
label_80B84284:
    ctx->pc = 0x80B84284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84284u)) return;
    // 80B84284: cmpwi   r0, 0
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

label_80B84288:
    ctx->pc = 0x80B84288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84288u)) return;
    // 80B84288: bc    4, 2, 0x80B842A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B842A0;
        }
    }

label_80B8428C:
    ctx->pc = 0x80B8428Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8428Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8428C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84290:
    ctx->pc = 0x80B84290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84290u)) return;
    // 80B84290: bl      0x8045F220
    {
            ctx->lr = 0x80B84294u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84294:
    ctx->pc = 0x80B84294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84294: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84298:
    ctx->pc = 0x80B84298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84298u)) return;
    // 80B84298: addi    r4, r4, 12104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12104);

label_80B8429C:
    ctx->pc = 0x80B8429Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8429Cu)) return;
    // 80B8429C: bl      0x8045C060
    {
            ctx->lr = 0x80B842A0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B842A0:
    ctx->pc = 0x80B842A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B842A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B842A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B842A4:
    ctx->pc = 0x80B842A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842A4u)) return;
    // 80B842A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B842A8:
    ctx->pc = 0x80B842A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842A8u)) return;
    // 80B842A8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B842AC:
    ctx->pc = 0x80B842ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842ACu)) return;
    // 80B842AC: addi    r5, r5, 8696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8696);

label_80B842B0:
    ctx->pc = 0x80B842B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B842B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B842B0u)) return;
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
label_80B842B4:
    ctx->pc = 0x80B842B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842B4u)) return;
    // 80B842B4: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B842B8:
    ctx->pc = 0x80B842B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842B8u)) return;
    // 80B842B8: addi    r5, r5, 8700
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8700);

label_80B842BC:
    ctx->pc = 0x80B842BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B842BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B842BCu)) return;
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
label_80B842C0:
    ctx->pc = 0x80B842C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842C0u)) return;
    // 80B842C0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B842C4:
    ctx->pc = 0x80B842C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842C4u)) return;
    // 80B842C4: addi    r5, r5, 8704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8704);

label_80B842C8:
    ctx->pc = 0x80B842C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B842C8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B842C8u)) return;
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
label_80B842CC:
    ctx->pc = 0x80B842CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842CCu)) return;
    // 80B842CC: bl      0x8045C750
    {
            ctx->lr = 0x80B842D0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B842D0:
    ctx->pc = 0x80B842D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B842D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B842D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B842D4:
    ctx->pc = 0x80B842D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842D4u)) return;
    // 80B842D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B842D8:
    ctx->pc = 0x80B842D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842D8u)) return;
    // 80B842D8: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_80B842DC:
    ctx->pc = 0x80B842DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842DCu)) return;
    // 80B842DC: li      r6, 17
    ctx->gpr[6] = (u32)(s32)(17);

label_80B842E0:
    ctx->pc = 0x80B842E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842E0u)) return;
    // 80B842E0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B842E4:
    ctx->pc = 0x80B842E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842E4u)) return;
    // 80B842E4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B842E8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B842E8:
    ctx->pc = 0x80B842E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B842E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B842E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B842EC:
    ctx->pc = 0x80B842ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842ECu)) return;
    // 80B842EC: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_80B842F0:
    ctx->pc = 0x80B842F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842F0u)) return;
    // 80B842F0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B842F4:
    ctx->pc = 0x80B842F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842F4u)) return;
    // 80B842F4: addi    r5, r5, 8708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8708);

label_80B842F8:
    ctx->pc = 0x80B842F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B842F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B842F8u)) return;
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
label_80B842FC:
    ctx->pc = 0x80B842FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B842FCu)) return;
    // 80B842FC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84300:
    ctx->pc = 0x80B84300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84300u)) return;
    // 80B84300: addi    r5, r5, 8712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8712);

label_80B84304:
    ctx->pc = 0x80B84304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84304: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84304u)) return;
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
label_80B84308:
    ctx->pc = 0x80B84308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84308u)) return;
    // 80B84308: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B8430C:
    ctx->pc = 0x80B8430Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8430Cu)) return;
    // 80B8430C: addi    r5, r5, 8716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8716);

label_80B84310:
    ctx->pc = 0x80B84310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84310: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84310u)) return;
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
label_80B84314:
    ctx->pc = 0x80B84314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84314u)) return;
    // 80B84314: bl      0x8045C750
    {
            ctx->lr = 0x80B84318u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84318:
    ctx->pc = 0x80B84318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B84318: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8431C:
    ctx->pc = 0x80B8431Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8431Cu)) return;
    // 80B8431C: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_80B84320:
    ctx->pc = 0x80B84320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84320u)) return;
    // 80B84320: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_80B84324:
    ctx->pc = 0x80B84324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84324u)) return;
    // 80B84324: li      r6, 17
    ctx->gpr[6] = (u32)(s32)(17);

label_80B84328:
    ctx->pc = 0x80B84328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84328u)) return;
    // 80B84328: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B8432C:
    ctx->pc = 0x80B8432Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8432Cu)) return;
    // 80B8432C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84330u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84330:
    ctx->pc = 0x80B84330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84330: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84334:
    ctx->pc = 0x80B84334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84334u)) return;
    // 80B84334: bl      0x8045F220
    {
            ctx->lr = 0x80B84338u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84338:
    ctx->pc = 0x80B84338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84338: bl      0x8045EB8C
    {
            ctx->lr = 0x80B8433Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B8433C:
    ctx->pc = 0x80B8433Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8433Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8433C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84340:
    ctx->pc = 0x80B84340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84340u)) return;
    // 80B84340: bl      0x8045F220
    {
            ctx->lr = 0x80B84344u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84344:
    ctx->pc = 0x80B84344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84344: lis     r4, -27539
    ctx->gpr[4] = ((u32)(s32)(-27539) << 16);

label_80B84348:
    ctx->pc = 0x80B84348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84348u)) return;
    // 80B84348: addi    r4, r4, 22776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22776);

label_80B8434C:
    ctx->pc = 0x80B8434Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8434Cu)) return;
    // 80B8434C: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B84350:
    ctx->pc = 0x80B84350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84350u)) return;
    // 80B84350: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B84354:
    ctx->pc = 0x80B84354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84354u)) return;
    // 80B84354: lis     r6, -27540
    ctx->gpr[6] = ((u32)(s32)(-27540) << 16);

label_80B84358:
    ctx->pc = 0x80B84358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84358u)) return;
    // 80B84358: addi    r6, r6, 8656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8656);

label_80B8435C:
    ctx->pc = 0x80B8435Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8435Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B8435C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B8435Cu)) return;
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
label_80B84360:
    ctx->pc = 0x80B84360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84360u)) return;
    // 80B84360: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B84364:
    ctx->pc = 0x80B84364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84364u)) return;
    // 80B84364: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B84368:
    ctx->pc = 0x80B84368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84368u)) return;
    // 80B84368: bl      0x8045EBE4
    {
            ctx->lr = 0x80B8436Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B8436C:
    ctx->pc = 0x80B8436Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8436Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8436C: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B84370:
    ctx->pc = 0x80B84370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84370u)) return;
    // 80B84370: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84374u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84374:
    ctx->pc = 0x80B84374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84374: li      r3, 738
    ctx->gpr[3] = (u32)(s32)(738);

label_80B84378:
    ctx->pc = 0x80B84378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84378u)) return;
    // 80B84378: bl      0x8045BFA0
    {
            ctx->lr = 0x80B8437Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B8437C:
    ctx->pc = 0x80B8437Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8437Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B8437C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84380:
    ctx->pc = 0x80B84380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84380u)) return;
    // 80B84380: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84384:
    ctx->pc = 0x80B84384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84384u)) return;
    // 80B84384: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84388:
    ctx->pc = 0x80B84388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84388: lwz     r0, 0(r4)
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
label_80B8438C:
    ctx->pc = 0x80B8438Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8438Cu)) return;
    // 80B8438C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84390:
    ctx->pc = 0x80B84390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84390u)) return;
    // 80B84390: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84394:
    ctx->pc = 0x80B84394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84394u)) return;
    // 80B84394: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84398:
    ctx->pc = 0x80B84398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84398: lwzx    r4, r4, r0
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
label_80B8439C:
    ctx->pc = 0x80B8439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8439Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B8439C: lwz     r4, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B843A0:
    ctx->pc = 0x80B843A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843A0u)) return;
    // 80B843A0: bl      0x8045F608
    {
            ctx->lr = 0x80B843A4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B843A4:
    ctx->pc = 0x80B843A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B843A4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B843A8:
    ctx->pc = 0x80B843A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843A8u)) return;
    // 80B843A8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B843AC:
    ctx->pc = 0x80B843ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B843AC: lwz     r0, 0(r3)
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
label_80B843B0:
    ctx->pc = 0x80B843B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843B0u)) return;
    // 80B843B0: cmpwi   r0, 1
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

label_80B843B4:
    ctx->pc = 0x80B843B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843B4u)) return;
    // 80B843B4: bc    4, 2, 0x80B843CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B843CC;
        }
    }

label_80B843B8:
    ctx->pc = 0x80B843B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B843B8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B843BC:
    ctx->pc = 0x80B843BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843BCu)) return;
    // 80B843BC: bl      0x8045F220
    {
            ctx->lr = 0x80B843C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B843C0:
    ctx->pc = 0x80B843C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B843C0: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B843C4:
    ctx->pc = 0x80B843C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843C4u)) return;
    // 80B843C4: addi    r4, r4, 12116
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12116);

label_80B843C8:
    ctx->pc = 0x80B843C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843C8u)) return;
    // 80B843C8: bl      0x8045C060
    {
            ctx->lr = 0x80B843CCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B843CC:
    ctx->pc = 0x80B843CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B843CC: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80B843D0:
    ctx->pc = 0x80B843D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843D0u)) return;
    // 80B843D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B843D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B843D4:
    ctx->pc = 0x80B843D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B843D4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B843D8:
    ctx->pc = 0x80B843D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843D8u)) return;
    // 80B843D8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B843DC:
    ctx->pc = 0x80B843DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B843DC: lwz     r0, 0(r3)
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
label_80B843E0:
    ctx->pc = 0x80B843E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843E0u)) return;
    // 80B843E0: cmpwi   r0, 1
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

label_80B843E4:
    ctx->pc = 0x80B843E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843E4u)) return;
    // 80B843E4: bc    4, 2, 0x80B843F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B843F4;
        }
    }

label_80B843E8:
    ctx->pc = 0x80B843E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B843E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B843EC:
    ctx->pc = 0x80B843ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843ECu)) return;
    // 80B843EC: bl      0x8045F220
    {
            ctx->lr = 0x80B843F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B843F0:
    ctx->pc = 0x80B843F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B843F0: bl      0x8045C034
    {
            ctx->lr = 0x80B843F4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B843F4:
    ctx->pc = 0x80B843F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B843F4: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B843F8:
    ctx->pc = 0x80B843F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B843F8u)) return;
    // 80B843F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B843FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B843FC:
    ctx->pc = 0x80B843FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B843FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B843FC: li      r3, 739
    ctx->gpr[3] = (u32)(s32)(739);

label_80B84400:
    ctx->pc = 0x80B84400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84400u)) return;
    // 80B84400: bl      0x8045BFA0
    {
            ctx->lr = 0x80B84404u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B84404:
    ctx->pc = 0x80B84404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84404: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84408:
    ctx->pc = 0x80B84408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84408u)) return;
    // 80B84408: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B8440C:
    ctx->pc = 0x80B8440Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8440Cu)) return;
    // 80B8440C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84410:
    ctx->pc = 0x80B84410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84410: lwz     r0, 0(r4)
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
label_80B84414:
    ctx->pc = 0x80B84414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84414u)) return;
    // 80B84414: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84418:
    ctx->pc = 0x80B84418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84418u)) return;
    // 80B84418: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B8441C:
    ctx->pc = 0x80B8441Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8441Cu)) return;
    // 80B8441C: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84420:
    ctx->pc = 0x80B84420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84420: lwzx    r4, r4, r0
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
label_80B84424:
    ctx->pc = 0x80B84424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84424: lwz     r4, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84428:
    ctx->pc = 0x80B84428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84428u)) return;
    // 80B84428: bl      0x8045F608
    {
            ctx->lr = 0x80B8442Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B8442C:
    ctx->pc = 0x80B8442Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8442Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B8442C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84430:
    ctx->pc = 0x80B84430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84430u)) return;
    // 80B84430: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84434:
    ctx->pc = 0x80B84434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84434u)) return;
    // 80B84434: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84438:
    ctx->pc = 0x80B84438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84438u)) return;
    // 80B84438: addi    r5, r5, 8720
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8720);

label_80B8443C:
    ctx->pc = 0x80B8443Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8443Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B8443C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B8443Cu)) return;
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
label_80B84440:
    ctx->pc = 0x80B84440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84440u)) return;
    // 80B84440: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84444:
    ctx->pc = 0x80B84444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84444u)) return;
    // 80B84444: addi    r5, r5, 8724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8724);

label_80B84448:
    ctx->pc = 0x80B84448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84448: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84448u)) return;
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
label_80B8444C:
    ctx->pc = 0x80B8444Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8444Cu)) return;
    // 80B8444C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84450:
    ctx->pc = 0x80B84450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84450u)) return;
    // 80B84450: addi    r5, r5, 8728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8728);

label_80B84454:
    ctx->pc = 0x80B84454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84454: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84454u)) return;
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
label_80B84458:
    ctx->pc = 0x80B84458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84458u)) return;
    // 80B84458: bl      0x8045C750
    {
            ctx->lr = 0x80B8445Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B8445C:
    ctx->pc = 0x80B8445Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8445Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B8445C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84460:
    ctx->pc = 0x80B84460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84460u)) return;
    // 80B84460: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84464:
    ctx->pc = 0x80B84464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84464u)) return;
    // 80B84464: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80B84468:
    ctx->pc = 0x80B84468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84468u)) return;
    // 80B84468: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B8446C:
    ctx->pc = 0x80B8446Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8446Cu)) return;
    // 80B8446C: addi    r6, r6, -32751
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32751);

label_80B84470:
    ctx->pc = 0x80B84470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84470u)) return;
    // 80B84470: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84474:
    ctx->pc = 0x80B84474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84474u)) return;
    // 80B84474: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84478u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84478:
    ctx->pc = 0x80B84478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84478: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8447C:
    ctx->pc = 0x80B8447Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8447Cu)) return;
    // 80B8447C: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80B84480:
    ctx->pc = 0x80B84480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84480u)) return;
    // 80B84480: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84484:
    ctx->pc = 0x80B84484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84484u)) return;
    // 80B84484: addi    r5, r5, 8720
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8720);

label_80B84488:
    ctx->pc = 0x80B84488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84488: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84488u)) return;
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
label_80B8448C:
    ctx->pc = 0x80B8448Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8448Cu)) return;
    // 80B8448C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84490:
    ctx->pc = 0x80B84490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84490u)) return;
    // 80B84490: addi    r5, r5, 8732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8732);

label_80B84494:
    ctx->pc = 0x80B84494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84494: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84494u)) return;
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
label_80B84498:
    ctx->pc = 0x80B84498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84498u)) return;
    // 80B84498: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B8449C:
    ctx->pc = 0x80B8449Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8449Cu)) return;
    // 80B8449C: addi    r5, r5, 8736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8736);

label_80B844A0:
    ctx->pc = 0x80B844A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B844A0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B844A0u)) return;
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
label_80B844A4:
    ctx->pc = 0x80B844A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844A4u)) return;
    // 80B844A4: bl      0x8045C750
    {
            ctx->lr = 0x80B844A8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B844A8:
    ctx->pc = 0x80B844A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B844A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B844A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B844AC:
    ctx->pc = 0x80B844ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844ACu)) return;
    // 80B844AC: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80B844B0:
    ctx->pc = 0x80B844B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844B0u)) return;
    // 80B844B0: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80B844B4:
    ctx->pc = 0x80B844B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844B4u)) return;
    // 80B844B4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B844B8:
    ctx->pc = 0x80B844B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844B8u)) return;
    // 80B844B8: addi    r6, r6, -32751
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32751);

label_80B844BC:
    ctx->pc = 0x80B844BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844BCu)) return;
    // 80B844BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B844C0:
    ctx->pc = 0x80B844C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844C0u)) return;
    // 80B844C0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B844C4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B844C4:
    ctx->pc = 0x80B844C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B844C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B844C4: li      r3, 150
    ctx->gpr[3] = (u32)(s32)(150);

label_80B844C8:
    ctx->pc = 0x80B844C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844C8u)) return;
    // 80B844C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B844CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B844CC:
    ctx->pc = 0x80B844CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B844CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B844CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B844D0:
    ctx->pc = 0x80B844D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844D0u)) return;
    // 80B844D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B844D4:
    ctx->pc = 0x80B844D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844D4u)) return;
    // 80B844D4: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B844D8:
    ctx->pc = 0x80B844D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844D8u)) return;
    // 80B844D8: addi    r5, r5, 8740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8740);

label_80B844DC:
    ctx->pc = 0x80B844DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B844DC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B844DCu)) return;
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
label_80B844E0:
    ctx->pc = 0x80B844E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844E0u)) return;
    // 80B844E0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B844E4:
    ctx->pc = 0x80B844E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844E4u)) return;
    // 80B844E4: addi    r5, r5, 8744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8744);

label_80B844E8:
    ctx->pc = 0x80B844E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B844E8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B844E8u)) return;
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
label_80B844EC:
    ctx->pc = 0x80B844ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844ECu)) return;
    // 80B844EC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B844F0:
    ctx->pc = 0x80B844F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844F0u)) return;
    // 80B844F0: addi    r5, r5, 8748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8748);

label_80B844F4:
    ctx->pc = 0x80B844F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B844F4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B844F4u)) return;
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
label_80B844F8:
    ctx->pc = 0x80B844F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B844F8u)) return;
    // 80B844F8: bl      0x8045C750
    {
            ctx->lr = 0x80B844FCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B844FC:
    ctx->pc = 0x80B844FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B844FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B844FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84500:
    ctx->pc = 0x80B84500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84500u)) return;
    // 80B84500: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84504:
    ctx->pc = 0x80B84504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84504u)) return;
    // 80B84504: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80B84508:
    ctx->pc = 0x80B84508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84508u)) return;
    // 80B84508: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B8450C:
    ctx->pc = 0x80B8450Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8450Cu)) return;
    // 80B8450C: addi    r6, r6, -12527
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12527);

label_80B84510:
    ctx->pc = 0x80B84510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84510u)) return;
    // 80B84510: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84514:
    ctx->pc = 0x80B84514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84514u)) return;
    // 80B84514: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84518u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84518:
    ctx->pc = 0x80B84518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84518: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8451C:
    ctx->pc = 0x80B8451Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8451Cu)) return;
    // 80B8451C: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B84520:
    ctx->pc = 0x80B84520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84520u)) return;
    // 80B84520: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84524:
    ctx->pc = 0x80B84524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84524u)) return;
    // 80B84524: addi    r5, r5, 8752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8752);

label_80B84528:
    ctx->pc = 0x80B84528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84528: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84528u)) return;
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
label_80B8452C:
    ctx->pc = 0x80B8452Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8452Cu)) return;
    // 80B8452C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84530:
    ctx->pc = 0x80B84530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84530u)) return;
    // 80B84530: addi    r5, r5, 8756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8756);

label_80B84534:
    ctx->pc = 0x80B84534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84534: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84534u)) return;
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
label_80B84538:
    ctx->pc = 0x80B84538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84538u)) return;
    // 80B84538: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B8453C:
    ctx->pc = 0x80B8453Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8453Cu)) return;
    // 80B8453C: addi    r5, r5, 8760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8760);

label_80B84540:
    ctx->pc = 0x80B84540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84540: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84540u)) return;
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
label_80B84544:
    ctx->pc = 0x80B84544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84544u)) return;
    // 80B84544: bl      0x8045C750
    {
            ctx->lr = 0x80B84548u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84548:
    ctx->pc = 0x80B84548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84548: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8454C:
    ctx->pc = 0x80B8454Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8454Cu)) return;
    // 80B8454C: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B84550:
    ctx->pc = 0x80B84550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84550u)) return;
    // 80B84550: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80B84554:
    ctx->pc = 0x80B84554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84554u)) return;
    // 80B84554: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B84558:
    ctx->pc = 0x80B84558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84558u)) return;
    // 80B84558: addi    r6, r6, -12527
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12527);

label_80B8455C:
    ctx->pc = 0x80B8455Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8455Cu)) return;
    // 80B8455C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84560:
    ctx->pc = 0x80B84560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84560u)) return;
    // 80B84560: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84564u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84564:
    ctx->pc = 0x80B84564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84564: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84568:
    ctx->pc = 0x80B84568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84568u)) return;
    // 80B84568: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B8456C:
    ctx->pc = 0x80B8456Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8456Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8456C: lwz     r0, 0(r3)
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
label_80B84570:
    ctx->pc = 0x80B84570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84570u)) return;
    // 80B84570: cmpwi   r0, 0
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

label_80B84574:
    ctx->pc = 0x80B84574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84574u)) return;
    // 80B84574: bc    4, 2, 0x80B84584
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84584;
        }
    }

label_80B84578:
    ctx->pc = 0x80B84578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84578: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B8457C:
    ctx->pc = 0x80B8457Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8457Cu)) return;
    // 80B8457C: bl      0x8045F220
    {
            ctx->lr = 0x80B84580u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84580:
    ctx->pc = 0x80B84580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84580: bl      0x8045C034
    {
            ctx->lr = 0x80B84584u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84584:
    ctx->pc = 0x80B84584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84584: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84588:
    ctx->pc = 0x80B84588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84588u)) return;
    // 80B84588: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B8458C:
    ctx->pc = 0x80B8458Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8458Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8458C: lwz     r0, 0(r3)
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
label_80B84590:
    ctx->pc = 0x80B84590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84590u)) return;
    // 80B84590: cmpwi   r0, 0
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

label_80B84594:
    ctx->pc = 0x80B84594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84594u)) return;
    // 80B84594: bc    4, 2, 0x80B845AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B845AC;
        }
    }

label_80B84598:
    ctx->pc = 0x80B84598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84598: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B8459C:
    ctx->pc = 0x80B8459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8459Cu)) return;
    // 80B8459C: bl      0x8045F220
    {
            ctx->lr = 0x80B845A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B845A0:
    ctx->pc = 0x80B845A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B845A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B845A0: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B845A4:
    ctx->pc = 0x80B845A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845A4u)) return;
    // 80B845A4: addi    r4, r4, 12124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12124);

label_80B845A8:
    ctx->pc = 0x80B845A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845A8u)) return;
    // 80B845A8: bl      0x8045C060
    {
            ctx->lr = 0x80B845ACu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B845AC:
    ctx->pc = 0x80B845ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B845ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B845AC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B845B0:
    ctx->pc = 0x80B845B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845B0u)) return;
    // 80B845B0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B845B4:
    ctx->pc = 0x80B845B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B845B4: lwz     r0, 0(r3)
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
label_80B845B8:
    ctx->pc = 0x80B845B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845B8u)) return;
    // 80B845B8: cmpwi   r0, 1
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

label_80B845BC:
    ctx->pc = 0x80B845BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845BCu)) return;
    // 80B845BC: bc    4, 2, 0x80B845D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B845D4;
        }
    }

label_80B845C0:
    ctx->pc = 0x80B845C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B845C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B845C0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B845C4:
    ctx->pc = 0x80B845C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845C4u)) return;
    // 80B845C4: bl      0x8045F220
    {
            ctx->lr = 0x80B845C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B845C8:
    ctx->pc = 0x80B845C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B845C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B845C8: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B845CC:
    ctx->pc = 0x80B845CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845CCu)) return;
    // 80B845CC: addi    r4, r4, 12132
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12132);

label_80B845D0:
    ctx->pc = 0x80B845D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845D0u)) return;
    // 80B845D0: bl      0x8045C060
    {
            ctx->lr = 0x80B845D4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B845D4:
    ctx->pc = 0x80B845D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B845D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B845D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B845D8:
    ctx->pc = 0x80B845D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845D8u)) return;
    // 80B845D8: bl      0x8045F220
    {
            ctx->lr = 0x80B845DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B845DC:
    ctx->pc = 0x80B845DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B845DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B845DC: bl      0x8045EB8C
    {
            ctx->lr = 0x80B845E0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B845E0:
    ctx->pc = 0x80B845E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B845E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B845E0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B845E4:
    ctx->pc = 0x80B845E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845E4u)) return;
    // 80B845E4: bl      0x8045F220
    {
            ctx->lr = 0x80B845E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B845E8:
    ctx->pc = 0x80B845E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B845E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B845E8: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B845EC:
    ctx->pc = 0x80B845ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845ECu)) return;
    // 80B845EC: addi    r4, r4, -27076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27076);

label_80B845F0:
    ctx->pc = 0x80B845F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845F0u)) return;
    // 80B845F0: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B845F4:
    ctx->pc = 0x80B845F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845F4u)) return;
    // 80B845F4: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B845F8:
    ctx->pc = 0x80B845F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845F8u)) return;
    // 80B845F8: lis     r6, -27540
    ctx->gpr[6] = ((u32)(s32)(-27540) << 16);

label_80B845FC:
    ctx->pc = 0x80B845FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B845FCu)) return;
    // 80B845FC: addi    r6, r6, 8656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8656);

label_80B84600:
    ctx->pc = 0x80B84600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B84600: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B84600u)) return;
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
label_80B84604:
    ctx->pc = 0x80B84604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84604u)) return;
    // 80B84604: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B84608:
    ctx->pc = 0x80B84608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84608u)) return;
    // 80B84608: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B8460C:
    ctx->pc = 0x80B8460Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8460Cu)) return;
    // 80B8460C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B84610u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B84610:
    ctx->pc = 0x80B84610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84610: li      r3, 740
    ctx->gpr[3] = (u32)(s32)(740);

label_80B84614:
    ctx->pc = 0x80B84614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84614u)) return;
    // 80B84614: bl      0x8045BFA0
    {
            ctx->lr = 0x80B84618u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B84618:
    ctx->pc = 0x80B84618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84618: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B8461C:
    ctx->pc = 0x80B8461Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8461Cu)) return;
    // 80B8461C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84620:
    ctx->pc = 0x80B84620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84620u)) return;
    // 80B84620: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84624:
    ctx->pc = 0x80B84624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84624: lwz     r0, 0(r4)
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
label_80B84628:
    ctx->pc = 0x80B84628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84628u)) return;
    // 80B84628: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B8462C:
    ctx->pc = 0x80B8462Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8462Cu)) return;
    // 80B8462C: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84630:
    ctx->pc = 0x80B84630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84630u)) return;
    // 80B84630: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84634:
    ctx->pc = 0x80B84634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84634: lwzx    r4, r4, r0
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
label_80B84638:
    ctx->pc = 0x80B84638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84638: lwz     r4, 32(r4)
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
label_80B8463C:
    ctx->pc = 0x80B8463Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8463Cu)) return;
    // 80B8463C: bl      0x8045F608
    {
            ctx->lr = 0x80B84640u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84640:
    ctx->pc = 0x80B84640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84640: li      r3, 140
    ctx->gpr[3] = (u32)(s32)(140);

label_80B84644:
    ctx->pc = 0x80B84644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84644u)) return;
    // 80B84644: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84648u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84648:
    ctx->pc = 0x80B84648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84648: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8464C:
    ctx->pc = 0x80B8464Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8464Cu)) return;
    // 80B8464C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84650:
    ctx->pc = 0x80B84650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84650u)) return;
    // 80B84650: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84654:
    ctx->pc = 0x80B84654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84654u)) return;
    // 80B84654: addi    r5, r5, 8764
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8764);

label_80B84658:
    ctx->pc = 0x80B84658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84658: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84658u)) return;
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
label_80B8465C:
    ctx->pc = 0x80B8465Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8465Cu)) return;
    // 80B8465C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84660:
    ctx->pc = 0x80B84660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84660u)) return;
    // 80B84660: addi    r5, r5, 8768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8768);

label_80B84664:
    ctx->pc = 0x80B84664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84664: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84664u)) return;
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
label_80B84668:
    ctx->pc = 0x80B84668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84668u)) return;
    // 80B84668: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B8466C:
    ctx->pc = 0x80B8466Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8466Cu)) return;
    // 80B8466C: addi    r5, r5, 8772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8772);

label_80B84670:
    ctx->pc = 0x80B84670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84670: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84670u)) return;
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
label_80B84674:
    ctx->pc = 0x80B84674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84674u)) return;
    // 80B84674: bl      0x8045C750
    {
            ctx->lr = 0x80B84678u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84678:
    ctx->pc = 0x80B84678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84678: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B8467C:
    ctx->pc = 0x80B8467Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8467Cu)) return;
    // 80B8467C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84680:
    ctx->pc = 0x80B84680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84680u)) return;
    // 80B84680: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B84684:
    ctx->pc = 0x80B84684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84684u)) return;
    // 80B84684: addi    r5, r6, -5632
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5632);

label_80B84688:
    ctx->pc = 0x80B84688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84688u)) return;
    // 80B84688: addi    r6, r6, -17391
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17391);

label_80B8468C:
    ctx->pc = 0x80B8468Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8468Cu)) return;
    // 80B8468C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84690:
    ctx->pc = 0x80B84690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84690u)) return;
    // 80B84690: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84694u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84694:
    ctx->pc = 0x80B84694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84694: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84698:
    ctx->pc = 0x80B84698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84698u)) return;
    // 80B84698: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B8469C:
    ctx->pc = 0x80B8469Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8469Cu)) return;
    // 80B8469C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B846A0:
    ctx->pc = 0x80B846A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846A0u)) return;
    // 80B846A0: addi    r5, r5, 8776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8776);

label_80B846A4:
    ctx->pc = 0x80B846A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B846A4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B846A4u)) return;
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
label_80B846A8:
    ctx->pc = 0x80B846A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846A8u)) return;
    // 80B846A8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B846AC:
    ctx->pc = 0x80B846ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846ACu)) return;
    // 80B846AC: addi    r5, r5, 8768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8768);

label_80B846B0:
    ctx->pc = 0x80B846B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B846B0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B846B0u)) return;
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
label_80B846B4:
    ctx->pc = 0x80B846B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846B4u)) return;
    // 80B846B4: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B846B8:
    ctx->pc = 0x80B846B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846B8u)) return;
    // 80B846B8: addi    r5, r5, 8780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8780);

label_80B846BC:
    ctx->pc = 0x80B846BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B846BC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B846BCu)) return;
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
label_80B846C0:
    ctx->pc = 0x80B846C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846C0u)) return;
    // 80B846C0: bl      0x8045C750
    {
            ctx->lr = 0x80B846C4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B846C4:
    ctx->pc = 0x80B846C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B846C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B846C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B846C8:
    ctx->pc = 0x80B846C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846C8u)) return;
    // 80B846C8: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B846CC:
    ctx->pc = 0x80B846CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846CCu)) return;
    // 80B846CC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B846D0:
    ctx->pc = 0x80B846D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846D0u)) return;
    // 80B846D0: addi    r5, r6, -5632
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5632);

label_80B846D4:
    ctx->pc = 0x80B846D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846D4u)) return;
    // 80B846D4: addi    r6, r6, -17391
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17391);

label_80B846D8:
    ctx->pc = 0x80B846D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846D8u)) return;
    // 80B846D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B846DC:
    ctx->pc = 0x80B846DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846DCu)) return;
    // 80B846DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B846E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B846E0:
    ctx->pc = 0x80B846E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B846E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B846E0: li      r3, 741
    ctx->gpr[3] = (u32)(s32)(741);

label_80B846E4:
    ctx->pc = 0x80B846E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846E4u)) return;
    // 80B846E4: bl      0x8045BFA0
    {
            ctx->lr = 0x80B846E8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B846E8:
    ctx->pc = 0x80B846E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B846E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B846E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B846EC:
    ctx->pc = 0x80B846ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846ECu)) return;
    // 80B846EC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B846F0:
    ctx->pc = 0x80B846F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846F0u)) return;
    // 80B846F0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B846F4:
    ctx->pc = 0x80B846F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B846F4: lwz     r0, 0(r4)
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
label_80B846F8:
    ctx->pc = 0x80B846F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846F8u)) return;
    // 80B846F8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B846FC:
    ctx->pc = 0x80B846FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B846FCu)) return;
    // 80B846FC: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84700:
    ctx->pc = 0x80B84700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84700u)) return;
    // 80B84700: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84704:
    ctx->pc = 0x80B84704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84704: lwzx    r4, r4, r0
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
label_80B84708:
    ctx->pc = 0x80B84708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84708: lwz     r4, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8470C:
    ctx->pc = 0x80B8470Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8470Cu)) return;
    // 80B8470C: bl      0x8045F608
    {
            ctx->lr = 0x80B84710u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84710:
    ctx->pc = 0x80B84710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84710: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84714:
    ctx->pc = 0x80B84714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84714u)) return;
    // 80B84714: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84718:
    ctx->pc = 0x80B84718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84718: lwz     r0, 0(r3)
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
label_80B8471C:
    ctx->pc = 0x80B8471Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8471Cu)) return;
    // 80B8471C: cmpwi   r0, 0
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

label_80B84720:
    ctx->pc = 0x80B84720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84720u)) return;
    // 80B84720: bc    4, 2, 0x80B84730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84730;
        }
    }

label_80B84724:
    ctx->pc = 0x80B84724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84724: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84728:
    ctx->pc = 0x80B84728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84728u)) return;
    // 80B84728: bl      0x8045F220
    {
            ctx->lr = 0x80B8472Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B8472C:
    ctx->pc = 0x80B8472Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8472Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B8472C: bl      0x8045C034
    {
            ctx->lr = 0x80B84730u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84730:
    ctx->pc = 0x80B84730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84730: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84734:
    ctx->pc = 0x80B84734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84734u)) return;
    // 80B84734: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84738:
    ctx->pc = 0x80B84738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84738: lwz     r0, 0(r3)
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
label_80B8473C:
    ctx->pc = 0x80B8473Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8473Cu)) return;
    // 80B8473C: cmpwi   r0, 1
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

label_80B84740:
    ctx->pc = 0x80B84740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84740u)) return;
    // 80B84740: bc    4, 2, 0x80B84750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84750;
        }
    }

label_80B84744:
    ctx->pc = 0x80B84744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84744: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84748:
    ctx->pc = 0x80B84748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84748u)) return;
    // 80B84748: bl      0x8045F220
    {
            ctx->lr = 0x80B8474Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B8474C:
    ctx->pc = 0x80B8474Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8474Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B8474C: bl      0x8045C034
    {
            ctx->lr = 0x80B84750u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84750:
    ctx->pc = 0x80B84750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84750: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84754:
    ctx->pc = 0x80B84754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84754u)) return;
    // 80B84754: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84758:
    ctx->pc = 0x80B84758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84758: lwz     r0, 0(r3)
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
label_80B8475C:
    ctx->pc = 0x80B8475Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8475Cu)) return;
    // 80B8475C: cmpwi   r0, 0
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

label_80B84760:
    ctx->pc = 0x80B84760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84760u)) return;
    // 80B84760: bc    4, 2, 0x80B84778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84778;
        }
    }

label_80B84764:
    ctx->pc = 0x80B84764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84764: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84768:
    ctx->pc = 0x80B84768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84768u)) return;
    // 80B84768: bl      0x8045F220
    {
            ctx->lr = 0x80B8476Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B8476C:
    ctx->pc = 0x80B8476Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8476Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B8476C: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84770:
    ctx->pc = 0x80B84770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84770u)) return;
    // 80B84770: addi    r4, r4, 12140
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12140);

label_80B84774:
    ctx->pc = 0x80B84774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84774u)) return;
    // 80B84774: bl      0x8045C060
    {
            ctx->lr = 0x80B84778u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B84778:
    ctx->pc = 0x80B84778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84778: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B8477C:
    ctx->pc = 0x80B8477Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8477Cu)) return;
    // 80B8477C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84780:
    ctx->pc = 0x80B84780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84780: lwz     r0, 0(r3)
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
label_80B84784:
    ctx->pc = 0x80B84784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84784u)) return;
    // 80B84784: cmpwi   r0, 1
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

label_80B84788:
    ctx->pc = 0x80B84788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84788u)) return;
    // 80B84788: bc    4, 2, 0x80B847A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B847A0;
        }
    }

label_80B8478C:
    ctx->pc = 0x80B8478Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8478Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8478C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84790:
    ctx->pc = 0x80B84790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84790u)) return;
    // 80B84790: bl      0x8045F220
    {
            ctx->lr = 0x80B84794u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84794:
    ctx->pc = 0x80B84794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84794: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84798:
    ctx->pc = 0x80B84798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84798u)) return;
    // 80B84798: addi    r4, r4, 12144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12144);

label_80B8479C:
    ctx->pc = 0x80B8479Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8479Cu)) return;
    // 80B8479C: bl      0x8045C060
    {
            ctx->lr = 0x80B847A0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B847A0:
    ctx->pc = 0x80B847A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B847A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B847A0: li      r3, 150
    ctx->gpr[3] = (u32)(s32)(150);

label_80B847A4:
    ctx->pc = 0x80B847A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847A4u)) return;
    // 80B847A4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B847A8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B847A8:
    ctx->pc = 0x80B847A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B847A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B847A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B847AC:
    ctx->pc = 0x80B847ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847ACu)) return;
    // 80B847AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B847B0:
    ctx->pc = 0x80B847B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847B0u)) return;
    // 80B847B0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B847B4:
    ctx->pc = 0x80B847B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847B4u)) return;
    // 80B847B4: addi    r5, r5, 8784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8784);

label_80B847B8:
    ctx->pc = 0x80B847B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B847B8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B847B8u)) return;
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
label_80B847BC:
    ctx->pc = 0x80B847BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847BCu)) return;
    // 80B847BC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B847C0:
    ctx->pc = 0x80B847C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847C0u)) return;
    // 80B847C0: addi    r5, r5, 8688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8688);

label_80B847C4:
    ctx->pc = 0x80B847C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B847C4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B847C4u)) return;
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
label_80B847C8:
    ctx->pc = 0x80B847C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847C8u)) return;
    // 80B847C8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B847CC:
    ctx->pc = 0x80B847CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847CCu)) return;
    // 80B847CC: addi    r5, r5, 8788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8788);

label_80B847D0:
    ctx->pc = 0x80B847D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B847D0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B847D0u)) return;
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
label_80B847D4:
    ctx->pc = 0x80B847D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847D4u)) return;
    // 80B847D4: bl      0x8045C750
    {
            ctx->lr = 0x80B847D8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B847D8:
    ctx->pc = 0x80B847D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B847D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B847D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B847DC:
    ctx->pc = 0x80B847DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847DCu)) return;
    // 80B847DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B847E0:
    ctx->pc = 0x80B847E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847E0u)) return;
    // 80B847E0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80B847E4:
    ctx->pc = 0x80B847E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847E4u)) return;
    // 80B847E4: li      r6, 28689
    ctx->gpr[6] = (u32)(s32)(28689);

label_80B847E8:
    ctx->pc = 0x80B847E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847E8u)) return;
    // 80B847E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B847EC:
    ctx->pc = 0x80B847ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847ECu)) return;
    // 80B847EC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B847F0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B847F0:
    ctx->pc = 0x80B847F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B847F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B847F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B847F4:
    ctx->pc = 0x80B847F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847F4u)) return;
    // 80B847F4: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B847F8:
    ctx->pc = 0x80B847F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847F8u)) return;
    // 80B847F8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B847FC:
    ctx->pc = 0x80B847FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B847FCu)) return;
    // 80B847FC: addi    r5, r5, 8792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8792);

label_80B84800:
    ctx->pc = 0x80B84800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84800: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84800u)) return;
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
label_80B84804:
    ctx->pc = 0x80B84804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84804u)) return;
    // 80B84804: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84808:
    ctx->pc = 0x80B84808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84808u)) return;
    // 80B84808: addi    r5, r5, 8688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8688);

label_80B8480C:
    ctx->pc = 0x80B8480Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8480Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B8480C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B8480Cu)) return;
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
label_80B84810:
    ctx->pc = 0x80B84810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84810u)) return;
    // 80B84810: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84814:
    ctx->pc = 0x80B84814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84814u)) return;
    // 80B84814: addi    r5, r5, 8796
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8796);

label_80B84818:
    ctx->pc = 0x80B84818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84818: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84818u)) return;
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
label_80B8481C:
    ctx->pc = 0x80B8481Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8481Cu)) return;
    // 80B8481C: bl      0x8045C750
    {
            ctx->lr = 0x80B84820u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84820:
    ctx->pc = 0x80B84820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B84820: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84824:
    ctx->pc = 0x80B84824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84824u)) return;
    // 80B84824: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B84828:
    ctx->pc = 0x80B84828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84828u)) return;
    // 80B84828: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80B8482C:
    ctx->pc = 0x80B8482Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8482Cu)) return;
    // 80B8482C: li      r6, 28689
    ctx->gpr[6] = (u32)(s32)(28689);

label_80B84830:
    ctx->pc = 0x80B84830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84830u)) return;
    // 80B84830: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84834:
    ctx->pc = 0x80B84834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84834u)) return;
    // 80B84834: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84838u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84838:
    ctx->pc = 0x80B84838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84838: li      r3, 742
    ctx->gpr[3] = (u32)(s32)(742);

label_80B8483C:
    ctx->pc = 0x80B8483Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8483Cu)) return;
    // 80B8483C: bl      0x8045BFA0
    {
            ctx->lr = 0x80B84840u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B84840:
    ctx->pc = 0x80B84840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84840: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84844:
    ctx->pc = 0x80B84844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84844u)) return;
    // 80B84844: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84848:
    ctx->pc = 0x80B84848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84848u)) return;
    // 80B84848: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B8484C:
    ctx->pc = 0x80B8484Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8484Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B8484C: lwz     r0, 0(r4)
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
label_80B84850:
    ctx->pc = 0x80B84850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84850u)) return;
    // 80B84850: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84854:
    ctx->pc = 0x80B84854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84854u)) return;
    // 80B84854: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84858:
    ctx->pc = 0x80B84858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84858u)) return;
    // 80B84858: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B8485C:
    ctx->pc = 0x80B8485Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8485Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8485C: lwzx    r4, r4, r0
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
label_80B84860:
    ctx->pc = 0x80B84860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84860: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84864:
    ctx->pc = 0x80B84864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84864u)) return;
    // 80B84864: bl      0x8045F608
    {
            ctx->lr = 0x80B84868u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84868:
    ctx->pc = 0x80B84868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84868: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B8486C:
    ctx->pc = 0x80B8486Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8486Cu)) return;
    // 80B8486C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84870:
    ctx->pc = 0x80B84870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84870: lwz     r0, 0(r3)
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
label_80B84874:
    ctx->pc = 0x80B84874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84874u)) return;
    // 80B84874: cmpwi   r0, 0
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

label_80B84878:
    ctx->pc = 0x80B84878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84878u)) return;
    // 80B84878: bc    4, 2, 0x80B84888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84888;
        }
    }

label_80B8487C:
    ctx->pc = 0x80B8487Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8487Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8487C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84880:
    ctx->pc = 0x80B84880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84880u)) return;
    // 80B84880: bl      0x8045F220
    {
            ctx->lr = 0x80B84884u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84884:
    ctx->pc = 0x80B84884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84884: bl      0x8045C034
    {
            ctx->lr = 0x80B84888u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84888:
    ctx->pc = 0x80B84888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84888: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B8488C:
    ctx->pc = 0x80B8488Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8488Cu)) return;
    // 80B8488C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84890:
    ctx->pc = 0x80B84890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84890: lwz     r0, 0(r3)
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
label_80B84894:
    ctx->pc = 0x80B84894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84894u)) return;
    // 80B84894: cmpwi   r0, 1
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

label_80B84898:
    ctx->pc = 0x80B84898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84898u)) return;
    // 80B84898: bc    4, 2, 0x80B848A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B848A8;
        }
    }

label_80B8489C:
    ctx->pc = 0x80B8489Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8489Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8489C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B848A0:
    ctx->pc = 0x80B848A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848A0u)) return;
    // 80B848A0: bl      0x8045F220
    {
            ctx->lr = 0x80B848A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B848A4:
    ctx->pc = 0x80B848A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B848A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B848A4: bl      0x8045C034
    {
            ctx->lr = 0x80B848A8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B848A8:
    ctx->pc = 0x80B848A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B848A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B848A8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B848AC:
    ctx->pc = 0x80B848ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848ACu)) return;
    // 80B848AC: bl      0x8045F220
    {
            ctx->lr = 0x80B848B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B848B0:
    ctx->pc = 0x80B848B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B848B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B848B0: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B848B4:
    ctx->pc = 0x80B848B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848B4u)) return;
    // 80B848B4: addi    r4, r4, 12152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12152);

label_80B848B8:
    ctx->pc = 0x80B848B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848B8u)) return;
    // 80B848B8: bl      0x8045C060
    {
            ctx->lr = 0x80B848BCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B848BC:
    ctx->pc = 0x80B848BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B848BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B848BC: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B848C0:
    ctx->pc = 0x80B848C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848C0u)) return;
    // 80B848C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B848C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B848C4:
    ctx->pc = 0x80B848C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B848C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B848C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B848C8:
    ctx->pc = 0x80B848C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848C8u)) return;
    // 80B848C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B848CC:
    ctx->pc = 0x80B848CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848CCu)) return;
    // 80B848CC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B848D0:
    ctx->pc = 0x80B848D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848D0u)) return;
    // 80B848D0: addi    r5, r5, 8800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8800);

label_80B848D4:
    ctx->pc = 0x80B848D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B848D4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B848D4u)) return;
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
label_80B848D8:
    ctx->pc = 0x80B848D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848D8u)) return;
    // 80B848D8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B848DC:
    ctx->pc = 0x80B848DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848DCu)) return;
    // 80B848DC: addi    r5, r5, 8804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8804);

label_80B848E0:
    ctx->pc = 0x80B848E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B848E0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B848E0u)) return;
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
label_80B848E4:
    ctx->pc = 0x80B848E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848E4u)) return;
    // 80B848E4: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B848E8:
    ctx->pc = 0x80B848E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848E8u)) return;
    // 80B848E8: addi    r5, r5, 8808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8808);

label_80B848EC:
    ctx->pc = 0x80B848ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B848EC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B848ECu)) return;
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
label_80B848F0:
    ctx->pc = 0x80B848F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848F0u)) return;
    // 80B848F0: bl      0x8045C750
    {
            ctx->lr = 0x80B848F4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B848F4:
    ctx->pc = 0x80B848F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B848F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B848F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B848F8:
    ctx->pc = 0x80B848F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848F8u)) return;
    // 80B848F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B848FC:
    ctx->pc = 0x80B848FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B848FCu)) return;
    // 80B848FC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B84900:
    ctx->pc = 0x80B84900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84900u)) return;
    // 80B84900: addi    r5, r5, -256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-256);

label_80B84904:
    ctx->pc = 0x80B84904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84904u)) return;
    // 80B84904: li      r6, 330
    ctx->gpr[6] = (u32)(s32)(330);

label_80B84908:
    ctx->pc = 0x80B84908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84908u)) return;
    // 80B84908: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B8490C:
    ctx->pc = 0x80B8490Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8490Cu)) return;
    // 80B8490C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84910u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84910:
    ctx->pc = 0x80B84910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84910: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84914:
    ctx->pc = 0x80B84914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84914u)) return;
    // 80B84914: bl      0x8045F220
    {
            ctx->lr = 0x80B84918u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84918:
    ctx->pc = 0x80B84918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84918: bl      0x8045C034
    {
            ctx->lr = 0x80B8491Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B8491C:
    ctx->pc = 0x80B8491Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8491Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B8491C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84920:
    ctx->pc = 0x80B84920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84920u)) return;
    // 80B84920: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84924:
    ctx->pc = 0x80B84924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84924: lwz     r0, 0(r3)
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
label_80B84928:
    ctx->pc = 0x80B84928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84928u)) return;
    // 80B84928: cmpwi   r0, 0
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

label_80B8492C:
    ctx->pc = 0x80B8492Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8492Cu)) return;
    // 80B8492C: bc    4, 2, 0x80B84944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84944;
        }
    }

label_80B84930:
    ctx->pc = 0x80B84930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84930: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84934:
    ctx->pc = 0x80B84934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84934u)) return;
    // 80B84934: bl      0x8045F220
    {
            ctx->lr = 0x80B84938u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84938:
    ctx->pc = 0x80B84938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84938: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B8493C:
    ctx->pc = 0x80B8493Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8493Cu)) return;
    // 80B8493C: addi    r4, r4, 12156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12156);

label_80B84940:
    ctx->pc = 0x80B84940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84940u)) return;
    // 80B84940: bl      0x8045C060
    {
            ctx->lr = 0x80B84944u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B84944:
    ctx->pc = 0x80B84944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84944: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84948:
    ctx->pc = 0x80B84948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84948u)) return;
    // 80B84948: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B8494C:
    ctx->pc = 0x80B8494Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8494Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8494C: lwz     r0, 0(r3)
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
label_80B84950:
    ctx->pc = 0x80B84950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84950u)) return;
    // 80B84950: cmpwi   r0, 1
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

label_80B84954:
    ctx->pc = 0x80B84954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84954u)) return;
    // 80B84954: bc    4, 2, 0x80B8496C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B8496C;
        }
    }

label_80B84958:
    ctx->pc = 0x80B84958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84958: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B8495C:
    ctx->pc = 0x80B8495Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8495Cu)) return;
    // 80B8495C: bl      0x8045F220
    {
            ctx->lr = 0x80B84960u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84960:
    ctx->pc = 0x80B84960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84960: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84964:
    ctx->pc = 0x80B84964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84964u)) return;
    // 80B84964: addi    r4, r4, 12160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12160);

label_80B84968:
    ctx->pc = 0x80B84968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84968u)) return;
    // 80B84968: bl      0x8045C060
    {
            ctx->lr = 0x80B8496Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B8496C:
    ctx->pc = 0x80B8496Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8496Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8496C: li      r3, 743
    ctx->gpr[3] = (u32)(s32)(743);

label_80B84970:
    ctx->pc = 0x80B84970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84970u)) return;
    // 80B84970: bl      0x8045BFA0
    {
            ctx->lr = 0x80B84974u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B84974:
    ctx->pc = 0x80B84974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84978:
    ctx->pc = 0x80B84978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84978u)) return;
    // 80B84978: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B8497C:
    ctx->pc = 0x80B8497Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8497Cu)) return;
    // 80B8497C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84980:
    ctx->pc = 0x80B84980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84980: lwz     r0, 0(r4)
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
label_80B84984:
    ctx->pc = 0x80B84984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84984u)) return;
    // 80B84984: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84988:
    ctx->pc = 0x80B84988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84988u)) return;
    // 80B84988: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B8498C:
    ctx->pc = 0x80B8498Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8498Cu)) return;
    // 80B8498C: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84990:
    ctx->pc = 0x80B84990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84990: lwzx    r4, r4, r0
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
label_80B84994:
    ctx->pc = 0x80B84994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84994: lwz     r4, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84998:
    ctx->pc = 0x80B84998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84998u)) return;
    // 80B84998: bl      0x8045F608
    {
            ctx->lr = 0x80B8499Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B8499C:
    ctx->pc = 0x80B8499Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8499Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B8499C: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B849A0:
    ctx->pc = 0x80B849A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849A0u)) return;
    // 80B849A0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B849A4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B849A4:
    ctx->pc = 0x80B849A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B849A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B849A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B849A8:
    ctx->pc = 0x80B849A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849A8u)) return;
    // 80B849A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B849AC:
    ctx->pc = 0x80B849ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849ACu)) return;
    // 80B849AC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B849B0:
    ctx->pc = 0x80B849B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849B0u)) return;
    // 80B849B0: addi    r5, r5, 8812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8812);

label_80B849B4:
    ctx->pc = 0x80B849B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B849B4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B849B4u)) return;
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
label_80B849B8:
    ctx->pc = 0x80B849B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849B8u)) return;
    // 80B849B8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B849BC:
    ctx->pc = 0x80B849BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849BCu)) return;
    // 80B849BC: addi    r5, r5, 8816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8816);

label_80B849C0:
    ctx->pc = 0x80B849C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B849C0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B849C0u)) return;
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
label_80B849C4:
    ctx->pc = 0x80B849C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849C4u)) return;
    // 80B849C4: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B849C8:
    ctx->pc = 0x80B849C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849C8u)) return;
    // 80B849C8: addi    r5, r5, 8820
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8820);

label_80B849CC:
    ctx->pc = 0x80B849CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B849CC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B849CCu)) return;
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
label_80B849D0:
    ctx->pc = 0x80B849D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849D0u)) return;
    // 80B849D0: bl      0x8045C750
    {
            ctx->lr = 0x80B849D4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B849D4:
    ctx->pc = 0x80B849D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B849D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B849D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B849D8:
    ctx->pc = 0x80B849D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849D8u)) return;
    // 80B849D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B849DC:
    ctx->pc = 0x80B849DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849DCu)) return;
    // 80B849DC: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80B849E0:
    ctx->pc = 0x80B849E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849E0u)) return;
    // 80B849E0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B849E4:
    ctx->pc = 0x80B849E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849E4u)) return;
    // 80B849E4: addi    r6, r6, -31727
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31727);

label_80B849E8:
    ctx->pc = 0x80B849E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849E8u)) return;
    // 80B849E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B849EC:
    ctx->pc = 0x80B849ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849ECu)) return;
    // 80B849EC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B849F0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B849F0:
    ctx->pc = 0x80B849F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B849F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B849F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B849F4:
    ctx->pc = 0x80B849F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849F4u)) return;
    // 80B849F4: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80B849F8:
    ctx->pc = 0x80B849F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849F8u)) return;
    // 80B849F8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B849FC:
    ctx->pc = 0x80B849FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B849FCu)) return;
    // 80B849FC: addi    r5, r5, 8824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8824);

label_80B84A00:
    ctx->pc = 0x80B84A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84A00: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84A00u)) return;
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
label_80B84A04:
    ctx->pc = 0x80B84A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A04u)) return;
    // 80B84A04: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84A08:
    ctx->pc = 0x80B84A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A08u)) return;
    // 80B84A08: addi    r5, r5, 8828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8828);

label_80B84A0C:
    ctx->pc = 0x80B84A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84A0C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84A0Cu)) return;
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
label_80B84A10:
    ctx->pc = 0x80B84A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A10u)) return;
    // 80B84A10: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84A14:
    ctx->pc = 0x80B84A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A14u)) return;
    // 80B84A14: addi    r5, r5, 8832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8832);

label_80B84A18:
    ctx->pc = 0x80B84A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84A18: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84A18u)) return;
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
label_80B84A1C:
    ctx->pc = 0x80B84A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A1Cu)) return;
    // 80B84A1C: bl      0x8045C750
    {
            ctx->lr = 0x80B84A20u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84A20:
    ctx->pc = 0x80B84A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84A20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84A24:
    ctx->pc = 0x80B84A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A24u)) return;
    // 80B84A24: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80B84A28:
    ctx->pc = 0x80B84A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A28u)) return;
    // 80B84A28: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80B84A2C:
    ctx->pc = 0x80B84A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A2Cu)) return;
    // 80B84A2C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B84A30:
    ctx->pc = 0x80B84A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A30u)) return;
    // 80B84A30: addi    r6, r6, -31727
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31727);

label_80B84A34:
    ctx->pc = 0x80B84A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A34u)) return;
    // 80B84A34: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84A38:
    ctx->pc = 0x80B84A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A38u)) return;
    // 80B84A38: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84A3Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84A3C:
    ctx->pc = 0x80B84A3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84A3C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84A40:
    ctx->pc = 0x80B84A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A40u)) return;
    // 80B84A40: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84A44:
    ctx->pc = 0x80B84A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84A44: lwz     r0, 0(r3)
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
label_80B84A48:
    ctx->pc = 0x80B84A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A48u)) return;
    // 80B84A48: cmpwi   r0, 0
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

label_80B84A4C:
    ctx->pc = 0x80B84A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A4Cu)) return;
    // 80B84A4C: bc    4, 2, 0x80B84A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84A5C;
        }
    }

label_80B84A50:
    ctx->pc = 0x80B84A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84A50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84A54:
    ctx->pc = 0x80B84A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A54u)) return;
    // 80B84A54: bl      0x8045F220
    {
            ctx->lr = 0x80B84A58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84A58:
    ctx->pc = 0x80B84A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84A58: bl      0x8045C034
    {
            ctx->lr = 0x80B84A5Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84A5C:
    ctx->pc = 0x80B84A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84A5C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84A60:
    ctx->pc = 0x80B84A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A60u)) return;
    // 80B84A60: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84A64:
    ctx->pc = 0x80B84A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84A64: lwz     r0, 0(r3)
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
label_80B84A68:
    ctx->pc = 0x80B84A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A68u)) return;
    // 80B84A68: cmpwi   r0, 1
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

label_80B84A6C:
    ctx->pc = 0x80B84A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A6Cu)) return;
    // 80B84A6C: bc    4, 2, 0x80B84A7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84A7C;
        }
    }

label_80B84A70:
    ctx->pc = 0x80B84A70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84A70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84A74:
    ctx->pc = 0x80B84A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A74u)) return;
    // 80B84A74: bl      0x8045F220
    {
            ctx->lr = 0x80B84A78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84A78:
    ctx->pc = 0x80B84A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84A78: bl      0x8045C034
    {
            ctx->lr = 0x80B84A7Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84A7C:
    ctx->pc = 0x80B84A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84A7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84A80:
    ctx->pc = 0x80B84A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A80u)) return;
    // 80B84A80: bl      0x8045F220
    {
            ctx->lr = 0x80B84A84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84A84:
    ctx->pc = 0x80B84A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84A84: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84A88:
    ctx->pc = 0x80B84A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A88u)) return;
    // 80B84A88: addi    r4, r4, 12164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12164);

label_80B84A8C:
    ctx->pc = 0x80B84A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A8Cu)) return;
    // 80B84A8C: bl      0x8045C060
    {
            ctx->lr = 0x80B84A90u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B84A90:
    ctx->pc = 0x80B84A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84A90: li      r3, 744
    ctx->gpr[3] = (u32)(s32)(744);

label_80B84A94:
    ctx->pc = 0x80B84A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A94u)) return;
    // 80B84A94: bl      0x8045BFA0
    {
            ctx->lr = 0x80B84A98u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B84A98:
    ctx->pc = 0x80B84A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84A98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84A9C:
    ctx->pc = 0x80B84A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84A9Cu)) return;
    // 80B84A9C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84AA0:
    ctx->pc = 0x80B84AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AA0u)) return;
    // 80B84AA0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84AA4:
    ctx->pc = 0x80B84AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84AA4: lwz     r0, 0(r4)
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
label_80B84AA8:
    ctx->pc = 0x80B84AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AA8u)) return;
    // 80B84AA8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84AAC:
    ctx->pc = 0x80B84AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AACu)) return;
    // 80B84AAC: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84AB0:
    ctx->pc = 0x80B84AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AB0u)) return;
    // 80B84AB0: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84AB4:
    ctx->pc = 0x80B84AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84AB4: lwzx    r4, r4, r0
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
label_80B84AB8:
    ctx->pc = 0x80B84AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84AB8: lwz     r4, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84ABC:
    ctx->pc = 0x80B84ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84ABCu)) return;
    // 80B84ABC: bl      0x8045F608
    {
            ctx->lr = 0x80B84AC0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84AC0:
    ctx->pc = 0x80B84AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84AC0: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B84AC4:
    ctx->pc = 0x80B84AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AC4u)) return;
    // 80B84AC4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84AC8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84AC8:
    ctx->pc = 0x80B84AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84AC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84ACC:
    ctx->pc = 0x80B84ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84ACCu)) return;
    // 80B84ACC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84AD0:
    ctx->pc = 0x80B84AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AD0u)) return;
    // 80B84AD0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84AD4:
    ctx->pc = 0x80B84AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AD4u)) return;
    // 80B84AD4: addi    r5, r5, 8836
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8836);

label_80B84AD8:
    ctx->pc = 0x80B84AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84AD8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84AD8u)) return;
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
label_80B84ADC:
    ctx->pc = 0x80B84ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84ADCu)) return;
    // 80B84ADC: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84AE0:
    ctx->pc = 0x80B84AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AE0u)) return;
    // 80B84AE0: addi    r5, r5, 8828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8828);

label_80B84AE4:
    ctx->pc = 0x80B84AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84AE4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84AE4u)) return;
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
label_80B84AE8:
    ctx->pc = 0x80B84AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AE8u)) return;
    // 80B84AE8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84AEC:
    ctx->pc = 0x80B84AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AECu)) return;
    // 80B84AEC: addi    r5, r5, 8840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8840);

label_80B84AF0:
    ctx->pc = 0x80B84AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84AF0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84AF0u)) return;
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
label_80B84AF4:
    ctx->pc = 0x80B84AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AF4u)) return;
    // 80B84AF4: bl      0x8045C750
    {
            ctx->lr = 0x80B84AF8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84AF8:
    ctx->pc = 0x80B84AF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84AF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84AF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84AFC:
    ctx->pc = 0x80B84AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84AFCu)) return;
    // 80B84AFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84B00:
    ctx->pc = 0x80B84B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B00u)) return;
    // 80B84B00: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80B84B04:
    ctx->pc = 0x80B84B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B04u)) return;
    // 80B84B04: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B84B08:
    ctx->pc = 0x80B84B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B08u)) return;
    // 80B84B08: addi    r6, r6, -2543
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2543);

label_80B84B0C:
    ctx->pc = 0x80B84B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B0Cu)) return;
    // 80B84B0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84B10:
    ctx->pc = 0x80B84B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B10u)) return;
    // 80B84B10: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84B14u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84B14:
    ctx->pc = 0x80B84B14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84B14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84B14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84B18:
    ctx->pc = 0x80B84B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B18u)) return;
    // 80B84B18: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80B84B1C:
    ctx->pc = 0x80B84B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B1Cu)) return;
    // 80B84B1C: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84B20:
    ctx->pc = 0x80B84B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B20u)) return;
    // 80B84B20: addi    r5, r5, 8844
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8844);

label_80B84B24:
    ctx->pc = 0x80B84B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84B24: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84B24u)) return;
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
label_80B84B28:
    ctx->pc = 0x80B84B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B28u)) return;
    // 80B84B28: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84B2C:
    ctx->pc = 0x80B84B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B2Cu)) return;
    // 80B84B2C: addi    r5, r5, 8828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8828);

label_80B84B30:
    ctx->pc = 0x80B84B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84B30: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84B30u)) return;
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
label_80B84B34:
    ctx->pc = 0x80B84B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B34u)) return;
    // 80B84B34: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84B38:
    ctx->pc = 0x80B84B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B38u)) return;
    // 80B84B38: addi    r5, r5, 8848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8848);

label_80B84B3C:
    ctx->pc = 0x80B84B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84B3C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84B3Cu)) return;
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
label_80B84B40:
    ctx->pc = 0x80B84B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B40u)) return;
    // 80B84B40: bl      0x8045C750
    {
            ctx->lr = 0x80B84B44u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84B44:
    ctx->pc = 0x80B84B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84B44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84B48:
    ctx->pc = 0x80B84B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B48u)) return;
    // 80B84B48: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80B84B4C:
    ctx->pc = 0x80B84B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B4Cu)) return;
    // 80B84B4C: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80B84B50:
    ctx->pc = 0x80B84B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B50u)) return;
    // 80B84B50: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B84B54:
    ctx->pc = 0x80B84B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B54u)) return;
    // 80B84B54: addi    r6, r6, -495
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-495);

label_80B84B58:
    ctx->pc = 0x80B84B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B58u)) return;
    // 80B84B58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84B5C:
    ctx->pc = 0x80B84B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B5Cu)) return;
    // 80B84B5C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84B60u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84B60:
    ctx->pc = 0x80B84B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84B60: li      r3, 745
    ctx->gpr[3] = (u32)(s32)(745);

label_80B84B64:
    ctx->pc = 0x80B84B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B64u)) return;
    // 80B84B64: bl      0x8045BFA0
    {
            ctx->lr = 0x80B84B68u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B84B68:
    ctx->pc = 0x80B84B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84B68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84B6C:
    ctx->pc = 0x80B84B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B6Cu)) return;
    // 80B84B6C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84B70:
    ctx->pc = 0x80B84B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B70u)) return;
    // 80B84B70: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84B74:
    ctx->pc = 0x80B84B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84B74: lwz     r0, 0(r4)
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
label_80B84B78:
    ctx->pc = 0x80B84B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B78u)) return;
    // 80B84B78: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84B7C:
    ctx->pc = 0x80B84B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B7Cu)) return;
    // 80B84B7C: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84B80:
    ctx->pc = 0x80B84B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B80u)) return;
    // 80B84B80: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84B84:
    ctx->pc = 0x80B84B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84B84: lwzx    r4, r4, r0
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
label_80B84B88:
    ctx->pc = 0x80B84B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84B88: lwz     r4, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84B8C:
    ctx->pc = 0x80B84B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B8Cu)) return;
    // 80B84B8C: bl      0x8045F608
    {
            ctx->lr = 0x80B84B90u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84B90:
    ctx->pc = 0x80B84B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84B90: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B84B94:
    ctx->pc = 0x80B84B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B94u)) return;
    // 80B84B94: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84B98u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84B98:
    ctx->pc = 0x80B84B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84B98: li      r3, 746
    ctx->gpr[3] = (u32)(s32)(746);

label_80B84B9C:
    ctx->pc = 0x80B84B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84B9Cu)) return;
    // 80B84B9C: bl      0x8045BFA0
    {
            ctx->lr = 0x80B84BA0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B84BA0:
    ctx->pc = 0x80B84BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84BA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84BA4:
    ctx->pc = 0x80B84BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BA4u)) return;
    // 80B84BA4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B84BA8:
    ctx->pc = 0x80B84BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BA8u)) return;
    // 80B84BA8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B84BAC:
    ctx->pc = 0x80B84BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84BAC: lwz     r0, 0(r4)
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
label_80B84BB0:
    ctx->pc = 0x80B84BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BB0u)) return;
    // 80B84BB0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B84BB4:
    ctx->pc = 0x80B84BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BB4u)) return;
    // 80B84BB4: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84BB8:
    ctx->pc = 0x80B84BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BB8u)) return;
    // 80B84BB8: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B84BBC:
    ctx->pc = 0x80B84BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84BBC: lwzx    r4, r4, r0
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
label_80B84BC0:
    ctx->pc = 0x80B84BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84BC0: lwz     r4, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84BC4:
    ctx->pc = 0x80B84BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BC4u)) return;
    // 80B84BC4: bl      0x8045F608
    {
            ctx->lr = 0x80B84BC8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B84BC8:
    ctx->pc = 0x80B84BC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84BC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84BC8: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B84BCC:
    ctx->pc = 0x80B84BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BCCu)) return;
    // 80B84BCC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84BD0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84BD0:
    ctx->pc = 0x80B84BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B84BD0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84BD4:
    ctx->pc = 0x80B84BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BD4u)) return;
    // 80B84BD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84BD8:
    ctx->pc = 0x80B84BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BD8u)) return;
    // 80B84BD8: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84BDC:
    ctx->pc = 0x80B84BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BDCu)) return;
    // 80B84BDC: addi    r5, r5, 8852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8852);

label_80B84BE0:
    ctx->pc = 0x80B84BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84BE0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84BE0u)) return;
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
label_80B84BE4:
    ctx->pc = 0x80B84BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BE4u)) return;
    // 80B84BE4: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84BE8:
    ctx->pc = 0x80B84BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BE8u)) return;
    // 80B84BE8: addi    r5, r5, 8856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8856);

label_80B84BEC:
    ctx->pc = 0x80B84BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84BEC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84BECu)) return;
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
label_80B84BF0:
    ctx->pc = 0x80B84BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BF0u)) return;
    // 80B84BF0: lis     r5, -27540
    ctx->gpr[5] = ((u32)(s32)(-27540) << 16);

label_80B84BF4:
    ctx->pc = 0x80B84BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BF4u)) return;
    // 80B84BF4: addi    r5, r5, 8860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8860);

label_80B84BF8:
    ctx->pc = 0x80B84BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84BF8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B84BF8u)) return;
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
label_80B84BFC:
    ctx->pc = 0x80B84BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84BFCu)) return;
    // 80B84BFC: bl      0x8045C750
    {
            ctx->lr = 0x80B84C00u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B84C00:
    ctx->pc = 0x80B84C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B84C00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84C04:
    ctx->pc = 0x80B84C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C04u)) return;
    // 80B84C04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B84C08:
    ctx->pc = 0x80B84C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C08u)) return;
    // 80B84C08: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_80B84C0C:
    ctx->pc = 0x80B84C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C0Cu)) return;
    // 80B84C0C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B84C10:
    ctx->pc = 0x80B84C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C10u)) return;
    // 80B84C10: addi    r6, r6, -4591
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4591);

label_80B84C14:
    ctx->pc = 0x80B84C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C14u)) return;
    // 80B84C14: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B84C18:
    ctx->pc = 0x80B84C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C18u)) return;
    // 80B84C18: bl      0x8045C7B4
    {
            ctx->lr = 0x80B84C1Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B84C1C:
    ctx->pc = 0x80B84C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84C1C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84C20:
    ctx->pc = 0x80B84C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C20u)) return;
    // 80B84C20: bl      0x8045F220
    {
            ctx->lr = 0x80B84C24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84C24:
    ctx->pc = 0x80B84C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84C24: bl      0x8045C034
    {
            ctx->lr = 0x80B84C28u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84C28:
    ctx->pc = 0x80B84C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84C28: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84C2C:
    ctx->pc = 0x80B84C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C2Cu)) return;
    // 80B84C2C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84C30:
    ctx->pc = 0x80B84C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84C30: lwz     r0, 0(r3)
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
label_80B84C34:
    ctx->pc = 0x80B84C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C34u)) return;
    // 80B84C34: cmpwi   r0, 0
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

label_80B84C38:
    ctx->pc = 0x80B84C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C38u)) return;
    // 80B84C38: bc    4, 2, 0x80B84C50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84C50;
        }
    }

label_80B84C3C:
    ctx->pc = 0x80B84C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84C3C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84C40:
    ctx->pc = 0x80B84C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C40u)) return;
    // 80B84C40: bl      0x8045F220
    {
            ctx->lr = 0x80B84C44u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84C44:
    ctx->pc = 0x80B84C44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84C44: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84C48:
    ctx->pc = 0x80B84C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C48u)) return;
    // 80B84C48: addi    r4, r4, 12168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12168);

label_80B84C4C:
    ctx->pc = 0x80B84C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C4Cu)) return;
    // 80B84C4C: bl      0x8045C060
    {
            ctx->lr = 0x80B84C50u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B84C50:
    ctx->pc = 0x80B84C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84C50: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84C54:
    ctx->pc = 0x80B84C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C54u)) return;
    // 80B84C54: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84C58:
    ctx->pc = 0x80B84C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84C58: lwz     r0, 0(r3)
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
label_80B84C5C:
    ctx->pc = 0x80B84C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C5Cu)) return;
    // 80B84C5C: cmpwi   r0, 1
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

label_80B84C60:
    ctx->pc = 0x80B84C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C60u)) return;
    // 80B84C60: bc    4, 2, 0x80B84C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84C78;
        }
    }

label_80B84C64:
    ctx->pc = 0x80B84C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84C64: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84C68:
    ctx->pc = 0x80B84C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C68u)) return;
    // 80B84C68: bl      0x8045F220
    {
            ctx->lr = 0x80B84C6Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84C6C:
    ctx->pc = 0x80B84C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84C6C: lis     r4, -27540
    ctx->gpr[4] = ((u32)(s32)(-27540) << 16);

label_80B84C70:
    ctx->pc = 0x80B84C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C70u)) return;
    // 80B84C70: addi    r4, r4, 12176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12176);

label_80B84C74:
    ctx->pc = 0x80B84C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C74u)) return;
    // 80B84C74: bl      0x8045C060
    {
            ctx->lr = 0x80B84C78u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B84C78:
    ctx->pc = 0x80B84C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84C78: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84C7C:
    ctx->pc = 0x80B84C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C7Cu)) return;
    // 80B84C7C: bl      0x8045F220
    {
            ctx->lr = 0x80B84C80u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84C80:
    ctx->pc = 0x80B84C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84C80: bl      0x8045EB8C
    {
            ctx->lr = 0x80B84C84u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B84C84:
    ctx->pc = 0x80B84C84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84C84: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84C88:
    ctx->pc = 0x80B84C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C88u)) return;
    // 80B84C88: bl      0x8045F220
    {
            ctx->lr = 0x80B84C8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84C8C:
    ctx->pc = 0x80B84C8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84C8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B84C8C: lis     r4, -27539
    ctx->gpr[4] = ((u32)(s32)(-27539) << 16);

label_80B84C90:
    ctx->pc = 0x80B84C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C90u)) return;
    // 80B84C90: addi    r4, r4, -27952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27952);

label_80B84C94:
    ctx->pc = 0x80B84C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C94u)) return;
    // 80B84C94: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B84C98:
    ctx->pc = 0x80B84C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C98u)) return;
    // 80B84C98: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B84C9C:
    ctx->pc = 0x80B84C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84C9Cu)) return;
    // 80B84C9C: lis     r6, -27540
    ctx->gpr[6] = ((u32)(s32)(-27540) << 16);

label_80B84CA0:
    ctx->pc = 0x80B84CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CA0u)) return;
    // 80B84CA0: addi    r6, r6, 8864
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8864);

label_80B84CA4:
    ctx->pc = 0x80B84CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B84CA4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B84CA4u)) return;
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
label_80B84CA8:
    ctx->pc = 0x80B84CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CA8u)) return;
    // 80B84CA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B84CAC:
    ctx->pc = 0x80B84CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CACu)) return;
    // 80B84CAC: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_80B84CB0:
    ctx->pc = 0x80B84CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CB0u)) return;
    // 80B84CB0: bl      0x8045EBE4
    {
            ctx->lr = 0x80B84CB4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B84CB4:
    ctx->pc = 0x80B84CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84CB4: li      r3, 35
    ctx->gpr[3] = (u32)(s32)(35);

label_80B84CB8:
    ctx->pc = 0x80B84CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CB8u)) return;
    // 80B84CB8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84CBCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84CBC:
    ctx->pc = 0x80B84CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84CBC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B84CC0:
    ctx->pc = 0x80B84CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CC0u)) return;
    // 80B84CC0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B84CC4:
    ctx->pc = 0x80B84CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84CC4: lwz     r0, 0(r3)
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
label_80B84CC8:
    ctx->pc = 0x80B84CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CC8u)) return;
    // 80B84CC8: cmpwi   r0, 1
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

label_80B84CCC:
    ctx->pc = 0x80B84CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CCCu)) return;
    // 80B84CCC: bc    4, 2, 0x80B84CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B84CDC;
        }
    }

label_80B84CD0:
    ctx->pc = 0x80B84CD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84CD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84CD0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84CD4:
    ctx->pc = 0x80B84CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CD4u)) return;
    // 80B84CD4: bl      0x8045F220
    {
            ctx->lr = 0x80B84CD8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B84CD8:
    ctx->pc = 0x80B84CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84CD8: bl      0x8045C034
    {
            ctx->lr = 0x80B84CDCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B84CDC:
    ctx->pc = 0x80B84CDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84CDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84CDC: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80B84CE0:
    ctx->pc = 0x80B84CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CE0u)) return;
    // 80B84CE0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84CE4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84CE4:
    ctx->pc = 0x80B84CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84CE4: bl      0x8045F32C
    {
            ctx->lr = 0x80B84CE8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B84CE8:
    ctx->pc = 0x80B84CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B84CE8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B84CEC:
    ctx->pc = 0x80B84CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CECu)) return;
    // 80B84CEC: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80B84CF0:
    ctx->pc = 0x80B84CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CF0u)) return;
    // 80B84CF0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B84CF4:
    ctx->pc = 0x80B84CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CF4u)) return;
    // 80B84CF4: bl      0x80B84E58
    {
            ctx->lr = 0x80B84CF8u;
            goto label_80B84E58;
    }

label_80B84CF8:
    ctx->pc = 0x80B84CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B84CF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84CFC:
    ctx->pc = 0x80B84CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84CFCu)) return;
    // 80B84CFC: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80B84D00:
    ctx->pc = 0x80B84D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D00u)) return;
    // 80B84D00: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80B84D04:
    ctx->pc = 0x80B84D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D04u)) return;
    // 80B84D04: bl      0x80B855C8
    {
            ctx->lr = 0x80B84D08u;
            goto label_80B855C8;
    }

label_80B84D08:
    ctx->pc = 0x80B84D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B84D08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84D0C:
    ctx->pc = 0x80B84D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D0Cu)) return;
    // 80B84D0C: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80B84D10:
    ctx->pc = 0x80B84D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D10u)) return;
    // 80B84D10: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80B84D14:
    ctx->pc = 0x80B84D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D14u)) return;
    // 80B84D14: bl      0x80B856A4
    {
            ctx->lr = 0x80B84D18u;
            goto label_80B856A4;
    }

label_80B84D18:
    ctx->pc = 0x80B84D18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84D18: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80B84D1C:
    ctx->pc = 0x80B84D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D1Cu)) return;
    // 80B84D1C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84D20u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84D20:
    ctx->pc = 0x80B84D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84D20: b       0x80B84D48
    {
            goto label_80B84D48;
    }

label_80B84D24:
    ctx->pc = 0x80B84D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84D24: bl      0x80B8551C
    {
            ctx->lr = 0x80B84D28u;
            goto label_80B8551C;
    }

label_80B84D28:
    ctx->pc = 0x80B84D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84D28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B84D2C:
    ctx->pc = 0x80B84D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D2Cu)) return;
    // 80B84D2C: bl      0x8045EC10
    {
            ctx->lr = 0x80B84D30u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B84D30:
    ctx->pc = 0x80B84D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84D30: bl      0x80B8551C
    {
            ctx->lr = 0x80B84D34u;
            goto label_80B8551C;
    }

label_80B84D34:
    ctx->pc = 0x80B84D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B84D34: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84D38:
    ctx->pc = 0x80B84D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D38u)) return;
    // 80B84D38: bl      0x8045ED54
    {
            ctx->lr = 0x80B84D3Cu;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80B84D3C:
    ctx->pc = 0x80B84D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84D3C: bl      0x80B84F64
    {
            ctx->lr = 0x80B84D40u;
            goto label_80B84F64;
    }

label_80B84D40:
    ctx->pc = 0x80B84D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84D40: bl      0x8045DE34
    {
            ctx->lr = 0x80B84D44u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80B84D44:
    ctx->pc = 0x80B84D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84D44: bl      0x80460A80
    {
            ctx->lr = 0x80B84D48u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80B84D48:
    ctx->pc = 0x80B84D48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84D48: lwz     r0, 20(r1)
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
label_80B84D4C:
    ctx->pc = 0x80B84D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B84D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84D4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84D50:
    ctx->pc = 0x80B84D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D50u)) return;
    // 80B84D50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B84D54:
    ctx->pc = 0x80B84D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D54u)) return;
    // 80B84D54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B84D58:
    ctx->pc = 0x80B84D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B84D58: stwu     r1, -48(r1)
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
label_80B84D5C:
    ctx->pc = 0x80B84D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B84D5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84D60:
    ctx->pc = 0x80B84D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B84D60: stw     r0, 52(r1)
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
label_80B84D64:
    ctx->pc = 0x80B84D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B84D64: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84D68:
    ctx->pc = 0x80B84D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84D68: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84D6C:
    ctx->pc = 0x80B84D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D6Cu)) return;
    // 80B84D6C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B84D70:
    ctx->pc = 0x80B84D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D70u)) return;
    // 80B84D70: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B84D74:
    ctx->pc = 0x80B84D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D74u)) return;
    // 80B84D74: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84D78:
    ctx->pc = 0x80B84D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D78u)) return;
    // 80B84D78: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B84D7C:
    ctx->pc = 0x80B84D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D7Cu)) return;
    // 80B84D7C: lis     r5, -32584
    ctx->gpr[5] = ((u32)(s32)(-32584) << 16);

label_80B84D80:
    ctx->pc = 0x80B84D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D80u)) return;
    // 80B84D80: addi    r5, r5, 20392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20392);

label_80B84D84:
    ctx->pc = 0x80B84D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D84u)) return;
    // 80B84D84: bl      0x8050FD60
    {
            ctx->lr = 0x80B84D88u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B84D88:
    ctx->pc = 0x80B84D88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84D88: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B84D8C:
    ctx->pc = 0x80B84D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D8Cu)) return;
    // 80B84D8C: addi    r4, r4, -27040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27040);

label_80B84D90:
    ctx->pc = 0x80B84D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84D90: stw     r3, 0(r4)
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
label_80B84D94:
    ctx->pc = 0x80B84D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D94u)) return;
    // 80B84D94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84D98:
    ctx->pc = 0x80B84D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84D98u)) return;
    // 80B84D98: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84D9Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84D9C:
    ctx->pc = 0x80B84D9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 70u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84D9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 70u : 1u;
    // 80B84D9C: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B84DA0:
    ctx->pc = 0x80B84DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DA0u)) return;
    // 80B84DA0: addi    r4, r3, -27040
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-27040);

label_80B84DA4:
    ctx->pc = 0x80B84DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 80B84DA4: lwz     r3, 0(r4)
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
label_80B84DA8:
    ctx->pc = 0x80B84DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 80B84DA8: lwz     r3, 32(r3)
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
label_80B84DAC:
    ctx->pc = 0x80B84DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 80B84DAC: lwz     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84DB0:
    ctx->pc = 0x80B84DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DB0u)) return;
    // 80B84DB0: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B84DB4:
    ctx->pc = 0x80B84DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DB4u)) return;
    // 80B84DB4: addi    r3, r3, 8872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8872);

label_80B84DB8:
    ctx->pc = 0x80B84DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80B84DB8: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B84DB8u)) return;
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
label_80B84DBC:
    ctx->pc = 0x80B84DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DBCu)) return;
    // 80B84DBC: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B84DC0:
    ctx->pc = 0x80B84DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DC0u)) return;
    // 80B84DC0: addi    r3, r3, 8880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8880);

label_80B84DC4:
    ctx->pc = 0x80B84DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80B84DC4: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B84DC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84DC8:
    ctx->pc = 0x80B84DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DC8u)) return;
    // 80B84DC8: xoris   r0, r30, 0x8000
    ctx->gpr[0] = ctx->gpr[30] ^ (0x8000u << 16);

label_80B84DCC:
    ctx->pc = 0x80B84DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80B84DCC: stw     r0, 12(r1)
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
label_80B84DD0:
    ctx->pc = 0x80B84DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DD0u)) return;
    // 80B84DD0: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80B84DD4:
    ctx->pc = 0x80B84DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80B84DD4: stw     r3, 8(r1)
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
label_80B84DD8:
    ctx->pc = 0x80B84DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80B84DD8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B84DD8u)) return;
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
label_80B84DDC:
    ctx->pc = 0x80B84DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DDCu)) return;
    // 80B84DDC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B84DDCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80B84DE0:
    ctx->pc = 0x80B84DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80B84DE0u)) return;
    // 80B84DE0: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80B84DE0u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80B84DE4:
    ctx->pc = 0x80B84DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DE4u)) return;
    // 80B84DE4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B84DE4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B84DE8:
    ctx->pc = 0x80B84DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80B84DE8: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B84DE8u)) return;
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
label_80B84DEC:
    ctx->pc = 0x80B84DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80B84DEC: lwz     r0, 20(r1)
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
label_80B84DF0:
    ctx->pc = 0x80B84DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80B84DF0: stb     r0, 0(r5)
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
label_80B84DF4:
    ctx->pc = 0x80B84DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DF4u)) return;
    // 80B84DF4: xoris   r0, r31, 0x8000
    ctx->gpr[0] = ctx->gpr[31] ^ (0x8000u << 16);

label_80B84DF8:
    ctx->pc = 0x80B84DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80B84DF8: stw     r0, 28(r1)
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
label_80B84DFC:
    ctx->pc = 0x80B84DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80B84DFC: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E00:
    ctx->pc = 0x80B84E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80B84E00: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B84E00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E04:
    ctx->pc = 0x80B84E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E04u)) return;
    // 80B84E04: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B84E04u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80B84E08:
    ctx->pc = 0x80B84E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80B84E08u)) return;
    // 80B84E08: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80B84E08u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80B84E0C:
    ctx->pc = 0x80B84E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E0Cu)) return;
    // 80B84E0C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B84E0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B84E10:
    ctx->pc = 0x80B84E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B84E10: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B84E10u)) return;
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
label_80B84E14:
    ctx->pc = 0x80B84E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84E14: lwz     r0, 36(r1)
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
label_80B84E18:
    ctx->pc = 0x80B84E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84E18: stb     r0, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E1C:
    ctx->pc = 0x80B84E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E1Cu)) return;
    // 80B84E1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B84E20:
    ctx->pc = 0x80B84E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84E20: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E24:
    ctx->pc = 0x80B84E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B84E24: stw     r0, 8(r5)
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
label_80B84E28:
    ctx->pc = 0x80B84E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84E28: lwz     r3, 0(r4)
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
label_80B84E2C:
    ctx->pc = 0x80B84E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E2Cu)) return;
    // 80B84E2C: cmplwi  r3, 0x0000
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

label_80B84E30:
    ctx->pc = 0x80B84E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E30u)) return;
    // 80B84E30: bc    12, 2, 0x80B84E40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B84E40;
        }
    }

label_80B84E34:
    ctx->pc = 0x80B84E34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84E34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84E34: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80B84E38:
    ctx->pc = 0x80B84E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84E38: lwz     r3, 32(r3)
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
label_80B84E3C:
    ctx->pc = 0x80B84E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B84E3C: stb     r0, 0(r3)
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
label_80B84E40:
    ctx->pc = 0x80B84E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84E40: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E44:
    ctx->pc = 0x80B84E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B84E44: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E48:
    ctx->pc = 0x80B84E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84E48: lwz     r0, 52(r1)
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
label_80B84E4C:
    ctx->pc = 0x80B84E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B84E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84E4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E50:
    ctx->pc = 0x80B84E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E50u)) return;
    // 80B84E50: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80B84E54:
    ctx->pc = 0x80B84E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E54u)) return;
    // 80B84E54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B84E58:
    ctx->pc = 0x80B84E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B84E58: stwu     r1, -64(r1)
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
label_80B84E5C:
    ctx->pc = 0x80B84E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B84E5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E60:
    ctx->pc = 0x80B84E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B84E60: stw     r0, 68(r1)
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
label_80B84E64:
    ctx->pc = 0x80B84E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B84E64: stw     r31, 60(r1)
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
label_80B84E68:
    ctx->pc = 0x80B84E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B84E68: stw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E6C:
    ctx->pc = 0x80B84E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B84E6C: stw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84E70:
    ctx->pc = 0x80B84E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E70u)) return;
    // 80B84E70: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B84E74:
    ctx->pc = 0x80B84E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E74u)) return;
    // 80B84E74: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B84E78:
    ctx->pc = 0x80B84E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E78u)) return;
    // 80B84E78: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B84E7C:
    ctx->pc = 0x80B84E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E7Cu)) return;
    // 80B84E7C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B84E80:
    ctx->pc = 0x80B84E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E80u)) return;
    // 80B84E80: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B84E84:
    ctx->pc = 0x80B84E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E84u)) return;
    // 80B84E84: lis     r5, -32584
    ctx->gpr[5] = ((u32)(s32)(-32584) << 16);

label_80B84E88:
    ctx->pc = 0x80B84E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E88u)) return;
    // 80B84E88: addi    r5, r5, 20392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20392);

label_80B84E8C:
    ctx->pc = 0x80B84E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E8Cu)) return;
    // 80B84E8C: bl      0x8050FD60
    {
            ctx->lr = 0x80B84E90u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B84E90:
    ctx->pc = 0x80B84E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B84E90: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B84E94:
    ctx->pc = 0x80B84E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E94u)) return;
    // 80B84E94: addi    r4, r4, -27040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27040);

label_80B84E98:
    ctx->pc = 0x80B84E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84E98: stw     r3, 0(r4)
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
label_80B84E9C:
    ctx->pc = 0x80B84E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84E9Cu)) return;
    // 80B84E9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B84EA0:
    ctx->pc = 0x80B84EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EA0u)) return;
    // 80B84EA0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B84EA4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B84EA4:
    ctx->pc = 0x80B84EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 70u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 70u : 1u;
    // 80B84EA4: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B84EA8:
    ctx->pc = 0x80B84EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EA8u)) return;
    // 80B84EA8: addi    r4, r3, -27040
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-27040);

label_80B84EAC:
    ctx->pc = 0x80B84EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 80B84EAC: lwz     r3, 0(r4)
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
label_80B84EB0:
    ctx->pc = 0x80B84EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 80B84EB0: lwz     r3, 32(r3)
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
label_80B84EB4:
    ctx->pc = 0x80B84EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 80B84EB4: lwz     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84EB8:
    ctx->pc = 0x80B84EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EB8u)) return;
    // 80B84EB8: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B84EBC:
    ctx->pc = 0x80B84EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EBCu)) return;
    // 80B84EBC: addi    r3, r3, 8872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8872);

label_80B84EC0:
    ctx->pc = 0x80B84EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80B84EC0: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B84EC0u)) return;
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
label_80B84EC4:
    ctx->pc = 0x80B84EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EC4u)) return;
    // 80B84EC4: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B84EC8:
    ctx->pc = 0x80B84EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EC8u)) return;
    // 80B84EC8: addi    r3, r3, 8880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8880);

label_80B84ECC:
    ctx->pc = 0x80B84ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80B84ECC: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B84ECCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84ED0:
    ctx->pc = 0x80B84ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84ED0u)) return;
    // 80B84ED0: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_80B84ED4:
    ctx->pc = 0x80B84ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80B84ED4: stw     r0, 12(r1)
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
label_80B84ED8:
    ctx->pc = 0x80B84ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84ED8u)) return;
    // 80B84ED8: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80B84EDC:
    ctx->pc = 0x80B84EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80B84EDC: stw     r3, 8(r1)
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
label_80B84EE0:
    ctx->pc = 0x80B84EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80B84EE0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B84EE0u)) return;
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
label_80B84EE4:
    ctx->pc = 0x80B84EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EE4u)) return;
    // 80B84EE4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B84EE4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80B84EE8:
    ctx->pc = 0x80B84EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80B84EE8u)) return;
    // 80B84EE8: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80B84EE8u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80B84EEC:
    ctx->pc = 0x80B84EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EECu)) return;
    // 80B84EEC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B84EECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B84EF0:
    ctx->pc = 0x80B84EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80B84EF0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B84EF0u)) return;
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
label_80B84EF4:
    ctx->pc = 0x80B84EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80B84EF4: lwz     r0, 20(r1)
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
label_80B84EF8:
    ctx->pc = 0x80B84EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80B84EF8: stb     r0, 0(r5)
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
label_80B84EFC:
    ctx->pc = 0x80B84EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84EFCu)) return;
    // 80B84EFC: xoris   r0, r31, 0x8000
    ctx->gpr[0] = ctx->gpr[31] ^ (0x8000u << 16);

label_80B84F00:
    ctx->pc = 0x80B84F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80B84F00: stw     r0, 28(r1)
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
label_80B84F04:
    ctx->pc = 0x80B84F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80B84F04: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84F08:
    ctx->pc = 0x80B84F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80B84F08: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B84F08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84F0C:
    ctx->pc = 0x80B84F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F0Cu)) return;
    // 80B84F0C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B84F0Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80B84F10:
    ctx->pc = 0x80B84F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80B84F10u)) return;
    // 80B84F10: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80B84F10u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80B84F14:
    ctx->pc = 0x80B84F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F14u)) return;
    // 80B84F14: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B84F14u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B84F18:
    ctx->pc = 0x80B84F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B84F18: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B84F18u)) return;
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
label_80B84F1C:
    ctx->pc = 0x80B84F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84F1C: lwz     r0, 36(r1)
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
label_80B84F20:
    ctx->pc = 0x80B84F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84F20: stb     r0, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84F24:
    ctx->pc = 0x80B84F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B84F24: stw     r30, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84F28:
    ctx->pc = 0x80B84F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F28u)) return;
    // 80B84F28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B84F2C:
    ctx->pc = 0x80B84F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B84F2C: stw     r0, 8(r5)
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
label_80B84F30:
    ctx->pc = 0x80B84F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84F30: lwz     r3, 0(r4)
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
label_80B84F34:
    ctx->pc = 0x80B84F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F34u)) return;
    // 80B84F34: cmplwi  r3, 0x0000
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

label_80B84F38:
    ctx->pc = 0x80B84F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F38u)) return;
    // 80B84F38: bc    12, 2, 0x80B84F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B84F48;
        }
    }

label_80B84F3C:
    ctx->pc = 0x80B84F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B84F3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80B84F40:
    ctx->pc = 0x80B84F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B84F40: lwz     r3, 32(r3)
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
label_80B84F44:
    ctx->pc = 0x80B84F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B84F44: stb     r0, 0(r3)
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
label_80B84F48:
    ctx->pc = 0x80B84F48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84F48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84F48: lwz     r31, 60(r1)
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
label_80B84F4C:
    ctx->pc = 0x80B84F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84F4C: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84F50:
    ctx->pc = 0x80B84F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B84F50: lwz     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84F54:
    ctx->pc = 0x80B84F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84F54: lwz     r0, 68(r1)
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
label_80B84F58:
    ctx->pc = 0x80B84F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B84F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84F58: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84F5C:
    ctx->pc = 0x80B84F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F5Cu)) return;
    // 80B84F5C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80B84F60:
    ctx->pc = 0x80B84F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F60u)) return;
    // 80B84F60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B84F64:
    ctx->pc = 0x80B84F64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84F64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84F64: stwu     r1, -16(r1)
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
label_80B84F68:
    ctx->pc = 0x80B84F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84F68: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84F6C:
    ctx->pc = 0x80B84F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B84F6C: stw     r0, 20(r1)
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
label_80B84F70:
    ctx->pc = 0x80B84F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F70u)) return;
    // 80B84F70: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B84F74:
    ctx->pc = 0x80B84F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F74u)) return;
    // 80B84F74: addi    r3, r3, -27040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27040);

label_80B84F78:
    ctx->pc = 0x80B84F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84F78: lwz     r3, 0(r3)
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
label_80B84F7C:
    ctx->pc = 0x80B84F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F7Cu)) return;
    // 80B84F7C: cmplwi  r3, 0x0000
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

label_80B84F80:
    ctx->pc = 0x80B84F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F80u)) return;
    // 80B84F80: bc    12, 2, 0x80B84F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B84F98;
        }
    }

label_80B84F84:
    ctx->pc = 0x80B84F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B84F84: bl      0x8050F9E0
    {
            ctx->lr = 0x80B84F88u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B84F88:
    ctx->pc = 0x80B84F88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84F88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B84F88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B84F8C:
    ctx->pc = 0x80B84F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F8Cu)) return;
    // 80B84F8C: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B84F90:
    ctx->pc = 0x80B84F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F90u)) return;
    // 80B84F90: addi    r3, r3, -27040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27040);

label_80B84F94:
    ctx->pc = 0x80B84F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B84F94: stw     r0, 0(r3)
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
label_80B84F98:
    ctx->pc = 0x80B84F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84F98: lwz     r0, 20(r1)
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
label_80B84F9C:
    ctx->pc = 0x80B84F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B84F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84F9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84FA0:
    ctx->pc = 0x80B84FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FA0u)) return;
    // 80B84FA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B84FA4:
    ctx->pc = 0x80B84FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FA4u)) return;
    // 80B84FA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B84FA8:
    ctx->pc = 0x80B84FA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84FA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B84FA8: stwu     r1, -16(r1)
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
label_80B84FAC:
    ctx->pc = 0x80B84FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B84FAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84FB0:
    ctx->pc = 0x80B84FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B84FB0: stw     r0, 20(r1)
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
label_80B84FB4:
    ctx->pc = 0x80B84FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B84FB4: stw     r31, 12(r1)
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
label_80B84FB8:
    ctx->pc = 0x80B84FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B84FB8: stw     r30, 8(r1)
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
label_80B84FBC:
    ctx->pc = 0x80B84FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FBCu)) return;
    // 80B84FBC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B84FC0:
    ctx->pc = 0x80B84FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B84FC0: lwz     r31, 32(r30)
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
label_80B84FC4:
    ctx->pc = 0x80B84FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FC4u)) return;
    // 80B84FC4: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80B84FC8:
    ctx->pc = 0x80B84FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FC8u)) return;
    // 80B84FC8: bl      0x8050EF60
    {
            ctx->lr = 0x80B84FCCu;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80B84FCC:
    ctx->pc = 0x80B84FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B84FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    // 80B84FCC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B84FD0:
    ctx->pc = 0x80B84FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B84FD0: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84FD4:
    ctx->pc = 0x80B84FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B84FD4: stb     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84FD8:
    ctx->pc = 0x80B84FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FD8u)) return;
    // 80B84FD8: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80B84FDC:
    ctx->pc = 0x80B84FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B84FDC: stb     r0, 13(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84FE0:
    ctx->pc = 0x80B84FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B84FE0: stb     r0, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84FE4:
    ctx->pc = 0x80B84FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B84FE4: stb     r0, 15(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84FE8:
    ctx->pc = 0x80B84FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B84FE8: stw     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B84FEC:
    ctx->pc = 0x80B84FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FECu)) return;
    // 80B84FEC: lis     r3, -32584
    ctx->gpr[3] = ((u32)(s32)(-32584) << 16);

label_80B84FF0:
    ctx->pc = 0x80B84FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FF0u)) return;
    // 80B84FF0: addi    r0, r3, 20520
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20520);

label_80B84FF4:
    ctx->pc = 0x80B84FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B84FF4: stw     r0, 16(r30)
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
label_80B84FF8:
    ctx->pc = 0x80B84FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FF8u)) return;
    // 80B84FF8: lis     r3, -32584
    ctx->gpr[3] = ((u32)(s32)(-32584) << 16);

label_80B84FFC:
    ctx->pc = 0x80B84FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B84FFCu)) return;
    // 80B84FFC: addi    r0, r3, 20784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20784);

label_80B85000:
    ctx->pc = 0x80B85000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B85000: stw     r0, 20(r30)
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
label_80B85004:
    ctx->pc = 0x80B85004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85004u)) return;
    // 80B85004: lis     r3, -32584
    ctx->gpr[3] = ((u32)(s32)(-32584) << 16);

label_80B85008:
    ctx->pc = 0x80B85008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85008u)) return;
    // 80B85008: addi    r0, r3, 20936
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20936);

label_80B8500C:
    ctx->pc = 0x80B8500Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8500Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B8500C: stw     r0, 24(r30)
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
label_80B85010:
    ctx->pc = 0x80B85010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85010: lwz     r31, 12(r1)
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
label_80B85014:
    ctx->pc = 0x80B85014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85014: lwz     r30, 8(r1)
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
label_80B85018:
    ctx->pc = 0x80B85018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85018: lwz     r0, 20(r1)
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
label_80B8501C:
    ctx->pc = 0x80B8501Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B8501Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8501C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85020:
    ctx->pc = 0x80B85020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85020u)) return;
    // 80B85020: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B85024:
    ctx->pc = 0x80B85024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85024u)) return;
    // 80B85024: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85028:
    ctx->pc = 0x80B85028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B85028: stwu     r1, -16(r1)
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
label_80B8502C:
    ctx->pc = 0x80B8502Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8502Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B8502C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85030:
    ctx->pc = 0x80B85030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85030: stw     r0, 20(r1)
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
label_80B85034:
    ctx->pc = 0x80B85034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B85034: stw     r31, 12(r1)
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
label_80B85038:
    ctx->pc = 0x80B85038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85038u)) return;
    // 80B85038: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B8503C:
    ctx->pc = 0x80B8503Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8503Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B8503C: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85040:
    ctx->pc = 0x80B85040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85040: lwz     r5, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85044:
    ctx->pc = 0x80B85044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B85044: lbz     r0, 0(r4)
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
label_80B85048:
    ctx->pc = 0x80B85048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85048u)) return;
    // 80B85048: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80B8504C:
    ctx->pc = 0x80B8504Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8504Cu)) return;
    // 80B8504C: cmpwi   r0, 2
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

label_80B85050:
    ctx->pc = 0x80B85050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85050u)) return;
    // 80B85050: bc    12, 2, 0x80B850B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B850B0;
        }
    }

label_80B85054:
    ctx->pc = 0x80B85054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85054: bc    4, 0, 0x80B85068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85068;
        }
    }

label_80B85058:
    ctx->pc = 0x80B85058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B85058: cmpwi   r0, 0
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

label_80B8505C:
    ctx->pc = 0x80B8505Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8505Cu)) return;
    // 80B8505C: bc    12, 2, 0x80B85114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85114;
        }
    }

label_80B85060:
    ctx->pc = 0x80B85060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85060: bc    4, 0, 0x80B85078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85078;
        }
    }

label_80B85064:
    ctx->pc = 0x80B85064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85064: b       0x80B85114
    {
            goto label_80B85114;
    }

label_80B85068:
    ctx->pc = 0x80B85068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B85068: cmpwi   r0, 4
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

label_80B8506C:
    ctx->pc = 0x80B8506Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8506Cu)) return;
    // 80B8506C: bc    12, 2, 0x80B85100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85100;
        }
    }

label_80B85070:
    ctx->pc = 0x80B85070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85070: bc    4, 0, 0x80B85114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85114;
        }
    }

label_80B85074:
    ctx->pc = 0x80B85074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85074: b       0x80B850D4
    {
            goto label_80B850D4;
    }

label_80B85078:
    ctx->pc = 0x80B85078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85078: lbz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8507C:
    ctx->pc = 0x80B8507Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8507Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B8507C: lbz     r0, 0(r5)
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
label_80B85080:
    ctx->pc = 0x80B85080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85080u)) return;
    // 80B85080: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B85084:
    ctx->pc = 0x80B85084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85084: stb     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85088:
    ctx->pc = 0x80B85088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85088: lbz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8508C:
    ctx->pc = 0x80B8508Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8508Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B8508C: lbz     r0, 0(r5)
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
label_80B85090:
    ctx->pc = 0x80B85090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85090u)) return;
    // 80B85090: subfic  r0, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80B85094:
    ctx->pc = 0x80B85094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85094u)) return;
    // 80B85094: cmpw    r3, r0
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

label_80B85098:
    ctx->pc = 0x80B85098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85098u)) return;
    // 80B85098: bc    12, 0, 0x80B85114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85114;
        }
    }

label_80B8509C:
    ctx->pc = 0x80B8509Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8509Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B8509C: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80B850A0:
    ctx->pc = 0x80B850A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B850A0: stb     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850A4:
    ctx->pc = 0x80B850A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850A4u)) return;
    // 80B850A4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80B850A8:
    ctx->pc = 0x80B850A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B850A8: stb     r0, 0(r4)
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
label_80B850AC:
    ctx->pc = 0x80B850ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850ACu)) return;
    // 80B850AC: b       0x80B85114
    {
            goto label_80B85114;
    }

label_80B850B0:
    ctx->pc = 0x80B850B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B850B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B850B0: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850B4:
    ctx->pc = 0x80B850B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850B4u)) return;
    // 80B850B4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80B850B8:
    ctx->pc = 0x80B850B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B850B8: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850BC:
    ctx->pc = 0x80B850BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B850BC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850C0:
    ctx->pc = 0x80B850C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850C0u)) return;
    // 80B850C0: cmpw    r3, r0
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

label_80B850C4:
    ctx->pc = 0x80B850C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850C4u)) return;
    // 80B850C4: bc    4, 1, 0x80B85114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85114;
        }
    }

label_80B850C8:
    ctx->pc = 0x80B850C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B850C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B850C8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80B850CC:
    ctx->pc = 0x80B850CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B850CC: stb     r0, 0(r4)
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
label_80B850D0:
    ctx->pc = 0x80B850D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850D0u)) return;
    // 80B850D0: b       0x80B85114
    {
            goto label_80B85114;
    }

label_80B850D4:
    ctx->pc = 0x80B850D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B850D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B850D4: lbz     r3, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850D8:
    ctx->pc = 0x80B850D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B850D8: lbz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850DC:
    ctx->pc = 0x80B850DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850DCu)) return;
    // 80B850DC: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80B850E0:
    ctx->pc = 0x80B850E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B850E0: stb     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850E4:
    ctx->pc = 0x80B850E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B850E4: lbz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850E8:
    ctx->pc = 0x80B850E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B850E8: lbz     r0, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B850EC:
    ctx->pc = 0x80B850ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850ECu)) return;
    // 80B850EC: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80B850F0:
    ctx->pc = 0x80B850F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850F0u)) return;
    // 80B850F0: bc    12, 1, 0x80B85114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85114;
        }
    }

label_80B850F4:
    ctx->pc = 0x80B850F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B850F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B850F4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80B850F8:
    ctx->pc = 0x80B850F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B850F8: stb     r0, 0(r4)
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
label_80B850FC:
    ctx->pc = 0x80B850FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B850FCu)) return;
    // 80B850FC: b       0x80B85114
    {
            goto label_80B85114;
    }

label_80B85100:
    ctx->pc = 0x80B85100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85100: bl      0x8050F9E0
    {
            ctx->lr = 0x80B85104u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B85104:
    ctx->pc = 0x80B85104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B85104: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B85108:
    ctx->pc = 0x80B85108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85108u)) return;
    // 80B85108: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B8510C:
    ctx->pc = 0x80B8510Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8510Cu)) return;
    // 80B8510C: addi    r3, r3, -27040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27040);

label_80B85110:
    ctx->pc = 0x80B85110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B85110: stw     r0, 0(r3)
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
label_80B85114:
    ctx->pc = 0x80B85114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B85114: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B85118:
    ctx->pc = 0x80B85118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85118u)) return;
    // 80B85118: bl      0x80B85130
    {
            ctx->lr = 0x80B8511Cu;
            goto label_80B85130;
    }

label_80B8511C:
    ctx->pc = 0x80B8511Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8511Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B8511C: lwz     r31, 12(r1)
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
label_80B85120:
    ctx->pc = 0x80B85120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85120: lwz     r0, 20(r1)
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
label_80B85124:
    ctx->pc = 0x80B85124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85124: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85128:
    ctx->pc = 0x80B85128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85128u)) return;
    // 80B85128: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B8512C:
    ctx->pc = 0x80B8512Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8512Cu)) return;
    // 80B8512C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85130:
    ctx->pc = 0x80B85130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B85130: stwu     r1, -16(r1)
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
label_80B85134:
    ctx->pc = 0x80B85134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85134: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85138:
    ctx->pc = 0x80B85138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B85138: stw     r0, 20(r1)
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
label_80B8513C:
    ctx->pc = 0x80B8513Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8513Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B8513C: lwz     r3, 32(r3)
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
label_80B85140:
    ctx->pc = 0x80B85140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85140: lwz     r4, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85144:
    ctx->pc = 0x80B85144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85144u)) return;
    // 80B85144: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B85148:
    ctx->pc = 0x80B85148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85148u)) return;
    // 80B85148: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80B8514C:
    ctx->pc = 0x80B8514Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8514Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8514C: lwz     r0, 0(r3)
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
label_80B85150:
    ctx->pc = 0x80B85150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85150u)) return;
    // 80B85150: cmpwi   r0, 0
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

label_80B85154:
    ctx->pc = 0x80B85154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85154u)) return;
    // 80B85154: bc    4, 2, 0x80B85194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85194;
        }
    }

label_80B85158:
    ctx->pc = 0x80B85158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80B85158: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B8515C:
    ctx->pc = 0x80B8515Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8515Cu)) return;
    // 80B8515C: addi    r3, r3, 8888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8888);

label_80B85160:
    ctx->pc = 0x80B85160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B85160: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B85160u)) return;
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
label_80B85164:
    ctx->pc = 0x80B85164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85164u)) return;
    // 80B85164: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80B85164u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80B85168:
    ctx->pc = 0x80B85168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85168u)) return;
    // 80B85168: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B8516C:
    ctx->pc = 0x80B8516Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8516Cu)) return;
    // 80B8516C: addi    r3, r3, 8892
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8892);

label_80B85170:
    ctx->pc = 0x80B85170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85170: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B85170u)) return;
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
label_80B85174:
    ctx->pc = 0x80B85174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85174u)) return;
    // 80B85174: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B85178:
    ctx->pc = 0x80B85178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85178u)) return;
    // 80B85178: addi    r3, r3, 8896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8896);

label_80B8517C:
    ctx->pc = 0x80B8517Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8517Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B8517C: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B8517Cu)) return;
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
label_80B85180:
    ctx->pc = 0x80B85180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85180u)) return;
    // 80B85180: lis     r3, -27540
    ctx->gpr[3] = ((u32)(s32)(-27540) << 16);

label_80B85184:
    ctx->pc = 0x80B85184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85184u)) return;
    // 80B85184: addi    r3, r3, 8900
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8900);

label_80B85188:
    ctx->pc = 0x80B85188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85188: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B85188u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80B8518C:
    ctx->pc = 0x80B8518Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8518Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B8518C: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85190:
    ctx->pc = 0x80B85190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85190u)) return;
    // 80B85190: bl      0x80B851A4
    {
            ctx->lr = 0x80B85194u;
            goto label_80B851A4;
    }

label_80B85194:
    ctx->pc = 0x80B85194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85194: lwz     r0, 20(r1)
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
label_80B85198:
    ctx->pc = 0x80B85198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85198: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8519C:
    ctx->pc = 0x80B8519Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8519Cu)) return;
    // 80B8519C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B851A0:
    ctx->pc = 0x80B851A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851A0u)) return;
    // 80B851A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B851A4:
    ctx->pc = 0x80B851A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B851A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B851A4: stwu     r1, -16(r1)
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
label_80B851A8:
    ctx->pc = 0x80B851A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B851A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B851AC:
    ctx->pc = 0x80B851ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B851AC: stw     r0, 20(r1)
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
label_80B851B0:
    ctx->pc = 0x80B851B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851B0u)) return;
    // 80B851B0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B851B4:
    ctx->pc = 0x80B851B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851B4u)) return;
    // 80B851B4: bl      0x80607948
    {
            ctx->lr = 0x80B851B8u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80B851B8:
    ctx->pc = 0x80B851B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B851B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B851B8: lwz     r0, 20(r1)
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
label_80B851BC:
    ctx->pc = 0x80B851BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B851BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B851BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B851C0:
    ctx->pc = 0x80B851C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851C0u)) return;
    // 80B851C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B851C4:
    ctx->pc = 0x80B851C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851C4u)) return;
    // 80B851C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B851C8:
    ctx->pc = 0x80B851C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B851C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B851C8: stwu     r1, -16(r1)
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
label_80B851CC:
    ctx->pc = 0x80B851CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B851CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B851D0:
    ctx->pc = 0x80B851D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B851D0: stw     r0, 20(r1)
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
label_80B851D4:
    ctx->pc = 0x80B851D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B851D4: lwz     r3, 32(r3)
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
label_80B851D8:
    ctx->pc = 0x80B851D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B851D8: lwz     r3, 16(r3)
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
label_80B851DC:
    ctx->pc = 0x80B851DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851DCu)) return;
    // 80B851DC: bl      0x8050ED40
    {
            ctx->lr = 0x80B851E0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80B851E0:
    ctx->pc = 0x80B851E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B851E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B851E0: lwz     r0, 20(r1)
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
label_80B851E4:
    ctx->pc = 0x80B851E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B851E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B851E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B851E8:
    ctx->pc = 0x80B851E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851E8u)) return;
    // 80B851E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B851EC:
    ctx->pc = 0x80B851ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851ECu)) return;
    // 80B851EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B851F0:
    ctx->pc = 0x80B851F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B851F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B851F0: stwu     r1, -16(r1)
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
label_80B851F4:
    ctx->pc = 0x80B851F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B851F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B851F8:
    ctx->pc = 0x80B851F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B851F8: stw     r0, 20(r1)
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
label_80B851FC:
    ctx->pc = 0x80B851FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B851FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B851FC: lwz     r3, 32(r3)
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
label_80B85200:
    ctx->pc = 0x80B85200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B85200: lwz     r3, 16(r3)
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
label_80B85204:
    ctx->pc = 0x80B85204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85204u)) return;
    // 80B85204: bl      0x80509CF0
    {
            ctx->lr = 0x80B85208u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80B85208:
    ctx->pc = 0x80B85208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85208: lwz     r0, 20(r1)
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
label_80B8520C:
    ctx->pc = 0x80B8520Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B8520Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8520C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85210:
    ctx->pc = 0x80B85210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85210u)) return;
    // 80B85210: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B85214:
    ctx->pc = 0x80B85214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85214u)) return;
    // 80B85214: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85218:
    ctx->pc = 0x80B85218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B85218: stwu     r1, -32(r1)
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
label_80B8521C:
    ctx->pc = 0x80B8521Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8521Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B8521C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85220:
    ctx->pc = 0x80B85220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85220: stw     r0, 36(r1)
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
label_80B85224:
    ctx->pc = 0x80B85224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B85224: stw     r31, 28(r1)
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
label_80B85228:
    ctx->pc = 0x80B85228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85228: stw     r30, 24(r1)
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
label_80B8522C:
    ctx->pc = 0x80B8522Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8522Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B8522C: stw     r29, 20(r1)
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
label_80B85230:
    ctx->pc = 0x80B85230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85230: lwz     r31, 32(r3)
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
label_80B85234:
    ctx->pc = 0x80B85234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B85234: lwz     r30, 16(r31)
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
label_80B85238:
    ctx->pc = 0x80B85238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85238: lwz     r5, 28(r31)
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
label_80B8523C:
    ctx->pc = 0x80B8523Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8523Cu)) return;
    // 80B8523C: cmpwi   r5, 0
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

label_80B85240:
    ctx->pc = 0x80B85240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85240u)) return;
    // 80B85240: bc    4, 1, 0x80B85278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85278;
        }
    }

label_80B85244:
    ctx->pc = 0x80B85244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B85244: lwz     r4, 24(r31)
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
label_80B85248:
    ctx->pc = 0x80B85248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85248u)) return;
    // 80B85248: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B8524C:
    ctx->pc = 0x80B8524Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8524Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B8524C: lwz     r0, 20(r31)
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
label_80B85250:
    ctx->pc = 0x80B85250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B85250u)) return;
    // 80B85250: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B85254:
    ctx->pc = 0x80B85254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85254u)) return;
    // 80B85254: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B85258:
    ctx->pc = 0x80B85258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B85258u)) return;
    // 80B85258: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B8525C:
    ctx->pc = 0x80B8525Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8525Cu)) return;
    // 80B8525C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B85260:
    ctx->pc = 0x80B85260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85260u)) return;
    // 80B85260: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B85264:
    ctx->pc = 0x80B85264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85264u)) return;
    // 80B85264: bl      0x80509C74
    {
            ctx->lr = 0x80B85268u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B85268:
    ctx->pc = 0x80B85268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B85268: stw     r29, 20(r31)
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
label_80B8526C:
    ctx->pc = 0x80B8526Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8526Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8526C: lwz     r3, 28(r31)
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
label_80B85270:
    ctx->pc = 0x80B85270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85270u)) return;
    // 80B85270: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B85274:
    ctx->pc = 0x80B85274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B85274: stw     r0, 28(r31)
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
label_80B85278:
    ctx->pc = 0x80B85278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85278: lwz     r5, 40(r31)
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
label_80B8527C:
    ctx->pc = 0x80B8527Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8527Cu)) return;
    // 80B8527C: cmpwi   r5, 0
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

label_80B85280:
    ctx->pc = 0x80B85280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85280u)) return;
    // 80B85280: bc    4, 1, 0x80B852B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B852B8;
        }
    }

label_80B85284:
    ctx->pc = 0x80B85284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B85284: lwz     r4, 36(r31)
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
label_80B85288:
    ctx->pc = 0x80B85288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85288u)) return;
    // 80B85288: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B8528C:
    ctx->pc = 0x80B8528Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8528Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B8528C: lwz     r0, 32(r31)
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
label_80B85290:
    ctx->pc = 0x80B85290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B85290u)) return;
    // 80B85290: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B85294:
    ctx->pc = 0x80B85294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85294u)) return;
    // 80B85294: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B85298:
    ctx->pc = 0x80B85298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B85298u)) return;
    // 80B85298: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B8529C:
    ctx->pc = 0x80B8529Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8529Cu)) return;
    // 80B8529C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B852A0:
    ctx->pc = 0x80B852A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852A0u)) return;
    // 80B852A0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B852A4:
    ctx->pc = 0x80B852A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852A4u)) return;
    // 80B852A4: bl      0x80509BF8
    {
            ctx->lr = 0x80B852A8u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B852A8:
    ctx->pc = 0x80B852A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B852A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B852A8: stw     r29, 32(r31)
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
label_80B852AC:
    ctx->pc = 0x80B852ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B852AC: lwz     r3, 40(r31)
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
label_80B852B0:
    ctx->pc = 0x80B852B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852B0u)) return;
    // 80B852B0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B852B4:
    ctx->pc = 0x80B852B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B852B4: stw     r0, 40(r31)
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
label_80B852B8:
    ctx->pc = 0x80B852B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B852B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B852B8: lwz     r5, 52(r31)
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
label_80B852BC:
    ctx->pc = 0x80B852BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852BCu)) return;
    // 80B852BC: cmpwi   r5, 0
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

label_80B852C0:
    ctx->pc = 0x80B852C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852C0u)) return;
    // 80B852C0: bc    4, 1, 0x80B852F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B852F8;
        }
    }

label_80B852C4:
    ctx->pc = 0x80B852C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B852C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B852C4: lwz     r4, 48(r31)
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
label_80B852C8:
    ctx->pc = 0x80B852C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852C8u)) return;
    // 80B852C8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B852CC:
    ctx->pc = 0x80B852CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B852CC: lwz     r0, 44(r31)
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
label_80B852D0:
    ctx->pc = 0x80B852D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B852D0u)) return;
    // 80B852D0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B852D4:
    ctx->pc = 0x80B852D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852D4u)) return;
    // 80B852D4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B852D8:
    ctx->pc = 0x80B852D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B852D8u)) return;
    // 80B852D8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B852DC:
    ctx->pc = 0x80B852DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852DCu)) return;
    // 80B852DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B852E0:
    ctx->pc = 0x80B852E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852E0u)) return;
    // 80B852E0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B852E4:
    ctx->pc = 0x80B852E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852E4u)) return;
    // 80B852E4: bl      0x80509B94
    {
            ctx->lr = 0x80B852E8u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B852E8:
    ctx->pc = 0x80B852E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B852E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B852E8: stw     r29, 44(r31)
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
label_80B852EC:
    ctx->pc = 0x80B852ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B852EC: lwz     r3, 52(r31)
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
label_80B852F0:
    ctx->pc = 0x80B852F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852F0u)) return;
    // 80B852F0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B852F4:
    ctx->pc = 0x80B852F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B852F4: stw     r0, 52(r31)
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
label_80B852F8:
    ctx->pc = 0x80B852F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B852F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B852F8: lwz     r31, 28(r1)
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
label_80B852FC:
    ctx->pc = 0x80B852FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B852FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B852FC: lwz     r30, 24(r1)
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
label_80B85300:
    ctx->pc = 0x80B85300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85300: lwz     r29, 20(r1)
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
label_80B85304:
    ctx->pc = 0x80B85304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85304: lwz     r0, 36(r1)
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
label_80B85308:
    ctx->pc = 0x80B85308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85308: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8530C:
    ctx->pc = 0x80B8530Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8530Cu)) return;
    // 80B8530C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B85310:
    ctx->pc = 0x80B85310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85310u)) return;
    // 80B85310: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85314:
    ctx->pc = 0x80B85314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B85314: stwu     r1, -32(r1)
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
label_80B85318:
    ctx->pc = 0x80B85318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B85318: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8531C:
    ctx->pc = 0x80B8531Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8531Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B8531C: stw     r0, 36(r1)
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
label_80B85320:
    ctx->pc = 0x80B85320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85320: stw     r31, 28(r1)
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
label_80B85324:
    ctx->pc = 0x80B85324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B85324: stw     r30, 24(r1)
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
label_80B85328:
    ctx->pc = 0x80B85328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85328: stw     r29, 20(r1)
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
label_80B8532C:
    ctx->pc = 0x80B8532Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8532Cu)) return;
    // 80B8532C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B85330:
    ctx->pc = 0x80B85330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85330u)) return;
    // 80B85330: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B85334:
    ctx->pc = 0x80B85334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85334u)) return;
    // 80B85334: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B85338:
    ctx->pc = 0x80B85338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85338u)) return;
    // 80B85338: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B8533C:
    ctx->pc = 0x80B8533Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8533Cu)) return;
    // 80B8533C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B85340:
    ctx->pc = 0x80B85340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85340u)) return;
    // 80B85340: bl      0x8050FD60
    {
            ctx->lr = 0x80B85344u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B85344:
    ctx->pc = 0x80B85344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B85344: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B85348:
    ctx->pc = 0x80B85348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85348u)) return;
    // 80B85348: cmplwi  r31, 0x0000
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

label_80B8534C:
    ctx->pc = 0x80B8534Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8534Cu)) return;
    // 80B8534C: bc    12, 2, 0x80B853B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B853B0;
        }
    }

label_80B85350:
    ctx->pc = 0x80B85350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B85350: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B85354:
    ctx->pc = 0x80B85354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85354u)) return;
    // 80B85354: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B85358:
    ctx->pc = 0x80B85358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85358u)) return;
    // 80B85358: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B8535C:
    ctx->pc = 0x80B8535Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8535Cu)) return;
    // 80B8535C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B85360:
    ctx->pc = 0x80B85360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85360u)) return;
    // 80B85360: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B85364:
    ctx->pc = 0x80B85364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85364u)) return;
    // 80B85364: bl      0x8050A0D4
    {
            ctx->lr = 0x80B85368u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B85368:
    ctx->pc = 0x80B85368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B85368: lis     r3, -32584
    ctx->gpr[3] = ((u32)(s32)(-32584) << 16);

label_80B8536C:
    ctx->pc = 0x80B8536Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8536Cu)) return;
    // 80B8536C: addi    r0, r3, 21016
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(21016);

label_80B85370:
    ctx->pc = 0x80B85370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B85370: stw     r0, 16(r31)
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
label_80B85374:
    ctx->pc = 0x80B85374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85374u)) return;
    // 80B85374: lis     r3, -32584
    ctx->gpr[3] = ((u32)(s32)(-32584) << 16);

label_80B85378:
    ctx->pc = 0x80B85378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85378u)) return;
    // 80B85378: addi    r0, r3, 20976
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20976);

label_80B8537C:
    ctx->pc = 0x80B8537Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8537Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B8537C: stw     r0, 24(r31)
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
label_80B85380:
    ctx->pc = 0x80B85380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B85380: lwz     r3, 32(r31)
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
label_80B85384:
    ctx->pc = 0x80B85384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B85384: stw     r31, 16(r3)
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
label_80B85388:
    ctx->pc = 0x80B85388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85388u)) return;
    // 80B85388: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B8538C:
    ctx->pc = 0x80B8538Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8538Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B8538C: stw     r0, 20(r3)
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
label_80B85390:
    ctx->pc = 0x80B85390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B85390: stw     r0, 24(r3)
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
label_80B85394:
    ctx->pc = 0x80B85394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85394: stw     r0, 28(r3)
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
label_80B85398:
    ctx->pc = 0x80B85398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85398: stw     r0, 32(r3)
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
label_80B8539C:
    ctx->pc = 0x80B8539Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8539Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B8539C: stw     r0, 36(r3)
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
label_80B853A0:
    ctx->pc = 0x80B853A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B853A0: stw     r0, 40(r3)
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
label_80B853A4:
    ctx->pc = 0x80B853A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B853A4: stw     r0, 44(r3)
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
label_80B853A8:
    ctx->pc = 0x80B853A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B853A8: stw     r0, 48(r3)
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
label_80B853AC:
    ctx->pc = 0x80B853ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B853AC: stw     r0, 52(r3)
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
label_80B853B0:
    ctx->pc = 0x80B853B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B853B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B853B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B853B4:
    ctx->pc = 0x80B853B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B853B4: lwz     r31, 28(r1)
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
label_80B853B8:
    ctx->pc = 0x80B853B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B853B8: lwz     r30, 24(r1)
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
label_80B853BC:
    ctx->pc = 0x80B853BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B853BC: lwz     r29, 20(r1)
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
label_80B853C0:
    ctx->pc = 0x80B853C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B853C0: lwz     r0, 36(r1)
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
label_80B853C4:
    ctx->pc = 0x80B853C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B853C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B853C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B853C8:
    ctx->pc = 0x80B853C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853C8u)) return;
    // 80B853C8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B853CC:
    ctx->pc = 0x80B853CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853CCu)) return;
    // 80B853CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B853D0:
    ctx->pc = 0x80B853D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B853D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B853D0: stwu     r1, -16(r1)
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
label_80B853D4:
    ctx->pc = 0x80B853D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B853D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B853D8:
    ctx->pc = 0x80B853D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B853D8: stw     r0, 20(r1)
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
label_80B853DC:
    ctx->pc = 0x80B853DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B853DC: stw     r31, 12(r1)
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
label_80B853E0:
    ctx->pc = 0x80B853E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B853E0: stw     r30, 8(r1)
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
label_80B853E4:
    ctx->pc = 0x80B853E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853E4u)) return;
    // 80B853E4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B853E8:
    ctx->pc = 0x80B853E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B853E8: lwz     r31, 32(r3)
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
label_80B853EC:
    ctx->pc = 0x80B853ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B853EC: stw     r30, 24(r31)
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
label_80B853F0:
    ctx->pc = 0x80B853F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B853F0: stw     r5, 28(r31)
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
label_80B853F4:
    ctx->pc = 0x80B853F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853F4u)) return;
    // 80B853F4: cmpwi   r5, 0
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

label_80B853F8:
    ctx->pc = 0x80B853F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B853F8u)) return;
    // 80B853F8: bc    12, 1, 0x80B85408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85408;
        }
    }

label_80B853FC:
    ctx->pc = 0x80B853FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B853FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B853FC: lwz     r3, 16(r31)
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
label_80B85400:
    ctx->pc = 0x80B85400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85400u)) return;
    // 80B85400: bl      0x80509C74
    {
            ctx->lr = 0x80B85404u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B85404:
    ctx->pc = 0x80B85404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B85404: stw     r30, 20(r31)
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
label_80B85408:
    ctx->pc = 0x80B85408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85408: lwz     r31, 12(r1)
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
label_80B8540C:
    ctx->pc = 0x80B8540Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8540Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B8540C: lwz     r30, 8(r1)
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
label_80B85410:
    ctx->pc = 0x80B85410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85410: lwz     r0, 20(r1)
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
label_80B85414:
    ctx->pc = 0x80B85414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85414: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85418:
    ctx->pc = 0x80B85418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85418u)) return;
    // 80B85418: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B8541C:
    ctx->pc = 0x80B8541Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8541Cu)) return;
    // 80B8541C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85420:
    ctx->pc = 0x80B85420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B85420: stwu     r1, -16(r1)
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
label_80B85424:
    ctx->pc = 0x80B85424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B85424: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85428:
    ctx->pc = 0x80B85428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85428: stw     r0, 20(r1)
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
label_80B8542C:
    ctx->pc = 0x80B8542Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8542Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B8542C: stw     r31, 12(r1)
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
label_80B85430:
    ctx->pc = 0x80B85430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85430: stw     r30, 8(r1)
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
label_80B85434:
    ctx->pc = 0x80B85434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85434u)) return;
    // 80B85434: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B85438:
    ctx->pc = 0x80B85438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85438: lwz     r31, 32(r3)
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
label_80B8543C:
    ctx->pc = 0x80B8543Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8543Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B8543C: stw     r30, 36(r31)
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
label_80B85440:
    ctx->pc = 0x80B85440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85440: stw     r5, 40(r31)
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
label_80B85444:
    ctx->pc = 0x80B85444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85444u)) return;
    // 80B85444: cmpwi   r5, 0
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

label_80B85448:
    ctx->pc = 0x80B85448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85448u)) return;
    // 80B85448: bc    12, 1, 0x80B85458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85458;
        }
    }

label_80B8544C:
    ctx->pc = 0x80B8544Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8544Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B8544C: lwz     r3, 16(r31)
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
label_80B85450:
    ctx->pc = 0x80B85450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85450u)) return;
    // 80B85450: bl      0x80509BF8
    {
            ctx->lr = 0x80B85454u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B85454:
    ctx->pc = 0x80B85454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B85454: stw     r30, 32(r31)
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
label_80B85458:
    ctx->pc = 0x80B85458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85458: lwz     r31, 12(r1)
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
label_80B8545C:
    ctx->pc = 0x80B8545Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8545Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B8545C: lwz     r30, 8(r1)
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
label_80B85460:
    ctx->pc = 0x80B85460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85460: lwz     r0, 20(r1)
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
label_80B85464:
    ctx->pc = 0x80B85464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85464: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85468:
    ctx->pc = 0x80B85468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85468u)) return;
    // 80B85468: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B8546C:
    ctx->pc = 0x80B8546Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8546Cu)) return;
    // 80B8546C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85470:
    ctx->pc = 0x80B85470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B85470: stwu     r1, -16(r1)
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
label_80B85474:
    ctx->pc = 0x80B85474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B85474: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85478:
    ctx->pc = 0x80B85478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85478: stw     r0, 20(r1)
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
label_80B8547C:
    ctx->pc = 0x80B8547Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8547Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B8547C: stw     r31, 12(r1)
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
label_80B85480:
    ctx->pc = 0x80B85480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85480: stw     r30, 8(r1)
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
label_80B85484:
    ctx->pc = 0x80B85484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85484u)) return;
    // 80B85484: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B85488:
    ctx->pc = 0x80B85488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85488: lwz     r31, 32(r3)
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
label_80B8548C:
    ctx->pc = 0x80B8548Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8548Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B8548C: stw     r30, 48(r31)
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
label_80B85490:
    ctx->pc = 0x80B85490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85490: stw     r5, 52(r31)
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
label_80B85494:
    ctx->pc = 0x80B85494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85494u)) return;
    // 80B85494: cmpwi   r5, 0
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

label_80B85498:
    ctx->pc = 0x80B85498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85498u)) return;
    // 80B85498: bc    12, 1, 0x80B854A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B854A8;
        }
    }

label_80B8549C:
    ctx->pc = 0x80B8549Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8549Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B8549C: lwz     r3, 16(r31)
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
label_80B854A0:
    ctx->pc = 0x80B854A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854A0u)) return;
    // 80B854A0: bl      0x80509B94
    {
            ctx->lr = 0x80B854A4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B854A4:
    ctx->pc = 0x80B854A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B854A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B854A4: stw     r30, 44(r31)
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
label_80B854A8:
    ctx->pc = 0x80B854A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B854A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B854A8: lwz     r31, 12(r1)
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
label_80B854AC:
    ctx->pc = 0x80B854ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B854AC: lwz     r30, 8(r1)
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
label_80B854B0:
    ctx->pc = 0x80B854B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B854B0: lwz     r0, 20(r1)
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
label_80B854B4:
    ctx->pc = 0x80B854B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B854B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B854B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B854B8:
    ctx->pc = 0x80B854B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854B8u)) return;
    // 80B854B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B854BC:
    ctx->pc = 0x80B854BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854BCu)) return;
    // 80B854BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B854C0:
    ctx->pc = 0x80B854C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B854C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B854C0: stwu     r1, -16(r1)
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
label_80B854C4:
    ctx->pc = 0x80B854C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B854C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B854C8:
    ctx->pc = 0x80B854C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B854C8: stw     r0, 20(r1)
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
label_80B854CC:
    ctx->pc = 0x80B854CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B854CC: stw     r31, 12(r1)
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
label_80B854D0:
    ctx->pc = 0x80B854D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854D0u)) return;
    // 80B854D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B854D4:
    ctx->pc = 0x80B854D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854D4u)) return;
    // 80B854D4: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B854D8:
    ctx->pc = 0x80B854D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854D8u)) return;
    // 80B854D8: addi    r4, r4, -27028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27028);

label_80B854DC:
    ctx->pc = 0x80B854DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B854DC: lwz     r0, 0(r4)
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
label_80B854E0:
    ctx->pc = 0x80B854E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854E0u)) return;
    // 80B854E0: cmplwi  r0, 0x0000
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

label_80B854E4:
    ctx->pc = 0x80B854E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854E4u)) return;
    // 80B854E4: bc    4, 2, 0x80B85508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85508;
        }
    }

label_80B854E8:
    ctx->pc = 0x80B854E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B854E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B854E8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B854EC:
    ctx->pc = 0x80B854ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854ECu)) return;
    // 80B854EC: bl      0x8050EEC0
    {
            ctx->lr = 0x80B854F0u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80B854F0:
    ctx->pc = 0x80B854F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B854F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B854F0: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B854F4:
    ctx->pc = 0x80B854F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854F4u)) return;
    // 80B854F4: addi    r4, r4, -27028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27028);

label_80B854F8:
    ctx->pc = 0x80B854F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B854F8: stw     r3, 0(r4)
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
label_80B854FC:
    ctx->pc = 0x80B854FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B854FCu)) return;
    // 80B854FC: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B85500:
    ctx->pc = 0x80B85500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85500u)) return;
    // 80B85500: addi    r3, r3, -27032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27032);

label_80B85504:
    ctx->pc = 0x80B85504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B85504: stw     r31, 0(r3)
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
label_80B85508:
    ctx->pc = 0x80B85508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85508: lwz     r31, 12(r1)
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
label_80B8550C:
    ctx->pc = 0x80B8550Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8550Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B8550C: lwz     r0, 20(r1)
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
label_80B85510:
    ctx->pc = 0x80B85510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85510: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85514:
    ctx->pc = 0x80B85514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85514u)) return;
    // 80B85514: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B85518:
    ctx->pc = 0x80B85518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85518u)) return;
    // 80B85518: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B8551C:
    ctx->pc = 0x80B8551Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8551Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B8551C: stwu     r1, -32(r1)
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
label_80B85520:
    ctx->pc = 0x80B85520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B85520: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85524:
    ctx->pc = 0x80B85524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B85524: stw     r0, 36(r1)
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
label_80B85528:
    ctx->pc = 0x80B85528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85528: stw     r31, 28(r1)
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
label_80B8552C:
    ctx->pc = 0x80B8552Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8552Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B8552C: stw     r30, 24(r1)
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
label_80B85530:
    ctx->pc = 0x80B85530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85530: stw     r29, 20(r1)
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
label_80B85534:
    ctx->pc = 0x80B85534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85534: stw     r28, 16(r1)
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
label_80B85538:
    ctx->pc = 0x80B85538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85538u)) return;
    // 80B85538: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B8553C:
    ctx->pc = 0x80B8553Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8553Cu)) return;
    // 80B8553C: addi    r30, r3, -27028
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-27028);

label_80B85540:
    ctx->pc = 0x80B85540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85540: lwz     r0, 0(r30)
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
label_80B85544:
    ctx->pc = 0x80B85544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85544u)) return;
    // 80B85544: cmplwi  r0, 0x0000
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

label_80B85548:
    ctx->pc = 0x80B85548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85548u)) return;
    // 80B85548: bc    12, 2, 0x80B855A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B855A8;
        }
    }

label_80B8554C:
    ctx->pc = 0x80B8554Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8554Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B8554C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80B85550:
    ctx->pc = 0x80B85550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85550u)) return;
    // 80B85550: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80B85554:
    ctx->pc = 0x80B85554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85554u)) return;
    // 80B85554: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B85558:
    ctx->pc = 0x80B85558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85558u)) return;
    // 80B85558: addi    r31, r3, -27032
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-27032);

label_80B8555C:
    ctx->pc = 0x80B8555Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8555Cu)) return;
    // 80B8555C: b       0x80B8557C
    {
            goto label_80B8557C;
    }

label_80B85560:
    ctx->pc = 0x80B85560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B85560: lwz     r3, 0(r30)
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
label_80B85564:
    ctx->pc = 0x80B85564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85564: lwzx    r3, r3, r29
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
label_80B85568:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85568u)) return;
    // 80B85568: cmplwi  r3, 0x0000
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

label_80B8556C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8556Cu)) return;
    // 80B8556C: bc    12, 2, 0x80B85574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85574;
        }
    }

label_80B85570:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85570: bl      0x8050F9E0
    {
            ctx->lr = 0x80B85574u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B85574:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B85574: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80B85578:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85578u)) return;
    // 80B85578: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80B8557C:
    ctx->pc = 0x80B8557Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8557Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8557C: lwz     r0, 0(r31)
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
label_80B85580:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85580u)) return;
    // 80B85580: cmpw    r28, r0
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

label_80B85584:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85584u)) return;
    // 80B85584: bc    12, 0, 0x80B85560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B85560u;
                return;
            }
            goto label_80B85560;
        }
    }

label_80B85588:
    ctx->pc = 0x80B85588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B85588: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B8558C:
    ctx->pc = 0x80B8558Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8558Cu)) return;
    // 80B8558C: addi    r3, r3, -27028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27028);

label_80B85590:
    ctx->pc = 0x80B85590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B85590: lwz     r3, 0(r3)
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
label_80B85594:
    ctx->pc = 0x80B85594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85594u)) return;
    // 80B85594: bl      0x8050ED40
    {
            ctx->lr = 0x80B85598u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80B85598:
    ctx->pc = 0x80B85598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B85598: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B8559C:
    ctx->pc = 0x80B8559Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8559Cu)) return;
    // 80B8559C: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B855A0:
    ctx->pc = 0x80B855A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855A0u)) return;
    // 80B855A0: addi    r3, r3, -27028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27028);

label_80B855A4:
    ctx->pc = 0x80B855A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B855A4: stw     r0, 0(r3)
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
label_80B855A8:
    ctx->pc = 0x80B855A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B855A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B855A8: lwz     r31, 28(r1)
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
label_80B855AC:
    ctx->pc = 0x80B855ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B855AC: lwz     r30, 24(r1)
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
label_80B855B0:
    ctx->pc = 0x80B855B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B855B0: lwz     r29, 20(r1)
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
label_80B855B4:
    ctx->pc = 0x80B855B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B855B4: lwz     r28, 16(r1)
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
label_80B855B8:
    ctx->pc = 0x80B855B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B855B8: lwz     r0, 36(r1)
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
label_80B855BC:
    ctx->pc = 0x80B855BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B855BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B855BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B855C0:
    ctx->pc = 0x80B855C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855C0u)) return;
    // 80B855C0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B855C4:
    ctx->pc = 0x80B855C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855C4u)) return;
    // 80B855C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B855C8:
    ctx->pc = 0x80B855C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B855C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B855C8: stwu     r1, -16(r1)
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
label_80B855CC:
    ctx->pc = 0x80B855CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B855CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B855D0:
    ctx->pc = 0x80B855D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B855D0: stw     r0, 20(r1)
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
label_80B855D4:
    ctx->pc = 0x80B855D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B855D4: stw     r31, 12(r1)
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
label_80B855D8:
    ctx->pc = 0x80B855D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855D8u)) return;
    // 80B855D8: lis     r6, -27538
    ctx->gpr[6] = ((u32)(s32)(-27538) << 16);

label_80B855DC:
    ctx->pc = 0x80B855DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855DCu)) return;
    // 80B855DC: addi    r6, r6, -27032
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27032);

label_80B855E0:
    ctx->pc = 0x80B855E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B855E0: lwz     r0, 0(r6)
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
label_80B855E4:
    ctx->pc = 0x80B855E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855E4u)) return;
    // 80B855E4: cmpw    r3, r0
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

label_80B855E8:
    ctx->pc = 0x80B855E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855E8u)) return;
    // 80B855E8: bc    4, 0, 0x80B85624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85624;
        }
    }

label_80B855EC:
    ctx->pc = 0x80B855ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B855ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B855EC: lis     r6, -27538
    ctx->gpr[6] = ((u32)(s32)(-27538) << 16);

label_80B855F0:
    ctx->pc = 0x80B855F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855F0u)) return;
    // 80B855F0: addi    r6, r6, -27028
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27028);

label_80B855F4:
    ctx->pc = 0x80B855F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B855F4: lwz     r6, 0(r6)
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
label_80B855F8:
    ctx->pc = 0x80B855F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855F8u)) return;
    // 80B855F8: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B855FC:
    ctx->pc = 0x80B855FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B855FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B855FC: lwzx    r0, r6, r31
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
label_80B85600:
    ctx->pc = 0x80B85600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85600u)) return;
    // 80B85600: cmplwi  r0, 0x0000
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

label_80B85604:
    ctx->pc = 0x80B85604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85604u)) return;
    // 80B85604: bc    4, 2, 0x80B85624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85624;
        }
    }

label_80B85608:
    ctx->pc = 0x80B85608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B85608: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B8560C:
    ctx->pc = 0x80B8560Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8560Cu)) return;
    // 80B8560C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B85610:
    ctx->pc = 0x80B85610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85610u)) return;
    // 80B85610: bl      0x80B85314
    {
            ctx->lr = 0x80B85614u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B85314u;
                return;
            }
            goto label_80B85314;
    }

label_80B85614:
    ctx->pc = 0x80B85614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B85614: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B85618:
    ctx->pc = 0x80B85618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85618u)) return;
    // 80B85618: addi    r4, r4, -27028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27028);

label_80B8561C:
    ctx->pc = 0x80B8561Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8561Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B8561C: lwz     r4, 0(r4)
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
label_80B85620:
    ctx->pc = 0x80B85620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B85620: stwx    r3, r4, r31
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
label_80B85624:
    ctx->pc = 0x80B85624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85624: lwz     r31, 12(r1)
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
label_80B85628:
    ctx->pc = 0x80B85628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85628: lwz     r0, 20(r1)
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
label_80B8562C:
    ctx->pc = 0x80B8562Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B8562Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8562C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85630:
    ctx->pc = 0x80B85630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85630u)) return;
    // 80B85630: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B85634:
    ctx->pc = 0x80B85634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85634u)) return;
    // 80B85634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85638:
    ctx->pc = 0x80B85638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85638: stwu     r1, -16(r1)
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
label_80B8563C:
    ctx->pc = 0x80B8563Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8563Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B8563C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85640:
    ctx->pc = 0x80B85640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85640: stw     r0, 20(r1)
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
label_80B85644:
    ctx->pc = 0x80B85644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85644: stw     r31, 12(r1)
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
label_80B85648:
    ctx->pc = 0x80B85648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85648u)) return;
    // 80B85648: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B8564C:
    ctx->pc = 0x80B8564Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8564Cu)) return;
    // 80B8564C: addi    r4, r4, -27032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27032);

label_80B85650:
    ctx->pc = 0x80B85650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85650: lwz     r0, 0(r4)
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
label_80B85654:
    ctx->pc = 0x80B85654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85654u)) return;
    // 80B85654: cmpw    r3, r0
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

label_80B85658:
    ctx->pc = 0x80B85658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85658u)) return;
    // 80B85658: bc    4, 0, 0x80B85690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85690;
        }
    }

label_80B8565C:
    ctx->pc = 0x80B8565Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8565Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B8565C: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B85660:
    ctx->pc = 0x80B85660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85660u)) return;
    // 80B85660: addi    r4, r4, -27028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27028);

label_80B85664:
    ctx->pc = 0x80B85664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85664: lwz     r4, 0(r4)
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
label_80B85668:
    ctx->pc = 0x80B85668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85668u)) return;
    // 80B85668: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B8566C:
    ctx->pc = 0x80B8566Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8566Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B8566C: lwzx    r3, r4, r31
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
label_80B85670:
    ctx->pc = 0x80B85670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85670u)) return;
    // 80B85670: cmplwi  r3, 0x0000
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

label_80B85674:
    ctx->pc = 0x80B85674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85674u)) return;
    // 80B85674: bc    12, 2, 0x80B85690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85690;
        }
    }

label_80B85678:
    ctx->pc = 0x80B85678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85678: bl      0x8050F9E0
    {
            ctx->lr = 0x80B8567Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B8567C:
    ctx->pc = 0x80B8567Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B8567Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B8567C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B85680:
    ctx->pc = 0x80B85680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85680u)) return;
    // 80B85680: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B85684:
    ctx->pc = 0x80B85684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85684u)) return;
    // 80B85684: addi    r3, r3, -27028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27028);

label_80B85688:
    ctx->pc = 0x80B85688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B85688: lwz     r3, 0(r3)
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
label_80B8568C:
    ctx->pc = 0x80B8568Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8568Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B8568C: stwx    r0, r3, r31
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
label_80B85690:
    ctx->pc = 0x80B85690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B85690: lwz     r31, 12(r1)
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
label_80B85694:
    ctx->pc = 0x80B85694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85694: lwz     r0, 20(r1)
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
label_80B85698:
    ctx->pc = 0x80B85698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85698: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8569C:
    ctx->pc = 0x80B8569Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8569Cu)) return;
    // 80B8569C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B856A0:
    ctx->pc = 0x80B856A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856A0u)) return;
    // 80B856A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B856A4:
    ctx->pc = 0x80B856A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B856A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B856A4: stwu     r1, -16(r1)
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
label_80B856A8:
    ctx->pc = 0x80B856A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B856A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B856AC:
    ctx->pc = 0x80B856ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B856AC: stw     r0, 20(r1)
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
label_80B856B0:
    ctx->pc = 0x80B856B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856B0u)) return;
    // 80B856B0: lis     r6, -27538
    ctx->gpr[6] = ((u32)(s32)(-27538) << 16);

label_80B856B4:
    ctx->pc = 0x80B856B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856B4u)) return;
    // 80B856B4: addi    r6, r6, -27032
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27032);

label_80B856B8:
    ctx->pc = 0x80B856B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B856B8: lwz     r0, 0(r6)
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
label_80B856BC:
    ctx->pc = 0x80B856BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856BCu)) return;
    // 80B856BC: cmpw    r3, r0
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

label_80B856C0:
    ctx->pc = 0x80B856C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856C0u)) return;
    // 80B856C0: bc    4, 0, 0x80B856E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B856E4;
        }
    }

label_80B856C4:
    ctx->pc = 0x80B856C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B856C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B856C4: lis     r6, -27538
    ctx->gpr[6] = ((u32)(s32)(-27538) << 16);

label_80B856C8:
    ctx->pc = 0x80B856C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856C8u)) return;
    // 80B856C8: addi    r6, r6, -27028
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27028);

label_80B856CC:
    ctx->pc = 0x80B856CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B856CC: lwz     r6, 0(r6)
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
label_80B856D0:
    ctx->pc = 0x80B856D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856D0u)) return;
    // 80B856D0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B856D4:
    ctx->pc = 0x80B856D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B856D4: lwzx    r3, r6, r0
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
label_80B856D8:
    ctx->pc = 0x80B856D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856D8u)) return;
    // 80B856D8: cmplwi  r3, 0x0000
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

label_80B856DC:
    ctx->pc = 0x80B856DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856DCu)) return;
    // 80B856DC: bc    12, 2, 0x80B856E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B856E4;
        }
    }

label_80B856E0:
    ctx->pc = 0x80B856E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B856E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B856E0: bl      0x80B853D0
    {
            ctx->lr = 0x80B856E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B853D0u;
                return;
            }
            goto label_80B853D0;
    }

label_80B856E4:
    ctx->pc = 0x80B856E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B856E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B856E4: lwz     r0, 20(r1)
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
label_80B856E8:
    ctx->pc = 0x80B856E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B856E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B856E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B856EC:
    ctx->pc = 0x80B856ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856ECu)) return;
    // 80B856EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B856F0:
    ctx->pc = 0x80B856F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856F0u)) return;
    // 80B856F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B856F4:
    ctx->pc = 0x80B856F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B856F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B856F4: stwu     r1, -16(r1)
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
label_80B856F8:
    ctx->pc = 0x80B856F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B856F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B856FC:
    ctx->pc = 0x80B856FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B856FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B856FC: stw     r0, 20(r1)
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
label_80B85700:
    ctx->pc = 0x80B85700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85700u)) return;
    // 80B85700: lis     r6, -27538
    ctx->gpr[6] = ((u32)(s32)(-27538) << 16);

label_80B85704:
    ctx->pc = 0x80B85704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85704u)) return;
    // 80B85704: addi    r6, r6, -27032
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27032);

label_80B85708:
    ctx->pc = 0x80B85708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85708: lwz     r0, 0(r6)
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
label_80B8570C:
    ctx->pc = 0x80B8570Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8570Cu)) return;
    // 80B8570C: cmpw    r3, r0
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

label_80B85710:
    ctx->pc = 0x80B85710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85710u)) return;
    // 80B85710: bc    4, 0, 0x80B85734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85734;
        }
    }

label_80B85714:
    ctx->pc = 0x80B85714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B85714: lis     r6, -27538
    ctx->gpr[6] = ((u32)(s32)(-27538) << 16);

label_80B85718:
    ctx->pc = 0x80B85718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85718u)) return;
    // 80B85718: addi    r6, r6, -27028
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27028);

label_80B8571C:
    ctx->pc = 0x80B8571Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8571Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B8571C: lwz     r6, 0(r6)
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
label_80B85720:
    ctx->pc = 0x80B85720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85720u)) return;
    // 80B85720: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B85724:
    ctx->pc = 0x80B85724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85724: lwzx    r3, r6, r0
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
label_80B85728:
    ctx->pc = 0x80B85728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85728u)) return;
    // 80B85728: cmplwi  r3, 0x0000
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

label_80B8572C:
    ctx->pc = 0x80B8572Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8572Cu)) return;
    // 80B8572C: bc    12, 2, 0x80B85734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85734;
        }
    }

label_80B85730:
    ctx->pc = 0x80B85730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85730: bl      0x80B85420
    {
            ctx->lr = 0x80B85734u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B85420u;
                return;
            }
            goto label_80B85420;
    }

label_80B85734:
    ctx->pc = 0x80B85734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85734: lwz     r0, 20(r1)
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
label_80B85738:
    ctx->pc = 0x80B85738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85738: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8573C:
    ctx->pc = 0x80B8573Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8573Cu)) return;
    // 80B8573C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B85740:
    ctx->pc = 0x80B85740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85740u)) return;
    // 80B85740: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85744:
    ctx->pc = 0x80B85744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B85744: stwu     r1, -16(r1)
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
label_80B85748:
    ctx->pc = 0x80B85748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85748: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8574C:
    ctx->pc = 0x80B8574Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8574Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B8574C: stw     r0, 20(r1)
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
label_80B85750:
    ctx->pc = 0x80B85750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85750u)) return;
    // 80B85750: lis     r6, -27538
    ctx->gpr[6] = ((u32)(s32)(-27538) << 16);

label_80B85754:
    ctx->pc = 0x80B85754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85754u)) return;
    // 80B85754: addi    r6, r6, -27032
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27032);

label_80B85758:
    ctx->pc = 0x80B85758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85758: lwz     r0, 0(r6)
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
label_80B8575C:
    ctx->pc = 0x80B8575Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8575Cu)) return;
    // 80B8575C: cmpw    r3, r0
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

label_80B85760:
    ctx->pc = 0x80B85760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85760u)) return;
    // 80B85760: bc    4, 0, 0x80B85784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B85784;
        }
    }

label_80B85764:
    ctx->pc = 0x80B85764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B85764: lis     r6, -27538
    ctx->gpr[6] = ((u32)(s32)(-27538) << 16);

label_80B85768:
    ctx->pc = 0x80B85768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85768u)) return;
    // 80B85768: addi    r6, r6, -27028
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27028);

label_80B8576C:
    ctx->pc = 0x80B8576Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8576Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B8576C: lwz     r6, 0(r6)
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
label_80B85770:
    ctx->pc = 0x80B85770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85770u)) return;
    // 80B85770: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B85774:
    ctx->pc = 0x80B85774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85774: lwzx    r3, r6, r0
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
label_80B85778:
    ctx->pc = 0x80B85778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85778u)) return;
    // 80B85778: cmplwi  r3, 0x0000
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

label_80B8577C:
    ctx->pc = 0x80B8577Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8577Cu)) return;
    // 80B8577C: bc    12, 2, 0x80B85784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B85784;
        }
    }

label_80B85780:
    ctx->pc = 0x80B85780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B85780: bl      0x80B85470
    {
            ctx->lr = 0x80B85784u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B85470u;
                return;
            }
            goto label_80B85470;
    }

label_80B85784:
    ctx->pc = 0x80B85784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85784: lwz     r0, 20(r1)
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
label_80B85788:
    ctx->pc = 0x80B85788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85788: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8578C:
    ctx->pc = 0x80B8578Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8578Cu)) return;
    // 80B8578C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B85790:
    ctx->pc = 0x80B85790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85790u)) return;
    // 80B85790: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

label_80B85794:
    ctx->pc = 0x80B85794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B85794: stwu     r1, -32(r1)
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
label_80B85798:
    ctx->pc = 0x80B85798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B85798: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B8579C:
    ctx->pc = 0x80B8579Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8579Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B8579C: stw     r0, 36(r1)
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
label_80B857A0:
    ctx->pc = 0x80B857A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B857A0: stw     r31, 28(r1)
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
label_80B857A4:
    ctx->pc = 0x80B857A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B857A4: stw     r30, 24(r1)
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
label_80B857A8:
    ctx->pc = 0x80B857A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B857A8: stw     r29, 20(r1)
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
label_80B857AC:
    ctx->pc = 0x80B857ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B857AC: stw     r28, 16(r1)
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
label_80B857B0:
    ctx->pc = 0x80B857B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857B0u)) return;
    // 80B857B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B857B4:
    ctx->pc = 0x80B857B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857B4u)) return;
    // 80B857B4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B857B8:
    ctx->pc = 0x80B857B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857B8u)) return;
    // 80B857B8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B857BC:
    ctx->pc = 0x80B857BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857BCu)) return;
    // 80B857BC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80B857C0:
    ctx->pc = 0x80B857C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857C0u)) return;
    // 80B857C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B857C4:
    ctx->pc = 0x80B857C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857C4u)) return;
    // 80B857C4: bl      0x80401DB0
    {
            ctx->lr = 0x80B857C8u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80B857C8:
    ctx->pc = 0x80B857C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B857C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B857C8: lis     r4, -27538
    ctx->gpr[4] = ((u32)(s32)(-27538) << 16);

label_80B857CC:
    ctx->pc = 0x80B857CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857CCu)) return;
    // 80B857CC: addi    r4, r4, -27024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27024);

label_80B857D0:
    ctx->pc = 0x80B857D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B857D0: lwz     r0, 0(r4)
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
label_80B857D4:
    ctx->pc = 0x80B857D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857D4u)) return;
    // 80B857D4: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80B857D8:
    ctx->pc = 0x80B857D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857D8u)) return;
    // 80B857D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B857DC:
    ctx->pc = 0x80B857DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857DCu)) return;
    // 80B857DC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B857E0:
    ctx->pc = 0x80B857E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857E0u)) return;
    // 80B857E0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B857E4:
    ctx->pc = 0x80B857E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857E4u)) return;
    // 80B857E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B857E8:
    ctx->pc = 0x80B857E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857E8u)) return;
    // 80B857E8: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80B857EC:
    ctx->pc = 0x80B857ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857ECu)) return;
    // 80B857EC: bl      0x8050A0D4
    {
            ctx->lr = 0x80B857F0u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B857F0:
    ctx->pc = 0x80B857F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B857F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B857F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B857F4:
    ctx->pc = 0x80B857F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857F4u)) return;
    // 80B857F4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80B857F8:
    ctx->pc = 0x80B857F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B857F8u)) return;
    // 80B857F8: bl      0x80509C74
    {
            ctx->lr = 0x80B857FCu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B857FC:
    ctx->pc = 0x80B857FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B857FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B857FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B85800:
    ctx->pc = 0x80B85800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85800u)) return;
    // 80B85800: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B85804:
    ctx->pc = 0x80B85804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85804u)) return;
    // 80B85804: bl      0x80509BF8
    {
            ctx->lr = 0x80B85808u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B85808:
    ctx->pc = 0x80B85808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B85808: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B8580C:
    ctx->pc = 0x80B8580Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8580Cu)) return;
    // 80B8580C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B85810:
    ctx->pc = 0x80B85810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85810u)) return;
    // 80B85810: bl      0x80509B94
    {
            ctx->lr = 0x80B85814u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B85814:
    ctx->pc = 0x80B85814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B85814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B85814: lis     r3, -27538
    ctx->gpr[3] = ((u32)(s32)(-27538) << 16);

label_80B85818:
    ctx->pc = 0x80B85818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85818u)) return;
    // 80B85818: addi    r4, r3, -27024
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-27024);

label_80B8581C:
    ctx->pc = 0x80B8581Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8581Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B8581C: lwz     r3, 0(r4)
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
label_80B85820:
    ctx->pc = 0x80B85820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85820u)) return;
    // 80B85820: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80B85824:
    ctx->pc = 0x80B85824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B85824: stw     r0, 0(r4)
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
label_80B85828:
    ctx->pc = 0x80B85828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85828u)) return;
    // 80B85828: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80B8582C:
    ctx->pc = 0x80B8582Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8582Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B8582C: stw     r0, 0(r4)
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
label_80B85830:
    ctx->pc = 0x80B85830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B85830: lwz     r31, 28(r1)
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
label_80B85834:
    ctx->pc = 0x80B85834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B85834: lwz     r30, 24(r1)
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
label_80B85838:
    ctx->pc = 0x80B85838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B85838: lwz     r29, 20(r1)
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
label_80B8583C:
    ctx->pc = 0x80B8583Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8583Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B8583C: lwz     r28, 16(r1)
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
label_80B85840:
    ctx->pc = 0x80B85840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B85840: lwz     r0, 36(r1)
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
label_80B85844:
    ctx->pc = 0x80B85844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B85844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B85844: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B85848:
    ctx->pc = 0x80B85848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B85848u)) return;
    // 80B85848: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B8584C:
    ctx->pc = 0x80B8584Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B8584Cu)) return;
    // 80B8584C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B83AC0;
        }
    }

    ctx->pc = 0x80B85850u;
    return;
return_dispatch_80B83AC0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80B83AFCu: goto label_80B83AFC;
    case 0x80B83B04u: goto label_80B83B04;
    case 0x80B83B08u: goto label_80B83B08;
    case 0x80B83B0Cu: goto label_80B83B0C;
    case 0x80B83B10u: goto label_80B83B10;
    case 0x80B83B18u: goto label_80B83B18;
    case 0x80B83B20u: goto label_80B83B20;
    case 0x80B83B64u: goto label_80B83B64;
    case 0x80B83B6Cu: goto label_80B83B6C;
    case 0x80B83B74u: goto label_80B83B74;
    case 0x80B83B7Cu: goto label_80B83B7C;
    case 0x80B83BA4u: goto label_80B83BA4;
    case 0x80B83BACu: goto label_80B83BAC;
    case 0x80B83BC0u: goto label_80B83BC0;
    case 0x80B83BC8u: goto label_80B83BC8;
    case 0x80B83BD0u: goto label_80B83BD0;
    case 0x80B83BF8u: goto label_80B83BF8;
    case 0x80B83C00u: goto label_80B83C00;
    case 0x80B83C10u: goto label_80B83C10;
    case 0x80B83C18u: goto label_80B83C18;
    case 0x80B83C20u: goto label_80B83C20;
    case 0x80B83C60u: goto label_80B83C60;
    case 0x80B83C90u: goto label_80B83C90;
    case 0x80B83CA8u: goto label_80B83CA8;
    case 0x80B83CD8u: goto label_80B83CD8;
    case 0x80B83CF0u: goto label_80B83CF0;
    case 0x80B83CF8u: goto label_80B83CF8;
    case 0x80B83CFCu: goto label_80B83CFC;
    case 0x80B83D04u: goto label_80B83D04;
    case 0x80B83D2Cu: goto label_80B83D2C;
    case 0x80B83D34u: goto label_80B83D34;
    case 0x80B83D5Cu: goto label_80B83D5C;
    case 0x80B83D64u: goto label_80B83D64;
    case 0x80B83D6Cu: goto label_80B83D6C;
    case 0x80B83D70u: goto label_80B83D70;
    case 0x80B83D78u: goto label_80B83D78;
    case 0x80B83DA8u: goto label_80B83DA8;
    case 0x80B83DC4u: goto label_80B83DC4;
    case 0x80B83DCCu: goto label_80B83DCC;
    case 0x80B83DD0u: goto label_80B83DD0;
    case 0x80B83DD8u: goto label_80B83DD8;
    case 0x80B83DE8u: goto label_80B83DE8;
    case 0x80B83DF0u: goto label_80B83DF0;
    case 0x80B83E20u: goto label_80B83E20;
    case 0x80B83E3Cu: goto label_80B83E3C;
    case 0x80B83E44u: goto label_80B83E44;
    case 0x80B83E6Cu: goto label_80B83E6C;
    case 0x80B83E74u: goto label_80B83E74;
    case 0x80B83E7Cu: goto label_80B83E7C;
    case 0x80B83E80u: goto label_80B83E80;
    case 0x80B83E88u: goto label_80B83E88;
    case 0x80B83E8Cu: goto label_80B83E8C;
    case 0x80B83EBCu: goto label_80B83EBC;
    case 0x80B83ED8u: goto label_80B83ED8;
    case 0x80B83F08u: goto label_80B83F08;
    case 0x80B83F24u: goto label_80B83F24;
    case 0x80B83F40u: goto label_80B83F40;
    case 0x80B83F4Cu: goto label_80B83F4C;
    case 0x80B83F54u: goto label_80B83F54;
    case 0x80B83F68u: goto label_80B83F68;
    case 0x80B83F70u: goto label_80B83F70;
    case 0x80B83F78u: goto label_80B83F78;
    case 0x80B83F7Cu: goto label_80B83F7C;
    case 0x80B83F84u: goto label_80B83F84;
    case 0x80B83FACu: goto label_80B83FAC;
    case 0x80B83FC8u: goto label_80B83FC8;
    case 0x80B83FD4u: goto label_80B83FD4;
    case 0x80B83FDCu: goto label_80B83FDC;
    case 0x80B84004u: goto label_80B84004;
    case 0x80B8400Cu: goto label_80B8400C;
    case 0x80B84014u: goto label_80B84014;
    case 0x80B84018u: goto label_80B84018;
    case 0x80B84048u: goto label_80B84048;
    case 0x80B84064u: goto label_80B84064;
    case 0x80B84094u: goto label_80B84094;
    case 0x80B840B0u: goto label_80B840B0;
    case 0x80B840B4u: goto label_80B840B4;
    case 0x80B840D0u: goto label_80B840D0;
    case 0x80B840D4u: goto label_80B840D4;
    case 0x80B840DCu: goto label_80B840DC;
    case 0x80B840E8u: goto label_80B840E8;
    case 0x80B840F0u: goto label_80B840F0;
    case 0x80B84118u: goto label_80B84118;
    case 0x80B84120u: goto label_80B84120;
    case 0x80B84128u: goto label_80B84128;
    case 0x80B84150u: goto label_80B84150;
    case 0x80B84158u: goto label_80B84158;
    case 0x80B84188u: goto label_80B84188;
    case 0x80B841A4u: goto label_80B841A4;
    case 0x80B841D4u: goto label_80B841D4;
    case 0x80B841F0u: goto label_80B841F0;
    case 0x80B841F8u: goto label_80B841F8;
    case 0x80B84220u: goto label_80B84220;
    case 0x80B84228u: goto label_80B84228;
    case 0x80B8422Cu: goto label_80B8422C;
    case 0x80B84234u: goto label_80B84234;
    case 0x80B8423Cu: goto label_80B8423C;
    case 0x80B84264u: goto label_80B84264;
    case 0x80B8426Cu: goto label_80B8426C;
    case 0x80B84274u: goto label_80B84274;
    case 0x80B84278u: goto label_80B84278;
    case 0x80B84294u: goto label_80B84294;
    case 0x80B842A0u: goto label_80B842A0;
    case 0x80B842D0u: goto label_80B842D0;
    case 0x80B842E8u: goto label_80B842E8;
    case 0x80B84318u: goto label_80B84318;
    case 0x80B84330u: goto label_80B84330;
    case 0x80B84338u: goto label_80B84338;
    case 0x80B8433Cu: goto label_80B8433C;
    case 0x80B84344u: goto label_80B84344;
    case 0x80B8436Cu: goto label_80B8436C;
    case 0x80B84374u: goto label_80B84374;
    case 0x80B8437Cu: goto label_80B8437C;
    case 0x80B843A4u: goto label_80B843A4;
    case 0x80B843C0u: goto label_80B843C0;
    case 0x80B843CCu: goto label_80B843CC;
    case 0x80B843D4u: goto label_80B843D4;
    case 0x80B843F0u: goto label_80B843F0;
    case 0x80B843F4u: goto label_80B843F4;
    case 0x80B843FCu: goto label_80B843FC;
    case 0x80B84404u: goto label_80B84404;
    case 0x80B8442Cu: goto label_80B8442C;
    case 0x80B8445Cu: goto label_80B8445C;
    case 0x80B84478u: goto label_80B84478;
    case 0x80B844A8u: goto label_80B844A8;
    case 0x80B844C4u: goto label_80B844C4;
    case 0x80B844CCu: goto label_80B844CC;
    case 0x80B844FCu: goto label_80B844FC;
    case 0x80B84518u: goto label_80B84518;
    case 0x80B84548u: goto label_80B84548;
    case 0x80B84564u: goto label_80B84564;
    case 0x80B84580u: goto label_80B84580;
    case 0x80B84584u: goto label_80B84584;
    case 0x80B845A0u: goto label_80B845A0;
    case 0x80B845ACu: goto label_80B845AC;
    case 0x80B845C8u: goto label_80B845C8;
    case 0x80B845D4u: goto label_80B845D4;
    case 0x80B845DCu: goto label_80B845DC;
    case 0x80B845E0u: goto label_80B845E0;
    case 0x80B845E8u: goto label_80B845E8;
    case 0x80B84610u: goto label_80B84610;
    case 0x80B84618u: goto label_80B84618;
    case 0x80B84640u: goto label_80B84640;
    case 0x80B84648u: goto label_80B84648;
    case 0x80B84678u: goto label_80B84678;
    case 0x80B84694u: goto label_80B84694;
    case 0x80B846C4u: goto label_80B846C4;
    case 0x80B846E0u: goto label_80B846E0;
    case 0x80B846E8u: goto label_80B846E8;
    case 0x80B84710u: goto label_80B84710;
    case 0x80B8472Cu: goto label_80B8472C;
    case 0x80B84730u: goto label_80B84730;
    case 0x80B8474Cu: goto label_80B8474C;
    case 0x80B84750u: goto label_80B84750;
    case 0x80B8476Cu: goto label_80B8476C;
    case 0x80B84778u: goto label_80B84778;
    case 0x80B84794u: goto label_80B84794;
    case 0x80B847A0u: goto label_80B847A0;
    case 0x80B847A8u: goto label_80B847A8;
    case 0x80B847D8u: goto label_80B847D8;
    case 0x80B847F0u: goto label_80B847F0;
    case 0x80B84820u: goto label_80B84820;
    case 0x80B84838u: goto label_80B84838;
    case 0x80B84840u: goto label_80B84840;
    case 0x80B84868u: goto label_80B84868;
    case 0x80B84884u: goto label_80B84884;
    case 0x80B84888u: goto label_80B84888;
    case 0x80B848A4u: goto label_80B848A4;
    case 0x80B848A8u: goto label_80B848A8;
    case 0x80B848B0u: goto label_80B848B0;
    case 0x80B848BCu: goto label_80B848BC;
    case 0x80B848C4u: goto label_80B848C4;
    case 0x80B848F4u: goto label_80B848F4;
    case 0x80B84910u: goto label_80B84910;
    case 0x80B84918u: goto label_80B84918;
    case 0x80B8491Cu: goto label_80B8491C;
    case 0x80B84938u: goto label_80B84938;
    case 0x80B84944u: goto label_80B84944;
    case 0x80B84960u: goto label_80B84960;
    case 0x80B8496Cu: goto label_80B8496C;
    case 0x80B84974u: goto label_80B84974;
    case 0x80B8499Cu: goto label_80B8499C;
    case 0x80B849A4u: goto label_80B849A4;
    case 0x80B849D4u: goto label_80B849D4;
    case 0x80B849F0u: goto label_80B849F0;
    case 0x80B84A20u: goto label_80B84A20;
    case 0x80B84A3Cu: goto label_80B84A3C;
    case 0x80B84A58u: goto label_80B84A58;
    case 0x80B84A5Cu: goto label_80B84A5C;
    case 0x80B84A78u: goto label_80B84A78;
    case 0x80B84A7Cu: goto label_80B84A7C;
    case 0x80B84A84u: goto label_80B84A84;
    case 0x80B84A90u: goto label_80B84A90;
    case 0x80B84A98u: goto label_80B84A98;
    case 0x80B84AC0u: goto label_80B84AC0;
    case 0x80B84AC8u: goto label_80B84AC8;
    case 0x80B84AF8u: goto label_80B84AF8;
    case 0x80B84B14u: goto label_80B84B14;
    case 0x80B84B44u: goto label_80B84B44;
    case 0x80B84B60u: goto label_80B84B60;
    case 0x80B84B68u: goto label_80B84B68;
    case 0x80B84B90u: goto label_80B84B90;
    case 0x80B84B98u: goto label_80B84B98;
    case 0x80B84BA0u: goto label_80B84BA0;
    case 0x80B84BC8u: goto label_80B84BC8;
    case 0x80B84BD0u: goto label_80B84BD0;
    case 0x80B84C00u: goto label_80B84C00;
    case 0x80B84C1Cu: goto label_80B84C1C;
    case 0x80B84C24u: goto label_80B84C24;
    case 0x80B84C28u: goto label_80B84C28;
    case 0x80B84C44u: goto label_80B84C44;
    case 0x80B84C50u: goto label_80B84C50;
    case 0x80B84C6Cu: goto label_80B84C6C;
    case 0x80B84C78u: goto label_80B84C78;
    case 0x80B84C80u: goto label_80B84C80;
    case 0x80B84C84u: goto label_80B84C84;
    case 0x80B84C8Cu: goto label_80B84C8C;
    case 0x80B84CB4u: goto label_80B84CB4;
    case 0x80B84CBCu: goto label_80B84CBC;
    case 0x80B84CD8u: goto label_80B84CD8;
    case 0x80B84CDCu: goto label_80B84CDC;
    case 0x80B84CE4u: goto label_80B84CE4;
    case 0x80B84CE8u: goto label_80B84CE8;
    case 0x80B84CF8u: goto label_80B84CF8;
    case 0x80B84D08u: goto label_80B84D08;
    case 0x80B84D18u: goto label_80B84D18;
    case 0x80B84D20u: goto label_80B84D20;
    case 0x80B84D28u: goto label_80B84D28;
    case 0x80B84D30u: goto label_80B84D30;
    case 0x80B84D34u: goto label_80B84D34;
    case 0x80B84D3Cu: goto label_80B84D3C;
    case 0x80B84D40u: goto label_80B84D40;
    case 0x80B84D44u: goto label_80B84D44;
    case 0x80B84D48u: goto label_80B84D48;
    case 0x80B84D88u: goto label_80B84D88;
    case 0x80B84D9Cu: goto label_80B84D9C;
    case 0x80B84E90u: goto label_80B84E90;
    case 0x80B84EA4u: goto label_80B84EA4;
    case 0x80B84F88u: goto label_80B84F88;
    case 0x80B84FCCu: goto label_80B84FCC;
    case 0x80B85104u: goto label_80B85104;
    case 0x80B8511Cu: goto label_80B8511C;
    case 0x80B85194u: goto label_80B85194;
    case 0x80B851B8u: goto label_80B851B8;
    case 0x80B851E0u: goto label_80B851E0;
    case 0x80B85208u: goto label_80B85208;
    case 0x80B85268u: goto label_80B85268;
    case 0x80B852A8u: goto label_80B852A8;
    case 0x80B852E8u: goto label_80B852E8;
    case 0x80B85344u: goto label_80B85344;
    case 0x80B85368u: goto label_80B85368;
    case 0x80B85404u: goto label_80B85404;
    case 0x80B85454u: goto label_80B85454;
    case 0x80B854A4u: goto label_80B854A4;
    case 0x80B854F0u: goto label_80B854F0;
    case 0x80B85574u: goto label_80B85574;
    case 0x80B85598u: goto label_80B85598;
    case 0x80B85614u: goto label_80B85614;
    case 0x80B8567Cu: goto label_80B8567C;
    case 0x80B856E4u: goto label_80B856E4;
    case 0x80B85734u: goto label_80B85734;
    case 0x80B85784u: goto label_80B85784;
    case 0x80B857C8u: goto label_80B857C8;
    case 0x80B857F0u: goto label_80B857F0;
    case 0x80B857FCu: goto label_80B857FC;
    case 0x80B85808u: goto label_80B85808;
    case 0x80B85814u: goto label_80B85814;
    default: return;
    }
}

