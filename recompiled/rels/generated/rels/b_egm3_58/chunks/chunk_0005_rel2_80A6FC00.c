// DolRecomp output
#include "../generated.h"

void func_80A6FC00(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80A6FC00[2084] = {
        &&label_80A6FC00,
        &&label_80A6FC04,
        &&label_80A6FC08,
        &&label_80A6FC0C,
        &&label_80A6FC10,
        &&label_80A6FC14,
        &&label_80A6FC18,
        &&label_80A6FC1C,
        &&label_80A6FC20,
        &&label_80A6FC24,
        &&label_80A6FC28,
        &&label_80A6FC2C,
        &&label_80A6FC30,
        &&label_80A6FC34,
        &&label_80A6FC38,
        &&label_80A6FC3C,
        &&label_80A6FC40,
        &&label_80A6FC44,
        &&label_80A6FC48,
        &&label_80A6FC4C,
        &&label_80A6FC50,
        &&label_80A6FC54,
        &&label_80A6FC58,
        &&label_80A6FC5C,
        &&label_80A6FC60,
        &&label_80A6FC64,
        &&label_80A6FC68,
        &&label_80A6FC6C,
        &&label_80A6FC70,
        &&label_80A6FC74,
        &&label_80A6FC78,
        &&label_80A6FC7C,
        &&label_80A6FC80,
        &&label_80A6FC84,
        &&label_80A6FC88,
        &&label_80A6FC8C,
        &&label_80A6FC90,
        &&label_80A6FC94,
        &&label_80A6FC98,
        &&label_80A6FC9C,
        &&label_80A6FCA0,
        &&label_80A6FCA4,
        &&label_80A6FCA8,
        &&label_80A6FCAC,
        &&label_80A6FCB0,
        &&label_80A6FCB4,
        &&label_80A6FCB8,
        &&label_80A6FCBC,
        &&label_80A6FCC0,
        &&label_80A6FCC4,
        &&label_80A6FCC8,
        &&label_80A6FCCC,
        &&label_80A6FCD0,
        &&label_80A6FCD4,
        &&label_80A6FCD8,
        &&label_80A6FCDC,
        &&label_80A6FCE0,
        &&label_80A6FCE4,
        &&label_80A6FCE8,
        &&label_80A6FCEC,
        &&label_80A6FCF0,
        &&label_80A6FCF4,
        &&label_80A6FCF8,
        &&label_80A6FCFC,
        &&label_80A6FD00,
        &&label_80A6FD04,
        &&label_80A6FD08,
        &&label_80A6FD0C,
        &&label_80A6FD10,
        &&label_80A6FD14,
        &&label_80A6FD18,
        &&label_80A6FD1C,
        &&label_80A6FD20,
        &&label_80A6FD24,
        &&label_80A6FD28,
        &&label_80A6FD2C,
        &&label_80A6FD30,
        &&label_80A6FD34,
        &&label_80A6FD38,
        &&label_80A6FD3C,
        &&label_80A6FD40,
        &&label_80A6FD44,
        &&label_80A6FD48,
        &&label_80A6FD4C,
        &&label_80A6FD50,
        &&label_80A6FD54,
        &&label_80A6FD58,
        &&label_80A6FD5C,
        &&label_80A6FD60,
        &&label_80A6FD64,
        &&label_80A6FD68,
        &&label_80A6FD6C,
        &&label_80A6FD70,
        &&label_80A6FD74,
        &&label_80A6FD78,
        &&label_80A6FD7C,
        &&label_80A6FD80,
        &&label_80A6FD84,
        &&label_80A6FD88,
        &&label_80A6FD8C,
        &&label_80A6FD90,
        &&label_80A6FD94,
        &&label_80A6FD98,
        &&label_80A6FD9C,
        &&label_80A6FDA0,
        &&label_80A6FDA4,
        &&label_80A6FDA8,
        &&label_80A6FDAC,
        &&label_80A6FDB0,
        &&label_80A6FDB4,
        &&label_80A6FDB8,
        &&label_80A6FDBC,
        &&label_80A6FDC0,
        &&label_80A6FDC4,
        &&label_80A6FDC8,
        &&label_80A6FDCC,
        &&label_80A6FDD0,
        &&label_80A6FDD4,
        &&label_80A6FDD8,
        &&label_80A6FDDC,
        &&label_80A6FDE0,
        &&label_80A6FDE4,
        &&label_80A6FDE8,
        &&label_80A6FDEC,
        &&label_80A6FDF0,
        &&label_80A6FDF4,
        &&label_80A6FDF8,
        &&label_80A6FDFC,
        &&label_80A6FE00,
        &&label_80A6FE04,
        &&label_80A6FE08,
        &&label_80A6FE0C,
        &&label_80A6FE10,
        &&label_80A6FE14,
        &&label_80A6FE18,
        &&label_80A6FE1C,
        &&label_80A6FE20,
        &&label_80A6FE24,
        &&label_80A6FE28,
        &&label_80A6FE2C,
        &&label_80A6FE30,
        &&label_80A6FE34,
        &&label_80A6FE38,
        &&label_80A6FE3C,
        &&label_80A6FE40,
        &&label_80A6FE44,
        &&label_80A6FE48,
        &&label_80A6FE4C,
        &&label_80A6FE50,
        &&label_80A6FE54,
        &&label_80A6FE58,
        &&label_80A6FE5C,
        &&label_80A6FE60,
        &&label_80A6FE64,
        &&label_80A6FE68,
        &&label_80A6FE6C,
        &&label_80A6FE70,
        &&label_80A6FE74,
        &&label_80A6FE78,
        &&label_80A6FE7C,
        &&label_80A6FE80,
        &&label_80A6FE84,
        &&label_80A6FE88,
        &&label_80A6FE8C,
        &&label_80A6FE90,
        &&label_80A6FE94,
        &&label_80A6FE98,
        &&label_80A6FE9C,
        &&label_80A6FEA0,
        &&label_80A6FEA4,
        &&label_80A6FEA8,
        &&label_80A6FEAC,
        &&label_80A6FEB0,
        &&label_80A6FEB4,
        &&label_80A6FEB8,
        &&label_80A6FEBC,
        &&label_80A6FEC0,
        &&label_80A6FEC4,
        &&label_80A6FEC8,
        &&label_80A6FECC,
        &&label_80A6FED0,
        &&label_80A6FED4,
        &&label_80A6FED8,
        &&label_80A6FEDC,
        &&label_80A6FEE0,
        &&label_80A6FEE4,
        &&label_80A6FEE8,
        &&label_80A6FEEC,
        &&label_80A6FEF0,
        &&label_80A6FEF4,
        &&label_80A6FEF8,
        &&label_80A6FEFC,
        &&label_80A6FF00,
        &&label_80A6FF04,
        &&label_80A6FF08,
        &&label_80A6FF0C,
        &&label_80A6FF10,
        &&label_80A6FF14,
        &&label_80A6FF18,
        &&label_80A6FF1C,
        &&label_80A6FF20,
        &&label_80A6FF24,
        &&label_80A6FF28,
        &&label_80A6FF2C,
        &&label_80A6FF30,
        &&label_80A6FF34,
        &&label_80A6FF38,
        &&label_80A6FF3C,
        &&label_80A6FF40,
        &&label_80A6FF44,
        &&label_80A6FF48,
        &&label_80A6FF4C,
        &&label_80A6FF50,
        &&label_80A6FF54,
        &&label_80A6FF58,
        &&label_80A6FF5C,
        &&label_80A6FF60,
        &&label_80A6FF64,
        &&label_80A6FF68,
        &&label_80A6FF6C,
        &&label_80A6FF70,
        &&label_80A6FF74,
        &&label_80A6FF78,
        &&label_80A6FF7C,
        &&label_80A6FF80,
        &&label_80A6FF84,
        &&label_80A6FF88,
        &&label_80A6FF8C,
        &&label_80A6FF90,
        &&label_80A6FF94,
        &&label_80A6FF98,
        &&label_80A6FF9C,
        &&label_80A6FFA0,
        &&label_80A6FFA4,
        &&label_80A6FFA8,
        &&label_80A6FFAC,
        &&label_80A6FFB0,
        &&label_80A6FFB4,
        &&label_80A6FFB8,
        &&label_80A6FFBC,
        &&label_80A6FFC0,
        &&label_80A6FFC4,
        &&label_80A6FFC8,
        &&label_80A6FFCC,
        &&label_80A6FFD0,
        &&label_80A6FFD4,
        &&label_80A6FFD8,
        &&label_80A6FFDC,
        &&label_80A6FFE0,
        &&label_80A6FFE4,
        &&label_80A6FFE8,
        &&label_80A6FFEC,
        &&label_80A6FFF0,
        &&label_80A6FFF4,
        &&label_80A6FFF8,
        &&label_80A6FFFC,
        &&label_80A70000,
        &&label_80A70004,
        &&label_80A70008,
        &&label_80A7000C,
        &&label_80A70010,
        &&label_80A70014,
        &&label_80A70018,
        &&label_80A7001C,
        &&label_80A70020,
        &&label_80A70024,
        &&label_80A70028,
        &&label_80A7002C,
        &&label_80A70030,
        &&label_80A70034,
        &&label_80A70038,
        &&label_80A7003C,
        &&label_80A70040,
        &&label_80A70044,
        &&label_80A70048,
        &&label_80A7004C,
        &&label_80A70050,
        &&label_80A70054,
        &&label_80A70058,
        &&label_80A7005C,
        &&label_80A70060,
        &&label_80A70064,
        &&label_80A70068,
        &&label_80A7006C,
        &&label_80A70070,
        &&label_80A70074,
        &&label_80A70078,
        &&label_80A7007C,
        &&label_80A70080,
        &&label_80A70084,
        &&label_80A70088,
        &&label_80A7008C,
        &&label_80A70090,
        &&label_80A70094,
        &&label_80A70098,
        &&label_80A7009C,
        &&label_80A700A0,
        &&label_80A700A4,
        &&label_80A700A8,
        &&label_80A700AC,
        &&label_80A700B0,
        &&label_80A700B4,
        &&label_80A700B8,
        &&label_80A700BC,
        &&label_80A700C0,
        &&label_80A700C4,
        &&label_80A700C8,
        &&label_80A700CC,
        &&label_80A700D0,
        &&label_80A700D4,
        &&label_80A700D8,
        &&label_80A700DC,
        &&label_80A700E0,
        &&label_80A700E4,
        &&label_80A700E8,
        &&label_80A700EC,
        &&label_80A700F0,
        &&label_80A700F4,
        &&label_80A700F8,
        &&label_80A700FC,
        &&label_80A70100,
        &&label_80A70104,
        &&label_80A70108,
        &&label_80A7010C,
        &&label_80A70110,
        &&label_80A70114,
        &&label_80A70118,
        &&label_80A7011C,
        &&label_80A70120,
        &&label_80A70124,
        &&label_80A70128,
        &&label_80A7012C,
        &&label_80A70130,
        &&label_80A70134,
        &&label_80A70138,
        &&label_80A7013C,
        &&label_80A70140,
        &&label_80A70144,
        &&label_80A70148,
        &&label_80A7014C,
        &&label_80A70150,
        &&label_80A70154,
        &&label_80A70158,
        &&label_80A7015C,
        &&label_80A70160,
        &&label_80A70164,
        &&label_80A70168,
        &&label_80A7016C,
        &&label_80A70170,
        &&label_80A70174,
        &&label_80A70178,
        &&label_80A7017C,
        &&label_80A70180,
        &&label_80A70184,
        &&label_80A70188,
        &&label_80A7018C,
        &&label_80A70190,
        &&label_80A70194,
        &&label_80A70198,
        &&label_80A7019C,
        &&label_80A701A0,
        &&label_80A701A4,
        &&label_80A701A8,
        &&label_80A701AC,
        &&label_80A701B0,
        &&label_80A701B4,
        &&label_80A701B8,
        &&label_80A701BC,
        &&label_80A701C0,
        &&label_80A701C4,
        &&label_80A701C8,
        &&label_80A701CC,
        &&label_80A701D0,
        &&label_80A701D4,
        &&label_80A701D8,
        &&label_80A701DC,
        &&label_80A701E0,
        &&label_80A701E4,
        &&label_80A701E8,
        &&label_80A701EC,
        &&label_80A701F0,
        &&label_80A701F4,
        &&label_80A701F8,
        &&label_80A701FC,
        &&label_80A70200,
        &&label_80A70204,
        &&label_80A70208,
        &&label_80A7020C,
        &&label_80A70210,
        &&label_80A70214,
        &&label_80A70218,
        &&label_80A7021C,
        &&label_80A70220,
        &&label_80A70224,
        &&label_80A70228,
        &&label_80A7022C,
        &&label_80A70230,
        &&label_80A70234,
        &&label_80A70238,
        &&label_80A7023C,
        &&label_80A70240,
        &&label_80A70244,
        &&label_80A70248,
        &&label_80A7024C,
        &&label_80A70250,
        &&label_80A70254,
        &&label_80A70258,
        &&label_80A7025C,
        &&label_80A70260,
        &&label_80A70264,
        &&label_80A70268,
        &&label_80A7026C,
        &&label_80A70270,
        &&label_80A70274,
        &&label_80A70278,
        &&label_80A7027C,
        &&label_80A70280,
        &&label_80A70284,
        &&label_80A70288,
        &&label_80A7028C,
        &&label_80A70290,
        &&label_80A70294,
        &&label_80A70298,
        &&label_80A7029C,
        &&label_80A702A0,
        &&label_80A702A4,
        &&label_80A702A8,
        &&label_80A702AC,
        &&label_80A702B0,
        &&label_80A702B4,
        &&label_80A702B8,
        &&label_80A702BC,
        &&label_80A702C0,
        &&label_80A702C4,
        &&label_80A702C8,
        &&label_80A702CC,
        &&label_80A702D0,
        &&label_80A702D4,
        &&label_80A702D8,
        &&label_80A702DC,
        &&label_80A702E0,
        &&label_80A702E4,
        &&label_80A702E8,
        &&label_80A702EC,
        &&label_80A702F0,
        &&label_80A702F4,
        &&label_80A702F8,
        &&label_80A702FC,
        &&label_80A70300,
        &&label_80A70304,
        &&label_80A70308,
        &&label_80A7030C,
        &&label_80A70310,
        &&label_80A70314,
        &&label_80A70318,
        &&label_80A7031C,
        &&label_80A70320,
        &&label_80A70324,
        &&label_80A70328,
        &&label_80A7032C,
        &&label_80A70330,
        &&label_80A70334,
        &&label_80A70338,
        &&label_80A7033C,
        &&label_80A70340,
        &&label_80A70344,
        &&label_80A70348,
        &&label_80A7034C,
        &&label_80A70350,
        &&label_80A70354,
        &&label_80A70358,
        &&label_80A7035C,
        &&label_80A70360,
        &&label_80A70364,
        &&label_80A70368,
        &&label_80A7036C,
        &&label_80A70370,
        &&label_80A70374,
        &&label_80A70378,
        &&label_80A7037C,
        &&label_80A70380,
        &&label_80A70384,
        &&label_80A70388,
        &&label_80A7038C,
        &&label_80A70390,
        &&label_80A70394,
        &&label_80A70398,
        &&label_80A7039C,
        &&label_80A703A0,
        &&label_80A703A4,
        &&label_80A703A8,
        &&label_80A703AC,
        &&label_80A703B0,
        &&label_80A703B4,
        &&label_80A703B8,
        &&label_80A703BC,
        &&label_80A703C0,
        &&label_80A703C4,
        &&label_80A703C8,
        &&label_80A703CC,
        &&label_80A703D0,
        &&label_80A703D4,
        &&label_80A703D8,
        &&label_80A703DC,
        &&label_80A703E0,
        &&label_80A703E4,
        &&label_80A703E8,
        &&label_80A703EC,
        &&label_80A703F0,
        &&label_80A703F4,
        &&label_80A703F8,
        &&label_80A703FC,
        &&label_80A70400,
        &&label_80A70404,
        &&label_80A70408,
        &&label_80A7040C,
        &&label_80A70410,
        &&label_80A70414,
        &&label_80A70418,
        &&label_80A7041C,
        &&label_80A70420,
        &&label_80A70424,
        &&label_80A70428,
        &&label_80A7042C,
        &&label_80A70430,
        &&label_80A70434,
        &&label_80A70438,
        &&label_80A7043C,
        &&label_80A70440,
        &&label_80A70444,
        &&label_80A70448,
        &&label_80A7044C,
        &&label_80A70450,
        &&label_80A70454,
        &&label_80A70458,
        &&label_80A7045C,
        &&label_80A70460,
        &&label_80A70464,
        &&label_80A70468,
        &&label_80A7046C,
        &&label_80A70470,
        &&label_80A70474,
        &&label_80A70478,
        &&label_80A7047C,
        &&label_80A70480,
        &&label_80A70484,
        &&label_80A70488,
        &&label_80A7048C,
        &&label_80A70490,
        &&label_80A70494,
        &&label_80A70498,
        &&label_80A7049C,
        &&label_80A704A0,
        &&label_80A704A4,
        &&label_80A704A8,
        &&label_80A704AC,
        &&label_80A704B0,
        &&label_80A704B4,
        &&label_80A704B8,
        &&label_80A704BC,
        &&label_80A704C0,
        &&label_80A704C4,
        &&label_80A704C8,
        &&label_80A704CC,
        &&label_80A704D0,
        &&label_80A704D4,
        &&label_80A704D8,
        &&label_80A704DC,
        &&label_80A704E0,
        &&label_80A704E4,
        &&label_80A704E8,
        &&label_80A704EC,
        &&label_80A704F0,
        &&label_80A704F4,
        &&label_80A704F8,
        &&label_80A704FC,
        &&label_80A70500,
        &&label_80A70504,
        &&label_80A70508,
        &&label_80A7050C,
        &&label_80A70510,
        &&label_80A70514,
        &&label_80A70518,
        &&label_80A7051C,
        &&label_80A70520,
        &&label_80A70524,
        &&label_80A70528,
        &&label_80A7052C,
        &&label_80A70530,
        &&label_80A70534,
        &&label_80A70538,
        &&label_80A7053C,
        &&label_80A70540,
        &&label_80A70544,
        &&label_80A70548,
        &&label_80A7054C,
        &&label_80A70550,
        &&label_80A70554,
        &&label_80A70558,
        &&label_80A7055C,
        &&label_80A70560,
        &&label_80A70564,
        &&label_80A70568,
        &&label_80A7056C,
        &&label_80A70570,
        &&label_80A70574,
        &&label_80A70578,
        &&label_80A7057C,
        &&label_80A70580,
        &&label_80A70584,
        &&label_80A70588,
        &&label_80A7058C,
        &&label_80A70590,
        &&label_80A70594,
        &&label_80A70598,
        &&label_80A7059C,
        &&label_80A705A0,
        &&label_80A705A4,
        &&label_80A705A8,
        &&label_80A705AC,
        &&label_80A705B0,
        &&label_80A705B4,
        &&label_80A705B8,
        &&label_80A705BC,
        &&label_80A705C0,
        &&label_80A705C4,
        &&label_80A705C8,
        &&label_80A705CC,
        &&label_80A705D0,
        &&label_80A705D4,
        &&label_80A705D8,
        &&label_80A705DC,
        &&label_80A705E0,
        &&label_80A705E4,
        &&label_80A705E8,
        &&label_80A705EC,
        &&label_80A705F0,
        &&label_80A705F4,
        &&label_80A705F8,
        &&label_80A705FC,
        &&label_80A70600,
        &&label_80A70604,
        &&label_80A70608,
        &&label_80A7060C,
        &&label_80A70610,
        &&label_80A70614,
        &&label_80A70618,
        &&label_80A7061C,
        &&label_80A70620,
        &&label_80A70624,
        &&label_80A70628,
        &&label_80A7062C,
        &&label_80A70630,
        &&label_80A70634,
        &&label_80A70638,
        &&label_80A7063C,
        &&label_80A70640,
        &&label_80A70644,
        &&label_80A70648,
        &&label_80A7064C,
        &&label_80A70650,
        &&label_80A70654,
        &&label_80A70658,
        &&label_80A7065C,
        &&label_80A70660,
        &&label_80A70664,
        &&label_80A70668,
        &&label_80A7066C,
        &&label_80A70670,
        &&label_80A70674,
        &&label_80A70678,
        &&label_80A7067C,
        &&label_80A70680,
        &&label_80A70684,
        &&label_80A70688,
        &&label_80A7068C,
        &&label_80A70690,
        &&label_80A70694,
        &&label_80A70698,
        &&label_80A7069C,
        &&label_80A706A0,
        &&label_80A706A4,
        &&label_80A706A8,
        &&label_80A706AC,
        &&label_80A706B0,
        &&label_80A706B4,
        &&label_80A706B8,
        &&label_80A706BC,
        &&label_80A706C0,
        &&label_80A706C4,
        &&label_80A706C8,
        &&label_80A706CC,
        &&label_80A706D0,
        &&label_80A706D4,
        &&label_80A706D8,
        &&label_80A706DC,
        &&label_80A706E0,
        &&label_80A706E4,
        &&label_80A706E8,
        &&label_80A706EC,
        &&label_80A706F0,
        &&label_80A706F4,
        &&label_80A706F8,
        &&label_80A706FC,
        &&label_80A70700,
        &&label_80A70704,
        &&label_80A70708,
        &&label_80A7070C,
        &&label_80A70710,
        &&label_80A70714,
        &&label_80A70718,
        &&label_80A7071C,
        &&label_80A70720,
        &&label_80A70724,
        &&label_80A70728,
        &&label_80A7072C,
        &&label_80A70730,
        &&label_80A70734,
        &&label_80A70738,
        &&label_80A7073C,
        &&label_80A70740,
        &&label_80A70744,
        &&label_80A70748,
        &&label_80A7074C,
        &&label_80A70750,
        &&label_80A70754,
        &&label_80A70758,
        &&label_80A7075C,
        &&label_80A70760,
        &&label_80A70764,
        &&label_80A70768,
        &&label_80A7076C,
        &&label_80A70770,
        &&label_80A70774,
        &&label_80A70778,
        &&label_80A7077C,
        &&label_80A70780,
        &&label_80A70784,
        &&label_80A70788,
        &&label_80A7078C,
        &&label_80A70790,
        &&label_80A70794,
        &&label_80A70798,
        &&label_80A7079C,
        &&label_80A707A0,
        &&label_80A707A4,
        &&label_80A707A8,
        &&label_80A707AC,
        &&label_80A707B0,
        &&label_80A707B4,
        &&label_80A707B8,
        &&label_80A707BC,
        &&label_80A707C0,
        &&label_80A707C4,
        &&label_80A707C8,
        &&label_80A707CC,
        &&label_80A707D0,
        &&label_80A707D4,
        &&label_80A707D8,
        &&label_80A707DC,
        &&label_80A707E0,
        &&label_80A707E4,
        &&label_80A707E8,
        &&label_80A707EC,
        &&label_80A707F0,
        &&label_80A707F4,
        &&label_80A707F8,
        &&label_80A707FC,
        &&label_80A70800,
        &&label_80A70804,
        &&label_80A70808,
        &&label_80A7080C,
        &&label_80A70810,
        &&label_80A70814,
        &&label_80A70818,
        &&label_80A7081C,
        &&label_80A70820,
        &&label_80A70824,
        &&label_80A70828,
        &&label_80A7082C,
        &&label_80A70830,
        &&label_80A70834,
        &&label_80A70838,
        &&label_80A7083C,
        &&label_80A70840,
        &&label_80A70844,
        &&label_80A70848,
        &&label_80A7084C,
        &&label_80A70850,
        &&label_80A70854,
        &&label_80A70858,
        &&label_80A7085C,
        &&label_80A70860,
        &&label_80A70864,
        &&label_80A70868,
        &&label_80A7086C,
        &&label_80A70870,
        &&label_80A70874,
        &&label_80A70878,
        &&label_80A7087C,
        &&label_80A70880,
        &&label_80A70884,
        &&label_80A70888,
        &&label_80A7088C,
        &&label_80A70890,
        &&label_80A70894,
        &&label_80A70898,
        &&label_80A7089C,
        &&label_80A708A0,
        &&label_80A708A4,
        &&label_80A708A8,
        &&label_80A708AC,
        &&label_80A708B0,
        &&label_80A708B4,
        &&label_80A708B8,
        &&label_80A708BC,
        &&label_80A708C0,
        &&label_80A708C4,
        &&label_80A708C8,
        &&label_80A708CC,
        &&label_80A708D0,
        &&label_80A708D4,
        &&label_80A708D8,
        &&label_80A708DC,
        &&label_80A708E0,
        &&label_80A708E4,
        &&label_80A708E8,
        &&label_80A708EC,
        &&label_80A708F0,
        &&label_80A708F4,
        &&label_80A708F8,
        &&label_80A708FC,
        &&label_80A70900,
        &&label_80A70904,
        &&label_80A70908,
        &&label_80A7090C,
        &&label_80A70910,
        &&label_80A70914,
        &&label_80A70918,
        &&label_80A7091C,
        &&label_80A70920,
        &&label_80A70924,
        &&label_80A70928,
        &&label_80A7092C,
        &&label_80A70930,
        &&label_80A70934,
        &&label_80A70938,
        &&label_80A7093C,
        &&label_80A70940,
        &&label_80A70944,
        &&label_80A70948,
        &&label_80A7094C,
        &&label_80A70950,
        &&label_80A70954,
        &&label_80A70958,
        &&label_80A7095C,
        &&label_80A70960,
        &&label_80A70964,
        &&label_80A70968,
        &&label_80A7096C,
        &&label_80A70970,
        &&label_80A70974,
        &&label_80A70978,
        &&label_80A7097C,
        &&label_80A70980,
        &&label_80A70984,
        &&label_80A70988,
        &&label_80A7098C,
        &&label_80A70990,
        &&label_80A70994,
        &&label_80A70998,
        &&label_80A7099C,
        &&label_80A709A0,
        &&label_80A709A4,
        &&label_80A709A8,
        &&label_80A709AC,
        &&label_80A709B0,
        &&label_80A709B4,
        &&label_80A709B8,
        &&label_80A709BC,
        &&label_80A709C0,
        &&label_80A709C4,
        &&label_80A709C8,
        &&label_80A709CC,
        &&label_80A709D0,
        &&label_80A709D4,
        &&label_80A709D8,
        &&label_80A709DC,
        &&label_80A709E0,
        &&label_80A709E4,
        &&label_80A709E8,
        &&label_80A709EC,
        &&label_80A709F0,
        &&label_80A709F4,
        &&label_80A709F8,
        &&label_80A709FC,
        &&label_80A70A00,
        &&label_80A70A04,
        &&label_80A70A08,
        &&label_80A70A0C,
        &&label_80A70A10,
        &&label_80A70A14,
        &&label_80A70A18,
        &&label_80A70A1C,
        &&label_80A70A20,
        &&label_80A70A24,
        &&label_80A70A28,
        &&label_80A70A2C,
        &&label_80A70A30,
        &&label_80A70A34,
        &&label_80A70A38,
        &&label_80A70A3C,
        &&label_80A70A40,
        &&label_80A70A44,
        &&label_80A70A48,
        &&label_80A70A4C,
        &&label_80A70A50,
        &&label_80A70A54,
        &&label_80A70A58,
        &&label_80A70A5C,
        &&label_80A70A60,
        &&label_80A70A64,
        &&label_80A70A68,
        &&label_80A70A6C,
        &&label_80A70A70,
        &&label_80A70A74,
        &&label_80A70A78,
        &&label_80A70A7C,
        &&label_80A70A80,
        &&label_80A70A84,
        &&label_80A70A88,
        &&label_80A70A8C,
        &&label_80A70A90,
        &&label_80A70A94,
        &&label_80A70A98,
        &&label_80A70A9C,
        &&label_80A70AA0,
        &&label_80A70AA4,
        &&label_80A70AA8,
        &&label_80A70AAC,
        &&label_80A70AB0,
        &&label_80A70AB4,
        &&label_80A70AB8,
        &&label_80A70ABC,
        &&label_80A70AC0,
        &&label_80A70AC4,
        &&label_80A70AC8,
        &&label_80A70ACC,
        &&label_80A70AD0,
        &&label_80A70AD4,
        &&label_80A70AD8,
        &&label_80A70ADC,
        &&label_80A70AE0,
        &&label_80A70AE4,
        &&label_80A70AE8,
        &&label_80A70AEC,
        &&label_80A70AF0,
        &&label_80A70AF4,
        &&label_80A70AF8,
        &&label_80A70AFC,
        &&label_80A70B00,
        &&label_80A70B04,
        &&label_80A70B08,
        &&label_80A70B0C,
        &&label_80A70B10,
        &&label_80A70B14,
        &&label_80A70B18,
        &&label_80A70B1C,
        &&label_80A70B20,
        &&label_80A70B24,
        &&label_80A70B28,
        &&label_80A70B2C,
        &&label_80A70B30,
        &&label_80A70B34,
        &&label_80A70B38,
        &&label_80A70B3C,
        &&label_80A70B40,
        &&label_80A70B44,
        &&label_80A70B48,
        &&label_80A70B4C,
        &&label_80A70B50,
        &&label_80A70B54,
        &&label_80A70B58,
        &&label_80A70B5C,
        &&label_80A70B60,
        &&label_80A70B64,
        &&label_80A70B68,
        &&label_80A70B6C,
        &&label_80A70B70,
        &&label_80A70B74,
        &&label_80A70B78,
        &&label_80A70B7C,
        &&label_80A70B80,
        &&label_80A70B84,
        &&label_80A70B88,
        &&label_80A70B8C,
        &&label_80A70B90,
        &&label_80A70B94,
        &&label_80A70B98,
        &&label_80A70B9C,
        &&label_80A70BA0,
        &&label_80A70BA4,
        &&label_80A70BA8,
        &&label_80A70BAC,
        &&label_80A70BB0,
        &&label_80A70BB4,
        &&label_80A70BB8,
        &&label_80A70BBC,
        &&label_80A70BC0,
        &&label_80A70BC4,
        &&label_80A70BC8,
        &&label_80A70BCC,
        &&label_80A70BD0,
        &&label_80A70BD4,
        &&label_80A70BD8,
        &&label_80A70BDC,
        &&label_80A70BE0,
        &&label_80A70BE4,
        &&label_80A70BE8,
        &&label_80A70BEC,
        &&label_80A70BF0,
        &&label_80A70BF4,
        &&label_80A70BF8,
        &&label_80A70BFC,
        &&label_80A70C00,
        &&label_80A70C04,
        &&label_80A70C08,
        &&label_80A70C0C,
        &&label_80A70C10,
        &&label_80A70C14,
        &&label_80A70C18,
        &&label_80A70C1C,
        &&label_80A70C20,
        &&label_80A70C24,
        &&label_80A70C28,
        &&label_80A70C2C,
        &&label_80A70C30,
        &&label_80A70C34,
        &&label_80A70C38,
        &&label_80A70C3C,
        &&label_80A70C40,
        &&label_80A70C44,
        &&label_80A70C48,
        &&label_80A70C4C,
        &&label_80A70C50,
        &&label_80A70C54,
        &&label_80A70C58,
        &&label_80A70C5C,
        &&label_80A70C60,
        &&label_80A70C64,
        &&label_80A70C68,
        &&label_80A70C6C,
        &&label_80A70C70,
        &&label_80A70C74,
        &&label_80A70C78,
        &&label_80A70C7C,
        &&label_80A70C80,
        &&label_80A70C84,
        &&label_80A70C88,
        &&label_80A70C8C,
        &&label_80A70C90,
        &&label_80A70C94,
        &&label_80A70C98,
        &&label_80A70C9C,
        &&label_80A70CA0,
        &&label_80A70CA4,
        &&label_80A70CA8,
        &&label_80A70CAC,
        &&label_80A70CB0,
        &&label_80A70CB4,
        &&label_80A70CB8,
        &&label_80A70CBC,
        &&label_80A70CC0,
        &&label_80A70CC4,
        &&label_80A70CC8,
        &&label_80A70CCC,
        &&label_80A70CD0,
        &&label_80A70CD4,
        &&label_80A70CD8,
        &&label_80A70CDC,
        &&label_80A70CE0,
        &&label_80A70CE4,
        &&label_80A70CE8,
        &&label_80A70CEC,
        &&label_80A70CF0,
        &&label_80A70CF4,
        &&label_80A70CF8,
        &&label_80A70CFC,
        &&label_80A70D00,
        &&label_80A70D04,
        &&label_80A70D08,
        &&label_80A70D0C,
        &&label_80A70D10,
        &&label_80A70D14,
        &&label_80A70D18,
        &&label_80A70D1C,
        &&label_80A70D20,
        &&label_80A70D24,
        &&label_80A70D28,
        &&label_80A70D2C,
        &&label_80A70D30,
        &&label_80A70D34,
        &&label_80A70D38,
        &&label_80A70D3C,
        &&label_80A70D40,
        &&label_80A70D44,
        &&label_80A70D48,
        &&label_80A70D4C,
        &&label_80A70D50,
        &&label_80A70D54,
        &&label_80A70D58,
        &&label_80A70D5C,
        &&label_80A70D60,
        &&label_80A70D64,
        &&label_80A70D68,
        &&label_80A70D6C,
        &&label_80A70D70,
        &&label_80A70D74,
        &&label_80A70D78,
        &&label_80A70D7C,
        &&label_80A70D80,
        &&label_80A70D84,
        &&label_80A70D88,
        &&label_80A70D8C,
        &&label_80A70D90,
        &&label_80A70D94,
        &&label_80A70D98,
        &&label_80A70D9C,
        &&label_80A70DA0,
        &&label_80A70DA4,
        &&label_80A70DA8,
        &&label_80A70DAC,
        &&label_80A70DB0,
        &&label_80A70DB4,
        &&label_80A70DB8,
        &&label_80A70DBC,
        &&label_80A70DC0,
        &&label_80A70DC4,
        &&label_80A70DC8,
        &&label_80A70DCC,
        &&label_80A70DD0,
        &&label_80A70DD4,
        &&label_80A70DD8,
        &&label_80A70DDC,
        &&label_80A70DE0,
        &&label_80A70DE4,
        &&label_80A70DE8,
        &&label_80A70DEC,
        &&label_80A70DF0,
        &&label_80A70DF4,
        &&label_80A70DF8,
        &&label_80A70DFC,
        &&label_80A70E00,
        &&label_80A70E04,
        &&label_80A70E08,
        &&label_80A70E0C,
        &&label_80A70E10,
        &&label_80A70E14,
        &&label_80A70E18,
        &&label_80A70E1C,
        &&label_80A70E20,
        &&label_80A70E24,
        &&label_80A70E28,
        &&label_80A70E2C,
        &&label_80A70E30,
        &&label_80A70E34,
        &&label_80A70E38,
        &&label_80A70E3C,
        &&label_80A70E40,
        &&label_80A70E44,
        &&label_80A70E48,
        &&label_80A70E4C,
        &&label_80A70E50,
        &&label_80A70E54,
        &&label_80A70E58,
        &&label_80A70E5C,
        &&label_80A70E60,
        &&label_80A70E64,
        &&label_80A70E68,
        &&label_80A70E6C,
        &&label_80A70E70,
        &&label_80A70E74,
        &&label_80A70E78,
        &&label_80A70E7C,
        &&label_80A70E80,
        &&label_80A70E84,
        &&label_80A70E88,
        &&label_80A70E8C,
        &&label_80A70E90,
        &&label_80A70E94,
        &&label_80A70E98,
        &&label_80A70E9C,
        &&label_80A70EA0,
        &&label_80A70EA4,
        &&label_80A70EA8,
        &&label_80A70EAC,
        &&label_80A70EB0,
        &&label_80A70EB4,
        &&label_80A70EB8,
        &&label_80A70EBC,
        &&label_80A70EC0,
        &&label_80A70EC4,
        &&label_80A70EC8,
        &&label_80A70ECC,
        &&label_80A70ED0,
        &&label_80A70ED4,
        &&label_80A70ED8,
        &&label_80A70EDC,
        &&label_80A70EE0,
        &&label_80A70EE4,
        &&label_80A70EE8,
        &&label_80A70EEC,
        &&label_80A70EF0,
        &&label_80A70EF4,
        &&label_80A70EF8,
        &&label_80A70EFC,
        &&label_80A70F00,
        &&label_80A70F04,
        &&label_80A70F08,
        &&label_80A70F0C,
        &&label_80A70F10,
        &&label_80A70F14,
        &&label_80A70F18,
        &&label_80A70F1C,
        &&label_80A70F20,
        &&label_80A70F24,
        &&label_80A70F28,
        &&label_80A70F2C,
        &&label_80A70F30,
        &&label_80A70F34,
        &&label_80A70F38,
        &&label_80A70F3C,
        &&label_80A70F40,
        &&label_80A70F44,
        &&label_80A70F48,
        &&label_80A70F4C,
        &&label_80A70F50,
        &&label_80A70F54,
        &&label_80A70F58,
        &&label_80A70F5C,
        &&label_80A70F60,
        &&label_80A70F64,
        &&label_80A70F68,
        &&label_80A70F6C,
        &&label_80A70F70,
        &&label_80A70F74,
        &&label_80A70F78,
        &&label_80A70F7C,
        &&label_80A70F80,
        &&label_80A70F84,
        &&label_80A70F88,
        &&label_80A70F8C,
        &&label_80A70F90,
        &&label_80A70F94,
        &&label_80A70F98,
        &&label_80A70F9C,
        &&label_80A70FA0,
        &&label_80A70FA4,
        &&label_80A70FA8,
        &&label_80A70FAC,
        &&label_80A70FB0,
        &&label_80A70FB4,
        &&label_80A70FB8,
        &&label_80A70FBC,
        &&label_80A70FC0,
        &&label_80A70FC4,
        &&label_80A70FC8,
        &&label_80A70FCC,
        &&label_80A70FD0,
        &&label_80A70FD4,
        &&label_80A70FD8,
        &&label_80A70FDC,
        &&label_80A70FE0,
        &&label_80A70FE4,
        &&label_80A70FE8,
        &&label_80A70FEC,
        &&label_80A70FF0,
        &&label_80A70FF4,
        &&label_80A70FF8,
        &&label_80A70FFC,
        &&label_80A71000,
        &&label_80A71004,
        &&label_80A71008,
        &&label_80A7100C,
        &&label_80A71010,
        &&label_80A71014,
        &&label_80A71018,
        &&label_80A7101C,
        &&label_80A71020,
        &&label_80A71024,
        &&label_80A71028,
        &&label_80A7102C,
        &&label_80A71030,
        &&label_80A71034,
        &&label_80A71038,
        &&label_80A7103C,
        &&label_80A71040,
        &&label_80A71044,
        &&label_80A71048,
        &&label_80A7104C,
        &&label_80A71050,
        &&label_80A71054,
        &&label_80A71058,
        &&label_80A7105C,
        &&label_80A71060,
        &&label_80A71064,
        &&label_80A71068,
        &&label_80A7106C,
        &&label_80A71070,
        &&label_80A71074,
        &&label_80A71078,
        &&label_80A7107C,
        &&label_80A71080,
        &&label_80A71084,
        &&label_80A71088,
        &&label_80A7108C,
        &&label_80A71090,
        &&label_80A71094,
        &&label_80A71098,
        &&label_80A7109C,
        &&label_80A710A0,
        &&label_80A710A4,
        &&label_80A710A8,
        &&label_80A710AC,
        &&label_80A710B0,
        &&label_80A710B4,
        &&label_80A710B8,
        &&label_80A710BC,
        &&label_80A710C0,
        &&label_80A710C4,
        &&label_80A710C8,
        &&label_80A710CC,
        &&label_80A710D0,
        &&label_80A710D4,
        &&label_80A710D8,
        &&label_80A710DC,
        &&label_80A710E0,
        &&label_80A710E4,
        &&label_80A710E8,
        &&label_80A710EC,
        &&label_80A710F0,
        &&label_80A710F4,
        &&label_80A710F8,
        &&label_80A710FC,
        &&label_80A71100,
        &&label_80A71104,
        &&label_80A71108,
        &&label_80A7110C,
        &&label_80A71110,
        &&label_80A71114,
        &&label_80A71118,
        &&label_80A7111C,
        &&label_80A71120,
        &&label_80A71124,
        &&label_80A71128,
        &&label_80A7112C,
        &&label_80A71130,
        &&label_80A71134,
        &&label_80A71138,
        &&label_80A7113C,
        &&label_80A71140,
        &&label_80A71144,
        &&label_80A71148,
        &&label_80A7114C,
        &&label_80A71150,
        &&label_80A71154,
        &&label_80A71158,
        &&label_80A7115C,
        &&label_80A71160,
        &&label_80A71164,
        &&label_80A71168,
        &&label_80A7116C,
        &&label_80A71170,
        &&label_80A71174,
        &&label_80A71178,
        &&label_80A7117C,
        &&label_80A71180,
        &&label_80A71184,
        &&label_80A71188,
        &&label_80A7118C,
        &&label_80A71190,
        &&label_80A71194,
        &&label_80A71198,
        &&label_80A7119C,
        &&label_80A711A0,
        &&label_80A711A4,
        &&label_80A711A8,
        &&label_80A711AC,
        &&label_80A711B0,
        &&label_80A711B4,
        &&label_80A711B8,
        &&label_80A711BC,
        &&label_80A711C0,
        &&label_80A711C4,
        &&label_80A711C8,
        &&label_80A711CC,
        &&label_80A711D0,
        &&label_80A711D4,
        &&label_80A711D8,
        &&label_80A711DC,
        &&label_80A711E0,
        &&label_80A711E4,
        &&label_80A711E8,
        &&label_80A711EC,
        &&label_80A711F0,
        &&label_80A711F4,
        &&label_80A711F8,
        &&label_80A711FC,
        &&label_80A71200,
        &&label_80A71204,
        &&label_80A71208,
        &&label_80A7120C,
        &&label_80A71210,
        &&label_80A71214,
        &&label_80A71218,
        &&label_80A7121C,
        &&label_80A71220,
        &&label_80A71224,
        &&label_80A71228,
        &&label_80A7122C,
        &&label_80A71230,
        &&label_80A71234,
        &&label_80A71238,
        &&label_80A7123C,
        &&label_80A71240,
        &&label_80A71244,
        &&label_80A71248,
        &&label_80A7124C,
        &&label_80A71250,
        &&label_80A71254,
        &&label_80A71258,
        &&label_80A7125C,
        &&label_80A71260,
        &&label_80A71264,
        &&label_80A71268,
        &&label_80A7126C,
        &&label_80A71270,
        &&label_80A71274,
        &&label_80A71278,
        &&label_80A7127C,
        &&label_80A71280,
        &&label_80A71284,
        &&label_80A71288,
        &&label_80A7128C,
        &&label_80A71290,
        &&label_80A71294,
        &&label_80A71298,
        &&label_80A7129C,
        &&label_80A712A0,
        &&label_80A712A4,
        &&label_80A712A8,
        &&label_80A712AC,
        &&label_80A712B0,
        &&label_80A712B4,
        &&label_80A712B8,
        &&label_80A712BC,
        &&label_80A712C0,
        &&label_80A712C4,
        &&label_80A712C8,
        &&label_80A712CC,
        &&label_80A712D0,
        &&label_80A712D4,
        &&label_80A712D8,
        &&label_80A712DC,
        &&label_80A712E0,
        &&label_80A712E4,
        &&label_80A712E8,
        &&label_80A712EC,
        &&label_80A712F0,
        &&label_80A712F4,
        &&label_80A712F8,
        &&label_80A712FC,
        &&label_80A71300,
        &&label_80A71304,
        &&label_80A71308,
        &&label_80A7130C,
        &&label_80A71310,
        &&label_80A71314,
        &&label_80A71318,
        &&label_80A7131C,
        &&label_80A71320,
        &&label_80A71324,
        &&label_80A71328,
        &&label_80A7132C,
        &&label_80A71330,
        &&label_80A71334,
        &&label_80A71338,
        &&label_80A7133C,
        &&label_80A71340,
        &&label_80A71344,
        &&label_80A71348,
        &&label_80A7134C,
        &&label_80A71350,
        &&label_80A71354,
        &&label_80A71358,
        &&label_80A7135C,
        &&label_80A71360,
        &&label_80A71364,
        &&label_80A71368,
        &&label_80A7136C,
        &&label_80A71370,
        &&label_80A71374,
        &&label_80A71378,
        &&label_80A7137C,
        &&label_80A71380,
        &&label_80A71384,
        &&label_80A71388,
        &&label_80A7138C,
        &&label_80A71390,
        &&label_80A71394,
        &&label_80A71398,
        &&label_80A7139C,
        &&label_80A713A0,
        &&label_80A713A4,
        &&label_80A713A8,
        &&label_80A713AC,
        &&label_80A713B0,
        &&label_80A713B4,
        &&label_80A713B8,
        &&label_80A713BC,
        &&label_80A713C0,
        &&label_80A713C4,
        &&label_80A713C8,
        &&label_80A713CC,
        &&label_80A713D0,
        &&label_80A713D4,
        &&label_80A713D8,
        &&label_80A713DC,
        &&label_80A713E0,
        &&label_80A713E4,
        &&label_80A713E8,
        &&label_80A713EC,
        &&label_80A713F0,
        &&label_80A713F4,
        &&label_80A713F8,
        &&label_80A713FC,
        &&label_80A71400,
        &&label_80A71404,
        &&label_80A71408,
        &&label_80A7140C,
        &&label_80A71410,
        &&label_80A71414,
        &&label_80A71418,
        &&label_80A7141C,
        &&label_80A71420,
        &&label_80A71424,
        &&label_80A71428,
        &&label_80A7142C,
        &&label_80A71430,
        &&label_80A71434,
        &&label_80A71438,
        &&label_80A7143C,
        &&label_80A71440,
        &&label_80A71444,
        &&label_80A71448,
        &&label_80A7144C,
        &&label_80A71450,
        &&label_80A71454,
        &&label_80A71458,
        &&label_80A7145C,
        &&label_80A71460,
        &&label_80A71464,
        &&label_80A71468,
        &&label_80A7146C,
        &&label_80A71470,
        &&label_80A71474,
        &&label_80A71478,
        &&label_80A7147C,
        &&label_80A71480,
        &&label_80A71484,
        &&label_80A71488,
        &&label_80A7148C,
        &&label_80A71490,
        &&label_80A71494,
        &&label_80A71498,
        &&label_80A7149C,
        &&label_80A714A0,
        &&label_80A714A4,
        &&label_80A714A8,
        &&label_80A714AC,
        &&label_80A714B0,
        &&label_80A714B4,
        &&label_80A714B8,
        &&label_80A714BC,
        &&label_80A714C0,
        &&label_80A714C4,
        &&label_80A714C8,
        &&label_80A714CC,
        &&label_80A714D0,
        &&label_80A714D4,
        &&label_80A714D8,
        &&label_80A714DC,
        &&label_80A714E0,
        &&label_80A714E4,
        &&label_80A714E8,
        &&label_80A714EC,
        &&label_80A714F0,
        &&label_80A714F4,
        &&label_80A714F8,
        &&label_80A714FC,
        &&label_80A71500,
        &&label_80A71504,
        &&label_80A71508,
        &&label_80A7150C,
        &&label_80A71510,
        &&label_80A71514,
        &&label_80A71518,
        &&label_80A7151C,
        &&label_80A71520,
        &&label_80A71524,
        &&label_80A71528,
        &&label_80A7152C,
        &&label_80A71530,
        &&label_80A71534,
        &&label_80A71538,
        &&label_80A7153C,
        &&label_80A71540,
        &&label_80A71544,
        &&label_80A71548,
        &&label_80A7154C,
        &&label_80A71550,
        &&label_80A71554,
        &&label_80A71558,
        &&label_80A7155C,
        &&label_80A71560,
        &&label_80A71564,
        &&label_80A71568,
        &&label_80A7156C,
        &&label_80A71570,
        &&label_80A71574,
        &&label_80A71578,
        &&label_80A7157C,
        &&label_80A71580,
        &&label_80A71584,
        &&label_80A71588,
        &&label_80A7158C,
        &&label_80A71590,
        &&label_80A71594,
        &&label_80A71598,
        &&label_80A7159C,
        &&label_80A715A0,
        &&label_80A715A4,
        &&label_80A715A8,
        &&label_80A715AC,
        &&label_80A715B0,
        &&label_80A715B4,
        &&label_80A715B8,
        &&label_80A715BC,
        &&label_80A715C0,
        &&label_80A715C4,
        &&label_80A715C8,
        &&label_80A715CC,
        &&label_80A715D0,
        &&label_80A715D4,
        &&label_80A715D8,
        &&label_80A715DC,
        &&label_80A715E0,
        &&label_80A715E4,
        &&label_80A715E8,
        &&label_80A715EC,
        &&label_80A715F0,
        &&label_80A715F4,
        &&label_80A715F8,
        &&label_80A715FC,
        &&label_80A71600,
        &&label_80A71604,
        &&label_80A71608,
        &&label_80A7160C,
        &&label_80A71610,
        &&label_80A71614,
        &&label_80A71618,
        &&label_80A7161C,
        &&label_80A71620,
        &&label_80A71624,
        &&label_80A71628,
        &&label_80A7162C,
        &&label_80A71630,
        &&label_80A71634,
        &&label_80A71638,
        &&label_80A7163C,
        &&label_80A71640,
        &&label_80A71644,
        &&label_80A71648,
        &&label_80A7164C,
        &&label_80A71650,
        &&label_80A71654,
        &&label_80A71658,
        &&label_80A7165C,
        &&label_80A71660,
        &&label_80A71664,
        &&label_80A71668,
        &&label_80A7166C,
        &&label_80A71670,
        &&label_80A71674,
        &&label_80A71678,
        &&label_80A7167C,
        &&label_80A71680,
        &&label_80A71684,
        &&label_80A71688,
        &&label_80A7168C,
        &&label_80A71690,
        &&label_80A71694,
        &&label_80A71698,
        &&label_80A7169C,
        &&label_80A716A0,
        &&label_80A716A4,
        &&label_80A716A8,
        &&label_80A716AC,
        &&label_80A716B0,
        &&label_80A716B4,
        &&label_80A716B8,
        &&label_80A716BC,
        &&label_80A716C0,
        &&label_80A716C4,
        &&label_80A716C8,
        &&label_80A716CC,
        &&label_80A716D0,
        &&label_80A716D4,
        &&label_80A716D8,
        &&label_80A716DC,
        &&label_80A716E0,
        &&label_80A716E4,
        &&label_80A716E8,
        &&label_80A716EC,
        &&label_80A716F0,
        &&label_80A716F4,
        &&label_80A716F8,
        &&label_80A716FC,
        &&label_80A71700,
        &&label_80A71704,
        &&label_80A71708,
        &&label_80A7170C,
        &&label_80A71710,
        &&label_80A71714,
        &&label_80A71718,
        &&label_80A7171C,
        &&label_80A71720,
        &&label_80A71724,
        &&label_80A71728,
        &&label_80A7172C,
        &&label_80A71730,
        &&label_80A71734,
        &&label_80A71738,
        &&label_80A7173C,
        &&label_80A71740,
        &&label_80A71744,
        &&label_80A71748,
        &&label_80A7174C,
        &&label_80A71750,
        &&label_80A71754,
        &&label_80A71758,
        &&label_80A7175C,
        &&label_80A71760,
        &&label_80A71764,
        &&label_80A71768,
        &&label_80A7176C,
        &&label_80A71770,
        &&label_80A71774,
        &&label_80A71778,
        &&label_80A7177C,
        &&label_80A71780,
        &&label_80A71784,
        &&label_80A71788,
        &&label_80A7178C,
        &&label_80A71790,
        &&label_80A71794,
        &&label_80A71798,
        &&label_80A7179C,
        &&label_80A717A0,
        &&label_80A717A4,
        &&label_80A717A8,
        &&label_80A717AC,
        &&label_80A717B0,
        &&label_80A717B4,
        &&label_80A717B8,
        &&label_80A717BC,
        &&label_80A717C0,
        &&label_80A717C4,
        &&label_80A717C8,
        &&label_80A717CC,
        &&label_80A717D0,
        &&label_80A717D4,
        &&label_80A717D8,
        &&label_80A717DC,
        &&label_80A717E0,
        &&label_80A717E4,
        &&label_80A717E8,
        &&label_80A717EC,
        &&label_80A717F0,
        &&label_80A717F4,
        &&label_80A717F8,
        &&label_80A717FC,
        &&label_80A71800,
        &&label_80A71804,
        &&label_80A71808,
        &&label_80A7180C,
        &&label_80A71810,
        &&label_80A71814,
        &&label_80A71818,
        &&label_80A7181C,
        &&label_80A71820,
        &&label_80A71824,
        &&label_80A71828,
        &&label_80A7182C,
        &&label_80A71830,
        &&label_80A71834,
        &&label_80A71838,
        &&label_80A7183C,
        &&label_80A71840,
        &&label_80A71844,
        &&label_80A71848,
        &&label_80A7184C,
        &&label_80A71850,
        &&label_80A71854,
        &&label_80A71858,
        &&label_80A7185C,
        &&label_80A71860,
        &&label_80A71864,
        &&label_80A71868,
        &&label_80A7186C,
        &&label_80A71870,
        &&label_80A71874,
        &&label_80A71878,
        &&label_80A7187C,
        &&label_80A71880,
        &&label_80A71884,
        &&label_80A71888,
        &&label_80A7188C,
        &&label_80A71890,
        &&label_80A71894,
        &&label_80A71898,
        &&label_80A7189C,
        &&label_80A718A0,
        &&label_80A718A4,
        &&label_80A718A8,
        &&label_80A718AC,
        &&label_80A718B0,
        &&label_80A718B4,
        &&label_80A718B8,
        &&label_80A718BC,
        &&label_80A718C0,
        &&label_80A718C4,
        &&label_80A718C8,
        &&label_80A718CC,
        &&label_80A718D0,
        &&label_80A718D4,
        &&label_80A718D8,
        &&label_80A718DC,
        &&label_80A718E0,
        &&label_80A718E4,
        &&label_80A718E8,
        &&label_80A718EC,
        &&label_80A718F0,
        &&label_80A718F4,
        &&label_80A718F8,
        &&label_80A718FC,
        &&label_80A71900,
        &&label_80A71904,
        &&label_80A71908,
        &&label_80A7190C,
        &&label_80A71910,
        &&label_80A71914,
        &&label_80A71918,
        &&label_80A7191C,
        &&label_80A71920,
        &&label_80A71924,
        &&label_80A71928,
        &&label_80A7192C,
        &&label_80A71930,
        &&label_80A71934,
        &&label_80A71938,
        &&label_80A7193C,
        &&label_80A71940,
        &&label_80A71944,
        &&label_80A71948,
        &&label_80A7194C,
        &&label_80A71950,
        &&label_80A71954,
        &&label_80A71958,
        &&label_80A7195C,
        &&label_80A71960,
        &&label_80A71964,
        &&label_80A71968,
        &&label_80A7196C,
        &&label_80A71970,
        &&label_80A71974,
        &&label_80A71978,
        &&label_80A7197C,
        &&label_80A71980,
        &&label_80A71984,
        &&label_80A71988,
        &&label_80A7198C,
        &&label_80A71990,
        &&label_80A71994,
        &&label_80A71998,
        &&label_80A7199C,
        &&label_80A719A0,
        &&label_80A719A4,
        &&label_80A719A8,
        &&label_80A719AC,
        &&label_80A719B0,
        &&label_80A719B4,
        &&label_80A719B8,
        &&label_80A719BC,
        &&label_80A719C0,
        &&label_80A719C4,
        &&label_80A719C8,
        &&label_80A719CC,
        &&label_80A719D0,
        &&label_80A719D4,
        &&label_80A719D8,
        &&label_80A719DC,
        &&label_80A719E0,
        &&label_80A719E4,
        &&label_80A719E8,
        &&label_80A719EC,
        &&label_80A719F0,
        &&label_80A719F4,
        &&label_80A719F8,
        &&label_80A719FC,
        &&label_80A71A00,
        &&label_80A71A04,
        &&label_80A71A08,
        &&label_80A71A0C,
        &&label_80A71A10,
        &&label_80A71A14,
        &&label_80A71A18,
        &&label_80A71A1C,
        &&label_80A71A20,
        &&label_80A71A24,
        &&label_80A71A28,
        &&label_80A71A2C,
        &&label_80A71A30,
        &&label_80A71A34,
        &&label_80A71A38,
        &&label_80A71A3C,
        &&label_80A71A40,
        &&label_80A71A44,
        &&label_80A71A48,
        &&label_80A71A4C,
        &&label_80A71A50,
        &&label_80A71A54,
        &&label_80A71A58,
        &&label_80A71A5C,
        &&label_80A71A60,
        &&label_80A71A64,
        &&label_80A71A68,
        &&label_80A71A6C,
        &&label_80A71A70,
        &&label_80A71A74,
        &&label_80A71A78,
        &&label_80A71A7C,
        &&label_80A71A80,
        &&label_80A71A84,
        &&label_80A71A88,
        &&label_80A71A8C,
        &&label_80A71A90,
        &&label_80A71A94,
        &&label_80A71A98,
        &&label_80A71A9C,
        &&label_80A71AA0,
        &&label_80A71AA4,
        &&label_80A71AA8,
        &&label_80A71AAC,
        &&label_80A71AB0,
        &&label_80A71AB4,
        &&label_80A71AB8,
        &&label_80A71ABC,
        &&label_80A71AC0,
        &&label_80A71AC4,
        &&label_80A71AC8,
        &&label_80A71ACC,
        &&label_80A71AD0,
        &&label_80A71AD4,
        &&label_80A71AD8,
        &&label_80A71ADC,
        &&label_80A71AE0,
        &&label_80A71AE4,
        &&label_80A71AE8,
        &&label_80A71AEC,
        &&label_80A71AF0,
        &&label_80A71AF4,
        &&label_80A71AF8,
        &&label_80A71AFC,
        &&label_80A71B00,
        &&label_80A71B04,
        &&label_80A71B08,
        &&label_80A71B0C,
        &&label_80A71B10,
        &&label_80A71B14,
        &&label_80A71B18,
        &&label_80A71B1C,
        &&label_80A71B20,
        &&label_80A71B24,
        &&label_80A71B28,
        &&label_80A71B2C,
        &&label_80A71B30,
        &&label_80A71B34,
        &&label_80A71B38,
        &&label_80A71B3C,
        &&label_80A71B40,
        &&label_80A71B44,
        &&label_80A71B48,
        &&label_80A71B4C,
        &&label_80A71B50,
        &&label_80A71B54,
        &&label_80A71B58,
        &&label_80A71B5C,
        &&label_80A71B60,
        &&label_80A71B64,
        &&label_80A71B68,
        &&label_80A71B6C,
        &&label_80A71B70,
        &&label_80A71B74,
        &&label_80A71B78,
        &&label_80A71B7C,
        &&label_80A71B80,
        &&label_80A71B84,
        &&label_80A71B88,
        &&label_80A71B8C,
        &&label_80A71B90,
        &&label_80A71B94,
        &&label_80A71B98,
        &&label_80A71B9C,
        &&label_80A71BA0,
        &&label_80A71BA4,
        &&label_80A71BA8,
        &&label_80A71BAC,
        &&label_80A71BB0,
        &&label_80A71BB4,
        &&label_80A71BB8,
        &&label_80A71BBC,
        &&label_80A71BC0,
        &&label_80A71BC4,
        &&label_80A71BC8,
        &&label_80A71BCC,
        &&label_80A71BD0,
        &&label_80A71BD4,
        &&label_80A71BD8,
        &&label_80A71BDC,
        &&label_80A71BE0,
        &&label_80A71BE4,
        &&label_80A71BE8,
        &&label_80A71BEC,
        &&label_80A71BF0,
        &&label_80A71BF4,
        &&label_80A71BF8,
        &&label_80A71BFC,
        &&label_80A71C00,
        &&label_80A71C04,
        &&label_80A71C08,
        &&label_80A71C0C,
        &&label_80A71C10,
        &&label_80A71C14,
        &&label_80A71C18,
        &&label_80A71C1C,
        &&label_80A71C20,
        &&label_80A71C24,
        &&label_80A71C28,
        &&label_80A71C2C,
        &&label_80A71C30,
        &&label_80A71C34,
        &&label_80A71C38,
        &&label_80A71C3C,
        &&label_80A71C40,
        &&label_80A71C44,
        &&label_80A71C48,
        &&label_80A71C4C,
        &&label_80A71C50,
        &&label_80A71C54,
        &&label_80A71C58,
        &&label_80A71C5C,
        &&label_80A71C60,
        &&label_80A71C64,
        &&label_80A71C68,
        &&label_80A71C6C,
        &&label_80A71C70,
        &&label_80A71C74,
        &&label_80A71C78,
        &&label_80A71C7C,
        &&label_80A71C80,
        &&label_80A71C84,
        &&label_80A71C88,
        &&label_80A71C8C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80A6FC00u && pc <= 0x80A71C8Cu && ((pc - 0x80A6FC00u) & 3u) == 0u)
            goto *pc_table_80A6FC00[(pc - 0x80A6FC00u) >> 2];
    }
    return;
label_80A6FC00:
    ctx->pc = 0x80A6FC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    // 80A6FC00: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A6FC00u)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_80A6FC04:
    ctx->pc = 0x80A6FC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC04u)) return;
    // 80A6FC04: fmuls   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x80A6FC04u)) return;
    ppc_fmuls(ctx, 1, 1, 3);

label_80A6FC08:
    ctx->pc = 0x80A6FC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC08u)) return;
    // 80A6FC08: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80A6FC08u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_80A6FC0C:
    ctx->pc = 0x80A6FC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC0Cu)) return;
    // 80A6FC0C: lis     r3, -28672
    ctx->gpr[3] = ((u32)(s32)(-28672) << 16);

label_80A6FC10:
    ctx->pc = 0x80A6FC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC10u)) return;
    // 80A6FC10: addi    r3, r3, 732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(732);

label_80A6FC14:
    ctx->pc = 0x80A6FC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A6FC14: lwz     r3, 0(r3)
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
label_80A6FC18:
    ctx->pc = 0x80A6FC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A6FC18: lfs     f3, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FC18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
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
label_80A6FC1C:
    ctx->pc = 0x80A6FC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC1Cu)) return;
    // 80A6FC1C: fmadds f0, f0, f8, f3
    if (!ppc_fp_available_inline(ctx, 0x80A6FC1Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[8], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80A6FC20:
    ctx->pc = 0x80A6FC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A6FC20: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FC20u)) return;
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
label_80A6FC24:
    ctx->pc = 0x80A6FC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A6FC24: lfs     f0, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FC24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
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
label_80A6FC28:
    ctx->pc = 0x80A6FC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC28u)) return;
    // 80A6FC28: fmadds f0, f1, f8, f0
    if (!ppc_fp_available_inline(ctx, 0x80A6FC28u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[8], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80A6FC2C:
    ctx->pc = 0x80A6FC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A6FC2C: stfs     f0, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FC2Cu)) return;
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
label_80A6FC30:
    ctx->pc = 0x80A6FC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A6FC30: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FC30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80A6FC34:
    ctx->pc = 0x80A6FC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC34u)) return;
    // 80A6FC34: fmadds f0, f2, f8, f0
    if (!ppc_fp_available_inline(ctx, 0x80A6FC34u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[8], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80A6FC38:
    ctx->pc = 0x80A6FC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A6FC38: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FC38u)) return;
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
label_80A6FC3C:
    ctx->pc = 0x80A6FC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FC3C: lwz     r0, 36(r1)
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
label_80A6FC40:
    ctx->pc = 0x80A6FC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A6FC40: lwz     r31, 28(r1)
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
label_80A6FC44:
    ctx->pc = 0x80A6FC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FC44: lwz     r30, 24(r1)
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
label_80A6FC48:
    ctx->pc = 0x80A6FC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A6FC48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FC48: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FC4C:
    ctx->pc = 0x80A6FC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC4Cu)) return;
    // 80A6FC4C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A6FC50:
    ctx->pc = 0x80A6FC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC50u)) return;
    // 80A6FC50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A6FC54:
    ctx->pc = 0x80A6FC54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A6FC54: stwu     r1, -16(r1)
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
label_80A6FC58:
    ctx->pc = 0x80A6FC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A6FC58: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FC5C:
    ctx->pc = 0x80A6FC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC5Cu)) return;
    // 80A6FC5C: lis     r5, -27661
    ctx->gpr[5] = ((u32)(s32)(-27661) << 16);

label_80A6FC60:
    ctx->pc = 0x80A6FC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FC60: stw     r0, 20(r1)
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
label_80A6FC64:
    ctx->pc = 0x80A6FC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC64u)) return;
    // 80A6FC64: addi    r6, r5, -16776
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-16776);

label_80A6FC68:
    ctx->pc = 0x80A6FC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FC68: stw     r31, 12(r1)
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
label_80A6FC6C:
    ctx->pc = 0x80A6FC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC6Cu)) return;
    // 80A6FC6C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A6FC70:
    ctx->pc = 0x80A6FC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FC70: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FC74:
    ctx->pc = 0x80A6FC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC74u)) return;
    // 80A6FC74: cmpwi   r5, 2
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A6FC78:
    ctx->pc = 0x80A6FC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC78u)) return;
    // 80A6FC78: bc    12, 2, 0x80A6FD34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A6FD34;
        }
    }

label_80A6FC7C:
    ctx->pc = 0x80A6FC7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FC7C: bc    4, 0, 0x80A6FC90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A6FC90;
        }
    }

label_80A6FC80:
    ctx->pc = 0x80A6FC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FC80: cmpwi   r5, 0
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

label_80A6FC84:
    ctx->pc = 0x80A6FC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC84u)) return;
    // 80A6FC84: bc    12, 2, 0x80A6FC9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A6FC9C;
        }
    }

label_80A6FC88:
    ctx->pc = 0x80A6FC88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FC88: bc    4, 0, 0x80A6FCB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A6FCB0;
        }
    }

label_80A6FC8C:
    ctx->pc = 0x80A6FC8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FC8C: b       0x80A6FDC4
    {
            goto label_80A6FDC4;
    }

label_80A6FC90:
    ctx->pc = 0x80A6FC90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FC90: cmpwi   r5, 4
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A6FC94:
    ctx->pc = 0x80A6FC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FC94u)) return;
    // 80A6FC94: bc    4, 0, 0x80A6FDC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A6FDC4;
        }
    }

label_80A6FC98:
    ctx->pc = 0x80A6FC98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FC98: b       0x80A6FD70
    {
            goto label_80A6FD70;
    }

label_80A6FC9C:
    ctx->pc = 0x80A6FC9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FC9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A6FC9C: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80A6FCA0:
    ctx->pc = 0x80A6FCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCA0u)) return;
    // 80A6FCA0: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FCA4:
    ctx->pc = 0x80A6FCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCA4u)) return;
    // 80A6FCA4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A6FCA8:
    ctx->pc = 0x80A6FCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A6FCA8: stw     r0, 0(r6)
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
label_80A6FCAC:
    ctx->pc = 0x80A6FCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A6FCAC: stw     r5, -17112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-17112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FCB0:
    ctx->pc = 0x80A6FCB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FCB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FCB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A6FCB4:
    ctx->pc = 0x80A6FCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCB4u)) return;
    // 80A6FCB4: bl      0x80A6EFC0
    {
            ctx->lr = 0x80A6FCB8u;
            ctx->pc = 0x80A6EFC0u;
            return;
    }

label_80A6FCB8:
    ctx->pc = 0x80A6FCB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FCB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80A6FCB8: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FCBC:
    ctx->pc = 0x80A6FCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCBCu)) return;
    // 80A6FCBC: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A6FCC0:
    ctx->pc = 0x80A6FCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCC0u)) return;
    // 80A6FCC0: addi    r4, r3, -19676
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19676);

label_80A6FCC4:
    ctx->pc = 0x80A6FCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A6FCC4: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FCC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FCC8:
    ctx->pc = 0x80A6FCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A6FCC8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A6FCC8u)) return;
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
label_80A6FCCC:
    ctx->pc = 0x80A6FCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCCCu)) return;
    // 80A6FCCC: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FCD0:
    ctx->pc = 0x80A6FCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCD0u)) return;
    // 80A6FCD0: addi    r6, r3, -19644
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-19644);

label_80A6FCD4:
    ctx->pc = 0x80A6FCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCD4u)) return;
    // 80A6FCD4: lis     r4, -28672
    ctx->gpr[4] = ((u32)(s32)(-28672) << 16);

label_80A6FCD8:
    ctx->pc = 0x80A6FCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCD8u)) return;
    // 80A6FCD8: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A6FCD8u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_80A6FCDC:
    ctx->pc = 0x80A6FCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCDCu)) return;
    // 80A6FCDC: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FCE0:
    ctx->pc = 0x80A6FCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A6FCE0: lfs     f3, -19668(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A6FCE0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19668);
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
label_80A6FCE4:
    ctx->pc = 0x80A6FCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCE4u)) return;
    // 80A6FCE4: addi    r5, r3, -17112
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-17112);

label_80A6FCE8:
    ctx->pc = 0x80A6FCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A6FCE8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A6FCE8u)) return;
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
label_80A6FCEC:
    ctx->pc = 0x80A6FCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A6FCEC: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FCECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A6FCF0:
    ctx->pc = 0x80A6FCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A6FCF0: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FCF0u)) return;
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
label_80A6FCF4:
    ctx->pc = 0x80A6FCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCF4u)) return;
    // 80A6FCF4: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A6FCF4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A6FCF8:
    ctx->pc = 0x80A6FCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FCF8: lwz     r3, 732(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(732);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FCFC:
    ctx->pc = 0x80A6FCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FCFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A6FCFC: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FCFCu)) return;
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
label_80A6FD00:
    ctx->pc = 0x80A6FD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FD00: stfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FD00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD04:
    ctx->pc = 0x80A6FD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A6FD04: stfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FD04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD08:
    ctx->pc = 0x80A6FD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FD08: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD0C:
    ctx->pc = 0x80A6FD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD0Cu)) return;
    // 80A6FD0C: cmpwi   r0, 0
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

label_80A6FD10:
    ctx->pc = 0x80A6FD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD10u)) return;
    // 80A6FD10: bc    12, 2, 0x80A6FDC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A6FDC4;
        }
    }

label_80A6FD14:
    ctx->pc = 0x80A6FD14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FD14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A6FD14: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FD18:
    ctx->pc = 0x80A6FD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD18u)) return;
    // 80A6FD18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A6FD1C:
    ctx->pc = 0x80A6FD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD1Cu)) return;
    // 80A6FD1C: addi    r4, r3, -16776
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-16776);

label_80A6FD20:
    ctx->pc = 0x80A6FD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FD20: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD24:
    ctx->pc = 0x80A6FD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A6FD24: lwz     r3, 0(r4)
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
label_80A6FD28:
    ctx->pc = 0x80A6FD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD28u)) return;
    // 80A6FD28: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80A6FD2C:
    ctx->pc = 0x80A6FD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A6FD2C: stw     r0, 0(r4)
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
label_80A6FD30:
    ctx->pc = 0x80A6FD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD30u)) return;
    // 80A6FD30: b       0x80A6FDC4
    {
            goto label_80A6FDC4;
    }

label_80A6FD34:
    ctx->pc = 0x80A6FD34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FD34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A6FD34: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FD38:
    ctx->pc = 0x80A6FD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A6FD38: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A6FD38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD3C:
    ctx->pc = 0x80A6FD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FD3C: lfs     f0, -19744(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FD3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19744);
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
label_80A6FD40:
    ctx->pc = 0x80A6FD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD40u)) return;
    // 80A6FD40: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A6FD40u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A6FD44:
    ctx->pc = 0x80A6FD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD44u)) return;
    // 80A6FD44: bc    4, 0, 0x80A6FD50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A6FD50;
        }
    }

label_80A6FD48:
    ctx->pc = 0x80A6FD48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FD48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FD48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A6FD4C:
    ctx->pc = 0x80A6FD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD4Cu)) return;
    // 80A6FD4C: b       0x80A6FD54
    {
            goto label_80A6FD54;
    }

label_80A6FD50:
    ctx->pc = 0x80A6FD50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FD50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FD50: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A6FD54:
    ctx->pc = 0x80A6FD54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FD54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A6FD54: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FD58:
    ctx->pc = 0x80A6FD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD58u)) return;
    // 80A6FD58: lis     r6, -27661
    ctx->gpr[6] = ((u32)(s32)(-27661) << 16);

label_80A6FD5C:
    ctx->pc = 0x80A6FD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD5Cu)) return;
    // 80A6FD5C: addi    r5, r3, -16776
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-16776);

label_80A6FD60:
    ctx->pc = 0x80A6FD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A6FD60: stw     r0, -16788(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-16788);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD64:
    ctx->pc = 0x80A6FD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FD64: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD68:
    ctx->pc = 0x80A6FD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD68u)) return;
    // 80A6FD68: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80A6FD6C:
    ctx->pc = 0x80A6FD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A6FD6C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD70:
    ctx->pc = 0x80A6FD70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FD70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FD70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A6FD74:
    ctx->pc = 0x80A6FD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD74u)) return;
    // 80A6FD74: bl      0x80A6EBDC
    {
            ctx->lr = 0x80A6FD78u;
            ctx->pc = 0x80A6EBDCu;
            return;
    }

label_80A6FD78:
    ctx->pc = 0x80A6FD78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FD78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80A6FD78: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FD7C:
    ctx->pc = 0x80A6FD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD7Cu)) return;
    // 80A6FD7C: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A6FD80:
    ctx->pc = 0x80A6FD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD80u)) return;
    // 80A6FD80: addi    r4, r3, -19676
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19676);

label_80A6FD84:
    ctx->pc = 0x80A6FD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A6FD84: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FD84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FD88:
    ctx->pc = 0x80A6FD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A6FD88: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A6FD88u)) return;
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
label_80A6FD8C:
    ctx->pc = 0x80A6FD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD8Cu)) return;
    // 80A6FD8C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FD90:
    ctx->pc = 0x80A6FD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD90u)) return;
    // 80A6FD90: addi    r4, r3, -19644
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19644);

label_80A6FD94:
    ctx->pc = 0x80A6FD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A6FD94: lfs     f3, -19668(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A6FD94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19668);
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
label_80A6FD98:
    ctx->pc = 0x80A6FD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD98u)) return;
    // 80A6FD98: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A6FD98u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_80A6FD9C:
    ctx->pc = 0x80A6FD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FD9Cu)) return;
    // 80A6FD9C: lis     r3, -28672
    ctx->gpr[3] = ((u32)(s32)(-28672) << 16);

label_80A6FDA0:
    ctx->pc = 0x80A6FDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDA0u)) return;
    // 80A6FDA0: addi    r3, r3, 732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(732);

label_80A6FDA4:
    ctx->pc = 0x80A6FDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A6FDA4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A6FDA4u)) return;
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
label_80A6FDA8:
    ctx->pc = 0x80A6FDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FDA8: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FDA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A6FDAC:
    ctx->pc = 0x80A6FDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A6FDAC: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FDACu)) return;
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
label_80A6FDB0:
    ctx->pc = 0x80A6FDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FDB0: lwz     r3, 0(r3)
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
label_80A6FDB4:
    ctx->pc = 0x80A6FDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDB4u)) return;
    // 80A6FDB4: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A6FDB4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A6FDB8:
    ctx->pc = 0x80A6FDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FDB8: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FDB8u)) return;
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
label_80A6FDBC:
    ctx->pc = 0x80A6FDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A6FDBC: stfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FDBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FDC0:
    ctx->pc = 0x80A6FDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A6FDC0: stfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FDC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FDC4:
    ctx->pc = 0x80A6FDC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A6FDC4: lwz     r0, 20(r1)
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
label_80A6FDC8:
    ctx->pc = 0x80A6FDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FDC8: lwz     r31, 12(r1)
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
label_80A6FDCC:
    ctx->pc = 0x80A6FDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A6FDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FDCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FDD0:
    ctx->pc = 0x80A6FDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDD0u)) return;
    // 80A6FDD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A6FDD4:
    ctx->pc = 0x80A6FDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDD4u)) return;
    // 80A6FDD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A6FDD8:
    ctx->pc = 0x80A6FDD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FDD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A6FDD8: stwu     r1, -16(r1)
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
label_80A6FDDC:
    ctx->pc = 0x80A6FDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A6FDDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FDE0:
    ctx->pc = 0x80A6FDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDE0u)) return;
    // 80A6FDE0: lis     r5, -27661
    ctx->gpr[5] = ((u32)(s32)(-27661) << 16);

label_80A6FDE4:
    ctx->pc = 0x80A6FDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FDE4: stw     r0, 20(r1)
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
label_80A6FDE8:
    ctx->pc = 0x80A6FDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDE8u)) return;
    // 80A6FDE8: addi    r6, r5, -16776
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-16776);

label_80A6FDEC:
    ctx->pc = 0x80A6FDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FDEC: stw     r31, 12(r1)
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
label_80A6FDF0:
    ctx->pc = 0x80A6FDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDF0u)) return;
    // 80A6FDF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A6FDF4:
    ctx->pc = 0x80A6FDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FDF4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FDF8:
    ctx->pc = 0x80A6FDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDF8u)) return;
    // 80A6FDF8: cmpwi   r5, 2
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A6FDFC:
    ctx->pc = 0x80A6FDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FDFCu)) return;
    // 80A6FDFC: bc    12, 2, 0x80A6FEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A6FEB8;
        }
    }

label_80A6FE00:
    ctx->pc = 0x80A6FE00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FE00: bc    4, 0, 0x80A6FE14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A6FE14;
        }
    }

label_80A6FE04:
    ctx->pc = 0x80A6FE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FE04: cmpwi   r5, 0
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

label_80A6FE08:
    ctx->pc = 0x80A6FE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE08u)) return;
    // 80A6FE08: bc    12, 2, 0x80A6FE20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A6FE20;
        }
    }

label_80A6FE0C:
    ctx->pc = 0x80A6FE0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FE0C: bc    4, 0, 0x80A6FE34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A6FE34;
        }
    }

label_80A6FE10:
    ctx->pc = 0x80A6FE10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FE10: b       0x80A6FF88
    {
            goto label_80A6FF88;
    }

label_80A6FE14:
    ctx->pc = 0x80A6FE14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FE14: cmpwi   r5, 4
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A6FE18:
    ctx->pc = 0x80A6FE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE18u)) return;
    // 80A6FE18: bc    4, 0, 0x80A6FF88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A6FF88;
        }
    }

label_80A6FE1C:
    ctx->pc = 0x80A6FE1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FE1C: b       0x80A6FF38
    {
            goto label_80A6FF38;
    }

label_80A6FE20:
    ctx->pc = 0x80A6FE20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A6FE20: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80A6FE24:
    ctx->pc = 0x80A6FE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE24u)) return;
    // 80A6FE24: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FE28:
    ctx->pc = 0x80A6FE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE28u)) return;
    // 80A6FE28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A6FE2C:
    ctx->pc = 0x80A6FE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A6FE2C: stw     r0, 0(r6)
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
label_80A6FE30:
    ctx->pc = 0x80A6FE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A6FE30: stw     r5, -17112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-17112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FE34:
    ctx->pc = 0x80A6FE34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FE34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A6FE38:
    ctx->pc = 0x80A6FE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE38u)) return;
    // 80A6FE38: bl      0x80A6EFC0
    {
            ctx->lr = 0x80A6FE3Cu;
            ctx->pc = 0x80A6EFC0u;
            return;
    }

label_80A6FE3C:
    ctx->pc = 0x80A6FE3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80A6FE3C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FE40:
    ctx->pc = 0x80A6FE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE40u)) return;
    // 80A6FE40: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A6FE44:
    ctx->pc = 0x80A6FE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE44u)) return;
    // 80A6FE44: addi    r4, r3, -19676
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19676);

label_80A6FE48:
    ctx->pc = 0x80A6FE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A6FE48: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FE4C:
    ctx->pc = 0x80A6FE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A6FE4C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE4Cu)) return;
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
label_80A6FE50:
    ctx->pc = 0x80A6FE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE50u)) return;
    // 80A6FE50: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FE54:
    ctx->pc = 0x80A6FE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE54u)) return;
    // 80A6FE54: addi    r6, r3, -19644
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-19644);

label_80A6FE58:
    ctx->pc = 0x80A6FE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE58u)) return;
    // 80A6FE58: lis     r4, -28672
    ctx->gpr[4] = ((u32)(s32)(-28672) << 16);

label_80A6FE5C:
    ctx->pc = 0x80A6FE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE5Cu)) return;
    // 80A6FE5C: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A6FE5Cu)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_80A6FE60:
    ctx->pc = 0x80A6FE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE60u)) return;
    // 80A6FE60: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FE64:
    ctx->pc = 0x80A6FE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A6FE64: lfs     f3, -19668(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE64u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19668);
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
label_80A6FE68:
    ctx->pc = 0x80A6FE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE68u)) return;
    // 80A6FE68: addi    r5, r3, -17112
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-17112);

label_80A6FE6C:
    ctx->pc = 0x80A6FE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A6FE6C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE6Cu)) return;
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
label_80A6FE70:
    ctx->pc = 0x80A6FE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A6FE70: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A6FE74:
    ctx->pc = 0x80A6FE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A6FE74: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE74u)) return;
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
label_80A6FE78:
    ctx->pc = 0x80A6FE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE78u)) return;
    // 80A6FE78: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A6FE78u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A6FE7C:
    ctx->pc = 0x80A6FE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FE7C: lwz     r3, 732(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(732);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FE80:
    ctx->pc = 0x80A6FE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A6FE80: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE80u)) return;
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
label_80A6FE84:
    ctx->pc = 0x80A6FE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FE84: stfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FE88:
    ctx->pc = 0x80A6FE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A6FE88: stfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FE88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FE8C:
    ctx->pc = 0x80A6FE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FE8C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FE90:
    ctx->pc = 0x80A6FE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE90u)) return;
    // 80A6FE90: cmpwi   r0, 0
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

label_80A6FE94:
    ctx->pc = 0x80A6FE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE94u)) return;
    // 80A6FE94: bc    12, 2, 0x80A6FF88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A6FF88;
        }
    }

label_80A6FE98:
    ctx->pc = 0x80A6FE98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FE98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A6FE98: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FE9C:
    ctx->pc = 0x80A6FE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FE9Cu)) return;
    // 80A6FE9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A6FEA0:
    ctx->pc = 0x80A6FEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEA0u)) return;
    // 80A6FEA0: addi    r4, r3, -16776
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-16776);

label_80A6FEA4:
    ctx->pc = 0x80A6FEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FEA4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FEA8:
    ctx->pc = 0x80A6FEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A6FEA8: lwz     r3, 0(r4)
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
label_80A6FEAC:
    ctx->pc = 0x80A6FEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEACu)) return;
    // 80A6FEAC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80A6FEB0:
    ctx->pc = 0x80A6FEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A6FEB0: stw     r0, 0(r4)
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
label_80A6FEB4:
    ctx->pc = 0x80A6FEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEB4u)) return;
    // 80A6FEB4: b       0x80A6FF88
    {
            goto label_80A6FF88;
    }

label_80A6FEB8:
    ctx->pc = 0x80A6FEB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FEB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FEB8: bl      0x80A6EEC0
    {
            ctx->lr = 0x80A6FEBCu;
            ctx->pc = 0x80A6EEC0u;
            return;
    }

label_80A6FEBC:
    ctx->pc = 0x80A6FEBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FEBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80A6FEBC: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FEC0:
    ctx->pc = 0x80A6FEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEC0u)) return;
    // 80A6FEC0: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A6FEC4:
    ctx->pc = 0x80A6FEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEC4u)) return;
    // 80A6FEC4: addi    r4, r3, -19676
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19676);

label_80A6FEC8:
    ctx->pc = 0x80A6FEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A6FEC8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FEC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FECC:
    ctx->pc = 0x80A6FECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A6FECC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A6FECCu)) return;
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
label_80A6FED0:
    ctx->pc = 0x80A6FED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FED0u)) return;
    // 80A6FED0: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FED4:
    ctx->pc = 0x80A6FED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FED4u)) return;
    // 80A6FED4: addi    r6, r3, -19644
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-19644);

label_80A6FED8:
    ctx->pc = 0x80A6FED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FED8u)) return;
    // 80A6FED8: lis     r4, -28672
    ctx->gpr[4] = ((u32)(s32)(-28672) << 16);

label_80A6FEDC:
    ctx->pc = 0x80A6FEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEDCu)) return;
    // 80A6FEDC: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A6FEDCu)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_80A6FEE0:
    ctx->pc = 0x80A6FEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEE0u)) return;
    // 80A6FEE0: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FEE4:
    ctx->pc = 0x80A6FEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A6FEE4: lfs     f3, -19668(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A6FEE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19668);
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
label_80A6FEE8:
    ctx->pc = 0x80A6FEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEE8u)) return;
    // 80A6FEE8: addi    r5, r3, -17112
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-17112);

label_80A6FEEC:
    ctx->pc = 0x80A6FEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A6FEEC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A6FEECu)) return;
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
label_80A6FEF0:
    ctx->pc = 0x80A6FEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A6FEF0: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FEF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A6FEF4:
    ctx->pc = 0x80A6FEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A6FEF4: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FEF4u)) return;
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
label_80A6FEF8:
    ctx->pc = 0x80A6FEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEF8u)) return;
    // 80A6FEF8: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A6FEF8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A6FEFC:
    ctx->pc = 0x80A6FEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FEFC: lwz     r3, 732(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(732);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF00:
    ctx->pc = 0x80A6FF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A6FF00: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF00u)) return;
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
label_80A6FF04:
    ctx->pc = 0x80A6FF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FF04: stfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF08:
    ctx->pc = 0x80A6FF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A6FF08: stfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF0C:
    ctx->pc = 0x80A6FF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FF0C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF10:
    ctx->pc = 0x80A6FF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF10u)) return;
    // 80A6FF10: cmpwi   r0, 0
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

label_80A6FF14:
    ctx->pc = 0x80A6FF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF14u)) return;
    // 80A6FF14: bc    12, 2, 0x80A6FF88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A6FF88;
        }
    }

label_80A6FF18:
    ctx->pc = 0x80A6FF18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FF18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A6FF18: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FF1C:
    ctx->pc = 0x80A6FF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF1Cu)) return;
    // 80A6FF1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A6FF20:
    ctx->pc = 0x80A6FF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF20u)) return;
    // 80A6FF20: addi    r4, r3, -16776
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-16776);

label_80A6FF24:
    ctx->pc = 0x80A6FF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FF24: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF28:
    ctx->pc = 0x80A6FF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A6FF28: lwz     r3, 0(r4)
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
label_80A6FF2C:
    ctx->pc = 0x80A6FF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF2Cu)) return;
    // 80A6FF2C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80A6FF30:
    ctx->pc = 0x80A6FF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A6FF30: stw     r0, 0(r4)
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
label_80A6FF34:
    ctx->pc = 0x80A6FF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF34u)) return;
    // 80A6FF34: b       0x80A6FF88
    {
            goto label_80A6FF88;
    }

label_80A6FF38:
    ctx->pc = 0x80A6FF38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FF38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FF38: bl      0x80A6EFC0
    {
            ctx->lr = 0x80A6FF3Cu;
            ctx->pc = 0x80A6EFC0u;
            return;
    }

label_80A6FF3C:
    ctx->pc = 0x80A6FF3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FF3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80A6FF3C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FF40:
    ctx->pc = 0x80A6FF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF40u)) return;
    // 80A6FF40: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A6FF44:
    ctx->pc = 0x80A6FF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF44u)) return;
    // 80A6FF44: addi    r4, r3, -19676
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19676);

label_80A6FF48:
    ctx->pc = 0x80A6FF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A6FF48: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF4C:
    ctx->pc = 0x80A6FF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A6FF4C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF4Cu)) return;
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
label_80A6FF50:
    ctx->pc = 0x80A6FF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF50u)) return;
    // 80A6FF50: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A6FF54:
    ctx->pc = 0x80A6FF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF54u)) return;
    // 80A6FF54: addi    r4, r3, -19644
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19644);

label_80A6FF58:
    ctx->pc = 0x80A6FF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A6FF58: lfs     f3, -19668(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF58u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19668);
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
label_80A6FF5C:
    ctx->pc = 0x80A6FF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF5Cu)) return;
    // 80A6FF5C: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A6FF5Cu)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_80A6FF60:
    ctx->pc = 0x80A6FF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF60u)) return;
    // 80A6FF60: lis     r3, -28672
    ctx->gpr[3] = ((u32)(s32)(-28672) << 16);

label_80A6FF64:
    ctx->pc = 0x80A6FF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF64u)) return;
    // 80A6FF64: addi    r3, r3, 732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(732);

label_80A6FF68:
    ctx->pc = 0x80A6FF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A6FF68: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF68u)) return;
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
label_80A6FF6C:
    ctx->pc = 0x80A6FF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FF6C: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A6FF70:
    ctx->pc = 0x80A6FF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A6FF70: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF70u)) return;
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
label_80A6FF74:
    ctx->pc = 0x80A6FF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FF74: lwz     r3, 0(r3)
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
label_80A6FF78:
    ctx->pc = 0x80A6FF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF78u)) return;
    // 80A6FF78: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A6FF78u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A6FF7C:
    ctx->pc = 0x80A6FF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FF7C: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF7Cu)) return;
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
label_80A6FF80:
    ctx->pc = 0x80A6FF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A6FF80: stfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF84:
    ctx->pc = 0x80A6FF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A6FF84: stfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A6FF84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF88:
    ctx->pc = 0x80A6FF88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FF88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A6FF88: lwz     r0, 20(r1)
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
label_80A6FF8C:
    ctx->pc = 0x80A6FF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FF8C: lwz     r31, 12(r1)
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
label_80A6FF90:
    ctx->pc = 0x80A6FF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A6FF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FF90: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FF94:
    ctx->pc = 0x80A6FF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF94u)) return;
    // 80A6FF94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A6FF98:
    ctx->pc = 0x80A6FF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FF98u)) return;
    // 80A6FF98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A6FF9C:
    ctx->pc = 0x80A6FF9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FF9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A6FF9C: stwu     r1, -16(r1)
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
label_80A6FFA0:
    ctx->pc = 0x80A6FFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A6FFA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FFA4:
    ctx->pc = 0x80A6FFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFA4u)) return;
    // 80A6FFA4: lis     r5, -27661
    ctx->gpr[5] = ((u32)(s32)(-27661) << 16);

label_80A6FFA8:
    ctx->pc = 0x80A6FFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A6FFA8: stw     r0, 20(r1)
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
label_80A6FFAC:
    ctx->pc = 0x80A6FFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFACu)) return;
    // 80A6FFAC: addi    r6, r5, -16776
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-16776);

label_80A6FFB0:
    ctx->pc = 0x80A6FFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A6FFB0: stw     r31, 12(r1)
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
label_80A6FFB4:
    ctx->pc = 0x80A6FFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFB4u)) return;
    // 80A6FFB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A6FFB8:
    ctx->pc = 0x80A6FFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A6FFB8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FFBC:
    ctx->pc = 0x80A6FFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFBCu)) return;
    // 80A6FFBC: cmpwi   r5, 1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A6FFC0:
    ctx->pc = 0x80A6FFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFC0u)) return;
    // 80A6FFC0: bc    12, 2, 0x80A6FFE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A6FFE8;
        }
    }

label_80A6FFC4:
    ctx->pc = 0x80A6FFC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FFC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FFC4: bc    4, 0, 0x80A70050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70050;
        }
    }

label_80A6FFC8:
    ctx->pc = 0x80A6FFC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FFC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FFC8: cmpwi   r5, 0
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

label_80A6FFCC:
    ctx->pc = 0x80A6FFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFCCu)) return;
    // 80A6FFCC: bc    4, 0, 0x80A6FFD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A6FFD4;
        }
    }

label_80A6FFD0:
    ctx->pc = 0x80A6FFD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FFD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A6FFD0: b       0x80A70050
    {
            goto label_80A70050;
    }

label_80A6FFD4:
    ctx->pc = 0x80A6FFD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FFD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A6FFD4: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80A6FFD8:
    ctx->pc = 0x80A6FFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFD8u)) return;
    // 80A6FFD8: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FFDC:
    ctx->pc = 0x80A6FFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFDCu)) return;
    // 80A6FFDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A6FFE0:
    ctx->pc = 0x80A6FFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A6FFE0: stw     r0, 0(r6)
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
label_80A6FFE4:
    ctx->pc = 0x80A6FFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A6FFE4: stw     r5, -17116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-17116);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A6FFE8:
    ctx->pc = 0x80A6FFE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FFE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FFE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A6FFEC:
    ctx->pc = 0x80A6FFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFECu)) return;
    // 80A6FFEC: bl      0x80A6EFC0
    {
            ctx->lr = 0x80A6FFF0u;
            ctx->pc = 0x80A6EFC0u;
            return;
    }

label_80A6FFF0:
    ctx->pc = 0x80A6FFF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FFF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A6FFF0: cmpwi   r3, 0
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

label_80A6FFF4:
    ctx->pc = 0x80A6FFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFF4u)) return;
    // 80A6FFF4: bc    12, 2, 0x80A70004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70004;
        }
    }

label_80A6FFF8:
    ctx->pc = 0x80A6FFF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A6FFF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A6FFF8: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A6FFFC:
    ctx->pc = 0x80A6FFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A6FFFCu)) return;
    // 80A6FFFC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A70000:
    ctx->pc = 0x80A70000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A70000: stw     r0, -17116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-17116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70004:
    ctx->pc = 0x80A70004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80A70004: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70008:
    ctx->pc = 0x80A70008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70008u)) return;
    // 80A70008: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A7000C:
    ctx->pc = 0x80A7000Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7000Cu)) return;
    // 80A7000C: addi    r4, r3, -19676
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19676);

label_80A70010:
    ctx->pc = 0x80A70010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A70010: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70010u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70014:
    ctx->pc = 0x80A70014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A70014: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70014u)) return;
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
label_80A70018:
    ctx->pc = 0x80A70018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70018u)) return;
    // 80A70018: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A7001C:
    ctx->pc = 0x80A7001Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7001Cu)) return;
    // 80A7001C: addi    r4, r3, -19644
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19644);

label_80A70020:
    ctx->pc = 0x80A70020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A70020: lfs     f3, -19668(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70020u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19668);
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
label_80A70024:
    ctx->pc = 0x80A70024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70024u)) return;
    // 80A70024: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70024u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_80A70028:
    ctx->pc = 0x80A70028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70028u)) return;
    // 80A70028: lis     r3, -28672
    ctx->gpr[3] = ((u32)(s32)(-28672) << 16);

label_80A7002C:
    ctx->pc = 0x80A7002Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7002Cu)) return;
    // 80A7002C: addi    r3, r3, 732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(732);

label_80A70030:
    ctx->pc = 0x80A70030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70030: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70030u)) return;
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
label_80A70034:
    ctx->pc = 0x80A70034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70034: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70034u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A70038:
    ctx->pc = 0x80A70038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70038: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70038u)) return;
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
label_80A7003C:
    ctx->pc = 0x80A7003Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7003Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A7003C: lwz     r3, 0(r3)
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
label_80A70040:
    ctx->pc = 0x80A70040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70040u)) return;
    // 80A70040: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A70040u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A70044:
    ctx->pc = 0x80A70044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70044: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70044u)) return;
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
label_80A70048:
    ctx->pc = 0x80A70048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70048: stfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70048u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7004C:
    ctx->pc = 0x80A7004Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7004Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A7004C: stfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A7004Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70050:
    ctx->pc = 0x80A70050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70050: lwz     r0, 20(r1)
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
label_80A70054:
    ctx->pc = 0x80A70054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70054: lwz     r31, 12(r1)
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
label_80A70058:
    ctx->pc = 0x80A70058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70058: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7005C:
    ctx->pc = 0x80A7005Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7005Cu)) return;
    // 80A7005C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A70060:
    ctx->pc = 0x80A70060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70060u)) return;
    // 80A70060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70064:
    ctx->pc = 0x80A70064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70064: stwu     r1, -16(r1)
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
label_80A70068:
    ctx->pc = 0x80A70068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A70068: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7006C:
    ctx->pc = 0x80A7006Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7006Cu)) return;
    // 80A7006C: lis     r5, -27661
    ctx->gpr[5] = ((u32)(s32)(-27661) << 16);

label_80A70070:
    ctx->pc = 0x80A70070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70070: stw     r0, 20(r1)
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
label_80A70074:
    ctx->pc = 0x80A70074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70074u)) return;
    // 80A70074: addi    r9, r5, -16776
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(-16776);

label_80A70078:
    ctx->pc = 0x80A70078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70078: stw     r31, 12(r1)
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
label_80A7007C:
    ctx->pc = 0x80A7007Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7007Cu)) return;
    // 80A7007C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A70080:
    ctx->pc = 0x80A70080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70080: lwz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70084:
    ctx->pc = 0x80A70084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70084u)) return;
    // 80A70084: cmpwi   r0, 1
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

label_80A70088:
    ctx->pc = 0x80A70088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70088u)) return;
    // 80A70088: bc    12, 2, 0x80A70120
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70120;
        }
    }

label_80A7008C:
    ctx->pc = 0x80A7008Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7008Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A7008C: bc    4, 0, 0x80A70174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70174;
        }
    }

label_80A70090:
    ctx->pc = 0x80A70090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70090: cmpwi   r0, 0
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

label_80A70094:
    ctx->pc = 0x80A70094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70094u)) return;
    // 80A70094: bc    4, 0, 0x80A7009C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A7009C;
        }
    }

label_80A70098:
    ctx->pc = 0x80A70098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70098: b       0x80A70174
    {
            goto label_80A70174;
    }

label_80A7009C:
    ctx->pc = 0x80A7009Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 33u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7009Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 33u : 1u;
    // 80A7009C: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_80A700A0:
    ctx->pc = 0x80A700A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700A0u)) return;
    // 80A700A0: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A700A4:
    ctx->pc = 0x80A700A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700A4u)) return;
    // 80A700A4: addi    r7, r3, -14944
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80A700A8:
    ctx->pc = 0x80A700A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A700A8: lwz     r6, 0(r7)
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
label_80A700AC:
    ctx->pc = 0x80A700ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700ACu)) return;
    // 80A700AC: addi    r8, r5, -19620
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-19620);

label_80A700B0:
    ctx->pc = 0x80A700B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700B0u)) return;
    // 80A700B0: lis     r3, -28672
    ctx->gpr[3] = ((u32)(s32)(-28672) << 16);

label_80A700B4:
    ctx->pc = 0x80A700B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A700B4: lfs     f1, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x80A700B4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700B8:
    ctx->pc = 0x80A700B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A700B8: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A700B8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
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
label_80A700BC:
    ctx->pc = 0x80A700BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700BCu)) return;
    // 80A700BC: addi    r5, r3, 732
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(732);

label_80A700C0:
    ctx->pc = 0x80A700C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A700C0: lwz     r5, 0(r5)
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
label_80A700C4:
    ctx->pc = 0x80A700C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700C4u)) return;
    // 80A700C4: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A700C8:
    ctx->pc = 0x80A700C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700C8u)) return;
    // 80A700C8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A700C8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A700CC:
    ctx->pc = 0x80A700CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A700CC: lfs     f1, -19604(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A700CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700D0:
    ctx->pc = 0x80A700D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A700D0: stfs     f0, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A700D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700D4:
    ctx->pc = 0x80A700D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A700D4: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700D8:
    ctx->pc = 0x80A700D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A700D8: lfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A700D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_80A700DC:
    ctx->pc = 0x80A700DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700DCu)) return;
    // 80A700DC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A700DCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A700E0:
    ctx->pc = 0x80A700E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A700E0: stfs     f0, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A700E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700E4:
    ctx->pc = 0x80A700E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A700E4: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700E8:
    ctx->pc = 0x80A700E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A700E8: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A700E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80A700EC:
    ctx->pc = 0x80A700ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A700EC: stfs     f0, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A700ECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700F0:
    ctx->pc = 0x80A700F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A700F0: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700F4:
    ctx->pc = 0x80A700F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A700F4: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A700F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80A700F8:
    ctx->pc = 0x80A700F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A700F8: stfs     f0, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A700F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A700FC:
    ctx->pc = 0x80A700FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A700FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A700FC: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70100:
    ctx->pc = 0x80A70100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70100: lfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70100u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_80A70104:
    ctx->pc = 0x80A70104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70104: stfs     f0, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70104u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70108:
    ctx->pc = 0x80A70108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70108: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7010C:
    ctx->pc = 0x80A7010Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7010Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A7010C: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A7010Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80A70110:
    ctx->pc = 0x80A70110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70110: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70110u)) return;
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
label_80A70114:
    ctx->pc = 0x80A70114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70114: lwz     r3, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70118:
    ctx->pc = 0x80A70118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70118u)) return;
    // 80A70118: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80A7011C:
    ctx->pc = 0x80A7011Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7011Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A7011C: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70120:
    ctx->pc = 0x80A70120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70120: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A70124:
    ctx->pc = 0x80A70124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70124u)) return;
    // 80A70124: bl      0x80A6EDC0
    {
            ctx->lr = 0x80A70128u;
            ctx->pc = 0x80A6EDC0u;
            return;
    }

label_80A70128:
    ctx->pc = 0x80A70128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80A70128: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A7012C:
    ctx->pc = 0x80A7012Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7012Cu)) return;
    // 80A7012C: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A70130:
    ctx->pc = 0x80A70130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70130u)) return;
    // 80A70130: addi    r4, r3, -19676
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19676);

label_80A70134:
    ctx->pc = 0x80A70134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A70134: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70134u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70138:
    ctx->pc = 0x80A70138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A70138: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70138u)) return;
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
label_80A7013C:
    ctx->pc = 0x80A7013Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7013Cu)) return;
    // 80A7013C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70140:
    ctx->pc = 0x80A70140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70140u)) return;
    // 80A70140: addi    r4, r3, -19644
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19644);

label_80A70144:
    ctx->pc = 0x80A70144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A70144: lfs     f3, -19668(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70144u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19668);
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
label_80A70148:
    ctx->pc = 0x80A70148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70148u)) return;
    // 80A70148: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70148u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_80A7014C:
    ctx->pc = 0x80A7014Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7014Cu)) return;
    // 80A7014C: lis     r3, -28672
    ctx->gpr[3] = ((u32)(s32)(-28672) << 16);

label_80A70150:
    ctx->pc = 0x80A70150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70150u)) return;
    // 80A70150: addi    r3, r3, 732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(732);

label_80A70154:
    ctx->pc = 0x80A70154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70154: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70154u)) return;
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
label_80A70158:
    ctx->pc = 0x80A70158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70158: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70158u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A7015C:
    ctx->pc = 0x80A7015Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7015Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A7015C: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A7015Cu)) return;
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
label_80A70160:
    ctx->pc = 0x80A70160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70160: lwz     r3, 0(r3)
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
label_80A70164:
    ctx->pc = 0x80A70164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70164u)) return;
    // 80A70164: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A70164u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A70168:
    ctx->pc = 0x80A70168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70168: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70168u)) return;
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
label_80A7016C:
    ctx->pc = 0x80A7016Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7016Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A7016C: stfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A7016Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70170:
    ctx->pc = 0x80A70170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A70170: stfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70170u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70174:
    ctx->pc = 0x80A70174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70174: lwz     r0, 20(r1)
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
label_80A70178:
    ctx->pc = 0x80A70178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70178: lwz     r31, 12(r1)
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
label_80A7017C:
    ctx->pc = 0x80A7017Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A7017Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7017C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70180:
    ctx->pc = 0x80A70180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70180u)) return;
    // 80A70180: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A70184:
    ctx->pc = 0x80A70184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70184u)) return;
    // 80A70184: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70188:
    ctx->pc = 0x80A70188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A70188: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A7018C:
    ctx->pc = 0x80A7018Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7018Cu)) return;
    // 80A7018C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70190:
    ctx->pc = 0x80A70190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70190u)) return;
    // 80A70190: addi    r3, r3, -16824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16824);

label_80A70194:
    ctx->pc = 0x80A70194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70194: stw     r0, 52(r3)
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
label_80A70198:
    ctx->pc = 0x80A70198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70198: stw     r0, 48(r3)
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
label_80A7019C:
    ctx->pc = 0x80A7019Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7019Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7019C: stw     r0, 44(r3)
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
label_80A701A0:
    ctx->pc = 0x80A701A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A701A0: stw     r0, 40(r3)
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
label_80A701A4:
    ctx->pc = 0x80A701A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701A4u)) return;
    // 80A701A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A701A8:
    ctx->pc = 0x80A701A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A701A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A701A8: stwu     r1, -16(r1)
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
label_80A701AC:
    ctx->pc = 0x80A701ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A701AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A701B0:
    ctx->pc = 0x80A701B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701B0u)) return;
    // 80A701B0: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_80A701B4:
    ctx->pc = 0x80A701B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701B4u)) return;
    // 80A701B4: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A701B8:
    ctx->pc = 0x80A701B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A701B8: stw     r0, 20(r1)
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
label_80A701BC:
    ctx->pc = 0x80A701BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701BCu)) return;
    // 80A701BC: lis     r5, -27661
    ctx->gpr[5] = ((u32)(s32)(-27661) << 16);

label_80A701C0:
    ctx->pc = 0x80A701C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701C0u)) return;
    // 80A701C0: lis     r6, -27661
    ctx->gpr[6] = ((u32)(s32)(-27661) << 16);

label_80A701C4:
    ctx->pc = 0x80A701C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A701C4: stw     r31, 12(r1)
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
label_80A701C8:
    ctx->pc = 0x80A701C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701C8u)) return;
    // 80A701C8: addi    r31, r6, -16824
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(-16824);

label_80A701CC:
    ctx->pc = 0x80A701CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A701CC: lwz     r7, -14944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-14944);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A701D0:
    ctx->pc = 0x80A701D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701D0u)) return;
    // 80A701D0: addi    r4, r3, -19592
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19592);

label_80A701D4:
    ctx->pc = 0x80A701D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A701D4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A701D4u)) return;
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
label_80A701D8:
    ctx->pc = 0x80A701D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A701D8: lfs     f1, 36(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A701D8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A701DC:
    ctx->pc = 0x80A701DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701DCu)) return;
    // 80A701DC: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80A701E0:
    ctx->pc = 0x80A701E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A701E0: lwz     r4, -17048(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-17048);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A701E4:
    ctx->pc = 0x80A701E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701E4u)) return;
    // 80A701E4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A701E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A701E8:
    ctx->pc = 0x80A701E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A701E8: lwz     r4, 32(r4)
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
label_80A701EC:
    ctx->pc = 0x80A701ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701ECu)) return;
    // 80A701EC: bc    4, 1, 0x80A70208
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70208;
        }
    }

label_80A701F0:
    ctx->pc = 0x80A701F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A701F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A701F0: lis     r5, -28672
    ctx->gpr[5] = ((u32)(s32)(-28672) << 16);

label_80A701F4:
    ctx->pc = 0x80A701F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A701F4: lbz     r0, 0(r4)
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
label_80A701F8:
    ctx->pc = 0x80A701F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701F8u)) return;
    // 80A701F8: addi    r5, r5, 732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(732);

label_80A701FC:
    ctx->pc = 0x80A701FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A701FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A701FC: lwz     r5, 0(r5)
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
label_80A70200:
    ctx->pc = 0x80A70200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70200: stb     r0, 1(r5)
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
label_80A70204:
    ctx->pc = 0x80A70204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70204u)) return;
    // 80A70204: b       0x80A7021C
    {
            goto label_80A7021C;
    }

label_80A70208:
    ctx->pc = 0x80A70208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A70208: lis     r5, -28672
    ctx->gpr[5] = ((u32)(s32)(-28672) << 16);

label_80A7020C:
    ctx->pc = 0x80A7020Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7020Cu)) return;
    // 80A7020C: li      r0, 11
    ctx->gpr[0] = (u32)(s32)(11);

label_80A70210:
    ctx->pc = 0x80A70210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70210u)) return;
    // 80A70210: addi    r5, r5, 732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(732);

label_80A70214:
    ctx->pc = 0x80A70214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70214: lwz     r5, 0(r5)
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
label_80A70218:
    ctx->pc = 0x80A70218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A70218: stb     r0, 1(r5)
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
label_80A7021C:
    ctx->pc = 0x80A7021Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7021Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A7021C: lis     r5, -28672
    ctx->gpr[5] = ((u32)(s32)(-28672) << 16);

label_80A70220:
    ctx->pc = 0x80A70220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70220: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70224:
    ctx->pc = 0x80A70224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70224: lwz     r7, 732(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(732);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70228:
    ctx->pc = 0x80A70228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70228: lbz     r5, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7022C:
    ctx->pc = 0x80A7022Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7022Cu)) return;
    // 80A7022C: cmpw    r0, r5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70230:
    ctx->pc = 0x80A70230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70230u)) return;
    // 80A70230: bc    12, 2, 0x80A70240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70240;
        }
    }

label_80A70234:
    ctx->pc = 0x80A70234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70234: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70238:
    ctx->pc = 0x80A70238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70238: stw     r5, 52(r31)
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
label_80A7023C:
    ctx->pc = 0x80A7023Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7023Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A7023C: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70240:
    ctx->pc = 0x80A70240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A70240: lfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70240u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
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
label_80A70244:
    ctx->pc = 0x80A70244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70244u)) return;
    // 80A70244: lis     r5, -28672
    ctx->gpr[5] = ((u32)(s32)(-28672) << 16);

label_80A70248:
    ctx->pc = 0x80A70248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70248u)) return;
    // 80A70248: addi    r6, r5, 732
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(732);

label_80A7024C:
    ctx->pc = 0x80A7024Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7024Cu)) return;
    // 80A7024C: lis     r5, -27662
    ctx->gpr[5] = ((u32)(s32)(-27662) << 16);

label_80A70250:
    ctx->pc = 0x80A70250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A70250: stfs     f0, 12(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A70250u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70254:
    ctx->pc = 0x80A70254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70254u)) return;
    // 80A70254: addi    r5, r5, 8672
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8672);

label_80A70258:
    ctx->pc = 0x80A70258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A70258: lwz     r6, 0(r6)
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
label_80A7025C:
    ctx->pc = 0x80A7025Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7025Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A7025C: lfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A7025Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
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
label_80A70260:
    ctx->pc = 0x80A70260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A70260: stfs     f0, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A70260u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70264:
    ctx->pc = 0x80A70264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A70264: lfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70264u)) return;
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
label_80A70268:
    ctx->pc = 0x80A70268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A70268: stfs     f0, 20(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A70268u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7026C:
    ctx->pc = 0x80A7026Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7026Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A7026C: lfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A7026Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80A70270:
    ctx->pc = 0x80A70270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70270: stfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A70270u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70274:
    ctx->pc = 0x80A70274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A70274: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70274u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80A70278:
    ctx->pc = 0x80A70278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70278: stfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A70278u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7027C:
    ctx->pc = 0x80A7027Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7027Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A7027C: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A7027Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
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
label_80A70280:
    ctx->pc = 0x80A70280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70280: stfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A70280u)) return;
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
label_80A70284:
    ctx->pc = 0x80A70284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70284: lbz     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70288:
    ctx->pc = 0x80A70288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70288u)) return;
    // 80A70288: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80A7028C:
    ctx->pc = 0x80A7028Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7028Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7028C: lwzx    r12, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70290:
    ctx->pc = 0x80A70290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70290u)) return;
    // 80A70290: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70294:
    ctx->pc = 0x80A70294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70294u)) return;
    // 80A70294: bc    12, 2, 0x80A702A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A702A0;
        }
    }

label_80A70298:
    ctx->pc = 0x80A70298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70298: mtctr    r12
    ctx->ctr = ctx->gpr[12];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7029C:
    ctx->pc = 0x80A7029Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7029Cu)) return;
    // 80A7029C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80A702A0u;
            ctx->pc = target;
            return;
        }
    }

label_80A702A0:
    ctx->pc = 0x80A702A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A702A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80A702A0: lis     r3, -28672
    ctx->gpr[3] = ((u32)(s32)(-28672) << 16);

label_80A702A4:
    ctx->pc = 0x80A702A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A702A4: lwz     r0, 44(r31)
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
label_80A702A8:
    ctx->pc = 0x80A702A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A702A8: lwz     r5, 732(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(732);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A702AC:
    ctx->pc = 0x80A702ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702ACu)) return;
    // 80A702AC: cmpwi   r0, 1
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

label_80A702B0:
    ctx->pc = 0x80A702B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A702B0: lfs     f0, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A702B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
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
label_80A702B4:
    ctx->pc = 0x80A702B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A702B4: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A702B4u)) return;
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
label_80A702B8:
    ctx->pc = 0x80A702B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A702B8: lfs     f0, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A702B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
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
label_80A702BC:
    ctx->pc = 0x80A702BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A702BC: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A702BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A702C0:
    ctx->pc = 0x80A702C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A702C0: lfs     f0, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A702C0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
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
label_80A702C4:
    ctx->pc = 0x80A702C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A702C4: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A702C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A702C8:
    ctx->pc = 0x80A702C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A702C8: lfs     f0, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A702C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
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
label_80A702CC:
    ctx->pc = 0x80A702CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A702CC: stfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A702CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A702D0:
    ctx->pc = 0x80A702D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A702D0: lfs     f0, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A702D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
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
label_80A702D4:
    ctx->pc = 0x80A702D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A702D4: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A702D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A702D8:
    ctx->pc = 0x80A702D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A702D8: lfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A702D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
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
label_80A702DC:
    ctx->pc = 0x80A702DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A702DC: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A702DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A702E0:
    ctx->pc = 0x80A702E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702E0u)) return;
    // 80A702E0: bc    12, 2, 0x80A70318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70318;
        }
    }

label_80A702E4:
    ctx->pc = 0x80A702E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A702E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A702E4: bc    4, 0, 0x80A7037C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A7037C;
        }
    }

label_80A702E8:
    ctx->pc = 0x80A702E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A702E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A702E8: cmpwi   r0, 0
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

label_80A702EC:
    ctx->pc = 0x80A702ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702ECu)) return;
    // 80A702EC: bc    4, 0, 0x80A702F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A702F4;
        }
    }

label_80A702F0:
    ctx->pc = 0x80A702F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A702F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A702F0: b       0x80A7037C
    {
            goto label_80A7037C;
    }

label_80A702F4:
    ctx->pc = 0x80A702F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A702F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A702F4: lwz     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A702F8:
    ctx->pc = 0x80A702F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702F8u)) return;
    // 80A702F8: cmpwi   r0, 0
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

label_80A702FC:
    ctx->pc = 0x80A702FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A702FCu)) return;
    // 80A702FC: bc    12, 2, 0x80A7037C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A7037C;
        }
    }

label_80A70300:
    ctx->pc = 0x80A70300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A70300: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A70304:
    ctx->pc = 0x80A70304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70304u)) return;
    // 80A70304: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A70308:
    ctx->pc = 0x80A70308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70308: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7030C:
    ctx->pc = 0x80A7030Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7030Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7030C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70310:
    ctx->pc = 0x80A70310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70310: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70314:
    ctx->pc = 0x80A70314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70314u)) return;
    // 80A70314: b       0x80A7037C
    {
            goto label_80A7037C;
    }

label_80A70318:
    ctx->pc = 0x80A70318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A70318: lwz     r0, 0(r31)
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
label_80A7031C:
    ctx->pc = 0x80A7031Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7031Cu)) return;
    // 80A7031C: lis     r4, -27662
    ctx->gpr[4] = ((u32)(s32)(-27662) << 16);

label_80A70320:
    ctx->pc = 0x80A70320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70320u)) return;
    // 80A70320: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70324:
    ctx->pc = 0x80A70324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A70324: lfs     f2, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70324u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
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
label_80A70328:
    ctx->pc = 0x80A70328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70328u)) return;
    // 80A70328: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80A7032C:
    ctx->pc = 0x80A7032Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7032Cu)) return;
    // 80A7032C: addi    r4, r4, 8884
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8884);

label_80A70330:
    ctx->pc = 0x80A70330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70330: lfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x80A70330u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
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
label_80A70334:
    ctx->pc = 0x80A70334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A70334: lfs     f1, -19744(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70334u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19744);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70338:
    ctx->pc = 0x80A70338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70338u)) return;
    // 80A70338: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70338u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80A7033C:
    ctx->pc = 0x80A7033Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7033Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A7033C: stfs     f0, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A7033Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70340:
    ctx->pc = 0x80A70340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A70340: lwz     r0, 0(r31)
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
label_80A70344:
    ctx->pc = 0x80A70344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A70344: lfs     f2, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70344u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
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
label_80A70348:
    ctx->pc = 0x80A70348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70348u)) return;
    // 80A70348: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80A7034C:
    ctx->pc = 0x80A7034Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7034Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A7034C: lfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x80A7034Cu)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
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
label_80A70350:
    ctx->pc = 0x80A70350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70350u)) return;
    // 80A70350: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70350u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80A70354:
    ctx->pc = 0x80A70354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70354: stfs     f0, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70354u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70358:
    ctx->pc = 0x80A70358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70358: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7035C:
    ctx->pc = 0x80A7035Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7035Cu)) return;
    // 80A7035C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80A70360:
    ctx->pc = 0x80A70360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70360u)) return;
    // 80A70360: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80A70364:
    ctx->pc = 0x80A70364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70364: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70368:
    ctx->pc = 0x80A70368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70368: lfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x80A70368u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
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
label_80A7036C:
    ctx->pc = 0x80A7036Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7036Cu)) return;
    // 80A7036C: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A7036Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_80A70370:
    ctx->pc = 0x80A70370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70370u)) return;
    // 80A70370: bc    4, 2, 0x80A7037C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A7037C;
        }
    }

label_80A70374:
    ctx->pc = 0x80A70374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70374: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70378:
    ctx->pc = 0x80A70378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A70378: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7037C:
    ctx->pc = 0x80A7037Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7037Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A7037C: lwz     r0, 20(r1)
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
label_80A70380:
    ctx->pc = 0x80A70380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70380: lwz     r31, 12(r1)
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
label_80A70384:
    ctx->pc = 0x80A70384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70384: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70388:
    ctx->pc = 0x80A70388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70388u)) return;
    // 80A70388: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A7038C:
    ctx->pc = 0x80A7038Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7038Cu)) return;
    // 80A7038C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70390:
    ctx->pc = 0x80A70390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A70390: stwu     r1, -32(r1)
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
label_80A70394:
    ctx->pc = 0x80A70394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A70394: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70398:
    ctx->pc = 0x80A70398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70398u)) return;
    // 80A70398: lis     r4, -27662
    ctx->gpr[4] = ((u32)(s32)(-27662) << 16);

label_80A7039C:
    ctx->pc = 0x80A7039Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7039Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A7039C: stw     r0, 36(r1)
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
label_80A703A0:
    ctx->pc = 0x80A703A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A703A0: stw     r31, 28(r1)
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
label_80A703A4:
    ctx->pc = 0x80A703A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703A4u)) return;
    // 80A703A4: addi    r31, r4, 8992
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(8992);

label_80A703A8:
    ctx->pc = 0x80A703A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A703A8: stw     r30, 24(r1)
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
label_80A703AC:
    ctx->pc = 0x80A703ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A703AC: stw     r29, 20(r1)
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
label_80A703B0:
    ctx->pc = 0x80A703B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A703B0: lwz     r30, 32(r3)
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
label_80A703B4:
    ctx->pc = 0x80A703B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A703B4: lbz     r0, 0(r30)
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
label_80A703B8:
    ctx->pc = 0x80A703B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703B8u)) return;
    // 80A703B8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80A703BC:
    ctx->pc = 0x80A703BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703BCu)) return;
    // 80A703BC: cmpwi   r0, 1
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

label_80A703C0:
    ctx->pc = 0x80A703C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703C0u)) return;
    // 80A703C0: bc    12, 2, 0x80A7048C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A7048C;
        }
    }

label_80A703C4:
    ctx->pc = 0x80A703C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A703C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A703C4: bc    4, 0, 0x80A703D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A703D4;
        }
    }

label_80A703C8:
    ctx->pc = 0x80A703C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A703C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A703C8: cmpwi   r0, 0
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

label_80A703CC:
    ctx->pc = 0x80A703CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703CCu)) return;
    // 80A703CC: bc    4, 0, 0x80A703E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A703E0;
        }
    }

label_80A703D0:
    ctx->pc = 0x80A703D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A703D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A703D0: b       0x80A70488
    {
            goto label_80A70488;
    }

label_80A703D4:
    ctx->pc = 0x80A703D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A703D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A703D4: cmpwi   r0, 3
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

label_80A703D8:
    ctx->pc = 0x80A703D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703D8u)) return;
    // 80A703D8: bc    4, 0, 0x80A70488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70488;
        }
    }

label_80A703DC:
    ctx->pc = 0x80A703DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A703DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A703DC: b       0x80A7047C
    {
            goto label_80A7047C;
    }

label_80A703E0:
    ctx->pc = 0x80A703E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A703E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80A703E0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A703E4:
    ctx->pc = 0x80A703E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703E4u)) return;
    // 80A703E4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A703E8:
    ctx->pc = 0x80A703E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703E8u)) return;
    // 80A703E8: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_80A703EC:
    ctx->pc = 0x80A703ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703ECu)) return;
    // 80A703EC: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80A703F0:
    ctx->pc = 0x80A703F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A703F0: lha     r4, 0(r4)
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
label_80A703F4:
    ctx->pc = 0x80A703F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A703F4: lha     r0, -5404(r3)
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
label_80A703F8:
    ctx->pc = 0x80A703F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703F8u)) return;
    // 80A703F8: addi    r3, r5, -25468
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-25468);

label_80A703FC:
    ctx->pc = 0x80A703FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A703FCu)) return;
    // 80A703FC: rlwinm r5, r4, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80A70400:
    ctx->pc = 0x80A70400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70400u)) return;
    // 80A70400: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_80A70404:
    ctx->pc = 0x80A70404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70404u)) return;
    // 80A70404: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80A70408:
    ctx->pc = 0x80A70408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70408u)) return;
    // 80A70408: rlwinm r29, r0, 2, 22, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_80A7040C:
    ctx->pc = 0x80A7040Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7040Cu)) return;
    // 80A7040C: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_80A70410:
    ctx->pc = 0x80A70410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70410: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70414:
    ctx->pc = 0x80A70414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70414u)) return;
    // 80A70414: bl      0x800031E8
    {
            ctx->lr = 0x80A70418u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A70418:
    ctx->pc = 0x80A70418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A70418: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_80A7041C:
    ctx->pc = 0x80A7041Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7041Cu)) return;
    // 80A7041C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A70420:
    ctx->pc = 0x80A70420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70420: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70424:
    ctx->pc = 0x80A70424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70424u)) return;
    // 80A70424: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_80A70428:
    ctx->pc = 0x80A70428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70428u)) return;
    // 80A70428: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A7042C:
    ctx->pc = 0x80A7042Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7042Cu)) return;
    // 80A7042C: bl      0x800031E8
    {
            ctx->lr = 0x80A70430u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A70430:
    ctx->pc = 0x80A70430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A70430: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_80A70434:
    ctx->pc = 0x80A70434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70434u)) return;
    // 80A70434: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A70438:
    ctx->pc = 0x80A70438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70438: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7043C:
    ctx->pc = 0x80A7043Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7043Cu)) return;
    // 80A7043C: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_80A70440:
    ctx->pc = 0x80A70440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70440u)) return;
    // 80A70440: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A70444:
    ctx->pc = 0x80A70444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70444u)) return;
    // 80A70444: bl      0x800031E8
    {
            ctx->lr = 0x80A70448u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A70448:
    ctx->pc = 0x80A70448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A70448: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_80A7044C:
    ctx->pc = 0x80A7044Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7044Cu)) return;
    // 80A7044C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A70450:
    ctx->pc = 0x80A70450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70450: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70454:
    ctx->pc = 0x80A70454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70454u)) return;
    // 80A70454: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_80A70458:
    ctx->pc = 0x80A70458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70458u)) return;
    // 80A70458: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80A7045C:
    ctx->pc = 0x80A7045Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7045Cu)) return;
    // 80A7045C: bl      0x800031E8
    {
            ctx->lr = 0x80A70460u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A70460:
    ctx->pc = 0x80A70460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70460: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80A70464:
    ctx->pc = 0x80A70464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70464u)) return;
    // 80A70464: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80A70468:
    ctx->pc = 0x80A70468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70468u)) return;
    // 80A70468: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80A7046C:
    ctx->pc = 0x80A7046Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7046Cu)) return;
    // 80A7046C: bl      0x8060F71C
    {
            ctx->lr = 0x80A70470u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80A70470:
    ctx->pc = 0x80A70470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70470: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A70474:
    ctx->pc = 0x80A70474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70474: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70478:
    ctx->pc = 0x80A70478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70478u)) return;
    // 80A70478: b       0x80A7048C
    {
            goto label_80A7048C;
    }

label_80A7047C:
    ctx->pc = 0x80A7047Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7047Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A7047C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70480:
    ctx->pc = 0x80A70480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70480: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70484:
    ctx->pc = 0x80A70484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70484u)) return;
    // 80A70484: b       0x80A7048C
    {
            goto label_80A7048C;
    }

label_80A70488:
    ctx->pc = 0x80A70488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70488: bl      0x8050ED40
    {
            ctx->lr = 0x80A7048Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A7048C:
    ctx->pc = 0x80A7048Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7048Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A7048C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A70490:
    ctx->pc = 0x80A70490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70490: lfsu     f1, -25492(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70490u)) return;
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
label_80A70494:
    ctx->pc = 0x80A70494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70494: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70494u)) return;
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
label_80A70498:
    ctx->pc = 0x80A70498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70498u)) return;
    // 80A70498: bl      0x8060F438
    {
            ctx->lr = 0x80A7049Cu;
            ctx->pc = 0x8060F438u;
            return;
    }

label_80A7049C:
    ctx->pc = 0x80A7049Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7049Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A7049C: lwz     r0, 36(r1)
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
label_80A704A0:
    ctx->pc = 0x80A704A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A704A0: lwz     r31, 28(r1)
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
label_80A704A4:
    ctx->pc = 0x80A704A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A704A4: lwz     r30, 24(r1)
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
label_80A704A8:
    ctx->pc = 0x80A704A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A704A8: lwz     r29, 20(r1)
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
label_80A704AC:
    ctx->pc = 0x80A704ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A704ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A704AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A704B0:
    ctx->pc = 0x80A704B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704B0u)) return;
    // 80A704B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A704B4:
    ctx->pc = 0x80A704B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704B4u)) return;
    // 80A704B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A704B8:
    ctx->pc = 0x80A704B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 28u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A704B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 28u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A704B8: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A704BC:
    ctx->pc = 0x80A704BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A704BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A704C0:
    ctx->pc = 0x80A704C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704C0u)) return;
    // 80A704C0: lis     r4, -27662
    ctx->gpr[4] = ((u32)(s32)(-27662) << 16);

label_80A704C4:
    ctx->pc = 0x80A704C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704C4u)) return;
    // 80A704C4: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A704C8:
    ctx->pc = 0x80A704C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A704C8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A704CC:
    ctx->pc = 0x80A704CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704CCu)) return;
    // 80A704CC: addi    r6, r4, 8992
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8992);

label_80A704D0:
    ctx->pc = 0x80A704D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704D0u)) return;
    // 80A704D0: lis     r5, -27665
    ctx->gpr[5] = ((u32)(s32)(-27665) << 16);

label_80A704D4:
    ctx->pc = 0x80A704D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704D4u)) return;
    // 80A704D4: lis     r4, -27665
    ctx->gpr[4] = ((u32)(s32)(-27665) << 16);

label_80A704D8:
    ctx->pc = 0x80A704D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80A704D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A704D8: stmw     r14, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A704DC:
    ctx->pc = 0x80A704DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704DCu)) return;
    // 80A704DC: addi    r24, r3, -16760
    ctx->gpr[24] = ctx->gpr[3] + (u32)(s32)(-16760);

label_80A704E0:
    ctx->pc = 0x80A704E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704E0u)) return;
    // 80A704E0: lis     r3, -32601
    ctx->gpr[3] = ((u32)(s32)(-32601) << 16);

label_80A704E4:
    ctx->pc = 0x80A704E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704E4u)) return;
    // 80A704E4: addi    r23, r6, 68
    ctx->gpr[23] = ctx->gpr[6] + (u32)(s32)(68);

label_80A704E8:
    ctx->pc = 0x80A704E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704E8u)) return;
    // 80A704E8: addi    r22, r6, 276
    ctx->gpr[22] = ctx->gpr[6] + (u32)(s32)(276);

label_80A704EC:
    ctx->pc = 0x80A704ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704ECu)) return;
    // 80A704EC: addi    r21, r6, 260
    ctx->gpr[21] = ctx->gpr[6] + (u32)(s32)(260);

label_80A704F0:
    ctx->pc = 0x80A704F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704F0u)) return;
    // 80A704F0: addi    r29, r5, -25332
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(-25332);

label_80A704F4:
    ctx->pc = 0x80A704F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704F4u)) return;
    // 80A704F4: addi    r30, r4, -25316
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-25316);

label_80A704F8:
    ctx->pc = 0x80A704F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704F8u)) return;
    // 80A704F8: addi    r31, r3, 6544
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(6544);

label_80A704FC:
    ctx->pc = 0x80A704FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A704FCu)) return;
    // 80A704FC: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_80A70500:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A70500: or   r28, r24, r24
    {
        ctx->gpr[28] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80A70504:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70504u)) return;
    // 80A70504: or   r27, r23, r23
    {
        ctx->gpr[27] = ctx->gpr[23] | ctx->gpr[23];
    }

label_80A70508:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70508u)) return;
    // 80A70508: or   r26, r22, r22
    {
        ctx->gpr[26] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80A7050C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7050Cu)) return;
    // 80A7050C: or   r25, r21, r21
    {
        ctx->gpr[25] = ctx->gpr[21] | ctx->gpr[21];
    }

label_80A70510:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70510u)) return;
    // 80A70510: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_80A70514:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70514: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A70518:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70518u)) return;
    // 80A70518: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A7051C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7051Cu)) return;
    // 80A7051C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A70520:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70520u)) return;
    // 80A70520: bl      0x8050FD60
    {
            ctx->lr = 0x80A70524u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A70524:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80A70524: or   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A70528:
    ctx->pc = 0x80A70528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A70528: lfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x80A70528u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
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
label_80A7052C:
    ctx->pc = 0x80A7052Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7052Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A7052C: stw     r17, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70530:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70530u)) return;
    // 80A70530: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A70534:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70534u)) return;
    // 80A70534: li      r4, 28
    ctx->gpr[4] = (u32)(s32)(28);

label_80A70538:
    ctx->pc = 0x80A70538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A70538: lwz     r5, 32(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7053C:
    ctx->pc = 0x80A7053Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7053Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A7053C: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A7053Cu)) return;
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
label_80A70540:
    ctx->pc = 0x80A70540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70540: lfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x80A70540u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
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
label_80A70544:
    ctx->pc = 0x80A70544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A70544: lwz     r5, 32(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70548:
    ctx->pc = 0x80A70548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70548: stfs     f0, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70548u)) return;
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
label_80A7054C:
    ctx->pc = 0x80A7054Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7054Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A7054C: lfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x80A7054Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
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
label_80A70550:
    ctx->pc = 0x80A70550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70550: lwz     r5, 32(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70554:
    ctx->pc = 0x80A70554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70554: stfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70554u)) return;
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
label_80A70558:
    ctx->pc = 0x80A70558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70558: lwz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7055C:
    ctx->pc = 0x80A7055Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7055Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7055C: lwz     r5, 32(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70560:
    ctx->pc = 0x80A70560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70560: stw     r0, 24(r5)
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
label_80A70564:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70564u)) return;
    // 80A70564: bl      0x8050EEC0
    {
            ctx->lr = 0x80A70568u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A70568:
    ctx->pc = 0x80A70568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70568: stw     r3, 40(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7056C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7056Cu)) return;
    // 80A7056C: li      r3, 36
    ctx->gpr[3] = (u32)(s32)(36);

label_80A70570:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70570u)) return;
    // 80A70570: bl      0x8050EF60
    {
            ctx->lr = 0x80A70574u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80A70574:
    ctx->pc = 0x80A70574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70574: stw     r3, 44(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70578:
    ctx->pc = 0x80A70578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70578: lbz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7057C:
    ctx->pc = 0x80A7057Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7057Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7057C: lwz     r18, 44(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(44);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70580:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70580u)) return;
    // 80A70580: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A70584:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70584u)) return;
    // 80A70584: bc    4, 2, 0x80A70640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70640;
        }
    }

label_80A70588:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80A70588: lis     r4, -27665
    ctx->gpr[4] = ((u32)(s32)(-27665) << 16);

label_80A7058C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7058Cu)) return;
    // 80A7058C: lis     r3, -27665
    ctx->gpr[3] = ((u32)(s32)(-27665) << 16);

label_80A70590:
    ctx->pc = 0x80A70590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70590: lwz     r0, -25332(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25332);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70594:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70594u)) return;
    // 80A70594: addi    r3, r3, -25316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25316);

label_80A70598:
    ctx->pc = 0x80A70598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70598: stw     r0, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7059C:
    ctx->pc = 0x80A7059Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7059Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A7059C: lwz     r3, 0(r3)
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
label_80A705A0:
    ctx->pc = 0x80A705A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A705A0: lwz     r16, 32(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(32);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A705A4:
    ctx->pc = 0x80A705A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A705A4: lwz     r15, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A705A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705A8u)) return;
    // 80A705A8: bl      0x8047EA80
    {
            ctx->lr = 0x80A705ACu;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80A705AC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A705ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A705AC: or.   r14, r3, r3
    {
        ctx->gpr[14] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[14];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A705B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705B0u)) return;
    // 80A705B0: bc    12, 2, 0x80A7062C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A7062C;
        }
    }

label_80A705B4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A705B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    // 80A705B4: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A705B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705B8u)) return;
    // 80A705B8: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_80A705BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705BCu)) return;
    // 80A705BC: addi    r4, r3, -19584
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19584);

label_80A705C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705C0u)) return;
    // 80A705C0: lis     r3, 10240
    ctx->gpr[3] = ((u32)(s32)(10240) << 16);

label_80A705C4:
    ctx->pc = 0x80A705C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A705C4: stw     r0, 0(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A705C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705C8u)) return;
    // 80A705C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A705CC:
    ctx->pc = 0x80A705CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A705CC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A705CCu)) return;
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
label_80A705D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705D0u)) return;
    // 80A705D0: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_80A705D4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705D4u)) return;
    // 80A705D4: or   r5, r14, r14
    {
        ctx->gpr[5] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80A705D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705D8u)) return;
    // 80A705D8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80A705DC:
    ctx->pc = 0x80A705DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A705DC: stfs     f0, 32(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A705DCu)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A705E0:
    ctx->pc = 0x80A705E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A705E0: stfs     f0, 36(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A705E0u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A705E4:
    ctx->pc = 0x80A705E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A705E4: stfs     f0, 40(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A705E4u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A705E8:
    ctx->pc = 0x80A705E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A705E8: lfs     f0, 32(r16)
    if (!ppc_fp_available_inline(ctx, 0x80A705E8u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(32);
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
label_80A705EC:
    ctx->pc = 0x80A705ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A705EC: stfs     f0, 8(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A705ECu)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A705F0:
    ctx->pc = 0x80A705F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A705F0: lfs     f0, 36(r16)
    if (!ppc_fp_available_inline(ctx, 0x80A705F0u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(36);
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
label_80A705F4:
    ctx->pc = 0x80A705F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A705F4: stfs     f0, 12(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A705F4u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A705F8:
    ctx->pc = 0x80A705F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A705F8: lfs     f0, 40(r16)
    if (!ppc_fp_available_inline(ctx, 0x80A705F8u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(40);
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
label_80A705FC:
    ctx->pc = 0x80A705FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A705FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A705FC: stfs     f0, 16(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A705FCu)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70600:
    ctx->pc = 0x80A70600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70600: lwz     r6, 20(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70604:
    ctx->pc = 0x80A70604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A70604: stw     r6, 20(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70608:
    ctx->pc = 0x80A70608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70608: lwz     r6, 24(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7060C:
    ctx->pc = 0x80A7060Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7060Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A7060C: stw     r6, 24(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70610:
    ctx->pc = 0x80A70610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70610: lwz     r6, 28(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70614:
    ctx->pc = 0x80A70614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70614: stw     r6, 28(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70618:
    ctx->pc = 0x80A70618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70618: stw     r15, 4(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7061C:
    ctx->pc = 0x80A7061Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7061Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7061C: stw     r0, 44(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70620:
    ctx->pc = 0x80A70620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70620: stw     r0, 48(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70624:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70624u)) return;
    // 80A70624: bl      0x8047EBFC
    {
            ctx->lr = 0x80A70628u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80A70628:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70628: b       0x80A70630
    {
            goto label_80A70630;
    }

label_80A7062C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7062Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A7062C: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_80A70630:
    ctx->pc = 0x80A70630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70630: stw     r14, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70634:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70634u)) return;
    // 80A70634: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70638:
    ctx->pc = 0x80A70638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70638: stw     r0, 32(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7063C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7063Cu)) return;
    // 80A7063C: b       0x80A706E8
    {
            goto label_80A706E8;
    }

label_80A70640:
    ctx->pc = 0x80A70640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70640: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70644:
    ctx->pc = 0x80A70644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70644: stw     r0, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70648:
    ctx->pc = 0x80A70648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70648: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7064C:
    ctx->pc = 0x80A7064Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7064Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7064C: lwz     r15, 32(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(32);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70650:
    ctx->pc = 0x80A70650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70650: lwz     r16, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70654:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70654u)) return;
    // 80A70654: bl      0x8047EA80
    {
            ctx->lr = 0x80A70658u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80A70658:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70658: or.   r14, r3, r3
    {
        ctx->gpr[14] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[14];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A7065C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7065Cu)) return;
    // 80A7065C: bc    12, 2, 0x80A706D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A706D8;
        }
    }

label_80A70660:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    // 80A70660: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70664:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70664u)) return;
    // 80A70664: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_80A70668:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70668u)) return;
    // 80A70668: addi    r4, r3, -19584
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19584);

label_80A7066C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7066Cu)) return;
    // 80A7066C: lis     r3, 10240
    ctx->gpr[3] = ((u32)(s32)(10240) << 16);

label_80A70670:
    ctx->pc = 0x80A70670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A70670: stw     r0, 0(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70674:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70674u)) return;
    // 80A70674: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70678:
    ctx->pc = 0x80A70678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A70678: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70678u)) return;
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
label_80A7067C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7067Cu)) return;
    // 80A7067C: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_80A70680:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70680u)) return;
    // 80A70680: or   r5, r14, r14
    {
        ctx->gpr[5] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80A70684:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70684u)) return;
    // 80A70684: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80A70688:
    ctx->pc = 0x80A70688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A70688: stfs     f0, 32(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A70688u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7068C:
    ctx->pc = 0x80A7068Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7068Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A7068C: stfs     f0, 36(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A7068Cu)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70690:
    ctx->pc = 0x80A70690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70690: stfs     f0, 40(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A70690u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70694:
    ctx->pc = 0x80A70694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A70694: lfs     f0, 32(r15)
    if (!ppc_fp_available_inline(ctx, 0x80A70694u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(32);
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
label_80A70698:
    ctx->pc = 0x80A70698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A70698: stfs     f0, 8(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A70698u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7069C:
    ctx->pc = 0x80A7069Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7069Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A7069C: lfs     f0, 36(r15)
    if (!ppc_fp_available_inline(ctx, 0x80A7069Cu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(36);
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
label_80A706A0:
    ctx->pc = 0x80A706A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A706A0: stfs     f0, 12(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A706A0u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706A4:
    ctx->pc = 0x80A706A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A706A4: lfs     f0, 40(r15)
    if (!ppc_fp_available_inline(ctx, 0x80A706A4u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(40);
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
label_80A706A8:
    ctx->pc = 0x80A706A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A706A8: stfs     f0, 16(r14)
    if (!ppc_fp_available_inline(ctx, 0x80A706A8u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706AC:
    ctx->pc = 0x80A706ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A706AC: lwz     r6, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706B0:
    ctx->pc = 0x80A706B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A706B0: stw     r6, 20(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706B4:
    ctx->pc = 0x80A706B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A706B4: lwz     r6, 24(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706B8:
    ctx->pc = 0x80A706B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A706B8: stw     r6, 24(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706BC:
    ctx->pc = 0x80A706BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A706BC: lwz     r6, 28(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706C0:
    ctx->pc = 0x80A706C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A706C0: stw     r6, 28(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706C4:
    ctx->pc = 0x80A706C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A706C4: stw     r16, 4(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706C8:
    ctx->pc = 0x80A706C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A706C8: stw     r0, 44(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706CC:
    ctx->pc = 0x80A706CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A706CC: stw     r0, 48(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706D0u)) return;
    // 80A706D0: bl      0x8047EBFC
    {
            ctx->lr = 0x80A706D4u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80A706D4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A706D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A706D4: b       0x80A706DC
    {
            goto label_80A706DC;
    }

label_80A706D8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A706D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A706D8: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_80A706DC:
    ctx->pc = 0x80A706DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A706DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A706DC: stw     r14, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706E0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706E0u)) return;
    // 80A706E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A706E4:
    ctx->pc = 0x80A706E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A706E4: stw     r0, 32(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A706E8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A706E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A706E8: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_80A706EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706ECu)) return;
    // 80A706EC: addi    r27, r27, 12
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(12);

label_80A706F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706F0u)) return;
    // 80A706F0: cmpwi   r19, 8
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A706F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706F4u)) return;
    // 80A706F4: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_80A706F8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706F8u)) return;
    // 80A706F8: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_80A706FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A706FCu)) return;
    // 80A706FC: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_80A70700:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70700u)) return;
    // 80A70700: bc    12, 0, 0x80A70514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A70514u;
                return;
            }
            goto label_80A70514;
        }
    }

label_80A70704:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A70704: addi    r20, r20, 1
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(1);

label_80A70708:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70708u)) return;
    // 80A70708: addi    r23, r23, 96
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(96);

label_80A7070C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7070Cu)) return;
    // 80A7070C: cmpwi   r20, 2
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70710:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70710u)) return;
    // 80A70710: addi    r22, r22, 32
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(32);

label_80A70714:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70714u)) return;
    // 80A70714: addi    r21, r21, 8
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(8);

label_80A70718:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70718u)) return;
    // 80A70718: addi    r24, r24, 32
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(32);

label_80A7071C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7071Cu)) return;
    // 80A7071C: bc    12, 0, 0x80A70500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A70500u;
                return;
            }
            goto label_80A70500;
        }
    }

label_80A70720:
    ctx->pc = 0x80A70720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    // 80A70720: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A70724:
    ctx->pc = 0x80A70724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70724u)) return;
    // 80A70724: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A70728:
    ctx->pc = 0x80A70728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A70728: stbu     r0, -16696(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-16696);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[3] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7072C:
    ctx->pc = 0x80A7072Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7072Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A7072C: stb     r0, 1(r3)
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
label_80A70730:
    ctx->pc = 0x80A70730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A70730: stb     r0, 2(r3)
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
label_80A70734:
    ctx->pc = 0x80A70734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A70734: stb     r0, 3(r3)
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
label_80A70738:
    ctx->pc = 0x80A70738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A70738: stb     r0, 4(r3)
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
label_80A7073C:
    ctx->pc = 0x80A7073Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7073Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A7073C: stb     r0, 5(r3)
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
label_80A70740:
    ctx->pc = 0x80A70740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A70740: stb     r0, 6(r3)
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
label_80A70744:
    ctx->pc = 0x80A70744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A70744: stb     r0, 7(r3)
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
label_80A70748:
    ctx->pc = 0x80A70748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A70748: stb     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7074C:
    ctx->pc = 0x80A7074Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7074Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A7074C: stb     r0, 9(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70750:
    ctx->pc = 0x80A70750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A70750: stb     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70754:
    ctx->pc = 0x80A70754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A70754: stb     r0, 11(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70758:
    ctx->pc = 0x80A70758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A70758: stb     r0, 12(r3)
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
label_80A7075C:
    ctx->pc = 0x80A7075Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7075Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A7075C: stb     r0, 13(r3)
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
label_80A70760:
    ctx->pc = 0x80A70760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A70760: stb     r0, 14(r3)
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
label_80A70764:
    ctx->pc = 0x80A70764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70764: stb     r0, 15(r3)
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
label_80A70768:
    ctx->pc = 0x80A70768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80A70768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70768: lmw     r14, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7076C:
    ctx->pc = 0x80A7076Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7076Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A7076C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70770:
    ctx->pc = 0x80A70770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70770: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70774:
    ctx->pc = 0x80A70774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70774u)) return;
    // 80A70774: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80A70778:
    ctx->pc = 0x80A70778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70778u)) return;
    // 80A70778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A7077C:
    ctx->pc = 0x80A7077Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7077Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A7077C: stwu     r1, -16(r1)
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
label_80A70780:
    ctx->pc = 0x80A70780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70780: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70784:
    ctx->pc = 0x80A70784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70784: stw     r0, 20(r1)
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
label_80A70788:
    ctx->pc = 0x80A70788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70788u)) return;
    // 80A70788: bl      0x804060B0
    {
            ctx->lr = 0x80A7078Cu;
            ctx->pc = 0x804060B0u;
            return;
    }

label_80A7078C:
    ctx->pc = 0x80A7078Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7078Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A7078C: bl      0x8046C8C4
    {
            ctx->lr = 0x80A70790u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A70790:
    ctx->pc = 0x80A70790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70790: lwz     r0, 20(r1)
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
label_80A70794:
    ctx->pc = 0x80A70794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70794: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70798:
    ctx->pc = 0x80A70798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70798u)) return;
    // 80A70798: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A7079C:
    ctx->pc = 0x80A7079Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7079Cu)) return;
    // 80A7079C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A707A0:
    ctx->pc = 0x80A707A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A707A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A707A0: stwu     r1, -48(r1)
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
label_80A707A4:
    ctx->pc = 0x80A707A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A707A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A707A8:
    ctx->pc = 0x80A707A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707A8u)) return;
    // 80A707A8: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A707AC:
    ctx->pc = 0x80A707ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707ACu)) return;
    // 80A707AC: lis     r3, -32602
    ctx->gpr[3] = ((u32)(s32)(-32602) << 16);

label_80A707B0:
    ctx->pc = 0x80A707B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A707B0: stw     r0, 52(r1)
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
label_80A707B4:
    ctx->pc = 0x80A707B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80A707B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A707B4: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A707B8:
    ctx->pc = 0x80A707B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707B8u)) return;
    // 80A707B8: addi    r29, r4, -17056
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(-17056);

label_80A707BC:
    ctx->pc = 0x80A707BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707BCu)) return;
    // 80A707BC: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80A707C0:
    ctx->pc = 0x80A707C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707C0u)) return;
    // 80A707C0: addi    r31, r3, 25828
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(25828);

label_80A707C4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A707C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A707C4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A707C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707C8u)) return;
    // 80A707C8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A707CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707CCu)) return;
    // 80A707CC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A707D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707D0u)) return;
    // 80A707D0: bl      0x8050FD60
    {
            ctx->lr = 0x80A707D4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A707D4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A707D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A707D4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A707D8:
    ctx->pc = 0x80A707D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A707D8: stw     r30, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A707DC:
    ctx->pc = 0x80A707DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A707DC: lwz     r4, 32(r3)
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
label_80A707E0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707E0u)) return;
    // 80A707E0: bl      0x804551B4
    {
            ctx->lr = 0x80A707E4u;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A707E4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A707E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A707E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A707E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707E8u)) return;
    // 80A707E8: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80A707EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707ECu)) return;
    // 80A707EC: bl      0x8050EEC0
    {
            ctx->lr = 0x80A707F0u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A707F0:
    ctx->pc = 0x80A707F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A707F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A707F0: stw     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A707F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707F4u)) return;
    // 80A707F4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80A707F8:
    ctx->pc = 0x80A707F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A707F8: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A707FC:
    ctx->pc = 0x80A707FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A707FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A707FC: stb     r25, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[25]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70800:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70800u)) return;
    // 80A70800: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_80A70804:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70804u)) return;
    // 80A70804: cmpwi   r25, 2
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70808:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70808u)) return;
    // 80A70808: bc    12, 0, 0x80A707C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A707C4u;
                return;
            }
            goto label_80A707C4;
        }
    }

label_80A7080C:
    ctx->pc = 0x80A7080Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7080Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80A7080C: lis     r6, -27661
    ctx->gpr[6] = ((u32)(s32)(-27661) << 16);

label_80A70810:
    ctx->pc = 0x80A70810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70810u)) return;
    // 80A70810: lis     r5, -27662
    ctx->gpr[5] = ((u32)(s32)(-27662) << 16);

label_80A70814:
    ctx->pc = 0x80A70814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70814u)) return;
    // 80A70814: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A70818:
    ctx->pc = 0x80A70818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70818u)) return;
    // 80A70818: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A7081C:
    ctx->pc = 0x80A7081Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7081Cu)) return;
    // 80A7081C: addi    r7, r6, -17108
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-17108);

label_80A70820:
    ctx->pc = 0x80A70820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70820u)) return;
    // 80A70820: addi    r6, r5, 9332
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(9332);

label_80A70824:
    ctx->pc = 0x80A70824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70824u)) return;
    // 80A70824: addi    r5, r4, -16992
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-16992);

label_80A70828:
    ctx->pc = 0x80A70828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70828u)) return;
    // 80A70828: addi    r4, r3, -17044
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17044);

label_80A7082C:
    ctx->pc = 0x80A7082Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7082Cu)) return;
    // 80A7082C: lis     r3, -32602
    ctx->gpr[3] = ((u32)(s32)(-32602) << 16);

label_80A70830:
    ctx->pc = 0x80A70830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70830u)) return;
    // 80A70830: addi    r29, r7, 48
    ctx->gpr[29] = ctx->gpr[7] + (u32)(s32)(48);

label_80A70834:
    ctx->pc = 0x80A70834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70834u)) return;
    // 80A70834: addi    r28, r6, 12
    ctx->gpr[28] = ctx->gpr[6] + (u32)(s32)(12);

label_80A70838:
    ctx->pc = 0x80A70838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70838u)) return;
    // 80A70838: addi    r27, r5, 48
    ctx->gpr[27] = ctx->gpr[5] + (u32)(s32)(48);

label_80A7083C:
    ctx->pc = 0x80A7083Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7083Cu)) return;
    // 80A7083C: addi    r26, r4, 48
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(48);

label_80A70840:
    ctx->pc = 0x80A70840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70840u)) return;
    // 80A70840: addi    r30, r3, 18860
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(18860);

label_80A70844:
    ctx->pc = 0x80A70844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70844u)) return;
    // 80A70844: li      r25, 12
    ctx->gpr[25] = (u32)(s32)(12);

label_80A70848:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70848: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80A7084C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7084Cu)) return;
    // 80A7084C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A70850:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70850u)) return;
    // 80A70850: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A70854:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70854u)) return;
    // 80A70854: bl      0x8050FD60
    {
            ctx->lr = 0x80A70858u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A70858:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70858: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A7085C:
    ctx->pc = 0x80A7085Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7085Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7085C: stw     r31, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70860:
    ctx->pc = 0x80A70860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70860: lwz     r4, 32(r3)
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
label_80A70864:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70864u)) return;
    // 80A70864: bl      0x804551B4
    {
            ctx->lr = 0x80A70868u;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A70868:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70868: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A7086C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7086Cu)) return;
    // 80A7086C: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80A70870:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70870u)) return;
    // 80A70870: bl      0x8050EEC0
    {
            ctx->lr = 0x80A70874u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A70874:
    ctx->pc = 0x80A70874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70874: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70878:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70878u)) return;
    // 80A70878: addi    r29, r29, -4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-4);

label_80A7087C:
    ctx->pc = 0x80A7087Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7087Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A7087C: lbz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70880:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70880u)) return;
    // 80A70880: addi    r28, r28, -1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-1);

label_80A70884:
    ctx->pc = 0x80A70884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A70884: lwz     r3, 32(r31)
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
label_80A70888:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70888u)) return;
    // 80A70888: or   r0, r0, r25
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[25];
    }

label_80A7088C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7088Cu)) return;
    // 80A7088C: addic.  r25, r25, -1
    {
        u64 a = ctx->gpr[25];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[25] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[25];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A70890:
    ctx->pc = 0x80A70890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70890: stb     r0, 3(r3)
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
label_80A70894:
    ctx->pc = 0x80A70894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A70894: lwz     r3, 32(r31)
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
label_80A70898:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70898u)) return;
    // 80A70898: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_80A7089C:
    ctx->pc = 0x80A7089Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7089Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A7089C: stw     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A708A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708A0u)) return;
    // 80A708A0: addi    r27, r27, -4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-4);

label_80A708A4:
    ctx->pc = 0x80A708A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A708A4: lwz     r3, 32(r31)
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
label_80A708A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708A8u)) return;
    // 80A708A8: addi    r0, r3, 20
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20);

label_80A708AC:
    ctx->pc = 0x80A708ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A708AC: stw     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A708B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708B0u)) return;
    // 80A708B0: addi    r26, r26, -4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-4);

label_80A708B4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708B4u)) return;
    // 80A708B4: bc    4, 0, 0x80A70848
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A70848u;
                return;
            }
            goto label_80A70848;
        }
    }

label_80A708B8:
    ctx->pc = 0x80A708B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A708B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A708B8: lis     r4, -32601
    ctx->gpr[4] = ((u32)(s32)(-32601) << 16);

label_80A708BC:
    ctx->pc = 0x80A708BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708BCu)) return;
    // 80A708BC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A708C0:
    ctx->pc = 0x80A708C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708C0u)) return;
    // 80A708C0: addi    r5, r4, -17076
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-17076);

label_80A708C4:
    ctx->pc = 0x80A708C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708C4u)) return;
    // 80A708C4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A708C8:
    ctx->pc = 0x80A708C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708C8u)) return;
    // 80A708C8: bl      0x8050FD60
    {
            ctx->lr = 0x80A708CCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A708CC:
    ctx->pc = 0x80A708CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A708CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A708CC: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A708D0:
    ctx->pc = 0x80A708D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A708D0: stw     r3, -17048(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-17048);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A708D4:
    ctx->pc = 0x80A708D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A708D4: lwz     r4, 32(r3)
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
label_80A708D8:
    ctx->pc = 0x80A708D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708D8u)) return;
    // 80A708D8: bl      0x804551B4
    {
            ctx->lr = 0x80A708DCu;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A708DC:
    ctx->pc = 0x80A708DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A708DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A708DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A708E0:
    ctx->pc = 0x80A708E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708E0u)) return;
    // 80A708E0: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80A708E4:
    ctx->pc = 0x80A708E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708E4u)) return;
    // 80A708E4: bl      0x8050EEC0
    {
            ctx->lr = 0x80A708E8u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A708E8:
    ctx->pc = 0x80A708E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A708E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80A708E8: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A708EC:
    ctx->pc = 0x80A708ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708ECu)) return;
    // 80A708EC: lis     r5, -32602
    ctx->gpr[5] = ((u32)(s32)(-32602) << 16);

label_80A708F0:
    ctx->pc = 0x80A708F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708F0u)) return;
    // 80A708F0: addi    r6, r4, -17048
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-17048);

label_80A708F4:
    ctx->pc = 0x80A708F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A708F4: lwz     r6, 0(r6)
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
label_80A708F8:
    ctx->pc = 0x80A708F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708F8u)) return;
    // 80A708F8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A708FC:
    ctx->pc = 0x80A708FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A708FCu)) return;
    // 80A708FC: addi    r5, r5, -1204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1204);

label_80A70900:
    ctx->pc = 0x80A70900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70900: stw     r3, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70904:
    ctx->pc = 0x80A70904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70904u)) return;
    // 80A70904: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A70908:
    ctx->pc = 0x80A70908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70908u)) return;
    // 80A70908: bl      0x8050FD60
    {
            ctx->lr = 0x80A7090Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A7090C:
    ctx->pc = 0x80A7090Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7090Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A7090C: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A70910:
    ctx->pc = 0x80A70910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70910u)) return;
    // 80A70910: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70914:
    ctx->pc = 0x80A70914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70914: stw     r0, -20196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70918:
    ctx->pc = 0x80A70918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70918u)) return;
    // 80A70918: bl      0x80405C38
    {
            ctx->lr = 0x80A7091Cu;
            ctx->pc = 0x80405C38u;
            return;
    }

label_80A7091C:
    ctx->pc = 0x80A7091Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7091Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A7091C: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70920:
    ctx->pc = 0x80A70920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70920: lwz     r0, 52(r1)
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
label_80A70924:
    ctx->pc = 0x80A70924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70924: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70928:
    ctx->pc = 0x80A70928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70928u)) return;
    // 80A70928: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80A7092C:
    ctx->pc = 0x80A7092Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7092Cu)) return;
    // 80A7092C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70930:
    ctx->pc = 0x80A70930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A70930: stwu     r1, -32(r1)
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
label_80A70934:
    ctx->pc = 0x80A70934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70934: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70938:
    ctx->pc = 0x80A70938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A70938: stw     r0, 36(r1)
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
label_80A7093C:
    ctx->pc = 0x80A7093Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7093Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A7093C: stw     r31, 28(r1)
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
label_80A70940:
    ctx->pc = 0x80A70940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70940: stw     r30, 24(r1)
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
label_80A70944:
    ctx->pc = 0x80A70944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70944: stw     r29, 20(r1)
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
label_80A70948:
    ctx->pc = 0x80A70948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70948u)) return;
    // 80A70948: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80A7094C:
    ctx->pc = 0x80A7094Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7094Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A7094C: stw     r28, 16(r1)
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
label_80A70950:
    ctx->pc = 0x80A70950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70950u)) return;
    // 80A70950: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A70954:
    ctx->pc = 0x80A70954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70954: lwz     r31, 32(r3)
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
label_80A70958:
    ctx->pc = 0x80A70958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70958u)) return;
    // 80A70958: bl      0x8047EA80
    {
            ctx->lr = 0x80A7095Cu;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80A7095C:
    ctx->pc = 0x80A7095Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7095Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A7095C: or.   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A70960:
    ctx->pc = 0x80A70960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70960u)) return;
    // 80A70960: bc    12, 2, 0x80A709E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A709E0;
        }
    }

label_80A70964:
    ctx->pc = 0x80A70964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    // 80A70964: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70968:
    ctx->pc = 0x80A70968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70968u)) return;
    // 80A70968: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_80A7096C:
    ctx->pc = 0x80A7096Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7096Cu)) return;
    // 80A7096C: addi    r4, r3, -19584
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19584);

label_80A70970:
    ctx->pc = 0x80A70970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70970u)) return;
    // 80A70970: lis     r3, 10240
    ctx->gpr[3] = ((u32)(s32)(10240) << 16);

label_80A70974:
    ctx->pc = 0x80A70974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A70974: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70978:
    ctx->pc = 0x80A70978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70978u)) return;
    // 80A70978: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A7097C:
    ctx->pc = 0x80A7097Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7097Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A7097C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A7097Cu)) return;
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
label_80A70980:
    ctx->pc = 0x80A70980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70980u)) return;
    // 80A70980: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80A70984:
    ctx->pc = 0x80A70984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70984u)) return;
    // 80A70984: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80A70988:
    ctx->pc = 0x80A70988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70988u)) return;
    // 80A70988: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80A7098C:
    ctx->pc = 0x80A7098Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7098Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A7098C: stfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A7098Cu)) return;
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
label_80A70990:
    ctx->pc = 0x80A70990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A70990: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A70990u)) return;
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
label_80A70994:
    ctx->pc = 0x80A70994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70994: stfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A70994u)) return;
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
label_80A70998:
    ctx->pc = 0x80A70998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A70998: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A70998u)) return;
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
label_80A7099C:
    ctx->pc = 0x80A7099Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7099Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A7099C: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A7099Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709A0:
    ctx->pc = 0x80A709A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A709A0: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A709A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80A709A4:
    ctx->pc = 0x80A709A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A709A4: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A709A4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709A8:
    ctx->pc = 0x80A709A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A709A8: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A709A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A709AC:
    ctx->pc = 0x80A709ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A709AC: stfs     f0, 16(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A709ACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709B0:
    ctx->pc = 0x80A709B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A709B0: lwz     r6, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709B4:
    ctx->pc = 0x80A709B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A709B4: stw     r6, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709B8:
    ctx->pc = 0x80A709B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A709B8: lwz     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709BC:
    ctx->pc = 0x80A709BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A709BC: stw     r6, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709C0:
    ctx->pc = 0x80A709C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A709C0: lwz     r6, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709C4:
    ctx->pc = 0x80A709C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A709C4: stw     r6, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709C8:
    ctx->pc = 0x80A709C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A709C8: stw     r29, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709CC:
    ctx->pc = 0x80A709CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A709CC: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709D0:
    ctx->pc = 0x80A709D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A709D0: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709D4:
    ctx->pc = 0x80A709D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709D4u)) return;
    // 80A709D4: bl      0x8047EBFC
    {
            ctx->lr = 0x80A709D8u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80A709D8:
    ctx->pc = 0x80A709D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A709D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A709D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80A709DC:
    ctx->pc = 0x80A709DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709DCu)) return;
    // 80A709DC: b       0x80A709E4
    {
            goto label_80A709E4;
    }

label_80A709E0:
    ctx->pc = 0x80A709E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A709E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A709E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A709E4:
    ctx->pc = 0x80A709E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A709E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A709E4: lwz     r0, 36(r1)
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
label_80A709E8:
    ctx->pc = 0x80A709E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A709E8: lwz     r31, 28(r1)
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
label_80A709EC:
    ctx->pc = 0x80A709ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A709EC: lwz     r30, 24(r1)
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
label_80A709F0:
    ctx->pc = 0x80A709F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A709F0: lwz     r29, 20(r1)
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
label_80A709F4:
    ctx->pc = 0x80A709F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A709F4: lwz     r28, 16(r1)
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
label_80A709F8:
    ctx->pc = 0x80A709F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A709F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A709F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A709FC:
    ctx->pc = 0x80A709FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A709FCu)) return;
    // 80A709FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A70A00:
    ctx->pc = 0x80A70A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A00u)) return;
    // 80A70A00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70A04:
    ctx->pc = 0x80A70A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70A04: stwu     r1, -48(r1)
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
label_80A70A08:
    ctx->pc = 0x80A70A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A70A08: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70A0C:
    ctx->pc = 0x80A70A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A70A0C: stw     r0, 52(r1)
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
label_80A70A10:
    ctx->pc = 0x80A70A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80A70A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70A10: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70A14:
    ctx->pc = 0x80A70A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70A14: lwz     r31, 32(r3)
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
label_80A70A18:
    ctx->pc = 0x80A70A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A18u)) return;
    // 80A70A18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A70A1C:
    ctx->pc = 0x80A70A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A1Cu)) return;
    // 80A70A1C: bl      0x804242E8
    {
            ctx->lr = 0x80A70A20u;
            ctx->pc = 0x804242E8u;
            return;
    }

label_80A70A20:
    ctx->pc = 0x80A70A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70A20: lbz     r0, 0(r31)
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
label_80A70A24:
    ctx->pc = 0x80A70A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A24u)) return;
    // 80A70A24: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80A70A28:
    ctx->pc = 0x80A70A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A28u)) return;
    // 80A70A28: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70A2C:
    ctx->pc = 0x80A70A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A2Cu)) return;
    // 80A70A2C: bc    12, 1, 0x80A70C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70C54;
        }
    }

label_80A70A30:
    ctx->pc = 0x80A70A30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A70A30: lis     r3, -27662
    ctx->gpr[3] = ((u32)(s32)(-27662) << 16);

label_80A70A34:
    ctx->pc = 0x80A70A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A34u)) return;
    // 80A70A34: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80A70A38:
    ctx->pc = 0x80A70A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A38u)) return;
    // 80A70A38: addi    r3, r3, 9348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9348);

label_80A70A3C:
    ctx->pc = 0x80A70A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70A3C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70A40:
    ctx->pc = 0x80A70A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70A40: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70A44:
    ctx->pc = 0x80A70A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A44u)) return;
    // 80A70A44: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80A70A48:
    ctx->pc = 0x80A70A48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70A48: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A70A4C:
    ctx->pc = 0x80A70A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70A4C: stb     r0, 0(r31)
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
label_80A70A50:
    ctx->pc = 0x80A70A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A50u)) return;
    // 80A70A50: b       0x80A70C54
    {
            goto label_80A70C54;
    }

label_80A70A54:
    ctx->pc = 0x80A70A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70A54: bl      0x8046C8C4
    {
            ctx->lr = 0x80A70A58u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A70A58:
    ctx->pc = 0x80A70A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70A58: bl      0x80A704B8
    {
            ctx->lr = 0x80A70A5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A704B8u;
                return;
            }
            goto label_80A704B8;
    }

label_80A70A5C:
    ctx->pc = 0x80A70A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70A5C: li      r3, 36
    ctx->gpr[3] = (u32)(s32)(36);

label_80A70A60:
    ctx->pc = 0x80A70A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A60u)) return;
    // 80A70A60: bl      0x8045F9BC
    {
            ctx->lr = 0x80A70A64u;
            ctx->pc = 0x8045F9BCu;
            return;
    }

label_80A70A64:
    ctx->pc = 0x80A70A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70A64: cmpwi   r3, 0
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

label_80A70A68:
    ctx->pc = 0x80A70A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A68u)) return;
    // 80A70A68: bc    4, 2, 0x80A70A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70A78;
        }
    }

label_80A70A6C:
    ctx->pc = 0x80A70A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70A6C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80A70A70:
    ctx->pc = 0x80A70A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70A70: stb     r0, 0(r31)
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
label_80A70A74:
    ctx->pc = 0x80A70A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A74u)) return;
    // 80A70A74: b       0x80A70C54
    {
            goto label_80A70C54;
    }

label_80A70A78:
    ctx->pc = 0x80A70A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70A78: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80A70A7C:
    ctx->pc = 0x80A70A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70A7C: stb     r0, 0(r31)
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
label_80A70A80:
    ctx->pc = 0x80A70A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A80u)) return;
    // 80A70A80: b       0x80A70C54
    {
            goto label_80A70C54;
    }

label_80A70A84:
    ctx->pc = 0x80A70A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70A84: li      r3, 36
    ctx->gpr[3] = (u32)(s32)(36);

label_80A70A88:
    ctx->pc = 0x80A70A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A88u)) return;
    // 80A70A88: bl      0x8045FDA0
    {
            ctx->lr = 0x80A70A8Cu;
            ctx->pc = 0x8045FDA0u;
            return;
    }

label_80A70A8C:
    ctx->pc = 0x80A70A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70A8C: bl      0x8045FB10
    {
            ctx->lr = 0x80A70A90u;
            ctx->pc = 0x8045FB10u;
            return;
    }

label_80A70A90:
    ctx->pc = 0x80A70A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70A90: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80A70A94:
    ctx->pc = 0x80A70A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70A94: stb     r0, 0(r31)
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
label_80A70A98:
    ctx->pc = 0x80A70A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70A98u)) return;
    // 80A70A98: b       0x80A70C54
    {
            goto label_80A70C54;
    }

label_80A70A9C:
    ctx->pc = 0x80A70A9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70A9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70A9C: bl      0x8045F9D0
    {
            ctx->lr = 0x80A70AA0u;
            ctx->pc = 0x8045F9D0u;
            return;
    }

label_80A70AA0:
    ctx->pc = 0x80A70AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70AA0: cmpwi   r3, 0
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

label_80A70AA4:
    ctx->pc = 0x80A70AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AA4u)) return;
    // 80A70AA4: bc    4, 2, 0x80A70C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70C54;
        }
    }

label_80A70AA8:
    ctx->pc = 0x80A70AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70AA8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80A70AAC:
    ctx->pc = 0x80A70AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70AAC: stb     r0, 0(r31)
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
label_80A70AB0:
    ctx->pc = 0x80A70AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AB0u)) return;
    // 80A70AB0: b       0x80A70C54
    {
            goto label_80A70C54;
    }

label_80A70AB4:
    ctx->pc = 0x80A70AB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70AB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70AB4: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80A70AB8:
    ctx->pc = 0x80A70AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70AB8: stb     r0, 0(r31)
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
label_80A70ABC:
    ctx->pc = 0x80A70ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70ABCu)) return;
    // 80A70ABC: b       0x80A70C54
    {
            goto label_80A70C54;
    }

label_80A70AC0:
    ctx->pc = 0x80A70AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A70AC0: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A70AC4:
    ctx->pc = 0x80A70AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AC4u)) return;
    // 80A70AC4: lis     r3, -32602
    ctx->gpr[3] = ((u32)(s32)(-32602) << 16);

label_80A70AC8:
    ctx->pc = 0x80A70AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AC8u)) return;
    // 80A70AC8: addi    r27, r4, -17056
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(-17056);

label_80A70ACC:
    ctx->pc = 0x80A70ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70ACCu)) return;
    // 80A70ACC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80A70AD0:
    ctx->pc = 0x80A70AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AD0u)) return;
    // 80A70AD0: addi    r30, r3, 25828
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(25828);

label_80A70AD4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70AD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70AD4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80A70AD8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AD8u)) return;
    // 80A70AD8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A70ADC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70ADCu)) return;
    // 80A70ADC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A70AE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AE0u)) return;
    // 80A70AE0: bl      0x8050FD60
    {
            ctx->lr = 0x80A70AE4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A70AE4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70AE4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A70AE8:
    ctx->pc = 0x80A70AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70AE8: stw     r29, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70AEC:
    ctx->pc = 0x80A70AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70AEC: lwz     r4, 32(r3)
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
label_80A70AF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AF0u)) return;
    // 80A70AF0: bl      0x804551B4
    {
            ctx->lr = 0x80A70AF4u;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A70AF4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70AF4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A70AF8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AF8u)) return;
    // 80A70AF8: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80A70AFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70AFCu)) return;
    // 80A70AFC: bl      0x8050EEC0
    {
            ctx->lr = 0x80A70B00u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A70B00:
    ctx->pc = 0x80A70B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70B00: stw     r3, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70B04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B04u)) return;
    // 80A70B04: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_80A70B08:
    ctx->pc = 0x80A70B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70B08: lwz     r3, 32(r29)
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
label_80A70B0C:
    ctx->pc = 0x80A70B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70B0C: stb     r28, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70B10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B10u)) return;
    // 80A70B10: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80A70B14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B14u)) return;
    // 80A70B14: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70B18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B18u)) return;
    // 80A70B18: bc    12, 0, 0x80A70AD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A70AD4u;
                return;
            }
            goto label_80A70AD4;
        }
    }

label_80A70B1C:
    ctx->pc = 0x80A70B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80A70B1C: lis     r6, -27661
    ctx->gpr[6] = ((u32)(s32)(-27661) << 16);

label_80A70B20:
    ctx->pc = 0x80A70B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B20u)) return;
    // 80A70B20: lis     r5, -27662
    ctx->gpr[5] = ((u32)(s32)(-27662) << 16);

label_80A70B24:
    ctx->pc = 0x80A70B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B24u)) return;
    // 80A70B24: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A70B28:
    ctx->pc = 0x80A70B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B28u)) return;
    // 80A70B28: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A70B2C:
    ctx->pc = 0x80A70B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B2Cu)) return;
    // 80A70B2C: addi    r7, r6, -17108
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-17108);

label_80A70B30:
    ctx->pc = 0x80A70B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B30u)) return;
    // 80A70B30: addi    r6, r5, 9332
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(9332);

label_80A70B34:
    ctx->pc = 0x80A70B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B34u)) return;
    // 80A70B34: addi    r5, r4, -16992
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-16992);

label_80A70B38:
    ctx->pc = 0x80A70B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B38u)) return;
    // 80A70B38: addi    r4, r3, -17044
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17044);

label_80A70B3C:
    ctx->pc = 0x80A70B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B3Cu)) return;
    // 80A70B3C: lis     r3, -32602
    ctx->gpr[3] = ((u32)(s32)(-32602) << 16);

label_80A70B40:
    ctx->pc = 0x80A70B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B40u)) return;
    // 80A70B40: addi    r27, r7, 48
    ctx->gpr[27] = ctx->gpr[7] + (u32)(s32)(48);

label_80A70B44:
    ctx->pc = 0x80A70B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B44u)) return;
    // 80A70B44: addi    r28, r6, 12
    ctx->gpr[28] = ctx->gpr[6] + (u32)(s32)(12);

label_80A70B48:
    ctx->pc = 0x80A70B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B48u)) return;
    // 80A70B48: addi    r26, r5, 48
    ctx->gpr[26] = ctx->gpr[5] + (u32)(s32)(48);

label_80A70B4C:
    ctx->pc = 0x80A70B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B4Cu)) return;
    // 80A70B4C: addi    r25, r4, 48
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(48);

label_80A70B50:
    ctx->pc = 0x80A70B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B50u)) return;
    // 80A70B50: addi    r29, r3, 18860
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(18860);

label_80A70B54:
    ctx->pc = 0x80A70B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B54u)) return;
    // 80A70B54: li      r24, 12
    ctx->gpr[24] = (u32)(s32)(12);

label_80A70B58:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70B58: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80A70B5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B5Cu)) return;
    // 80A70B5C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A70B60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B60u)) return;
    // 80A70B60: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A70B64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B64u)) return;
    // 80A70B64: bl      0x8050FD60
    {
            ctx->lr = 0x80A70B68u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A70B68:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70B68: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A70B6C:
    ctx->pc = 0x80A70B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70B6C: stw     r30, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70B70:
    ctx->pc = 0x80A70B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70B70: lwz     r4, 32(r3)
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
label_80A70B74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B74u)) return;
    // 80A70B74: bl      0x804551B4
    {
            ctx->lr = 0x80A70B78u;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A70B78:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70B78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70B78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A70B7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B7Cu)) return;
    // 80A70B7C: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80A70B80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B80u)) return;
    // 80A70B80: bl      0x8050EEC0
    {
            ctx->lr = 0x80A70B84u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A70B84:
    ctx->pc = 0x80A70B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70B84: stw     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70B88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B88u)) return;
    // 80A70B88: addi    r27, r27, -4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-4);

label_80A70B8C:
    ctx->pc = 0x80A70B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A70B8C: lbz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70B90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B90u)) return;
    // 80A70B90: addi    r28, r28, -1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-1);

label_80A70B94:
    ctx->pc = 0x80A70B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A70B94: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70B98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B98u)) return;
    // 80A70B98: or   r0, r0, r24
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[24];
    }

label_80A70B9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70B9Cu)) return;
    // 80A70B9C: addic.  r24, r24, -1
    {
        u64 a = ctx->gpr[24];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[24] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[24];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A70BA0:
    ctx->pc = 0x80A70BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70BA0: stb     r0, 3(r3)
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
label_80A70BA4:
    ctx->pc = 0x80A70BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A70BA4: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70BA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BA8u)) return;
    // 80A70BA8: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_80A70BAC:
    ctx->pc = 0x80A70BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70BAC: stw     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70BB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BB0u)) return;
    // 80A70BB0: addi    r26, r26, -4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-4);

label_80A70BB4:
    ctx->pc = 0x80A70BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70BB4: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70BB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BB8u)) return;
    // 80A70BB8: addi    r0, r3, 20
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20);

label_80A70BBC:
    ctx->pc = 0x80A70BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70BBC: stw     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70BC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BC0u)) return;
    // 80A70BC0: addi    r25, r25, -4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(-4);

label_80A70BC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BC4u)) return;
    // 80A70BC4: bc    4, 0, 0x80A70B58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A70B58u;
                return;
            }
            goto label_80A70B58;
        }
    }

label_80A70BC8:
    ctx->pc = 0x80A70BC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70BC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A70BC8: lis     r4, -32601
    ctx->gpr[4] = ((u32)(s32)(-32601) << 16);

label_80A70BCC:
    ctx->pc = 0x80A70BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BCCu)) return;
    // 80A70BCC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A70BD0:
    ctx->pc = 0x80A70BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BD0u)) return;
    // 80A70BD0: addi    r5, r4, -17076
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-17076);

label_80A70BD4:
    ctx->pc = 0x80A70BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BD4u)) return;
    // 80A70BD4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A70BD8:
    ctx->pc = 0x80A70BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BD8u)) return;
    // 80A70BD8: bl      0x8050FD60
    {
            ctx->lr = 0x80A70BDCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A70BDC:
    ctx->pc = 0x80A70BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70BDC: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A70BE0:
    ctx->pc = 0x80A70BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70BE0: stw     r3, -17048(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-17048);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70BE4:
    ctx->pc = 0x80A70BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70BE4: lwz     r4, 32(r3)
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
label_80A70BE8:
    ctx->pc = 0x80A70BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BE8u)) return;
    // 80A70BE8: bl      0x804551B4
    {
            ctx->lr = 0x80A70BECu;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A70BEC:
    ctx->pc = 0x80A70BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70BEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A70BF0:
    ctx->pc = 0x80A70BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BF0u)) return;
    // 80A70BF0: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80A70BF4:
    ctx->pc = 0x80A70BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BF4u)) return;
    // 80A70BF4: bl      0x8050EEC0
    {
            ctx->lr = 0x80A70BF8u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A70BF8:
    ctx->pc = 0x80A70BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80A70BF8: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A70BFC:
    ctx->pc = 0x80A70BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70BFCu)) return;
    // 80A70BFC: lis     r5, -32602
    ctx->gpr[5] = ((u32)(s32)(-32602) << 16);

label_80A70C00:
    ctx->pc = 0x80A70C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C00u)) return;
    // 80A70C00: addi    r6, r4, -17048
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-17048);

label_80A70C04:
    ctx->pc = 0x80A70C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70C04: lwz     r6, 0(r6)
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
label_80A70C08:
    ctx->pc = 0x80A70C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C08u)) return;
    // 80A70C08: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A70C0C:
    ctx->pc = 0x80A70C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C0Cu)) return;
    // 80A70C0C: addi    r5, r5, -1204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1204);

label_80A70C10:
    ctx->pc = 0x80A70C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70C10: stw     r3, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70C14:
    ctx->pc = 0x80A70C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C14u)) return;
    // 80A70C14: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A70C18:
    ctx->pc = 0x80A70C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C18u)) return;
    // 80A70C18: bl      0x8050FD60
    {
            ctx->lr = 0x80A70C1Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A70C1C:
    ctx->pc = 0x80A70C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70C1C: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A70C20:
    ctx->pc = 0x80A70C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C20u)) return;
    // 80A70C20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70C24:
    ctx->pc = 0x80A70C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70C24: stw     r0, -20196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70C28:
    ctx->pc = 0x80A70C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C28u)) return;
    // 80A70C28: bl      0x80405C38
    {
            ctx->lr = 0x80A70C2Cu;
            ctx->pc = 0x80405C38u;
            return;
    }

label_80A70C2C:
    ctx->pc = 0x80A70C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70C2C: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80A70C30:
    ctx->pc = 0x80A70C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70C30: stb     r0, 0(r31)
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
label_80A70C34:
    ctx->pc = 0x80A70C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C34u)) return;
    // 80A70C34: b       0x80A70C54
    {
            goto label_80A70C54;
    }

label_80A70C38:
    ctx->pc = 0x80A70C38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70C38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70C38: li      r3, 34
    ctx->gpr[3] = (u32)(s32)(34);

label_80A70C3C:
    ctx->pc = 0x80A70C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C3Cu)) return;
    // 80A70C3C: bl      0x80406090
    {
            ctx->lr = 0x80A70C40u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80A70C40:
    ctx->pc = 0x80A70C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70C40: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_80A70C44:
    ctx->pc = 0x80A70C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70C44: stb     r0, 0(r31)
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
label_80A70C48:
    ctx->pc = 0x80A70C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C48u)) return;
    // 80A70C48: b       0x80A70C54
    {
            goto label_80A70C54;
    }

label_80A70C4C:
    ctx->pc = 0x80A70C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70C4C: bl      0x804060B0
    {
            ctx->lr = 0x80A70C50u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_80A70C50:
    ctx->pc = 0x80A70C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70C50: bl      0x8046C8C4
    {
            ctx->lr = 0x80A70C54u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A70C54:
    ctx->pc = 0x80A70C54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70C54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70C54: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70C58:
    ctx->pc = 0x80A70C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70C58: lwz     r0, 52(r1)
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
label_80A70C5C:
    ctx->pc = 0x80A70C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70C5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70C60:
    ctx->pc = 0x80A70C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C60u)) return;
    // 80A70C60: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80A70C64:
    ctx->pc = 0x80A70C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C64u)) return;
    // 80A70C64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70C68:
    ctx->pc = 0x80A70C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A70C68: stwu     r1, -16(r1)
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
label_80A70C6C:
    ctx->pc = 0x80A70C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A70C6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70C70:
    ctx->pc = 0x80A70C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C70u)) return;
    // 80A70C70: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A70C74:
    ctx->pc = 0x80A70C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C74u)) return;
    // 80A70C74: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A70C78:
    ctx->pc = 0x80A70C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70C78: stw     r0, 20(r1)
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
label_80A70C7C:
    ctx->pc = 0x80A70C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C7Cu)) return;
    // 80A70C7C: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_80A70C80:
    ctx->pc = 0x80A70C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C80u)) return;
    // 80A70C80: lis     r5, -27662
    ctx->gpr[5] = ((u32)(s32)(-27662) << 16);

label_80A70C84:
    ctx->pc = 0x80A70C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A70C84: stw     r31, 12(r1)
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
label_80A70C88:
    ctx->pc = 0x80A70C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C88u)) return;
    // 80A70C88: addi    r31, r5, 8992
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(8992);

label_80A70C8C:
    ctx->pc = 0x80A70C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C8Cu)) return;
    // 80A70C8C: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80A70C90:
    ctx->pc = 0x80A70C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A70C90: stw     r30, 8(r1)
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
label_80A70C94:
    ctx->pc = 0x80A70C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70C94: lha     r4, 0(r4)
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
label_80A70C98:
    ctx->pc = 0x80A70C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A70C98: lha     r0, -5404(r3)
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
label_80A70C9C:
    ctx->pc = 0x80A70C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70C9Cu)) return;
    // 80A70C9C: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80A70CA0:
    ctx->pc = 0x80A70CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CA0u)) return;
    // 80A70CA0: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_80A70CA4:
    ctx->pc = 0x80A70CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CA4u)) return;
    // 80A70CA4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80A70CA8:
    ctx->pc = 0x80A70CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CA8u)) return;
    // 80A70CA8: rlwinm r30, r0, 2, 22, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_80A70CAC:
    ctx->pc = 0x80A70CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CACu)) return;
    // 80A70CAC: addi    r3, r5, -25468
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-25468);

label_80A70CB0:
    ctx->pc = 0x80A70CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70CB0: lwzx    r4, r4, r30
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
label_80A70CB4:
    ctx->pc = 0x80A70CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CB4u)) return;
    // 80A70CB4: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_80A70CB8:
    ctx->pc = 0x80A70CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CB8u)) return;
    // 80A70CB8: bl      0x800031E8
    {
            ctx->lr = 0x80A70CBCu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A70CBC:
    ctx->pc = 0x80A70CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A70CBC: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_80A70CC0:
    ctx->pc = 0x80A70CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CC0u)) return;
    // 80A70CC0: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A70CC4:
    ctx->pc = 0x80A70CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70CC4: lwzx    r4, r4, r30
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
label_80A70CC8:
    ctx->pc = 0x80A70CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CC8u)) return;
    // 80A70CC8: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_80A70CCC:
    ctx->pc = 0x80A70CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CCCu)) return;
    // 80A70CCC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A70CD0:
    ctx->pc = 0x80A70CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CD0u)) return;
    // 80A70CD0: bl      0x800031E8
    {
            ctx->lr = 0x80A70CD4u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A70CD4:
    ctx->pc = 0x80A70CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A70CD4: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_80A70CD8:
    ctx->pc = 0x80A70CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CD8u)) return;
    // 80A70CD8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A70CDC:
    ctx->pc = 0x80A70CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70CDC: lwzx    r4, r4, r30
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
label_80A70CE0:
    ctx->pc = 0x80A70CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CE0u)) return;
    // 80A70CE0: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_80A70CE4:
    ctx->pc = 0x80A70CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CE4u)) return;
    // 80A70CE4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A70CE8:
    ctx->pc = 0x80A70CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CE8u)) return;
    // 80A70CE8: bl      0x800031E8
    {
            ctx->lr = 0x80A70CECu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A70CEC:
    ctx->pc = 0x80A70CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A70CEC: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_80A70CF0:
    ctx->pc = 0x80A70CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CF0u)) return;
    // 80A70CF0: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A70CF4:
    ctx->pc = 0x80A70CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70CF4: lwzx    r4, r4, r30
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
label_80A70CF8:
    ctx->pc = 0x80A70CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CF8u)) return;
    // 80A70CF8: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_80A70CFC:
    ctx->pc = 0x80A70CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70CFCu)) return;
    // 80A70CFC: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80A70D00:
    ctx->pc = 0x80A70D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D00u)) return;
    // 80A70D00: bl      0x800031E8
    {
            ctx->lr = 0x80A70D04u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A70D04:
    ctx->pc = 0x80A70D04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70D04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70D04: lwz     r0, 20(r1)
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
label_80A70D08:
    ctx->pc = 0x80A70D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70D08: lwz     r31, 12(r1)
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
label_80A70D0C:
    ctx->pc = 0x80A70D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70D0C: lwz     r30, 8(r1)
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
label_80A70D10:
    ctx->pc = 0x80A70D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70D10: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70D14:
    ctx->pc = 0x80A70D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D14u)) return;
    // 80A70D14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A70D18:
    ctx->pc = 0x80A70D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D18u)) return;
    // 80A70D18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70D1C:
    ctx->pc = 0x80A70D1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70D1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70D1C: stwu     r1, -16(r1)
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
label_80A70D20:
    ctx->pc = 0x80A70D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70D20: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70D24:
    ctx->pc = 0x80A70D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70D24: stw     r0, 20(r1)
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
label_80A70D28:
    ctx->pc = 0x80A70D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D28u)) return;
    // 80A70D28: bl      0x8046C8C4
    {
            ctx->lr = 0x80A70D2Cu;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A70D2C:
    ctx->pc = 0x80A70D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70D2C: lwz     r0, 20(r1)
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
label_80A70D30:
    ctx->pc = 0x80A70D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A70D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70D30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70D34:
    ctx->pc = 0x80A70D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D34u)) return;
    // 80A70D34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A70D38:
    ctx->pc = 0x80A70D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D38u)) return;
    // 80A70D38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70D3C:
    ctx->pc = 0x80A70D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    // 80A70D3C: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A70D40:
    ctx->pc = 0x80A70D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D40u)) return;
    // 80A70D40: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70D44:
    ctx->pc = 0x80A70D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A70D44: lfs     f3, -19576(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70D44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19576);
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
label_80A70D48:
    ctx->pc = 0x80A70D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D48u)) return;
    // 80A70D48: lis     r5, -27661
    ctx->gpr[5] = ((u32)(s32)(-27661) << 16);

label_80A70D4C:
    ctx->pc = 0x80A70D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A70D4C: lfs     f0, -19572(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70D4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19572);
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
label_80A70D50:
    ctx->pc = 0x80A70D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D50u)) return;
    // 80A70D50: addi    r8, r5, -16768
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-16768);

label_80A70D54:
    ctx->pc = 0x80A70D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D54u)) return;
    // 80A70D54: fadds   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80A70D54u)) return;
    ppc_fadds(ctx, 2, 3, 2);

label_80A70D58:
    ctx->pc = 0x80A70D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A70D58: stwu     r1, -16(r1)
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
label_80A70D5C:
    ctx->pc = 0x80A70D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A70D5Cu)) return;
    // 80A70D5C: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70D5Cu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80A70D60:
    ctx->pc = 0x80A70D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D60u)) return;
    // 80A70D60: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70D60u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80A70D64:
    ctx->pc = 0x80A70D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70D64: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A70D64u)) return;
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
label_80A70D68:
    ctx->pc = 0x80A70D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70D68: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70D6C:
    ctx->pc = 0x80A70D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D6Cu)) return;
    // 80A70D6C: cmpwi   r5, 0
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

label_80A70D70:
    ctx->pc = 0x80A70D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D70u)) return;
    // 80A70D70: bc    12, 0, 0x80A70D7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70D7C;
        }
    }

label_80A70D74:
    ctx->pc = 0x80A70D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70D74: cmpwi   r5, 8
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70D78:
    ctx->pc = 0x80A70D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D78u)) return;
    // 80A70D78: bc    12, 0, 0x80A70D84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70D84;
        }
    }

label_80A70D7C:
    ctx->pc = 0x80A70D7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70D7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70D7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A70D80:
    ctx->pc = 0x80A70D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D80u)) return;
    // 80A70D80: b       0x80A70E04
    {
            goto label_80A70E04;
    }

label_80A70D84:
    ctx->pc = 0x80A70D84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70D84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70D84: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70D88:
    ctx->pc = 0x80A70D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70D88: lfs     f0, -19568(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70D88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19568);
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
label_80A70D8C:
    ctx->pc = 0x80A70D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D8Cu)) return;
    // 80A70D8C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70D8Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70D90:
    ctx->pc = 0x80A70D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D90u)) return;
    // 80A70D90: bc    4, 1, 0x80A70DC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70DC0;
        }
    }

label_80A70D94:
    ctx->pc = 0x80A70D94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70D94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70D94: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70D98:
    ctx->pc = 0x80A70D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70D98: lfs     f0, -19564(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70D98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19564);
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
label_80A70D9C:
    ctx->pc = 0x80A70D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70D9Cu)) return;
    // 80A70D9C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70D9Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70DA0:
    ctx->pc = 0x80A70DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DA0u)) return;
    // 80A70DA0: bc    4, 0, 0x80A70DC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70DC0;
        }
    }

label_80A70DA4:
    ctx->pc = 0x80A70DA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70DA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A70DA4: addi    r3, r8, 72
    ctx->gpr[3] = ctx->gpr[8] + (u32)(s32)(72);

label_80A70DA8:
    ctx->pc = 0x80A70DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DA8u)) return;
    // 80A70DA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70DAC:
    ctx->pc = 0x80A70DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70DAC: lbzx    r3, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70DB0:
    ctx->pc = 0x80A70DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70DB0: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70DB4:
    ctx->pc = 0x80A70DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DB4u)) return;
    // 80A70DB4: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80A70DB8:
    ctx->pc = 0x80A70DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70DB8: stw     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70DBC:
    ctx->pc = 0x80A70DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DBCu)) return;
    // 80A70DBC: b       0x80A70E04
    {
            goto label_80A70E04;
    }

label_80A70DC0:
    ctx->pc = 0x80A70DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70DC0: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70DC4:
    ctx->pc = 0x80A70DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70DC4: lfs     f0, -19560(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70DC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19560);
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
label_80A70DC8:
    ctx->pc = 0x80A70DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DC8u)) return;
    // 80A70DC8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70DC8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70DCC:
    ctx->pc = 0x80A70DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DCCu)) return;
    // 80A70DCC: bc    4, 1, 0x80A70E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70E00;
        }
    }

label_80A70DD0:
    ctx->pc = 0x80A70DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70DD0: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70DD4:
    ctx->pc = 0x80A70DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70DD4: lfs     f0, -19556(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70DD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19556);
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
label_80A70DD8:
    ctx->pc = 0x80A70DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DD8u)) return;
    // 80A70DD8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70DD8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70DDC:
    ctx->pc = 0x80A70DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DDCu)) return;
    // 80A70DDC: bc    4, 0, 0x80A70E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70E00;
        }
    }

label_80A70DE0:
    ctx->pc = 0x80A70DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A70DE0: addi    r0, r8, 72
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(72);

label_80A70DE4:
    ctx->pc = 0x80A70DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DE4u)) return;
    // 80A70DE4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A70DE8:
    ctx->pc = 0x80A70DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DE8u)) return;
    // 80A70DE8: add   r3, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80A70DEC:
    ctx->pc = 0x80A70DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70DEC: stw     r4, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70DF0:
    ctx->pc = 0x80A70DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70DF0: lbz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70DF4:
    ctx->pc = 0x80A70DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70DF4: stw     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70DF8:
    ctx->pc = 0x80A70DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DF8u)) return;
    // 80A70DF8: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80A70DFC:
    ctx->pc = 0x80A70DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70DFCu)) return;
    // 80A70DFC: b       0x80A70E04
    {
            goto label_80A70E04;
    }

label_80A70E00:
    ctx->pc = 0x80A70E00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70E00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70E00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A70E04:
    ctx->pc = 0x80A70E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70E04: cmpwi   r3, 0
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

label_80A70E08:
    ctx->pc = 0x80A70E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E08u)) return;
    // 80A70E08: bc    12, 2, 0x80A70E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70E50;
        }
    }

label_80A70E0C:
    ctx->pc = 0x80A70E0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70E0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A70E0C: lwz     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70E10:
    ctx->pc = 0x80A70E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E10u)) return;
    // 80A70E10: addi    r4, r8, 8
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(8);

label_80A70E14:
    ctx->pc = 0x80A70E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A70E14: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70E18:
    ctx->pc = 0x80A70E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E18u)) return;
    // 80A70E18: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80A70E1C:
    ctx->pc = 0x80A70E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E1Cu)) return;
    // 80A70E1C: rlwinm r6, r3, 5, 0, 26
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 5u) & 0xFFFFFFE0u;
    }

label_80A70E20:
    ctx->pc = 0x80A70E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E20u)) return;
    // 80A70E20: addi    r3, r8, 72
    ctx->gpr[3] = ctx->gpr[8] + (u32)(s32)(72);

label_80A70E24:
    ctx->pc = 0x80A70E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E24u)) return;
    // 80A70E24: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80A70E28:
    ctx->pc = 0x80A70E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E28u)) return;
    // 80A70E28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A70E2C:
    ctx->pc = 0x80A70E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E2Cu)) return;
    // 80A70E2C: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80A70E30:
    ctx->pc = 0x80A70E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70E30: lwzx    r4, r4, r0
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
label_80A70E34:
    ctx->pc = 0x80A70E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A70E34: lwz     r4, 32(r4)
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
label_80A70E38:
    ctx->pc = 0x80A70E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A70E38: stb     r7, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70E3C:
    ctx->pc = 0x80A70E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70E3C: lwz     r4, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70E40:
    ctx->pc = 0x80A70E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70E40: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70E44:
    ctx->pc = 0x80A70E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E44u)) return;
    // 80A70E44: rlwinm r4, r4, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0xFFFFFFF8u;
    }

label_80A70E48:
    ctx->pc = 0x80A70E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E48u)) return;
    // 80A70E48: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80A70E4C:
    ctx->pc = 0x80A70E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A70E4C: stbx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70E50:
    ctx->pc = 0x80A70E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70E50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A70E54:
    ctx->pc = 0x80A70E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E54u)) return;
    // 80A70E54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70E58:
    ctx->pc = 0x80A70E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    // 80A70E58: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A70E5C:
    ctx->pc = 0x80A70E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E5Cu)) return;
    // 80A70E5C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70E60:
    ctx->pc = 0x80A70E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A70E60: lfs     f3, -19576(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70E60u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19576);
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
label_80A70E64:
    ctx->pc = 0x80A70E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E64u)) return;
    // 80A70E64: lis     r5, -27661
    ctx->gpr[5] = ((u32)(s32)(-27661) << 16);

label_80A70E68:
    ctx->pc = 0x80A70E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A70E68: lfs     f0, -19572(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70E68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19572);
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
label_80A70E6C:
    ctx->pc = 0x80A70E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E6Cu)) return;
    // 80A70E6C: addi    r5, r5, -16768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16768);

label_80A70E70:
    ctx->pc = 0x80A70E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E70u)) return;
    // 80A70E70: fadds   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80A70E70u)) return;
    ppc_fadds(ctx, 2, 3, 2);

label_80A70E74:
    ctx->pc = 0x80A70E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A70E74: stwu     r1, -16(r1)
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
label_80A70E78:
    ctx->pc = 0x80A70E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A70E78u)) return;
    // 80A70E78: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70E78u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80A70E7C:
    ctx->pc = 0x80A70E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E7Cu)) return;
    // 80A70E7C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70E7Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80A70E80:
    ctx->pc = 0x80A70E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70E80: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A70E80u)) return;
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
label_80A70E84:
    ctx->pc = 0x80A70E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70E84: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70E88:
    ctx->pc = 0x80A70E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E88u)) return;
    // 80A70E88: cmpwi   r6, 0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70E8C:
    ctx->pc = 0x80A70E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E8Cu)) return;
    // 80A70E8C: bc    12, 0, 0x80A70E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70E98;
        }
    }

label_80A70E90:
    ctx->pc = 0x80A70E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70E90: cmpwi   r6, 8
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70E94:
    ctx->pc = 0x80A70E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E94u)) return;
    // 80A70E94: bc    12, 0, 0x80A70EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70EA0;
        }
    }

label_80A70E98:
    ctx->pc = 0x80A70E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70E98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A70E9C:
    ctx->pc = 0x80A70E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70E9Cu)) return;
    // 80A70E9C: b       0x80A70F20
    {
            goto label_80A70F20;
    }

label_80A70EA0:
    ctx->pc = 0x80A70EA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70EA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70EA0: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70EA4:
    ctx->pc = 0x80A70EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70EA4: lfs     f0, -19568(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70EA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19568);
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
label_80A70EA8:
    ctx->pc = 0x80A70EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EA8u)) return;
    // 80A70EA8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70EA8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70EAC:
    ctx->pc = 0x80A70EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EACu)) return;
    // 80A70EAC: bc    4, 1, 0x80A70EDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70EDC;
        }
    }

label_80A70EB0:
    ctx->pc = 0x80A70EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70EB0: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70EB4:
    ctx->pc = 0x80A70EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70EB4: lfs     f0, -19564(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70EB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19564);
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
label_80A70EB8:
    ctx->pc = 0x80A70EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EB8u)) return;
    // 80A70EB8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70EB8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70EBC:
    ctx->pc = 0x80A70EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EBCu)) return;
    // 80A70EBC: bc    4, 0, 0x80A70EDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70EDC;
        }
    }

label_80A70EC0:
    ctx->pc = 0x80A70EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A70EC0: addi    r3, r5, 72
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(72);

label_80A70EC4:
    ctx->pc = 0x80A70EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EC4u)) return;
    // 80A70EC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70EC8:
    ctx->pc = 0x80A70EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70EC8: lbzx    r3, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70ECC:
    ctx->pc = 0x80A70ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70ECC: stw     r0, 4(r5)
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
label_80A70ED0:
    ctx->pc = 0x80A70ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70ED0u)) return;
    // 80A70ED0: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80A70ED4:
    ctx->pc = 0x80A70ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70ED4: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70ED8:
    ctx->pc = 0x80A70ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70ED8u)) return;
    // 80A70ED8: b       0x80A70F20
    {
            goto label_80A70F20;
    }

label_80A70EDC:
    ctx->pc = 0x80A70EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70EDC: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70EE0:
    ctx->pc = 0x80A70EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70EE0: lfs     f0, -19560(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70EE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19560);
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
label_80A70EE4:
    ctx->pc = 0x80A70EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EE4u)) return;
    // 80A70EE4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70EE4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70EE8:
    ctx->pc = 0x80A70EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EE8u)) return;
    // 80A70EE8: bc    4, 1, 0x80A70F1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70F1C;
        }
    }

label_80A70EEC:
    ctx->pc = 0x80A70EECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70EECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70EEC: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70EF0:
    ctx->pc = 0x80A70EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70EF0: lfs     f0, -19556(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70EF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19556);
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
label_80A70EF4:
    ctx->pc = 0x80A70EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EF4u)) return;
    // 80A70EF4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70EF4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70EF8:
    ctx->pc = 0x80A70EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70EF8u)) return;
    // 80A70EF8: bc    4, 0, 0x80A70F1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70F1C;
        }
    }

label_80A70EFC:
    ctx->pc = 0x80A70EFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70EFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A70EFC: addi    r0, r5, 72
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(72);

label_80A70F00:
    ctx->pc = 0x80A70F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F00u)) return;
    // 80A70F00: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A70F04:
    ctx->pc = 0x80A70F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F04u)) return;
    // 80A70F04: add   r3, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80A70F08:
    ctx->pc = 0x80A70F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70F08: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70F0C:
    ctx->pc = 0x80A70F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70F0C: lbz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70F10:
    ctx->pc = 0x80A70F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70F10: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70F14:
    ctx->pc = 0x80A70F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F14u)) return;
    // 80A70F14: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80A70F18:
    ctx->pc = 0x80A70F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F18u)) return;
    // 80A70F18: b       0x80A70F20
    {
            goto label_80A70F20;
    }

label_80A70F1C:
    ctx->pc = 0x80A70F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A70F1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A70F20:
    ctx->pc = 0x80A70F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70F20: cmpwi   r3, 0
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

label_80A70F24:
    ctx->pc = 0x80A70F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F24u)) return;
    // 80A70F24: bc    12, 2, 0x80A70F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70F50;
        }
    }

label_80A70F28:
    ctx->pc = 0x80A70F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A70F28: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70F2C:
    ctx->pc = 0x80A70F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F2Cu)) return;
    // 80A70F2C: addi    r3, r5, 8
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(8);

label_80A70F30:
    ctx->pc = 0x80A70F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A70F30: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70F34:
    ctx->pc = 0x80A70F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F34u)) return;
    // 80A70F34: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A70F38:
    ctx->pc = 0x80A70F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F38u)) return;
    // 80A70F38: rlwinm r4, r4, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 5u) & 0xFFFFFFE0u;
    }

label_80A70F3C:
    ctx->pc = 0x80A70F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F3Cu)) return;
    // 80A70F3C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80A70F40:
    ctx->pc = 0x80A70F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F40u)) return;
    // 80A70F40: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80A70F44:
    ctx->pc = 0x80A70F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70F44: lwzx    r3, r3, r0
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
label_80A70F48:
    ctx->pc = 0x80A70F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70F48: lwz     r3, 32(r3)
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
label_80A70F4C:
    ctx->pc = 0x80A70F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A70F4C: stb     r5, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70F50:
    ctx->pc = 0x80A70F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70F50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A70F54:
    ctx->pc = 0x80A70F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F54u)) return;
    // 80A70F54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A70F58:
    ctx->pc = 0x80A70F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A70F58: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70F5C:
    ctx->pc = 0x80A70F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70F5C: stwu     r1, -16(r1)
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
label_80A70F60:
    ctx->pc = 0x80A70F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F60u)) return;
    // 80A70F60: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A70F64:
    ctx->pc = 0x80A70F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70F64: lfs     f5, -19552(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70F64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19552);
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
label_80A70F68:
    ctx->pc = 0x80A70F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F68u)) return;
    // 80A70F68: addi    r3, r4, -16768
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-16768);

label_80A70F6C:
    ctx->pc = 0x80A70F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F6Cu)) return;
    // 80A70F6C: b       0x80A70F88
    {
            goto label_80A70F88;
    }

label_80A70F70:
    ctx->pc = 0x80A70F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70F70: fadds   f5, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80A70F70u)) return;
    ppc_fadds(ctx, 5, 5, 3);

label_80A70F74:
    ctx->pc = 0x80A70F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F74u)) return;
    // 80A70F74: fcmpo   cr0, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80A70F74u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[2], true);

label_80A70F78:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F78u)) return;
    // 80A70F78: bc    4, 1, 0x80A70F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A70F98;
        }
    }

label_80A70F7C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A70F7C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A70F80:
    ctx->pc = 0x80A70F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70F80: lfs     f1, -19548(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A70F80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19548);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70F84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F84u)) return;
    // 80A70F84: b       0x80A7114C
    {
            goto label_80A7114C;
    }

label_80A70F88:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70F88: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A70F8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F8Cu)) return;
    // 80A70F8C: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A70F90:
    ctx->pc = 0x80A70F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70F90: lfs     f3, -19572(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A70F90u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19572);
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
label_80A70F94:
    ctx->pc = 0x80A70F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A70F94: lfs     f2, -19576(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70F94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19576);
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
label_80A70F98:
    ctx->pc = 0x80A70F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80A70F98: fadds   f0, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x80A70F98u)) return;
    ppc_fadds(ctx, 0, 2, 5);

label_80A70F9C:
    ctx->pc = 0x80A70F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A70F9Cu)) return;
    // 80A70F9C: fdivs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A70F9Cu)) return;
    ppc_fdivs(ctx, 0, 0, 3);

label_80A70FA0:
    ctx->pc = 0x80A70FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FA0u)) return;
    // 80A70FA0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70FA0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80A70FA4:
    ctx->pc = 0x80A70FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70FA4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A70FA4u)) return;
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
label_80A70FA8:
    ctx->pc = 0x80A70FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70FA8: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70FAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FACu)) return;
    // 80A70FAC: cmpwi   r5, 0
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

label_80A70FB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FB0u)) return;
    // 80A70FB0: bc    12, 0, 0x80A70FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70FBC;
        }
    }

label_80A70FB4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70FB4: cmpwi   r5, 8
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A70FB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FB8u)) return;
    // 80A70FB8: bc    12, 0, 0x80A70FC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A70FC4;
        }
    }

label_80A70FBC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A70FBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A70FC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FC0u)) return;
    // 80A70FC0: b       0x80A71044
    {
            goto label_80A71044;
    }

label_80A70FC4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70FC4: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A70FC8:
    ctx->pc = 0x80A70FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70FC8: lfs     f0, -19568(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70FC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19568);
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
label_80A70FCC:
    ctx->pc = 0x80A70FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FCCu)) return;
    // 80A70FCC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70FCCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70FD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FD0u)) return;
    // 80A70FD0: bc    4, 1, 0x80A71000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71000;
        }
    }

label_80A70FD4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A70FD4: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A70FD8:
    ctx->pc = 0x80A70FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A70FD8: lfs     f0, -19564(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A70FD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19564);
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
label_80A70FDC:
    ctx->pc = 0x80A70FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FDCu)) return;
    // 80A70FDC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A70FDCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A70FE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FE0u)) return;
    // 80A70FE0: bc    4, 0, 0x80A71000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71000;
        }
    }

label_80A70FE4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A70FE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A70FE4: addi    r4, r3, 72
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(72);

label_80A70FE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FE8u)) return;
    // 80A70FE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A70FEC:
    ctx->pc = 0x80A70FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A70FEC: lbzx    r4, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70FF0:
    ctx->pc = 0x80A70FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A70FF0: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70FF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FF4u)) return;
    // 80A70FF4: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80A70FF8:
    ctx->pc = 0x80A70FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A70FF8: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A70FFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A70FFCu)) return;
    // 80A70FFC: b       0x80A71044
    {
            goto label_80A71044;
    }

label_80A71000:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71000: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71004:
    ctx->pc = 0x80A71004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71004: lfs     f0, -19560(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71004u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19560);
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
label_80A71008:
    ctx->pc = 0x80A71008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71008u)) return;
    // 80A71008: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71008u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A7100C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7100Cu)) return;
    // 80A7100C: bc    4, 1, 0x80A71040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71040;
        }
    }

label_80A71010:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71010: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71014:
    ctx->pc = 0x80A71014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71014: lfs     f0, -19556(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71014u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19556);
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
label_80A71018:
    ctx->pc = 0x80A71018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71018u)) return;
    // 80A71018: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71018u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A7101C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7101Cu)) return;
    // 80A7101C: bc    4, 0, 0x80A71040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71040;
        }
    }

label_80A71020:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A71020: addi    r4, r3, 72
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(72);

label_80A71024:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71024u)) return;
    // 80A71024: addi    r0, r5, 8
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(8);

label_80A71028:
    ctx->pc = 0x80A71028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71028: lbzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7102C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7102Cu)) return;
    // 80A7102C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A71030:
    ctx->pc = 0x80A71030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71030: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71034:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71034u)) return;
    // 80A71034: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80A71038:
    ctx->pc = 0x80A71038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71038: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7103C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7103Cu)) return;
    // 80A7103C: b       0x80A71044
    {
            goto label_80A71044;
    }

label_80A71040:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71040: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A71044:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71044: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A71048:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71048u)) return;
    // 80A71048: bc    12, 2, 0x80A70F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A70F70u;
                return;
            }
            goto label_80A70F70;
        }
    }

label_80A7104C:
    ctx->pc = 0x80A7104Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7104Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A7104C: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71050:
    ctx->pc = 0x80A71050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71050: lfs     f6, -19544(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71050u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19544);
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
label_80A71054:
    ctx->pc = 0x80A71054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71054u)) return;
    // 80A71054: b       0x80A71070
    {
            goto label_80A71070;
    }

label_80A71058:
    ctx->pc = 0x80A71058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71058: fsubs   f6, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x80A71058u)) return;
    ppc_fsubs(ctx, 6, 6, 4);

label_80A7105C:
    ctx->pc = 0x80A7105Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7105Cu)) return;
    // 80A7105C: fcmpo   cr0, f6, f3
    if (!ppc_fp_available_inline(ctx, 0x80A7105Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[6], ctx->fpr[3], true);

label_80A71060:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71060u)) return;
    // 80A71060: bc    4, 0, 0x80A71088
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71088;
        }
    }

label_80A71064:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71064: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71068:
    ctx->pc = 0x80A71068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71068: lfs     f1, -19548(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71068u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19548);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7106C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7106Cu)) return;
    // 80A7106C: b       0x80A7114C
    {
            goto label_80A7114C;
    }

label_80A71070:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A71070: lis     r6, -27667
    ctx->gpr[6] = ((u32)(s32)(-27667) << 16);

label_80A71074:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71074u)) return;
    // 80A71074: lis     r5, -27667
    ctx->gpr[5] = ((u32)(s32)(-27667) << 16);

label_80A71078:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71078u)) return;
    // 80A71078: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A7107C:
    ctx->pc = 0x80A7107Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7107Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7107C: lfs     f4, -19572(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A7107Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-19572);
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
label_80A71080:
    ctx->pc = 0x80A71080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71080: lfs     f3, -19540(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A71080u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-19540);
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
label_80A71084:
    ctx->pc = 0x80A71084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A71084: lfs     f2, -19576(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71084u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19576);
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
label_80A71088:
    ctx->pc = 0x80A71088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80A71088: fadds   f0, f2, f6
    if (!ppc_fp_available_inline(ctx, 0x80A71088u)) return;
    ppc_fadds(ctx, 0, 2, 6);

label_80A7108C:
    ctx->pc = 0x80A7108Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A7108Cu)) return;
    // 80A7108C: fdivs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80A7108Cu)) return;
    ppc_fdivs(ctx, 0, 0, 4);

label_80A71090:
    ctx->pc = 0x80A71090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71090u)) return;
    // 80A71090: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71090u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80A71094:
    ctx->pc = 0x80A71094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71094: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A71094u)) return;
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
label_80A71098:
    ctx->pc = 0x80A71098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71098: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7109C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7109Cu)) return;
    // 80A7109C: cmpwi   r5, 0
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

label_80A710A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710A0u)) return;
    // 80A710A0: bc    12, 0, 0x80A710AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A710AC;
        }
    }

label_80A710A4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A710A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A710A4: cmpwi   r5, 8
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A710A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710A8u)) return;
    // 80A710A8: bc    12, 0, 0x80A710B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A710B4;
        }
    }

label_80A710AC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A710ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A710AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A710B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710B0u)) return;
    // 80A710B0: b       0x80A71134
    {
            goto label_80A71134;
    }

label_80A710B4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A710B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A710B4: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A710B8:
    ctx->pc = 0x80A710B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A710B8: lfs     f0, -19568(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A710B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19568);
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
label_80A710BC:
    ctx->pc = 0x80A710BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710BCu)) return;
    // 80A710BC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A710BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A710C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710C0u)) return;
    // 80A710C0: bc    4, 1, 0x80A710F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A710F0;
        }
    }

label_80A710C4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A710C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A710C4: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A710C8:
    ctx->pc = 0x80A710C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A710C8: lfs     f0, -19564(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A710C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19564);
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
label_80A710CC:
    ctx->pc = 0x80A710CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710CCu)) return;
    // 80A710CC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A710CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A710D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710D0u)) return;
    // 80A710D0: bc    4, 0, 0x80A710F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A710F0;
        }
    }

label_80A710D4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A710D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A710D4: addi    r4, r3, 72
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(72);

label_80A710D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710D8u)) return;
    // 80A710D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A710DC:
    ctx->pc = 0x80A710DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A710DC: lbzx    r4, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A710E0:
    ctx->pc = 0x80A710E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A710E0: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A710E4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710E4u)) return;
    // 80A710E4: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80A710E8:
    ctx->pc = 0x80A710E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A710E8: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A710EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710ECu)) return;
    // 80A710EC: b       0x80A71134
    {
            goto label_80A71134;
    }

label_80A710F0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A710F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A710F0: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A710F4:
    ctx->pc = 0x80A710F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A710F4: lfs     f0, -19560(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A710F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19560);
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
label_80A710F8:
    ctx->pc = 0x80A710F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710F8u)) return;
    // 80A710F8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A710F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A710FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A710FCu)) return;
    // 80A710FC: bc    4, 1, 0x80A71130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71130;
        }
    }

label_80A71100:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71100: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71104:
    ctx->pc = 0x80A71104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71104: lfs     f0, -19556(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71104u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19556);
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
label_80A71108:
    ctx->pc = 0x80A71108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71108u)) return;
    // 80A71108: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71108u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A7110C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7110Cu)) return;
    // 80A7110C: bc    4, 0, 0x80A71130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71130;
        }
    }

label_80A71110:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A71110: addi    r4, r3, 72
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(72);

label_80A71114:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71114u)) return;
    // 80A71114: addi    r0, r5, 8
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(8);

label_80A71118:
    ctx->pc = 0x80A71118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71118: lbzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7111C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7111Cu)) return;
    // 80A7111C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A71120:
    ctx->pc = 0x80A71120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71120: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71124:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71124u)) return;
    // 80A71124: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80A71128:
    ctx->pc = 0x80A71128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71128: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7112C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7112Cu)) return;
    // 80A7112C: b       0x80A71134
    {
            goto label_80A71134;
    }

label_80A71130:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71130: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A71134:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71134: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A71138:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71138u)) return;
    // 80A71138: bc    12, 2, 0x80A71058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A71058u;
                return;
            }
            goto label_80A71058;
        }
    }

label_80A7113C:
    ctx->pc = 0x80A7113Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7113Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A7113C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71140:
    ctx->pc = 0x80A71140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71140u)) return;
    // 80A71140: fadds   f0, f5, f6
    if (!ppc_fp_available_inline(ctx, 0x80A71140u)) return;
    ppc_fadds(ctx, 0, 5, 6);

label_80A71144:
    ctx->pc = 0x80A71144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71144: lfs     f1, -19536(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71144u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71148:
    ctx->pc = 0x80A71148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71148u)) return;
    // 80A71148: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71148u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80A7114C:
    ctx->pc = 0x80A7114Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7114Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A7114C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A71150:
    ctx->pc = 0x80A71150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71150u)) return;
    // 80A71150: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A71154:
    ctx->pc = 0x80A71154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    // 80A71154: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71158:
    ctx->pc = 0x80A71158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71158u)) return;
    // 80A71158: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A7115C:
    ctx->pc = 0x80A7115Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7115Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A7115C: lfs     f3, -19576(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A7115Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19576);
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
label_80A71160:
    ctx->pc = 0x80A71160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71160u)) return;
    // 80A71160: lis     r5, -27661
    ctx->gpr[5] = ((u32)(s32)(-27661) << 16);

label_80A71164:
    ctx->pc = 0x80A71164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A71164: lfs     f0, -19572(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71164u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19572);
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
label_80A71168:
    ctx->pc = 0x80A71168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71168u)) return;
    // 80A71168: addi    r5, r5, -16768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16768);

label_80A7116C:
    ctx->pc = 0x80A7116Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7116Cu)) return;
    // 80A7116C: fadds   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80A7116Cu)) return;
    ppc_fadds(ctx, 2, 3, 2);

label_80A71170:
    ctx->pc = 0x80A71170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A71170: stwu     r1, -16(r1)
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
label_80A71174:
    ctx->pc = 0x80A71174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A71174u)) return;
    // 80A71174: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71174u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80A71178:
    ctx->pc = 0x80A71178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71178u)) return;
    // 80A71178: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71178u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80A7117C:
    ctx->pc = 0x80A7117Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7117Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A7117C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A7117Cu)) return;
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
label_80A71180:
    ctx->pc = 0x80A71180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71180: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71184:
    ctx->pc = 0x80A71184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71184u)) return;
    // 80A71184: cmpwi   r6, 0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A71188:
    ctx->pc = 0x80A71188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71188u)) return;
    // 80A71188: bc    12, 0, 0x80A71194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71194;
        }
    }

label_80A7118C:
    ctx->pc = 0x80A7118Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7118Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A7118C: cmpwi   r6, 8
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A71190:
    ctx->pc = 0x80A71190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71190u)) return;
    // 80A71190: bc    12, 0, 0x80A7119C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A7119C;
        }
    }

label_80A71194:
    ctx->pc = 0x80A71194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71194: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71198:
    ctx->pc = 0x80A71198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71198u)) return;
    // 80A71198: b       0x80A7121C
    {
            goto label_80A7121C;
    }

label_80A7119C:
    ctx->pc = 0x80A7119Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7119Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A7119C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A711A0:
    ctx->pc = 0x80A711A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A711A0: lfs     f0, -19568(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A711A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19568);
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
label_80A711A4:
    ctx->pc = 0x80A711A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711A4u)) return;
    // 80A711A4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A711A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A711A8:
    ctx->pc = 0x80A711A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711A8u)) return;
    // 80A711A8: bc    4, 1, 0x80A711D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A711D8;
        }
    }

label_80A711AC:
    ctx->pc = 0x80A711ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A711ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A711AC: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A711B0:
    ctx->pc = 0x80A711B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A711B0: lfs     f0, -19564(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A711B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19564);
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
label_80A711B4:
    ctx->pc = 0x80A711B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711B4u)) return;
    // 80A711B4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A711B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A711B8:
    ctx->pc = 0x80A711B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711B8u)) return;
    // 80A711B8: bc    4, 0, 0x80A711D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A711D8;
        }
    }

label_80A711BC:
    ctx->pc = 0x80A711BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A711BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A711BC: addi    r3, r5, 72
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(72);

label_80A711C0:
    ctx->pc = 0x80A711C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711C0u)) return;
    // 80A711C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A711C4:
    ctx->pc = 0x80A711C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A711C4: lbzx    r3, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A711C8:
    ctx->pc = 0x80A711C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A711C8: stw     r0, 4(r5)
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
label_80A711CC:
    ctx->pc = 0x80A711CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711CCu)) return;
    // 80A711CC: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80A711D0:
    ctx->pc = 0x80A711D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A711D0: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A711D4:
    ctx->pc = 0x80A711D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711D4u)) return;
    // 80A711D4: b       0x80A7121C
    {
            goto label_80A7121C;
    }

label_80A711D8:
    ctx->pc = 0x80A711D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A711D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A711D8: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A711DC:
    ctx->pc = 0x80A711DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A711DC: lfs     f0, -19560(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A711DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19560);
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
label_80A711E0:
    ctx->pc = 0x80A711E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711E0u)) return;
    // 80A711E0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A711E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A711E4:
    ctx->pc = 0x80A711E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711E4u)) return;
    // 80A711E4: bc    4, 1, 0x80A71218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71218;
        }
    }

label_80A711E8:
    ctx->pc = 0x80A711E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A711E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A711E8: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A711EC:
    ctx->pc = 0x80A711ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A711EC: lfs     f0, -19556(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A711ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19556);
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
label_80A711F0:
    ctx->pc = 0x80A711F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711F0u)) return;
    // 80A711F0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A711F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A711F4:
    ctx->pc = 0x80A711F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711F4u)) return;
    // 80A711F4: bc    4, 0, 0x80A71218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71218;
        }
    }

label_80A711F8:
    ctx->pc = 0x80A711F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A711F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A711F8: addi    r0, r5, 72
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(72);

label_80A711FC:
    ctx->pc = 0x80A711FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A711FCu)) return;
    // 80A711FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A71200:
    ctx->pc = 0x80A71200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71200u)) return;
    // 80A71200: add   r3, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80A71204:
    ctx->pc = 0x80A71204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71204: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71208:
    ctx->pc = 0x80A71208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71208: lbz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7120C:
    ctx->pc = 0x80A7120Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7120Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7120C: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71210:
    ctx->pc = 0x80A71210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71210u)) return;
    // 80A71210: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80A71214:
    ctx->pc = 0x80A71214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71214u)) return;
    // 80A71214: b       0x80A7121C
    {
            goto label_80A7121C;
    }

label_80A71218:
    ctx->pc = 0x80A71218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71218: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A7121C:
    ctx->pc = 0x80A7121Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7121Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A7121C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A71220:
    ctx->pc = 0x80A71220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71220u)) return;
    // 80A71220: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A71224:
    ctx->pc = 0x80A71224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71224: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A71228:
    ctx->pc = 0x80A71228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A71228: stwu     r1, -16(r1)
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
label_80A7122C:
    ctx->pc = 0x80A7122Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7122Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A7122C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71230:
    ctx->pc = 0x80A71230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71230u)) return;
    // 80A71230: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A71234:
    ctx->pc = 0x80A71234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A71234: stw     r0, 20(r1)
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
label_80A71238:
    ctx->pc = 0x80A71238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71238: stw     r31, 12(r1)
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
label_80A7123C:
    ctx->pc = 0x80A7123Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7123Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A7123C: stw     r30, 8(r1)
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
label_80A71240:
    ctx->pc = 0x80A71240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71240: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71244:
    ctx->pc = 0x80A71244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71244: lwz     r31, 32(r3)
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
label_80A71248:
    ctx->pc = 0x80A71248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71248u)) return;
    // 80A71248: cmpwi   r0, 0
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

label_80A7124C:
    ctx->pc = 0x80A7124Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7124Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A7124C: lwz     r30, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71250:
    ctx->pc = 0x80A71250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71250u)) return;
    // 80A71250: bc    4, 2, 0x80A71338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71338;
        }
    }

label_80A71254:
    ctx->pc = 0x80A71254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71254: bl      0x8048CF1C
    {
            ctx->lr = 0x80A71258u;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80A71258:
    ctx->pc = 0x80A71258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71258: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A7125C:
    ctx->pc = 0x80A7125Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7125Cu)) return;
    // 80A7125C: bl      0x8004B49C
    {
            ctx->lr = 0x80A71260u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A71260:
    ctx->pc = 0x80A71260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71260: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71260u)) return;
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
label_80A71264:
    ctx->pc = 0x80A71264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71264u)) return;
    // 80A71264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71268:
    ctx->pc = 0x80A71268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71268: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71268u)) return;
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
label_80A7126C:
    ctx->pc = 0x80A7126Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7126Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A7126C: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A7126Cu)) return;
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
label_80A71270:
    ctx->pc = 0x80A71270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71270u)) return;
    // 80A71270: bl      0x8004B35C
    {
            ctx->lr = 0x80A71274u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80A71274:
    ctx->pc = 0x80A71274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71274: lwz     r0, 28(r31)
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
label_80A71278:
    ctx->pc = 0x80A71278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71278u)) return;
    // 80A71278: cmpwi   r0, 0
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

label_80A7127C:
    ctx->pc = 0x80A7127Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7127Cu)) return;
    // 80A7127C: bc    12, 2, 0x80A7128C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A7128C;
        }
    }

label_80A71280:
    ctx->pc = 0x80A71280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71280: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71284:
    ctx->pc = 0x80A71284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71284u)) return;
    // 80A71284: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71288:
    ctx->pc = 0x80A71288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71288u)) return;
    // 80A71288: bl      0x8004AFDC
    {
            ctx->lr = 0x80A7128Cu;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80A7128C:
    ctx->pc = 0x80A7128Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7128Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7128C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71290:
    ctx->pc = 0x80A71290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71290u)) return;
    // 80A71290: cmpwi   r0, 0
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

label_80A71294:
    ctx->pc = 0x80A71294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71294u)) return;
    // 80A71294: bc    12, 2, 0x80A712A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A712A4;
        }
    }

label_80A71298:
    ctx->pc = 0x80A71298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71298: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A7129C:
    ctx->pc = 0x80A7129Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7129Cu)) return;
    // 80A7129C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A712A0:
    ctx->pc = 0x80A712A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712A0u)) return;
    // 80A712A0: bl      0x8004AF5C
    {
            ctx->lr = 0x80A712A4u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80A712A4:
    ctx->pc = 0x80A712A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A712A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A712A4: lwz     r0, 20(r31)
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
label_80A712A8:
    ctx->pc = 0x80A712A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712A8u)) return;
    // 80A712A8: cmpwi   r0, 0
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

label_80A712AC:
    ctx->pc = 0x80A712ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712ACu)) return;
    // 80A712AC: bc    12, 2, 0x80A712BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A712BC;
        }
    }

label_80A712B0:
    ctx->pc = 0x80A712B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A712B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A712B0: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A712B4:
    ctx->pc = 0x80A712B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712B4u)) return;
    // 80A712B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A712B8:
    ctx->pc = 0x80A712B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712B8u)) return;
    // 80A712B8: bl      0x8004B3E0
    {
            ctx->lr = 0x80A712BCu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80A712BC:
    ctx->pc = 0x80A712BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A712BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A712BC: lwz     r0, 32(r30)
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
label_80A712C0:
    ctx->pc = 0x80A712C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712C0u)) return;
    // 80A712C0: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A712C4:
    ctx->pc = 0x80A712C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712C4u)) return;
    // 80A712C4: bc    4, 2, 0x80A712FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A712FC;
        }
    }

label_80A712C8:
    ctx->pc = 0x80A712C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A712C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A712C8: lis     r3, -27665
    ctx->gpr[3] = ((u32)(s32)(-27665) << 16);

label_80A712CC:
    ctx->pc = 0x80A712CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712CCu)) return;
    // 80A712CC: addi    r3, r3, -25236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25236);

label_80A712D0:
    ctx->pc = 0x80A712D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A712D0: lwz     r3, 8(r3)
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
label_80A712D4:
    ctx->pc = 0x80A712D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712D4u)) return;
    // 80A712D4: bl      0x8060F594
    {
            ctx->lr = 0x80A712D8u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A712D8:
    ctx->pc = 0x80A712D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A712D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A712D8: lwz     r0, 32(r30)
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
label_80A712DC:
    ctx->pc = 0x80A712DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712DCu)) return;
    // 80A712DC: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A712E0:
    ctx->pc = 0x80A712E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712E0u)) return;
    // 80A712E0: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A712E4:
    ctx->pc = 0x80A712E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712E4u)) return;
    // 80A712E4: rlwinm r0, r0, 2, 26, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x0000003Cu;
    }

label_80A712E8:
    ctx->pc = 0x80A712E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712E8u)) return;
    // 80A712E8: addi    r4, r4, -20952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20952);

label_80A712EC:
    ctx->pc = 0x80A712ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A712EC: lfs     f1, -19532(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A712ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A712F0:
    ctx->pc = 0x80A712F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A712F0: lwzx    r3, r4, r0
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
label_80A712F4:
    ctx->pc = 0x80A712F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A712F4u)) return;
    // 80A712F4: bl      0x8060DC00
    {
            ctx->lr = 0x80A712F8u;
            ctx->pc = 0x8060DC00u;
            return;
    }

label_80A712F8:
    ctx->pc = 0x80A712F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A712F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A712F8: b       0x80A7132C
    {
            goto label_80A7132C;
    }

label_80A712FC:
    ctx->pc = 0x80A712FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A712FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A712FC: lis     r3, -27665
    ctx->gpr[3] = ((u32)(s32)(-27665) << 16);

label_80A71300:
    ctx->pc = 0x80A71300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71300u)) return;
    // 80A71300: addi    r3, r3, -25236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25236);

label_80A71304:
    ctx->pc = 0x80A71304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71304: lwz     r3, 12(r3)
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
label_80A71308:
    ctx->pc = 0x80A71308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71308u)) return;
    // 80A71308: bl      0x8060F594
    {
            ctx->lr = 0x80A7130Cu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A7130C:
    ctx->pc = 0x80A7130Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7130Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A7130C: lwz     r0, 32(r30)
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
label_80A71310:
    ctx->pc = 0x80A71310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71310u)) return;
    // 80A71310: lis     r4, -27661
    ctx->gpr[4] = ((u32)(s32)(-27661) << 16);

label_80A71314:
    ctx->pc = 0x80A71314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71314u)) return;
    // 80A71314: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71318:
    ctx->pc = 0x80A71318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71318u)) return;
    // 80A71318: rlwinm r0, r0, 2, 26, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x0000003Cu;
    }

label_80A7131C:
    ctx->pc = 0x80A7131Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7131Cu)) return;
    // 80A7131C: addi    r4, r4, -20936
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20936);

label_80A71320:
    ctx->pc = 0x80A71320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71320: lfs     f1, -19532(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71320u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71324:
    ctx->pc = 0x80A71324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71324: lwzx    r3, r4, r0
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
label_80A71328:
    ctx->pc = 0x80A71328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71328u)) return;
    // 80A71328: bl      0x8060DC00
    {
            ctx->lr = 0x80A7132Cu;
            ctx->pc = 0x8060DC00u;
            return;
    }

label_80A7132C:
    ctx->pc = 0x80A7132Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7132Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A7132C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A71330:
    ctx->pc = 0x80A71330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71330u)) return;
    // 80A71330: bl      0x8004B504
    {
            ctx->lr = 0x80A71334u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A71334:
    ctx->pc = 0x80A71334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71334: bl      0x8048CEF0
    {
            ctx->lr = 0x80A71338u;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80A71338:
    ctx->pc = 0x80A71338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71338: lwz     r0, 20(r1)
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
label_80A7133C:
    ctx->pc = 0x80A7133Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7133Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A7133C: lwz     r31, 12(r1)
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
label_80A71340:
    ctx->pc = 0x80A71340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71340: lwz     r30, 8(r1)
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
label_80A71344:
    ctx->pc = 0x80A71344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A71344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71344: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71348:
    ctx->pc = 0x80A71348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71348u)) return;
    // 80A71348: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A7134C:
    ctx->pc = 0x80A7134Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7134Cu)) return;
    // 80A7134C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A71350:
    ctx->pc = 0x80A71350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A71350: stwu     r1, -112(r1)
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
label_80A71354:
    ctx->pc = 0x80A71354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A71354: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71358:
    ctx->pc = 0x80A71358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A71358: stw     r0, 116(r1)
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
label_80A7135C:
    ctx->pc = 0x80A7135Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80A7135Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A7135C: stmw     r26, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71360:
    ctx->pc = 0x80A71360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71360u)) return;
    // 80A71360: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A71364:
    ctx->pc = 0x80A71364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71364u)) return;
    // 80A71364: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A71368:
    ctx->pc = 0x80A71368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71368u)) return;
    // 80A71368: addi    r31, r3, -21104
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-21104);

label_80A7136C:
    ctx->pc = 0x80A7136Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7136Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A7136C: lwz     r29, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71370:
    ctx->pc = 0x80A71370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71370: lwz     r28, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71374:
    ctx->pc = 0x80A71374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71374: lbz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71378:
    ctx->pc = 0x80A71378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71378: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7137C:
    ctx->pc = 0x80A7137Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7137Cu)) return;
    // 80A7137C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80A71380:
    ctx->pc = 0x80A71380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71380u)) return;
    // 80A71380: cmpwi   r0, 1
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

label_80A71384:
    ctx->pc = 0x80A71384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71384u)) return;
    // 80A71384: rlwinm r30, r3, 0, 28, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_80A71388:
    ctx->pc = 0x80A71388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71388u)) return;
    // 80A71388: bc    12, 2, 0x80A716A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A716A8;
        }
    }

label_80A7138C:
    ctx->pc = 0x80A7138Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7138Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A7138C: bc    4, 0, 0x80A7177C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A7177C;
        }
    }

label_80A71390:
    ctx->pc = 0x80A71390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71390: cmpwi   r0, 0
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

label_80A71394:
    ctx->pc = 0x80A71394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71394u)) return;
    // 80A71394: bc    4, 0, 0x80A7139C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A7139C;
        }
    }

label_80A71398:
    ctx->pc = 0x80A71398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71398: b       0x80A7177C
    {
            goto label_80A7177C;
    }

label_80A7139C:
    ctx->pc = 0x80A7139Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7139Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A7139C: lis     r4, -32601
    ctx->gpr[4] = ((u32)(s32)(-32601) << 16);

label_80A713A0:
    ctx->pc = 0x80A713A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713A0u)) return;
    // 80A713A0: lis     r3, -32601
    ctx->gpr[3] = ((u32)(s32)(-32601) << 16);

label_80A713A4:
    ctx->pc = 0x80A713A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713A4u)) return;
    // 80A713A4: addi    r4, r4, 4644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4644);

label_80A713A8:
    ctx->pc = 0x80A713A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713A8u)) return;
    // 80A713A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A713AC:
    ctx->pc = 0x80A713ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A713AC: stw     r4, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A713B0:
    ctx->pc = 0x80A713B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713B0u)) return;
    // 80A713B0: addi    r3, r3, 4648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4648);

label_80A713B4:
    ctx->pc = 0x80A713B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A713B4: stw     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A713B8:
    ctx->pc = 0x80A713B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A713B8: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A713BC:
    ctx->pc = 0x80A713BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A713BC: lwz     r0, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A713C0:
    ctx->pc = 0x80A713C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713C0u)) return;
    // 80A713C0: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A713C4:
    ctx->pc = 0x80A713C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713C4u)) return;
    // 80A713C4: bc    4, 2, 0x80A713E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A713E8;
        }
    }

label_80A713C8:
    ctx->pc = 0x80A713C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A713C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80A713C8: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_80A713CC:
    ctx->pc = 0x80A713CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713CCu)) return;
    // 80A713CC: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A713D0:
    ctx->pc = 0x80A713D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A713D0: lbzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A713D4:
    ctx->pc = 0x80A713D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713D4u)) return;
    // 80A713D4: addi    r0, r3, -16680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16680);

label_80A713D8:
    ctx->pc = 0x80A713D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713D8u)) return;
    // 80A713D8: extsb r3, r4
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80A713DC:
    ctx->pc = 0x80A713DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80A713DCu)) return;
    // 80A713DC: mulli   r3, r3, 48
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)48);

label_80A713E0:
    ctx->pc = 0x80A713E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713E0u)) return;
    // 80A713E0: add   r26, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_80A713E4:
    ctx->pc = 0x80A713E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713E4u)) return;
    // 80A713E4: b       0x80A71404
    {
            goto label_80A71404;
    }

label_80A713E8:
    ctx->pc = 0x80A713E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A713E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80A713E8: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_80A713EC:
    ctx->pc = 0x80A713ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713ECu)) return;
    // 80A713EC: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A713F0:
    ctx->pc = 0x80A713F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A713F0: lbzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A713F4:
    ctx->pc = 0x80A713F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713F4u)) return;
    // 80A713F4: addi    r0, r3, -16680
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16680);

label_80A713F8:
    ctx->pc = 0x80A713F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A713F8u)) return;
    // 80A713F8: extsb r3, r4
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80A713FC:
    ctx->pc = 0x80A713FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80A713FCu)) return;
    // 80A713FC: mulli   r3, r3, 48
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)48);

label_80A71400:
    ctx->pc = 0x80A71400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71400u)) return;
    // 80A71400: add   r26, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_80A71404:
    ctx->pc = 0x80A71404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A71404: lfs     f0, 12(r26)
    if (!ppc_fp_available_inline(ctx, 0x80A71404u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
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
label_80A71408:
    ctx->pc = 0x80A71408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A71408: stfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A71408u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7140C:
    ctx->pc = 0x80A7140Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7140Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A7140C: lfs     f0, 28(r26)
    if (!ppc_fp_available_inline(ctx, 0x80A7140Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
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
label_80A71410:
    ctx->pc = 0x80A71410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71410: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A71410u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71414:
    ctx->pc = 0x80A71414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71414: lfs     f0, 44(r26)
    if (!ppc_fp_available_inline(ctx, 0x80A71414u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(44);
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
label_80A71418:
    ctx->pc = 0x80A71418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71418: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A71418u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7141C:
    ctx->pc = 0x80A7141Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7141Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7141C: lfs     f1, 20(r26)
    if (!ppc_fp_available_inline(ctx, 0x80A7141Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71420:
    ctx->pc = 0x80A71420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71420: lfs     f2, 36(r26)
    if (!ppc_fp_available_inline(ctx, 0x80A71420u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(36);
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
label_80A71424:
    ctx->pc = 0x80A71424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71424u)) return;
    // 80A71424: bl      0x80401910
    {
            ctx->lr = 0x80A71428u;
            ctx->pc = 0x80401910u;
            return;
    }

label_80A71428:
    ctx->pc = 0x80A71428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71428: stw     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7142C:
    ctx->pc = 0x80A7142Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7142Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A7142C: lfs     f1, 4(r26)
    if (!ppc_fp_available_inline(ctx, 0x80A7142Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71430:
    ctx->pc = 0x80A71430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71430u)) return;
    // 80A71430: bl      0x804019B8
    {
            ctx->lr = 0x80A71434u;
            ctx->pc = 0x804019B8u;
            return;
    }

label_80A71434:
    ctx->pc = 0x80A71434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A71434: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80A71438:
    ctx->pc = 0x80A71438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71438: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7143C:
    ctx->pc = 0x80A7143Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7143Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A7143C: lfs     f1, 16(r26)
    if (!ppc_fp_available_inline(ctx, 0x80A7143Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71440:
    ctx->pc = 0x80A71440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71440: lfs     f2, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x80A71440u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
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
label_80A71444:
    ctx->pc = 0x80A71444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71444u)) return;
    // 80A71444: bl      0x80401910
    {
            ctx->lr = 0x80A71448u;
            ctx->pc = 0x80401910u;
            return;
    }

label_80A71448:
    ctx->pc = 0x80A71448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71448: stw     r3, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7144C:
    ctx->pc = 0x80A7144Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7144Cu)) return;
    // 80A7144C: bl      0x8000DD2C
    {
            ctx->lr = 0x80A71450u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80A71450:
    ctx->pc = 0x80A71450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 27u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 27u : 1u;
    // 80A71450: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_80A71454:
    ctx->pc = 0x80A71454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71454u)) return;
    // 80A71454: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A71458:
    ctx->pc = 0x80A71458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A71458: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7145C:
    ctx->pc = 0x80A7145Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7145Cu)) return;
    // 80A7145C: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71460:
    ctx->pc = 0x80A71460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A71460: lfd     f2, -19512(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71460u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71464:
    ctx->pc = 0x80A71464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71464u)) return;
    // 80A71464: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71468:
    ctx->pc = 0x80A71468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A71468: stw     r0, 8(r1)
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
label_80A7146C:
    ctx->pc = 0x80A7146Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7146Cu)) return;
    // 80A7146C: addi    r5, r3, -19528
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-19528);

label_80A71470:
    ctx->pc = 0x80A71470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A71470: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A71470u)) return;
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
label_80A71474:
    ctx->pc = 0x80A71474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71474u)) return;
    // 80A71474: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71478:
    ctx->pc = 0x80A71478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A71478: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A71478u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7147C:
    ctx->pc = 0x80A7147Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7147Cu)) return;
    // 80A7147C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71480:
    ctx->pc = 0x80A71480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71480u)) return;
    // 80A71480: addi    r5, r4, -19536
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-19536);

label_80A71484:
    ctx->pc = 0x80A71484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71484u)) return;
    // 80A71484: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A71484u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_80A71488:
    ctx->pc = 0x80A71488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71488u)) return;
    // 80A71488: addi    r4, r3, -19532
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19532);

label_80A7148C:
    ctx->pc = 0x80A7148Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80A7148Cu)) return;
    // 80A7148C: mulli   r30, r30, 12
    ctx->gpr[30] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)12);

label_80A71490:
    ctx->pc = 0x80A71490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A71490: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A71490u)) return;
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
label_80A71494:
    ctx->pc = 0x80A71494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71494u)) return;
    // 80A71494: addi    r3, r31, 56
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(56);

label_80A71498:
    ctx->pc = 0x80A71498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71498u)) return;
    // 80A71498: fmuls   f3, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A71498u)) return;
    ppc_fmuls(ctx, 3, 0, 1);

label_80A7149C:
    ctx->pc = 0x80A7149Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7149Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A7149C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A7149Cu)) return;
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
label_80A714A0:
    ctx->pc = 0x80A714A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A714A0: lfsx    f0, r3, r30
    if (!ppc_fp_available_inline(ctx, 0x80A714A0u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[30];
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
label_80A714A4:
    ctx->pc = 0x80A714A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714A4u)) return;
    // 80A714A4: fmadds f1, f2, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80A714A4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[3], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A714A8:
    ctx->pc = 0x80A714A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714A8u)) return;
    // 80A714A8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A714A8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80A714AC:
    ctx->pc = 0x80A714ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A714AC: stfs     f0, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A714ACu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A714B0:
    ctx->pc = 0x80A714B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714B0u)) return;
    // 80A714B0: bl      0x8000DD2C
    {
            ctx->lr = 0x80A714B4u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80A714B4:
    ctx->pc = 0x80A714B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A714B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80A714B4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_80A714B8:
    ctx->pc = 0x80A714B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714B8u)) return;
    // 80A714B8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A714BC:
    ctx->pc = 0x80A714BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A714BC: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A714C0:
    ctx->pc = 0x80A714C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714C0u)) return;
    // 80A714C0: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A714C4:
    ctx->pc = 0x80A714C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A714C4: lfd     f2, -19512(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A714C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A714C8:
    ctx->pc = 0x80A714C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714C8u)) return;
    // 80A714C8: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A714CC:
    ctx->pc = 0x80A714CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A714CC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A714D0:
    ctx->pc = 0x80A714D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714D0u)) return;
    // 80A714D0: addi    r5, r3, -19528
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-19528);

label_80A714D4:
    ctx->pc = 0x80A714D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A714D4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A714D4u)) return;
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
label_80A714D8:
    ctx->pc = 0x80A714D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714D8u)) return;
    // 80A714D8: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A714DC:
    ctx->pc = 0x80A714DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A714DC: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A714DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A714E0:
    ctx->pc = 0x80A714E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714E0u)) return;
    // 80A714E0: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A714E4:
    ctx->pc = 0x80A714E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714E4u)) return;
    // 80A714E4: addi    r0, r31, 56
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(56);

label_80A714E8:
    ctx->pc = 0x80A714E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714E8u)) return;
    // 80A714E8: fsubs   f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A714E8u)) return;
    ppc_fsubs(ctx, 3, 1, 2);

label_80A714EC:
    ctx->pc = 0x80A714ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A714EC: lfs     f1, -19532(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A714ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A714F0:
    ctx->pc = 0x80A714F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A714F0: lfs     f2, -19536(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A714F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19536);
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
label_80A714F4:
    ctx->pc = 0x80A714F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714F4u)) return;
    // 80A714F4: add   r3, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80A714F8:
    ctx->pc = 0x80A714F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714F8u)) return;
    // 80A714F8: fmuls   f3, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A714F8u)) return;
    ppc_fmuls(ctx, 3, 0, 3);

label_80A714FC:
    ctx->pc = 0x80A714FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A714FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A714FC: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A714FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80A71500:
    ctx->pc = 0x80A71500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71500u)) return;
    // 80A71500: fmadds f1, f2, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80A71500u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[3], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A71504:
    ctx->pc = 0x80A71504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71504u)) return;
    // 80A71504: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A71504u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80A71508:
    ctx->pc = 0x80A71508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71508: stfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A71508u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7150C:
    ctx->pc = 0x80A7150Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7150Cu)) return;
    // 80A7150C: bl      0x8000DD2C
    {
            ctx->lr = 0x80A71510u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80A71510:
    ctx->pc = 0x80A71510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80A71510: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_80A71514:
    ctx->pc = 0x80A71514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71514u)) return;
    // 80A71514: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A71518:
    ctx->pc = 0x80A71518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A71518: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7151C:
    ctx->pc = 0x80A7151Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7151Cu)) return;
    // 80A7151C: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71520:
    ctx->pc = 0x80A71520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A71520: lfd     f2, -19512(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71520u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71524:
    ctx->pc = 0x80A71524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71524u)) return;
    // 80A71524: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71528:
    ctx->pc = 0x80A71528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A71528: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7152C:
    ctx->pc = 0x80A7152Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7152Cu)) return;
    // 80A7152C: addi    r5, r3, -19528
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-19528);

label_80A71530:
    ctx->pc = 0x80A71530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A71530: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A71530u)) return;
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
label_80A71534:
    ctx->pc = 0x80A71534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71534u)) return;
    // 80A71534: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71538:
    ctx->pc = 0x80A71538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A71538: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A71538u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7153C:
    ctx->pc = 0x80A7153Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7153Cu)) return;
    // 80A7153C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71540:
    ctx->pc = 0x80A71540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71540u)) return;
    // 80A71540: addi    r0, r31, 56
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(56);

label_80A71544:
    ctx->pc = 0x80A71544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71544u)) return;
    // 80A71544: fsubs   f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A71544u)) return;
    ppc_fsubs(ctx, 3, 1, 2);

label_80A71548:
    ctx->pc = 0x80A71548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A71548: lfs     f1, -19532(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71548u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7154C:
    ctx->pc = 0x80A7154Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7154Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A7154C: lfs     f2, -19536(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A7154Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19536);
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
label_80A71550:
    ctx->pc = 0x80A71550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71550u)) return;
    // 80A71550: add   r3, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80A71554:
    ctx->pc = 0x80A71554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71554u)) return;
    // 80A71554: fmuls   f3, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A71554u)) return;
    ppc_fmuls(ctx, 3, 0, 3);

label_80A71558:
    ctx->pc = 0x80A71558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71558: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71558u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
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
label_80A7155C:
    ctx->pc = 0x80A7155Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7155Cu)) return;
    // 80A7155C: fmadds f1, f2, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80A7155Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[3], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A71560:
    ctx->pc = 0x80A71560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71560u)) return;
    // 80A71560: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A71560u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80A71564:
    ctx->pc = 0x80A71564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71564: stfs     f0, 16(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A71564u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71568:
    ctx->pc = 0x80A71568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71568u)) return;
    // 80A71568: bl      0x8000DD2C
    {
            ctx->lr = 0x80A7156Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80A7156C:
    ctx->pc = 0x80A7156Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7156Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    // 80A7156C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_80A71570:
    ctx->pc = 0x80A71570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71570u)) return;
    // 80A71570: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A71574:
    ctx->pc = 0x80A71574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A71574: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71578:
    ctx->pc = 0x80A71578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71578u)) return;
    // 80A71578: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A7157C:
    ctx->pc = 0x80A7157Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7157Cu)) return;
    // 80A7157C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71580:
    ctx->pc = 0x80A71580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A71580: lfd     f2, -19512(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71580u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71584:
    ctx->pc = 0x80A71584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A71584: stw     r0, 32(r1)
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
label_80A71588:
    ctx->pc = 0x80A71588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71588u)) return;
    // 80A71588: addi    r5, r3, -19528
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-19528);

label_80A7158C:
    ctx->pc = 0x80A7158Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7158Cu)) return;
    // 80A7158C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71590:
    ctx->pc = 0x80A71590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A71590: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A71590u)) return;
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
label_80A71594:
    ctx->pc = 0x80A71594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A71594: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A71594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71598:
    ctx->pc = 0x80A71598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71598u)) return;
    // 80A71598: addi    r4, r3, -19524
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19524);

label_80A7159C:
    ctx->pc = 0x80A7159Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7159Cu)) return;
    // 80A7159C: addi    r3, r31, 104
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(104);

label_80A715A0:
    ctx->pc = 0x80A715A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715A0u)) return;
    // 80A715A0: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A715A0u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_80A715A4:
    ctx->pc = 0x80A715A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A715A4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A715A4u)) return;
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
label_80A715A8:
    ctx->pc = 0x80A715A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A715A8: lwzx    r0, r3, r30
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[30];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A715AC:
    ctx->pc = 0x80A715ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715ACu)) return;
    // 80A715AC: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A715ACu)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80A715B0:
    ctx->pc = 0x80A715B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715B0u)) return;
    // 80A715B0: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A715B0u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80A715B4:
    ctx->pc = 0x80A715B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715B4u)) return;
    // 80A715B4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A715B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80A715B8:
    ctx->pc = 0x80A715B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A715B8: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A715B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A715BC:
    ctx->pc = 0x80A715BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A715BC: lwz     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A715C0:
    ctx->pc = 0x80A715C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715C0u)) return;
    // 80A715C0: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80A715C4:
    ctx->pc = 0x80A715C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A715C4: stw     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A715C8:
    ctx->pc = 0x80A715C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715C8u)) return;
    // 80A715C8: bl      0x8000DD2C
    {
            ctx->lr = 0x80A715CCu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80A715CC:
    ctx->pc = 0x80A715CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A715CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    // 80A715CC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_80A715D0:
    ctx->pc = 0x80A715D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715D0u)) return;
    // 80A715D0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A715D4:
    ctx->pc = 0x80A715D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A715D4: stw     r3, 52(r1)
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
label_80A715D8:
    ctx->pc = 0x80A715D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715D8u)) return;
    // 80A715D8: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A715DC:
    ctx->pc = 0x80A715DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715DCu)) return;
    // 80A715DC: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A715E0:
    ctx->pc = 0x80A715E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A715E0: lfd     f2, -19512(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A715E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A715E4:
    ctx->pc = 0x80A715E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A715E4: stw     r0, 48(r1)
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
label_80A715E8:
    ctx->pc = 0x80A715E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715E8u)) return;
    // 80A715E8: addi    r5, r3, -19528
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-19528);

label_80A715EC:
    ctx->pc = 0x80A715ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715ECu)) return;
    // 80A715EC: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A715F0:
    ctx->pc = 0x80A715F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A715F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A715F0u)) return;
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
label_80A715F4:
    ctx->pc = 0x80A715F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A715F4: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A715F4u)) return;
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
label_80A715F8:
    ctx->pc = 0x80A715F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715F8u)) return;
    // 80A715F8: addi    r4, r3, -19524
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19524);

label_80A715FC:
    ctx->pc = 0x80A715FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A715FCu)) return;
    // 80A715FC: addi    r0, r31, 104
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(104);

label_80A71600:
    ctx->pc = 0x80A71600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71600u)) return;
    // 80A71600: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A71600u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_80A71604:
    ctx->pc = 0x80A71604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71604u)) return;
    // 80A71604: add   r3, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80A71608:
    ctx->pc = 0x80A71608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A71608: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71608u)) return;
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
label_80A7160C:
    ctx->pc = 0x80A7160Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7160Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A7160C: lwz     r0, 4(r3)
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
label_80A71610:
    ctx->pc = 0x80A71610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71610u)) return;
    // 80A71610: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A71610u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80A71614:
    ctx->pc = 0x80A71614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71614u)) return;
    // 80A71614: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A71614u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80A71618:
    ctx->pc = 0x80A71618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71618u)) return;
    // 80A71618: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71618u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80A7161C:
    ctx->pc = 0x80A7161Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7161Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A7161C: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A7161Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71620:
    ctx->pc = 0x80A71620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71620: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71624:
    ctx->pc = 0x80A71624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71624u)) return;
    // 80A71624: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80A71628:
    ctx->pc = 0x80A71628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71628: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7162C:
    ctx->pc = 0x80A7162Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7162Cu)) return;
    // 80A7162C: bl      0x8000DD2C
    {
            ctx->lr = 0x80A71630u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80A71630:
    ctx->pc = 0x80A71630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    // 80A71630: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_80A71634:
    ctx->pc = 0x80A71634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71634u)) return;
    // 80A71634: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A71638:
    ctx->pc = 0x80A71638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A71638: stw     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7163C:
    ctx->pc = 0x80A7163Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7163Cu)) return;
    // 80A7163C: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71640:
    ctx->pc = 0x80A71640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71640u)) return;
    // 80A71640: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71644:
    ctx->pc = 0x80A71644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A71644: lfd     f2, -19512(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71644u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71648:
    ctx->pc = 0x80A71648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A71648: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7164C:
    ctx->pc = 0x80A7164Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7164Cu)) return;
    // 80A7164C: addi    r5, r3, -19528
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-19528);

label_80A71650:
    ctx->pc = 0x80A71650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71650u)) return;
    // 80A71650: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71654:
    ctx->pc = 0x80A71654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A71654: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A71654u)) return;
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
label_80A71658:
    ctx->pc = 0x80A71658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A71658: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A71658u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7165C:
    ctx->pc = 0x80A7165Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7165Cu)) return;
    // 80A7165C: addi    r4, r3, -19524
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19524);

label_80A71660:
    ctx->pc = 0x80A71660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71660u)) return;
    // 80A71660: addi    r0, r31, 104
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(104);

label_80A71664:
    ctx->pc = 0x80A71664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71664u)) return;
    // 80A71664: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A71664u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_80A71668:
    ctx->pc = 0x80A71668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71668u)) return;
    // 80A71668: add   r3, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80A7166C:
    ctx->pc = 0x80A7166Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7166Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A7166C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A7166Cu)) return;
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
label_80A71670:
    ctx->pc = 0x80A71670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71670u)) return;
    // 80A71670: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A71674:
    ctx->pc = 0x80A71674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A71674: lwz     r3, 8(r3)
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
label_80A71678:
    ctx->pc = 0x80A71678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71678u)) return;
    // 80A71678: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A71678u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80A7167C:
    ctx->pc = 0x80A7167Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7167Cu)) return;
    // 80A7167C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A7167Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80A71680:
    ctx->pc = 0x80A71680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71680u)) return;
    // 80A71680: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71680u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80A71684:
    ctx->pc = 0x80A71684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A71684: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A71684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71688:
    ctx->pc = 0x80A71688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A71688: lwz     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7168C:
    ctx->pc = 0x80A7168Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7168Cu)) return;
    // 80A7168C: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80A71690:
    ctx->pc = 0x80A71690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71690: stw     r3, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71694:
    ctx->pc = 0x80A71694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71694: sth     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71698:
    ctx->pc = 0x80A71698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71698: lbz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7169C:
    ctx->pc = 0x80A7169Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7169Cu)) return;
    // 80A7169C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80A716A0:
    ctx->pc = 0x80A716A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A716A0: stb     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716A4:
    ctx->pc = 0x80A716A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716A4u)) return;
    // 80A716A4: b       0x80A71784
    {
            goto label_80A71784;
    }

label_80A716A8:
    ctx->pc = 0x80A716A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 38u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A716A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 38u : 1u;
    // 80A716A8: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A716AC:
    ctx->pc = 0x80A716ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80A716AC: lfs     f1, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A716ACu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716B0:
    ctx->pc = 0x80A716B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80A716B0: lfs     f0, -19520(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A716B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19520);
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
label_80A716B4:
    ctx->pc = 0x80A716B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716B4u)) return;
    // 80A716B4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A716B4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A716B8:
    ctx->pc = 0x80A716B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80A716B8: stfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A716B8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716BC:
    ctx->pc = 0x80A716BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80A716BC: lfs     f1, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A716BCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716C0:
    ctx->pc = 0x80A716C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A716C0: lfs     f0, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A716C0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
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
label_80A716C4:
    ctx->pc = 0x80A716C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716C4u)) return;
    // 80A716C4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A716C4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A716C8:
    ctx->pc = 0x80A716C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A716C8: stfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A716C8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716CC:
    ctx->pc = 0x80A716CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A716CC: lfs     f1, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A716CCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716D0:
    ctx->pc = 0x80A716D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A716D0: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A716D0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
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
label_80A716D4:
    ctx->pc = 0x80A716D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716D4u)) return;
    // 80A716D4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A716D4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A716D8:
    ctx->pc = 0x80A716D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A716D8: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A716D8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716DC:
    ctx->pc = 0x80A716DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A716DC: lfs     f1, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A716DCu)) return;
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
label_80A716E0:
    ctx->pc = 0x80A716E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A716E0: lfs     f0, 16(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A716E0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
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
label_80A716E4:
    ctx->pc = 0x80A716E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716E4u)) return;
    // 80A716E4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A716E4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A716E8:
    ctx->pc = 0x80A716E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A716E8: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A716E8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716EC:
    ctx->pc = 0x80A716ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A716EC: lwz     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716F0:
    ctx->pc = 0x80A716F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A716F0: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A716F4:
    ctx->pc = 0x80A716F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716F4u)) return;
    // 80A716F4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80A716F8:
    ctx->pc = 0x80A716F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716F8u)) return;
    // 80A716F8: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A716FC:
    ctx->pc = 0x80A716FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A716FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A716FC: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71700:
    ctx->pc = 0x80A71700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A71700: lwz     r3, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71704:
    ctx->pc = 0x80A71704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A71704: lwz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71708:
    ctx->pc = 0x80A71708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71708u)) return;
    // 80A71708: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80A7170C:
    ctx->pc = 0x80A7170Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7170Cu)) return;
    // 80A7170C: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71710:
    ctx->pc = 0x80A71710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A71710: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71714:
    ctx->pc = 0x80A71714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A71714: lwz     r3, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71718:
    ctx->pc = 0x80A71718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A71718: lwz     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7171C:
    ctx->pc = 0x80A7171Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7171Cu)) return;
    // 80A7171C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80A71720:
    ctx->pc = 0x80A71720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71720u)) return;
    // 80A71720: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71724:
    ctx->pc = 0x80A71724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71724: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71728:
    ctx->pc = 0x80A71728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71728: lhz     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7172C:
    ctx->pc = 0x80A7172Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7172Cu)) return;
    // 80A7172C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80A71730:
    ctx->pc = 0x80A71730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71730: sth     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71734:
    ctx->pc = 0x80A71734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71734: lhz     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71738:
    ctx->pc = 0x80A71738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71738u)) return;
    // 80A71738: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A7173C:
    ctx->pc = 0x80A7173Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7173Cu)) return;
    // 80A7173C: bc    4, 2, 0x80A71758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71758;
        }
    }

label_80A71740:
    ctx->pc = 0x80A71740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A71740: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71744:
    ctx->pc = 0x80A71744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71744u)) return;
    // 80A71744: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_80A71748:
    ctx->pc = 0x80A71748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71748u)) return;
    // 80A71748: addi    r5, r4, -19516
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-19516);

label_80A7174C:
    ctx->pc = 0x80A7174Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7174Cu)) return;
    // 80A7174C: addi    r4, r31, 184
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(184);

label_80A71750:
    ctx->pc = 0x80A71750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71750: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A71750u)) return;
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
label_80A71754:
    ctx->pc = 0x80A71754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71754u)) return;
    // 80A71754: bl      0x8044DFC0
    {
            ctx->lr = 0x80A71758u;
            ctx->pc = 0x8044DFC0u;
            return;
    }

label_80A71758:
    ctx->pc = 0x80A71758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A71758: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A7175C:
    ctx->pc = 0x80A7175Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7175Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A7175C: lfs     f1, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A7175Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71760:
    ctx->pc = 0x80A71760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71760: lfs     f0, -19564(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71760u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19564);
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
label_80A71764:
    ctx->pc = 0x80A71764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71764u)) return;
    // 80A71764: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71764u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A71768:
    ctx->pc = 0x80A71768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71768u)) return;
    // 80A71768: bc    4, 0, 0x80A71784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71784;
        }
    }

label_80A7176C:
    ctx->pc = 0x80A7176Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7176Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A7176C: lbz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71770:
    ctx->pc = 0x80A71770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71770u)) return;
    // 80A71770: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80A71774:
    ctx->pc = 0x80A71774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71774: stb     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71778:
    ctx->pc = 0x80A71778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71778u)) return;
    // 80A71778: b       0x80A71784
    {
            goto label_80A71784;
    }

label_80A7177C:
    ctx->pc = 0x80A7177Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7177Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A7177C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80A71780:
    ctx->pc = 0x80A71780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71780u)) return;
    // 80A71780: bl      0x8050F9E0
    {
            ctx->lr = 0x80A71784u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80A71784:
    ctx->pc = 0x80A71784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A71784: lis     r3, -32687
    ctx->gpr[3] = ((u32)(s32)(-32687) << 16);

label_80A71788:
    ctx->pc = 0x80A71788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71788: lwz     r4, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7178C:
    ctx->pc = 0x80A7178Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7178Cu)) return;
    // 80A7178C: addi    r0, r3, -1552
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1552);

label_80A71790:
    ctx->pc = 0x80A71790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71790u)) return;
    // 80A71790: cmplw   r4, r0
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

label_80A71794:
    ctx->pc = 0x80A71794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71794u)) return;
    // 80A71794: bc    12, 2, 0x80A7188C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A7188C;
        }
    }

label_80A71798:
    ctx->pc = 0x80A71798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A71798: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A7179C:
    ctx->pc = 0x80A7179Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7179Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A7179C: lwz     r28, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A717A0:
    ctx->pc = 0x80A717A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A717A0: lwz     r0, 4120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A717A4:
    ctx->pc = 0x80A717A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A717A4: lwz     r27, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A717A8:
    ctx->pc = 0x80A717A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717A8u)) return;
    // 80A717A8: cmpwi   r0, 0
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

label_80A717AC:
    ctx->pc = 0x80A717ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717ACu)) return;
    // 80A717AC: bc    4, 2, 0x80A7188C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A7188C;
        }
    }

label_80A717B0:
    ctx->pc = 0x80A717B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A717B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A717B0: bl      0x8048CF1C
    {
            ctx->lr = 0x80A717B4u;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80A717B4:
    ctx->pc = 0x80A717B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A717B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A717B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A717B8:
    ctx->pc = 0x80A717B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717B8u)) return;
    // 80A717B8: bl      0x8004B49C
    {
            ctx->lr = 0x80A717BCu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A717BC:
    ctx->pc = 0x80A717BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A717BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A717BC: lfs     f1, 32(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A717BCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A717C0:
    ctx->pc = 0x80A717C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717C0u)) return;
    // 80A717C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A717C4:
    ctx->pc = 0x80A717C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A717C4: lfs     f2, 36(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A717C4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
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
label_80A717C8:
    ctx->pc = 0x80A717C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A717C8: lfs     f3, 40(r28)
    if (!ppc_fp_available_inline(ctx, 0x80A717C8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
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
label_80A717CC:
    ctx->pc = 0x80A717CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717CCu)) return;
    // 80A717CC: bl      0x8004B35C
    {
            ctx->lr = 0x80A717D0u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80A717D0:
    ctx->pc = 0x80A717D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A717D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A717D0: lwz     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A717D4:
    ctx->pc = 0x80A717D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717D4u)) return;
    // 80A717D4: cmpwi   r0, 0
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

label_80A717D8:
    ctx->pc = 0x80A717D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717D8u)) return;
    // 80A717D8: bc    12, 2, 0x80A717E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A717E8;
        }
    }

label_80A717DC:
    ctx->pc = 0x80A717DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A717DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A717DC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A717E0:
    ctx->pc = 0x80A717E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717E0u)) return;
    // 80A717E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A717E4:
    ctx->pc = 0x80A717E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717E4u)) return;
    // 80A717E4: bl      0x8004AFDC
    {
            ctx->lr = 0x80A717E8u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80A717E8:
    ctx->pc = 0x80A717E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A717E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A717E8: lwz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A717EC:
    ctx->pc = 0x80A717ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717ECu)) return;
    // 80A717EC: cmpwi   r0, 0
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

label_80A717F0:
    ctx->pc = 0x80A717F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717F0u)) return;
    // 80A717F0: bc    12, 2, 0x80A71800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71800;
        }
    }

label_80A717F4:
    ctx->pc = 0x80A717F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A717F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A717F4: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A717F8:
    ctx->pc = 0x80A717F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717F8u)) return;
    // 80A717F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A717FC:
    ctx->pc = 0x80A717FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A717FCu)) return;
    // 80A717FC: bl      0x8004AF5C
    {
            ctx->lr = 0x80A71800u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80A71800:
    ctx->pc = 0x80A71800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71800: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71804:
    ctx->pc = 0x80A71804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71804u)) return;
    // 80A71804: cmpwi   r0, 0
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

label_80A71808:
    ctx->pc = 0x80A71808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71808u)) return;
    // 80A71808: bc    12, 2, 0x80A71818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71818;
        }
    }

label_80A7180C:
    ctx->pc = 0x80A7180Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7180Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A7180C: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71810:
    ctx->pc = 0x80A71810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71810u)) return;
    // 80A71810: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71814:
    ctx->pc = 0x80A71814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71814u)) return;
    // 80A71814: bl      0x8004B3E0
    {
            ctx->lr = 0x80A71818u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80A71818:
    ctx->pc = 0x80A71818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71818: lwz     r0, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A7181C:
    ctx->pc = 0x80A7181Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7181Cu)) return;
    // 80A7181C: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A71820:
    ctx->pc = 0x80A71820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71820u)) return;
    // 80A71820: bc    4, 2, 0x80A71854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71854;
        }
    }

label_80A71824:
    ctx->pc = 0x80A71824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71824: lis     r3, -27665
    ctx->gpr[3] = ((u32)(s32)(-27665) << 16);

label_80A71828:
    ctx->pc = 0x80A71828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71828u)) return;
    // 80A71828: addi    r3, r3, -25236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25236);

label_80A7182C:
    ctx->pc = 0x80A7182Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7182Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A7182C: lwz     r3, 8(r3)
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
label_80A71830:
    ctx->pc = 0x80A71830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71830u)) return;
    // 80A71830: bl      0x8060F594
    {
            ctx->lr = 0x80A71834u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A71834:
    ctx->pc = 0x80A71834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71834: lwz     r0, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71838:
    ctx->pc = 0x80A71838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71838u)) return;
    // 80A71838: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A7183C:
    ctx->pc = 0x80A7183Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7183Cu)) return;
    // 80A7183C: addi    r4, r31, 152
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(152);

label_80A71840:
    ctx->pc = 0x80A71840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71840: lfs     f1, -19532(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71840u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71844:
    ctx->pc = 0x80A71844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71844u)) return;
    // 80A71844: rlwinm r0, r0, 2, 26, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x0000003Cu;
    }

label_80A71848:
    ctx->pc = 0x80A71848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71848: lwzx    r3, r4, r0
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
label_80A7184C:
    ctx->pc = 0x80A7184Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7184Cu)) return;
    // 80A7184C: bl      0x8060DC00
    {
            ctx->lr = 0x80A71850u;
            ctx->pc = 0x8060DC00u;
            return;
    }

label_80A71850:
    ctx->pc = 0x80A71850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71850: b       0x80A71880
    {
            goto label_80A71880;
    }

label_80A71854:
    ctx->pc = 0x80A71854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71854: lis     r3, -27665
    ctx->gpr[3] = ((u32)(s32)(-27665) << 16);

label_80A71858:
    ctx->pc = 0x80A71858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71858u)) return;
    // 80A71858: addi    r3, r3, -25236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25236);

label_80A7185C:
    ctx->pc = 0x80A7185Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7185Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A7185C: lwz     r3, 12(r3)
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
label_80A71860:
    ctx->pc = 0x80A71860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71860u)) return;
    // 80A71860: bl      0x8060F594
    {
            ctx->lr = 0x80A71864u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A71864:
    ctx->pc = 0x80A71864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71864: lwz     r0, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71868:
    ctx->pc = 0x80A71868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71868u)) return;
    // 80A71868: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A7186C:
    ctx->pc = 0x80A7186Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7186Cu)) return;
    // 80A7186C: addi    r4, r31, 168
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(168);

label_80A71870:
    ctx->pc = 0x80A71870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71870: lfs     f1, -19532(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71870u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71874:
    ctx->pc = 0x80A71874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71874u)) return;
    // 80A71874: rlwinm r0, r0, 2, 26, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x0000003Cu;
    }

label_80A71878:
    ctx->pc = 0x80A71878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71878: lwzx    r3, r4, r0
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
label_80A7187C:
    ctx->pc = 0x80A7187Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7187Cu)) return;
    // 80A7187C: bl      0x8060DC00
    {
            ctx->lr = 0x80A71880u;
            ctx->pc = 0x8060DC00u;
            return;
    }

label_80A71880:
    ctx->pc = 0x80A71880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71880: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A71884:
    ctx->pc = 0x80A71884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71884u)) return;
    // 80A71884: bl      0x8004B504
    {
            ctx->lr = 0x80A71888u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A71888:
    ctx->pc = 0x80A71888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71888: bl      0x8048CEF0
    {
            ctx->lr = 0x80A7188Cu;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80A7188C:
    ctx->pc = 0x80A7188Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7188Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A7188C: lmw     r26, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71890:
    ctx->pc = 0x80A71890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71890: lwz     r0, 116(r1)
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
label_80A71894:
    ctx->pc = 0x80A71894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A71894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71894: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71898:
    ctx->pc = 0x80A71898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71898u)) return;
    // 80A71898: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80A7189C:
    ctx->pc = 0x80A7189Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7189Cu)) return;
    // 80A7189C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A718A0:
    ctx->pc = 0x80A718A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A718A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A718A0: stwu     r1, -16(r1)
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
label_80A718A4:
    ctx->pc = 0x80A718A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A718A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A718A8:
    ctx->pc = 0x80A718A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A718A8: stw     r0, 20(r1)
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
label_80A718AC:
    ctx->pc = 0x80A718ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A718AC: stw     r31, 12(r1)
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
label_80A718B0:
    ctx->pc = 0x80A718B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A718B0: lwz     r31, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A718B4:
    ctx->pc = 0x80A718B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A718B4: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A718B8:
    ctx->pc = 0x80A718B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718B8u)) return;
    // 80A718B8: cmplwi  r4, 0x0000
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

label_80A718BC:
    ctx->pc = 0x80A718BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718BCu)) return;
    // 80A718BC: bc    12, 2, 0x80A718D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A718D4;
        }
    }

label_80A718C0:
    ctx->pc = 0x80A718C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A718C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A718C0: bl      0x8047EB28
    {
            ctx->lr = 0x80A718C4u;
            ctx->pc = 0x8047EB28u;
            return;
    }

label_80A718C4:
    ctx->pc = 0x80A718C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A718C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A718C4: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A718C8:
    ctx->pc = 0x80A718C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718C8u)) return;
    // 80A718C8: bl      0x8047EA34
    {
            ctx->lr = 0x80A718CCu;
            ctx->pc = 0x8047EA34u;
            return;
    }

label_80A718CC:
    ctx->pc = 0x80A718CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A718CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A718CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A718D0:
    ctx->pc = 0x80A718D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A718D0: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A718D4:
    ctx->pc = 0x80A718D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A718D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A718D4: lwz     r0, 20(r1)
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
label_80A718D8:
    ctx->pc = 0x80A718D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A718D8: lwz     r31, 12(r1)
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
label_80A718DC:
    ctx->pc = 0x80A718DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A718DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A718DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A718E0:
    ctx->pc = 0x80A718E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718E0u)) return;
    // 80A718E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A718E4:
    ctx->pc = 0x80A718E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718E4u)) return;
    // 80A718E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A718E8:
    ctx->pc = 0x80A718E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A718E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A718E8: stwu     r1, -16(r1)
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
label_80A718EC:
    ctx->pc = 0x80A718ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A718EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A718F0:
    ctx->pc = 0x80A718F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718F0u)) return;
    // 80A718F0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A718F4:
    ctx->pc = 0x80A718F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A718F4: stw     r0, 20(r1)
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
label_80A718F8:
    ctx->pc = 0x80A718F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A718F8: stw     r31, 12(r1)
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
label_80A718FC:
    ctx->pc = 0x80A718FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A718FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A718FC: stw     r30, 8(r1)
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
label_80A71900:
    ctx->pc = 0x80A71900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71900: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71904:
    ctx->pc = 0x80A71904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71904: lwz     r31, 32(r3)
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
label_80A71908:
    ctx->pc = 0x80A71908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71908u)) return;
    // 80A71908: cmpwi   r0, 0
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

label_80A7190C:
    ctx->pc = 0x80A7190Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7190Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A7190C: lwz     r30, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71910:
    ctx->pc = 0x80A71910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71910u)) return;
    // 80A71910: bc    4, 2, 0x80A71978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71978;
        }
    }

label_80A71914:
    ctx->pc = 0x80A71914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71914: bl      0x8048CF1C
    {
            ctx->lr = 0x80A71918u;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80A71918:
    ctx->pc = 0x80A71918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71918: lis     r3, -27665
    ctx->gpr[3] = ((u32)(s32)(-27665) << 16);

label_80A7191C:
    ctx->pc = 0x80A7191Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7191Cu)) return;
    // 80A7191C: addi    r3, r3, -25236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25236);

label_80A71920:
    ctx->pc = 0x80A71920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71920: lwz     r3, 0(r3)
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
label_80A71924:
    ctx->pc = 0x80A71924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71924u)) return;
    // 80A71924: bl      0x8060F594
    {
            ctx->lr = 0x80A71928u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A71928:
    ctx->pc = 0x80A71928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71928: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A7192C:
    ctx->pc = 0x80A7192Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7192Cu)) return;
    // 80A7192C: bl      0x8004B49C
    {
            ctx->lr = 0x80A71930u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A71930:
    ctx->pc = 0x80A71930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71930: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71930u)) return;
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
label_80A71934:
    ctx->pc = 0x80A71934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71934u)) return;
    // 80A71934: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71938:
    ctx->pc = 0x80A71938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71938: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71938u)) return;
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
label_80A7193C:
    ctx->pc = 0x80A7193Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7193Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A7193C: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A7193Cu)) return;
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
label_80A71940:
    ctx->pc = 0x80A71940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71940u)) return;
    // 80A71940: bl      0x8004B35C
    {
            ctx->lr = 0x80A71944u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80A71944:
    ctx->pc = 0x80A71944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71944: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71948:
    ctx->pc = 0x80A71948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71948u)) return;
    // 80A71948: cmpwi   r0, 0
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

label_80A7194C:
    ctx->pc = 0x80A7194Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7194Cu)) return;
    // 80A7194C: bc    12, 2, 0x80A7195C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A7195C;
        }
    }

label_80A71950:
    ctx->pc = 0x80A71950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71950: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71954:
    ctx->pc = 0x80A71954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71954u)) return;
    // 80A71954: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71958:
    ctx->pc = 0x80A71958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71958u)) return;
    // 80A71958: bl      0x8004AF5C
    {
            ctx->lr = 0x80A7195Cu;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80A7195C:
    ctx->pc = 0x80A7195Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7195Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A7195C: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71960:
    ctx->pc = 0x80A71960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71960: lwz     r3, 0(r30)
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
label_80A71964:
    ctx->pc = 0x80A71964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71964: lfs     f1, -19532(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71964u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71968:
    ctx->pc = 0x80A71968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71968u)) return;
    // 80A71968: bl      0x8060DB00
    {
            ctx->lr = 0x80A7196Cu;
            ctx->pc = 0x8060DB00u;
            return;
    }

label_80A7196C:
    ctx->pc = 0x80A7196Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A7196Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A7196C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A71970:
    ctx->pc = 0x80A71970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71970u)) return;
    // 80A71970: bl      0x8004B504
    {
            ctx->lr = 0x80A71974u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A71974:
    ctx->pc = 0x80A71974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71974: bl      0x8048CEF0
    {
            ctx->lr = 0x80A71978u;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80A71978:
    ctx->pc = 0x80A71978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71978: lwz     r0, 20(r1)
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
label_80A7197C:
    ctx->pc = 0x80A7197Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7197Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A7197C: lwz     r31, 12(r1)
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
label_80A71980:
    ctx->pc = 0x80A71980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71980: lwz     r30, 8(r1)
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
label_80A71984:
    ctx->pc = 0x80A71984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A71984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71984: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71988:
    ctx->pc = 0x80A71988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71988u)) return;
    // 80A71988: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A7198C:
    ctx->pc = 0x80A7198Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A7198Cu)) return;
    // 80A7198C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

label_80A71990:
    ctx->pc = 0x80A71990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A71990: stwu     r1, -32(r1)
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
label_80A71994:
    ctx->pc = 0x80A71994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A71994: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71998:
    ctx->pc = 0x80A71998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A71998: stw     r0, 36(r1)
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
label_80A7199C:
    ctx->pc = 0x80A7199Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80A7199Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A7199C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A719A0:
    ctx->pc = 0x80A719A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719A0u)) return;
    // 80A719A0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A719A4:
    ctx->pc = 0x80A719A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A719A4: lwz     r31, 32(r3)
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
label_80A719A8:
    ctx->pc = 0x80A719A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A719A8: lwz     r30, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A719AC:
    ctx->pc = 0x80A719ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A719AC: lbz     r0, 0(r31)
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
label_80A719B0:
    ctx->pc = 0x80A719B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719B0u)) return;
    // 80A719B0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80A719B4:
    ctx->pc = 0x80A719B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719B4u)) return;
    // 80A719B4: cmpwi   r0, 2
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

label_80A719B8:
    ctx->pc = 0x80A719B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719B8u)) return;
    // 80A719B8: bc    12, 2, 0x80A71A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71A9C;
        }
    }

label_80A719BC:
    ctx->pc = 0x80A719BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A719BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A719BC: bc    4, 0, 0x80A719D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A719D0;
        }
    }

label_80A719C0:
    ctx->pc = 0x80A719C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A719C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A719C0: cmpwi   r0, 0
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

label_80A719C4:
    ctx->pc = 0x80A719C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719C4u)) return;
    // 80A719C4: bc    12, 2, 0x80A719DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A719DC;
        }
    }

label_80A719C8:
    ctx->pc = 0x80A719C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A719C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A719C8: bc    4, 0, 0x80A71A08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71A08;
        }
    }

label_80A719CC:
    ctx->pc = 0x80A719CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A719CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A719CC: b       0x80A71BEC
    {
            goto label_80A71BEC;
    }

label_80A719D0:
    ctx->pc = 0x80A719D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A719D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A719D0: cmpwi   r0, 4
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

label_80A719D4:
    ctx->pc = 0x80A719D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719D4u)) return;
    // 80A719D4: bc    4, 0, 0x80A71BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71BEC;
        }
    }

label_80A719D8:
    ctx->pc = 0x80A719D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A719D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A719D8: b       0x80A71AD0
    {
            goto label_80A71AD0;
    }

label_80A719DC:
    ctx->pc = 0x80A719DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A719DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A719DC: lis     r3, -32601
    ctx->gpr[3] = ((u32)(s32)(-32601) << 16);

label_80A719E0:
    ctx->pc = 0x80A719E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719E0u)) return;
    // 80A719E0: lis     r4, -32601
    ctx->gpr[4] = ((u32)(s32)(-32601) << 16);

label_80A719E4:
    ctx->pc = 0x80A719E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719E4u)) return;
    // 80A719E4: addi    r0, r3, 6304
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(6304);

label_80A719E8:
    ctx->pc = 0x80A719E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719E8u)) return;
    // 80A719E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A719EC:
    ctx->pc = 0x80A719ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A719EC: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A719F0:
    ctx->pc = 0x80A719F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719F0u)) return;
    // 80A719F0: addi    r4, r4, 6376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6376);

label_80A719F4:
    ctx->pc = 0x80A719F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719F4u)) return;
    // 80A719F4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A719F8:
    ctx->pc = 0x80A719F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A719F8: stw     r4, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A719FC:
    ctx->pc = 0x80A719FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A719FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A719FC: stb     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A00:
    ctx->pc = 0x80A71A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71A00: stb     r0, 0(r31)
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
label_80A71A04:
    ctx->pc = 0x80A71A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A04u)) return;
    // 80A71A04: b       0x80A71BEC
    {
            goto label_80A71BEC;
    }

label_80A71A08:
    ctx->pc = 0x80A71A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A71A08: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A0C:
    ctx->pc = 0x80A71A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A0Cu)) return;
    // 80A71A0C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71A10:
    ctx->pc = 0x80A71A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A10u)) return;
    // 80A71A10: addi    r5, r3, -19504
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-19504);

label_80A71A14:
    ctx->pc = 0x80A71A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A14u)) return;
    // 80A71A14: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_80A71A18:
    ctx->pc = 0x80A71A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71A18: lwz     r4, 4(r4)
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
label_80A71A1C:
    ctx->pc = 0x80A71A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71A1C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A71A1Cu)) return;
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
label_80A71A20:
    ctx->pc = 0x80A71A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71A20: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71A20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_80A71A24:
    ctx->pc = 0x80A71A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A24u)) return;
    // 80A71A24: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71A24u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80A71A28:
    ctx->pc = 0x80A71A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A28u)) return;
    // 80A71A28: bl      0x804C9324
    {
            ctx->lr = 0x80A71A2Cu;
            ctx->pc = 0x804C9324u;
            return;
    }

label_80A71A2C:
    ctx->pc = 0x80A71A2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71A2C: cmpwi   r3, 0
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

label_80A71A30:
    ctx->pc = 0x80A71A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A30u)) return;
    // 80A71A30: bc    12, 2, 0x80A71A44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71A44;
        }
    }

label_80A71A34:
    ctx->pc = 0x80A71A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71A34: lha     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A38:
    ctx->pc = 0x80A71A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A38u)) return;
    // 80A71A38: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80A71A3C:
    ctx->pc = 0x80A71A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71A3C: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A40:
    ctx->pc = 0x80A71A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A40u)) return;
    // 80A71A40: b       0x80A71A50
    {
            goto label_80A71A50;
    }

label_80A71A44:
    ctx->pc = 0x80A71A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71A44: lha     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A48:
    ctx->pc = 0x80A71A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A48u)) return;
    // 80A71A48: rlwinm r0, r0, 0, 24, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFEFFu;
    }

label_80A71A4C:
    ctx->pc = 0x80A71A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A71A4C: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A50:
    ctx->pc = 0x80A71A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71A50: lbz     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A54:
    ctx->pc = 0x80A71A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A54u)) return;
    // 80A71A54: cmplwi  r0, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A71A58:
    ctx->pc = 0x80A71A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A58u)) return;
    // 80A71A58: bc    4, 2, 0x80A71A7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71A7C;
        }
    }

label_80A71A5C:
    ctx->pc = 0x80A71A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80A71A5C: lis     r3, -27667
    ctx->gpr[3] = ((u32)(s32)(-27667) << 16);

label_80A71A60:
    ctx->pc = 0x80A71A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A60u)) return;
    // 80A71A60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A71A64:
    ctx->pc = 0x80A71A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71A64: stb     r4, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A68:
    ctx->pc = 0x80A71A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A68u)) return;
    // 80A71A68: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80A71A6C:
    ctx->pc = 0x80A71A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71A6C: lfs     f0, -19500(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A71A6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19500);
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
label_80A71A70:
    ctx->pc = 0x80A71A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71A70: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A71A70u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A74:
    ctx->pc = 0x80A71A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71A74: sth     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A78:
    ctx->pc = 0x80A71A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A71A78: stb     r0, 0(r31)
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
label_80A71A7C:
    ctx->pc = 0x80A71A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71A7C: lbz     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A80:
    ctx->pc = 0x80A71A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A80u)) return;
    // 80A71A80: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A71A84:
    ctx->pc = 0x80A71A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A84u)) return;
    // 80A71A84: bc    4, 2, 0x80A71BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71BEC;
        }
    }

label_80A71A88:
    ctx->pc = 0x80A71A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A71A88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71A8C:
    ctx->pc = 0x80A71A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A8Cu)) return;
    // 80A71A8C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80A71A90:
    ctx->pc = 0x80A71A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71A90: stb     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71A94:
    ctx->pc = 0x80A71A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71A94: stb     r0, 0(r31)
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
label_80A71A98:
    ctx->pc = 0x80A71A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71A98u)) return;
    // 80A71A98: b       0x80A71BEC
    {
            goto label_80A71BEC;
    }

label_80A71A9C:
    ctx->pc = 0x80A71A9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71A9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A71A9C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71A9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71AA0:
    ctx->pc = 0x80A71AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A71AA0: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A71AA0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
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
label_80A71AA4:
    ctx->pc = 0x80A71AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AA4u)) return;
    // 80A71AA4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A71AA4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A71AA8:
    ctx->pc = 0x80A71AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71AA8: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71AA8u)) return;
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
label_80A71AAC:
    ctx->pc = 0x80A71AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71AAC: lhz     r3, 6(r31)
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
label_80A71AB0:
    ctx->pc = 0x80A71AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AB0u)) return;
    // 80A71AB0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80A71AB4:
    ctx->pc = 0x80A71AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AB4u)) return;
    // 80A71AB4: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_80A71AB8:
    ctx->pc = 0x80A71AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71AB8: sth     r3, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71ABC:
    ctx->pc = 0x80A71ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71ABCu)) return;
    // 80A71ABC: cmplwi  r0, 0x000F
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A71AC0:
    ctx->pc = 0x80A71AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AC0u)) return;
    // 80A71AC0: bc    12, 0, 0x80A71BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71BEC;
        }
    }

label_80A71AC4:
    ctx->pc = 0x80A71AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71AC4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A71AC8:
    ctx->pc = 0x80A71AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71AC8: stb     r0, 0(r31)
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
label_80A71ACC:
    ctx->pc = 0x80A71ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71ACCu)) return;
    // 80A71ACC: b       0x80A71BEC
    {
            goto label_80A71BEC;
    }

label_80A71AD0:
    ctx->pc = 0x80A71AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71AD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71AD4:
    ctx->pc = 0x80A71AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AD4u)) return;
    // 80A71AD4: bl      0x8004B49C
    {
            ctx->lr = 0x80A71AD8u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A71AD8:
    ctx->pc = 0x80A71AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71AD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71ADC:
    ctx->pc = 0x80A71ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71ADCu)) return;
    // 80A71ADC: bl      0x8004AAF4
    {
            ctx->lr = 0x80A71AE0u;
            ctx->pc = 0x8004AAF4u;
            return;
    }

label_80A71AE0:
    ctx->pc = 0x80A71AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71AE0: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71AE0u)) return;
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
label_80A71AE4:
    ctx->pc = 0x80A71AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AE4u)) return;
    // 80A71AE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71AE8:
    ctx->pc = 0x80A71AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71AE8: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71AE8u)) return;
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
label_80A71AEC:
    ctx->pc = 0x80A71AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71AEC: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A71AECu)) return;
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
label_80A71AF0:
    ctx->pc = 0x80A71AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AF0u)) return;
    // 80A71AF0: bl      0x8004B35C
    {
            ctx->lr = 0x80A71AF4u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80A71AF4:
    ctx->pc = 0x80A71AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71AF4: lwz     r0, 28(r31)
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
label_80A71AF8:
    ctx->pc = 0x80A71AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AF8u)) return;
    // 80A71AF8: cmpwi   r0, 0
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

label_80A71AFC:
    ctx->pc = 0x80A71AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71AFCu)) return;
    // 80A71AFC: bc    12, 2, 0x80A71B0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71B0C;
        }
    }

label_80A71B00:
    ctx->pc = 0x80A71B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71B00: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71B04:
    ctx->pc = 0x80A71B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B04u)) return;
    // 80A71B04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71B08:
    ctx->pc = 0x80A71B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B08u)) return;
    // 80A71B08: bl      0x8004AFDC
    {
            ctx->lr = 0x80A71B0Cu;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80A71B0C:
    ctx->pc = 0x80A71B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71B0C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71B10:
    ctx->pc = 0x80A71B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B10u)) return;
    // 80A71B10: cmpwi   r0, 0
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

label_80A71B14:
    ctx->pc = 0x80A71B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B14u)) return;
    // 80A71B14: bc    12, 2, 0x80A71B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71B24;
        }
    }

label_80A71B18:
    ctx->pc = 0x80A71B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71B18: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71B1C:
    ctx->pc = 0x80A71B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B1Cu)) return;
    // 80A71B1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71B20:
    ctx->pc = 0x80A71B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B20u)) return;
    // 80A71B20: bl      0x8004AF5C
    {
            ctx->lr = 0x80A71B24u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80A71B24:
    ctx->pc = 0x80A71B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71B24: lwz     r0, 20(r31)
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
label_80A71B28:
    ctx->pc = 0x80A71B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B28u)) return;
    // 80A71B28: cmpwi   r0, 0
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

label_80A71B2C:
    ctx->pc = 0x80A71B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B2Cu)) return;
    // 80A71B2C: bc    12, 2, 0x80A71B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71B3C;
        }
    }

label_80A71B30:
    ctx->pc = 0x80A71B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71B30: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71B34:
    ctx->pc = 0x80A71B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B34u)) return;
    // 80A71B34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71B38:
    ctx->pc = 0x80A71B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B38u)) return;
    // 80A71B38: bl      0x8004B3E0
    {
            ctx->lr = 0x80A71B3Cu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80A71B3C:
    ctx->pc = 0x80A71B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71B3C: lwz     r0, 32(r30)
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
label_80A71B40:
    ctx->pc = 0x80A71B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B40u)) return;
    // 80A71B40: cmpwi   r0, 0
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

label_80A71B44:
    ctx->pc = 0x80A71B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B44u)) return;
    // 80A71B44: bc    4, 2, 0x80A71B64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71B64;
        }
    }

label_80A71B48:
    ctx->pc = 0x80A71B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A71B48: lis     r4, -27665
    ctx->gpr[4] = ((u32)(s32)(-27665) << 16);

label_80A71B4C:
    ctx->pc = 0x80A71B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B4Cu)) return;
    // 80A71B4C: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A71B50:
    ctx->pc = 0x80A71B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B50u)) return;
    // 80A71B50: addi    r5, r4, -25332
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25332);

label_80A71B54:
    ctx->pc = 0x80A71B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B54u)) return;
    // 80A71B54: addi    r4, r3, -16680
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-16680);

label_80A71B58:
    ctx->pc = 0x80A71B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71B58: lwz     r3, 8(r5)
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
label_80A71B5C:
    ctx->pc = 0x80A71B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B5Cu)) return;
    // 80A71B5C: bl      0x80A60220
    {
            ctx->lr = 0x80A71B60u;
            ctx->pc = 0x80A60220u;
            return;
    }

label_80A71B60:
    ctx->pc = 0x80A71B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71B60: b       0x80A71B7C
    {
            goto label_80A71B7C;
    }

label_80A71B64:
    ctx->pc = 0x80A71B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A71B64: lis     r4, -27665
    ctx->gpr[4] = ((u32)(s32)(-27665) << 16);

label_80A71B68:
    ctx->pc = 0x80A71B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B68u)) return;
    // 80A71B68: lis     r3, -27661
    ctx->gpr[3] = ((u32)(s32)(-27661) << 16);

label_80A71B6C:
    ctx->pc = 0x80A71B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B6Cu)) return;
    // 80A71B6C: addi    r5, r4, -25332
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25332);

label_80A71B70:
    ctx->pc = 0x80A71B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B70u)) return;
    // 80A71B70: addi    r4, r3, -16680
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-16680);

label_80A71B74:
    ctx->pc = 0x80A71B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71B74: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71B78:
    ctx->pc = 0x80A71B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B78u)) return;
    // 80A71B78: bl      0x80A60220
    {
            ctx->lr = 0x80A71B7Cu;
            ctx->pc = 0x80A60220u;
            return;
    }

label_80A71B7C:
    ctx->pc = 0x80A71B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71B7C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A71B80:
    ctx->pc = 0x80A71B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B80u)) return;
    // 80A71B80: bl      0x8004B504
    {
            ctx->lr = 0x80A71B84u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A71B84:
    ctx->pc = 0x80A71B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71B84: lis     r3, -32601
    ctx->gpr[3] = ((u32)(s32)(-32601) << 16);

label_80A71B88:
    ctx->pc = 0x80A71B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B88u)) return;
    // 80A71B88: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80A71B8C:
    ctx->pc = 0x80A71B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B8Cu)) return;
    // 80A71B8C: addi    r28, r3, 4944
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(4944);

label_80A71B90:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71B90: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80A71B94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B94u)) return;
    // 80A71B94: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A71B98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B98u)) return;
    // 80A71B98: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A71B9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71B9Cu)) return;
    // 80A71B9C: bl      0x8050FD60
    {
            ctx->lr = 0x80A71BA0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A71BA0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71BA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A71BA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BA4u)) return;
    // 80A71BA4: li      r3, 36
    ctx->gpr[3] = (u32)(s32)(36);

label_80A71BA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BA8u)) return;
    // 80A71BA8: bl      0x8050EF60
    {
            ctx->lr = 0x80A71BACu;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80A71BAC:
    ctx->pc = 0x80A71BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A71BAC: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71BB0:
    ctx->pc = 0x80A71BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A71BB0: lwz     r0, 32(r30)
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
label_80A71BB4:
    ctx->pc = 0x80A71BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A71BB4: lwz     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71BB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BB8u)) return;
    // 80A71BB8: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_80A71BBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BBCu)) return;
    // 80A71BBC: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_80A71BC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BC0u)) return;
    // 80A71BC0: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_80A71BC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BC4u)) return;
    // 80A71BC4: cmpwi   r27, 4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A71BC8:
    ctx->pc = 0x80A71BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71BC8: stw     r0, 32(r3)
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
label_80A71BCC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BCCu)) return;
    // 80A71BCC: bc    12, 0, 0x80A71B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A71B90u;
                return;
            }
            goto label_80A71B90;
        }
    }

label_80A71BD0:
    ctx->pc = 0x80A71BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A71BD0: li      r3, 502
    ctx->gpr[3] = (u32)(s32)(502);

label_80A71BD4:
    ctx->pc = 0x80A71BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BD4u)) return;
    // 80A71BD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A71BD8:
    ctx->pc = 0x80A71BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BD8u)) return;
    // 80A71BD8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A71BDC:
    ctx->pc = 0x80A71BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BDCu)) return;
    // 80A71BDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A71BE0:
    ctx->pc = 0x80A71BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BE0u)) return;
    // 80A71BE0: bl      0x8050A480
    {
            ctx->lr = 0x80A71BE4u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80A71BE4:
    ctx->pc = 0x80A71BE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71BE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71BE4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80A71BE8:
    ctx->pc = 0x80A71BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BE8u)) return;
    // 80A71BE8: bl      0x8050F9E0
    {
            ctx->lr = 0x80A71BECu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80A71BEC:
    ctx->pc = 0x80A71BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A71BEC: lis     r3, -32687
    ctx->gpr[3] = ((u32)(s32)(-32687) << 16);

label_80A71BF0:
    ctx->pc = 0x80A71BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71BF0: lwz     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71BF4:
    ctx->pc = 0x80A71BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BF4u)) return;
    // 80A71BF4: addi    r0, r3, -1552
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1552);

label_80A71BF8:
    ctx->pc = 0x80A71BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BF8u)) return;
    // 80A71BF8: cmplw   r4, r0
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

label_80A71BFC:
    ctx->pc = 0x80A71BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71BFCu)) return;
    // 80A71BFC: bc    12, 2, 0x80A71C7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71C7C;
        }
    }

label_80A71C00:
    ctx->pc = 0x80A71C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A71C00: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A71C04:
    ctx->pc = 0x80A71C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71C04: lwz     r30, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C08:
    ctx->pc = 0x80A71C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A71C08: lwz     r0, 4120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C0C:
    ctx->pc = 0x80A71C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71C0C: lwz     r28, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C10:
    ctx->pc = 0x80A71C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C10u)) return;
    // 80A71C10: cmpwi   r0, 0
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

label_80A71C14:
    ctx->pc = 0x80A71C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C14u)) return;
    // 80A71C14: bc    4, 2, 0x80A71C7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A71C7C;
        }
    }

label_80A71C18:
    ctx->pc = 0x80A71C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71C18: bl      0x8048CF1C
    {
            ctx->lr = 0x80A71C1Cu;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80A71C1C:
    ctx->pc = 0x80A71C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71C1C: lis     r3, -27665
    ctx->gpr[3] = ((u32)(s32)(-27665) << 16);

label_80A71C20:
    ctx->pc = 0x80A71C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C20u)) return;
    // 80A71C20: addi    r3, r3, -25236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25236);

label_80A71C24:
    ctx->pc = 0x80A71C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71C24: lwz     r3, 0(r3)
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
label_80A71C28:
    ctx->pc = 0x80A71C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C28u)) return;
    // 80A71C28: bl      0x8060F594
    {
            ctx->lr = 0x80A71C2Cu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A71C2C:
    ctx->pc = 0x80A71C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71C2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71C30:
    ctx->pc = 0x80A71C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C30u)) return;
    // 80A71C30: bl      0x8004B49C
    {
            ctx->lr = 0x80A71C34u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A71C34:
    ctx->pc = 0x80A71C34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71C34: lfs     f1, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A71C34u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C38:
    ctx->pc = 0x80A71C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C38u)) return;
    // 80A71C38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71C3C:
    ctx->pc = 0x80A71C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71C3C: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A71C3Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80A71C40:
    ctx->pc = 0x80A71C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71C40: lfs     f3, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A71C40u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
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
label_80A71C44:
    ctx->pc = 0x80A71C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C44u)) return;
    // 80A71C44: bl      0x8004B35C
    {
            ctx->lr = 0x80A71C48u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80A71C48:
    ctx->pc = 0x80A71C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71C48: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C4C:
    ctx->pc = 0x80A71C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C4Cu)) return;
    // 80A71C4C: cmpwi   r0, 0
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

label_80A71C50:
    ctx->pc = 0x80A71C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C50u)) return;
    // 80A71C50: bc    12, 2, 0x80A71C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A71C60;
        }
    }

label_80A71C54:
    ctx->pc = 0x80A71C54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A71C54: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80A71C58:
    ctx->pc = 0x80A71C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C58u)) return;
    // 80A71C58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A71C5C:
    ctx->pc = 0x80A71C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C5Cu)) return;
    // 80A71C5C: bl      0x8004AF5C
    {
            ctx->lr = 0x80A71C60u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80A71C60:
    ctx->pc = 0x80A71C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A71C60: lis     r4, -27667
    ctx->gpr[4] = ((u32)(s32)(-27667) << 16);

label_80A71C64:
    ctx->pc = 0x80A71C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71C64: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C68:
    ctx->pc = 0x80A71C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A71C68: lfs     f1, -19532(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A71C68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C6C:
    ctx->pc = 0x80A71C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C6Cu)) return;
    // 80A71C6C: bl      0x8060DB00
    {
            ctx->lr = 0x80A71C70u;
            ctx->pc = 0x8060DB00u;
            return;
    }

label_80A71C70:
    ctx->pc = 0x80A71C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A71C70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A71C74:
    ctx->pc = 0x80A71C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C74u)) return;
    // 80A71C74: bl      0x8004B504
    {
            ctx->lr = 0x80A71C78u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A71C78:
    ctx->pc = 0x80A71C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A71C78: bl      0x8048CEF0
    {
            ctx->lr = 0x80A71C7Cu;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80A71C7C:
    ctx->pc = 0x80A71C7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A71C7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A71C7C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C80:
    ctx->pc = 0x80A71C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A71C80: lwz     r0, 36(r1)
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
label_80A71C84:
    ctx->pc = 0x80A71C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A71C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A71C84: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A71C88:
    ctx->pc = 0x80A71C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C88u)) return;
    // 80A71C88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A71C8C:
    ctx->pc = 0x80A71C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A71C8Cu)) return;
    // 80A71C8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A6FC00;
        }
    }

    ctx->pc = 0x80A71C90u;
    return;
return_dispatch_80A6FC00:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80A6FCB8u: goto label_80A6FCB8;
    case 0x80A6FD78u: goto label_80A6FD78;
    case 0x80A6FE3Cu: goto label_80A6FE3C;
    case 0x80A6FEBCu: goto label_80A6FEBC;
    case 0x80A6FF3Cu: goto label_80A6FF3C;
    case 0x80A6FFF0u: goto label_80A6FFF0;
    case 0x80A70128u: goto label_80A70128;
    case 0x80A702A0u: goto label_80A702A0;
    case 0x80A70418u: goto label_80A70418;
    case 0x80A70430u: goto label_80A70430;
    case 0x80A70448u: goto label_80A70448;
    case 0x80A70460u: goto label_80A70460;
    case 0x80A70470u: goto label_80A70470;
    case 0x80A7048Cu: goto label_80A7048C;
    case 0x80A7049Cu: goto label_80A7049C;
    case 0x80A70524u: goto label_80A70524;
    case 0x80A70568u: goto label_80A70568;
    case 0x80A70574u: goto label_80A70574;
    case 0x80A705ACu: goto label_80A705AC;
    case 0x80A70628u: goto label_80A70628;
    case 0x80A70658u: goto label_80A70658;
    case 0x80A706D4u: goto label_80A706D4;
    case 0x80A7078Cu: goto label_80A7078C;
    case 0x80A70790u: goto label_80A70790;
    case 0x80A707D4u: goto label_80A707D4;
    case 0x80A707E4u: goto label_80A707E4;
    case 0x80A707F0u: goto label_80A707F0;
    case 0x80A70858u: goto label_80A70858;
    case 0x80A70868u: goto label_80A70868;
    case 0x80A70874u: goto label_80A70874;
    case 0x80A708CCu: goto label_80A708CC;
    case 0x80A708DCu: goto label_80A708DC;
    case 0x80A708E8u: goto label_80A708E8;
    case 0x80A7090Cu: goto label_80A7090C;
    case 0x80A7091Cu: goto label_80A7091C;
    case 0x80A7095Cu: goto label_80A7095C;
    case 0x80A709D8u: goto label_80A709D8;
    case 0x80A70A20u: goto label_80A70A20;
    case 0x80A70A58u: goto label_80A70A58;
    case 0x80A70A5Cu: goto label_80A70A5C;
    case 0x80A70A64u: goto label_80A70A64;
    case 0x80A70A8Cu: goto label_80A70A8C;
    case 0x80A70A90u: goto label_80A70A90;
    case 0x80A70AA0u: goto label_80A70AA0;
    case 0x80A70AE4u: goto label_80A70AE4;
    case 0x80A70AF4u: goto label_80A70AF4;
    case 0x80A70B00u: goto label_80A70B00;
    case 0x80A70B68u: goto label_80A70B68;
    case 0x80A70B78u: goto label_80A70B78;
    case 0x80A70B84u: goto label_80A70B84;
    case 0x80A70BDCu: goto label_80A70BDC;
    case 0x80A70BECu: goto label_80A70BEC;
    case 0x80A70BF8u: goto label_80A70BF8;
    case 0x80A70C1Cu: goto label_80A70C1C;
    case 0x80A70C2Cu: goto label_80A70C2C;
    case 0x80A70C40u: goto label_80A70C40;
    case 0x80A70C50u: goto label_80A70C50;
    case 0x80A70C54u: goto label_80A70C54;
    case 0x80A70CBCu: goto label_80A70CBC;
    case 0x80A70CD4u: goto label_80A70CD4;
    case 0x80A70CECu: goto label_80A70CEC;
    case 0x80A70D04u: goto label_80A70D04;
    case 0x80A70D2Cu: goto label_80A70D2C;
    case 0x80A71258u: goto label_80A71258;
    case 0x80A71260u: goto label_80A71260;
    case 0x80A71274u: goto label_80A71274;
    case 0x80A7128Cu: goto label_80A7128C;
    case 0x80A712A4u: goto label_80A712A4;
    case 0x80A712BCu: goto label_80A712BC;
    case 0x80A712D8u: goto label_80A712D8;
    case 0x80A712F8u: goto label_80A712F8;
    case 0x80A7130Cu: goto label_80A7130C;
    case 0x80A7132Cu: goto label_80A7132C;
    case 0x80A71334u: goto label_80A71334;
    case 0x80A71338u: goto label_80A71338;
    case 0x80A71428u: goto label_80A71428;
    case 0x80A71434u: goto label_80A71434;
    case 0x80A71448u: goto label_80A71448;
    case 0x80A71450u: goto label_80A71450;
    case 0x80A714B4u: goto label_80A714B4;
    case 0x80A71510u: goto label_80A71510;
    case 0x80A7156Cu: goto label_80A7156C;
    case 0x80A715CCu: goto label_80A715CC;
    case 0x80A71630u: goto label_80A71630;
    case 0x80A71758u: goto label_80A71758;
    case 0x80A71784u: goto label_80A71784;
    case 0x80A717B4u: goto label_80A717B4;
    case 0x80A717BCu: goto label_80A717BC;
    case 0x80A717D0u: goto label_80A717D0;
    case 0x80A717E8u: goto label_80A717E8;
    case 0x80A71800u: goto label_80A71800;
    case 0x80A71818u: goto label_80A71818;
    case 0x80A71834u: goto label_80A71834;
    case 0x80A71850u: goto label_80A71850;
    case 0x80A71864u: goto label_80A71864;
    case 0x80A71880u: goto label_80A71880;
    case 0x80A71888u: goto label_80A71888;
    case 0x80A7188Cu: goto label_80A7188C;
    case 0x80A718C4u: goto label_80A718C4;
    case 0x80A718CCu: goto label_80A718CC;
    case 0x80A71918u: goto label_80A71918;
    case 0x80A71928u: goto label_80A71928;
    case 0x80A71930u: goto label_80A71930;
    case 0x80A71944u: goto label_80A71944;
    case 0x80A7195Cu: goto label_80A7195C;
    case 0x80A7196Cu: goto label_80A7196C;
    case 0x80A71974u: goto label_80A71974;
    case 0x80A71978u: goto label_80A71978;
    case 0x80A71A2Cu: goto label_80A71A2C;
    case 0x80A71AD8u: goto label_80A71AD8;
    case 0x80A71AE0u: goto label_80A71AE0;
    case 0x80A71AF4u: goto label_80A71AF4;
    case 0x80A71B0Cu: goto label_80A71B0C;
    case 0x80A71B24u: goto label_80A71B24;
    case 0x80A71B3Cu: goto label_80A71B3C;
    case 0x80A71B60u: goto label_80A71B60;
    case 0x80A71B7Cu: goto label_80A71B7C;
    case 0x80A71B84u: goto label_80A71B84;
    case 0x80A71BA0u: goto label_80A71BA0;
    case 0x80A71BACu: goto label_80A71BAC;
    case 0x80A71BE4u: goto label_80A71BE4;
    case 0x80A71BECu: goto label_80A71BEC;
    case 0x80A71C1Cu: goto label_80A71C1C;
    case 0x80A71C2Cu: goto label_80A71C2C;
    case 0x80A71C34u: goto label_80A71C34;
    case 0x80A71C48u: goto label_80A71C48;
    case 0x80A71C60u: goto label_80A71C60;
    case 0x80A71C70u: goto label_80A71C70;
    case 0x80A71C78u: goto label_80A71C78;
    case 0x80A71C7Cu: goto label_80A71C7C;
    default: return;
    }
}

