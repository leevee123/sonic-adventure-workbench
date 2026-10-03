// DolRecomp output
#include "../generated.h"

void func_80D0FF80(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D0FF80[1870] = {
        &&label_80D0FF80,
        &&label_80D0FF84,
        &&label_80D0FF88,
        &&label_80D0FF8C,
        &&label_80D0FF90,
        &&label_80D0FF94,
        &&label_80D0FF98,
        &&label_80D0FF9C,
        &&label_80D0FFA0,
        &&label_80D0FFA4,
        &&label_80D0FFA8,
        &&label_80D0FFAC,
        &&label_80D0FFB0,
        &&label_80D0FFB4,
        &&label_80D0FFB8,
        &&label_80D0FFBC,
        &&label_80D0FFC0,
        &&label_80D0FFC4,
        &&label_80D0FFC8,
        &&label_80D0FFCC,
        &&label_80D0FFD0,
        &&label_80D0FFD4,
        &&label_80D0FFD8,
        &&label_80D0FFDC,
        &&label_80D0FFE0,
        &&label_80D0FFE4,
        &&label_80D0FFE8,
        &&label_80D0FFEC,
        &&label_80D0FFF0,
        &&label_80D0FFF4,
        &&label_80D0FFF8,
        &&label_80D0FFFC,
        &&label_80D10000,
        &&label_80D10004,
        &&label_80D10008,
        &&label_80D1000C,
        &&label_80D10010,
        &&label_80D10014,
        &&label_80D10018,
        &&label_80D1001C,
        &&label_80D10020,
        &&label_80D10024,
        &&label_80D10028,
        &&label_80D1002C,
        &&label_80D10030,
        &&label_80D10034,
        &&label_80D10038,
        &&label_80D1003C,
        &&label_80D10040,
        &&label_80D10044,
        &&label_80D10048,
        &&label_80D1004C,
        &&label_80D10050,
        &&label_80D10054,
        &&label_80D10058,
        &&label_80D1005C,
        &&label_80D10060,
        &&label_80D10064,
        &&label_80D10068,
        &&label_80D1006C,
        &&label_80D10070,
        &&label_80D10074,
        &&label_80D10078,
        &&label_80D1007C,
        &&label_80D10080,
        &&label_80D10084,
        &&label_80D10088,
        &&label_80D1008C,
        &&label_80D10090,
        &&label_80D10094,
        &&label_80D10098,
        &&label_80D1009C,
        &&label_80D100A0,
        &&label_80D100A4,
        &&label_80D100A8,
        &&label_80D100AC,
        &&label_80D100B0,
        &&label_80D100B4,
        &&label_80D100B8,
        &&label_80D100BC,
        &&label_80D100C0,
        &&label_80D100C4,
        &&label_80D100C8,
        &&label_80D100CC,
        &&label_80D100D0,
        &&label_80D100D4,
        &&label_80D100D8,
        &&label_80D100DC,
        &&label_80D100E0,
        &&label_80D100E4,
        &&label_80D100E8,
        &&label_80D100EC,
        &&label_80D100F0,
        &&label_80D100F4,
        &&label_80D100F8,
        &&label_80D100FC,
        &&label_80D10100,
        &&label_80D10104,
        &&label_80D10108,
        &&label_80D1010C,
        &&label_80D10110,
        &&label_80D10114,
        &&label_80D10118,
        &&label_80D1011C,
        &&label_80D10120,
        &&label_80D10124,
        &&label_80D10128,
        &&label_80D1012C,
        &&label_80D10130,
        &&label_80D10134,
        &&label_80D10138,
        &&label_80D1013C,
        &&label_80D10140,
        &&label_80D10144,
        &&label_80D10148,
        &&label_80D1014C,
        &&label_80D10150,
        &&label_80D10154,
        &&label_80D10158,
        &&label_80D1015C,
        &&label_80D10160,
        &&label_80D10164,
        &&label_80D10168,
        &&label_80D1016C,
        &&label_80D10170,
        &&label_80D10174,
        &&label_80D10178,
        &&label_80D1017C,
        &&label_80D10180,
        &&label_80D10184,
        &&label_80D10188,
        &&label_80D1018C,
        &&label_80D10190,
        &&label_80D10194,
        &&label_80D10198,
        &&label_80D1019C,
        &&label_80D101A0,
        &&label_80D101A4,
        &&label_80D101A8,
        &&label_80D101AC,
        &&label_80D101B0,
        &&label_80D101B4,
        &&label_80D101B8,
        &&label_80D101BC,
        &&label_80D101C0,
        &&label_80D101C4,
        &&label_80D101C8,
        &&label_80D101CC,
        &&label_80D101D0,
        &&label_80D101D4,
        &&label_80D101D8,
        &&label_80D101DC,
        &&label_80D101E0,
        &&label_80D101E4,
        &&label_80D101E8,
        &&label_80D101EC,
        &&label_80D101F0,
        &&label_80D101F4,
        &&label_80D101F8,
        &&label_80D101FC,
        &&label_80D10200,
        &&label_80D10204,
        &&label_80D10208,
        &&label_80D1020C,
        &&label_80D10210,
        &&label_80D10214,
        &&label_80D10218,
        &&label_80D1021C,
        &&label_80D10220,
        &&label_80D10224,
        &&label_80D10228,
        &&label_80D1022C,
        &&label_80D10230,
        &&label_80D10234,
        &&label_80D10238,
        &&label_80D1023C,
        &&label_80D10240,
        &&label_80D10244,
        &&label_80D10248,
        &&label_80D1024C,
        &&label_80D10250,
        &&label_80D10254,
        &&label_80D10258,
        &&label_80D1025C,
        &&label_80D10260,
        &&label_80D10264,
        &&label_80D10268,
        &&label_80D1026C,
        &&label_80D10270,
        &&label_80D10274,
        &&label_80D10278,
        &&label_80D1027C,
        &&label_80D10280,
        &&label_80D10284,
        &&label_80D10288,
        &&label_80D1028C,
        &&label_80D10290,
        &&label_80D10294,
        &&label_80D10298,
        &&label_80D1029C,
        &&label_80D102A0,
        &&label_80D102A4,
        &&label_80D102A8,
        &&label_80D102AC,
        &&label_80D102B0,
        &&label_80D102B4,
        &&label_80D102B8,
        &&label_80D102BC,
        &&label_80D102C0,
        &&label_80D102C4,
        &&label_80D102C8,
        &&label_80D102CC,
        &&label_80D102D0,
        &&label_80D102D4,
        &&label_80D102D8,
        &&label_80D102DC,
        &&label_80D102E0,
        &&label_80D102E4,
        &&label_80D102E8,
        &&label_80D102EC,
        &&label_80D102F0,
        &&label_80D102F4,
        &&label_80D102F8,
        &&label_80D102FC,
        &&label_80D10300,
        &&label_80D10304,
        &&label_80D10308,
        &&label_80D1030C,
        &&label_80D10310,
        &&label_80D10314,
        &&label_80D10318,
        &&label_80D1031C,
        &&label_80D10320,
        &&label_80D10324,
        &&label_80D10328,
        &&label_80D1032C,
        &&label_80D10330,
        &&label_80D10334,
        &&label_80D10338,
        &&label_80D1033C,
        &&label_80D10340,
        &&label_80D10344,
        &&label_80D10348,
        &&label_80D1034C,
        &&label_80D10350,
        &&label_80D10354,
        &&label_80D10358,
        &&label_80D1035C,
        &&label_80D10360,
        &&label_80D10364,
        &&label_80D10368,
        &&label_80D1036C,
        &&label_80D10370,
        &&label_80D10374,
        &&label_80D10378,
        &&label_80D1037C,
        &&label_80D10380,
        &&label_80D10384,
        &&label_80D10388,
        &&label_80D1038C,
        &&label_80D10390,
        &&label_80D10394,
        &&label_80D10398,
        &&label_80D1039C,
        &&label_80D103A0,
        &&label_80D103A4,
        &&label_80D103A8,
        &&label_80D103AC,
        &&label_80D103B0,
        &&label_80D103B4,
        &&label_80D103B8,
        &&label_80D103BC,
        &&label_80D103C0,
        &&label_80D103C4,
        &&label_80D103C8,
        &&label_80D103CC,
        &&label_80D103D0,
        &&label_80D103D4,
        &&label_80D103D8,
        &&label_80D103DC,
        &&label_80D103E0,
        &&label_80D103E4,
        &&label_80D103E8,
        &&label_80D103EC,
        &&label_80D103F0,
        &&label_80D103F4,
        &&label_80D103F8,
        &&label_80D103FC,
        &&label_80D10400,
        &&label_80D10404,
        &&label_80D10408,
        &&label_80D1040C,
        &&label_80D10410,
        &&label_80D10414,
        &&label_80D10418,
        &&label_80D1041C,
        &&label_80D10420,
        &&label_80D10424,
        &&label_80D10428,
        &&label_80D1042C,
        &&label_80D10430,
        &&label_80D10434,
        &&label_80D10438,
        &&label_80D1043C,
        &&label_80D10440,
        &&label_80D10444,
        &&label_80D10448,
        &&label_80D1044C,
        &&label_80D10450,
        &&label_80D10454,
        &&label_80D10458,
        &&label_80D1045C,
        &&label_80D10460,
        &&label_80D10464,
        &&label_80D10468,
        &&label_80D1046C,
        &&label_80D10470,
        &&label_80D10474,
        &&label_80D10478,
        &&label_80D1047C,
        &&label_80D10480,
        &&label_80D10484,
        &&label_80D10488,
        &&label_80D1048C,
        &&label_80D10490,
        &&label_80D10494,
        &&label_80D10498,
        &&label_80D1049C,
        &&label_80D104A0,
        &&label_80D104A4,
        &&label_80D104A8,
        &&label_80D104AC,
        &&label_80D104B0,
        &&label_80D104B4,
        &&label_80D104B8,
        &&label_80D104BC,
        &&label_80D104C0,
        &&label_80D104C4,
        &&label_80D104C8,
        &&label_80D104CC,
        &&label_80D104D0,
        &&label_80D104D4,
        &&label_80D104D8,
        &&label_80D104DC,
        &&label_80D104E0,
        &&label_80D104E4,
        &&label_80D104E8,
        &&label_80D104EC,
        &&label_80D104F0,
        &&label_80D104F4,
        &&label_80D104F8,
        &&label_80D104FC,
        &&label_80D10500,
        &&label_80D10504,
        &&label_80D10508,
        &&label_80D1050C,
        &&label_80D10510,
        &&label_80D10514,
        &&label_80D10518,
        &&label_80D1051C,
        &&label_80D10520,
        &&label_80D10524,
        &&label_80D10528,
        &&label_80D1052C,
        &&label_80D10530,
        &&label_80D10534,
        &&label_80D10538,
        &&label_80D1053C,
        &&label_80D10540,
        &&label_80D10544,
        &&label_80D10548,
        &&label_80D1054C,
        &&label_80D10550,
        &&label_80D10554,
        &&label_80D10558,
        &&label_80D1055C,
        &&label_80D10560,
        &&label_80D10564,
        &&label_80D10568,
        &&label_80D1056C,
        &&label_80D10570,
        &&label_80D10574,
        &&label_80D10578,
        &&label_80D1057C,
        &&label_80D10580,
        &&label_80D10584,
        &&label_80D10588,
        &&label_80D1058C,
        &&label_80D10590,
        &&label_80D10594,
        &&label_80D10598,
        &&label_80D1059C,
        &&label_80D105A0,
        &&label_80D105A4,
        &&label_80D105A8,
        &&label_80D105AC,
        &&label_80D105B0,
        &&label_80D105B4,
        &&label_80D105B8,
        &&label_80D105BC,
        &&label_80D105C0,
        &&label_80D105C4,
        &&label_80D105C8,
        &&label_80D105CC,
        &&label_80D105D0,
        &&label_80D105D4,
        &&label_80D105D8,
        &&label_80D105DC,
        &&label_80D105E0,
        &&label_80D105E4,
        &&label_80D105E8,
        &&label_80D105EC,
        &&label_80D105F0,
        &&label_80D105F4,
        &&label_80D105F8,
        &&label_80D105FC,
        &&label_80D10600,
        &&label_80D10604,
        &&label_80D10608,
        &&label_80D1060C,
        &&label_80D10610,
        &&label_80D10614,
        &&label_80D10618,
        &&label_80D1061C,
        &&label_80D10620,
        &&label_80D10624,
        &&label_80D10628,
        &&label_80D1062C,
        &&label_80D10630,
        &&label_80D10634,
        &&label_80D10638,
        &&label_80D1063C,
        &&label_80D10640,
        &&label_80D10644,
        &&label_80D10648,
        &&label_80D1064C,
        &&label_80D10650,
        &&label_80D10654,
        &&label_80D10658,
        &&label_80D1065C,
        &&label_80D10660,
        &&label_80D10664,
        &&label_80D10668,
        &&label_80D1066C,
        &&label_80D10670,
        &&label_80D10674,
        &&label_80D10678,
        &&label_80D1067C,
        &&label_80D10680,
        &&label_80D10684,
        &&label_80D10688,
        &&label_80D1068C,
        &&label_80D10690,
        &&label_80D10694,
        &&label_80D10698,
        &&label_80D1069C,
        &&label_80D106A0,
        &&label_80D106A4,
        &&label_80D106A8,
        &&label_80D106AC,
        &&label_80D106B0,
        &&label_80D106B4,
        &&label_80D106B8,
        &&label_80D106BC,
        &&label_80D106C0,
        &&label_80D106C4,
        &&label_80D106C8,
        &&label_80D106CC,
        &&label_80D106D0,
        &&label_80D106D4,
        &&label_80D106D8,
        &&label_80D106DC,
        &&label_80D106E0,
        &&label_80D106E4,
        &&label_80D106E8,
        &&label_80D106EC,
        &&label_80D106F0,
        &&label_80D106F4,
        &&label_80D106F8,
        &&label_80D106FC,
        &&label_80D10700,
        &&label_80D10704,
        &&label_80D10708,
        &&label_80D1070C,
        &&label_80D10710,
        &&label_80D10714,
        &&label_80D10718,
        &&label_80D1071C,
        &&label_80D10720,
        &&label_80D10724,
        &&label_80D10728,
        &&label_80D1072C,
        &&label_80D10730,
        &&label_80D10734,
        &&label_80D10738,
        &&label_80D1073C,
        &&label_80D10740,
        &&label_80D10744,
        &&label_80D10748,
        &&label_80D1074C,
        &&label_80D10750,
        &&label_80D10754,
        &&label_80D10758,
        &&label_80D1075C,
        &&label_80D10760,
        &&label_80D10764,
        &&label_80D10768,
        &&label_80D1076C,
        &&label_80D10770,
        &&label_80D10774,
        &&label_80D10778,
        &&label_80D1077C,
        &&label_80D10780,
        &&label_80D10784,
        &&label_80D10788,
        &&label_80D1078C,
        &&label_80D10790,
        &&label_80D10794,
        &&label_80D10798,
        &&label_80D1079C,
        &&label_80D107A0,
        &&label_80D107A4,
        &&label_80D107A8,
        &&label_80D107AC,
        &&label_80D107B0,
        &&label_80D107B4,
        &&label_80D107B8,
        &&label_80D107BC,
        &&label_80D107C0,
        &&label_80D107C4,
        &&label_80D107C8,
        &&label_80D107CC,
        &&label_80D107D0,
        &&label_80D107D4,
        &&label_80D107D8,
        &&label_80D107DC,
        &&label_80D107E0,
        &&label_80D107E4,
        &&label_80D107E8,
        &&label_80D107EC,
        &&label_80D107F0,
        &&label_80D107F4,
        &&label_80D107F8,
        &&label_80D107FC,
        &&label_80D10800,
        &&label_80D10804,
        &&label_80D10808,
        &&label_80D1080C,
        &&label_80D10810,
        &&label_80D10814,
        &&label_80D10818,
        &&label_80D1081C,
        &&label_80D10820,
        &&label_80D10824,
        &&label_80D10828,
        &&label_80D1082C,
        &&label_80D10830,
        &&label_80D10834,
        &&label_80D10838,
        &&label_80D1083C,
        &&label_80D10840,
        &&label_80D10844,
        &&label_80D10848,
        &&label_80D1084C,
        &&label_80D10850,
        &&label_80D10854,
        &&label_80D10858,
        &&label_80D1085C,
        &&label_80D10860,
        &&label_80D10864,
        &&label_80D10868,
        &&label_80D1086C,
        &&label_80D10870,
        &&label_80D10874,
        &&label_80D10878,
        &&label_80D1087C,
        &&label_80D10880,
        &&label_80D10884,
        &&label_80D10888,
        &&label_80D1088C,
        &&label_80D10890,
        &&label_80D10894,
        &&label_80D10898,
        &&label_80D1089C,
        &&label_80D108A0,
        &&label_80D108A4,
        &&label_80D108A8,
        &&label_80D108AC,
        &&label_80D108B0,
        &&label_80D108B4,
        &&label_80D108B8,
        &&label_80D108BC,
        &&label_80D108C0,
        &&label_80D108C4,
        &&label_80D108C8,
        &&label_80D108CC,
        &&label_80D108D0,
        &&label_80D108D4,
        &&label_80D108D8,
        &&label_80D108DC,
        &&label_80D108E0,
        &&label_80D108E4,
        &&label_80D108E8,
        &&label_80D108EC,
        &&label_80D108F0,
        &&label_80D108F4,
        &&label_80D108F8,
        &&label_80D108FC,
        &&label_80D10900,
        &&label_80D10904,
        &&label_80D10908,
        &&label_80D1090C,
        &&label_80D10910,
        &&label_80D10914,
        &&label_80D10918,
        &&label_80D1091C,
        &&label_80D10920,
        &&label_80D10924,
        &&label_80D10928,
        &&label_80D1092C,
        &&label_80D10930,
        &&label_80D10934,
        &&label_80D10938,
        &&label_80D1093C,
        &&label_80D10940,
        &&label_80D10944,
        &&label_80D10948,
        &&label_80D1094C,
        &&label_80D10950,
        &&label_80D10954,
        &&label_80D10958,
        &&label_80D1095C,
        &&label_80D10960,
        &&label_80D10964,
        &&label_80D10968,
        &&label_80D1096C,
        &&label_80D10970,
        &&label_80D10974,
        &&label_80D10978,
        &&label_80D1097C,
        &&label_80D10980,
        &&label_80D10984,
        &&label_80D10988,
        &&label_80D1098C,
        &&label_80D10990,
        &&label_80D10994,
        &&label_80D10998,
        &&label_80D1099C,
        &&label_80D109A0,
        &&label_80D109A4,
        &&label_80D109A8,
        &&label_80D109AC,
        &&label_80D109B0,
        &&label_80D109B4,
        &&label_80D109B8,
        &&label_80D109BC,
        &&label_80D109C0,
        &&label_80D109C4,
        &&label_80D109C8,
        &&label_80D109CC,
        &&label_80D109D0,
        &&label_80D109D4,
        &&label_80D109D8,
        &&label_80D109DC,
        &&label_80D109E0,
        &&label_80D109E4,
        &&label_80D109E8,
        &&label_80D109EC,
        &&label_80D109F0,
        &&label_80D109F4,
        &&label_80D109F8,
        &&label_80D109FC,
        &&label_80D10A00,
        &&label_80D10A04,
        &&label_80D10A08,
        &&label_80D10A0C,
        &&label_80D10A10,
        &&label_80D10A14,
        &&label_80D10A18,
        &&label_80D10A1C,
        &&label_80D10A20,
        &&label_80D10A24,
        &&label_80D10A28,
        &&label_80D10A2C,
        &&label_80D10A30,
        &&label_80D10A34,
        &&label_80D10A38,
        &&label_80D10A3C,
        &&label_80D10A40,
        &&label_80D10A44,
        &&label_80D10A48,
        &&label_80D10A4C,
        &&label_80D10A50,
        &&label_80D10A54,
        &&label_80D10A58,
        &&label_80D10A5C,
        &&label_80D10A60,
        &&label_80D10A64,
        &&label_80D10A68,
        &&label_80D10A6C,
        &&label_80D10A70,
        &&label_80D10A74,
        &&label_80D10A78,
        &&label_80D10A7C,
        &&label_80D10A80,
        &&label_80D10A84,
        &&label_80D10A88,
        &&label_80D10A8C,
        &&label_80D10A90,
        &&label_80D10A94,
        &&label_80D10A98,
        &&label_80D10A9C,
        &&label_80D10AA0,
        &&label_80D10AA4,
        &&label_80D10AA8,
        &&label_80D10AAC,
        &&label_80D10AB0,
        &&label_80D10AB4,
        &&label_80D10AB8,
        &&label_80D10ABC,
        &&label_80D10AC0,
        &&label_80D10AC4,
        &&label_80D10AC8,
        &&label_80D10ACC,
        &&label_80D10AD0,
        &&label_80D10AD4,
        &&label_80D10AD8,
        &&label_80D10ADC,
        &&label_80D10AE0,
        &&label_80D10AE4,
        &&label_80D10AE8,
        &&label_80D10AEC,
        &&label_80D10AF0,
        &&label_80D10AF4,
        &&label_80D10AF8,
        &&label_80D10AFC,
        &&label_80D10B00,
        &&label_80D10B04,
        &&label_80D10B08,
        &&label_80D10B0C,
        &&label_80D10B10,
        &&label_80D10B14,
        &&label_80D10B18,
        &&label_80D10B1C,
        &&label_80D10B20,
        &&label_80D10B24,
        &&label_80D10B28,
        &&label_80D10B2C,
        &&label_80D10B30,
        &&label_80D10B34,
        &&label_80D10B38,
        &&label_80D10B3C,
        &&label_80D10B40,
        &&label_80D10B44,
        &&label_80D10B48,
        &&label_80D10B4C,
        &&label_80D10B50,
        &&label_80D10B54,
        &&label_80D10B58,
        &&label_80D10B5C,
        &&label_80D10B60,
        &&label_80D10B64,
        &&label_80D10B68,
        &&label_80D10B6C,
        &&label_80D10B70,
        &&label_80D10B74,
        &&label_80D10B78,
        &&label_80D10B7C,
        &&label_80D10B80,
        &&label_80D10B84,
        &&label_80D10B88,
        &&label_80D10B8C,
        &&label_80D10B90,
        &&label_80D10B94,
        &&label_80D10B98,
        &&label_80D10B9C,
        &&label_80D10BA0,
        &&label_80D10BA4,
        &&label_80D10BA8,
        &&label_80D10BAC,
        &&label_80D10BB0,
        &&label_80D10BB4,
        &&label_80D10BB8,
        &&label_80D10BBC,
        &&label_80D10BC0,
        &&label_80D10BC4,
        &&label_80D10BC8,
        &&label_80D10BCC,
        &&label_80D10BD0,
        &&label_80D10BD4,
        &&label_80D10BD8,
        &&label_80D10BDC,
        &&label_80D10BE0,
        &&label_80D10BE4,
        &&label_80D10BE8,
        &&label_80D10BEC,
        &&label_80D10BF0,
        &&label_80D10BF4,
        &&label_80D10BF8,
        &&label_80D10BFC,
        &&label_80D10C00,
        &&label_80D10C04,
        &&label_80D10C08,
        &&label_80D10C0C,
        &&label_80D10C10,
        &&label_80D10C14,
        &&label_80D10C18,
        &&label_80D10C1C,
        &&label_80D10C20,
        &&label_80D10C24,
        &&label_80D10C28,
        &&label_80D10C2C,
        &&label_80D10C30,
        &&label_80D10C34,
        &&label_80D10C38,
        &&label_80D10C3C,
        &&label_80D10C40,
        &&label_80D10C44,
        &&label_80D10C48,
        &&label_80D10C4C,
        &&label_80D10C50,
        &&label_80D10C54,
        &&label_80D10C58,
        &&label_80D10C5C,
        &&label_80D10C60,
        &&label_80D10C64,
        &&label_80D10C68,
        &&label_80D10C6C,
        &&label_80D10C70,
        &&label_80D10C74,
        &&label_80D10C78,
        &&label_80D10C7C,
        &&label_80D10C80,
        &&label_80D10C84,
        &&label_80D10C88,
        &&label_80D10C8C,
        &&label_80D10C90,
        &&label_80D10C94,
        &&label_80D10C98,
        &&label_80D10C9C,
        &&label_80D10CA0,
        &&label_80D10CA4,
        &&label_80D10CA8,
        &&label_80D10CAC,
        &&label_80D10CB0,
        &&label_80D10CB4,
        &&label_80D10CB8,
        &&label_80D10CBC,
        &&label_80D10CC0,
        &&label_80D10CC4,
        &&label_80D10CC8,
        &&label_80D10CCC,
        &&label_80D10CD0,
        &&label_80D10CD4,
        &&label_80D10CD8,
        &&label_80D10CDC,
        &&label_80D10CE0,
        &&label_80D10CE4,
        &&label_80D10CE8,
        &&label_80D10CEC,
        &&label_80D10CF0,
        &&label_80D10CF4,
        &&label_80D10CF8,
        &&label_80D10CFC,
        &&label_80D10D00,
        &&label_80D10D04,
        &&label_80D10D08,
        &&label_80D10D0C,
        &&label_80D10D10,
        &&label_80D10D14,
        &&label_80D10D18,
        &&label_80D10D1C,
        &&label_80D10D20,
        &&label_80D10D24,
        &&label_80D10D28,
        &&label_80D10D2C,
        &&label_80D10D30,
        &&label_80D10D34,
        &&label_80D10D38,
        &&label_80D10D3C,
        &&label_80D10D40,
        &&label_80D10D44,
        &&label_80D10D48,
        &&label_80D10D4C,
        &&label_80D10D50,
        &&label_80D10D54,
        &&label_80D10D58,
        &&label_80D10D5C,
        &&label_80D10D60,
        &&label_80D10D64,
        &&label_80D10D68,
        &&label_80D10D6C,
        &&label_80D10D70,
        &&label_80D10D74,
        &&label_80D10D78,
        &&label_80D10D7C,
        &&label_80D10D80,
        &&label_80D10D84,
        &&label_80D10D88,
        &&label_80D10D8C,
        &&label_80D10D90,
        &&label_80D10D94,
        &&label_80D10D98,
        &&label_80D10D9C,
        &&label_80D10DA0,
        &&label_80D10DA4,
        &&label_80D10DA8,
        &&label_80D10DAC,
        &&label_80D10DB0,
        &&label_80D10DB4,
        &&label_80D10DB8,
        &&label_80D10DBC,
        &&label_80D10DC0,
        &&label_80D10DC4,
        &&label_80D10DC8,
        &&label_80D10DCC,
        &&label_80D10DD0,
        &&label_80D10DD4,
        &&label_80D10DD8,
        &&label_80D10DDC,
        &&label_80D10DE0,
        &&label_80D10DE4,
        &&label_80D10DE8,
        &&label_80D10DEC,
        &&label_80D10DF0,
        &&label_80D10DF4,
        &&label_80D10DF8,
        &&label_80D10DFC,
        &&label_80D10E00,
        &&label_80D10E04,
        &&label_80D10E08,
        &&label_80D10E0C,
        &&label_80D10E10,
        &&label_80D10E14,
        &&label_80D10E18,
        &&label_80D10E1C,
        &&label_80D10E20,
        &&label_80D10E24,
        &&label_80D10E28,
        &&label_80D10E2C,
        &&label_80D10E30,
        &&label_80D10E34,
        &&label_80D10E38,
        &&label_80D10E3C,
        &&label_80D10E40,
        &&label_80D10E44,
        &&label_80D10E48,
        &&label_80D10E4C,
        &&label_80D10E50,
        &&label_80D10E54,
        &&label_80D10E58,
        &&label_80D10E5C,
        &&label_80D10E60,
        &&label_80D10E64,
        &&label_80D10E68,
        &&label_80D10E6C,
        &&label_80D10E70,
        &&label_80D10E74,
        &&label_80D10E78,
        &&label_80D10E7C,
        &&label_80D10E80,
        &&label_80D10E84,
        &&label_80D10E88,
        &&label_80D10E8C,
        &&label_80D10E90,
        &&label_80D10E94,
        &&label_80D10E98,
        &&label_80D10E9C,
        &&label_80D10EA0,
        &&label_80D10EA4,
        &&label_80D10EA8,
        &&label_80D10EAC,
        &&label_80D10EB0,
        &&label_80D10EB4,
        &&label_80D10EB8,
        &&label_80D10EBC,
        &&label_80D10EC0,
        &&label_80D10EC4,
        &&label_80D10EC8,
        &&label_80D10ECC,
        &&label_80D10ED0,
        &&label_80D10ED4,
        &&label_80D10ED8,
        &&label_80D10EDC,
        &&label_80D10EE0,
        &&label_80D10EE4,
        &&label_80D10EE8,
        &&label_80D10EEC,
        &&label_80D10EF0,
        &&label_80D10EF4,
        &&label_80D10EF8,
        &&label_80D10EFC,
        &&label_80D10F00,
        &&label_80D10F04,
        &&label_80D10F08,
        &&label_80D10F0C,
        &&label_80D10F10,
        &&label_80D10F14,
        &&label_80D10F18,
        &&label_80D10F1C,
        &&label_80D10F20,
        &&label_80D10F24,
        &&label_80D10F28,
        &&label_80D10F2C,
        &&label_80D10F30,
        &&label_80D10F34,
        &&label_80D10F38,
        &&label_80D10F3C,
        &&label_80D10F40,
        &&label_80D10F44,
        &&label_80D10F48,
        &&label_80D10F4C,
        &&label_80D10F50,
        &&label_80D10F54,
        &&label_80D10F58,
        &&label_80D10F5C,
        &&label_80D10F60,
        &&label_80D10F64,
        &&label_80D10F68,
        &&label_80D10F6C,
        &&label_80D10F70,
        &&label_80D10F74,
        &&label_80D10F78,
        &&label_80D10F7C,
        &&label_80D10F80,
        &&label_80D10F84,
        &&label_80D10F88,
        &&label_80D10F8C,
        &&label_80D10F90,
        &&label_80D10F94,
        &&label_80D10F98,
        &&label_80D10F9C,
        &&label_80D10FA0,
        &&label_80D10FA4,
        &&label_80D10FA8,
        &&label_80D10FAC,
        &&label_80D10FB0,
        &&label_80D10FB4,
        &&label_80D10FB8,
        &&label_80D10FBC,
        &&label_80D10FC0,
        &&label_80D10FC4,
        &&label_80D10FC8,
        &&label_80D10FCC,
        &&label_80D10FD0,
        &&label_80D10FD4,
        &&label_80D10FD8,
        &&label_80D10FDC,
        &&label_80D10FE0,
        &&label_80D10FE4,
        &&label_80D10FE8,
        &&label_80D10FEC,
        &&label_80D10FF0,
        &&label_80D10FF4,
        &&label_80D10FF8,
        &&label_80D10FFC,
        &&label_80D11000,
        &&label_80D11004,
        &&label_80D11008,
        &&label_80D1100C,
        &&label_80D11010,
        &&label_80D11014,
        &&label_80D11018,
        &&label_80D1101C,
        &&label_80D11020,
        &&label_80D11024,
        &&label_80D11028,
        &&label_80D1102C,
        &&label_80D11030,
        &&label_80D11034,
        &&label_80D11038,
        &&label_80D1103C,
        &&label_80D11040,
        &&label_80D11044,
        &&label_80D11048,
        &&label_80D1104C,
        &&label_80D11050,
        &&label_80D11054,
        &&label_80D11058,
        &&label_80D1105C,
        &&label_80D11060,
        &&label_80D11064,
        &&label_80D11068,
        &&label_80D1106C,
        &&label_80D11070,
        &&label_80D11074,
        &&label_80D11078,
        &&label_80D1107C,
        &&label_80D11080,
        &&label_80D11084,
        &&label_80D11088,
        &&label_80D1108C,
        &&label_80D11090,
        &&label_80D11094,
        &&label_80D11098,
        &&label_80D1109C,
        &&label_80D110A0,
        &&label_80D110A4,
        &&label_80D110A8,
        &&label_80D110AC,
        &&label_80D110B0,
        &&label_80D110B4,
        &&label_80D110B8,
        &&label_80D110BC,
        &&label_80D110C0,
        &&label_80D110C4,
        &&label_80D110C8,
        &&label_80D110CC,
        &&label_80D110D0,
        &&label_80D110D4,
        &&label_80D110D8,
        &&label_80D110DC,
        &&label_80D110E0,
        &&label_80D110E4,
        &&label_80D110E8,
        &&label_80D110EC,
        &&label_80D110F0,
        &&label_80D110F4,
        &&label_80D110F8,
        &&label_80D110FC,
        &&label_80D11100,
        &&label_80D11104,
        &&label_80D11108,
        &&label_80D1110C,
        &&label_80D11110,
        &&label_80D11114,
        &&label_80D11118,
        &&label_80D1111C,
        &&label_80D11120,
        &&label_80D11124,
        &&label_80D11128,
        &&label_80D1112C,
        &&label_80D11130,
        &&label_80D11134,
        &&label_80D11138,
        &&label_80D1113C,
        &&label_80D11140,
        &&label_80D11144,
        &&label_80D11148,
        &&label_80D1114C,
        &&label_80D11150,
        &&label_80D11154,
        &&label_80D11158,
        &&label_80D1115C,
        &&label_80D11160,
        &&label_80D11164,
        &&label_80D11168,
        &&label_80D1116C,
        &&label_80D11170,
        &&label_80D11174,
        &&label_80D11178,
        &&label_80D1117C,
        &&label_80D11180,
        &&label_80D11184,
        &&label_80D11188,
        &&label_80D1118C,
        &&label_80D11190,
        &&label_80D11194,
        &&label_80D11198,
        &&label_80D1119C,
        &&label_80D111A0,
        &&label_80D111A4,
        &&label_80D111A8,
        &&label_80D111AC,
        &&label_80D111B0,
        &&label_80D111B4,
        &&label_80D111B8,
        &&label_80D111BC,
        &&label_80D111C0,
        &&label_80D111C4,
        &&label_80D111C8,
        &&label_80D111CC,
        &&label_80D111D0,
        &&label_80D111D4,
        &&label_80D111D8,
        &&label_80D111DC,
        &&label_80D111E0,
        &&label_80D111E4,
        &&label_80D111E8,
        &&label_80D111EC,
        &&label_80D111F0,
        &&label_80D111F4,
        &&label_80D111F8,
        &&label_80D111FC,
        &&label_80D11200,
        &&label_80D11204,
        &&label_80D11208,
        &&label_80D1120C,
        &&label_80D11210,
        &&label_80D11214,
        &&label_80D11218,
        &&label_80D1121C,
        &&label_80D11220,
        &&label_80D11224,
        &&label_80D11228,
        &&label_80D1122C,
        &&label_80D11230,
        &&label_80D11234,
        &&label_80D11238,
        &&label_80D1123C,
        &&label_80D11240,
        &&label_80D11244,
        &&label_80D11248,
        &&label_80D1124C,
        &&label_80D11250,
        &&label_80D11254,
        &&label_80D11258,
        &&label_80D1125C,
        &&label_80D11260,
        &&label_80D11264,
        &&label_80D11268,
        &&label_80D1126C,
        &&label_80D11270,
        &&label_80D11274,
        &&label_80D11278,
        &&label_80D1127C,
        &&label_80D11280,
        &&label_80D11284,
        &&label_80D11288,
        &&label_80D1128C,
        &&label_80D11290,
        &&label_80D11294,
        &&label_80D11298,
        &&label_80D1129C,
        &&label_80D112A0,
        &&label_80D112A4,
        &&label_80D112A8,
        &&label_80D112AC,
        &&label_80D112B0,
        &&label_80D112B4,
        &&label_80D112B8,
        &&label_80D112BC,
        &&label_80D112C0,
        &&label_80D112C4,
        &&label_80D112C8,
        &&label_80D112CC,
        &&label_80D112D0,
        &&label_80D112D4,
        &&label_80D112D8,
        &&label_80D112DC,
        &&label_80D112E0,
        &&label_80D112E4,
        &&label_80D112E8,
        &&label_80D112EC,
        &&label_80D112F0,
        &&label_80D112F4,
        &&label_80D112F8,
        &&label_80D112FC,
        &&label_80D11300,
        &&label_80D11304,
        &&label_80D11308,
        &&label_80D1130C,
        &&label_80D11310,
        &&label_80D11314,
        &&label_80D11318,
        &&label_80D1131C,
        &&label_80D11320,
        &&label_80D11324,
        &&label_80D11328,
        &&label_80D1132C,
        &&label_80D11330,
        &&label_80D11334,
        &&label_80D11338,
        &&label_80D1133C,
        &&label_80D11340,
        &&label_80D11344,
        &&label_80D11348,
        &&label_80D1134C,
        &&label_80D11350,
        &&label_80D11354,
        &&label_80D11358,
        &&label_80D1135C,
        &&label_80D11360,
        &&label_80D11364,
        &&label_80D11368,
        &&label_80D1136C,
        &&label_80D11370,
        &&label_80D11374,
        &&label_80D11378,
        &&label_80D1137C,
        &&label_80D11380,
        &&label_80D11384,
        &&label_80D11388,
        &&label_80D1138C,
        &&label_80D11390,
        &&label_80D11394,
        &&label_80D11398,
        &&label_80D1139C,
        &&label_80D113A0,
        &&label_80D113A4,
        &&label_80D113A8,
        &&label_80D113AC,
        &&label_80D113B0,
        &&label_80D113B4,
        &&label_80D113B8,
        &&label_80D113BC,
        &&label_80D113C0,
        &&label_80D113C4,
        &&label_80D113C8,
        &&label_80D113CC,
        &&label_80D113D0,
        &&label_80D113D4,
        &&label_80D113D8,
        &&label_80D113DC,
        &&label_80D113E0,
        &&label_80D113E4,
        &&label_80D113E8,
        &&label_80D113EC,
        &&label_80D113F0,
        &&label_80D113F4,
        &&label_80D113F8,
        &&label_80D113FC,
        &&label_80D11400,
        &&label_80D11404,
        &&label_80D11408,
        &&label_80D1140C,
        &&label_80D11410,
        &&label_80D11414,
        &&label_80D11418,
        &&label_80D1141C,
        &&label_80D11420,
        &&label_80D11424,
        &&label_80D11428,
        &&label_80D1142C,
        &&label_80D11430,
        &&label_80D11434,
        &&label_80D11438,
        &&label_80D1143C,
        &&label_80D11440,
        &&label_80D11444,
        &&label_80D11448,
        &&label_80D1144C,
        &&label_80D11450,
        &&label_80D11454,
        &&label_80D11458,
        &&label_80D1145C,
        &&label_80D11460,
        &&label_80D11464,
        &&label_80D11468,
        &&label_80D1146C,
        &&label_80D11470,
        &&label_80D11474,
        &&label_80D11478,
        &&label_80D1147C,
        &&label_80D11480,
        &&label_80D11484,
        &&label_80D11488,
        &&label_80D1148C,
        &&label_80D11490,
        &&label_80D11494,
        &&label_80D11498,
        &&label_80D1149C,
        &&label_80D114A0,
        &&label_80D114A4,
        &&label_80D114A8,
        &&label_80D114AC,
        &&label_80D114B0,
        &&label_80D114B4,
        &&label_80D114B8,
        &&label_80D114BC,
        &&label_80D114C0,
        &&label_80D114C4,
        &&label_80D114C8,
        &&label_80D114CC,
        &&label_80D114D0,
        &&label_80D114D4,
        &&label_80D114D8,
        &&label_80D114DC,
        &&label_80D114E0,
        &&label_80D114E4,
        &&label_80D114E8,
        &&label_80D114EC,
        &&label_80D114F0,
        &&label_80D114F4,
        &&label_80D114F8,
        &&label_80D114FC,
        &&label_80D11500,
        &&label_80D11504,
        &&label_80D11508,
        &&label_80D1150C,
        &&label_80D11510,
        &&label_80D11514,
        &&label_80D11518,
        &&label_80D1151C,
        &&label_80D11520,
        &&label_80D11524,
        &&label_80D11528,
        &&label_80D1152C,
        &&label_80D11530,
        &&label_80D11534,
        &&label_80D11538,
        &&label_80D1153C,
        &&label_80D11540,
        &&label_80D11544,
        &&label_80D11548,
        &&label_80D1154C,
        &&label_80D11550,
        &&label_80D11554,
        &&label_80D11558,
        &&label_80D1155C,
        &&label_80D11560,
        &&label_80D11564,
        &&label_80D11568,
        &&label_80D1156C,
        &&label_80D11570,
        &&label_80D11574,
        &&label_80D11578,
        &&label_80D1157C,
        &&label_80D11580,
        &&label_80D11584,
        &&label_80D11588,
        &&label_80D1158C,
        &&label_80D11590,
        &&label_80D11594,
        &&label_80D11598,
        &&label_80D1159C,
        &&label_80D115A0,
        &&label_80D115A4,
        &&label_80D115A8,
        &&label_80D115AC,
        &&label_80D115B0,
        &&label_80D115B4,
        &&label_80D115B8,
        &&label_80D115BC,
        &&label_80D115C0,
        &&label_80D115C4,
        &&label_80D115C8,
        &&label_80D115CC,
        &&label_80D115D0,
        &&label_80D115D4,
        &&label_80D115D8,
        &&label_80D115DC,
        &&label_80D115E0,
        &&label_80D115E4,
        &&label_80D115E8,
        &&label_80D115EC,
        &&label_80D115F0,
        &&label_80D115F4,
        &&label_80D115F8,
        &&label_80D115FC,
        &&label_80D11600,
        &&label_80D11604,
        &&label_80D11608,
        &&label_80D1160C,
        &&label_80D11610,
        &&label_80D11614,
        &&label_80D11618,
        &&label_80D1161C,
        &&label_80D11620,
        &&label_80D11624,
        &&label_80D11628,
        &&label_80D1162C,
        &&label_80D11630,
        &&label_80D11634,
        &&label_80D11638,
        &&label_80D1163C,
        &&label_80D11640,
        &&label_80D11644,
        &&label_80D11648,
        &&label_80D1164C,
        &&label_80D11650,
        &&label_80D11654,
        &&label_80D11658,
        &&label_80D1165C,
        &&label_80D11660,
        &&label_80D11664,
        &&label_80D11668,
        &&label_80D1166C,
        &&label_80D11670,
        &&label_80D11674,
        &&label_80D11678,
        &&label_80D1167C,
        &&label_80D11680,
        &&label_80D11684,
        &&label_80D11688,
        &&label_80D1168C,
        &&label_80D11690,
        &&label_80D11694,
        &&label_80D11698,
        &&label_80D1169C,
        &&label_80D116A0,
        &&label_80D116A4,
        &&label_80D116A8,
        &&label_80D116AC,
        &&label_80D116B0,
        &&label_80D116B4,
        &&label_80D116B8,
        &&label_80D116BC,
        &&label_80D116C0,
        &&label_80D116C4,
        &&label_80D116C8,
        &&label_80D116CC,
        &&label_80D116D0,
        &&label_80D116D4,
        &&label_80D116D8,
        &&label_80D116DC,
        &&label_80D116E0,
        &&label_80D116E4,
        &&label_80D116E8,
        &&label_80D116EC,
        &&label_80D116F0,
        &&label_80D116F4,
        &&label_80D116F8,
        &&label_80D116FC,
        &&label_80D11700,
        &&label_80D11704,
        &&label_80D11708,
        &&label_80D1170C,
        &&label_80D11710,
        &&label_80D11714,
        &&label_80D11718,
        &&label_80D1171C,
        &&label_80D11720,
        &&label_80D11724,
        &&label_80D11728,
        &&label_80D1172C,
        &&label_80D11730,
        &&label_80D11734,
        &&label_80D11738,
        &&label_80D1173C,
        &&label_80D11740,
        &&label_80D11744,
        &&label_80D11748,
        &&label_80D1174C,
        &&label_80D11750,
        &&label_80D11754,
        &&label_80D11758,
        &&label_80D1175C,
        &&label_80D11760,
        &&label_80D11764,
        &&label_80D11768,
        &&label_80D1176C,
        &&label_80D11770,
        &&label_80D11774,
        &&label_80D11778,
        &&label_80D1177C,
        &&label_80D11780,
        &&label_80D11784,
        &&label_80D11788,
        &&label_80D1178C,
        &&label_80D11790,
        &&label_80D11794,
        &&label_80D11798,
        &&label_80D1179C,
        &&label_80D117A0,
        &&label_80D117A4,
        &&label_80D117A8,
        &&label_80D117AC,
        &&label_80D117B0,
        &&label_80D117B4,
        &&label_80D117B8,
        &&label_80D117BC,
        &&label_80D117C0,
        &&label_80D117C4,
        &&label_80D117C8,
        &&label_80D117CC,
        &&label_80D117D0,
        &&label_80D117D4,
        &&label_80D117D8,
        &&label_80D117DC,
        &&label_80D117E0,
        &&label_80D117E4,
        &&label_80D117E8,
        &&label_80D117EC,
        &&label_80D117F0,
        &&label_80D117F4,
        &&label_80D117F8,
        &&label_80D117FC,
        &&label_80D11800,
        &&label_80D11804,
        &&label_80D11808,
        &&label_80D1180C,
        &&label_80D11810,
        &&label_80D11814,
        &&label_80D11818,
        &&label_80D1181C,
        &&label_80D11820,
        &&label_80D11824,
        &&label_80D11828,
        &&label_80D1182C,
        &&label_80D11830,
        &&label_80D11834,
        &&label_80D11838,
        &&label_80D1183C,
        &&label_80D11840,
        &&label_80D11844,
        &&label_80D11848,
        &&label_80D1184C,
        &&label_80D11850,
        &&label_80D11854,
        &&label_80D11858,
        &&label_80D1185C,
        &&label_80D11860,
        &&label_80D11864,
        &&label_80D11868,
        &&label_80D1186C,
        &&label_80D11870,
        &&label_80D11874,
        &&label_80D11878,
        &&label_80D1187C,
        &&label_80D11880,
        &&label_80D11884,
        &&label_80D11888,
        &&label_80D1188C,
        &&label_80D11890,
        &&label_80D11894,
        &&label_80D11898,
        &&label_80D1189C,
        &&label_80D118A0,
        &&label_80D118A4,
        &&label_80D118A8,
        &&label_80D118AC,
        &&label_80D118B0,
        &&label_80D118B4,
        &&label_80D118B8,
        &&label_80D118BC,
        &&label_80D118C0,
        &&label_80D118C4,
        &&label_80D118C8,
        &&label_80D118CC,
        &&label_80D118D0,
        &&label_80D118D4,
        &&label_80D118D8,
        &&label_80D118DC,
        &&label_80D118E0,
        &&label_80D118E4,
        &&label_80D118E8,
        &&label_80D118EC,
        &&label_80D118F0,
        &&label_80D118F4,
        &&label_80D118F8,
        &&label_80D118FC,
        &&label_80D11900,
        &&label_80D11904,
        &&label_80D11908,
        &&label_80D1190C,
        &&label_80D11910,
        &&label_80D11914,
        &&label_80D11918,
        &&label_80D1191C,
        &&label_80D11920,
        &&label_80D11924,
        &&label_80D11928,
        &&label_80D1192C,
        &&label_80D11930,
        &&label_80D11934,
        &&label_80D11938,
        &&label_80D1193C,
        &&label_80D11940,
        &&label_80D11944,
        &&label_80D11948,
        &&label_80D1194C,
        &&label_80D11950,
        &&label_80D11954,
        &&label_80D11958,
        &&label_80D1195C,
        &&label_80D11960,
        &&label_80D11964,
        &&label_80D11968,
        &&label_80D1196C,
        &&label_80D11970,
        &&label_80D11974,
        &&label_80D11978,
        &&label_80D1197C,
        &&label_80D11980,
        &&label_80D11984,
        &&label_80D11988,
        &&label_80D1198C,
        &&label_80D11990,
        &&label_80D11994,
        &&label_80D11998,
        &&label_80D1199C,
        &&label_80D119A0,
        &&label_80D119A4,
        &&label_80D119A8,
        &&label_80D119AC,
        &&label_80D119B0,
        &&label_80D119B4,
        &&label_80D119B8,
        &&label_80D119BC,
        &&label_80D119C0,
        &&label_80D119C4,
        &&label_80D119C8,
        &&label_80D119CC,
        &&label_80D119D0,
        &&label_80D119D4,
        &&label_80D119D8,
        &&label_80D119DC,
        &&label_80D119E0,
        &&label_80D119E4,
        &&label_80D119E8,
        &&label_80D119EC,
        &&label_80D119F0,
        &&label_80D119F4,
        &&label_80D119F8,
        &&label_80D119FC,
        &&label_80D11A00,
        &&label_80D11A04,
        &&label_80D11A08,
        &&label_80D11A0C,
        &&label_80D11A10,
        &&label_80D11A14,
        &&label_80D11A18,
        &&label_80D11A1C,
        &&label_80D11A20,
        &&label_80D11A24,
        &&label_80D11A28,
        &&label_80D11A2C,
        &&label_80D11A30,
        &&label_80D11A34,
        &&label_80D11A38,
        &&label_80D11A3C,
        &&label_80D11A40,
        &&label_80D11A44,
        &&label_80D11A48,
        &&label_80D11A4C,
        &&label_80D11A50,
        &&label_80D11A54,
        &&label_80D11A58,
        &&label_80D11A5C,
        &&label_80D11A60,
        &&label_80D11A64,
        &&label_80D11A68,
        &&label_80D11A6C,
        &&label_80D11A70,
        &&label_80D11A74,
        &&label_80D11A78,
        &&label_80D11A7C,
        &&label_80D11A80,
        &&label_80D11A84,
        &&label_80D11A88,
        &&label_80D11A8C,
        &&label_80D11A90,
        &&label_80D11A94,
        &&label_80D11A98,
        &&label_80D11A9C,
        &&label_80D11AA0,
        &&label_80D11AA4,
        &&label_80D11AA8,
        &&label_80D11AAC,
        &&label_80D11AB0,
        &&label_80D11AB4,
        &&label_80D11AB8,
        &&label_80D11ABC,
        &&label_80D11AC0,
        &&label_80D11AC4,
        &&label_80D11AC8,
        &&label_80D11ACC,
        &&label_80D11AD0,
        &&label_80D11AD4,
        &&label_80D11AD8,
        &&label_80D11ADC,
        &&label_80D11AE0,
        &&label_80D11AE4,
        &&label_80D11AE8,
        &&label_80D11AEC,
        &&label_80D11AF0,
        &&label_80D11AF4,
        &&label_80D11AF8,
        &&label_80D11AFC,
        &&label_80D11B00,
        &&label_80D11B04,
        &&label_80D11B08,
        &&label_80D11B0C,
        &&label_80D11B10,
        &&label_80D11B14,
        &&label_80D11B18,
        &&label_80D11B1C,
        &&label_80D11B20,
        &&label_80D11B24,
        &&label_80D11B28,
        &&label_80D11B2C,
        &&label_80D11B30,
        &&label_80D11B34,
        &&label_80D11B38,
        &&label_80D11B3C,
        &&label_80D11B40,
        &&label_80D11B44,
        &&label_80D11B48,
        &&label_80D11B4C,
        &&label_80D11B50,
        &&label_80D11B54,
        &&label_80D11B58,
        &&label_80D11B5C,
        &&label_80D11B60,
        &&label_80D11B64,
        &&label_80D11B68,
        &&label_80D11B6C,
        &&label_80D11B70,
        &&label_80D11B74,
        &&label_80D11B78,
        &&label_80D11B7C,
        &&label_80D11B80,
        &&label_80D11B84,
        &&label_80D11B88,
        &&label_80D11B8C,
        &&label_80D11B90,
        &&label_80D11B94,
        &&label_80D11B98,
        &&label_80D11B9C,
        &&label_80D11BA0,
        &&label_80D11BA4,
        &&label_80D11BA8,
        &&label_80D11BAC,
        &&label_80D11BB0,
        &&label_80D11BB4,
        &&label_80D11BB8,
        &&label_80D11BBC,
        &&label_80D11BC0,
        &&label_80D11BC4,
        &&label_80D11BC8,
        &&label_80D11BCC,
        &&label_80D11BD0,
        &&label_80D11BD4,
        &&label_80D11BD8,
        &&label_80D11BDC,
        &&label_80D11BE0,
        &&label_80D11BE4,
        &&label_80D11BE8,
        &&label_80D11BEC,
        &&label_80D11BF0,
        &&label_80D11BF4,
        &&label_80D11BF8,
        &&label_80D11BFC,
        &&label_80D11C00,
        &&label_80D11C04,
        &&label_80D11C08,
        &&label_80D11C0C,
        &&label_80D11C10,
        &&label_80D11C14,
        &&label_80D11C18,
        &&label_80D11C1C,
        &&label_80D11C20,
        &&label_80D11C24,
        &&label_80D11C28,
        &&label_80D11C2C,
        &&label_80D11C30,
        &&label_80D11C34,
        &&label_80D11C38,
        &&label_80D11C3C,
        &&label_80D11C40,
        &&label_80D11C44,
        &&label_80D11C48,
        &&label_80D11C4C,
        &&label_80D11C50,
        &&label_80D11C54,
        &&label_80D11C58,
        &&label_80D11C5C,
        &&label_80D11C60,
        &&label_80D11C64,
        &&label_80D11C68,
        &&label_80D11C6C,
        &&label_80D11C70,
        &&label_80D11C74,
        &&label_80D11C78,
        &&label_80D11C7C,
        &&label_80D11C80,
        &&label_80D11C84,
        &&label_80D11C88,
        &&label_80D11C8C,
        &&label_80D11C90,
        &&label_80D11C94,
        &&label_80D11C98,
        &&label_80D11C9C,
        &&label_80D11CA0,
        &&label_80D11CA4,
        &&label_80D11CA8,
        &&label_80D11CAC,
        &&label_80D11CB0,
        &&label_80D11CB4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D0FF80u && pc <= 0x80D11CB4u && ((pc - 0x80D0FF80u) & 3u) == 0u)
            goto *pc_table_80D0FF80[(pc - 0x80D0FF80u) >> 2];
    }
    return;
label_80D0FF80:
    ctx->pc = 0x80D0FF80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FF80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0FF80: stwu     r1, -16(r1)
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
label_80D0FF84:
    ctx->pc = 0x80D0FF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0FF84: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0FF88:
    ctx->pc = 0x80D0FF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0FF88: stw     r0, 20(r1)
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
label_80D0FF8C:
    ctx->pc = 0x80D0FF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0FF8C: stw     r31, 12(r1)
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
label_80D0FF90:
    ctx->pc = 0x80D0FF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FF90u)) return;
    // 80D0FF90: cmpwi   r3, 2
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

label_80D0FF94:
    ctx->pc = 0x80D0FF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FF94u)) return;
    // 80D0FF94: bc    12, 2, 0x80D10CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D10CE4;
        }
    }

label_80D0FF98:
    ctx->pc = 0x80D0FF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0FF98: bc    4, 0, 0x80D0FFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0FFAC;
        }
    }

label_80D0FF9C:
    ctx->pc = 0x80D0FF9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FF9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0FF9C: cmpwi   r3, 0
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

label_80D0FFA0:
    ctx->pc = 0x80D0FFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFA0u)) return;
    // 80D0FFA0: bc    12, 2, 0x80D10D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D10D4C;
        }
    }

label_80D0FFA4:
    ctx->pc = 0x80D0FFA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0FFA4: bc    4, 0, 0x80D0FFB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0FFB4;
        }
    }

label_80D0FFA8:
    ctx->pc = 0x80D0FFA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0FFA8: b       0x80D10D4C
    {
            goto label_80D10D4C;
    }

label_80D0FFAC:
    ctx->pc = 0x80D0FFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0FFAC: cmpwi   r3, 4
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

label_80D0FFB0:
    ctx->pc = 0x80D0FFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFB0u)) return;
    // 80D0FFB0: b       0x80D10D4C
    {
            goto label_80D10D4C;
    }

label_80D0FFB4:
    ctx->pc = 0x80D0FFB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0FFB4: bl      0x80460A60
    {
            ctx->lr = 0x80D0FFB8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D0FFB8:
    ctx->pc = 0x80D0FFB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0FFB8: bl      0x80460A24
    {
            ctx->lr = 0x80D0FFBCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D0FFBC:
    ctx->pc = 0x80D0FFBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0FFBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0FFC0:
    ctx->pc = 0x80D0FFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFC0u)) return;
    // 80D0FFC0: bl      0x8045F220
    {
            ctx->lr = 0x80D0FFC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0FFC4:
    ctx->pc = 0x80D0FFC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0FFC4: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D0FFC8:
    ctx->pc = 0x80D0FFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFC8u)) return;
    // 80D0FFC8: addi    r4, r4, 9616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9616);

label_80D0FFCC:
    ctx->pc = 0x80D0FFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0FFCC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0FFCCu)) return;
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
label_80D0FFD0:
    ctx->pc = 0x80D0FFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFD0u)) return;
    // 80D0FFD0: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D0FFD4:
    ctx->pc = 0x80D0FFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFD4u)) return;
    // 80D0FFD4: addi    r4, r4, 9620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9620);

label_80D0FFD8:
    ctx->pc = 0x80D0FFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0FFD8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0FFD8u)) return;
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
label_80D0FFDC:
    ctx->pc = 0x80D0FFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFDCu)) return;
    // 80D0FFDC: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D0FFE0:
    ctx->pc = 0x80D0FFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFE0u)) return;
    // 80D0FFE0: addi    r4, r4, 9624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9624);

label_80D0FFE4:
    ctx->pc = 0x80D0FFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0FFE4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0FFE4u)) return;
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
label_80D0FFE8:
    ctx->pc = 0x80D0FFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFE8u)) return;
    // 80D0FFE8: bl      0x8045EF2C
    {
            ctx->lr = 0x80D0FFECu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D0FFEC:
    ctx->pc = 0x80D0FFECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0FFEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0FFF0:
    ctx->pc = 0x80D0FFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFF0u)) return;
    // 80D0FFF0: bl      0x8045F220
    {
            ctx->lr = 0x80D0FFF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0FFF4:
    ctx->pc = 0x80D0FFF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0FFF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0FFF4: li      r4, 1264
    ctx->gpr[4] = (u32)(s32)(1264);

label_80D0FFF8:
    ctx->pc = 0x80D0FFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFF8u)) return;
    // 80D0FFF8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D0FFFC:
    ctx->pc = 0x80D0FFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0FFFCu)) return;
    // 80D0FFFC: addi    r5, r5, -32512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32512);

label_80D10000:
    ctx->pc = 0x80D10000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10000u)) return;
    // 80D10000: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D10004:
    ctx->pc = 0x80D10004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10004u)) return;
    // 80D10004: bl      0x8045EEA8
    {
            ctx->lr = 0x80D10008u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D10008:
    ctx->pc = 0x80D10008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10008: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1000C:
    ctx->pc = 0x80D1000Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1000Cu)) return;
    // 80D1000C: bl      0x804C90A0
    {
            ctx->lr = 0x80D10010u;
            ctx->pc = 0x804C90A0u;
            return;
    }

label_80D10010:
    ctx->pc = 0x80D10010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10010: lwz     r3, 32(r3)
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
label_80D10014:
    ctx->pc = 0x80D10014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10014: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10018:
    ctx->pc = 0x80D10018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10018u)) return;
    // 80D10018: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80D1001C:
    ctx->pc = 0x80D1001Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1001Cu)) return;
    // 80D1001C: cmpwi   r0, 2
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

label_80D10020:
    ctx->pc = 0x80D10020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10020u)) return;
    // 80D10020: bc    12, 2, 0x80D1002C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D1002C;
        }
    }

label_80D10024:
    ctx->pc = 0x80D10024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10024: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D10028:
    ctx->pc = 0x80D10028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10028u)) return;
    // 80D10028: bl      0x8045F7C8
    {
            ctx->lr = 0x80D1002Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D1002C:
    ctx->pc = 0x80D1002Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1002Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D1002C: bl      0x8045DE7C
    {
            ctx->lr = 0x80D10030u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D10030:
    ctx->pc = 0x80D10030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10030: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_80D10034:
    ctx->pc = 0x80D10034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10034u)) return;
    // 80D10034: bl      0x80406090
    {
            ctx->lr = 0x80D10038u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D10038:
    ctx->pc = 0x80D10038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D10038: lis     r3, -27346
    ctx->gpr[3] = ((u32)(s32)(-27346) << 16);

label_80D1003C:
    ctx->pc = 0x80D1003Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1003Cu)) return;
    // 80D1003C: addi    r3, r3, 10628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10628);

label_80D10040:
    ctx->pc = 0x80D10040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10040u)) return;
    // 80D10040: bl      0x8050AF58
    {
            ctx->lr = 0x80D10044u;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80D10044:
    ctx->pc = 0x80D10044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10044: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D10048:
    ctx->pc = 0x80D10048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10048u)) return;
    // 80D10048: bl      0x80D11928
    {
            ctx->lr = 0x80D1004Cu;
            goto label_80D11928;
    }

label_80D1004C:
    ctx->pc = 0x80D1004Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1004Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1004C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10050:
    ctx->pc = 0x80D10050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10050u)) return;
    // 80D10050: bl      0x8045F220
    {
            ctx->lr = 0x80D10054u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10054:
    ctx->pc = 0x80D10054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10054: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10058:
    ctx->pc = 0x80D10058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10058u)) return;
    // 80D10058: addi    r4, r4, 9616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9616);

label_80D1005C:
    ctx->pc = 0x80D1005Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1005Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1005C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D1005Cu)) return;
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
label_80D10060:
    ctx->pc = 0x80D10060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10060u)) return;
    // 80D10060: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10064:
    ctx->pc = 0x80D10064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10064u)) return;
    // 80D10064: addi    r4, r4, 9620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9620);

label_80D10068:
    ctx->pc = 0x80D10068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10068: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10068u)) return;
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
label_80D1006C:
    ctx->pc = 0x80D1006Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1006Cu)) return;
    // 80D1006C: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10070:
    ctx->pc = 0x80D10070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10070u)) return;
    // 80D10070: addi    r4, r4, 9624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9624);

label_80D10074:
    ctx->pc = 0x80D10074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10074: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10074u)) return;
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
label_80D10078:
    ctx->pc = 0x80D10078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10078u)) return;
    // 80D10078: bl      0x8045EF2C
    {
            ctx->lr = 0x80D1007Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D1007C:
    ctx->pc = 0x80D1007Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1007Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1007C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10080:
    ctx->pc = 0x80D10080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10080u)) return;
    // 80D10080: bl      0x8045F220
    {
            ctx->lr = 0x80D10084u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10084:
    ctx->pc = 0x80D10084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D10084: li      r4, 1264
    ctx->gpr[4] = (u32)(s32)(1264);

label_80D10088:
    ctx->pc = 0x80D10088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10088u)) return;
    // 80D10088: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D1008C:
    ctx->pc = 0x80D1008Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1008Cu)) return;
    // 80D1008C: addi    r5, r5, -32512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32512);

label_80D10090:
    ctx->pc = 0x80D10090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10090u)) return;
    // 80D10090: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D10094:
    ctx->pc = 0x80D10094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10094u)) return;
    // 80D10094: bl      0x8045EEA8
    {
            ctx->lr = 0x80D10098u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D10098:
    ctx->pc = 0x80D10098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D10098: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D1009C:
    ctx->pc = 0x80D1009Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1009Cu)) return;
    // 80D1009C: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_80D100A0:
    ctx->pc = 0x80D100A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100A0u)) return;
    // 80D100A0: addi    r4, r4, 18200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18200);

label_80D100A4:
    ctx->pc = 0x80D100A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100A4u)) return;
    // 80D100A4: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D100A8:
    ctx->pc = 0x80D100A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100A8u)) return;
    // 80D100A8: addi    r5, r5, 9628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9628);

label_80D100AC:
    ctx->pc = 0x80D100ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D100AC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D100ACu)) return;
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
label_80D100B0:
    ctx->pc = 0x80D100B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100B0u)) return;
    // 80D100B0: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D100B4:
    ctx->pc = 0x80D100B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100B4u)) return;
    // 80D100B4: addi    r5, r5, 9632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9632);

label_80D100B8:
    ctx->pc = 0x80D100B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D100B8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D100B8u)) return;
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
label_80D100BC:
    ctx->pc = 0x80D100BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100BCu)) return;
    // 80D100BC: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D100C0:
    ctx->pc = 0x80D100C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100C0u)) return;
    // 80D100C0: addi    r5, r5, 9636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9636);

label_80D100C4:
    ctx->pc = 0x80D100C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D100C4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D100C4u)) return;
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
label_80D100C8:
    ctx->pc = 0x80D100C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100C8u)) return;
    // 80D100C8: li      r5, 1264
    ctx->gpr[5] = (u32)(s32)(1264);

label_80D100CC:
    ctx->pc = 0x80D100CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100CCu)) return;
    // 80D100CC: li      r6, 19456
    ctx->gpr[6] = (u32)(s32)(19456);

label_80D100D0:
    ctx->pc = 0x80D100D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100D0u)) return;
    // 80D100D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D100D4:
    ctx->pc = 0x80D100D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100D4u)) return;
    // 80D100D4: bl      0x8045ED84
    {
            ctx->lr = 0x80D100D8u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80D100D8:
    ctx->pc = 0x80D100D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D100D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D100D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D100DC:
    ctx->pc = 0x80D100DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100DCu)) return;
    // 80D100DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D100E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D100E0:
    ctx->pc = 0x80D100E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D100E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D100E0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D100E4:
    ctx->pc = 0x80D100E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100E4u)) return;
    // 80D100E4: bl      0x8045F220
    {
            ctx->lr = 0x80D100E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D100E8:
    ctx->pc = 0x80D100E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D100E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D100E8: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D100EC:
    ctx->pc = 0x80D100ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100ECu)) return;
    // 80D100EC: addi    r4, r4, 10640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10640);

label_80D100F0:
    ctx->pc = 0x80D100F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100F0u)) return;
    // 80D100F0: bl      0x8045C060
    {
            ctx->lr = 0x80D100F4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D100F4:
    ctx->pc = 0x80D100F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D100F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D100F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D100F8:
    ctx->pc = 0x80D100F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100F8u)) return;
    // 80D100F8: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80D100FC:
    ctx->pc = 0x80D100FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D100FCu)) return;
    // 80D100FC: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10100:
    ctx->pc = 0x80D10100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10100u)) return;
    // 80D10100: addi    r5, r5, 9640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9640);

label_80D10104:
    ctx->pc = 0x80D10104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10104: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10104u)) return;
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
label_80D10108:
    ctx->pc = 0x80D10108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10108u)) return;
    // 80D10108: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D1010C:
    ctx->pc = 0x80D1010Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1010Cu)) return;
    // 80D1010C: addi    r5, r5, 9644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9644);

label_80D10110:
    ctx->pc = 0x80D10110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10110: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10110u)) return;
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
label_80D10114:
    ctx->pc = 0x80D10114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10114u)) return;
    // 80D10114: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10118:
    ctx->pc = 0x80D10118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10118u)) return;
    // 80D10118: addi    r5, r5, 9648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9648);

label_80D1011C:
    ctx->pc = 0x80D1011Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1011Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D1011C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D1011Cu)) return;
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
label_80D10120:
    ctx->pc = 0x80D10120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10120u)) return;
    // 80D10120: bl      0x8045C750
    {
            ctx->lr = 0x80D10124u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10124:
    ctx->pc = 0x80D10124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D10124: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10128:
    ctx->pc = 0x80D10128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10128u)) return;
    // 80D10128: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80D1012C:
    ctx->pc = 0x80D1012Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1012Cu)) return;
    // 80D1012C: li      r5, 2560
    ctx->gpr[5] = (u32)(s32)(2560);

label_80D10130:
    ctx->pc = 0x80D10130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10130u)) return;
    // 80D10130: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D10134:
    ctx->pc = 0x80D10134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10134u)) return;
    // 80D10134: addi    r6, r6, -29184
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29184);

label_80D10138:
    ctx->pc = 0x80D10138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10138u)) return;
    // 80D10138: li      r7, 1536
    ctx->gpr[7] = (u32)(s32)(1536);

label_80D1013C:
    ctx->pc = 0x80D1013Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1013Cu)) return;
    // 80D1013C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10140u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10140:
    ctx->pc = 0x80D10140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10140: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10144:
    ctx->pc = 0x80D10144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10144u)) return;
    // 80D10144: bl      0x8045F220
    {
            ctx->lr = 0x80D10148u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10148:
    ctx->pc = 0x80D10148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10148: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D1014C:
    ctx->pc = 0x80D1014Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1014Cu)) return;
    // 80D1014C: addi    r4, r4, 17156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17156);

label_80D10150:
    ctx->pc = 0x80D10150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10150u)) return;
    // 80D10150: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D10154:
    ctx->pc = 0x80D10154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10154u)) return;
    // 80D10154: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D10158:
    ctx->pc = 0x80D10158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10158u)) return;
    // 80D10158: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D1015C:
    ctx->pc = 0x80D1015Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1015Cu)) return;
    // 80D1015C: addi    r6, r6, 9652
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9652);

label_80D10160:
    ctx->pc = 0x80D10160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10160: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10160u)) return;
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
label_80D10164:
    ctx->pc = 0x80D10164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10164u)) return;
    // 80D10164: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D10168:
    ctx->pc = 0x80D10168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10168u)) return;
    // 80D10168: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D1016C:
    ctx->pc = 0x80D1016Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1016Cu)) return;
    // 80D1016C: bl      0x8045EBE4
    {
            ctx->lr = 0x80D10170u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D10170:
    ctx->pc = 0x80D10170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10170: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10174:
    ctx->pc = 0x80D10174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10174u)) return;
    // 80D10174: bl      0x8045F220
    {
            ctx->lr = 0x80D10178u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10178:
    ctx->pc = 0x80D10178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10178: lis     r4, -27345
    ctx->gpr[4] = ((u32)(s32)(-27345) << 16);

label_80D1017C:
    ctx->pc = 0x80D1017Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1017Cu)) return;
    // 80D1017C: addi    r4, r4, -23408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23408);

label_80D10180:
    ctx->pc = 0x80D10180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10180u)) return;
    // 80D10180: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80D10184:
    ctx->pc = 0x80D10184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10184u)) return;
    // 80D10184: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80D10188:
    ctx->pc = 0x80D10188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10188u)) return;
    // 80D10188: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D1018C:
    ctx->pc = 0x80D1018Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1018Cu)) return;
    // 80D1018C: addi    r6, r6, 9656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9656);

label_80D10190:
    ctx->pc = 0x80D10190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10190: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10190u)) return;
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
label_80D10194:
    ctx->pc = 0x80D10194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10194u)) return;
    // 80D10194: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D10198:
    ctx->pc = 0x80D10198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10198u)) return;
    // 80D10198: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D1019C:
    ctx->pc = 0x80D1019Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1019Cu)) return;
    // 80D1019C: bl      0x8045EBE4
    {
            ctx->lr = 0x80D101A0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D101A0:
    ctx->pc = 0x80D101A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D101A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D101A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D101A4:
    ctx->pc = 0x80D101A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101A4u)) return;
    // 80D101A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D101A8:
    ctx->pc = 0x80D101A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101A8u)) return;
    // 80D101A8: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D101AC:
    ctx->pc = 0x80D101ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101ACu)) return;
    // 80D101AC: addi    r5, r5, 9660
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9660);

label_80D101B0:
    ctx->pc = 0x80D101B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D101B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D101B0u)) return;
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
label_80D101B4:
    ctx->pc = 0x80D101B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101B4u)) return;
    // 80D101B4: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D101B8:
    ctx->pc = 0x80D101B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101B8u)) return;
    // 80D101B8: addi    r5, r5, 9664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9664);

label_80D101BC:
    ctx->pc = 0x80D101BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D101BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D101BCu)) return;
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
label_80D101C0:
    ctx->pc = 0x80D101C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101C0u)) return;
    // 80D101C0: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D101C4:
    ctx->pc = 0x80D101C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101C4u)) return;
    // 80D101C4: addi    r5, r5, 9668
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9668);

label_80D101C8:
    ctx->pc = 0x80D101C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D101C8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D101C8u)) return;
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
label_80D101CC:
    ctx->pc = 0x80D101CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101CCu)) return;
    // 80D101CC: bl      0x8045C750
    {
            ctx->lr = 0x80D101D0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D101D0:
    ctx->pc = 0x80D101D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D101D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D101D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D101D4:
    ctx->pc = 0x80D101D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101D4u)) return;
    // 80D101D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D101D8:
    ctx->pc = 0x80D101D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101D8u)) return;
    // 80D101D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D101DC:
    ctx->pc = 0x80D101DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101DCu)) return;
    // 80D101DC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D101E0:
    ctx->pc = 0x80D101E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101E0u)) return;
    // 80D101E0: addi    r6, r6, -32768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32768);

label_80D101E4:
    ctx->pc = 0x80D101E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101E4u)) return;
    // 80D101E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D101E8:
    ctx->pc = 0x80D101E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101E8u)) return;
    // 80D101E8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D101ECu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D101EC:
    ctx->pc = 0x80D101ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D101ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D101EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D101F0:
    ctx->pc = 0x80D101F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101F0u)) return;
    // 80D101F0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80D101F4:
    ctx->pc = 0x80D101F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101F4u)) return;
    // 80D101F4: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D101F8:
    ctx->pc = 0x80D101F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101F8u)) return;
    // 80D101F8: addi    r5, r5, 9640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9640);

label_80D101FC:
    ctx->pc = 0x80D101FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D101FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D101FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D101FCu)) return;
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
label_80D10200:
    ctx->pc = 0x80D10200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10200u)) return;
    // 80D10200: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10204:
    ctx->pc = 0x80D10204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10204u)) return;
    // 80D10204: addi    r5, r5, 9644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9644);

label_80D10208:
    ctx->pc = 0x80D10208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10208: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10208u)) return;
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
label_80D1020C:
    ctx->pc = 0x80D1020Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1020Cu)) return;
    // 80D1020C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10210:
    ctx->pc = 0x80D10210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10210u)) return;
    // 80D10210: addi    r5, r5, 9648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9648);

label_80D10214:
    ctx->pc = 0x80D10214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10214: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10214u)) return;
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
label_80D10218:
    ctx->pc = 0x80D10218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10218u)) return;
    // 80D10218: bl      0x8045C750
    {
            ctx->lr = 0x80D1021Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D1021C:
    ctx->pc = 0x80D1021Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1021Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D1021C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10220:
    ctx->pc = 0x80D10220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10220u)) return;
    // 80D10220: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80D10224:
    ctx->pc = 0x80D10224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10224u)) return;
    // 80D10224: li      r5, 2560
    ctx->gpr[5] = (u32)(s32)(2560);

label_80D10228:
    ctx->pc = 0x80D10228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10228u)) return;
    // 80D10228: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D1022C:
    ctx->pc = 0x80D1022Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1022Cu)) return;
    // 80D1022C: addi    r6, r6, -29184
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29184);

label_80D10230:
    ctx->pc = 0x80D10230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10230u)) return;
    // 80D10230: li      r7, 1536
    ctx->gpr[7] = (u32)(s32)(1536);

label_80D10234:
    ctx->pc = 0x80D10234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10234u)) return;
    // 80D10234: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10238u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10238:
    ctx->pc = 0x80D10238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10238: li      r3, 1464
    ctx->gpr[3] = (u32)(s32)(1464);

label_80D1023C:
    ctx->pc = 0x80D1023Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1023Cu)) return;
    // 80D1023C: bl      0x8045BFA0
    {
            ctx->lr = 0x80D10240u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D10240:
    ctx->pc = 0x80D10240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10240: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10244:
    ctx->pc = 0x80D10244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10244u)) return;
    // 80D10244: bl      0x8045F220
    {
            ctx->lr = 0x80D10248u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10248:
    ctx->pc = 0x80D10248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D10248: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D1024C:
    ctx->pc = 0x80D1024Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1024Cu)) return;
    // 80D1024C: addi    r4, r4, 10644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10644);

label_80D10250:
    ctx->pc = 0x80D10250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10250u)) return;
    // 80D10250: bl      0x8045C060
    {
            ctx->lr = 0x80D10254u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D10254:
    ctx->pc = 0x80D10254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D10254: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D10258:
    ctx->pc = 0x80D10258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10258u)) return;
    // 80D10258: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D1025C:
    ctx->pc = 0x80D1025Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1025Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D1025C: lwz     r0, 0(r3)
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
label_80D10260:
    ctx->pc = 0x80D10260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10260u)) return;
    // 80D10260: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D10264:
    ctx->pc = 0x80D10264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10264u)) return;
    // 80D10264: lis     r3, -27346
    ctx->gpr[3] = ((u32)(s32)(-27346) << 16);

label_80D10268:
    ctx->pc = 0x80D10268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10268u)) return;
    // 80D10268: addi    r3, r3, 10584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10584);

label_80D1026C:
    ctx->pc = 0x80D1026Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1026Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1026C: lwzx    r3, r3, r0
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
label_80D10270:
    ctx->pc = 0x80D10270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10270: lwz     r3, 0(r3)
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
label_80D10274:
    ctx->pc = 0x80D10274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10274u)) return;
    // 80D10274: bl      0x8045F6FC
    {
            ctx->lr = 0x80D10278u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D10278:
    ctx->pc = 0x80D10278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10278: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D1027C:
    ctx->pc = 0x80D1027Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1027Cu)) return;
    // 80D1027C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D10280u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D10280:
    ctx->pc = 0x80D10280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10280: bl      0x8045BFF4
    {
            ctx->lr = 0x80D10284u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D10284:
    ctx->pc = 0x80D10284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10284: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10288:
    ctx->pc = 0x80D10288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10288u)) return;
    // 80D10288: bl      0x8045F220
    {
            ctx->lr = 0x80D1028Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D1028C:
    ctx->pc = 0x80D1028Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1028Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D1028C: bl      0x8045C034
    {
            ctx->lr = 0x80D10290u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D10290:
    ctx->pc = 0x80D10290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10290: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10294:
    ctx->pc = 0x80D10294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10294u)) return;
    // 80D10294: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D10298:
    ctx->pc = 0x80D10298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10298u)) return;
    // 80D10298: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D1029C:
    ctx->pc = 0x80D1029Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1029Cu)) return;
    // 80D1029C: addi    r5, r5, 9672
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9672);

label_80D102A0:
    ctx->pc = 0x80D102A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D102A0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D102A0u)) return;
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
label_80D102A4:
    ctx->pc = 0x80D102A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102A4u)) return;
    // 80D102A4: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D102A8:
    ctx->pc = 0x80D102A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102A8u)) return;
    // 80D102A8: addi    r5, r5, 9676
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9676);

label_80D102AC:
    ctx->pc = 0x80D102ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D102AC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D102ACu)) return;
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
label_80D102B0:
    ctx->pc = 0x80D102B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102B0u)) return;
    // 80D102B0: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D102B4:
    ctx->pc = 0x80D102B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102B4u)) return;
    // 80D102B4: addi    r5, r5, 9680
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9680);

label_80D102B8:
    ctx->pc = 0x80D102B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D102B8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D102B8u)) return;
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
label_80D102BC:
    ctx->pc = 0x80D102BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102BCu)) return;
    // 80D102BC: bl      0x8045C750
    {
            ctx->lr = 0x80D102C0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D102C0:
    ctx->pc = 0x80D102C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D102C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D102C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D102C4:
    ctx->pc = 0x80D102C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102C4u)) return;
    // 80D102C4: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D102C8:
    ctx->pc = 0x80D102C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102C8u)) return;
    // 80D102C8: li      r5, 2560
    ctx->gpr[5] = (u32)(s32)(2560);

label_80D102CC:
    ctx->pc = 0x80D102CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102CCu)) return;
    // 80D102CC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D102D0:
    ctx->pc = 0x80D102D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102D0u)) return;
    // 80D102D0: addi    r6, r6, -27136
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27136);

label_80D102D4:
    ctx->pc = 0x80D102D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102D4u)) return;
    // 80D102D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D102D8:
    ctx->pc = 0x80D102D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102D8u)) return;
    // 80D102D8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D102DCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D102DC:
    ctx->pc = 0x80D102DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D102DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D102DC: li      r3, 1465
    ctx->gpr[3] = (u32)(s32)(1465);

label_80D102E0:
    ctx->pc = 0x80D102E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102E0u)) return;
    // 80D102E0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D102E4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D102E4:
    ctx->pc = 0x80D102E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D102E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D102E4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D102E8:
    ctx->pc = 0x80D102E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102E8u)) return;
    // 80D102E8: bl      0x8045F220
    {
            ctx->lr = 0x80D102ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D102EC:
    ctx->pc = 0x80D102ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D102ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D102EC: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D102F0:
    ctx->pc = 0x80D102F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102F0u)) return;
    // 80D102F0: addi    r4, r4, 10652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10652);

label_80D102F4:
    ctx->pc = 0x80D102F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102F4u)) return;
    // 80D102F4: bl      0x8045C060
    {
            ctx->lr = 0x80D102F8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D102F8:
    ctx->pc = 0x80D102F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D102F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D102F8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D102FC:
    ctx->pc = 0x80D102FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D102FCu)) return;
    // 80D102FC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D10300:
    ctx->pc = 0x80D10300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D10300: lwz     r0, 0(r3)
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
label_80D10304:
    ctx->pc = 0x80D10304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10304u)) return;
    // 80D10304: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D10308:
    ctx->pc = 0x80D10308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10308u)) return;
    // 80D10308: lis     r3, -27346
    ctx->gpr[3] = ((u32)(s32)(-27346) << 16);

label_80D1030C:
    ctx->pc = 0x80D1030Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1030Cu)) return;
    // 80D1030C: addi    r3, r3, 10584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10584);

label_80D10310:
    ctx->pc = 0x80D10310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10310: lwzx    r3, r3, r0
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
label_80D10314:
    ctx->pc = 0x80D10314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10314: lwz     r3, 4(r3)
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
label_80D10318:
    ctx->pc = 0x80D10318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10318u)) return;
    // 80D10318: bl      0x8045F6FC
    {
            ctx->lr = 0x80D1031Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D1031C:
    ctx->pc = 0x80D1031Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1031Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1031C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D10320:
    ctx->pc = 0x80D10320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10320u)) return;
    // 80D10320: bl      0x8045F7C8
    {
            ctx->lr = 0x80D10324u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D10324:
    ctx->pc = 0x80D10324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10324: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10328:
    ctx->pc = 0x80D10328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10328u)) return;
    // 80D10328: bl      0x8045F220
    {
            ctx->lr = 0x80D1032Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D1032C:
    ctx->pc = 0x80D1032Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1032Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D1032C: lis     r4, -27345
    ctx->gpr[4] = ((u32)(s32)(-27345) << 16);

label_80D10330:
    ctx->pc = 0x80D10330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10330u)) return;
    // 80D10330: addi    r4, r4, 9268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9268);

label_80D10334:
    ctx->pc = 0x80D10334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10334u)) return;
    // 80D10334: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80D10338:
    ctx->pc = 0x80D10338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10338u)) return;
    // 80D10338: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80D1033C:
    ctx->pc = 0x80D1033Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1033Cu)) return;
    // 80D1033C: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D10340:
    ctx->pc = 0x80D10340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10340u)) return;
    // 80D10340: addi    r6, r6, 9684
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9684);

label_80D10344:
    ctx->pc = 0x80D10344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10344: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10344u)) return;
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
label_80D10348:
    ctx->pc = 0x80D10348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10348u)) return;
    // 80D10348: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D1034C:
    ctx->pc = 0x80D1034Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1034Cu)) return;
    // 80D1034C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80D10350:
    ctx->pc = 0x80D10350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10350u)) return;
    // 80D10350: bl      0x8045EBE4
    {
            ctx->lr = 0x80D10354u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D10354:
    ctx->pc = 0x80D10354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10354: bl      0x8045BFF4
    {
            ctx->lr = 0x80D10358u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D10358:
    ctx->pc = 0x80D10358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1035C:
    ctx->pc = 0x80D1035Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1035Cu)) return;
    // 80D1035C: bl      0x8045F220
    {
            ctx->lr = 0x80D10360u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10360:
    ctx->pc = 0x80D10360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10360: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10364:
    ctx->pc = 0x80D10364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10364u)) return;
    // 80D10364: addi    r4, r4, 9688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9688);

label_80D10368:
    ctx->pc = 0x80D10368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10368: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10368u)) return;
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
label_80D1036C:
    ctx->pc = 0x80D1036Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1036Cu)) return;
    // 80D1036C: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10370:
    ctx->pc = 0x80D10370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10370u)) return;
    // 80D10370: addi    r4, r4, 9692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9692);

label_80D10374:
    ctx->pc = 0x80D10374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10374: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10374u)) return;
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
label_80D10378:
    ctx->pc = 0x80D10378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10378u)) return;
    // 80D10378: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D1037C:
    ctx->pc = 0x80D1037Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1037Cu)) return;
    // 80D1037C: addi    r4, r4, 9696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9696);

label_80D10380:
    ctx->pc = 0x80D10380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10380: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10380u)) return;
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
label_80D10384:
    ctx->pc = 0x80D10384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10384u)) return;
    // 80D10384: bl      0x8045EF2C
    {
            ctx->lr = 0x80D10388u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D10388:
    ctx->pc = 0x80D10388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10388: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D1038C:
    ctx->pc = 0x80D1038Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1038Cu)) return;
    // 80D1038C: bl      0x8045F220
    {
            ctx->lr = 0x80D10390u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10390:
    ctx->pc = 0x80D10390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10390: bl      0x8045EB8C
    {
            ctx->lr = 0x80D10394u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D10394:
    ctx->pc = 0x80D10394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10394: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10398:
    ctx->pc = 0x80D10398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10398u)) return;
    // 80D10398: bl      0x8045F220
    {
            ctx->lr = 0x80D1039Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D1039C:
    ctx->pc = 0x80D1039Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1039Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D1039C: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D103A0:
    ctx->pc = 0x80D103A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103A0u)) return;
    // 80D103A0: addi    r4, r4, -22656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22656);

label_80D103A4:
    ctx->pc = 0x80D103A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103A4u)) return;
    // 80D103A4: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80D103A8:
    ctx->pc = 0x80D103A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103A8u)) return;
    // 80D103A8: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80D103AC:
    ctx->pc = 0x80D103ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103ACu)) return;
    // 80D103AC: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D103B0:
    ctx->pc = 0x80D103B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103B0u)) return;
    // 80D103B0: addi    r6, r6, 9652
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9652);

label_80D103B4:
    ctx->pc = 0x80D103B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D103B4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D103B4u)) return;
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
label_80D103B8:
    ctx->pc = 0x80D103B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103B8u)) return;
    // 80D103B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D103BC:
    ctx->pc = 0x80D103BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103BCu)) return;
    // 80D103BC: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80D103C0:
    ctx->pc = 0x80D103C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103C0u)) return;
    // 80D103C0: bl      0x8045EBE4
    {
            ctx->lr = 0x80D103C4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D103C4:
    ctx->pc = 0x80D103C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D103C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D103C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D103C8:
    ctx->pc = 0x80D103C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103C8u)) return;
    // 80D103C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D103CC:
    ctx->pc = 0x80D103CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103CCu)) return;
    // 80D103CC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D103D0:
    ctx->pc = 0x80D103D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103D0u)) return;
    // 80D103D0: addi    r5, r6, -3584
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-3584);

label_80D103D4:
    ctx->pc = 0x80D103D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103D4u)) return;
    // 80D103D4: addi    r6, r6, -4096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4096);

label_80D103D8:
    ctx->pc = 0x80D103D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103D8u)) return;
    // 80D103D8: li      r7, 2048
    ctx->gpr[7] = (u32)(s32)(2048);

label_80D103DC:
    ctx->pc = 0x80D103DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103DCu)) return;
    // 80D103DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D103E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D103E0:
    ctx->pc = 0x80D103E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D103E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D103E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D103E4:
    ctx->pc = 0x80D103E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103E4u)) return;
    // 80D103E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D103E8:
    ctx->pc = 0x80D103E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103E8u)) return;
    // 80D103E8: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D103EC:
    ctx->pc = 0x80D103ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103ECu)) return;
    // 80D103EC: addi    r5, r5, 9700
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9700);

label_80D103F0:
    ctx->pc = 0x80D103F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D103F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D103F0u)) return;
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
label_80D103F4:
    ctx->pc = 0x80D103F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103F4u)) return;
    // 80D103F4: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D103F8:
    ctx->pc = 0x80D103F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103F8u)) return;
    // 80D103F8: addi    r5, r5, 9704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9704);

label_80D103FC:
    ctx->pc = 0x80D103FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D103FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D103FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D103FCu)) return;
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
label_80D10400:
    ctx->pc = 0x80D10400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10400u)) return;
    // 80D10400: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10404:
    ctx->pc = 0x80D10404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10404u)) return;
    // 80D10404: addi    r5, r5, 9708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9708);

label_80D10408:
    ctx->pc = 0x80D10408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10408: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10408u)) return;
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
label_80D1040C:
    ctx->pc = 0x80D1040Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1040Cu)) return;
    // 80D1040C: bl      0x8045C750
    {
            ctx->lr = 0x80D10410u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10410:
    ctx->pc = 0x80D10410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D10410: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10414:
    ctx->pc = 0x80D10414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10414u)) return;
    // 80D10414: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D10418:
    ctx->pc = 0x80D10418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10418u)) return;
    // 80D10418: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D1041C:
    ctx->pc = 0x80D1041Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1041Cu)) return;
    // 80D1041C: addi    r5, r6, -3584
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-3584);

label_80D10420:
    ctx->pc = 0x80D10420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10420u)) return;
    // 80D10420: addi    r6, r6, -4096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4096);

label_80D10424:
    ctx->pc = 0x80D10424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10424u)) return;
    // 80D10424: li      r7, 2048
    ctx->gpr[7] = (u32)(s32)(2048);

label_80D10428:
    ctx->pc = 0x80D10428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10428u)) return;
    // 80D10428: bl      0x8045C7B4
    {
            ctx->lr = 0x80D1042Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D1042C:
    ctx->pc = 0x80D1042Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1042Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D1042C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10430:
    ctx->pc = 0x80D10430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10430u)) return;
    // 80D10430: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D10434:
    ctx->pc = 0x80D10434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10434u)) return;
    // 80D10434: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10438:
    ctx->pc = 0x80D10438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10438u)) return;
    // 80D10438: addi    r5, r5, 9712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9712);

label_80D1043C:
    ctx->pc = 0x80D1043Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1043Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1043C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D1043Cu)) return;
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
label_80D10440:
    ctx->pc = 0x80D10440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10440u)) return;
    // 80D10440: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10444:
    ctx->pc = 0x80D10444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10444u)) return;
    // 80D10444: addi    r5, r5, 9716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9716);

label_80D10448:
    ctx->pc = 0x80D10448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10448: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10448u)) return;
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
label_80D1044C:
    ctx->pc = 0x80D1044Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1044Cu)) return;
    // 80D1044C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10450:
    ctx->pc = 0x80D10450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10450u)) return;
    // 80D10450: addi    r5, r5, 9720
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9720);

label_80D10454:
    ctx->pc = 0x80D10454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10454: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10454u)) return;
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
label_80D10458:
    ctx->pc = 0x80D10458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10458u)) return;
    // 80D10458: bl      0x8045C750
    {
            ctx->lr = 0x80D1045Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D1045C:
    ctx->pc = 0x80D1045Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1045Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1045C: li      r3, 1466
    ctx->gpr[3] = (u32)(s32)(1466);

label_80D10460:
    ctx->pc = 0x80D10460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10460u)) return;
    // 80D10460: bl      0x8045BFA0
    {
            ctx->lr = 0x80D10464u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D10464:
    ctx->pc = 0x80D10464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10464: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10468:
    ctx->pc = 0x80D10468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10468u)) return;
    // 80D10468: bl      0x8045F220
    {
            ctx->lr = 0x80D1046Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D1046C:
    ctx->pc = 0x80D1046Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1046Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D1046C: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10470:
    ctx->pc = 0x80D10470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10470u)) return;
    // 80D10470: addi    r4, r4, 10660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10660);

label_80D10474:
    ctx->pc = 0x80D10474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10474u)) return;
    // 80D10474: bl      0x8045C060
    {
            ctx->lr = 0x80D10478u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D10478:
    ctx->pc = 0x80D10478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D10478: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D1047C:
    ctx->pc = 0x80D1047Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1047Cu)) return;
    // 80D1047C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D10480:
    ctx->pc = 0x80D10480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D10480: lwz     r0, 0(r3)
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
label_80D10484:
    ctx->pc = 0x80D10484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10484u)) return;
    // 80D10484: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D10488:
    ctx->pc = 0x80D10488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10488u)) return;
    // 80D10488: lis     r3, -27346
    ctx->gpr[3] = ((u32)(s32)(-27346) << 16);

label_80D1048C:
    ctx->pc = 0x80D1048Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1048Cu)) return;
    // 80D1048C: addi    r3, r3, 10584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10584);

label_80D10490:
    ctx->pc = 0x80D10490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10490: lwzx    r3, r3, r0
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
label_80D10494:
    ctx->pc = 0x80D10494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10494: lwz     r3, 8(r3)
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
label_80D10498:
    ctx->pc = 0x80D10498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10498u)) return;
    // 80D10498: bl      0x8045F6FC
    {
            ctx->lr = 0x80D1049Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D1049C:
    ctx->pc = 0x80D1049Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1049Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1049C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D104A0:
    ctx->pc = 0x80D104A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104A0u)) return;
    // 80D104A0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D104A4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D104A4:
    ctx->pc = 0x80D104A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D104A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D104A4: bl      0x8045BFF4
    {
            ctx->lr = 0x80D104A8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D104A8:
    ctx->pc = 0x80D104A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D104A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D104A8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D104AC:
    ctx->pc = 0x80D104ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104ACu)) return;
    // 80D104AC: bl      0x8045F220
    {
            ctx->lr = 0x80D104B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D104B0:
    ctx->pc = 0x80D104B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D104B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D104B0: bl      0x8045C034
    {
            ctx->lr = 0x80D104B4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D104B4:
    ctx->pc = 0x80D104B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D104B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D104B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D104B8:
    ctx->pc = 0x80D104B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104B8u)) return;
    // 80D104B8: bl      0x8045F220
    {
            ctx->lr = 0x80D104BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D104BC:
    ctx->pc = 0x80D104BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D104BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D104BC: bl      0x8045EB40
    {
            ctx->lr = 0x80D104C0u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80D104C0:
    ctx->pc = 0x80D104C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D104C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D104C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D104C4:
    ctx->pc = 0x80D104C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104C4u)) return;
    // 80D104C4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D104C8:
    ctx->pc = 0x80D104C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104C8u)) return;
    // 80D104C8: li      r5, 7282
    ctx->gpr[5] = (u32)(s32)(7282);

label_80D104CC:
    ctx->pc = 0x80D104CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104CCu)) return;
    // 80D104CC: bl      0x8045C0F8
    {
            ctx->lr = 0x80D104D0u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80D104D0:
    ctx->pc = 0x80D104D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D104D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D104D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D104D4:
    ctx->pc = 0x80D104D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104D4u)) return;
    // 80D104D4: bl      0x8045F220
    {
            ctx->lr = 0x80D104D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D104D8:
    ctx->pc = 0x80D104D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D104D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D104D8: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D104DC:
    ctx->pc = 0x80D104DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104DCu)) return;
    // 80D104DC: addi    r4, r4, 17156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17156);

label_80D104E0:
    ctx->pc = 0x80D104E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104E0u)) return;
    // 80D104E0: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D104E4:
    ctx->pc = 0x80D104E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104E4u)) return;
    // 80D104E4: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D104E8:
    ctx->pc = 0x80D104E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104E8u)) return;
    // 80D104E8: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D104EC:
    ctx->pc = 0x80D104ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104ECu)) return;
    // 80D104EC: addi    r6, r6, 9724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9724);

label_80D104F0:
    ctx->pc = 0x80D104F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D104F0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D104F0u)) return;
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
label_80D104F4:
    ctx->pc = 0x80D104F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104F4u)) return;
    // 80D104F4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D104F8:
    ctx->pc = 0x80D104F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104F8u)) return;
    // 80D104F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D104FC:
    ctx->pc = 0x80D104FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D104FCu)) return;
    // 80D104FC: bl      0x8045EBE4
    {
            ctx->lr = 0x80D10500u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D10500:
    ctx->pc = 0x80D10500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D10500: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10504:
    ctx->pc = 0x80D10504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10504u)) return;
    // 80D10504: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10508:
    ctx->pc = 0x80D10508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10508u)) return;
    // 80D10508: li      r5, 4957
    ctx->gpr[5] = (u32)(s32)(4957);

label_80D1050C:
    ctx->pc = 0x80D1050Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1050Cu)) return;
    // 80D1050C: li      r6, 24854
    ctx->gpr[6] = (u32)(s32)(24854);

label_80D10510:
    ctx->pc = 0x80D10510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10510u)) return;
    // 80D10510: li      r7, 173
    ctx->gpr[7] = (u32)(s32)(173);

label_80D10514:
    ctx->pc = 0x80D10514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10514u)) return;
    // 80D10514: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10518u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10518:
    ctx->pc = 0x80D10518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10518: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1051C:
    ctx->pc = 0x80D1051Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1051Cu)) return;
    // 80D1051C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10520:
    ctx->pc = 0x80D10520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10520u)) return;
    // 80D10520: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10524:
    ctx->pc = 0x80D10524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10524u)) return;
    // 80D10524: addi    r5, r5, 9728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9728);

label_80D10528:
    ctx->pc = 0x80D10528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10528: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10528u)) return;
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
label_80D1052C:
    ctx->pc = 0x80D1052Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1052Cu)) return;
    // 80D1052C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10530:
    ctx->pc = 0x80D10530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10530u)) return;
    // 80D10530: addi    r5, r5, 9732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9732);

label_80D10534:
    ctx->pc = 0x80D10534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10534: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10534u)) return;
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
label_80D10538:
    ctx->pc = 0x80D10538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10538u)) return;
    // 80D10538: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D1053C:
    ctx->pc = 0x80D1053Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1053Cu)) return;
    // 80D1053C: addi    r5, r5, 9736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9736);

label_80D10540:
    ctx->pc = 0x80D10540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10540: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10540u)) return;
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
label_80D10544:
    ctx->pc = 0x80D10544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10544u)) return;
    // 80D10544: bl      0x8045C750
    {
            ctx->lr = 0x80D10548u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10548:
    ctx->pc = 0x80D10548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D10548: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1054C:
    ctx->pc = 0x80D1054Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1054Cu)) return;
    // 80D1054C: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D10550:
    ctx->pc = 0x80D10550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10550u)) return;
    // 80D10550: li      r5, 5213
    ctx->gpr[5] = (u32)(s32)(5213);

label_80D10554:
    ctx->pc = 0x80D10554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10554u)) return;
    // 80D10554: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D10558:
    ctx->pc = 0x80D10558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10558u)) return;
    // 80D10558: addi    r6, r6, -31722
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31722);

label_80D1055C:
    ctx->pc = 0x80D1055Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1055Cu)) return;
    // 80D1055C: li      r7, 173
    ctx->gpr[7] = (u32)(s32)(173);

label_80D10560:
    ctx->pc = 0x80D10560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10560u)) return;
    // 80D10560: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10564u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10564:
    ctx->pc = 0x80D10564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10564: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10568:
    ctx->pc = 0x80D10568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10568u)) return;
    // 80D10568: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D1056C:
    ctx->pc = 0x80D1056Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1056Cu)) return;
    // 80D1056C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10570:
    ctx->pc = 0x80D10570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10570u)) return;
    // 80D10570: addi    r5, r5, 9740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9740);

label_80D10574:
    ctx->pc = 0x80D10574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10574: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10574u)) return;
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
label_80D10578:
    ctx->pc = 0x80D10578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10578u)) return;
    // 80D10578: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D1057C:
    ctx->pc = 0x80D1057Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1057Cu)) return;
    // 80D1057C: addi    r5, r5, 9744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9744);

label_80D10580:
    ctx->pc = 0x80D10580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10580: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10580u)) return;
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
label_80D10584:
    ctx->pc = 0x80D10584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10584u)) return;
    // 80D10584: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10588:
    ctx->pc = 0x80D10588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10588u)) return;
    // 80D10588: addi    r5, r5, 9748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9748);

label_80D1058C:
    ctx->pc = 0x80D1058Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1058Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D1058C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D1058Cu)) return;
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
label_80D10590:
    ctx->pc = 0x80D10590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10590u)) return;
    // 80D10590: bl      0x8045C750
    {
            ctx->lr = 0x80D10594u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10594:
    ctx->pc = 0x80D10594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10594: li      r3, 1467
    ctx->gpr[3] = (u32)(s32)(1467);

label_80D10598:
    ctx->pc = 0x80D10598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10598u)) return;
    // 80D10598: bl      0x8045BFA0
    {
            ctx->lr = 0x80D1059Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D1059C:
    ctx->pc = 0x80D1059Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1059Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1059C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D105A0:
    ctx->pc = 0x80D105A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105A0u)) return;
    // 80D105A0: bl      0x8045F220
    {
            ctx->lr = 0x80D105A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D105A4:
    ctx->pc = 0x80D105A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D105A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D105A4: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D105A8:
    ctx->pc = 0x80D105A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105A8u)) return;
    // 80D105A8: addi    r4, r4, 10664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10664);

label_80D105AC:
    ctx->pc = 0x80D105ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105ACu)) return;
    // 80D105AC: bl      0x8045C060
    {
            ctx->lr = 0x80D105B0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D105B0:
    ctx->pc = 0x80D105B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D105B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D105B0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D105B4:
    ctx->pc = 0x80D105B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105B4u)) return;
    // 80D105B4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D105B8:
    ctx->pc = 0x80D105B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D105B8: lwz     r0, 0(r3)
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
label_80D105BC:
    ctx->pc = 0x80D105BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105BCu)) return;
    // 80D105BC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D105C0:
    ctx->pc = 0x80D105C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105C0u)) return;
    // 80D105C0: lis     r3, -27346
    ctx->gpr[3] = ((u32)(s32)(-27346) << 16);

label_80D105C4:
    ctx->pc = 0x80D105C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105C4u)) return;
    // 80D105C4: addi    r3, r3, 10584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10584);

label_80D105C8:
    ctx->pc = 0x80D105C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D105C8: lwzx    r3, r3, r0
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
label_80D105CC:
    ctx->pc = 0x80D105CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D105CC: lwz     r3, 12(r3)
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
label_80D105D0:
    ctx->pc = 0x80D105D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105D0u)) return;
    // 80D105D0: bl      0x8045F6FC
    {
            ctx->lr = 0x80D105D4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D105D4:
    ctx->pc = 0x80D105D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D105D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D105D4: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80D105D8:
    ctx->pc = 0x80D105D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105D8u)) return;
    // 80D105D8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D105DCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D105DC:
    ctx->pc = 0x80D105DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D105DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D105DC: bl      0x8045F32C
    {
            ctx->lr = 0x80D105E0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D105E0:
    ctx->pc = 0x80D105E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D105E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D105E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D105E4:
    ctx->pc = 0x80D105E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105E4u)) return;
    // 80D105E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D105E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D105E8:
    ctx->pc = 0x80D105E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D105E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D105E8: li      r3, 1337
    ctx->gpr[3] = (u32)(s32)(1337);

label_80D105EC:
    ctx->pc = 0x80D105ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105ECu)) return;
    // 80D105EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D105F0:
    ctx->pc = 0x80D105F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105F0u)) return;
    // 80D105F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D105F4:
    ctx->pc = 0x80D105F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105F4u)) return;
    // 80D105F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D105F8:
    ctx->pc = 0x80D105F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D105F8u)) return;
    // 80D105F8: bl      0x80D11BFC
    {
            ctx->lr = 0x80D105FCu;
            goto label_80D11BFC;
    }

label_80D105FC:
    ctx->pc = 0x80D105FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D105FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D105FC: li      r3, 1468
    ctx->gpr[3] = (u32)(s32)(1468);

label_80D10600:
    ctx->pc = 0x80D10600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10600u)) return;
    // 80D10600: bl      0x8045BFA0
    {
            ctx->lr = 0x80D10604u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D10604:
    ctx->pc = 0x80D10604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10604: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D10608:
    ctx->pc = 0x80D10608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10608u)) return;
    // 80D10608: bl      0x8045F7C8
    {
            ctx->lr = 0x80D1060Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D1060C:
    ctx->pc = 0x80D1060Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1060Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1060C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10610:
    ctx->pc = 0x80D10610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10610u)) return;
    // 80D10610: bl      0x8045F220
    {
            ctx->lr = 0x80D10614u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10614:
    ctx->pc = 0x80D10614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10614: bl      0x8045EB8C
    {
            ctx->lr = 0x80D10618u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D10618:
    ctx->pc = 0x80D10618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10618: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1061C:
    ctx->pc = 0x80D1061Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1061Cu)) return;
    // 80D1061C: bl      0x8045F220
    {
            ctx->lr = 0x80D10620u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10620:
    ctx->pc = 0x80D10620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10620: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10624:
    ctx->pc = 0x80D10624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10624u)) return;
    // 80D10624: addi    r4, r4, 23192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23192);

label_80D10628:
    ctx->pc = 0x80D10628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10628u)) return;
    // 80D10628: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D1062C:
    ctx->pc = 0x80D1062Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1062Cu)) return;
    // 80D1062C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D10630:
    ctx->pc = 0x80D10630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10630u)) return;
    // 80D10630: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D10634:
    ctx->pc = 0x80D10634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10634u)) return;
    // 80D10634: addi    r6, r6, 9652
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9652);

label_80D10638:
    ctx->pc = 0x80D10638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10638: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10638u)) return;
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
label_80D1063C:
    ctx->pc = 0x80D1063Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1063Cu)) return;
    // 80D1063C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D10640:
    ctx->pc = 0x80D10640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10640u)) return;
    // 80D10640: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80D10644:
    ctx->pc = 0x80D10644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10644u)) return;
    // 80D10644: bl      0x8045EBE4
    {
            ctx->lr = 0x80D10648u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D10648:
    ctx->pc = 0x80D10648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D10648: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D1064C:
    ctx->pc = 0x80D1064Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1064Cu)) return;
    // 80D1064C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80D10650:
    ctx->pc = 0x80D10650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10650u)) return;
    // 80D10650: li      r5, 605
    ctx->gpr[5] = (u32)(s32)(605);

label_80D10654:
    ctx->pc = 0x80D10654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10654u)) return;
    // 80D10654: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D10658:
    ctx->pc = 0x80D10658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10658u)) return;
    // 80D10658: addi    r6, r6, -31632
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31632);

label_80D1065C:
    ctx->pc = 0x80D1065Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1065Cu)) return;
    // 80D1065C: li      r7, 1093
    ctx->gpr[7] = (u32)(s32)(1093);

label_80D10660:
    ctx->pc = 0x80D10660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10660u)) return;
    // 80D10660: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10664u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10664:
    ctx->pc = 0x80D10664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10664: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D10668:
    ctx->pc = 0x80D10668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10668u)) return;
    // 80D10668: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80D1066C:
    ctx->pc = 0x80D1066Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1066Cu)) return;
    // 80D1066C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10670:
    ctx->pc = 0x80D10670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10670u)) return;
    // 80D10670: addi    r5, r5, 9752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9752);

label_80D10674:
    ctx->pc = 0x80D10674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10674: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10674u)) return;
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
label_80D10678:
    ctx->pc = 0x80D10678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10678u)) return;
    // 80D10678: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D1067C:
    ctx->pc = 0x80D1067Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1067Cu)) return;
    // 80D1067C: addi    r5, r5, 9756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9756);

label_80D10680:
    ctx->pc = 0x80D10680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10680: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10680u)) return;
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
label_80D10684:
    ctx->pc = 0x80D10684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10684u)) return;
    // 80D10684: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10688:
    ctx->pc = 0x80D10688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10688u)) return;
    // 80D10688: addi    r5, r5, 9760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9760);

label_80D1068C:
    ctx->pc = 0x80D1068Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1068Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D1068C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D1068Cu)) return;
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
label_80D10690:
    ctx->pc = 0x80D10690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10690u)) return;
    // 80D10690: bl      0x8045C750
    {
            ctx->lr = 0x80D10694u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10694:
    ctx->pc = 0x80D10694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D10694: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D10698:
    ctx->pc = 0x80D10698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10698u)) return;
    // 80D10698: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D1069C:
    ctx->pc = 0x80D1069Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1069Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D1069C: lwz     r0, 0(r3)
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
label_80D106A0:
    ctx->pc = 0x80D106A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106A0u)) return;
    // 80D106A0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D106A4:
    ctx->pc = 0x80D106A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106A4u)) return;
    // 80D106A4: lis     r3, -27346
    ctx->gpr[3] = ((u32)(s32)(-27346) << 16);

label_80D106A8:
    ctx->pc = 0x80D106A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106A8u)) return;
    // 80D106A8: addi    r3, r3, 10584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10584);

label_80D106AC:
    ctx->pc = 0x80D106ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D106AC: lwzx    r3, r3, r0
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
label_80D106B0:
    ctx->pc = 0x80D106B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D106B0: lwz     r3, 16(r3)
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
label_80D106B4:
    ctx->pc = 0x80D106B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106B4u)) return;
    // 80D106B4: bl      0x8045F6FC
    {
            ctx->lr = 0x80D106B8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D106B8:
    ctx->pc = 0x80D106B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D106B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D106B8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D106BC:
    ctx->pc = 0x80D106BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106BCu)) return;
    // 80D106BC: bl      0x8045F220
    {
            ctx->lr = 0x80D106C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D106C0:
    ctx->pc = 0x80D106C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D106C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D106C0: bl      0x8045EB8C
    {
            ctx->lr = 0x80D106C4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D106C4:
    ctx->pc = 0x80D106C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D106C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D106C4: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80D106C8:
    ctx->pc = 0x80D106C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106C8u)) return;
    // 80D106C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D106CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D106CC:
    ctx->pc = 0x80D106CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D106CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D106CC: bl      0x8045F32C
    {
            ctx->lr = 0x80D106D0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D106D0:
    ctx->pc = 0x80D106D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D106D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D106D0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D106D4:
    ctx->pc = 0x80D106D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106D4u)) return;
    // 80D106D4: bl      0x8045F220
    {
            ctx->lr = 0x80D106D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D106D8:
    ctx->pc = 0x80D106D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D106D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D106D8: lis     r4, -27344
    ctx->gpr[4] = ((u32)(s32)(-27344) << 16);

label_80D106DC:
    ctx->pc = 0x80D106DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106DCu)) return;
    // 80D106DC: addi    r4, r4, -19544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19544);

label_80D106E0:
    ctx->pc = 0x80D106E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106E0u)) return;
    // 80D106E0: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80D106E4:
    ctx->pc = 0x80D106E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106E4u)) return;
    // 80D106E4: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80D106E8:
    ctx->pc = 0x80D106E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106E8u)) return;
    // 80D106E8: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D106EC:
    ctx->pc = 0x80D106ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106ECu)) return;
    // 80D106EC: addi    r6, r6, 9764
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9764);

label_80D106F0:
    ctx->pc = 0x80D106F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D106F0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D106F0u)) return;
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
label_80D106F4:
    ctx->pc = 0x80D106F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106F4u)) return;
    // 80D106F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D106F8:
    ctx->pc = 0x80D106F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106F8u)) return;
    // 80D106F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D106FC:
    ctx->pc = 0x80D106FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D106FCu)) return;
    // 80D106FC: bl      0x8045EBE4
    {
            ctx->lr = 0x80D10700u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D10700:
    ctx->pc = 0x80D10700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D10700: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10704:
    ctx->pc = 0x80D10704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10704u)) return;
    // 80D10704: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D10708:
    ctx->pc = 0x80D10708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10708u)) return;
    // 80D10708: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80D1070C:
    ctx->pc = 0x80D1070Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1070Cu)) return;
    // 80D1070C: bl      0x8045C0F8
    {
            ctx->lr = 0x80D10710u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80D10710:
    ctx->pc = 0x80D10710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10710: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D10714:
    ctx->pc = 0x80D10714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10714u)) return;
    // 80D10714: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10718:
    ctx->pc = 0x80D10718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10718u)) return;
    // 80D10718: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D1071C:
    ctx->pc = 0x80D1071Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1071Cu)) return;
    // 80D1071C: addi    r5, r5, 9768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9768);

label_80D10720:
    ctx->pc = 0x80D10720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10720: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10720u)) return;
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
label_80D10724:
    ctx->pc = 0x80D10724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10724u)) return;
    // 80D10724: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10728:
    ctx->pc = 0x80D10728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10728u)) return;
    // 80D10728: addi    r5, r5, 9772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9772);

label_80D1072C:
    ctx->pc = 0x80D1072Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1072Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D1072C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D1072Cu)) return;
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
label_80D10730:
    ctx->pc = 0x80D10730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10730u)) return;
    // 80D10730: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10734:
    ctx->pc = 0x80D10734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10734u)) return;
    // 80D10734: addi    r5, r5, 9776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9776);

label_80D10738:
    ctx->pc = 0x80D10738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10738: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10738u)) return;
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
label_80D1073C:
    ctx->pc = 0x80D1073Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1073Cu)) return;
    // 80D1073C: bl      0x8045C750
    {
            ctx->lr = 0x80D10740u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10740:
    ctx->pc = 0x80D10740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D10740: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D10744:
    ctx->pc = 0x80D10744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10744u)) return;
    // 80D10744: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10748:
    ctx->pc = 0x80D10748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10748u)) return;
    // 80D10748: li      r5, 5632
    ctx->gpr[5] = (u32)(s32)(5632);

label_80D1074C:
    ctx->pc = 0x80D1074Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1074Cu)) return;
    // 80D1074C: li      r6, 27136
    ctx->gpr[6] = (u32)(s32)(27136);

label_80D10750:
    ctx->pc = 0x80D10750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10750u)) return;
    // 80D10750: li      r7, 512
    ctx->gpr[7] = (u32)(s32)(512);

label_80D10754:
    ctx->pc = 0x80D10754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10754u)) return;
    // 80D10754: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10758u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10758:
    ctx->pc = 0x80D10758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10758: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1075C:
    ctx->pc = 0x80D1075Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1075Cu)) return;
    // 80D1075C: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80D10760:
    ctx->pc = 0x80D10760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10760u)) return;
    // 80D10760: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10764:
    ctx->pc = 0x80D10764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10764u)) return;
    // 80D10764: addi    r5, r5, 9780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9780);

label_80D10768:
    ctx->pc = 0x80D10768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10768: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10768u)) return;
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
label_80D1076C:
    ctx->pc = 0x80D1076Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1076Cu)) return;
    // 80D1076C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10770:
    ctx->pc = 0x80D10770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10770u)) return;
    // 80D10770: addi    r5, r5, 9784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9784);

label_80D10774:
    ctx->pc = 0x80D10774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10774: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10774u)) return;
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
label_80D10778:
    ctx->pc = 0x80D10778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10778u)) return;
    // 80D10778: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D1077C:
    ctx->pc = 0x80D1077Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1077Cu)) return;
    // 80D1077C: addi    r5, r5, 9788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9788);

label_80D10780:
    ctx->pc = 0x80D10780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10780: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10780u)) return;
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
label_80D10784:
    ctx->pc = 0x80D10784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10784u)) return;
    // 80D10784: bl      0x8045C750
    {
            ctx->lr = 0x80D10788u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10788:
    ctx->pc = 0x80D10788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D10788: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1078C:
    ctx->pc = 0x80D1078Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1078Cu)) return;
    // 80D1078C: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80D10790:
    ctx->pc = 0x80D10790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10790u)) return;
    // 80D10790: li      r5, 7680
    ctx->gpr[5] = (u32)(s32)(7680);

label_80D10794:
    ctx->pc = 0x80D10794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10794u)) return;
    // 80D10794: li      r6, 19712
    ctx->gpr[6] = (u32)(s32)(19712);

label_80D10798:
    ctx->pc = 0x80D10798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10798u)) return;
    // 80D10798: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D1079C:
    ctx->pc = 0x80D1079Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1079Cu)) return;
    // 80D1079C: addi    r7, r7, -512
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-512);

label_80D107A0:
    ctx->pc = 0x80D107A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107A0u)) return;
    // 80D107A0: bl      0x8045C7B4
    {
            ctx->lr = 0x80D107A4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D107A4:
    ctx->pc = 0x80D107A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D107A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D107A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D107A8:
    ctx->pc = 0x80D107A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107A8u)) return;
    // 80D107A8: bl      0x8045F220
    {
            ctx->lr = 0x80D107ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D107AC:
    ctx->pc = 0x80D107ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D107ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D107AC: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D107B0:
    ctx->pc = 0x80D107B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107B0u)) return;
    // 80D107B0: addi    r4, r4, 9792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9792);

label_80D107B4:
    ctx->pc = 0x80D107B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D107B4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D107B4u)) return;
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
label_80D107B8:
    ctx->pc = 0x80D107B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107B8u)) return;
    // 80D107B8: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D107BC:
    ctx->pc = 0x80D107BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107BCu)) return;
    // 80D107BC: addi    r4, r4, 9620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9620);

label_80D107C0:
    ctx->pc = 0x80D107C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D107C0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D107C0u)) return;
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
label_80D107C4:
    ctx->pc = 0x80D107C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107C4u)) return;
    // 80D107C4: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D107C8:
    ctx->pc = 0x80D107C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107C8u)) return;
    // 80D107C8: addi    r4, r4, 9796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9796);

label_80D107CC:
    ctx->pc = 0x80D107CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D107CC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D107CCu)) return;
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
label_80D107D0:
    ctx->pc = 0x80D107D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107D0u)) return;
    // 80D107D0: bl      0x8045EF2C
    {
            ctx->lr = 0x80D107D4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D107D4:
    ctx->pc = 0x80D107D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D107D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D107D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D107D8:
    ctx->pc = 0x80D107D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107D8u)) return;
    // 80D107D8: bl      0x8045F220
    {
            ctx->lr = 0x80D107DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D107DC:
    ctx->pc = 0x80D107DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D107DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D107DC: li      r4, 1696
    ctx->gpr[4] = (u32)(s32)(1696);

label_80D107E0:
    ctx->pc = 0x80D107E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107E0u)) return;
    // 80D107E0: li      r5, 26368
    ctx->gpr[5] = (u32)(s32)(26368);

label_80D107E4:
    ctx->pc = 0x80D107E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107E4u)) return;
    // 80D107E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D107E8:
    ctx->pc = 0x80D107E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107E8u)) return;
    // 80D107E8: bl      0x8045EEA8
    {
            ctx->lr = 0x80D107ECu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D107EC:
    ctx->pc = 0x80D107ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D107ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D107EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D107F0:
    ctx->pc = 0x80D107F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107F0u)) return;
    // 80D107F0: bl      0x8045F220
    {
            ctx->lr = 0x80D107F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D107F4:
    ctx->pc = 0x80D107F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D107F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D107F4: bl      0x8045EB40
    {
            ctx->lr = 0x80D107F8u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80D107F8:
    ctx->pc = 0x80D107F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D107F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D107F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D107FC:
    ctx->pc = 0x80D107FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D107FCu)) return;
    // 80D107FC: bl      0x8045F220
    {
            ctx->lr = 0x80D10800u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10800:
    ctx->pc = 0x80D10800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10800: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10804:
    ctx->pc = 0x80D10804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10804u)) return;
    // 80D10804: addi    r4, r4, 9800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9800);

label_80D10808:
    ctx->pc = 0x80D10808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10808: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10808u)) return;
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
label_80D1080C:
    ctx->pc = 0x80D1080Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1080Cu)) return;
    // 80D1080C: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10810:
    ctx->pc = 0x80D10810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10810u)) return;
    // 80D10810: addi    r4, r4, 9804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9804);

label_80D10814:
    ctx->pc = 0x80D10814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10814: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10814u)) return;
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
label_80D10818:
    ctx->pc = 0x80D10818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10818u)) return;
    // 80D10818: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D1081C:
    ctx->pc = 0x80D1081Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1081Cu)) return;
    // 80D1081C: addi    r4, r4, 9808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9808);

label_80D10820:
    ctx->pc = 0x80D10820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10820: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10820u)) return;
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
label_80D10824:
    ctx->pc = 0x80D10824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10824u)) return;
    // 80D10824: bl      0x8045EF2C
    {
            ctx->lr = 0x80D10828u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D10828:
    ctx->pc = 0x80D10828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10828: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1082C:
    ctx->pc = 0x80D1082Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1082Cu)) return;
    // 80D1082C: bl      0x8045F220
    {
            ctx->lr = 0x80D10830u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10830:
    ctx->pc = 0x80D10830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D10830: li      r4, 1264
    ctx->gpr[4] = (u32)(s32)(1264);

label_80D10834:
    ctx->pc = 0x80D10834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10834u)) return;
    // 80D10834: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D10838:
    ctx->pc = 0x80D10838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10838u)) return;
    // 80D10838: addi    r5, r5, -31800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31800);

label_80D1083C:
    ctx->pc = 0x80D1083Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1083Cu)) return;
    // 80D1083C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D10840:
    ctx->pc = 0x80D10840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10840u)) return;
    // 80D10840: bl      0x8045EEA8
    {
            ctx->lr = 0x80D10844u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D10844:
    ctx->pc = 0x80D10844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10844: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10848:
    ctx->pc = 0x80D10848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10848u)) return;
    // 80D10848: bl      0x8045F220
    {
            ctx->lr = 0x80D1084Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D1084C:
    ctx->pc = 0x80D1084Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1084Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D1084C: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10850:
    ctx->pc = 0x80D10850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10850u)) return;
    // 80D10850: addi    r4, r4, 9812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9812);

label_80D10854:
    ctx->pc = 0x80D10854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10854: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10854u)) return;
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
label_80D10858:
    ctx->pc = 0x80D10858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10858u)) return;
    // 80D10858: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D1085C:
    ctx->pc = 0x80D1085Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1085Cu)) return;
    // 80D1085C: addi    r4, r4, 9632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9632);

label_80D10860:
    ctx->pc = 0x80D10860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10860: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10860u)) return;
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
label_80D10864:
    ctx->pc = 0x80D10864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10864u)) return;
    // 80D10864: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10868:
    ctx->pc = 0x80D10868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10868u)) return;
    // 80D10868: addi    r4, r4, 9816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9816);

label_80D1086C:
    ctx->pc = 0x80D1086Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1086Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D1086C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D1086Cu)) return;
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
label_80D10870:
    ctx->pc = 0x80D10870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10870u)) return;
    // 80D10870: bl      0x8045EF2C
    {
            ctx->lr = 0x80D10874u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D10874:
    ctx->pc = 0x80D10874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10874: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10878:
    ctx->pc = 0x80D10878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10878u)) return;
    // 80D10878: bl      0x8045F220
    {
            ctx->lr = 0x80D1087Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D1087C:
    ctx->pc = 0x80D1087Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1087Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D1087C: li      r4, 1264
    ctx->gpr[4] = (u32)(s32)(1264);

label_80D10880:
    ctx->pc = 0x80D10880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10880u)) return;
    // 80D10880: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D10884:
    ctx->pc = 0x80D10884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10884u)) return;
    // 80D10884: addi    r5, r5, -31232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31232);

label_80D10888:
    ctx->pc = 0x80D10888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10888u)) return;
    // 80D10888: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D1088C:
    ctx->pc = 0x80D1088Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1088Cu)) return;
    // 80D1088C: bl      0x8045EEA8
    {
            ctx->lr = 0x80D10890u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D10890:
    ctx->pc = 0x80D10890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10890: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10894:
    ctx->pc = 0x80D10894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10894u)) return;
    // 80D10894: bl      0x8045F220
    {
            ctx->lr = 0x80D10898u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10898:
    ctx->pc = 0x80D10898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10898: bl      0x8045EB8C
    {
            ctx->lr = 0x80D1089Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D1089C:
    ctx->pc = 0x80D1089Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1089Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1089C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D108A0:
    ctx->pc = 0x80D108A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108A0u)) return;
    // 80D108A0: bl      0x8045F220
    {
            ctx->lr = 0x80D108A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D108A4:
    ctx->pc = 0x80D108A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D108A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D108A4: lis     r4, -27344
    ctx->gpr[4] = ((u32)(s32)(-27344) << 16);

label_80D108A8:
    ctx->pc = 0x80D108A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108A8u)) return;
    // 80D108A8: addi    r4, r4, 892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(892);

label_80D108AC:
    ctx->pc = 0x80D108ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108ACu)) return;
    // 80D108AC: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80D108B0:
    ctx->pc = 0x80D108B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108B0u)) return;
    // 80D108B0: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80D108B4:
    ctx->pc = 0x80D108B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108B4u)) return;
    // 80D108B4: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D108B8:
    ctx->pc = 0x80D108B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108B8u)) return;
    // 80D108B8: addi    r6, r6, 9656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9656);

label_80D108BC:
    ctx->pc = 0x80D108BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D108BC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D108BCu)) return;
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
label_80D108C0:
    ctx->pc = 0x80D108C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108C0u)) return;
    // 80D108C0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D108C4:
    ctx->pc = 0x80D108C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108C4u)) return;
    // 80D108C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D108C8:
    ctx->pc = 0x80D108C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108C8u)) return;
    // 80D108C8: bl      0x8045EBE4
    {
            ctx->lr = 0x80D108CCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D108CC:
    ctx->pc = 0x80D108CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D108CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D108CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D108D0:
    ctx->pc = 0x80D108D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108D0u)) return;
    // 80D108D0: bl      0x8045F220
    {
            ctx->lr = 0x80D108D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D108D4:
    ctx->pc = 0x80D108D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D108D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D108D4: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D108D8:
    ctx->pc = 0x80D108D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108D8u)) return;
    // 80D108D8: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D108DC:
    ctx->pc = 0x80D108DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108DCu)) return;
    // 80D108DC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D108E0:
    ctx->pc = 0x80D108E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108E0u)) return;
    // 80D108E0: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D108E4:
    ctx->pc = 0x80D108E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108E4u)) return;
    // 80D108E4: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D108E8:
    ctx->pc = 0x80D108E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108E8u)) return;
    // 80D108E8: addi    r6, r6, 9656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9656);

label_80D108EC:
    ctx->pc = 0x80D108ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D108EC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D108ECu)) return;
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
label_80D108F0:
    ctx->pc = 0x80D108F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108F0u)) return;
    // 80D108F0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D108F4:
    ctx->pc = 0x80D108F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108F4u)) return;
    // 80D108F4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D108F8:
    ctx->pc = 0x80D108F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D108F8u)) return;
    // 80D108F8: bl      0x8045EBE4
    {
            ctx->lr = 0x80D108FCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D108FC:
    ctx->pc = 0x80D108FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D108FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D108FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10900:
    ctx->pc = 0x80D10900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10900u)) return;
    // 80D10900: bl      0x8045F220
    {
            ctx->lr = 0x80D10904u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10904:
    ctx->pc = 0x80D10904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10904: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10908:
    ctx->pc = 0x80D10908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10908u)) return;
    // 80D10908: addi    r4, r4, 9820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9820);

label_80D1090C:
    ctx->pc = 0x80D1090Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1090Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1090C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D1090Cu)) return;
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
label_80D10910:
    ctx->pc = 0x80D10910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10910u)) return;
    // 80D10910: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10914:
    ctx->pc = 0x80D10914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10914u)) return;
    // 80D10914: addi    r4, r4, 9824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9824);

label_80D10918:
    ctx->pc = 0x80D10918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10918: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10918u)) return;
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
label_80D1091C:
    ctx->pc = 0x80D1091Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1091Cu)) return;
    // 80D1091C: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10920:
    ctx->pc = 0x80D10920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10920u)) return;
    // 80D10920: addi    r4, r4, 9828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9828);

label_80D10924:
    ctx->pc = 0x80D10924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10924: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10924u)) return;
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
label_80D10928:
    ctx->pc = 0x80D10928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10928u)) return;
    // 80D10928: bl      0x8045E70C
    {
            ctx->lr = 0x80D1092Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D1092C:
    ctx->pc = 0x80D1092Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1092Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D1092C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10930:
    ctx->pc = 0x80D10930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10930u)) return;
    // 80D10930: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10934:
    ctx->pc = 0x80D10934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10934u)) return;
    // 80D10934: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10938:
    ctx->pc = 0x80D10938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10938u)) return;
    // 80D10938: addi    r5, r5, 9832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9832);

label_80D1093C:
    ctx->pc = 0x80D1093Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1093Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1093C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D1093Cu)) return;
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
label_80D10940:
    ctx->pc = 0x80D10940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10940u)) return;
    // 80D10940: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10944:
    ctx->pc = 0x80D10944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10944u)) return;
    // 80D10944: addi    r5, r5, 9836
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9836);

label_80D10948:
    ctx->pc = 0x80D10948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10948: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10948u)) return;
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
label_80D1094C:
    ctx->pc = 0x80D1094Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1094Cu)) return;
    // 80D1094C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10950:
    ctx->pc = 0x80D10950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10950u)) return;
    // 80D10950: addi    r5, r5, 9840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9840);

label_80D10954:
    ctx->pc = 0x80D10954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10954: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10954u)) return;
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
label_80D10958:
    ctx->pc = 0x80D10958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10958u)) return;
    // 80D10958: bl      0x8045C750
    {
            ctx->lr = 0x80D1095Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D1095C:
    ctx->pc = 0x80D1095Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1095Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D1095C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10960:
    ctx->pc = 0x80D10960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10960u)) return;
    // 80D10960: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10964:
    ctx->pc = 0x80D10964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10964u)) return;
    // 80D10964: li      r5, 3056
    ctx->gpr[5] = (u32)(s32)(3056);

label_80D10968:
    ctx->pc = 0x80D10968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10968u)) return;
    // 80D10968: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D1096C:
    ctx->pc = 0x80D1096Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1096Cu)) return;
    // 80D1096C: addi    r6, r6, -564
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-564);

label_80D10970:
    ctx->pc = 0x80D10970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10970u)) return;
    // 80D10970: li      r7, 1280
    ctx->gpr[7] = (u32)(s32)(1280);

label_80D10974:
    ctx->pc = 0x80D10974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10974u)) return;
    // 80D10974: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10978u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10978:
    ctx->pc = 0x80D10978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10978: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1097C:
    ctx->pc = 0x80D1097Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1097Cu)) return;
    // 80D1097C: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D10980:
    ctx->pc = 0x80D10980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10980u)) return;
    // 80D10980: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10984:
    ctx->pc = 0x80D10984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10984u)) return;
    // 80D10984: addi    r5, r5, 9844
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9844);

label_80D10988:
    ctx->pc = 0x80D10988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10988: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10988u)) return;
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
label_80D1098C:
    ctx->pc = 0x80D1098Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1098Cu)) return;
    // 80D1098C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10990:
    ctx->pc = 0x80D10990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10990u)) return;
    // 80D10990: addi    r5, r5, 9848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9848);

label_80D10994:
    ctx->pc = 0x80D10994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10994: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10994u)) return;
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
label_80D10998:
    ctx->pc = 0x80D10998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10998u)) return;
    // 80D10998: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D1099C:
    ctx->pc = 0x80D1099Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1099Cu)) return;
    // 80D1099C: addi    r5, r5, 9852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9852);

label_80D109A0:
    ctx->pc = 0x80D109A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D109A0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D109A0u)) return;
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
label_80D109A4:
    ctx->pc = 0x80D109A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109A4u)) return;
    // 80D109A4: bl      0x8045C750
    {
            ctx->lr = 0x80D109A8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D109A8:
    ctx->pc = 0x80D109A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D109A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D109A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D109AC:
    ctx->pc = 0x80D109ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109ACu)) return;
    // 80D109AC: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D109B0:
    ctx->pc = 0x80D109B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109B0u)) return;
    // 80D109B0: li      r5, 2800
    ctx->gpr[5] = (u32)(s32)(2800);

label_80D109B4:
    ctx->pc = 0x80D109B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109B4u)) return;
    // 80D109B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D109B8:
    ctx->pc = 0x80D109B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109B8u)) return;
    // 80D109B8: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80D109BC:
    ctx->pc = 0x80D109BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109BCu)) return;
    // 80D109BC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D109C0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D109C0:
    ctx->pc = 0x80D109C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D109C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D109C0: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D109C4:
    ctx->pc = 0x80D109C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109C4u)) return;
    // 80D109C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D109C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D109C8:
    ctx->pc = 0x80D109C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D109C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D109C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D109CC:
    ctx->pc = 0x80D109CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109CCu)) return;
    // 80D109CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D109D0:
    ctx->pc = 0x80D109D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109D0u)) return;
    // 80D109D0: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D109D4:
    ctx->pc = 0x80D109D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109D4u)) return;
    // 80D109D4: addi    r5, r5, 9856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9856);

label_80D109D8:
    ctx->pc = 0x80D109D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D109D8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D109D8u)) return;
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
label_80D109DC:
    ctx->pc = 0x80D109DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109DCu)) return;
    // 80D109DC: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D109E0:
    ctx->pc = 0x80D109E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109E0u)) return;
    // 80D109E0: addi    r5, r5, 9860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9860);

label_80D109E4:
    ctx->pc = 0x80D109E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D109E4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D109E4u)) return;
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
label_80D109E8:
    ctx->pc = 0x80D109E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109E8u)) return;
    // 80D109E8: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D109EC:
    ctx->pc = 0x80D109ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109ECu)) return;
    // 80D109EC: addi    r5, r5, 9864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9864);

label_80D109F0:
    ctx->pc = 0x80D109F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D109F0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D109F0u)) return;
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
label_80D109F4:
    ctx->pc = 0x80D109F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109F4u)) return;
    // 80D109F4: bl      0x8045C750
    {
            ctx->lr = 0x80D109F8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D109F8:
    ctx->pc = 0x80D109F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D109F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D109F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D109FC:
    ctx->pc = 0x80D109FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D109FCu)) return;
    // 80D109FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10A00:
    ctx->pc = 0x80D10A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A00u)) return;
    // 80D10A00: li      r5, 2544
    ctx->gpr[5] = (u32)(s32)(2544);

label_80D10A04:
    ctx->pc = 0x80D10A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A04u)) return;
    // 80D10A04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D10A08:
    ctx->pc = 0x80D10A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A08u)) return;
    // 80D10A08: li      r7, 512
    ctx->gpr[7] = (u32)(s32)(512);

label_80D10A0C:
    ctx->pc = 0x80D10A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A0Cu)) return;
    // 80D10A0C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10A10u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10A10:
    ctx->pc = 0x80D10A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10A10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10A14:
    ctx->pc = 0x80D10A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A14u)) return;
    // 80D10A14: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D10A18:
    ctx->pc = 0x80D10A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A18u)) return;
    // 80D10A18: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10A1C:
    ctx->pc = 0x80D10A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A1Cu)) return;
    // 80D10A1C: addi    r5, r5, 9716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9716);

label_80D10A20:
    ctx->pc = 0x80D10A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10A20: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10A20u)) return;
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
label_80D10A24:
    ctx->pc = 0x80D10A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A24u)) return;
    // 80D10A24: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10A28:
    ctx->pc = 0x80D10A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A28u)) return;
    // 80D10A28: addi    r5, r5, 9868
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9868);

label_80D10A2C:
    ctx->pc = 0x80D10A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10A2C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10A2Cu)) return;
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
label_80D10A30:
    ctx->pc = 0x80D10A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A30u)) return;
    // 80D10A30: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10A34:
    ctx->pc = 0x80D10A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A34u)) return;
    // 80D10A34: addi    r5, r5, 9872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9872);

label_80D10A38:
    ctx->pc = 0x80D10A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10A38: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10A38u)) return;
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
label_80D10A3C:
    ctx->pc = 0x80D10A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A3Cu)) return;
    // 80D10A3C: bl      0x8045C750
    {
            ctx->lr = 0x80D10A40u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10A40:
    ctx->pc = 0x80D10A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D10A40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10A44:
    ctx->pc = 0x80D10A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A44u)) return;
    // 80D10A44: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D10A48:
    ctx->pc = 0x80D10A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A48u)) return;
    // 80D10A48: li      r5, 2288
    ctx->gpr[5] = (u32)(s32)(2288);

label_80D10A4C:
    ctx->pc = 0x80D10A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A4Cu)) return;
    // 80D10A4C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D10A50:
    ctx->pc = 0x80D10A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A50u)) return;
    // 80D10A50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D10A54:
    ctx->pc = 0x80D10A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A54u)) return;
    // 80D10A54: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10A58u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10A58:
    ctx->pc = 0x80D10A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10A58: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80D10A5C:
    ctx->pc = 0x80D10A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A5Cu)) return;
    // 80D10A5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D10A60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D10A60:
    ctx->pc = 0x80D10A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10A60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10A64:
    ctx->pc = 0x80D10A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A64u)) return;
    // 80D10A64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10A68:
    ctx->pc = 0x80D10A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A68u)) return;
    // 80D10A68: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10A6C:
    ctx->pc = 0x80D10A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A6Cu)) return;
    // 80D10A6C: addi    r5, r5, 9876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9876);

label_80D10A70:
    ctx->pc = 0x80D10A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10A70: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10A70u)) return;
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
label_80D10A74:
    ctx->pc = 0x80D10A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A74u)) return;
    // 80D10A74: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10A78:
    ctx->pc = 0x80D10A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A78u)) return;
    // 80D10A78: addi    r5, r5, 9880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9880);

label_80D10A7C:
    ctx->pc = 0x80D10A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10A7C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10A7Cu)) return;
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
label_80D10A80:
    ctx->pc = 0x80D10A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A80u)) return;
    // 80D10A80: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10A84:
    ctx->pc = 0x80D10A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A84u)) return;
    // 80D10A84: addi    r5, r5, 9884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9884);

label_80D10A88:
    ctx->pc = 0x80D10A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10A88: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10A88u)) return;
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
label_80D10A8C:
    ctx->pc = 0x80D10A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A8Cu)) return;
    // 80D10A8C: bl      0x8045C750
    {
            ctx->lr = 0x80D10A90u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10A90:
    ctx->pc = 0x80D10A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D10A90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10A94:
    ctx->pc = 0x80D10A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A94u)) return;
    // 80D10A94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D10A98:
    ctx->pc = 0x80D10A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A98u)) return;
    // 80D10A98: li      r5, 1520
    ctx->gpr[5] = (u32)(s32)(1520);

label_80D10A9C:
    ctx->pc = 0x80D10A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10A9Cu)) return;
    // 80D10A9C: li      r6, 30668
    ctx->gpr[6] = (u32)(s32)(30668);

label_80D10AA0:
    ctx->pc = 0x80D10AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AA0u)) return;
    // 80D10AA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D10AA4:
    ctx->pc = 0x80D10AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AA4u)) return;
    // 80D10AA4: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10AA8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10AA8:
    ctx->pc = 0x80D10AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D10AA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10AAC:
    ctx->pc = 0x80D10AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AACu)) return;
    // 80D10AAC: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D10AB0:
    ctx->pc = 0x80D10AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AB0u)) return;
    // 80D10AB0: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10AB4:
    ctx->pc = 0x80D10AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AB4u)) return;
    // 80D10AB4: addi    r5, r5, 9888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9888);

label_80D10AB8:
    ctx->pc = 0x80D10AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10AB8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10AB8u)) return;
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
label_80D10ABC:
    ctx->pc = 0x80D10ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10ABCu)) return;
    // 80D10ABC: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10AC0:
    ctx->pc = 0x80D10AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AC0u)) return;
    // 80D10AC0: addi    r5, r5, 9892
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9892);

label_80D10AC4:
    ctx->pc = 0x80D10AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10AC4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10AC4u)) return;
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
label_80D10AC8:
    ctx->pc = 0x80D10AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AC8u)) return;
    // 80D10AC8: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10ACC:
    ctx->pc = 0x80D10ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10ACCu)) return;
    // 80D10ACC: addi    r5, r5, 9896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9896);

label_80D10AD0:
    ctx->pc = 0x80D10AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10AD0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10AD0u)) return;
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
label_80D10AD4:
    ctx->pc = 0x80D10AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AD4u)) return;
    // 80D10AD4: bl      0x8045C750
    {
            ctx->lr = 0x80D10AD8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D10AD8:
    ctx->pc = 0x80D10AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D10AD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10ADC:
    ctx->pc = 0x80D10ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10ADCu)) return;
    // 80D10ADC: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D10AE0:
    ctx->pc = 0x80D10AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AE0u)) return;
    // 80D10AE0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D10AE4:
    ctx->pc = 0x80D10AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AE4u)) return;
    // 80D10AE4: addi    r5, r5, -9328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9328);

label_80D10AE8:
    ctx->pc = 0x80D10AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AE8u)) return;
    // 80D10AE8: li      r6, 30668
    ctx->gpr[6] = (u32)(s32)(30668);

label_80D10AEC:
    ctx->pc = 0x80D10AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AECu)) return;
    // 80D10AEC: li      r7, 1536
    ctx->gpr[7] = (u32)(s32)(1536);

label_80D10AF0:
    ctx->pc = 0x80D10AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AF0u)) return;
    // 80D10AF0: bl      0x8045C7B4
    {
            ctx->lr = 0x80D10AF4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D10AF4:
    ctx->pc = 0x80D10AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10AF4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10AF8:
    ctx->pc = 0x80D10AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10AF8u)) return;
    // 80D10AF8: bl      0x8045F220
    {
            ctx->lr = 0x80D10AFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10AFC:
    ctx->pc = 0x80D10AFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10AFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10AFC: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D10B00:
    ctx->pc = 0x80D10B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B00u)) return;
    // 80D10B00: addi    r4, r4, -2316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2316);

label_80D10B04:
    ctx->pc = 0x80D10B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B04u)) return;
    // 80D10B04: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80D10B08:
    ctx->pc = 0x80D10B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B08u)) return;
    // 80D10B08: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80D10B0C:
    ctx->pc = 0x80D10B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B0Cu)) return;
    // 80D10B0C: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D10B10:
    ctx->pc = 0x80D10B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B10u)) return;
    // 80D10B10: addi    r6, r6, 9656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9656);

label_80D10B14:
    ctx->pc = 0x80D10B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10B14: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10B14u)) return;
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
label_80D10B18:
    ctx->pc = 0x80D10B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B18u)) return;
    // 80D10B18: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D10B1C:
    ctx->pc = 0x80D10B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B1Cu)) return;
    // 80D10B1C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80D10B20:
    ctx->pc = 0x80D10B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B20u)) return;
    // 80D10B20: bl      0x8045EBE4
    {
            ctx->lr = 0x80D10B24u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D10B24:
    ctx->pc = 0x80D10B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10B24: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D10B28:
    ctx->pc = 0x80D10B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B28u)) return;
    // 80D10B28: bl      0x8045F7C8
    {
            ctx->lr = 0x80D10B2Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D10B2C:
    ctx->pc = 0x80D10B2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10B2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10B2C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10B30:
    ctx->pc = 0x80D10B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B30u)) return;
    // 80D10B30: bl      0x8045F220
    {
            ctx->lr = 0x80D10B34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10B34:
    ctx->pc = 0x80D10B34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10B34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D10B34: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10B38:
    ctx->pc = 0x80D10B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B38u)) return;
    // 80D10B38: addi    r4, r4, 9900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9900);

label_80D10B3C:
    ctx->pc = 0x80D10B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D10B3C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10B3Cu)) return;
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
label_80D10B40:
    ctx->pc = 0x80D10B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B40u)) return;
    // 80D10B40: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10B44:
    ctx->pc = 0x80D10B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B44u)) return;
    // 80D10B44: addi    r4, r4, 9904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9904);

label_80D10B48:
    ctx->pc = 0x80D10B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D10B48: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10B48u)) return;
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
label_80D10B4C:
    ctx->pc = 0x80D10B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B4Cu)) return;
    // 80D10B4C: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10B50:
    ctx->pc = 0x80D10B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B50u)) return;
    // 80D10B50: addi    r4, r4, 9908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9908);

label_80D10B54:
    ctx->pc = 0x80D10B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10B54: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10B54u)) return;
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
label_80D10B58:
    ctx->pc = 0x80D10B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B58u)) return;
    // 80D10B58: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10B5C:
    ctx->pc = 0x80D10B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B5Cu)) return;
    // 80D10B5C: addi    r4, r4, 9652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9652);

label_80D10B60:
    ctx->pc = 0x80D10B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10B60: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10B60u)) return;
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
label_80D10B64:
    ctx->pc = 0x80D10B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B64u)) return;
    // 80D10B64: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10B68:
    ctx->pc = 0x80D10B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B68u)) return;
    // 80D10B68: addi    r4, r4, 9684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9684);

label_80D10B6C:
    ctx->pc = 0x80D10B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10B6C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10B6Cu)) return;
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
label_80D10B70:
    ctx->pc = 0x80D10B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B70u)) return;
    // 80D10B70: bl      0x8045E570
    {
            ctx->lr = 0x80D10B74u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80D10B74:
    ctx->pc = 0x80D10B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10B74: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10B78:
    ctx->pc = 0x80D10B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B78u)) return;
    // 80D10B78: bl      0x8045F220
    {
            ctx->lr = 0x80D10B7Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10B7C:
    ctx->pc = 0x80D10B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D10B7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D10B80:
    ctx->pc = 0x80D10B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B80u)) return;
    // 80D10B80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10B84:
    ctx->pc = 0x80D10B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B84u)) return;
    // 80D10B84: bl      0x8045F220
    {
            ctx->lr = 0x80D10B88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10B88:
    ctx->pc = 0x80D10B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D10B88: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D10B8C:
    ctx->pc = 0x80D10B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B8Cu)) return;
    // 80D10B8C: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10B90:
    ctx->pc = 0x80D10B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B90u)) return;
    // 80D10B90: addi    r5, r5, 9716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9716);

label_80D10B94:
    ctx->pc = 0x80D10B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D10B94: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10B94u)) return;
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
label_80D10B98:
    ctx->pc = 0x80D10B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B98u)) return;
    // 80D10B98: lis     r5, -27346
    ctx->gpr[5] = ((u32)(s32)(-27346) << 16);

label_80D10B9C:
    ctx->pc = 0x80D10B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10B9Cu)) return;
    // 80D10B9C: addi    r5, r5, 9912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9912);

label_80D10BA0:
    ctx->pc = 0x80D10BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10BA0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D10BA0u)) return;
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
label_80D10BA4:
    ctx->pc = 0x80D10BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BA4u)) return;
    // 80D10BA4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D10BA4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D10BA8:
    ctx->pc = 0x80D10BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BA8u)) return;
    // 80D10BA8: bl      0x8045E734
    {
            ctx->lr = 0x80D10BACu;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D10BAC:
    ctx->pc = 0x80D10BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10BAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10BB0:
    ctx->pc = 0x80D10BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BB0u)) return;
    // 80D10BB0: bl      0x8045F220
    {
            ctx->lr = 0x80D10BB4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10BB4:
    ctx->pc = 0x80D10BB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10BB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10BB4: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10BB8:
    ctx->pc = 0x80D10BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BB8u)) return;
    // 80D10BB8: addi    r4, r4, 30412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30412);

label_80D10BBC:
    ctx->pc = 0x80D10BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BBCu)) return;
    // 80D10BBC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D10BC0:
    ctx->pc = 0x80D10BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BC0u)) return;
    // 80D10BC0: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D10BC4:
    ctx->pc = 0x80D10BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BC4u)) return;
    // 80D10BC4: lis     r6, -27346
    ctx->gpr[6] = ((u32)(s32)(-27346) << 16);

label_80D10BC8:
    ctx->pc = 0x80D10BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BC8u)) return;
    // 80D10BC8: addi    r6, r6, 9652
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9652);

label_80D10BCC:
    ctx->pc = 0x80D10BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10BCC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10BCCu)) return;
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
label_80D10BD0:
    ctx->pc = 0x80D10BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BD0u)) return;
    // 80D10BD0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D10BD4:
    ctx->pc = 0x80D10BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BD4u)) return;
    // 80D10BD4: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_80D10BD8:
    ctx->pc = 0x80D10BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BD8u)) return;
    // 80D10BD8: bl      0x8045EBE4
    {
            ctx->lr = 0x80D10BDCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D10BDC:
    ctx->pc = 0x80D10BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10BDC: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80D10BE0:
    ctx->pc = 0x80D10BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BE0u)) return;
    // 80D10BE0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D10BE4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D10BE4:
    ctx->pc = 0x80D10BE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10BE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10BE4: li      r3, 1469
    ctx->gpr[3] = (u32)(s32)(1469);

label_80D10BE8:
    ctx->pc = 0x80D10BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BE8u)) return;
    // 80D10BE8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D10BECu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D10BEC:
    ctx->pc = 0x80D10BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10BEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10BF0:
    ctx->pc = 0x80D10BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BF0u)) return;
    // 80D10BF0: bl      0x8045F220
    {
            ctx->lr = 0x80D10BF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10BF4:
    ctx->pc = 0x80D10BF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10BF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D10BF4: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10BF8:
    ctx->pc = 0x80D10BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BF8u)) return;
    // 80D10BF8: addi    r4, r4, 10672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10672);

label_80D10BFC:
    ctx->pc = 0x80D10BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10BFCu)) return;
    // 80D10BFC: bl      0x8045C060
    {
            ctx->lr = 0x80D10C00u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D10C00:
    ctx->pc = 0x80D10C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10C00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D10C04:
    ctx->pc = 0x80D10C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C04u)) return;
    // 80D10C04: bl      0x8045F7C8
    {
            ctx->lr = 0x80D10C08u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D10C08:
    ctx->pc = 0x80D10C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10C08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10C0C:
    ctx->pc = 0x80D10C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C0Cu)) return;
    // 80D10C0C: bl      0x8045F220
    {
            ctx->lr = 0x80D10C10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10C10:
    ctx->pc = 0x80D10C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10C10: bl      0x8045C034
    {
            ctx->lr = 0x80D10C14u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D10C14:
    ctx->pc = 0x80D10C14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D10C14: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D10C18:
    ctx->pc = 0x80D10C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C18u)) return;
    // 80D10C18: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D10C1C:
    ctx->pc = 0x80D10C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10C1C: lwz     r0, 0(r3)
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
label_80D10C20:
    ctx->pc = 0x80D10C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C20u)) return;
    // 80D10C20: cmpwi   r0, 0
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

label_80D10C24:
    ctx->pc = 0x80D10C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C24u)) return;
    // 80D10C24: bc    4, 2, 0x80D10C3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D10C3C;
        }
    }

label_80D10C28:
    ctx->pc = 0x80D10C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10C28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10C2C:
    ctx->pc = 0x80D10C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C2Cu)) return;
    // 80D10C2C: bl      0x8045F220
    {
            ctx->lr = 0x80D10C30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10C30:
    ctx->pc = 0x80D10C30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D10C30: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10C34:
    ctx->pc = 0x80D10C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C34u)) return;
    // 80D10C34: addi    r4, r4, 10676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10676);

label_80D10C38:
    ctx->pc = 0x80D10C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C38u)) return;
    // 80D10C38: bl      0x8045C060
    {
            ctx->lr = 0x80D10C3Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D10C3C:
    ctx->pc = 0x80D10C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D10C3C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D10C40:
    ctx->pc = 0x80D10C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C40u)) return;
    // 80D10C40: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D10C44:
    ctx->pc = 0x80D10C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10C44: lwz     r0, 0(r3)
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
label_80D10C48:
    ctx->pc = 0x80D10C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C48u)) return;
    // 80D10C48: cmpwi   r0, 1
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

label_80D10C4C:
    ctx->pc = 0x80D10C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C4Cu)) return;
    // 80D10C4C: bc    4, 2, 0x80D10C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D10C64;
        }
    }

label_80D10C50:
    ctx->pc = 0x80D10C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10C50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10C54:
    ctx->pc = 0x80D10C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C54u)) return;
    // 80D10C54: bl      0x8045F220
    {
            ctx->lr = 0x80D10C58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10C58:
    ctx->pc = 0x80D10C58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D10C58: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10C5C:
    ctx->pc = 0x80D10C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C5Cu)) return;
    // 80D10C5C: addi    r4, r4, 10680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10680);

label_80D10C60:
    ctx->pc = 0x80D10C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C60u)) return;
    // 80D10C60: bl      0x8045C060
    {
            ctx->lr = 0x80D10C64u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D10C64:
    ctx->pc = 0x80D10C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D10C64: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D10C68:
    ctx->pc = 0x80D10C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C68u)) return;
    // 80D10C68: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D10C6C:
    ctx->pc = 0x80D10C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D10C6C: lwz     r0, 0(r3)
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
label_80D10C70:
    ctx->pc = 0x80D10C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C70u)) return;
    // 80D10C70: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D10C74:
    ctx->pc = 0x80D10C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C74u)) return;
    // 80D10C74: lis     r3, -27346
    ctx->gpr[3] = ((u32)(s32)(-27346) << 16);

label_80D10C78:
    ctx->pc = 0x80D10C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C78u)) return;
    // 80D10C78: addi    r3, r3, 10584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10584);

label_80D10C7C:
    ctx->pc = 0x80D10C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10C7C: lwzx    r3, r3, r0
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
label_80D10C80:
    ctx->pc = 0x80D10C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10C80: lwz     r3, 20(r3)
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
label_80D10C84:
    ctx->pc = 0x80D10C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C84u)) return;
    // 80D10C84: bl      0x8045F6FC
    {
            ctx->lr = 0x80D10C88u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D10C88:
    ctx->pc = 0x80D10C88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10C88: bl      0x8045BFF4
    {
            ctx->lr = 0x80D10C8Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D10C8C:
    ctx->pc = 0x80D10C8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10C8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D10C8C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D10C90:
    ctx->pc = 0x80D10C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C90u)) return;
    // 80D10C90: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D10C94:
    ctx->pc = 0x80D10C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10C94: lwz     r0, 0(r3)
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
label_80D10C98:
    ctx->pc = 0x80D10C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C98u)) return;
    // 80D10C98: cmpwi   r0, 1
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

label_80D10C9C:
    ctx->pc = 0x80D10C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10C9Cu)) return;
    // 80D10C9C: bc    4, 2, 0x80D10CAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D10CAC;
        }
    }

label_80D10CA0:
    ctx->pc = 0x80D10CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10CA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10CA4:
    ctx->pc = 0x80D10CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CA4u)) return;
    // 80D10CA4: bl      0x8045F220
    {
            ctx->lr = 0x80D10CA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10CA8:
    ctx->pc = 0x80D10CA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10CA8: bl      0x8045C034
    {
            ctx->lr = 0x80D10CACu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D10CAC:
    ctx->pc = 0x80D10CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10CAC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D10CB0:
    ctx->pc = 0x80D10CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CB0u)) return;
    // 80D10CB0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D10CB4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D10CB4:
    ctx->pc = 0x80D10CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D10CB4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D10CB8:
    ctx->pc = 0x80D10CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CB8u)) return;
    // 80D10CB8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D10CBC:
    ctx->pc = 0x80D10CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10CBC: lwz     r0, 0(r3)
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
label_80D10CC0:
    ctx->pc = 0x80D10CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CC0u)) return;
    // 80D10CC0: cmpwi   r0, 0
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

label_80D10CC4:
    ctx->pc = 0x80D10CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CC4u)) return;
    // 80D10CC4: bc    4, 2, 0x80D10CD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D10CD4;
        }
    }

label_80D10CC8:
    ctx->pc = 0x80D10CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10CC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10CCC:
    ctx->pc = 0x80D10CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CCCu)) return;
    // 80D10CCC: bl      0x8045F220
    {
            ctx->lr = 0x80D10CD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10CD0:
    ctx->pc = 0x80D10CD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10CD0: bl      0x8045C034
    {
            ctx->lr = 0x80D10CD4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D10CD4:
    ctx->pc = 0x80D10CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10CD4: bl      0x8045F32C
    {
            ctx->lr = 0x80D10CD8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D10CD8:
    ctx->pc = 0x80D10CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10CD8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D10CDC:
    ctx->pc = 0x80D10CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CDCu)) return;
    // 80D10CDC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D10CE0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D10CE0:
    ctx->pc = 0x80D10CE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10CE0: b       0x80D10D4C
    {
            goto label_80D10D4C;
    }

label_80D10CE4:
    ctx->pc = 0x80D10CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10CE4: bl      0x8045DE34
    {
            ctx->lr = 0x80D10CE8u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D10CE8:
    ctx->pc = 0x80D10CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10CE8: bl      0x80460A80
    {
            ctx->lr = 0x80D10CECu;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D10CEC:
    ctx->pc = 0x80D10CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10CEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10CF0:
    ctx->pc = 0x80D10CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CF0u)) return;
    // 80D10CF0: bl      0x8045F220
    {
            ctx->lr = 0x80D10CF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10CF4:
    ctx->pc = 0x80D10CF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10CF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D10CF4: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10CF8:
    ctx->pc = 0x80D10CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CF8u)) return;
    // 80D10CF8: addi    r4, r4, 9800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9800);

label_80D10CFC:
    ctx->pc = 0x80D10CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10CFC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10CFCu)) return;
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
label_80D10D00:
    ctx->pc = 0x80D10D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D00u)) return;
    // 80D10D00: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10D04:
    ctx->pc = 0x80D10D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D04u)) return;
    // 80D10D04: addi    r4, r4, 9804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9804);

label_80D10D08:
    ctx->pc = 0x80D10D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10D08: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10D08u)) return;
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
label_80D10D0C:
    ctx->pc = 0x80D10D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D0Cu)) return;
    // 80D10D0C: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10D10:
    ctx->pc = 0x80D10D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D10u)) return;
    // 80D10D10: addi    r4, r4, 9808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9808);

label_80D10D14:
    ctx->pc = 0x80D10D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D10D14: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10D14u)) return;
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
label_80D10D18:
    ctx->pc = 0x80D10D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D18u)) return;
    // 80D10D18: bl      0x8045EF2C
    {
            ctx->lr = 0x80D10D1Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D10D1C:
    ctx->pc = 0x80D10D1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10D1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10D1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10D20:
    ctx->pc = 0x80D10D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D20u)) return;
    // 80D10D20: bl      0x8045F220
    {
            ctx->lr = 0x80D10D24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D10D24:
    ctx->pc = 0x80D10D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D10D24: li      r4, 1264
    ctx->gpr[4] = (u32)(s32)(1264);

label_80D10D28:
    ctx->pc = 0x80D10D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D28u)) return;
    // 80D10D28: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D10D2C:
    ctx->pc = 0x80D10D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D2Cu)) return;
    // 80D10D2C: addi    r5, r5, -31800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31800);

label_80D10D30:
    ctx->pc = 0x80D10D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D30u)) return;
    // 80D10D30: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D10D34:
    ctx->pc = 0x80D10D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D34u)) return;
    // 80D10D34: bl      0x8045EEA8
    {
            ctx->lr = 0x80D10D38u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D10D38:
    ctx->pc = 0x80D10D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10D38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D10D3C:
    ctx->pc = 0x80D10D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D3Cu)) return;
    // 80D10D3C: bl      0x8045EC10
    {
            ctx->lr = 0x80D10D40u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D10D40:
    ctx->pc = 0x80D10D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D10D40: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10D44:
    ctx->pc = 0x80D10D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D44u)) return;
    // 80D10D44: bl      0x8045ED54
    {
            ctx->lr = 0x80D10D48u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80D10D48:
    ctx->pc = 0x80D10D48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10D48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D10D48: bl      0x80D11984
    {
            ctx->lr = 0x80D10D4Cu;
            goto label_80D11984;
    }

label_80D10D4C:
    ctx->pc = 0x80D10D4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10D4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D10D4C: lwz     r31, 12(r1)
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
label_80D10D50:
    ctx->pc = 0x80D10D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10D50: lwz     r0, 20(r1)
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
label_80D10D54:
    ctx->pc = 0x80D10D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D10D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10D54: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D58:
    ctx->pc = 0x80D10D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D58u)) return;
    // 80D10D58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D10D5C:
    ctx->pc = 0x80D10D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D5Cu)) return;
    // 80D10D5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D10D60:
    ctx->pc = 0x80D10D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D10D60: stwu     r1, -144(r1)
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
label_80D10D64:
    ctx->pc = 0x80D10D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D10D64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D68:
    ctx->pc = 0x80D10D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D10D68: stw     r0, 148(r1)
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
label_80D10D6C:
    ctx->pc = 0x80D10D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D10D6C: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10D6Cu)) return;
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
label_80D10D70:
    ctx->pc = 0x80D10D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D10D70: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10D70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D10D70u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D74:
    ctx->pc = 0x80D10D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D10D74: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10D74u)) return;
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
label_80D10D78:
    ctx->pc = 0x80D10D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D10D78: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10D78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D10D78u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D7C:
    ctx->pc = 0x80D10D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D10D7C: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10D7Cu)) return;
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
label_80D10D80:
    ctx->pc = 0x80D10D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D10D80: psq_st   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10D80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D10D80u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D84:
    ctx->pc = 0x80D10D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10D84: stfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10D84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D88:
    ctx->pc = 0x80D10D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D10D88: psq_st   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10D88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80D10D88u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D8C:
    ctx->pc = 0x80D10D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D10D8C: stfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10D8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D90:
    ctx->pc = 0x80D10D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10D90: psq_st   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10D90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80D10D90u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D94:
    ctx->pc = 0x80D10D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10D94: stfd     f26, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10D94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D98:
    ctx->pc = 0x80D10D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10D98: psq_st   f26, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10D98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x80D10D98u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10D9C:
    ctx->pc = 0x80D10D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10D9Cu)) return;
    // 80D10D9C: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80D10DA0:
    ctx->pc = 0x80D10DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DA0u)) return;
    // 80D10DA0: bl      0x80006DC8
    {
            ctx->lr = 0x80D10DA4u;
            ctx->pc = 0x80006DC8u;
            return;
    }

label_80D10DA4:
    ctx->pc = 0x80D10DA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10DA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80D10DA4: fmr    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x80D10DA4u)) return;
    ctx->fpr[26] = ctx->fpr[1];

label_80D10DA8:
    ctx->pc = 0x80D10DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DA8u)) return;
    // 80D10DA8: fmr    f27, f2
    if (!ppc_fp_available_inline(ctx, 0x80D10DA8u)) return;
    ctx->fpr[27] = ctx->fpr[2];

label_80D10DAC:
    ctx->pc = 0x80D10DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DACu)) return;
    // 80D10DAC: fmr    f28, f3
    if (!ppc_fp_available_inline(ctx, 0x80D10DACu)) return;
    ctx->fpr[28] = ctx->fpr[3];

label_80D10DB0:
    ctx->pc = 0x80D10DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DB0u)) return;
    // 80D10DB0: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D10DB4:
    ctx->pc = 0x80D10DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DB4u)) return;
    // 80D10DB4: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D10DB8:
    ctx->pc = 0x80D10DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DB8u)) return;
    // 80D10DB8: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D10DBC:
    ctx->pc = 0x80D10DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DBCu)) return;
    // 80D10DBC: fmr    f29, f4
    if (!ppc_fp_available_inline(ctx, 0x80D10DBCu)) return;
    ctx->fpr[29] = ctx->fpr[4];

label_80D10DC0:
    ctx->pc = 0x80D10DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DC0u)) return;
    // 80D10DC0: fmr    f30, f5
    if (!ppc_fp_available_inline(ctx, 0x80D10DC0u)) return;
    ctx->fpr[30] = ctx->fpr[5];

label_80D10DC4:
    ctx->pc = 0x80D10DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DC4u)) return;
    // 80D10DC4: fmr    f31, f6
    if (!ppc_fp_available_inline(ctx, 0x80D10DC4u)) return;
    ctx->fpr[31] = ctx->fpr[6];

label_80D10DC8:
    ctx->pc = 0x80D10DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DC8u)) return;
    // 80D10DC8: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D10DCC:
    ctx->pc = 0x80D10DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DCCu)) return;
    // 80D10DCC: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80D10DD0:
    ctx->pc = 0x80D10DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DD0u)) return;
    // 80D10DD0: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_80D10DD4:
    ctx->pc = 0x80D10DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DD4u)) return;
    // 80D10DD4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10DD8:
    ctx->pc = 0x80D10DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DD8u)) return;
    // 80D10DD8: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D10DDC:
    ctx->pc = 0x80D10DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DDCu)) return;
    // 80D10DDC: lis     r5, -32559
    ctx->gpr[5] = ((u32)(s32)(-32559) << 16);

label_80D10DE0:
    ctx->pc = 0x80D10DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DE0u)) return;
    // 80D10DE0: addi    r5, r5, 4424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4424);

label_80D10DE4:
    ctx->pc = 0x80D10DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DE4u)) return;
    // 80D10DE4: bl      0x8050FD60
    {
            ctx->lr = 0x80D10DE8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D10DE8:
    ctx->pc = 0x80D10DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D10DE8: rlwinm r30, r29, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_80D10DEC:
    ctx->pc = 0x80D10DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DECu)) return;
    // 80D10DEC: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D10DF0:
    ctx->pc = 0x80D10DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DF0u)) return;
    // 80D10DF0: addi    r31, r4, -2304
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-2304);

label_80D10DF4:
    ctx->pc = 0x80D10DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10DF4: stwx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10DF8:
    ctx->pc = 0x80D10DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DF8u)) return;
    // 80D10DF8: li      r3, 68
    ctx->gpr[3] = (u32)(s32)(68);

label_80D10DFC:
    ctx->pc = 0x80D10DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10DFCu)) return;
    // 80D10DFC: bl      0x8050EF60
    {
            ctx->lr = 0x80D10E00u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80D10E00:
    ctx->pc = 0x80D10E00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 36u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10E00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 36u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80D10E00: lwzx    r4, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E04:
    ctx->pc = 0x80D10E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80D10E04: lwz     r6, 32(r4)
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
label_80D10E08:
    ctx->pc = 0x80D10E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D10E08: stw     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E0C:
    ctx->pc = 0x80D10E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E0Cu)) return;
    // 80D10E0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D10E10:
    ctx->pc = 0x80D10E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80D10E10: stb     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E14:
    ctx->pc = 0x80D10E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D10E14: stfs     f26, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10E14u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E18:
    ctx->pc = 0x80D10E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80D10E18: stfs     f27, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10E18u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E1C:
    ctx->pc = 0x80D10E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80D10E1C: stfs     f28, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10E1Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E20:
    ctx->pc = 0x80D10E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80D10E20: stw     r24, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E24:
    ctx->pc = 0x80D10E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80D10E24: stw     r25, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E28:
    ctx->pc = 0x80D10E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80D10E28: stw     r26, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E2C:
    ctx->pc = 0x80D10E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D10E2C: stfs     f29, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10E2Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E30:
    ctx->pc = 0x80D10E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D10E30: stfs     f30, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10E30u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E34:
    ctx->pc = 0x80D10E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D10E34: stfs     f31, 52(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10E34u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E38:
    ctx->pc = 0x80D10E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E38u)) return;
    // 80D10E38: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10E3C:
    ctx->pc = 0x80D10E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E3Cu)) return;
    // 80D10E3C: addi    r4, r4, 9920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9920);

label_80D10E40:
    ctx->pc = 0x80D10E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D10E40: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10E40u)) return;
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
label_80D10E44:
    ctx->pc = 0x80D10E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D10E44: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10E44u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E48:
    ctx->pc = 0x80D10E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D10E48: stw     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E4C:
    ctx->pc = 0x80D10E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D10E4C: stw     r28, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E50:
    ctx->pc = 0x80D10E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D10E50: stw     r29, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E54:
    ctx->pc = 0x80D10E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E54u)) return;
    // 80D10E54: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80D10E58:
    ctx->pc = 0x80D10E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D10E58: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E5C:
    ctx->pc = 0x80D10E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D10E5C: stw     r5, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E60:
    ctx->pc = 0x80D10E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D10E60: stw     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E64:
    ctx->pc = 0x80D10E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D10E64: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E68:
    ctx->pc = 0x80D10E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D10E68: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E6C:
    ctx->pc = 0x80D10E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D10E6C: stw     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E70:
    ctx->pc = 0x80D10E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10E70: stw     r5, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E74:
    ctx->pc = 0x80D10E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D10E74: stw     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E78:
    ctx->pc = 0x80D10E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D10E78: stw     r5, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E7C:
    ctx->pc = 0x80D10E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10E7C: stw     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E80:
    ctx->pc = 0x80D10E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10E80: stw     r5, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E84:
    ctx->pc = 0x80D10E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10E84: stw     r5, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E88:
    ctx->pc = 0x80D10E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E88u)) return;
    // 80D10E88: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D10E8C:
    ctx->pc = 0x80D10E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E8Cu)) return;
    // 80D10E8C: bl      0x80462174
    {
            ctx->lr = 0x80D10E90u;
            ctx->pc = 0x80462174u;
            return;
    }

label_80D10E90:
    ctx->pc = 0x80D10E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D10E90: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10E90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D10E90u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E94:
    ctx->pc = 0x80D10E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D10E94: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10E94u)) return;
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
label_80D10E98:
    ctx->pc = 0x80D10E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D10E98: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10E98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D10E98u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10E9C:
    ctx->pc = 0x80D10E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D10E9C: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10E9Cu)) return;
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
label_80D10EA0:
    ctx->pc = 0x80D10EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D10EA0: psq_l   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10EA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D10EA0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EA4:
    ctx->pc = 0x80D10EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D10EA4: lfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10EA4u)) return;
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
label_80D10EA8:
    ctx->pc = 0x80D10EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10EA8: psq_l   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10EA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80D10EA8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EAC:
    ctx->pc = 0x80D10EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D10EAC: lfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10EACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EB0:
    ctx->pc = 0x80D10EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D10EB0: psq_l   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10EB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80D10EB0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EB4:
    ctx->pc = 0x80D10EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10EB4: lfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10EB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EB8:
    ctx->pc = 0x80D10EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10EB8: psq_l   f26, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10EB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x80D10EB8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EBC:
    ctx->pc = 0x80D10EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10EBC: lfd     f26, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10EBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EC0:
    ctx->pc = 0x80D10EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EC0u)) return;
    // 80D10EC0: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80D10EC4:
    ctx->pc = 0x80D10EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EC4u)) return;
    // 80D10EC4: bl      0x80006E14
    {
            ctx->lr = 0x80D10EC8u;
            ctx->pc = 0x80006E14u;
            return;
    }

label_80D10EC8:
    ctx->pc = 0x80D10EC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10EC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10EC8: lwz     r0, 148(r1)
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
label_80D10ECC:
    ctx->pc = 0x80D10ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D10ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10ECC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10ED0:
    ctx->pc = 0x80D10ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10ED0u)) return;
    // 80D10ED0: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_80D10ED4:
    ctx->pc = 0x80D10ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10ED4u)) return;
    // 80D10ED4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D10ED8:
    ctx->pc = 0x80D10ED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10ED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D10ED8: stwu     r1, -144(r1)
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
label_80D10EDC:
    ctx->pc = 0x80D10EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D10EDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EE0:
    ctx->pc = 0x80D10EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D10EE0: stw     r0, 148(r1)
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
label_80D10EE4:
    ctx->pc = 0x80D10EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D10EE4: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10EE4u)) return;
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
label_80D10EE8:
    ctx->pc = 0x80D10EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D10EE8: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10EE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D10EE8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EEC:
    ctx->pc = 0x80D10EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D10EEC: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10EECu)) return;
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
label_80D10EF0:
    ctx->pc = 0x80D10EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D10EF0: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10EF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D10EF0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EF4:
    ctx->pc = 0x80D10EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D10EF4: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10EF4u)) return;
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
label_80D10EF8:
    ctx->pc = 0x80D10EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D10EF8: psq_st   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10EF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D10EF8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10EFC:
    ctx->pc = 0x80D10EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10EFC: stfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10EFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F00:
    ctx->pc = 0x80D10F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D10F00: psq_st   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10F00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80D10F00u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F04:
    ctx->pc = 0x80D10F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D10F04: stfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10F04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F08:
    ctx->pc = 0x80D10F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10F08: psq_st   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10F08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80D10F08u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F0C:
    ctx->pc = 0x80D10F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10F0C: stfd     f26, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D10F0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F10:
    ctx->pc = 0x80D10F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10F10: psq_st   f26, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D10F10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x80D10F10u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F14:
    ctx->pc = 0x80D10F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F14u)) return;
    // 80D10F14: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80D10F18:
    ctx->pc = 0x80D10F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F18u)) return;
    // 80D10F18: bl      0x80006DC8
    {
            ctx->lr = 0x80D10F1Cu;
            ctx->pc = 0x80006DC8u;
            return;
    }

label_80D10F1C:
    ctx->pc = 0x80D10F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80D10F1C: fmr    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x80D10F1Cu)) return;
    ctx->fpr[26] = ctx->fpr[1];

label_80D10F20:
    ctx->pc = 0x80D10F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F20u)) return;
    // 80D10F20: fmr    f27, f2
    if (!ppc_fp_available_inline(ctx, 0x80D10F20u)) return;
    ctx->fpr[27] = ctx->fpr[2];

label_80D10F24:
    ctx->pc = 0x80D10F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F24u)) return;
    // 80D10F24: fmr    f28, f3
    if (!ppc_fp_available_inline(ctx, 0x80D10F24u)) return;
    ctx->fpr[28] = ctx->fpr[3];

label_80D10F28:
    ctx->pc = 0x80D10F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F28u)) return;
    // 80D10F28: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D10F2C:
    ctx->pc = 0x80D10F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F2Cu)) return;
    // 80D10F2C: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D10F30:
    ctx->pc = 0x80D10F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F30u)) return;
    // 80D10F30: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D10F34:
    ctx->pc = 0x80D10F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F34u)) return;
    // 80D10F34: fmr    f29, f4
    if (!ppc_fp_available_inline(ctx, 0x80D10F34u)) return;
    ctx->fpr[29] = ctx->fpr[4];

label_80D10F38:
    ctx->pc = 0x80D10F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F38u)) return;
    // 80D10F38: fmr    f30, f5
    if (!ppc_fp_available_inline(ctx, 0x80D10F38u)) return;
    ctx->fpr[30] = ctx->fpr[5];

label_80D10F3C:
    ctx->pc = 0x80D10F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F3Cu)) return;
    // 80D10F3C: fmr    f31, f6
    if (!ppc_fp_available_inline(ctx, 0x80D10F3Cu)) return;
    ctx->fpr[31] = ctx->fpr[6];

label_80D10F40:
    ctx->pc = 0x80D10F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F40u)) return;
    // 80D10F40: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D10F44:
    ctx->pc = 0x80D10F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F44u)) return;
    // 80D10F44: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80D10F48:
    ctx->pc = 0x80D10F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F48u)) return;
    // 80D10F48: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_80D10F4C:
    ctx->pc = 0x80D10F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F4Cu)) return;
    // 80D10F4C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D10F50:
    ctx->pc = 0x80D10F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F50u)) return;
    // 80D10F50: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D10F54:
    ctx->pc = 0x80D10F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F54u)) return;
    // 80D10F54: lis     r5, -32559
    ctx->gpr[5] = ((u32)(s32)(-32559) << 16);

label_80D10F58:
    ctx->pc = 0x80D10F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F58u)) return;
    // 80D10F58: addi    r5, r5, 5016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(5016);

label_80D10F5C:
    ctx->pc = 0x80D10F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F5Cu)) return;
    // 80D10F5C: bl      0x8050FD60
    {
            ctx->lr = 0x80D10F60u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D10F60:
    ctx->pc = 0x80D10F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D10F60: rlwinm r30, r29, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_80D10F64:
    ctx->pc = 0x80D10F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F64u)) return;
    // 80D10F64: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D10F68:
    ctx->pc = 0x80D10F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F68u)) return;
    // 80D10F68: addi    r31, r4, -2304
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-2304);

label_80D10F6C:
    ctx->pc = 0x80D10F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10F6C: stwx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F70:
    ctx->pc = 0x80D10F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F70u)) return;
    // 80D10F70: li      r3, 68
    ctx->gpr[3] = (u32)(s32)(68);

label_80D10F74:
    ctx->pc = 0x80D10F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F74u)) return;
    // 80D10F74: bl      0x8050EF60
    {
            ctx->lr = 0x80D10F78u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80D10F78:
    ctx->pc = 0x80D10F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 36u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D10F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 36u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80D10F78: lwzx    r4, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F7C:
    ctx->pc = 0x80D10F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80D10F7C: lwz     r6, 32(r4)
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
label_80D10F80:
    ctx->pc = 0x80D10F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D10F80: stw     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F84:
    ctx->pc = 0x80D10F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F84u)) return;
    // 80D10F84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D10F88:
    ctx->pc = 0x80D10F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80D10F88: stb     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F8C:
    ctx->pc = 0x80D10F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D10F8C: stfs     f26, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10F8Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F90:
    ctx->pc = 0x80D10F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80D10F90: stfs     f27, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10F90u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F94:
    ctx->pc = 0x80D10F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80D10F94: stfs     f28, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10F94u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F98:
    ctx->pc = 0x80D10F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80D10F98: stw     r24, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10F9C:
    ctx->pc = 0x80D10F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80D10F9C: stw     r25, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FA0:
    ctx->pc = 0x80D10FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80D10FA0: stw     r26, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FA4:
    ctx->pc = 0x80D10FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D10FA4: stfs     f29, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10FA4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FA8:
    ctx->pc = 0x80D10FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D10FA8: stfs     f30, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10FA8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FAC:
    ctx->pc = 0x80D10FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D10FAC: stfs     f31, 52(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10FACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FB0:
    ctx->pc = 0x80D10FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FB0u)) return;
    // 80D10FB0: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D10FB4:
    ctx->pc = 0x80D10FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FB4u)) return;
    // 80D10FB4: addi    r4, r4, 9920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9920);

label_80D10FB8:
    ctx->pc = 0x80D10FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D10FB8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D10FB8u)) return;
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
label_80D10FBC:
    ctx->pc = 0x80D10FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D10FBC: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D10FBCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FC0:
    ctx->pc = 0x80D10FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D10FC0: stw     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FC4:
    ctx->pc = 0x80D10FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D10FC4: stw     r28, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FC8:
    ctx->pc = 0x80D10FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D10FC8: stw     r29, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FCC:
    ctx->pc = 0x80D10FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FCCu)) return;
    // 80D10FCC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80D10FD0:
    ctx->pc = 0x80D10FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D10FD0: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FD4:
    ctx->pc = 0x80D10FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D10FD4: stw     r5, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FD8:
    ctx->pc = 0x80D10FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D10FD8: stw     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FDC:
    ctx->pc = 0x80D10FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D10FDC: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FE0:
    ctx->pc = 0x80D10FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D10FE0: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FE4:
    ctx->pc = 0x80D10FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D10FE4: stw     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FE8:
    ctx->pc = 0x80D10FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D10FE8: stw     r5, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FEC:
    ctx->pc = 0x80D10FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D10FEC: stw     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FF0:
    ctx->pc = 0x80D10FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D10FF0: stw     r5, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FF4:
    ctx->pc = 0x80D10FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D10FF4: stw     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FF8:
    ctx->pc = 0x80D10FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D10FF8: stw     r5, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D10FFC:
    ctx->pc = 0x80D10FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D10FFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D10FFC: stw     r5, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11000:
    ctx->pc = 0x80D11000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11000u)) return;
    // 80D11000: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D11004:
    ctx->pc = 0x80D11004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11004u)) return;
    // 80D11004: bl      0x80462174
    {
            ctx->lr = 0x80D11008u;
            ctx->pc = 0x80462174u;
            return;
    }

label_80D11008:
    ctx->pc = 0x80D11008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D11008: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D11008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D11008u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1100C:
    ctx->pc = 0x80D1100Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1100Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D1100C: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D1100Cu)) return;
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
label_80D11010:
    ctx->pc = 0x80D11010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D11010: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D11010u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D11010u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11014:
    ctx->pc = 0x80D11014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D11014: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D11014u)) return;
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
label_80D11018:
    ctx->pc = 0x80D11018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D11018: psq_l   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D11018u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D11018u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1101C:
    ctx->pc = 0x80D1101Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1101Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D1101C: lfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D1101Cu)) return;
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
label_80D11020:
    ctx->pc = 0x80D11020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11020: psq_l   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D11020u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80D11020u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11024:
    ctx->pc = 0x80D11024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11024: lfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D11024u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11028:
    ctx->pc = 0x80D11028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11028: psq_l   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D11028u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80D11028u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1102C:
    ctx->pc = 0x80D1102Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1102Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D1102C: lfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D1102Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11030:
    ctx->pc = 0x80D11030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11030: psq_l   f26, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D11030u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x80D11030u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11034:
    ctx->pc = 0x80D11034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11034: lfd     f26, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D11034u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11038:
    ctx->pc = 0x80D11038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11038u)) return;
    // 80D11038: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80D1103C:
    ctx->pc = 0x80D1103Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1103Cu)) return;
    // 80D1103C: bl      0x80006E14
    {
            ctx->lr = 0x80D11040u;
            ctx->pc = 0x80006E14u;
            return;
    }

label_80D11040:
    ctx->pc = 0x80D11040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11040: lwz     r0, 148(r1)
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
label_80D11044:
    ctx->pc = 0x80D11044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11044: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11048:
    ctx->pc = 0x80D11048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11048u)) return;
    // 80D11048: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_80D1104C:
    ctx->pc = 0x80D1104Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1104Cu)) return;
    // 80D1104C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11050:
    ctx->pc = 0x80D11050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D11050: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D11054:
    ctx->pc = 0x80D11054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11054u)) return;
    // 80D11054: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D11058:
    ctx->pc = 0x80D11058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11058u)) return;
    // 80D11058: addi    r3, r3, -2304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2304);

label_80D1105C:
    ctx->pc = 0x80D1105Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1105Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D1105C: lwzx    r3, r3, r0
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
label_80D11060:
    ctx->pc = 0x80D11060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11060: lwz     r3, 32(r3)
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
label_80D11064:
    ctx->pc = 0x80D11064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11064: lwz     r3, 16(r3)
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
label_80D11068:
    ctx->pc = 0x80D11068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11068u)) return;
    // 80D11068: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80D1106C:
    ctx->pc = 0x80D1106Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1106Cu)) return;
    // 80D1106C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80D11070:
    ctx->pc = 0x80D11070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11070: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11074:
    ctx->pc = 0x80D11074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11074u)) return;
    // 80D11074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11078:
    ctx->pc = 0x80D11078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D11078: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D1107C:
    ctx->pc = 0x80D1107Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1107Cu)) return;
    // 80D1107C: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D11080:
    ctx->pc = 0x80D11080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11080u)) return;
    // 80D11080: addi    r3, r3, -2304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2304);

label_80D11084:
    ctx->pc = 0x80D11084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D11084: lwzx    r3, r3, r0
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
label_80D11088:
    ctx->pc = 0x80D11088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D11088: lwz     r6, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1108C:
    ctx->pc = 0x80D1108Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1108Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D1108C: lwz     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11090:
    ctx->pc = 0x80D11090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D11090: stw     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11094:
    ctx->pc = 0x80D11094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11094: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D11094u)) return;
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
label_80D11098:
    ctx->pc = 0x80D11098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11098: stw     r5, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1109C:
    ctx->pc = 0x80D1109Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1109Cu)) return;
    // 80D1109C: lis     r3, -27346
    ctx->gpr[3] = ((u32)(s32)(-27346) << 16);

label_80D110A0:
    ctx->pc = 0x80D110A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110A0u)) return;
    // 80D110A0: addi    r3, r3, 9920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9920);

label_80D110A4:
    ctx->pc = 0x80D110A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D110A4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D110A4u)) return;
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
label_80D110A8:
    ctx->pc = 0x80D110A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D110A8: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D110A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D110AC:
    ctx->pc = 0x80D110ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110ACu)) return;
    // 80D110AC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D110B0:
    ctx->pc = 0x80D110B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D110B0: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D110B4:
    ctx->pc = 0x80D110B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110B4u)) return;
    // 80D110B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D110B8:
    ctx->pc = 0x80D110B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D110B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D110B8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D110BC:
    ctx->pc = 0x80D110BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110BCu)) return;
    // 80D110BC: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D110C0:
    ctx->pc = 0x80D110C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110C0u)) return;
    // 80D110C0: addi    r3, r3, -2304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2304);

label_80D110C4:
    ctx->pc = 0x80D110C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D110C4: lwzx    r3, r3, r0
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
label_80D110C8:
    ctx->pc = 0x80D110C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D110C8: lwz     r3, 32(r3)
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
label_80D110CC:
    ctx->pc = 0x80D110CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D110CC: lwz     r4, 16(r3)
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
label_80D110D0:
    ctx->pc = 0x80D110D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110D0u)) return;
    // 80D110D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D110D4:
    ctx->pc = 0x80D110D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D110D4: stb     r0, 0(r3)
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
label_80D110D8:
    ctx->pc = 0x80D110D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110D8u)) return;
    // 80D110D8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80D110DC:
    ctx->pc = 0x80D110DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D110DC: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D110E0:
    ctx->pc = 0x80D110E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110E0u)) return;
    // 80D110E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D110E4:
    ctx->pc = 0x80D110E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D110E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D110E4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D110E8:
    ctx->pc = 0x80D110E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110E8u)) return;
    // 80D110E8: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D110EC:
    ctx->pc = 0x80D110ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110ECu)) return;
    // 80D110EC: addi    r3, r3, -2304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2304);

label_80D110F0:
    ctx->pc = 0x80D110F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D110F0: lwzx    r3, r3, r0
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
label_80D110F4:
    ctx->pc = 0x80D110F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110F4u)) return;
    // 80D110F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D110F8:
    ctx->pc = 0x80D110F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D110F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D110F8: stwu     r1, -16(r1)
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
label_80D110FC:
    ctx->pc = 0x80D110FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D110FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D110FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11100:
    ctx->pc = 0x80D11100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11100: stw     r0, 20(r1)
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
label_80D11104:
    ctx->pc = 0x80D11104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11104: stw     r31, 12(r1)
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
label_80D11108:
    ctx->pc = 0x80D11108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11108: stw     r30, 8(r1)
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
label_80D1110C:
    ctx->pc = 0x80D1110Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1110Cu)) return;
    // 80D1110C: rlwinm r30, r3, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D11110:
    ctx->pc = 0x80D11110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11110u)) return;
    // 80D11110: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D11114:
    ctx->pc = 0x80D11114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11114u)) return;
    // 80D11114: addi    r31, r3, -2304
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-2304);

label_80D11118:
    ctx->pc = 0x80D11118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11118: lwzx    r3, r31, r30
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
label_80D1111C:
    ctx->pc = 0x80D1111Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1111Cu)) return;
    // 80D1111C: cmplwi  r3, 0x0000
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

label_80D11120:
    ctx->pc = 0x80D11120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11120u)) return;
    // 80D11120: bc    12, 2, 0x80D11130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11130;
        }
    }

label_80D11124:
    ctx->pc = 0x80D11124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11124: bl      0x8050F9E0
    {
            ctx->lr = 0x80D11128u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D11128:
    ctx->pc = 0x80D11128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11128: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D1112C:
    ctx->pc = 0x80D1112Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1112Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D1112C: stwx    r0, r31, r30
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
label_80D11130:
    ctx->pc = 0x80D11130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11130: lwz     r31, 12(r1)
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
label_80D11134:
    ctx->pc = 0x80D11134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11134: lwz     r30, 8(r1)
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
label_80D11138:
    ctx->pc = 0x80D11138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11138: lwz     r0, 20(r1)
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
label_80D1113C:
    ctx->pc = 0x80D1113Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D1113Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1113C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11140:
    ctx->pc = 0x80D11140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11140u)) return;
    // 80D11140: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11144:
    ctx->pc = 0x80D11144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11144u)) return;
    // 80D11144: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11148:
    ctx->pc = 0x80D11148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D11148: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D1114C:
    ctx->pc = 0x80D1114Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1114Cu)) return;
    // 80D1114C: addi    r0, r4, 4464
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4464);

label_80D11150:
    ctx->pc = 0x80D11150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11150: stw     r0, 16(r3)
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
label_80D11154:
    ctx->pc = 0x80D11154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11154u)) return;
    // 80D11154: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D11158:
    ctx->pc = 0x80D11158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11158u)) return;
    // 80D11158: addi    r0, r4, 4712
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4712);

label_80D1115C:
    ctx->pc = 0x80D1115Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1115Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D1115C: stw     r0, 20(r3)
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
label_80D11160:
    ctx->pc = 0x80D11160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11160u)) return;
    // 80D11160: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D11164:
    ctx->pc = 0x80D11164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11164u)) return;
    // 80D11164: addi    r0, r4, 4968
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4968);

label_80D11168:
    ctx->pc = 0x80D11168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11168: stw     r0, 24(r3)
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
label_80D1116C:
    ctx->pc = 0x80D1116Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1116Cu)) return;
    // 80D1116C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11170:
    ctx->pc = 0x80D11170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D11170: stwu     r1, -32(r1)
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
label_80D11174:
    ctx->pc = 0x80D11174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D11174: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11178:
    ctx->pc = 0x80D11178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11178: stw     r0, 36(r1)
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
label_80D1117C:
    ctx->pc = 0x80D1117Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1117Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1117C: stw     r31, 28(r1)
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
label_80D11180:
    ctx->pc = 0x80D11180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11180u)) return;
    // 80D11180: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D11184:
    ctx->pc = 0x80D11184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11184: lwz     r3, 32(r31)
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
label_80D11188:
    ctx->pc = 0x80D11188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11188: lwz     r4, 16(r3)
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
label_80D1118C:
    ctx->pc = 0x80D1118Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1118Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D1118C: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11190:
    ctx->pc = 0x80D11190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11190u)) return;
    // 80D11190: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80D11194:
    ctx->pc = 0x80D11194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11194u)) return;
    // 80D11194: cmpwi   r0, 1
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

label_80D11198:
    ctx->pc = 0x80D11198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11198u)) return;
    // 80D11198: bc    12, 2, 0x80D111A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D111A8;
        }
    }

label_80D1119C:
    ctx->pc = 0x80D1119Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1119Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D1119C: bc    4, 0, 0x80D11238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11238;
        }
    }

label_80D111A0:
    ctx->pc = 0x80D111A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D111A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D111A0: cmpwi   r0, 0
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

label_80D111A4:
    ctx->pc = 0x80D111A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111A4u)) return;
    // 80D111A4: b       0x80D11238
    {
            goto label_80D11238;
    }

label_80D111A8:
    ctx->pc = 0x80D111A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D111A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D111A8: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D111A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D111AC:
    ctx->pc = 0x80D111ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D111AC: lfs     f0, 52(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D111ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
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
label_80D111B0:
    ctx->pc = 0x80D111B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111B0u)) return;
    // 80D111B0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D111B0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D111B4:
    ctx->pc = 0x80D111B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D111B4: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D111B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D111B8:
    ctx->pc = 0x80D111B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D111B8: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D111B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
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
label_80D111BC:
    ctx->pc = 0x80D111BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D111BC: lwz     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D111C0:
    ctx->pc = 0x80D111C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111C0u)) return;
    // 80D111C0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D111C4:
    ctx->pc = 0x80D111C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111C4u)) return;
    // 80D111C4: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D111C8:
    ctx->pc = 0x80D111C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D111C8: lwz     r4, 4(r4)
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
label_80D111CC:
    ctx->pc = 0x80D111CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D111CC: lwz     r4, 4(r4)
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
label_80D111D0:
    ctx->pc = 0x80D111D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D111D0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D111D4:
    ctx->pc = 0x80D111D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111D4u)) return;
    // 80D111D4: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D111D8:
    ctx->pc = 0x80D111D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111D8u)) return;
    // 80D111D8: addi    r4, r4, 9928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9928);

label_80D111DC:
    ctx->pc = 0x80D111DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D111DC: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D111DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D111E0:
    ctx->pc = 0x80D111E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D111E0: stw     r0, 12(r1)
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
label_80D111E4:
    ctx->pc = 0x80D111E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111E4u)) return;
    // 80D111E4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80D111E8:
    ctx->pc = 0x80D111E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D111E8: stw     r0, 8(r1)
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
label_80D111EC:
    ctx->pc = 0x80D111ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D111EC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D111ECu)) return;
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
label_80D111F0:
    ctx->pc = 0x80D111F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111F0u)) return;
    // 80D111F0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D111F0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80D111F4:
    ctx->pc = 0x80D111F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111F4u)) return;
    // 80D111F4: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D111F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80D111F8:
    ctx->pc = 0x80D111F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111F8u)) return;
    // 80D111F8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D111FC:
    ctx->pc = 0x80D111FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D111FCu)) return;
    // 80D111FC: bc    4, 2, 0x80D11238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11238;
        }
    }

label_80D11200:
    ctx->pc = 0x80D11200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D11200: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D11204:
    ctx->pc = 0x80D11204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11204u)) return;
    // 80D11204: addi    r4, r4, 9920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9920);

label_80D11208:
    ctx->pc = 0x80D11208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11208: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D11208u)) return;
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
label_80D1120C:
    ctx->pc = 0x80D1120Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1120Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D1120C: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D1120Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11210:
    ctx->pc = 0x80D11210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11210: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11214:
    ctx->pc = 0x80D11214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11214u)) return;
    // 80D11214: cmpwi   r4, 0
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

label_80D11218:
    ctx->pc = 0x80D11218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11218u)) return;
    // 80D11218: bc    12, 0, 0x80D11238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11238;
        }
    }

label_80D1121C:
    ctx->pc = 0x80D1121Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1121Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D1121C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80D11220:
    ctx->pc = 0x80D11220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11220: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11224:
    ctx->pc = 0x80D11224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11224: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11228:
    ctx->pc = 0x80D11228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11228u)) return;
    // 80D11228: cmpwi   r0, 0
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

label_80D1122C:
    ctx->pc = 0x80D1122Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1122Cu)) return;
    // 80D1122C: bc    4, 2, 0x80D11238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11238;
        }
    }

label_80D11230:
    ctx->pc = 0x80D11230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11230: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D11234:
    ctx->pc = 0x80D11234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D11234: stb     r0, 0(r3)
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
label_80D11238:
    ctx->pc = 0x80D11238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11238: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1123C:
    ctx->pc = 0x80D1123Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1123Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1123C: lwz     r0, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11240:
    ctx->pc = 0x80D11240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11240u)) return;
    // 80D11240: cmplwi  r0, 0x0000
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

label_80D11244:
    ctx->pc = 0x80D11244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11244u)) return;
    // 80D11244: bc    12, 2, 0x80D1124C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D1124C;
        }
    }

label_80D11248:
    ctx->pc = 0x80D11248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11248: bl      0x80461320
    {
            ctx->lr = 0x80D1124Cu;
            ctx->pc = 0x80461320u;
            return;
    }

label_80D1124C:
    ctx->pc = 0x80D1124Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1124Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1124C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D11250:
    ctx->pc = 0x80D11250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11250u)) return;
    // 80D11250: bl      0x80D11268
    {
            ctx->lr = 0x80D11254u;
            goto label_80D11268;
    }

label_80D11254:
    ctx->pc = 0x80D11254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11254: lwz     r31, 28(r1)
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
label_80D11258:
    ctx->pc = 0x80D11258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11258: lwz     r0, 36(r1)
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
label_80D1125C:
    ctx->pc = 0x80D1125Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D1125Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1125C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11260:
    ctx->pc = 0x80D11260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11260u)) return;
    // 80D11260: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D11264:
    ctx->pc = 0x80D11264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11264u)) return;
    // 80D11264: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11268:
    ctx->pc = 0x80D11268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11268: stwu     r1, -16(r1)
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
label_80D1126C:
    ctx->pc = 0x80D1126Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1126Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1126C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11270:
    ctx->pc = 0x80D11270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11270: stw     r0, 20(r1)
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
label_80D11274:
    ctx->pc = 0x80D11274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11274: stw     r31, 12(r1)
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
label_80D11278:
    ctx->pc = 0x80D11278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11278: stw     r30, 8(r1)
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
label_80D1127C:
    ctx->pc = 0x80D1127Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1127Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D1127C: lwz     r31, 32(r3)
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
label_80D11280:
    ctx->pc = 0x80D11280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11280: lwz     r30, 16(r31)
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
label_80D11284:
    ctx->pc = 0x80D11284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11284: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11288:
    ctx->pc = 0x80D11288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11288u)) return;
    // 80D11288: bl      0x8060F594
    {
            ctx->lr = 0x80D1128Cu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D1128C:
    ctx->pc = 0x80D1128Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1128Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1128C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D11290:
    ctx->pc = 0x80D11290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11290u)) return;
    // 80D11290: bl      0x80612BEC
    {
            ctx->lr = 0x80D11294u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80D11294:
    ctx->pc = 0x80D11294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11294: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D11298:
    ctx->pc = 0x80D11298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11298u)) return;
    // 80D11298: bl      0x8004B49C
    {
            ctx->lr = 0x80D1129Cu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D1129C:
    ctx->pc = 0x80D1129Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1129Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D1129C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D112A0:
    ctx->pc = 0x80D112A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112A0u)) return;
    // 80D112A0: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80D112A4:
    ctx->pc = 0x80D112A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112A4u)) return;
    // 80D112A4: bl      0x8004AA9C
    {
            ctx->lr = 0x80D112A8u;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80D112A8:
    ctx->pc = 0x80D112A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D112A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D112A8: lwz     r0, 28(r31)
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
label_80D112AC:
    ctx->pc = 0x80D112ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112ACu)) return;
    // 80D112AC: cmpwi   r0, 0
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

label_80D112B0:
    ctx->pc = 0x80D112B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112B0u)) return;
    // 80D112B0: bc    12, 2, 0x80D112C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D112C0;
        }
    }

label_80D112B4:
    ctx->pc = 0x80D112B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D112B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D112B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D112B8:
    ctx->pc = 0x80D112B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112B8u)) return;
    // 80D112B8: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D112BC:
    ctx->pc = 0x80D112BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112BCu)) return;
    // 80D112BC: bl      0x8004AFDC
    {
            ctx->lr = 0x80D112C0u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80D112C0:
    ctx->pc = 0x80D112C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D112C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D112C0: lwz     r0, 20(r31)
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
label_80D112C4:
    ctx->pc = 0x80D112C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112C4u)) return;
    // 80D112C4: cmpwi   r0, 0
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

label_80D112C8:
    ctx->pc = 0x80D112C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112C8u)) return;
    // 80D112C8: bc    12, 2, 0x80D112D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D112D8;
        }
    }

label_80D112CC:
    ctx->pc = 0x80D112CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D112CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D112CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D112D0:
    ctx->pc = 0x80D112D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112D0u)) return;
    // 80D112D0: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D112D4:
    ctx->pc = 0x80D112D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112D4u)) return;
    // 80D112D4: bl      0x8004B3E0
    {
            ctx->lr = 0x80D112D8u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80D112D8:
    ctx->pc = 0x80D112D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D112D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D112D8: lwz     r0, 24(r31)
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
label_80D112DC:
    ctx->pc = 0x80D112DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112DCu)) return;
    // 80D112DC: cmpwi   r0, 0
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

label_80D112E0:
    ctx->pc = 0x80D112E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112E0u)) return;
    // 80D112E0: bc    12, 2, 0x80D112F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D112F0;
        }
    }

label_80D112E4:
    ctx->pc = 0x80D112E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D112E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D112E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D112E8:
    ctx->pc = 0x80D112E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112E8u)) return;
    // 80D112E8: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D112EC:
    ctx->pc = 0x80D112ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112ECu)) return;
    // 80D112EC: bl      0x8004AF5C
    {
            ctx->lr = 0x80D112F0u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80D112F0:
    ctx->pc = 0x80D112F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D112F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D112F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D112F4:
    ctx->pc = 0x80D112F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112F4u)) return;
    // 80D112F4: addi    r4, r31, 44
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(44);

label_80D112F8:
    ctx->pc = 0x80D112F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D112F8u)) return;
    // 80D112F8: bl      0x8004A8F8
    {
            ctx->lr = 0x80D112FCu;
            ctx->pc = 0x8004A8F8u;
            return;
    }

label_80D112FC:
    ctx->pc = 0x80D112FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D112FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D112FC: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11300:
    ctx->pc = 0x80D11300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11300u)) return;
    // 80D11300: cmpwi   r0, 0
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

label_80D11304:
    ctx->pc = 0x80D11304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11304u)) return;
    // 80D11304: bc    12, 0, 0x80D11330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11330;
        }
    }

label_80D11308:
    ctx->pc = 0x80D11308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11308: addi    r3, r31, 44
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(44);

label_80D1130C:
    ctx->pc = 0x80D1130Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1130Cu)) return;
    // 80D1130C: bl      0x80D115C0
    {
            ctx->lr = 0x80D11310u;
            goto label_80D115C0;
    }

label_80D11310:
    ctx->pc = 0x80D11310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D11310: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D11310u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D11314:
    ctx->pc = 0x80D11314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11314: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11318:
    ctx->pc = 0x80D11318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11318u)) return;
    // 80D11318: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D1131C:
    ctx->pc = 0x80D1131Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1131Cu)) return;
    // 80D1131C: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80D11320:
    ctx->pc = 0x80D11320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11320: lwz     r3, 4(r3)
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
label_80D11324:
    ctx->pc = 0x80D11324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11324: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D11324u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11328:
    ctx->pc = 0x80D11328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11328u)) return;
    // 80D11328: bl      0x805FC188
    {
            ctx->lr = 0x80D1132Cu;
            ctx->pc = 0x805FC188u;
            return;
    }

label_80D1132C:
    ctx->pc = 0x80D1132Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1132Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D1132C: b       0x80D11340
    {
            goto label_80D11340;
    }

label_80D11330:
    ctx->pc = 0x80D11330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11330: addi    r3, r31, 44
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(44);

label_80D11334:
    ctx->pc = 0x80D11334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11334u)) return;
    // 80D11334: bl      0x80D115C0
    {
            ctx->lr = 0x80D11338u;
            goto label_80D115C0;
    }

label_80D11338:
    ctx->pc = 0x80D11338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11338: lwz     r3, 0(r30)
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
label_80D1133C:
    ctx->pc = 0x80D1133Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1133Cu)) return;
    // 80D1133C: bl      0x8060DB00
    {
            ctx->lr = 0x80D11340u;
            ctx->pc = 0x8060DB00u;
            return;
    }

label_80D11340:
    ctx->pc = 0x80D11340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11340: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D11344:
    ctx->pc = 0x80D11344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11344u)) return;
    // 80D11344: bl      0x8004B504
    {
            ctx->lr = 0x80D11348u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D11348:
    ctx->pc = 0x80D11348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11348: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D1134C:
    ctx->pc = 0x80D1134Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1134Cu)) return;
    // 80D1134C: bl      0x80612BEC
    {
            ctx->lr = 0x80D11350u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80D11350:
    ctx->pc = 0x80D11350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11350: lwz     r31, 12(r1)
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
label_80D11354:
    ctx->pc = 0x80D11354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11354: lwz     r30, 8(r1)
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
label_80D11358:
    ctx->pc = 0x80D11358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11358: lwz     r0, 20(r1)
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
label_80D1135C:
    ctx->pc = 0x80D1135Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D1135Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1135C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11360:
    ctx->pc = 0x80D11360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11360u)) return;
    // 80D11360: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11364:
    ctx->pc = 0x80D11364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11364u)) return;
    // 80D11364: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11368:
    ctx->pc = 0x80D11368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11368: stwu     r1, -16(r1)
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
label_80D1136C:
    ctx->pc = 0x80D1136Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1136Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D1136C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11370:
    ctx->pc = 0x80D11370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11370: stw     r0, 20(r1)
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
label_80D11374:
    ctx->pc = 0x80D11374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11374: lwz     r3, 32(r3)
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
label_80D11378:
    ctx->pc = 0x80D11378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11378: lwz     r3, 16(r3)
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
label_80D1137C:
    ctx->pc = 0x80D1137Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1137Cu)) return;
    // 80D1137C: cmplwi  r3, 0x0000
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

label_80D11380:
    ctx->pc = 0x80D11380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11380u)) return;
    // 80D11380: bc    12, 2, 0x80D11388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11388;
        }
    }

label_80D11384:
    ctx->pc = 0x80D11384u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11384u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11384: bl      0x8050ED40
    {
            ctx->lr = 0x80D11388u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D11388:
    ctx->pc = 0x80D11388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11388: lwz     r0, 20(r1)
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
label_80D1138C:
    ctx->pc = 0x80D1138Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D1138Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1138C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11390:
    ctx->pc = 0x80D11390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11390u)) return;
    // 80D11390: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11394:
    ctx->pc = 0x80D11394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11394u)) return;
    // 80D11394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11398:
    ctx->pc = 0x80D11398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D11398: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D1139C:
    ctx->pc = 0x80D1139Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1139Cu)) return;
    // 80D1139C: addi    r0, r4, 5056
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5056);

label_80D113A0:
    ctx->pc = 0x80D113A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D113A0: stw     r0, 16(r3)
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
label_80D113A4:
    ctx->pc = 0x80D113A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113A4u)) return;
    // 80D113A4: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D113A8:
    ctx->pc = 0x80D113A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113A8u)) return;
    // 80D113A8: addi    r0, r4, 5304
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5304);

label_80D113AC:
    ctx->pc = 0x80D113ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D113AC: stw     r0, 20(r3)
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
label_80D113B0:
    ctx->pc = 0x80D113B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113B0u)) return;
    // 80D113B0: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D113B4:
    ctx->pc = 0x80D113B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113B4u)) return;
    // 80D113B4: addi    r0, r4, 4968
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4968);

label_80D113B8:
    ctx->pc = 0x80D113B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D113B8: stw     r0, 24(r3)
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
label_80D113BC:
    ctx->pc = 0x80D113BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113BCu)) return;
    // 80D113BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D113C0:
    ctx->pc = 0x80D113C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D113C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D113C0: stwu     r1, -32(r1)
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
label_80D113C4:
    ctx->pc = 0x80D113C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D113C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D113C8:
    ctx->pc = 0x80D113C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D113C8: stw     r0, 36(r1)
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
label_80D113CC:
    ctx->pc = 0x80D113CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D113CC: stw     r31, 28(r1)
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
label_80D113D0:
    ctx->pc = 0x80D113D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113D0u)) return;
    // 80D113D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D113D4:
    ctx->pc = 0x80D113D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D113D4: lwz     r3, 32(r31)
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
label_80D113D8:
    ctx->pc = 0x80D113D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D113D8: lwz     r4, 16(r3)
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
label_80D113DC:
    ctx->pc = 0x80D113DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D113DC: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D113E0:
    ctx->pc = 0x80D113E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113E0u)) return;
    // 80D113E0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80D113E4:
    ctx->pc = 0x80D113E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113E4u)) return;
    // 80D113E4: cmpwi   r0, 1
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

label_80D113E8:
    ctx->pc = 0x80D113E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113E8u)) return;
    // 80D113E8: bc    12, 2, 0x80D113F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D113F8;
        }
    }

label_80D113EC:
    ctx->pc = 0x80D113ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D113ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D113EC: bc    4, 0, 0x80D11488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11488;
        }
    }

label_80D113F0:
    ctx->pc = 0x80D113F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D113F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D113F0: cmpwi   r0, 0
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

label_80D113F4:
    ctx->pc = 0x80D113F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113F4u)) return;
    // 80D113F4: b       0x80D11488
    {
            goto label_80D11488;
    }

label_80D113F8:
    ctx->pc = 0x80D113F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D113F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D113F8: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D113F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D113FC:
    ctx->pc = 0x80D113FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D113FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D113FC: lfs     f0, 52(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D113FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
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
label_80D11400:
    ctx->pc = 0x80D11400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11400u)) return;
    // 80D11400: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D11400u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80D11404:
    ctx->pc = 0x80D11404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D11404: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D11404u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11408:
    ctx->pc = 0x80D11408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D11408: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D11408u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
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
label_80D1140C:
    ctx->pc = 0x80D1140Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1140Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D1140C: lwz     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11410:
    ctx->pc = 0x80D11410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11410u)) return;
    // 80D11410: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D11414:
    ctx->pc = 0x80D11414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11414u)) return;
    // 80D11414: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D11418:
    ctx->pc = 0x80D11418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D11418: lwz     r4, 4(r4)
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
label_80D1141C:
    ctx->pc = 0x80D1141Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1141Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D1141C: lwz     r4, 4(r4)
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
label_80D11420:
    ctx->pc = 0x80D11420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D11420: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11424:
    ctx->pc = 0x80D11424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11424u)) return;
    // 80D11424: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D11428:
    ctx->pc = 0x80D11428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11428u)) return;
    // 80D11428: addi    r4, r4, 9928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9928);

label_80D1142C:
    ctx->pc = 0x80D1142Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1142Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D1142C: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D1142Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11430:
    ctx->pc = 0x80D11430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11430: stw     r0, 12(r1)
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
label_80D11434:
    ctx->pc = 0x80D11434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11434u)) return;
    // 80D11434: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80D11438:
    ctx->pc = 0x80D11438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11438: stw     r0, 8(r1)
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
label_80D1143C:
    ctx->pc = 0x80D1143Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1143Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D1143C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D1143Cu)) return;
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
label_80D11440:
    ctx->pc = 0x80D11440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11440u)) return;
    // 80D11440: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D11440u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80D11444:
    ctx->pc = 0x80D11444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11444u)) return;
    // 80D11444: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D11444u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80D11448:
    ctx->pc = 0x80D11448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11448u)) return;
    // 80D11448: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D1144C:
    ctx->pc = 0x80D1144Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1144Cu)) return;
    // 80D1144C: bc    4, 2, 0x80D11488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11488;
        }
    }

label_80D11450:
    ctx->pc = 0x80D11450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D11450: lis     r4, -27346
    ctx->gpr[4] = ((u32)(s32)(-27346) << 16);

label_80D11454:
    ctx->pc = 0x80D11454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11454u)) return;
    // 80D11454: addi    r4, r4, 9920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9920);

label_80D11458:
    ctx->pc = 0x80D11458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11458: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D11458u)) return;
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
label_80D1145C:
    ctx->pc = 0x80D1145Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1145Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D1145C: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D1145Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11460:
    ctx->pc = 0x80D11460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11460: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11464:
    ctx->pc = 0x80D11464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11464u)) return;
    // 80D11464: cmpwi   r4, 0
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

label_80D11468:
    ctx->pc = 0x80D11468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11468u)) return;
    // 80D11468: bc    12, 0, 0x80D11488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11488;
        }
    }

label_80D1146C:
    ctx->pc = 0x80D1146Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1146Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D1146C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80D11470:
    ctx->pc = 0x80D11470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11470: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11474:
    ctx->pc = 0x80D11474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11474: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11478:
    ctx->pc = 0x80D11478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11478u)) return;
    // 80D11478: cmpwi   r0, 0
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

label_80D1147C:
    ctx->pc = 0x80D1147Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1147Cu)) return;
    // 80D1147C: bc    4, 2, 0x80D11488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11488;
        }
    }

label_80D11480:
    ctx->pc = 0x80D11480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11480: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D11484:
    ctx->pc = 0x80D11484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D11484: stb     r0, 0(r3)
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
label_80D11488:
    ctx->pc = 0x80D11488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11488: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1148C:
    ctx->pc = 0x80D1148Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1148Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1148C: lwz     r0, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11490:
    ctx->pc = 0x80D11490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11490u)) return;
    // 80D11490: cmplwi  r0, 0x0000
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

label_80D11494:
    ctx->pc = 0x80D11494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11494u)) return;
    // 80D11494: bc    12, 2, 0x80D1149C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D1149C;
        }
    }

label_80D11498:
    ctx->pc = 0x80D11498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11498: bl      0x80461320
    {
            ctx->lr = 0x80D1149Cu;
            ctx->pc = 0x80461320u;
            return;
    }

label_80D1149C:
    ctx->pc = 0x80D1149Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1149Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D1149C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D114A0:
    ctx->pc = 0x80D114A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114A0u)) return;
    // 80D114A0: bl      0x80D114B8
    {
            ctx->lr = 0x80D114A4u;
            goto label_80D114B8;
    }

label_80D114A4:
    ctx->pc = 0x80D114A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D114A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D114A4: lwz     r31, 28(r1)
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
label_80D114A8:
    ctx->pc = 0x80D114A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D114A8: lwz     r0, 36(r1)
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
label_80D114AC:
    ctx->pc = 0x80D114ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D114ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D114AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D114B0:
    ctx->pc = 0x80D114B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114B0u)) return;
    // 80D114B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D114B4:
    ctx->pc = 0x80D114B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114B4u)) return;
    // 80D114B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D114B8:
    ctx->pc = 0x80D114B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D114B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D114B8: stwu     r1, -16(r1)
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
label_80D114BC:
    ctx->pc = 0x80D114BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D114BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D114C0:
    ctx->pc = 0x80D114C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D114C0: stw     r0, 20(r1)
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
label_80D114C4:
    ctx->pc = 0x80D114C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D114C4: stw     r31, 12(r1)
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
label_80D114C8:
    ctx->pc = 0x80D114C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D114C8: stw     r30, 8(r1)
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
label_80D114CC:
    ctx->pc = 0x80D114CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D114CC: lwz     r31, 32(r3)
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
label_80D114D0:
    ctx->pc = 0x80D114D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D114D0: lwz     r30, 16(r31)
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
label_80D114D4:
    ctx->pc = 0x80D114D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D114D4: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D114D8:
    ctx->pc = 0x80D114D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114D8u)) return;
    // 80D114D8: bl      0x8060F594
    {
            ctx->lr = 0x80D114DCu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D114DC:
    ctx->pc = 0x80D114DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D114DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D114DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D114E0:
    ctx->pc = 0x80D114E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114E0u)) return;
    // 80D114E0: bl      0x80612BEC
    {
            ctx->lr = 0x80D114E4u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80D114E4:
    ctx->pc = 0x80D114E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D114E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D114E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D114E8:
    ctx->pc = 0x80D114E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114E8u)) return;
    // 80D114E8: bl      0x8004B49C
    {
            ctx->lr = 0x80D114ECu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D114EC:
    ctx->pc = 0x80D114ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D114ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D114EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D114F0:
    ctx->pc = 0x80D114F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114F0u)) return;
    // 80D114F0: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80D114F4:
    ctx->pc = 0x80D114F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114F4u)) return;
    // 80D114F4: bl      0x8004AA9C
    {
            ctx->lr = 0x80D114F8u;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80D114F8:
    ctx->pc = 0x80D114F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D114F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D114F8: lwz     r0, 28(r31)
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
label_80D114FC:
    ctx->pc = 0x80D114FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D114FCu)) return;
    // 80D114FC: cmpwi   r0, 0
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

label_80D11500:
    ctx->pc = 0x80D11500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11500u)) return;
    // 80D11500: bc    12, 2, 0x80D11510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11510;
        }
    }

label_80D11504:
    ctx->pc = 0x80D11504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D11504: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D11508:
    ctx->pc = 0x80D11508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11508u)) return;
    // 80D11508: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D1150C:
    ctx->pc = 0x80D1150Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1150Cu)) return;
    // 80D1150C: bl      0x8004AFDC
    {
            ctx->lr = 0x80D11510u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80D11510:
    ctx->pc = 0x80D11510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11510: lwz     r0, 20(r31)
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
label_80D11514:
    ctx->pc = 0x80D11514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11514u)) return;
    // 80D11514: cmpwi   r0, 0
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

label_80D11518:
    ctx->pc = 0x80D11518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11518u)) return;
    // 80D11518: bc    12, 2, 0x80D11528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11528;
        }
    }

label_80D1151C:
    ctx->pc = 0x80D1151Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1151Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D1151C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D11520:
    ctx->pc = 0x80D11520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11520u)) return;
    // 80D11520: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D11524:
    ctx->pc = 0x80D11524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11524u)) return;
    // 80D11524: bl      0x8004B3E0
    {
            ctx->lr = 0x80D11528u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80D11528:
    ctx->pc = 0x80D11528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11528: lwz     r0, 24(r31)
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
label_80D1152C:
    ctx->pc = 0x80D1152Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1152Cu)) return;
    // 80D1152C: cmpwi   r0, 0
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

label_80D11530:
    ctx->pc = 0x80D11530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11530u)) return;
    // 80D11530: bc    12, 2, 0x80D11540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11540;
        }
    }

label_80D11534:
    ctx->pc = 0x80D11534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D11534: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D11538:
    ctx->pc = 0x80D11538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11538u)) return;
    // 80D11538: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80D1153C:
    ctx->pc = 0x80D1153Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1153Cu)) return;
    // 80D1153C: bl      0x8004AF5C
    {
            ctx->lr = 0x80D11540u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80D11540:
    ctx->pc = 0x80D11540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D11540: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D11544:
    ctx->pc = 0x80D11544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11544u)) return;
    // 80D11544: addi    r4, r31, 44
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(44);

label_80D11548:
    ctx->pc = 0x80D11548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11548u)) return;
    // 80D11548: bl      0x8004A8F8
    {
            ctx->lr = 0x80D1154Cu;
            ctx->pc = 0x8004A8F8u;
            return;
    }

label_80D1154C:
    ctx->pc = 0x80D1154Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1154Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1154C: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11550:
    ctx->pc = 0x80D11550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11550u)) return;
    // 80D11550: cmpwi   r0, 0
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

label_80D11554:
    ctx->pc = 0x80D11554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11554u)) return;
    // 80D11554: bc    12, 0, 0x80D11584
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11584;
        }
    }

label_80D11558:
    ctx->pc = 0x80D11558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11558: addi    r3, r31, 44
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(44);

label_80D1155C:
    ctx->pc = 0x80D1155Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1155Cu)) return;
    // 80D1155C: bl      0x80D115C0
    {
            ctx->lr = 0x80D11560u;
            goto label_80D115C0;
    }

label_80D11560:
    ctx->pc = 0x80D11560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D11560: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D11560u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D11564:
    ctx->pc = 0x80D11564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11564: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11568:
    ctx->pc = 0x80D11568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11568u)) return;
    // 80D11568: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D1156C:
    ctx->pc = 0x80D1156Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1156Cu)) return;
    // 80D1156C: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80D11570:
    ctx->pc = 0x80D11570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11570: lwz     r3, 4(r3)
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
label_80D11574:
    ctx->pc = 0x80D11574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11574: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D11574u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11578:
    ctx->pc = 0x80D11578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11578u)) return;
    // 80D11578: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D1157C:
    ctx->pc = 0x80D1157Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1157Cu)) return;
    // 80D1157C: bl      0x805FC130
    {
            ctx->lr = 0x80D11580u;
            ctx->pc = 0x805FC130u;
            return;
    }

label_80D11580:
    ctx->pc = 0x80D11580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11580: b       0x80D11598
    {
            goto label_80D11598;
    }

label_80D11584:
    ctx->pc = 0x80D11584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11584: addi    r3, r31, 44
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(44);

label_80D11588:
    ctx->pc = 0x80D11588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11588u)) return;
    // 80D11588: bl      0x80D115C0
    {
            ctx->lr = 0x80D1158Cu;
            goto label_80D115C0;
    }

label_80D1158C:
    ctx->pc = 0x80D1158Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1158Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1158C: lwz     r3, 0(r30)
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
label_80D11590:
    ctx->pc = 0x80D11590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11590u)) return;
    // 80D11590: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D11594:
    ctx->pc = 0x80D11594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11594u)) return;
    // 80D11594: bl      0x806057CC
    {
            ctx->lr = 0x80D11598u;
            ctx->pc = 0x806057CCu;
            return;
    }

label_80D11598:
    ctx->pc = 0x80D11598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11598: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D1159C:
    ctx->pc = 0x80D1159Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1159Cu)) return;
    // 80D1159C: bl      0x8004B504
    {
            ctx->lr = 0x80D115A0u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D115A0:
    ctx->pc = 0x80D115A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D115A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D115A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D115A4:
    ctx->pc = 0x80D115A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115A4u)) return;
    // 80D115A4: bl      0x80612BEC
    {
            ctx->lr = 0x80D115A8u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80D115A8:
    ctx->pc = 0x80D115A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D115A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D115A8: lwz     r31, 12(r1)
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
label_80D115AC:
    ctx->pc = 0x80D115ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D115AC: lwz     r30, 8(r1)
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
label_80D115B0:
    ctx->pc = 0x80D115B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D115B0: lwz     r0, 20(r1)
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
label_80D115B4:
    ctx->pc = 0x80D115B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D115B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D115B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D115B8:
    ctx->pc = 0x80D115B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115B8u)) return;
    // 80D115B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D115BC:
    ctx->pc = 0x80D115BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115BCu)) return;
    // 80D115BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D115C0:
    ctx->pc = 0x80D115C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D115C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D115C0: stwu     r1, -48(r1)
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
label_80D115C4:
    ctx->pc = 0x80D115C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D115C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D115C8:
    ctx->pc = 0x80D115C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D115C8: stw     r0, 52(r1)
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
label_80D115CC:
    ctx->pc = 0x80D115CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D115CC: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D115CCu)) return;
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
label_80D115D0:
    ctx->pc = 0x80D115D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D115D0: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D115D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D115D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D115D4:
    ctx->pc = 0x80D115D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D115D4: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D115D4u)) return;
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
label_80D115D8:
    ctx->pc = 0x80D115D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D115D8: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D115D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D115D8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D115DC:
    ctx->pc = 0x80D115DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D115DC: stw     r31, 12(r1)
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
label_80D115E0:
    ctx->pc = 0x80D115E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115E0u)) return;
    // 80D115E0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D115E4:
    ctx->pc = 0x80D115E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D115E4: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D115E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D115E8:
    ctx->pc = 0x80D115E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115E8u)) return;
    // 80D115E8: bl      0x80D11650
    {
            ctx->lr = 0x80D115ECu;
            goto label_80D11650;
    }

label_80D115EC:
    ctx->pc = 0x80D115ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D115ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D115EC: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80D115ECu)) return;
    ppc_frsp(ctx, 31, 1);

label_80D115F0:
    ctx->pc = 0x80D115F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D115F0: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D115F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D115F4:
    ctx->pc = 0x80D115F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115F4u)) return;
    // 80D115F4: bl      0x80D11650
    {
            ctx->lr = 0x80D115F8u;
            goto label_80D11650;
    }

label_80D115F8:
    ctx->pc = 0x80D115F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D115F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D115F8: frsp    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x80D115F8u)) return;
    ppc_frsp(ctx, 30, 1);

label_80D115FC:
    ctx->pc = 0x80D115FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D115FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D115FC: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D115FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11600:
    ctx->pc = 0x80D11600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11600u)) return;
    // 80D11600: bl      0x80D11650
    {
            ctx->lr = 0x80D11604u;
            goto label_80D11650;
    }

label_80D11604:
    ctx->pc = 0x80D11604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D11604: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80D11604u)) return;
    ppc_frsp(ctx, 1, 1);

label_80D11608:
    ctx->pc = 0x80D11608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11608u)) return;
    // 80D11608: fcmpo   cr0, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x80D11608u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[30], true);

label_80D1160C:
    ctx->pc = 0x80D1160Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1160Cu)) return;
    // 80D1160C: bc    4, 1, 0x80D11620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11620;
        }
    }

label_80D11610:
    ctx->pc = 0x80D11610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11610: fcmpo   cr0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80D11610u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[1], true);

label_80D11614:
    ctx->pc = 0x80D11614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11614u)) return;
    // 80D11614: bc    4, 1, 0x80D1162C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D1162C;
        }
    }

label_80D11618:
    ctx->pc = 0x80D11618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11618: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80D11618u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80D1161C:
    ctx->pc = 0x80D1161Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1161Cu)) return;
    // 80D1161C: b       0x80D1162C
    {
            goto label_80D1162C;
    }

label_80D11620:
    ctx->pc = 0x80D11620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11620: fcmpo   cr0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x80D11620u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[1], true);

label_80D11624:
    ctx->pc = 0x80D11624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11624u)) return;
    // 80D11624: bc    4, 1, 0x80D1162C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D1162C;
        }
    }

label_80D11628:
    ctx->pc = 0x80D11628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11628: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x80D11628u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_80D1162C:
    ctx->pc = 0x80D1162Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1162Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D1162C: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D1162Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D1162Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11630:
    ctx->pc = 0x80D11630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11630: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D11630u)) return;
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
label_80D11634:
    ctx->pc = 0x80D11634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11634: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D11634u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D11634u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11638:
    ctx->pc = 0x80D11638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11638: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D11638u)) return;
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
label_80D1163C:
    ctx->pc = 0x80D1163Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1163Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D1163C: lwz     r31, 12(r1)
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
label_80D11640:
    ctx->pc = 0x80D11640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11640: lwz     r0, 52(r1)
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
label_80D11644:
    ctx->pc = 0x80D11644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11644: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11648:
    ctx->pc = 0x80D11648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11648u)) return;
    // 80D11648: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80D1164C:
    ctx->pc = 0x80D1164Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1164Cu)) return;
    // 80D1164C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11650:
    ctx->pc = 0x80D11650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11650: fabs    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80D11650u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) & 0x7FFFFFFFFFFFFFFFull);

label_80D11654:
    ctx->pc = 0x80D11654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11654u)) return;
    // 80D11654: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11658:
    ctx->pc = 0x80D11658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11658: stwu     r1, -16(r1)
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
label_80D1165C:
    ctx->pc = 0x80D1165Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1165Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D1165C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11660:
    ctx->pc = 0x80D11660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11660: stw     r0, 20(r1)
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
label_80D11664:
    ctx->pc = 0x80D11664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11664: lwz     r3, 32(r3)
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
label_80D11668:
    ctx->pc = 0x80D11668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11668: lwz     r3, 16(r3)
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
label_80D1166C:
    ctx->pc = 0x80D1166Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1166Cu)) return;
    // 80D1166C: bl      0x80509CF0
    {
            ctx->lr = 0x80D11670u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80D11670:
    ctx->pc = 0x80D11670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11670: lwz     r0, 20(r1)
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
label_80D11674:
    ctx->pc = 0x80D11674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11674: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11678:
    ctx->pc = 0x80D11678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11678u)) return;
    // 80D11678: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D1167C:
    ctx->pc = 0x80D1167Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1167Cu)) return;
    // 80D1167C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11680:
    ctx->pc = 0x80D11680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D11680: stwu     r1, -32(r1)
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
label_80D11684:
    ctx->pc = 0x80D11684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D11684: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11688:
    ctx->pc = 0x80D11688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11688: stw     r0, 36(r1)
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
label_80D1168C:
    ctx->pc = 0x80D1168Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1168Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1168C: stw     r31, 28(r1)
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
label_80D11690:
    ctx->pc = 0x80D11690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11690: stw     r30, 24(r1)
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
label_80D11694:
    ctx->pc = 0x80D11694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11694: stw     r29, 20(r1)
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
label_80D11698:
    ctx->pc = 0x80D11698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11698: lwz     r31, 32(r3)
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
label_80D1169C:
    ctx->pc = 0x80D1169Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1169Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D1169C: lwz     r30, 16(r31)
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
label_80D116A0:
    ctx->pc = 0x80D116A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D116A0: lwz     r5, 28(r31)
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
label_80D116A4:
    ctx->pc = 0x80D116A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116A4u)) return;
    // 80D116A4: cmpwi   r5, 0
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

label_80D116A8:
    ctx->pc = 0x80D116A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116A8u)) return;
    // 80D116A8: bc    4, 1, 0x80D116E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D116E0;
        }
    }

label_80D116AC:
    ctx->pc = 0x80D116ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D116ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D116AC: lwz     r4, 24(r31)
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
label_80D116B0:
    ctx->pc = 0x80D116B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116B0u)) return;
    // 80D116B0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D116B4:
    ctx->pc = 0x80D116B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D116B4: lwz     r0, 20(r31)
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
label_80D116B8:
    ctx->pc = 0x80D116B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D116B8u)) return;
    // 80D116B8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D116BC:
    ctx->pc = 0x80D116BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116BCu)) return;
    // 80D116BC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D116C0:
    ctx->pc = 0x80D116C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D116C0u)) return;
    // 80D116C0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D116C4:
    ctx->pc = 0x80D116C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116C4u)) return;
    // 80D116C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D116C8:
    ctx->pc = 0x80D116C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116C8u)) return;
    // 80D116C8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D116CC:
    ctx->pc = 0x80D116CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116CCu)) return;
    // 80D116CC: bl      0x80509C74
    {
            ctx->lr = 0x80D116D0u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D116D0:
    ctx->pc = 0x80D116D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D116D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D116D0: stw     r29, 20(r31)
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
label_80D116D4:
    ctx->pc = 0x80D116D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D116D4: lwz     r3, 28(r31)
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
label_80D116D8:
    ctx->pc = 0x80D116D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116D8u)) return;
    // 80D116D8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D116DC:
    ctx->pc = 0x80D116DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D116DC: stw     r0, 28(r31)
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
label_80D116E0:
    ctx->pc = 0x80D116E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D116E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D116E0: lwz     r5, 40(r31)
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
label_80D116E4:
    ctx->pc = 0x80D116E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116E4u)) return;
    // 80D116E4: cmpwi   r5, 0
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

label_80D116E8:
    ctx->pc = 0x80D116E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116E8u)) return;
    // 80D116E8: bc    4, 1, 0x80D11720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11720;
        }
    }

label_80D116EC:
    ctx->pc = 0x80D116ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D116ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D116EC: lwz     r4, 36(r31)
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
label_80D116F0:
    ctx->pc = 0x80D116F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116F0u)) return;
    // 80D116F0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D116F4:
    ctx->pc = 0x80D116F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D116F4: lwz     r0, 32(r31)
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
label_80D116F8:
    ctx->pc = 0x80D116F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D116F8u)) return;
    // 80D116F8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D116FC:
    ctx->pc = 0x80D116FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D116FCu)) return;
    // 80D116FC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D11700:
    ctx->pc = 0x80D11700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D11700u)) return;
    // 80D11700: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D11704:
    ctx->pc = 0x80D11704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11704u)) return;
    // 80D11704: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D11708:
    ctx->pc = 0x80D11708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11708u)) return;
    // 80D11708: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D1170C:
    ctx->pc = 0x80D1170Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1170Cu)) return;
    // 80D1170C: bl      0x80509BF8
    {
            ctx->lr = 0x80D11710u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D11710:
    ctx->pc = 0x80D11710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11710: stw     r29, 32(r31)
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
label_80D11714:
    ctx->pc = 0x80D11714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11714: lwz     r3, 40(r31)
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
label_80D11718:
    ctx->pc = 0x80D11718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11718u)) return;
    // 80D11718: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D1171C:
    ctx->pc = 0x80D1171Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1171Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D1171C: stw     r0, 40(r31)
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
label_80D11720:
    ctx->pc = 0x80D11720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11720: lwz     r5, 52(r31)
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
label_80D11724:
    ctx->pc = 0x80D11724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11724u)) return;
    // 80D11724: cmpwi   r5, 0
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

label_80D11728:
    ctx->pc = 0x80D11728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11728u)) return;
    // 80D11728: bc    4, 1, 0x80D11760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11760;
        }
    }

label_80D1172C:
    ctx->pc = 0x80D1172Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1172Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D1172C: lwz     r4, 48(r31)
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
label_80D11730:
    ctx->pc = 0x80D11730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11730u)) return;
    // 80D11730: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D11734:
    ctx->pc = 0x80D11734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D11734: lwz     r0, 44(r31)
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
label_80D11738:
    ctx->pc = 0x80D11738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D11738u)) return;
    // 80D11738: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D1173C:
    ctx->pc = 0x80D1173Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1173Cu)) return;
    // 80D1173C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D11740:
    ctx->pc = 0x80D11740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D11740u)) return;
    // 80D11740: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D11744:
    ctx->pc = 0x80D11744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11744u)) return;
    // 80D11744: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D11748:
    ctx->pc = 0x80D11748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11748u)) return;
    // 80D11748: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D1174C:
    ctx->pc = 0x80D1174Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1174Cu)) return;
    // 80D1174C: bl      0x80509B94
    {
            ctx->lr = 0x80D11750u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D11750:
    ctx->pc = 0x80D11750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11750: stw     r29, 44(r31)
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
label_80D11754:
    ctx->pc = 0x80D11754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11754: lwz     r3, 52(r31)
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
label_80D11758:
    ctx->pc = 0x80D11758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11758u)) return;
    // 80D11758: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D1175C:
    ctx->pc = 0x80D1175Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1175Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D1175C: stw     r0, 52(r31)
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
label_80D11760:
    ctx->pc = 0x80D11760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11760: lwz     r31, 28(r1)
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
label_80D11764:
    ctx->pc = 0x80D11764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11764: lwz     r30, 24(r1)
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
label_80D11768:
    ctx->pc = 0x80D11768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11768: lwz     r29, 20(r1)
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
label_80D1176C:
    ctx->pc = 0x80D1176Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1176Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D1176C: lwz     r0, 36(r1)
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
label_80D11770:
    ctx->pc = 0x80D11770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11770: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11774:
    ctx->pc = 0x80D11774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11774u)) return;
    // 80D11774: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D11778:
    ctx->pc = 0x80D11778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11778u)) return;
    // 80D11778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D1177C:
    ctx->pc = 0x80D1177Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1177Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D1177C: stwu     r1, -32(r1)
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
label_80D11780:
    ctx->pc = 0x80D11780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D11780: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11784:
    ctx->pc = 0x80D11784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D11784: stw     r0, 36(r1)
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
label_80D11788:
    ctx->pc = 0x80D11788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11788: stw     r31, 28(r1)
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
label_80D1178C:
    ctx->pc = 0x80D1178Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1178Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1178C: stw     r30, 24(r1)
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
label_80D11790:
    ctx->pc = 0x80D11790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11790: stw     r29, 20(r1)
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
label_80D11794:
    ctx->pc = 0x80D11794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11794u)) return;
    // 80D11794: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D11798:
    ctx->pc = 0x80D11798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11798u)) return;
    // 80D11798: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D1179C:
    ctx->pc = 0x80D1179Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1179Cu)) return;
    // 80D1179C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D117A0:
    ctx->pc = 0x80D117A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117A0u)) return;
    // 80D117A0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D117A4:
    ctx->pc = 0x80D117A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117A4u)) return;
    // 80D117A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D117A8:
    ctx->pc = 0x80D117A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117A8u)) return;
    // 80D117A8: bl      0x8050FD60
    {
            ctx->lr = 0x80D117ACu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D117AC:
    ctx->pc = 0x80D117ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D117ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D117AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D117B0:
    ctx->pc = 0x80D117B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117B0u)) return;
    // 80D117B0: cmplwi  r31, 0x0000
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

label_80D117B4:
    ctx->pc = 0x80D117B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117B4u)) return;
    // 80D117B4: bc    12, 2, 0x80D11818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11818;
        }
    }

label_80D117B8:
    ctx->pc = 0x80D117B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D117B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D117B8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D117BC:
    ctx->pc = 0x80D117BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117BCu)) return;
    // 80D117BC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D117C0:
    ctx->pc = 0x80D117C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117C0u)) return;
    // 80D117C0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D117C4:
    ctx->pc = 0x80D117C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117C4u)) return;
    // 80D117C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D117C8:
    ctx->pc = 0x80D117C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117C8u)) return;
    // 80D117C8: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D117CC:
    ctx->pc = 0x80D117CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117CCu)) return;
    // 80D117CC: bl      0x8050A0D4
    {
            ctx->lr = 0x80D117D0u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D117D0:
    ctx->pc = 0x80D117D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D117D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80D117D0: lis     r3, -32559
    ctx->gpr[3] = ((u32)(s32)(-32559) << 16);

label_80D117D4:
    ctx->pc = 0x80D117D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117D4u)) return;
    // 80D117D4: addi    r0, r3, 5760
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5760);

label_80D117D8:
    ctx->pc = 0x80D117D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D117D8: stw     r0, 16(r31)
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
label_80D117DC:
    ctx->pc = 0x80D117DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117DCu)) return;
    // 80D117DC: lis     r3, -32559
    ctx->gpr[3] = ((u32)(s32)(-32559) << 16);

label_80D117E0:
    ctx->pc = 0x80D117E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117E0u)) return;
    // 80D117E0: addi    r0, r3, 5720
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5720);

label_80D117E4:
    ctx->pc = 0x80D117E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D117E4: stw     r0, 24(r31)
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
label_80D117E8:
    ctx->pc = 0x80D117E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D117E8: lwz     r3, 32(r31)
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
label_80D117EC:
    ctx->pc = 0x80D117ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D117EC: stw     r31, 16(r3)
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
label_80D117F0:
    ctx->pc = 0x80D117F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117F0u)) return;
    // 80D117F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D117F4:
    ctx->pc = 0x80D117F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D117F4: stw     r0, 20(r3)
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
label_80D117F8:
    ctx->pc = 0x80D117F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D117F8: stw     r0, 24(r3)
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
label_80D117FC:
    ctx->pc = 0x80D117FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D117FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D117FC: stw     r0, 28(r3)
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
label_80D11800:
    ctx->pc = 0x80D11800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11800: stw     r0, 32(r3)
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
label_80D11804:
    ctx->pc = 0x80D11804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11804: stw     r0, 36(r3)
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
label_80D11808:
    ctx->pc = 0x80D11808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11808: stw     r0, 40(r3)
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
label_80D1180C:
    ctx->pc = 0x80D1180Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1180Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1180C: stw     r0, 44(r3)
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
label_80D11810:
    ctx->pc = 0x80D11810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11810: stw     r0, 48(r3)
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
label_80D11814:
    ctx->pc = 0x80D11814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D11814: stw     r0, 52(r3)
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
label_80D11818:
    ctx->pc = 0x80D11818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D11818: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D1181C:
    ctx->pc = 0x80D1181Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1181Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D1181C: lwz     r31, 28(r1)
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
label_80D11820:
    ctx->pc = 0x80D11820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11820: lwz     r30, 24(r1)
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
label_80D11824:
    ctx->pc = 0x80D11824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11824: lwz     r29, 20(r1)
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
label_80D11828:
    ctx->pc = 0x80D11828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11828: lwz     r0, 36(r1)
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
label_80D1182C:
    ctx->pc = 0x80D1182Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D1182Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1182C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11830:
    ctx->pc = 0x80D11830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11830u)) return;
    // 80D11830: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D11834:
    ctx->pc = 0x80D11834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11834u)) return;
    // 80D11834: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11838:
    ctx->pc = 0x80D11838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D11838: stwu     r1, -16(r1)
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
label_80D1183C:
    ctx->pc = 0x80D1183Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1183Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D1183C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11840:
    ctx->pc = 0x80D11840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11840: stw     r0, 20(r1)
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
label_80D11844:
    ctx->pc = 0x80D11844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11844: stw     r31, 12(r1)
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
label_80D11848:
    ctx->pc = 0x80D11848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11848: stw     r30, 8(r1)
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
label_80D1184C:
    ctx->pc = 0x80D1184Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1184Cu)) return;
    // 80D1184C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D11850:
    ctx->pc = 0x80D11850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11850: lwz     r31, 32(r3)
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
label_80D11854:
    ctx->pc = 0x80D11854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11854: stw     r30, 24(r31)
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
label_80D11858:
    ctx->pc = 0x80D11858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11858: stw     r5, 28(r31)
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
label_80D1185C:
    ctx->pc = 0x80D1185Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1185Cu)) return;
    // 80D1185C: cmpwi   r5, 0
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

label_80D11860:
    ctx->pc = 0x80D11860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11860u)) return;
    // 80D11860: bc    12, 1, 0x80D11870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11870;
        }
    }

label_80D11864:
    ctx->pc = 0x80D11864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11864: lwz     r3, 16(r31)
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
label_80D11868:
    ctx->pc = 0x80D11868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11868u)) return;
    // 80D11868: bl      0x80509C74
    {
            ctx->lr = 0x80D1186Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D1186C:
    ctx->pc = 0x80D1186Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1186Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D1186C: stw     r30, 20(r31)
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
label_80D11870:
    ctx->pc = 0x80D11870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11870: lwz     r31, 12(r1)
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
label_80D11874:
    ctx->pc = 0x80D11874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11874: lwz     r30, 8(r1)
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
label_80D11878:
    ctx->pc = 0x80D11878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11878: lwz     r0, 20(r1)
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
label_80D1187C:
    ctx->pc = 0x80D1187Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D1187Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1187C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11880:
    ctx->pc = 0x80D11880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11880u)) return;
    // 80D11880: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11884:
    ctx->pc = 0x80D11884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11884u)) return;
    // 80D11884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11888:
    ctx->pc = 0x80D11888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D11888: stwu     r1, -16(r1)
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
label_80D1188C:
    ctx->pc = 0x80D1188Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1188Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D1188C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11890:
    ctx->pc = 0x80D11890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11890: stw     r0, 20(r1)
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
label_80D11894:
    ctx->pc = 0x80D11894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11894: stw     r31, 12(r1)
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
label_80D11898:
    ctx->pc = 0x80D11898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11898: stw     r30, 8(r1)
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
label_80D1189C:
    ctx->pc = 0x80D1189Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1189Cu)) return;
    // 80D1189C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D118A0:
    ctx->pc = 0x80D118A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D118A0: lwz     r31, 32(r3)
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
label_80D118A4:
    ctx->pc = 0x80D118A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D118A4: stw     r30, 36(r31)
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
label_80D118A8:
    ctx->pc = 0x80D118A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D118A8: stw     r5, 40(r31)
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
label_80D118AC:
    ctx->pc = 0x80D118ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118ACu)) return;
    // 80D118AC: cmpwi   r5, 0
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

label_80D118B0:
    ctx->pc = 0x80D118B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118B0u)) return;
    // 80D118B0: bc    12, 1, 0x80D118C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D118C0;
        }
    }

label_80D118B4:
    ctx->pc = 0x80D118B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D118B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D118B4: lwz     r3, 16(r31)
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
label_80D118B8:
    ctx->pc = 0x80D118B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118B8u)) return;
    // 80D118B8: bl      0x80509BF8
    {
            ctx->lr = 0x80D118BCu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D118BC:
    ctx->pc = 0x80D118BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D118BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D118BC: stw     r30, 32(r31)
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
label_80D118C0:
    ctx->pc = 0x80D118C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D118C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D118C0: lwz     r31, 12(r1)
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
label_80D118C4:
    ctx->pc = 0x80D118C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D118C4: lwz     r30, 8(r1)
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
label_80D118C8:
    ctx->pc = 0x80D118C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D118C8: lwz     r0, 20(r1)
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
label_80D118CC:
    ctx->pc = 0x80D118CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D118CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D118CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D118D0:
    ctx->pc = 0x80D118D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118D0u)) return;
    // 80D118D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D118D4:
    ctx->pc = 0x80D118D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118D4u)) return;
    // 80D118D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D118D8:
    ctx->pc = 0x80D118D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D118D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D118D8: stwu     r1, -16(r1)
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
label_80D118DC:
    ctx->pc = 0x80D118DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D118DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D118E0:
    ctx->pc = 0x80D118E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D118E0: stw     r0, 20(r1)
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
label_80D118E4:
    ctx->pc = 0x80D118E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D118E4: stw     r31, 12(r1)
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
label_80D118E8:
    ctx->pc = 0x80D118E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D118E8: stw     r30, 8(r1)
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
label_80D118EC:
    ctx->pc = 0x80D118ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118ECu)) return;
    // 80D118EC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D118F0:
    ctx->pc = 0x80D118F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D118F0: lwz     r31, 32(r3)
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
label_80D118F4:
    ctx->pc = 0x80D118F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D118F4: stw     r30, 48(r31)
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
label_80D118F8:
    ctx->pc = 0x80D118F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D118F8: stw     r5, 52(r31)
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
label_80D118FC:
    ctx->pc = 0x80D118FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D118FCu)) return;
    // 80D118FC: cmpwi   r5, 0
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

label_80D11900:
    ctx->pc = 0x80D11900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11900u)) return;
    // 80D11900: bc    12, 1, 0x80D11910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11910;
        }
    }

label_80D11904:
    ctx->pc = 0x80D11904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11904: lwz     r3, 16(r31)
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
label_80D11908:
    ctx->pc = 0x80D11908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11908u)) return;
    // 80D11908: bl      0x80509B94
    {
            ctx->lr = 0x80D1190Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D1190C:
    ctx->pc = 0x80D1190Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D1190Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D1190C: stw     r30, 44(r31)
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
label_80D11910:
    ctx->pc = 0x80D11910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11910: lwz     r31, 12(r1)
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
label_80D11914:
    ctx->pc = 0x80D11914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11914: lwz     r30, 8(r1)
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
label_80D11918:
    ctx->pc = 0x80D11918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11918: lwz     r0, 20(r1)
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
label_80D1191C:
    ctx->pc = 0x80D1191Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D1191Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D1191C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11920:
    ctx->pc = 0x80D11920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11920u)) return;
    // 80D11920: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11924:
    ctx->pc = 0x80D11924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11924u)) return;
    // 80D11924: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11928:
    ctx->pc = 0x80D11928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D11928: stwu     r1, -16(r1)
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
label_80D1192C:
    ctx->pc = 0x80D1192Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1192Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D1192C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11930:
    ctx->pc = 0x80D11930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11930: stw     r0, 20(r1)
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
label_80D11934:
    ctx->pc = 0x80D11934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11934: stw     r31, 12(r1)
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
label_80D11938:
    ctx->pc = 0x80D11938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11938u)) return;
    // 80D11938: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D1193C:
    ctx->pc = 0x80D1193Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1193Cu)) return;
    // 80D1193C: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D11940:
    ctx->pc = 0x80D11940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11940u)) return;
    // 80D11940: addi    r4, r4, -2236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2236);

label_80D11944:
    ctx->pc = 0x80D11944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11944: lwz     r0, 0(r4)
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
label_80D11948:
    ctx->pc = 0x80D11948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11948u)) return;
    // 80D11948: cmplwi  r0, 0x0000
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

label_80D1194C:
    ctx->pc = 0x80D1194Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1194Cu)) return;
    // 80D1194C: bc    4, 2, 0x80D11970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11970;
        }
    }

label_80D11950:
    ctx->pc = 0x80D11950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D11950: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D11954:
    ctx->pc = 0x80D11954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11954u)) return;
    // 80D11954: bl      0x8050EEC0
    {
            ctx->lr = 0x80D11958u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80D11958:
    ctx->pc = 0x80D11958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D11958: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D1195C:
    ctx->pc = 0x80D1195Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1195Cu)) return;
    // 80D1195C: addi    r4, r4, -2236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2236);

label_80D11960:
    ctx->pc = 0x80D11960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D11960: stw     r3, 0(r4)
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
label_80D11964:
    ctx->pc = 0x80D11964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11964u)) return;
    // 80D11964: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D11968:
    ctx->pc = 0x80D11968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11968u)) return;
    // 80D11968: addi    r3, r3, -2240
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2240);

label_80D1196C:
    ctx->pc = 0x80D1196Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1196Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D1196C: stw     r31, 0(r3)
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
label_80D11970:
    ctx->pc = 0x80D11970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11970: lwz     r31, 12(r1)
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
label_80D11974:
    ctx->pc = 0x80D11974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11974: lwz     r0, 20(r1)
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
label_80D11978:
    ctx->pc = 0x80D11978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11978: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1197C:
    ctx->pc = 0x80D1197Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1197Cu)) return;
    // 80D1197C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11980:
    ctx->pc = 0x80D11980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11980u)) return;
    // 80D11980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11984:
    ctx->pc = 0x80D11984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D11984: stwu     r1, -32(r1)
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
label_80D11988:
    ctx->pc = 0x80D11988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D11988: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D1198C:
    ctx->pc = 0x80D1198Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1198Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D1198C: stw     r0, 36(r1)
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
label_80D11990:
    ctx->pc = 0x80D11990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11990: stw     r31, 28(r1)
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
label_80D11994:
    ctx->pc = 0x80D11994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11994: stw     r30, 24(r1)
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
label_80D11998:
    ctx->pc = 0x80D11998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11998: stw     r29, 20(r1)
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
label_80D1199C:
    ctx->pc = 0x80D1199Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D1199Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D1199C: stw     r28, 16(r1)
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
label_80D119A0:
    ctx->pc = 0x80D119A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119A0u)) return;
    // 80D119A0: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D119A4:
    ctx->pc = 0x80D119A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119A4u)) return;
    // 80D119A4: addi    r30, r3, -2236
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-2236);

label_80D119A8:
    ctx->pc = 0x80D119A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D119A8: lwz     r0, 0(r30)
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
label_80D119AC:
    ctx->pc = 0x80D119ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119ACu)) return;
    // 80D119AC: cmplwi  r0, 0x0000
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

label_80D119B0:
    ctx->pc = 0x80D119B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119B0u)) return;
    // 80D119B0: bc    12, 2, 0x80D11A10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11A10;
        }
    }

label_80D119B4:
    ctx->pc = 0x80D119B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D119B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D119B4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80D119B8:
    ctx->pc = 0x80D119B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119B8u)) return;
    // 80D119B8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80D119BC:
    ctx->pc = 0x80D119BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119BCu)) return;
    // 80D119BC: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D119C0:
    ctx->pc = 0x80D119C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119C0u)) return;
    // 80D119C0: addi    r31, r3, -2240
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-2240);

label_80D119C4:
    ctx->pc = 0x80D119C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119C4u)) return;
    // 80D119C4: b       0x80D119E4
    {
            goto label_80D119E4;
    }

label_80D119C8:
    ctx->pc = 0x80D119C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D119C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D119C8: lwz     r3, 0(r30)
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
label_80D119CC:
    ctx->pc = 0x80D119CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D119CC: lwzx    r3, r3, r29
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
label_80D119D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119D0u)) return;
    // 80D119D0: cmplwi  r3, 0x0000
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

label_80D119D4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119D4u)) return;
    // 80D119D4: bc    12, 2, 0x80D119DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D119DC;
        }
    }

label_80D119D8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D119D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D119D8: bl      0x8050F9E0
    {
            ctx->lr = 0x80D119DCu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D119DC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D119DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D119DC: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80D119E0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119E0u)) return;
    // 80D119E0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80D119E4:
    ctx->pc = 0x80D119E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D119E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D119E4: lwz     r0, 0(r31)
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
label_80D119E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119E8u)) return;
    // 80D119E8: cmpw    r28, r0
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

label_80D119EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119ECu)) return;
    // 80D119EC: bc    12, 0, 0x80D119C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D119C8u;
                return;
            }
            goto label_80D119C8;
        }
    }

label_80D119F0:
    ctx->pc = 0x80D119F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D119F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D119F0: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D119F4:
    ctx->pc = 0x80D119F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119F4u)) return;
    // 80D119F4: addi    r3, r3, -2236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2236);

label_80D119F8:
    ctx->pc = 0x80D119F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D119F8: lwz     r3, 0(r3)
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
label_80D119FC:
    ctx->pc = 0x80D119FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D119FCu)) return;
    // 80D119FC: bl      0x8050ED40
    {
            ctx->lr = 0x80D11A00u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D11A00:
    ctx->pc = 0x80D11A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D11A00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D11A04:
    ctx->pc = 0x80D11A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A04u)) return;
    // 80D11A04: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D11A08:
    ctx->pc = 0x80D11A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A08u)) return;
    // 80D11A08: addi    r3, r3, -2236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2236);

label_80D11A0C:
    ctx->pc = 0x80D11A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D11A0C: stw     r0, 0(r3)
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
label_80D11A10:
    ctx->pc = 0x80D11A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11A10: lwz     r31, 28(r1)
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
label_80D11A14:
    ctx->pc = 0x80D11A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11A14: lwz     r30, 24(r1)
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
label_80D11A18:
    ctx->pc = 0x80D11A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11A18: lwz     r29, 20(r1)
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
label_80D11A1C:
    ctx->pc = 0x80D11A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11A1C: lwz     r28, 16(r1)
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
label_80D11A20:
    ctx->pc = 0x80D11A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11A20: lwz     r0, 36(r1)
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
label_80D11A24:
    ctx->pc = 0x80D11A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11A24: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11A28:
    ctx->pc = 0x80D11A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A28u)) return;
    // 80D11A28: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D11A2C:
    ctx->pc = 0x80D11A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A2Cu)) return;
    // 80D11A2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11A30:
    ctx->pc = 0x80D11A30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11A30: stwu     r1, -16(r1)
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
label_80D11A34:
    ctx->pc = 0x80D11A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11A34: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11A38:
    ctx->pc = 0x80D11A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11A38: stw     r0, 20(r1)
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
label_80D11A3C:
    ctx->pc = 0x80D11A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11A3C: stw     r31, 12(r1)
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
label_80D11A40:
    ctx->pc = 0x80D11A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A40u)) return;
    // 80D11A40: lis     r6, -27343
    ctx->gpr[6] = ((u32)(s32)(-27343) << 16);

label_80D11A44:
    ctx->pc = 0x80D11A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A44u)) return;
    // 80D11A44: addi    r6, r6, -2240
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2240);

label_80D11A48:
    ctx->pc = 0x80D11A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11A48: lwz     r0, 0(r6)
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
label_80D11A4C:
    ctx->pc = 0x80D11A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A4Cu)) return;
    // 80D11A4C: cmpw    r3, r0
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

label_80D11A50:
    ctx->pc = 0x80D11A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A50u)) return;
    // 80D11A50: bc    4, 0, 0x80D11A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11A8C;
        }
    }

label_80D11A54:
    ctx->pc = 0x80D11A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D11A54: lis     r6, -27343
    ctx->gpr[6] = ((u32)(s32)(-27343) << 16);

label_80D11A58:
    ctx->pc = 0x80D11A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A58u)) return;
    // 80D11A58: addi    r6, r6, -2236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2236);

label_80D11A5C:
    ctx->pc = 0x80D11A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11A5C: lwz     r6, 0(r6)
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
label_80D11A60:
    ctx->pc = 0x80D11A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A60u)) return;
    // 80D11A60: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D11A64:
    ctx->pc = 0x80D11A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11A64: lwzx    r0, r6, r31
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
label_80D11A68:
    ctx->pc = 0x80D11A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A68u)) return;
    // 80D11A68: cmplwi  r0, 0x0000
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

label_80D11A6C:
    ctx->pc = 0x80D11A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A6Cu)) return;
    // 80D11A6C: bc    4, 2, 0x80D11A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11A8C;
        }
    }

label_80D11A70:
    ctx->pc = 0x80D11A70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11A70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D11A70: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D11A74:
    ctx->pc = 0x80D11A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A74u)) return;
    // 80D11A74: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D11A78:
    ctx->pc = 0x80D11A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A78u)) return;
    // 80D11A78: bl      0x80D1177C
    {
            ctx->lr = 0x80D11A7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D1177Cu;
                return;
            }
            goto label_80D1177C;
    }

label_80D11A7C:
    ctx->pc = 0x80D11A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D11A7C: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D11A80:
    ctx->pc = 0x80D11A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A80u)) return;
    // 80D11A80: addi    r4, r4, -2236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2236);

label_80D11A84:
    ctx->pc = 0x80D11A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11A84: lwz     r4, 0(r4)
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
label_80D11A88:
    ctx->pc = 0x80D11A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D11A88: stwx    r3, r4, r31
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
label_80D11A8C:
    ctx->pc = 0x80D11A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11A8C: lwz     r31, 12(r1)
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
label_80D11A90:
    ctx->pc = 0x80D11A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11A90: lwz     r0, 20(r1)
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
label_80D11A94:
    ctx->pc = 0x80D11A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11A94: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11A98:
    ctx->pc = 0x80D11A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A98u)) return;
    // 80D11A98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11A9C:
    ctx->pc = 0x80D11A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11A9Cu)) return;
    // 80D11A9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11AA0:
    ctx->pc = 0x80D11AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11AA0: stwu     r1, -16(r1)
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
label_80D11AA4:
    ctx->pc = 0x80D11AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11AA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11AA8:
    ctx->pc = 0x80D11AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11AA8: stw     r0, 20(r1)
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
label_80D11AAC:
    ctx->pc = 0x80D11AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11AAC: stw     r31, 12(r1)
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
label_80D11AB0:
    ctx->pc = 0x80D11AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AB0u)) return;
    // 80D11AB0: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D11AB4:
    ctx->pc = 0x80D11AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AB4u)) return;
    // 80D11AB4: addi    r4, r4, -2240
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2240);

label_80D11AB8:
    ctx->pc = 0x80D11AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11AB8: lwz     r0, 0(r4)
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
label_80D11ABC:
    ctx->pc = 0x80D11ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11ABCu)) return;
    // 80D11ABC: cmpw    r3, r0
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

label_80D11AC0:
    ctx->pc = 0x80D11AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AC0u)) return;
    // 80D11AC0: bc    4, 0, 0x80D11AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11AF8;
        }
    }

label_80D11AC4:
    ctx->pc = 0x80D11AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D11AC4: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D11AC8:
    ctx->pc = 0x80D11AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AC8u)) return;
    // 80D11AC8: addi    r4, r4, -2236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2236);

label_80D11ACC:
    ctx->pc = 0x80D11ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11ACC: lwz     r4, 0(r4)
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
label_80D11AD0:
    ctx->pc = 0x80D11AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AD0u)) return;
    // 80D11AD0: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D11AD4:
    ctx->pc = 0x80D11AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11AD4: lwzx    r3, r4, r31
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
label_80D11AD8:
    ctx->pc = 0x80D11AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AD8u)) return;
    // 80D11AD8: cmplwi  r3, 0x0000
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

label_80D11ADC:
    ctx->pc = 0x80D11ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11ADCu)) return;
    // 80D11ADC: bc    12, 2, 0x80D11AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11AF8;
        }
    }

label_80D11AE0:
    ctx->pc = 0x80D11AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11AE0: bl      0x8050F9E0
    {
            ctx->lr = 0x80D11AE4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D11AE4:
    ctx->pc = 0x80D11AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D11AE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D11AE8:
    ctx->pc = 0x80D11AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AE8u)) return;
    // 80D11AE8: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D11AEC:
    ctx->pc = 0x80D11AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AECu)) return;
    // 80D11AEC: addi    r3, r3, -2236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2236);

label_80D11AF0:
    ctx->pc = 0x80D11AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D11AF0: lwz     r3, 0(r3)
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
label_80D11AF4:
    ctx->pc = 0x80D11AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D11AF4: stwx    r0, r3, r31
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
label_80D11AF8:
    ctx->pc = 0x80D11AF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11AF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11AF8: lwz     r31, 12(r1)
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
label_80D11AFC:
    ctx->pc = 0x80D11AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11AFC: lwz     r0, 20(r1)
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
label_80D11B00:
    ctx->pc = 0x80D11B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11B00: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11B04:
    ctx->pc = 0x80D11B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B04u)) return;
    // 80D11B04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11B08:
    ctx->pc = 0x80D11B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B08u)) return;
    // 80D11B08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11B0C:
    ctx->pc = 0x80D11B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11B0C: stwu     r1, -16(r1)
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
label_80D11B10:
    ctx->pc = 0x80D11B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11B10: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11B14:
    ctx->pc = 0x80D11B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11B14: stw     r0, 20(r1)
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
label_80D11B18:
    ctx->pc = 0x80D11B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B18u)) return;
    // 80D11B18: lis     r6, -27343
    ctx->gpr[6] = ((u32)(s32)(-27343) << 16);

label_80D11B1C:
    ctx->pc = 0x80D11B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B1Cu)) return;
    // 80D11B1C: addi    r6, r6, -2240
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2240);

label_80D11B20:
    ctx->pc = 0x80D11B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11B20: lwz     r0, 0(r6)
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
label_80D11B24:
    ctx->pc = 0x80D11B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B24u)) return;
    // 80D11B24: cmpw    r3, r0
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

label_80D11B28:
    ctx->pc = 0x80D11B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B28u)) return;
    // 80D11B28: bc    4, 0, 0x80D11B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11B4C;
        }
    }

label_80D11B2C:
    ctx->pc = 0x80D11B2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11B2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D11B2C: lis     r6, -27343
    ctx->gpr[6] = ((u32)(s32)(-27343) << 16);

label_80D11B30:
    ctx->pc = 0x80D11B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B30u)) return;
    // 80D11B30: addi    r6, r6, -2236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2236);

label_80D11B34:
    ctx->pc = 0x80D11B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11B34: lwz     r6, 0(r6)
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
label_80D11B38:
    ctx->pc = 0x80D11B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B38u)) return;
    // 80D11B38: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D11B3C:
    ctx->pc = 0x80D11B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11B3C: lwzx    r3, r6, r0
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
label_80D11B40:
    ctx->pc = 0x80D11B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B40u)) return;
    // 80D11B40: cmplwi  r3, 0x0000
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

label_80D11B44:
    ctx->pc = 0x80D11B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B44u)) return;
    // 80D11B44: bc    12, 2, 0x80D11B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11B4C;
        }
    }

label_80D11B48:
    ctx->pc = 0x80D11B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11B48: bl      0x80D11838
    {
            ctx->lr = 0x80D11B4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D11838u;
                return;
            }
            goto label_80D11838;
    }

label_80D11B4C:
    ctx->pc = 0x80D11B4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11B4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11B4C: lwz     r0, 20(r1)
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
label_80D11B50:
    ctx->pc = 0x80D11B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11B50: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11B54:
    ctx->pc = 0x80D11B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B54u)) return;
    // 80D11B54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11B58:
    ctx->pc = 0x80D11B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B58u)) return;
    // 80D11B58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11B5C:
    ctx->pc = 0x80D11B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11B5C: stwu     r1, -16(r1)
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
label_80D11B60:
    ctx->pc = 0x80D11B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11B60: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11B64:
    ctx->pc = 0x80D11B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11B64: stw     r0, 20(r1)
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
label_80D11B68:
    ctx->pc = 0x80D11B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B68u)) return;
    // 80D11B68: lis     r6, -27343
    ctx->gpr[6] = ((u32)(s32)(-27343) << 16);

label_80D11B6C:
    ctx->pc = 0x80D11B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B6Cu)) return;
    // 80D11B6C: addi    r6, r6, -2240
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2240);

label_80D11B70:
    ctx->pc = 0x80D11B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11B70: lwz     r0, 0(r6)
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
label_80D11B74:
    ctx->pc = 0x80D11B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B74u)) return;
    // 80D11B74: cmpw    r3, r0
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

label_80D11B78:
    ctx->pc = 0x80D11B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B78u)) return;
    // 80D11B78: bc    4, 0, 0x80D11B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11B9C;
        }
    }

label_80D11B7C:
    ctx->pc = 0x80D11B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D11B7C: lis     r6, -27343
    ctx->gpr[6] = ((u32)(s32)(-27343) << 16);

label_80D11B80:
    ctx->pc = 0x80D11B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B80u)) return;
    // 80D11B80: addi    r6, r6, -2236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2236);

label_80D11B84:
    ctx->pc = 0x80D11B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11B84: lwz     r6, 0(r6)
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
label_80D11B88:
    ctx->pc = 0x80D11B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B88u)) return;
    // 80D11B88: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D11B8C:
    ctx->pc = 0x80D11B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11B8C: lwzx    r3, r6, r0
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
label_80D11B90:
    ctx->pc = 0x80D11B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B90u)) return;
    // 80D11B90: cmplwi  r3, 0x0000
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

label_80D11B94:
    ctx->pc = 0x80D11B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11B94u)) return;
    // 80D11B94: bc    12, 2, 0x80D11B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11B9C;
        }
    }

label_80D11B98:
    ctx->pc = 0x80D11B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11B98: bl      0x80D11888
    {
            ctx->lr = 0x80D11B9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D11888u;
                return;
            }
            goto label_80D11888;
    }

label_80D11B9C:
    ctx->pc = 0x80D11B9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11B9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11B9C: lwz     r0, 20(r1)
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
label_80D11BA0:
    ctx->pc = 0x80D11BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11BA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11BA4:
    ctx->pc = 0x80D11BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BA4u)) return;
    // 80D11BA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11BA8:
    ctx->pc = 0x80D11BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BA8u)) return;
    // 80D11BA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11BAC:
    ctx->pc = 0x80D11BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11BAC: stwu     r1, -16(r1)
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
label_80D11BB0:
    ctx->pc = 0x80D11BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11BB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11BB4:
    ctx->pc = 0x80D11BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11BB4: stw     r0, 20(r1)
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
label_80D11BB8:
    ctx->pc = 0x80D11BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BB8u)) return;
    // 80D11BB8: lis     r6, -27343
    ctx->gpr[6] = ((u32)(s32)(-27343) << 16);

label_80D11BBC:
    ctx->pc = 0x80D11BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BBCu)) return;
    // 80D11BBC: addi    r6, r6, -2240
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2240);

label_80D11BC0:
    ctx->pc = 0x80D11BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11BC0: lwz     r0, 0(r6)
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
label_80D11BC4:
    ctx->pc = 0x80D11BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BC4u)) return;
    // 80D11BC4: cmpw    r3, r0
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

label_80D11BC8:
    ctx->pc = 0x80D11BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BC8u)) return;
    // 80D11BC8: bc    4, 0, 0x80D11BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D11BEC;
        }
    }

label_80D11BCC:
    ctx->pc = 0x80D11BCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11BCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D11BCC: lis     r6, -27343
    ctx->gpr[6] = ((u32)(s32)(-27343) << 16);

label_80D11BD0:
    ctx->pc = 0x80D11BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BD0u)) return;
    // 80D11BD0: addi    r6, r6, -2236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2236);

label_80D11BD4:
    ctx->pc = 0x80D11BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11BD4: lwz     r6, 0(r6)
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
label_80D11BD8:
    ctx->pc = 0x80D11BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BD8u)) return;
    // 80D11BD8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D11BDC:
    ctx->pc = 0x80D11BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11BDC: lwzx    r3, r6, r0
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
label_80D11BE0:
    ctx->pc = 0x80D11BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BE0u)) return;
    // 80D11BE0: cmplwi  r3, 0x0000
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

label_80D11BE4:
    ctx->pc = 0x80D11BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BE4u)) return;
    // 80D11BE4: bc    12, 2, 0x80D11BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D11BEC;
        }
    }

label_80D11BE8:
    ctx->pc = 0x80D11BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D11BE8: bl      0x80D118D8
    {
            ctx->lr = 0x80D11BECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D118D8u;
                return;
            }
            goto label_80D118D8;
    }

label_80D11BEC:
    ctx->pc = 0x80D11BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11BEC: lwz     r0, 20(r1)
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
label_80D11BF0:
    ctx->pc = 0x80D11BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11BF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11BF4:
    ctx->pc = 0x80D11BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BF4u)) return;
    // 80D11BF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D11BF8:
    ctx->pc = 0x80D11BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11BF8u)) return;
    // 80D11BF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

label_80D11BFC:
    ctx->pc = 0x80D11BFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11BFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D11BFC: stwu     r1, -32(r1)
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
label_80D11C00:
    ctx->pc = 0x80D11C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D11C00: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11C04:
    ctx->pc = 0x80D11C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D11C04: stw     r0, 36(r1)
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
label_80D11C08:
    ctx->pc = 0x80D11C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D11C08: stw     r31, 28(r1)
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
label_80D11C0C:
    ctx->pc = 0x80D11C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11C0C: stw     r30, 24(r1)
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
label_80D11C10:
    ctx->pc = 0x80D11C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11C10: stw     r29, 20(r1)
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
label_80D11C14:
    ctx->pc = 0x80D11C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11C14: stw     r28, 16(r1)
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
label_80D11C18:
    ctx->pc = 0x80D11C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C18u)) return;
    // 80D11C18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D11C1C:
    ctx->pc = 0x80D11C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C1Cu)) return;
    // 80D11C1C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D11C20:
    ctx->pc = 0x80D11C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C20u)) return;
    // 80D11C20: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D11C24:
    ctx->pc = 0x80D11C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C24u)) return;
    // 80D11C24: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D11C28:
    ctx->pc = 0x80D11C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C28u)) return;
    // 80D11C28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D11C2C:
    ctx->pc = 0x80D11C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C2Cu)) return;
    // 80D11C2C: bl      0x80401DB0
    {
            ctx->lr = 0x80D11C30u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80D11C30:
    ctx->pc = 0x80D11C30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11C30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D11C30: lis     r4, -27343
    ctx->gpr[4] = ((u32)(s32)(-27343) << 16);

label_80D11C34:
    ctx->pc = 0x80D11C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C34u)) return;
    // 80D11C34: addi    r4, r4, -2232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2232);

label_80D11C38:
    ctx->pc = 0x80D11C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11C38: lwz     r0, 0(r4)
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
label_80D11C3C:
    ctx->pc = 0x80D11C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C3Cu)) return;
    // 80D11C3C: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D11C40:
    ctx->pc = 0x80D11C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C40u)) return;
    // 80D11C40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D11C44:
    ctx->pc = 0x80D11C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C44u)) return;
    // 80D11C44: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D11C48:
    ctx->pc = 0x80D11C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C48u)) return;
    // 80D11C48: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D11C4C:
    ctx->pc = 0x80D11C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C4Cu)) return;
    // 80D11C4C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D11C50:
    ctx->pc = 0x80D11C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C50u)) return;
    // 80D11C50: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80D11C54:
    ctx->pc = 0x80D11C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C54u)) return;
    // 80D11C54: bl      0x8050A0D4
    {
            ctx->lr = 0x80D11C58u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D11C58:
    ctx->pc = 0x80D11C58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11C58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D11C58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D11C5C:
    ctx->pc = 0x80D11C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C5Cu)) return;
    // 80D11C5C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80D11C60:
    ctx->pc = 0x80D11C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C60u)) return;
    // 80D11C60: bl      0x80509C74
    {
            ctx->lr = 0x80D11C64u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D11C64:
    ctx->pc = 0x80D11C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D11C64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D11C68:
    ctx->pc = 0x80D11C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C68u)) return;
    // 80D11C68: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D11C6C:
    ctx->pc = 0x80D11C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C6Cu)) return;
    // 80D11C6C: bl      0x80509BF8
    {
            ctx->lr = 0x80D11C70u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D11C70:
    ctx->pc = 0x80D11C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D11C70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D11C74:
    ctx->pc = 0x80D11C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C74u)) return;
    // 80D11C74: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D11C78:
    ctx->pc = 0x80D11C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C78u)) return;
    // 80D11C78: bl      0x80509B94
    {
            ctx->lr = 0x80D11C7Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D11C7C:
    ctx->pc = 0x80D11C7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D11C7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D11C7C: lis     r3, -27343
    ctx->gpr[3] = ((u32)(s32)(-27343) << 16);

label_80D11C80:
    ctx->pc = 0x80D11C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C80u)) return;
    // 80D11C80: addi    r4, r3, -2232
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2232);

label_80D11C84:
    ctx->pc = 0x80D11C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D11C84: lwz     r3, 0(r4)
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
label_80D11C88:
    ctx->pc = 0x80D11C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C88u)) return;
    // 80D11C88: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D11C8C:
    ctx->pc = 0x80D11C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D11C8C: stw     r0, 0(r4)
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
label_80D11C90:
    ctx->pc = 0x80D11C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C90u)) return;
    // 80D11C90: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80D11C94:
    ctx->pc = 0x80D11C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D11C94: stw     r0, 0(r4)
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
label_80D11C98:
    ctx->pc = 0x80D11C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D11C98: lwz     r31, 28(r1)
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
label_80D11C9C:
    ctx->pc = 0x80D11C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D11C9C: lwz     r30, 24(r1)
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
label_80D11CA0:
    ctx->pc = 0x80D11CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D11CA0: lwz     r29, 20(r1)
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
label_80D11CA4:
    ctx->pc = 0x80D11CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D11CA4: lwz     r28, 16(r1)
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
label_80D11CA8:
    ctx->pc = 0x80D11CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D11CA8: lwz     r0, 36(r1)
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
label_80D11CAC:
    ctx->pc = 0x80D11CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D11CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D11CAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D11CB0:
    ctx->pc = 0x80D11CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11CB0u)) return;
    // 80D11CB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D11CB4:
    ctx->pc = 0x80D11CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D11CB4u)) return;
    // 80D11CB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0FF80;
        }
    }

    ctx->pc = 0x80D11CB8u;
    return;
return_dispatch_80D0FF80:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D0FFB8u: goto label_80D0FFB8;
    case 0x80D0FFBCu: goto label_80D0FFBC;
    case 0x80D0FFC4u: goto label_80D0FFC4;
    case 0x80D0FFECu: goto label_80D0FFEC;
    case 0x80D0FFF4u: goto label_80D0FFF4;
    case 0x80D10008u: goto label_80D10008;
    case 0x80D10010u: goto label_80D10010;
    case 0x80D1002Cu: goto label_80D1002C;
    case 0x80D10030u: goto label_80D10030;
    case 0x80D10038u: goto label_80D10038;
    case 0x80D10044u: goto label_80D10044;
    case 0x80D1004Cu: goto label_80D1004C;
    case 0x80D10054u: goto label_80D10054;
    case 0x80D1007Cu: goto label_80D1007C;
    case 0x80D10084u: goto label_80D10084;
    case 0x80D10098u: goto label_80D10098;
    case 0x80D100D8u: goto label_80D100D8;
    case 0x80D100E0u: goto label_80D100E0;
    case 0x80D100E8u: goto label_80D100E8;
    case 0x80D100F4u: goto label_80D100F4;
    case 0x80D10124u: goto label_80D10124;
    case 0x80D10140u: goto label_80D10140;
    case 0x80D10148u: goto label_80D10148;
    case 0x80D10170u: goto label_80D10170;
    case 0x80D10178u: goto label_80D10178;
    case 0x80D101A0u: goto label_80D101A0;
    case 0x80D101D0u: goto label_80D101D0;
    case 0x80D101ECu: goto label_80D101EC;
    case 0x80D1021Cu: goto label_80D1021C;
    case 0x80D10238u: goto label_80D10238;
    case 0x80D10240u: goto label_80D10240;
    case 0x80D10248u: goto label_80D10248;
    case 0x80D10254u: goto label_80D10254;
    case 0x80D10278u: goto label_80D10278;
    case 0x80D10280u: goto label_80D10280;
    case 0x80D10284u: goto label_80D10284;
    case 0x80D1028Cu: goto label_80D1028C;
    case 0x80D10290u: goto label_80D10290;
    case 0x80D102C0u: goto label_80D102C0;
    case 0x80D102DCu: goto label_80D102DC;
    case 0x80D102E4u: goto label_80D102E4;
    case 0x80D102ECu: goto label_80D102EC;
    case 0x80D102F8u: goto label_80D102F8;
    case 0x80D1031Cu: goto label_80D1031C;
    case 0x80D10324u: goto label_80D10324;
    case 0x80D1032Cu: goto label_80D1032C;
    case 0x80D10354u: goto label_80D10354;
    case 0x80D10358u: goto label_80D10358;
    case 0x80D10360u: goto label_80D10360;
    case 0x80D10388u: goto label_80D10388;
    case 0x80D10390u: goto label_80D10390;
    case 0x80D10394u: goto label_80D10394;
    case 0x80D1039Cu: goto label_80D1039C;
    case 0x80D103C4u: goto label_80D103C4;
    case 0x80D103E0u: goto label_80D103E0;
    case 0x80D10410u: goto label_80D10410;
    case 0x80D1042Cu: goto label_80D1042C;
    case 0x80D1045Cu: goto label_80D1045C;
    case 0x80D10464u: goto label_80D10464;
    case 0x80D1046Cu: goto label_80D1046C;
    case 0x80D10478u: goto label_80D10478;
    case 0x80D1049Cu: goto label_80D1049C;
    case 0x80D104A4u: goto label_80D104A4;
    case 0x80D104A8u: goto label_80D104A8;
    case 0x80D104B0u: goto label_80D104B0;
    case 0x80D104B4u: goto label_80D104B4;
    case 0x80D104BCu: goto label_80D104BC;
    case 0x80D104C0u: goto label_80D104C0;
    case 0x80D104D0u: goto label_80D104D0;
    case 0x80D104D8u: goto label_80D104D8;
    case 0x80D10500u: goto label_80D10500;
    case 0x80D10518u: goto label_80D10518;
    case 0x80D10548u: goto label_80D10548;
    case 0x80D10564u: goto label_80D10564;
    case 0x80D10594u: goto label_80D10594;
    case 0x80D1059Cu: goto label_80D1059C;
    case 0x80D105A4u: goto label_80D105A4;
    case 0x80D105B0u: goto label_80D105B0;
    case 0x80D105D4u: goto label_80D105D4;
    case 0x80D105DCu: goto label_80D105DC;
    case 0x80D105E0u: goto label_80D105E0;
    case 0x80D105E8u: goto label_80D105E8;
    case 0x80D105FCu: goto label_80D105FC;
    case 0x80D10604u: goto label_80D10604;
    case 0x80D1060Cu: goto label_80D1060C;
    case 0x80D10614u: goto label_80D10614;
    case 0x80D10618u: goto label_80D10618;
    case 0x80D10620u: goto label_80D10620;
    case 0x80D10648u: goto label_80D10648;
    case 0x80D10664u: goto label_80D10664;
    case 0x80D10694u: goto label_80D10694;
    case 0x80D106B8u: goto label_80D106B8;
    case 0x80D106C0u: goto label_80D106C0;
    case 0x80D106C4u: goto label_80D106C4;
    case 0x80D106CCu: goto label_80D106CC;
    case 0x80D106D0u: goto label_80D106D0;
    case 0x80D106D8u: goto label_80D106D8;
    case 0x80D10700u: goto label_80D10700;
    case 0x80D10710u: goto label_80D10710;
    case 0x80D10740u: goto label_80D10740;
    case 0x80D10758u: goto label_80D10758;
    case 0x80D10788u: goto label_80D10788;
    case 0x80D107A4u: goto label_80D107A4;
    case 0x80D107ACu: goto label_80D107AC;
    case 0x80D107D4u: goto label_80D107D4;
    case 0x80D107DCu: goto label_80D107DC;
    case 0x80D107ECu: goto label_80D107EC;
    case 0x80D107F4u: goto label_80D107F4;
    case 0x80D107F8u: goto label_80D107F8;
    case 0x80D10800u: goto label_80D10800;
    case 0x80D10828u: goto label_80D10828;
    case 0x80D10830u: goto label_80D10830;
    case 0x80D10844u: goto label_80D10844;
    case 0x80D1084Cu: goto label_80D1084C;
    case 0x80D10874u: goto label_80D10874;
    case 0x80D1087Cu: goto label_80D1087C;
    case 0x80D10890u: goto label_80D10890;
    case 0x80D10898u: goto label_80D10898;
    case 0x80D1089Cu: goto label_80D1089C;
    case 0x80D108A4u: goto label_80D108A4;
    case 0x80D108CCu: goto label_80D108CC;
    case 0x80D108D4u: goto label_80D108D4;
    case 0x80D108FCu: goto label_80D108FC;
    case 0x80D10904u: goto label_80D10904;
    case 0x80D1092Cu: goto label_80D1092C;
    case 0x80D1095Cu: goto label_80D1095C;
    case 0x80D10978u: goto label_80D10978;
    case 0x80D109A8u: goto label_80D109A8;
    case 0x80D109C0u: goto label_80D109C0;
    case 0x80D109C8u: goto label_80D109C8;
    case 0x80D109F8u: goto label_80D109F8;
    case 0x80D10A10u: goto label_80D10A10;
    case 0x80D10A40u: goto label_80D10A40;
    case 0x80D10A58u: goto label_80D10A58;
    case 0x80D10A60u: goto label_80D10A60;
    case 0x80D10A90u: goto label_80D10A90;
    case 0x80D10AA8u: goto label_80D10AA8;
    case 0x80D10AD8u: goto label_80D10AD8;
    case 0x80D10AF4u: goto label_80D10AF4;
    case 0x80D10AFCu: goto label_80D10AFC;
    case 0x80D10B24u: goto label_80D10B24;
    case 0x80D10B2Cu: goto label_80D10B2C;
    case 0x80D10B34u: goto label_80D10B34;
    case 0x80D10B74u: goto label_80D10B74;
    case 0x80D10B7Cu: goto label_80D10B7C;
    case 0x80D10B88u: goto label_80D10B88;
    case 0x80D10BACu: goto label_80D10BAC;
    case 0x80D10BB4u: goto label_80D10BB4;
    case 0x80D10BDCu: goto label_80D10BDC;
    case 0x80D10BE4u: goto label_80D10BE4;
    case 0x80D10BECu: goto label_80D10BEC;
    case 0x80D10BF4u: goto label_80D10BF4;
    case 0x80D10C00u: goto label_80D10C00;
    case 0x80D10C08u: goto label_80D10C08;
    case 0x80D10C10u: goto label_80D10C10;
    case 0x80D10C14u: goto label_80D10C14;
    case 0x80D10C30u: goto label_80D10C30;
    case 0x80D10C3Cu: goto label_80D10C3C;
    case 0x80D10C58u: goto label_80D10C58;
    case 0x80D10C64u: goto label_80D10C64;
    case 0x80D10C88u: goto label_80D10C88;
    case 0x80D10C8Cu: goto label_80D10C8C;
    case 0x80D10CA8u: goto label_80D10CA8;
    case 0x80D10CACu: goto label_80D10CAC;
    case 0x80D10CB4u: goto label_80D10CB4;
    case 0x80D10CD0u: goto label_80D10CD0;
    case 0x80D10CD4u: goto label_80D10CD4;
    case 0x80D10CD8u: goto label_80D10CD8;
    case 0x80D10CE0u: goto label_80D10CE0;
    case 0x80D10CE8u: goto label_80D10CE8;
    case 0x80D10CECu: goto label_80D10CEC;
    case 0x80D10CF4u: goto label_80D10CF4;
    case 0x80D10D1Cu: goto label_80D10D1C;
    case 0x80D10D24u: goto label_80D10D24;
    case 0x80D10D38u: goto label_80D10D38;
    case 0x80D10D40u: goto label_80D10D40;
    case 0x80D10D48u: goto label_80D10D48;
    case 0x80D10D4Cu: goto label_80D10D4C;
    case 0x80D10DA4u: goto label_80D10DA4;
    case 0x80D10DE8u: goto label_80D10DE8;
    case 0x80D10E00u: goto label_80D10E00;
    case 0x80D10E90u: goto label_80D10E90;
    case 0x80D10EC8u: goto label_80D10EC8;
    case 0x80D10F1Cu: goto label_80D10F1C;
    case 0x80D10F60u: goto label_80D10F60;
    case 0x80D10F78u: goto label_80D10F78;
    case 0x80D11008u: goto label_80D11008;
    case 0x80D11040u: goto label_80D11040;
    case 0x80D11128u: goto label_80D11128;
    case 0x80D1124Cu: goto label_80D1124C;
    case 0x80D11254u: goto label_80D11254;
    case 0x80D1128Cu: goto label_80D1128C;
    case 0x80D11294u: goto label_80D11294;
    case 0x80D1129Cu: goto label_80D1129C;
    case 0x80D112A8u: goto label_80D112A8;
    case 0x80D112C0u: goto label_80D112C0;
    case 0x80D112D8u: goto label_80D112D8;
    case 0x80D112F0u: goto label_80D112F0;
    case 0x80D112FCu: goto label_80D112FC;
    case 0x80D11310u: goto label_80D11310;
    case 0x80D1132Cu: goto label_80D1132C;
    case 0x80D11338u: goto label_80D11338;
    case 0x80D11340u: goto label_80D11340;
    case 0x80D11348u: goto label_80D11348;
    case 0x80D11350u: goto label_80D11350;
    case 0x80D11388u: goto label_80D11388;
    case 0x80D1149Cu: goto label_80D1149C;
    case 0x80D114A4u: goto label_80D114A4;
    case 0x80D114DCu: goto label_80D114DC;
    case 0x80D114E4u: goto label_80D114E4;
    case 0x80D114ECu: goto label_80D114EC;
    case 0x80D114F8u: goto label_80D114F8;
    case 0x80D11510u: goto label_80D11510;
    case 0x80D11528u: goto label_80D11528;
    case 0x80D11540u: goto label_80D11540;
    case 0x80D1154Cu: goto label_80D1154C;
    case 0x80D11560u: goto label_80D11560;
    case 0x80D11580u: goto label_80D11580;
    case 0x80D1158Cu: goto label_80D1158C;
    case 0x80D11598u: goto label_80D11598;
    case 0x80D115A0u: goto label_80D115A0;
    case 0x80D115A8u: goto label_80D115A8;
    case 0x80D115ECu: goto label_80D115EC;
    case 0x80D115F8u: goto label_80D115F8;
    case 0x80D11604u: goto label_80D11604;
    case 0x80D11670u: goto label_80D11670;
    case 0x80D116D0u: goto label_80D116D0;
    case 0x80D11710u: goto label_80D11710;
    case 0x80D11750u: goto label_80D11750;
    case 0x80D117ACu: goto label_80D117AC;
    case 0x80D117D0u: goto label_80D117D0;
    case 0x80D1186Cu: goto label_80D1186C;
    case 0x80D118BCu: goto label_80D118BC;
    case 0x80D1190Cu: goto label_80D1190C;
    case 0x80D11958u: goto label_80D11958;
    case 0x80D119DCu: goto label_80D119DC;
    case 0x80D11A00u: goto label_80D11A00;
    case 0x80D11A7Cu: goto label_80D11A7C;
    case 0x80D11AE4u: goto label_80D11AE4;
    case 0x80D11B4Cu: goto label_80D11B4C;
    case 0x80D11B9Cu: goto label_80D11B9C;
    case 0x80D11BECu: goto label_80D11BEC;
    case 0x80D11C30u: goto label_80D11C30;
    case 0x80D11C58u: goto label_80D11C58;
    case 0x80D11C64u: goto label_80D11C64;
    case 0x80D11C70u: goto label_80D11C70;
    case 0x80D11C7Cu: goto label_80D11C7C;
    default: return;
    }
}

