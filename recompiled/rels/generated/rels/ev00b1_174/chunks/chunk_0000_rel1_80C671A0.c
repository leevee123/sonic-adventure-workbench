// DolRecomp output
#include "../generated.h"

void func_80C671A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C671A0[1209] = {
        &&label_80C671A0,
        &&label_80C671A4,
        &&label_80C671A8,
        &&label_80C671AC,
        &&label_80C671B0,
        &&label_80C671B4,
        &&label_80C671B8,
        &&label_80C671BC,
        &&label_80C671C0,
        &&label_80C671C4,
        &&label_80C671C8,
        &&label_80C671CC,
        &&label_80C671D0,
        &&label_80C671D4,
        &&label_80C671D8,
        &&label_80C671DC,
        &&label_80C671E0,
        &&label_80C671E4,
        &&label_80C671E8,
        &&label_80C671EC,
        &&label_80C671F0,
        &&label_80C671F4,
        &&label_80C671F8,
        &&label_80C671FC,
        &&label_80C67200,
        &&label_80C67204,
        &&label_80C67208,
        &&label_80C6720C,
        &&label_80C67210,
        &&label_80C67214,
        &&label_80C67218,
        &&label_80C6721C,
        &&label_80C67220,
        &&label_80C67224,
        &&label_80C67228,
        &&label_80C6722C,
        &&label_80C67230,
        &&label_80C67234,
        &&label_80C67238,
        &&label_80C6723C,
        &&label_80C67240,
        &&label_80C67244,
        &&label_80C67248,
        &&label_80C6724C,
        &&label_80C67250,
        &&label_80C67254,
        &&label_80C67258,
        &&label_80C6725C,
        &&label_80C67260,
        &&label_80C67264,
        &&label_80C67268,
        &&label_80C6726C,
        &&label_80C67270,
        &&label_80C67274,
        &&label_80C67278,
        &&label_80C6727C,
        &&label_80C67280,
        &&label_80C67284,
        &&label_80C67288,
        &&label_80C6728C,
        &&label_80C67290,
        &&label_80C67294,
        &&label_80C67298,
        &&label_80C6729C,
        &&label_80C672A0,
        &&label_80C672A4,
        &&label_80C672A8,
        &&label_80C672AC,
        &&label_80C672B0,
        &&label_80C672B4,
        &&label_80C672B8,
        &&label_80C672BC,
        &&label_80C672C0,
        &&label_80C672C4,
        &&label_80C672C8,
        &&label_80C672CC,
        &&label_80C672D0,
        &&label_80C672D4,
        &&label_80C672D8,
        &&label_80C672DC,
        &&label_80C672E0,
        &&label_80C672E4,
        &&label_80C672E8,
        &&label_80C672EC,
        &&label_80C672F0,
        &&label_80C672F4,
        &&label_80C672F8,
        &&label_80C672FC,
        &&label_80C67300,
        &&label_80C67304,
        &&label_80C67308,
        &&label_80C6730C,
        &&label_80C67310,
        &&label_80C67314,
        &&label_80C67318,
        &&label_80C6731C,
        &&label_80C67320,
        &&label_80C67324,
        &&label_80C67328,
        &&label_80C6732C,
        &&label_80C67330,
        &&label_80C67334,
        &&label_80C67338,
        &&label_80C6733C,
        &&label_80C67340,
        &&label_80C67344,
        &&label_80C67348,
        &&label_80C6734C,
        &&label_80C67350,
        &&label_80C67354,
        &&label_80C67358,
        &&label_80C6735C,
        &&label_80C67360,
        &&label_80C67364,
        &&label_80C67368,
        &&label_80C6736C,
        &&label_80C67370,
        &&label_80C67374,
        &&label_80C67378,
        &&label_80C6737C,
        &&label_80C67380,
        &&label_80C67384,
        &&label_80C67388,
        &&label_80C6738C,
        &&label_80C67390,
        &&label_80C67394,
        &&label_80C67398,
        &&label_80C6739C,
        &&label_80C673A0,
        &&label_80C673A4,
        &&label_80C673A8,
        &&label_80C673AC,
        &&label_80C673B0,
        &&label_80C673B4,
        &&label_80C673B8,
        &&label_80C673BC,
        &&label_80C673C0,
        &&label_80C673C4,
        &&label_80C673C8,
        &&label_80C673CC,
        &&label_80C673D0,
        &&label_80C673D4,
        &&label_80C673D8,
        &&label_80C673DC,
        &&label_80C673E0,
        &&label_80C673E4,
        &&label_80C673E8,
        &&label_80C673EC,
        &&label_80C673F0,
        &&label_80C673F4,
        &&label_80C673F8,
        &&label_80C673FC,
        &&label_80C67400,
        &&label_80C67404,
        &&label_80C67408,
        &&label_80C6740C,
        &&label_80C67410,
        &&label_80C67414,
        &&label_80C67418,
        &&label_80C6741C,
        &&label_80C67420,
        &&label_80C67424,
        &&label_80C67428,
        &&label_80C6742C,
        &&label_80C67430,
        &&label_80C67434,
        &&label_80C67438,
        &&label_80C6743C,
        &&label_80C67440,
        &&label_80C67444,
        &&label_80C67448,
        &&label_80C6744C,
        &&label_80C67450,
        &&label_80C67454,
        &&label_80C67458,
        &&label_80C6745C,
        &&label_80C67460,
        &&label_80C67464,
        &&label_80C67468,
        &&label_80C6746C,
        &&label_80C67470,
        &&label_80C67474,
        &&label_80C67478,
        &&label_80C6747C,
        &&label_80C67480,
        &&label_80C67484,
        &&label_80C67488,
        &&label_80C6748C,
        &&label_80C67490,
        &&label_80C67494,
        &&label_80C67498,
        &&label_80C6749C,
        &&label_80C674A0,
        &&label_80C674A4,
        &&label_80C674A8,
        &&label_80C674AC,
        &&label_80C674B0,
        &&label_80C674B4,
        &&label_80C674B8,
        &&label_80C674BC,
        &&label_80C674C0,
        &&label_80C674C4,
        &&label_80C674C8,
        &&label_80C674CC,
        &&label_80C674D0,
        &&label_80C674D4,
        &&label_80C674D8,
        &&label_80C674DC,
        &&label_80C674E0,
        &&label_80C674E4,
        &&label_80C674E8,
        &&label_80C674EC,
        &&label_80C674F0,
        &&label_80C674F4,
        &&label_80C674F8,
        &&label_80C674FC,
        &&label_80C67500,
        &&label_80C67504,
        &&label_80C67508,
        &&label_80C6750C,
        &&label_80C67510,
        &&label_80C67514,
        &&label_80C67518,
        &&label_80C6751C,
        &&label_80C67520,
        &&label_80C67524,
        &&label_80C67528,
        &&label_80C6752C,
        &&label_80C67530,
        &&label_80C67534,
        &&label_80C67538,
        &&label_80C6753C,
        &&label_80C67540,
        &&label_80C67544,
        &&label_80C67548,
        &&label_80C6754C,
        &&label_80C67550,
        &&label_80C67554,
        &&label_80C67558,
        &&label_80C6755C,
        &&label_80C67560,
        &&label_80C67564,
        &&label_80C67568,
        &&label_80C6756C,
        &&label_80C67570,
        &&label_80C67574,
        &&label_80C67578,
        &&label_80C6757C,
        &&label_80C67580,
        &&label_80C67584,
        &&label_80C67588,
        &&label_80C6758C,
        &&label_80C67590,
        &&label_80C67594,
        &&label_80C67598,
        &&label_80C6759C,
        &&label_80C675A0,
        &&label_80C675A4,
        &&label_80C675A8,
        &&label_80C675AC,
        &&label_80C675B0,
        &&label_80C675B4,
        &&label_80C675B8,
        &&label_80C675BC,
        &&label_80C675C0,
        &&label_80C675C4,
        &&label_80C675C8,
        &&label_80C675CC,
        &&label_80C675D0,
        &&label_80C675D4,
        &&label_80C675D8,
        &&label_80C675DC,
        &&label_80C675E0,
        &&label_80C675E4,
        &&label_80C675E8,
        &&label_80C675EC,
        &&label_80C675F0,
        &&label_80C675F4,
        &&label_80C675F8,
        &&label_80C675FC,
        &&label_80C67600,
        &&label_80C67604,
        &&label_80C67608,
        &&label_80C6760C,
        &&label_80C67610,
        &&label_80C67614,
        &&label_80C67618,
        &&label_80C6761C,
        &&label_80C67620,
        &&label_80C67624,
        &&label_80C67628,
        &&label_80C6762C,
        &&label_80C67630,
        &&label_80C67634,
        &&label_80C67638,
        &&label_80C6763C,
        &&label_80C67640,
        &&label_80C67644,
        &&label_80C67648,
        &&label_80C6764C,
        &&label_80C67650,
        &&label_80C67654,
        &&label_80C67658,
        &&label_80C6765C,
        &&label_80C67660,
        &&label_80C67664,
        &&label_80C67668,
        &&label_80C6766C,
        &&label_80C67670,
        &&label_80C67674,
        &&label_80C67678,
        &&label_80C6767C,
        &&label_80C67680,
        &&label_80C67684,
        &&label_80C67688,
        &&label_80C6768C,
        &&label_80C67690,
        &&label_80C67694,
        &&label_80C67698,
        &&label_80C6769C,
        &&label_80C676A0,
        &&label_80C676A4,
        &&label_80C676A8,
        &&label_80C676AC,
        &&label_80C676B0,
        &&label_80C676B4,
        &&label_80C676B8,
        &&label_80C676BC,
        &&label_80C676C0,
        &&label_80C676C4,
        &&label_80C676C8,
        &&label_80C676CC,
        &&label_80C676D0,
        &&label_80C676D4,
        &&label_80C676D8,
        &&label_80C676DC,
        &&label_80C676E0,
        &&label_80C676E4,
        &&label_80C676E8,
        &&label_80C676EC,
        &&label_80C676F0,
        &&label_80C676F4,
        &&label_80C676F8,
        &&label_80C676FC,
        &&label_80C67700,
        &&label_80C67704,
        &&label_80C67708,
        &&label_80C6770C,
        &&label_80C67710,
        &&label_80C67714,
        &&label_80C67718,
        &&label_80C6771C,
        &&label_80C67720,
        &&label_80C67724,
        &&label_80C67728,
        &&label_80C6772C,
        &&label_80C67730,
        &&label_80C67734,
        &&label_80C67738,
        &&label_80C6773C,
        &&label_80C67740,
        &&label_80C67744,
        &&label_80C67748,
        &&label_80C6774C,
        &&label_80C67750,
        &&label_80C67754,
        &&label_80C67758,
        &&label_80C6775C,
        &&label_80C67760,
        &&label_80C67764,
        &&label_80C67768,
        &&label_80C6776C,
        &&label_80C67770,
        &&label_80C67774,
        &&label_80C67778,
        &&label_80C6777C,
        &&label_80C67780,
        &&label_80C67784,
        &&label_80C67788,
        &&label_80C6778C,
        &&label_80C67790,
        &&label_80C67794,
        &&label_80C67798,
        &&label_80C6779C,
        &&label_80C677A0,
        &&label_80C677A4,
        &&label_80C677A8,
        &&label_80C677AC,
        &&label_80C677B0,
        &&label_80C677B4,
        &&label_80C677B8,
        &&label_80C677BC,
        &&label_80C677C0,
        &&label_80C677C4,
        &&label_80C677C8,
        &&label_80C677CC,
        &&label_80C677D0,
        &&label_80C677D4,
        &&label_80C677D8,
        &&label_80C677DC,
        &&label_80C677E0,
        &&label_80C677E4,
        &&label_80C677E8,
        &&label_80C677EC,
        &&label_80C677F0,
        &&label_80C677F4,
        &&label_80C677F8,
        &&label_80C677FC,
        &&label_80C67800,
        &&label_80C67804,
        &&label_80C67808,
        &&label_80C6780C,
        &&label_80C67810,
        &&label_80C67814,
        &&label_80C67818,
        &&label_80C6781C,
        &&label_80C67820,
        &&label_80C67824,
        &&label_80C67828,
        &&label_80C6782C,
        &&label_80C67830,
        &&label_80C67834,
        &&label_80C67838,
        &&label_80C6783C,
        &&label_80C67840,
        &&label_80C67844,
        &&label_80C67848,
        &&label_80C6784C,
        &&label_80C67850,
        &&label_80C67854,
        &&label_80C67858,
        &&label_80C6785C,
        &&label_80C67860,
        &&label_80C67864,
        &&label_80C67868,
        &&label_80C6786C,
        &&label_80C67870,
        &&label_80C67874,
        &&label_80C67878,
        &&label_80C6787C,
        &&label_80C67880,
        &&label_80C67884,
        &&label_80C67888,
        &&label_80C6788C,
        &&label_80C67890,
        &&label_80C67894,
        &&label_80C67898,
        &&label_80C6789C,
        &&label_80C678A0,
        &&label_80C678A4,
        &&label_80C678A8,
        &&label_80C678AC,
        &&label_80C678B0,
        &&label_80C678B4,
        &&label_80C678B8,
        &&label_80C678BC,
        &&label_80C678C0,
        &&label_80C678C4,
        &&label_80C678C8,
        &&label_80C678CC,
        &&label_80C678D0,
        &&label_80C678D4,
        &&label_80C678D8,
        &&label_80C678DC,
        &&label_80C678E0,
        &&label_80C678E4,
        &&label_80C678E8,
        &&label_80C678EC,
        &&label_80C678F0,
        &&label_80C678F4,
        &&label_80C678F8,
        &&label_80C678FC,
        &&label_80C67900,
        &&label_80C67904,
        &&label_80C67908,
        &&label_80C6790C,
        &&label_80C67910,
        &&label_80C67914,
        &&label_80C67918,
        &&label_80C6791C,
        &&label_80C67920,
        &&label_80C67924,
        &&label_80C67928,
        &&label_80C6792C,
        &&label_80C67930,
        &&label_80C67934,
        &&label_80C67938,
        &&label_80C6793C,
        &&label_80C67940,
        &&label_80C67944,
        &&label_80C67948,
        &&label_80C6794C,
        &&label_80C67950,
        &&label_80C67954,
        &&label_80C67958,
        &&label_80C6795C,
        &&label_80C67960,
        &&label_80C67964,
        &&label_80C67968,
        &&label_80C6796C,
        &&label_80C67970,
        &&label_80C67974,
        &&label_80C67978,
        &&label_80C6797C,
        &&label_80C67980,
        &&label_80C67984,
        &&label_80C67988,
        &&label_80C6798C,
        &&label_80C67990,
        &&label_80C67994,
        &&label_80C67998,
        &&label_80C6799C,
        &&label_80C679A0,
        &&label_80C679A4,
        &&label_80C679A8,
        &&label_80C679AC,
        &&label_80C679B0,
        &&label_80C679B4,
        &&label_80C679B8,
        &&label_80C679BC,
        &&label_80C679C0,
        &&label_80C679C4,
        &&label_80C679C8,
        &&label_80C679CC,
        &&label_80C679D0,
        &&label_80C679D4,
        &&label_80C679D8,
        &&label_80C679DC,
        &&label_80C679E0,
        &&label_80C679E4,
        &&label_80C679E8,
        &&label_80C679EC,
        &&label_80C679F0,
        &&label_80C679F4,
        &&label_80C679F8,
        &&label_80C679FC,
        &&label_80C67A00,
        &&label_80C67A04,
        &&label_80C67A08,
        &&label_80C67A0C,
        &&label_80C67A10,
        &&label_80C67A14,
        &&label_80C67A18,
        &&label_80C67A1C,
        &&label_80C67A20,
        &&label_80C67A24,
        &&label_80C67A28,
        &&label_80C67A2C,
        &&label_80C67A30,
        &&label_80C67A34,
        &&label_80C67A38,
        &&label_80C67A3C,
        &&label_80C67A40,
        &&label_80C67A44,
        &&label_80C67A48,
        &&label_80C67A4C,
        &&label_80C67A50,
        &&label_80C67A54,
        &&label_80C67A58,
        &&label_80C67A5C,
        &&label_80C67A60,
        &&label_80C67A64,
        &&label_80C67A68,
        &&label_80C67A6C,
        &&label_80C67A70,
        &&label_80C67A74,
        &&label_80C67A78,
        &&label_80C67A7C,
        &&label_80C67A80,
        &&label_80C67A84,
        &&label_80C67A88,
        &&label_80C67A8C,
        &&label_80C67A90,
        &&label_80C67A94,
        &&label_80C67A98,
        &&label_80C67A9C,
        &&label_80C67AA0,
        &&label_80C67AA4,
        &&label_80C67AA8,
        &&label_80C67AAC,
        &&label_80C67AB0,
        &&label_80C67AB4,
        &&label_80C67AB8,
        &&label_80C67ABC,
        &&label_80C67AC0,
        &&label_80C67AC4,
        &&label_80C67AC8,
        &&label_80C67ACC,
        &&label_80C67AD0,
        &&label_80C67AD4,
        &&label_80C67AD8,
        &&label_80C67ADC,
        &&label_80C67AE0,
        &&label_80C67AE4,
        &&label_80C67AE8,
        &&label_80C67AEC,
        &&label_80C67AF0,
        &&label_80C67AF4,
        &&label_80C67AF8,
        &&label_80C67AFC,
        &&label_80C67B00,
        &&label_80C67B04,
        &&label_80C67B08,
        &&label_80C67B0C,
        &&label_80C67B10,
        &&label_80C67B14,
        &&label_80C67B18,
        &&label_80C67B1C,
        &&label_80C67B20,
        &&label_80C67B24,
        &&label_80C67B28,
        &&label_80C67B2C,
        &&label_80C67B30,
        &&label_80C67B34,
        &&label_80C67B38,
        &&label_80C67B3C,
        &&label_80C67B40,
        &&label_80C67B44,
        &&label_80C67B48,
        &&label_80C67B4C,
        &&label_80C67B50,
        &&label_80C67B54,
        &&label_80C67B58,
        &&label_80C67B5C,
        &&label_80C67B60,
        &&label_80C67B64,
        &&label_80C67B68,
        &&label_80C67B6C,
        &&label_80C67B70,
        &&label_80C67B74,
        &&label_80C67B78,
        &&label_80C67B7C,
        &&label_80C67B80,
        &&label_80C67B84,
        &&label_80C67B88,
        &&label_80C67B8C,
        &&label_80C67B90,
        &&label_80C67B94,
        &&label_80C67B98,
        &&label_80C67B9C,
        &&label_80C67BA0,
        &&label_80C67BA4,
        &&label_80C67BA8,
        &&label_80C67BAC,
        &&label_80C67BB0,
        &&label_80C67BB4,
        &&label_80C67BB8,
        &&label_80C67BBC,
        &&label_80C67BC0,
        &&label_80C67BC4,
        &&label_80C67BC8,
        &&label_80C67BCC,
        &&label_80C67BD0,
        &&label_80C67BD4,
        &&label_80C67BD8,
        &&label_80C67BDC,
        &&label_80C67BE0,
        &&label_80C67BE4,
        &&label_80C67BE8,
        &&label_80C67BEC,
        &&label_80C67BF0,
        &&label_80C67BF4,
        &&label_80C67BF8,
        &&label_80C67BFC,
        &&label_80C67C00,
        &&label_80C67C04,
        &&label_80C67C08,
        &&label_80C67C0C,
        &&label_80C67C10,
        &&label_80C67C14,
        &&label_80C67C18,
        &&label_80C67C1C,
        &&label_80C67C20,
        &&label_80C67C24,
        &&label_80C67C28,
        &&label_80C67C2C,
        &&label_80C67C30,
        &&label_80C67C34,
        &&label_80C67C38,
        &&label_80C67C3C,
        &&label_80C67C40,
        &&label_80C67C44,
        &&label_80C67C48,
        &&label_80C67C4C,
        &&label_80C67C50,
        &&label_80C67C54,
        &&label_80C67C58,
        &&label_80C67C5C,
        &&label_80C67C60,
        &&label_80C67C64,
        &&label_80C67C68,
        &&label_80C67C6C,
        &&label_80C67C70,
        &&label_80C67C74,
        &&label_80C67C78,
        &&label_80C67C7C,
        &&label_80C67C80,
        &&label_80C67C84,
        &&label_80C67C88,
        &&label_80C67C8C,
        &&label_80C67C90,
        &&label_80C67C94,
        &&label_80C67C98,
        &&label_80C67C9C,
        &&label_80C67CA0,
        &&label_80C67CA4,
        &&label_80C67CA8,
        &&label_80C67CAC,
        &&label_80C67CB0,
        &&label_80C67CB4,
        &&label_80C67CB8,
        &&label_80C67CBC,
        &&label_80C67CC0,
        &&label_80C67CC4,
        &&label_80C67CC8,
        &&label_80C67CCC,
        &&label_80C67CD0,
        &&label_80C67CD4,
        &&label_80C67CD8,
        &&label_80C67CDC,
        &&label_80C67CE0,
        &&label_80C67CE4,
        &&label_80C67CE8,
        &&label_80C67CEC,
        &&label_80C67CF0,
        &&label_80C67CF4,
        &&label_80C67CF8,
        &&label_80C67CFC,
        &&label_80C67D00,
        &&label_80C67D04,
        &&label_80C67D08,
        &&label_80C67D0C,
        &&label_80C67D10,
        &&label_80C67D14,
        &&label_80C67D18,
        &&label_80C67D1C,
        &&label_80C67D20,
        &&label_80C67D24,
        &&label_80C67D28,
        &&label_80C67D2C,
        &&label_80C67D30,
        &&label_80C67D34,
        &&label_80C67D38,
        &&label_80C67D3C,
        &&label_80C67D40,
        &&label_80C67D44,
        &&label_80C67D48,
        &&label_80C67D4C,
        &&label_80C67D50,
        &&label_80C67D54,
        &&label_80C67D58,
        &&label_80C67D5C,
        &&label_80C67D60,
        &&label_80C67D64,
        &&label_80C67D68,
        &&label_80C67D6C,
        &&label_80C67D70,
        &&label_80C67D74,
        &&label_80C67D78,
        &&label_80C67D7C,
        &&label_80C67D80,
        &&label_80C67D84,
        &&label_80C67D88,
        &&label_80C67D8C,
        &&label_80C67D90,
        &&label_80C67D94,
        &&label_80C67D98,
        &&label_80C67D9C,
        &&label_80C67DA0,
        &&label_80C67DA4,
        &&label_80C67DA8,
        &&label_80C67DAC,
        &&label_80C67DB0,
        &&label_80C67DB4,
        &&label_80C67DB8,
        &&label_80C67DBC,
        &&label_80C67DC0,
        &&label_80C67DC4,
        &&label_80C67DC8,
        &&label_80C67DCC,
        &&label_80C67DD0,
        &&label_80C67DD4,
        &&label_80C67DD8,
        &&label_80C67DDC,
        &&label_80C67DE0,
        &&label_80C67DE4,
        &&label_80C67DE8,
        &&label_80C67DEC,
        &&label_80C67DF0,
        &&label_80C67DF4,
        &&label_80C67DF8,
        &&label_80C67DFC,
        &&label_80C67E00,
        &&label_80C67E04,
        &&label_80C67E08,
        &&label_80C67E0C,
        &&label_80C67E10,
        &&label_80C67E14,
        &&label_80C67E18,
        &&label_80C67E1C,
        &&label_80C67E20,
        &&label_80C67E24,
        &&label_80C67E28,
        &&label_80C67E2C,
        &&label_80C67E30,
        &&label_80C67E34,
        &&label_80C67E38,
        &&label_80C67E3C,
        &&label_80C67E40,
        &&label_80C67E44,
        &&label_80C67E48,
        &&label_80C67E4C,
        &&label_80C67E50,
        &&label_80C67E54,
        &&label_80C67E58,
        &&label_80C67E5C,
        &&label_80C67E60,
        &&label_80C67E64,
        &&label_80C67E68,
        &&label_80C67E6C,
        &&label_80C67E70,
        &&label_80C67E74,
        &&label_80C67E78,
        &&label_80C67E7C,
        &&label_80C67E80,
        &&label_80C67E84,
        &&label_80C67E88,
        &&label_80C67E8C,
        &&label_80C67E90,
        &&label_80C67E94,
        &&label_80C67E98,
        &&label_80C67E9C,
        &&label_80C67EA0,
        &&label_80C67EA4,
        &&label_80C67EA8,
        &&label_80C67EAC,
        &&label_80C67EB0,
        &&label_80C67EB4,
        &&label_80C67EB8,
        &&label_80C67EBC,
        &&label_80C67EC0,
        &&label_80C67EC4,
        &&label_80C67EC8,
        &&label_80C67ECC,
        &&label_80C67ED0,
        &&label_80C67ED4,
        &&label_80C67ED8,
        &&label_80C67EDC,
        &&label_80C67EE0,
        &&label_80C67EE4,
        &&label_80C67EE8,
        &&label_80C67EEC,
        &&label_80C67EF0,
        &&label_80C67EF4,
        &&label_80C67EF8,
        &&label_80C67EFC,
        &&label_80C67F00,
        &&label_80C67F04,
        &&label_80C67F08,
        &&label_80C67F0C,
        &&label_80C67F10,
        &&label_80C67F14,
        &&label_80C67F18,
        &&label_80C67F1C,
        &&label_80C67F20,
        &&label_80C67F24,
        &&label_80C67F28,
        &&label_80C67F2C,
        &&label_80C67F30,
        &&label_80C67F34,
        &&label_80C67F38,
        &&label_80C67F3C,
        &&label_80C67F40,
        &&label_80C67F44,
        &&label_80C67F48,
        &&label_80C67F4C,
        &&label_80C67F50,
        &&label_80C67F54,
        &&label_80C67F58,
        &&label_80C67F5C,
        &&label_80C67F60,
        &&label_80C67F64,
        &&label_80C67F68,
        &&label_80C67F6C,
        &&label_80C67F70,
        &&label_80C67F74,
        &&label_80C67F78,
        &&label_80C67F7C,
        &&label_80C67F80,
        &&label_80C67F84,
        &&label_80C67F88,
        &&label_80C67F8C,
        &&label_80C67F90,
        &&label_80C67F94,
        &&label_80C67F98,
        &&label_80C67F9C,
        &&label_80C67FA0,
        &&label_80C67FA4,
        &&label_80C67FA8,
        &&label_80C67FAC,
        &&label_80C67FB0,
        &&label_80C67FB4,
        &&label_80C67FB8,
        &&label_80C67FBC,
        &&label_80C67FC0,
        &&label_80C67FC4,
        &&label_80C67FC8,
        &&label_80C67FCC,
        &&label_80C67FD0,
        &&label_80C67FD4,
        &&label_80C67FD8,
        &&label_80C67FDC,
        &&label_80C67FE0,
        &&label_80C67FE4,
        &&label_80C67FE8,
        &&label_80C67FEC,
        &&label_80C67FF0,
        &&label_80C67FF4,
        &&label_80C67FF8,
        &&label_80C67FFC,
        &&label_80C68000,
        &&label_80C68004,
        &&label_80C68008,
        &&label_80C6800C,
        &&label_80C68010,
        &&label_80C68014,
        &&label_80C68018,
        &&label_80C6801C,
        &&label_80C68020,
        &&label_80C68024,
        &&label_80C68028,
        &&label_80C6802C,
        &&label_80C68030,
        &&label_80C68034,
        &&label_80C68038,
        &&label_80C6803C,
        &&label_80C68040,
        &&label_80C68044,
        &&label_80C68048,
        &&label_80C6804C,
        &&label_80C68050,
        &&label_80C68054,
        &&label_80C68058,
        &&label_80C6805C,
        &&label_80C68060,
        &&label_80C68064,
        &&label_80C68068,
        &&label_80C6806C,
        &&label_80C68070,
        &&label_80C68074,
        &&label_80C68078,
        &&label_80C6807C,
        &&label_80C68080,
        &&label_80C68084,
        &&label_80C68088,
        &&label_80C6808C,
        &&label_80C68090,
        &&label_80C68094,
        &&label_80C68098,
        &&label_80C6809C,
        &&label_80C680A0,
        &&label_80C680A4,
        &&label_80C680A8,
        &&label_80C680AC,
        &&label_80C680B0,
        &&label_80C680B4,
        &&label_80C680B8,
        &&label_80C680BC,
        &&label_80C680C0,
        &&label_80C680C4,
        &&label_80C680C8,
        &&label_80C680CC,
        &&label_80C680D0,
        &&label_80C680D4,
        &&label_80C680D8,
        &&label_80C680DC,
        &&label_80C680E0,
        &&label_80C680E4,
        &&label_80C680E8,
        &&label_80C680EC,
        &&label_80C680F0,
        &&label_80C680F4,
        &&label_80C680F8,
        &&label_80C680FC,
        &&label_80C68100,
        &&label_80C68104,
        &&label_80C68108,
        &&label_80C6810C,
        &&label_80C68110,
        &&label_80C68114,
        &&label_80C68118,
        &&label_80C6811C,
        &&label_80C68120,
        &&label_80C68124,
        &&label_80C68128,
        &&label_80C6812C,
        &&label_80C68130,
        &&label_80C68134,
        &&label_80C68138,
        &&label_80C6813C,
        &&label_80C68140,
        &&label_80C68144,
        &&label_80C68148,
        &&label_80C6814C,
        &&label_80C68150,
        &&label_80C68154,
        &&label_80C68158,
        &&label_80C6815C,
        &&label_80C68160,
        &&label_80C68164,
        &&label_80C68168,
        &&label_80C6816C,
        &&label_80C68170,
        &&label_80C68174,
        &&label_80C68178,
        &&label_80C6817C,
        &&label_80C68180,
        &&label_80C68184,
        &&label_80C68188,
        &&label_80C6818C,
        &&label_80C68190,
        &&label_80C68194,
        &&label_80C68198,
        &&label_80C6819C,
        &&label_80C681A0,
        &&label_80C681A4,
        &&label_80C681A8,
        &&label_80C681AC,
        &&label_80C681B0,
        &&label_80C681B4,
        &&label_80C681B8,
        &&label_80C681BC,
        &&label_80C681C0,
        &&label_80C681C4,
        &&label_80C681C8,
        &&label_80C681CC,
        &&label_80C681D0,
        &&label_80C681D4,
        &&label_80C681D8,
        &&label_80C681DC,
        &&label_80C681E0,
        &&label_80C681E4,
        &&label_80C681E8,
        &&label_80C681EC,
        &&label_80C681F0,
        &&label_80C681F4,
        &&label_80C681F8,
        &&label_80C681FC,
        &&label_80C68200,
        &&label_80C68204,
        &&label_80C68208,
        &&label_80C6820C,
        &&label_80C68210,
        &&label_80C68214,
        &&label_80C68218,
        &&label_80C6821C,
        &&label_80C68220,
        &&label_80C68224,
        &&label_80C68228,
        &&label_80C6822C,
        &&label_80C68230,
        &&label_80C68234,
        &&label_80C68238,
        &&label_80C6823C,
        &&label_80C68240,
        &&label_80C68244,
        &&label_80C68248,
        &&label_80C6824C,
        &&label_80C68250,
        &&label_80C68254,
        &&label_80C68258,
        &&label_80C6825C,
        &&label_80C68260,
        &&label_80C68264,
        &&label_80C68268,
        &&label_80C6826C,
        &&label_80C68270,
        &&label_80C68274,
        &&label_80C68278,
        &&label_80C6827C,
        &&label_80C68280,
        &&label_80C68284,
        &&label_80C68288,
        &&label_80C6828C,
        &&label_80C68290,
        &&label_80C68294,
        &&label_80C68298,
        &&label_80C6829C,
        &&label_80C682A0,
        &&label_80C682A4,
        &&label_80C682A8,
        &&label_80C682AC,
        &&label_80C682B0,
        &&label_80C682B4,
        &&label_80C682B8,
        &&label_80C682BC,
        &&label_80C682C0,
        &&label_80C682C4,
        &&label_80C682C8,
        &&label_80C682CC,
        &&label_80C682D0,
        &&label_80C682D4,
        &&label_80C682D8,
        &&label_80C682DC,
        &&label_80C682E0,
        &&label_80C682E4,
        &&label_80C682E8,
        &&label_80C682EC,
        &&label_80C682F0,
        &&label_80C682F4,
        &&label_80C682F8,
        &&label_80C682FC,
        &&label_80C68300,
        &&label_80C68304,
        &&label_80C68308,
        &&label_80C6830C,
        &&label_80C68310,
        &&label_80C68314,
        &&label_80C68318,
        &&label_80C6831C,
        &&label_80C68320,
        &&label_80C68324,
        &&label_80C68328,
        &&label_80C6832C,
        &&label_80C68330,
        &&label_80C68334,
        &&label_80C68338,
        &&label_80C6833C,
        &&label_80C68340,
        &&label_80C68344,
        &&label_80C68348,
        &&label_80C6834C,
        &&label_80C68350,
        &&label_80C68354,
        &&label_80C68358,
        &&label_80C6835C,
        &&label_80C68360,
        &&label_80C68364,
        &&label_80C68368,
        &&label_80C6836C,
        &&label_80C68370,
        &&label_80C68374,
        &&label_80C68378,
        &&label_80C6837C,
        &&label_80C68380,
        &&label_80C68384,
        &&label_80C68388,
        &&label_80C6838C,
        &&label_80C68390,
        &&label_80C68394,
        &&label_80C68398,
        &&label_80C6839C,
        &&label_80C683A0,
        &&label_80C683A4,
        &&label_80C683A8,
        &&label_80C683AC,
        &&label_80C683B0,
        &&label_80C683B4,
        &&label_80C683B8,
        &&label_80C683BC,
        &&label_80C683C0,
        &&label_80C683C4,
        &&label_80C683C8,
        &&label_80C683CC,
        &&label_80C683D0,
        &&label_80C683D4,
        &&label_80C683D8,
        &&label_80C683DC,
        &&label_80C683E0,
        &&label_80C683E4,
        &&label_80C683E8,
        &&label_80C683EC,
        &&label_80C683F0,
        &&label_80C683F4,
        &&label_80C683F8,
        &&label_80C683FC,
        &&label_80C68400,
        &&label_80C68404,
        &&label_80C68408,
        &&label_80C6840C,
        &&label_80C68410,
        &&label_80C68414,
        &&label_80C68418,
        &&label_80C6841C,
        &&label_80C68420,
        &&label_80C68424,
        &&label_80C68428,
        &&label_80C6842C,
        &&label_80C68430,
        &&label_80C68434,
        &&label_80C68438,
        &&label_80C6843C,
        &&label_80C68440,
        &&label_80C68444,
        &&label_80C68448,
        &&label_80C6844C,
        &&label_80C68450,
        &&label_80C68454,
        &&label_80C68458,
        &&label_80C6845C,
        &&label_80C68460,
        &&label_80C68464,
        &&label_80C68468,
        &&label_80C6846C,
        &&label_80C68470,
        &&label_80C68474,
        &&label_80C68478,
        &&label_80C6847C,
        &&label_80C68480
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C671A0u && pc <= 0x80C68480u && ((pc - 0x80C671A0u) & 3u) == 0u)
            goto *pc_table_80C671A0[(pc - 0x80C671A0u) >> 2];
    }
    return;
label_80C671A0:
    ctx->pc = 0x80C671A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C671A0: stwu     r1, -16(r1)
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
label_80C671A4:
    ctx->pc = 0x80C671A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C671A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C671A8:
    ctx->pc = 0x80C671A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C671A8: stw     r0, 20(r1)
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
label_80C671AC:
    ctx->pc = 0x80C671ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671ACu)) return;
    // 80C671AC: cmpwi   r3, 2
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

label_80C671B0:
    ctx->pc = 0x80C671B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671B0u)) return;
    // 80C671B0: bc    12, 2, 0x80C67AB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67AB0;
        }
    }

label_80C671B4:
    ctx->pc = 0x80C671B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C671B4: bc    4, 0, 0x80C671C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C671C8;
        }
    }

label_80C671B8:
    ctx->pc = 0x80C671B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C671B8: cmpwi   r3, 0
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

label_80C671BC:
    ctx->pc = 0x80C671BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671BCu)) return;
    // 80C671BC: bc    12, 2, 0x80C67AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67AF8;
        }
    }

label_80C671C0:
    ctx->pc = 0x80C671C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C671C0: bc    4, 0, 0x80C671D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C671D0;
        }
    }

label_80C671C4:
    ctx->pc = 0x80C671C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C671C4: b       0x80C67AF8
    {
            goto label_80C67AF8;
    }

label_80C671C8:
    ctx->pc = 0x80C671C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C671C8: cmpwi   r3, 4
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

label_80C671CC:
    ctx->pc = 0x80C671CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671CCu)) return;
    // 80C671CC: b       0x80C67AF8
    {
            goto label_80C67AF8;
    }

label_80C671D0:
    ctx->pc = 0x80C671D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C671D0: bl      0x8045DE7C
    {
            ctx->lr = 0x80C671D4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C671D4:
    ctx->pc = 0x80C671D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C671D4: bl      0x80460A60
    {
            ctx->lr = 0x80C671D8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C671D8:
    ctx->pc = 0x80C671D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C671D8: bl      0x80460A24
    {
            ctx->lr = 0x80C671DCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C671DC:
    ctx->pc = 0x80C671DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C671DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C671E0:
    ctx->pc = 0x80C671E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671E0u)) return;
    // 80C671E0: bl      0x8045EC10
    {
            ctx->lr = 0x80C671E4u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C671E4:
    ctx->pc = 0x80C671E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C671E4: li      r3, 91
    ctx->gpr[3] = (u32)(s32)(91);

label_80C671E8:
    ctx->pc = 0x80C671E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671E8u)) return;
    // 80C671E8: bl      0x80406090
    {
            ctx->lr = 0x80C671ECu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C671EC:
    ctx->pc = 0x80C671ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C671ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C671EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C671F0:
    ctx->pc = 0x80C671F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671F0u)) return;
    // 80C671F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C671F4:
    ctx->pc = 0x80C671F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671F4u)) return;
    // 80C671F4: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C671F8:
    ctx->pc = 0x80C671F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671F8u)) return;
    // 80C671F8: addi    r5, r5, 11920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11920);

label_80C671FC:
    ctx->pc = 0x80C671FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C671FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C671FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C671FCu)) return;
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
label_80C67200:
    ctx->pc = 0x80C67200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67200u)) return;
    // 80C67200: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67204:
    ctx->pc = 0x80C67204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67204u)) return;
    // 80C67204: addi    r5, r5, 11924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11924);

label_80C67208:
    ctx->pc = 0x80C67208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67208: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67208u)) return;
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
label_80C6720C:
    ctx->pc = 0x80C6720Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6720Cu)) return;
    // 80C6720C: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67210:
    ctx->pc = 0x80C67210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67210u)) return;
    // 80C67210: addi    r5, r5, 11928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11928);

label_80C67214:
    ctx->pc = 0x80C67214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67214: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67214u)) return;
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
label_80C67218:
    ctx->pc = 0x80C67218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67218u)) return;
    // 80C67218: bl      0x8045C750
    {
            ctx->lr = 0x80C6721Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C6721C:
    ctx->pc = 0x80C6721Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6721Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C6721C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67220:
    ctx->pc = 0x80C67220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67220u)) return;
    // 80C67220: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C67224:
    ctx->pc = 0x80C67224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67224u)) return;
    // 80C67224: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80C67228:
    ctx->pc = 0x80C67228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67228u)) return;
    // 80C67228: li      r6, 1053
    ctx->gpr[6] = (u32)(s32)(1053);

label_80C6722C:
    ctx->pc = 0x80C6722Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6722Cu)) return;
    // 80C6722C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C67230:
    ctx->pc = 0x80C67230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67230u)) return;
    // 80C67230: bl      0x8045C7B4
    {
            ctx->lr = 0x80C67234u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C67234:
    ctx->pc = 0x80C67234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C67234: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67238:
    ctx->pc = 0x80C67238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67238u)) return;
    // 80C67238: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80C6723C:
    ctx->pc = 0x80C6723Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6723Cu)) return;
    // 80C6723C: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67240:
    ctx->pc = 0x80C67240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67240u)) return;
    // 80C67240: addi    r5, r5, 11932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11932);

label_80C67244:
    ctx->pc = 0x80C67244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67244: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67244u)) return;
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
label_80C67248:
    ctx->pc = 0x80C67248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67248u)) return;
    // 80C67248: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C6724C:
    ctx->pc = 0x80C6724Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6724Cu)) return;
    // 80C6724C: addi    r5, r5, 11936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11936);

label_80C67250:
    ctx->pc = 0x80C67250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67250: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67250u)) return;
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
label_80C67254:
    ctx->pc = 0x80C67254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67254u)) return;
    // 80C67254: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67258:
    ctx->pc = 0x80C67258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67258u)) return;
    // 80C67258: addi    r5, r5, 11940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11940);

label_80C6725C:
    ctx->pc = 0x80C6725Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6725Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6725C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6725Cu)) return;
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
label_80C67260:
    ctx->pc = 0x80C67260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67260u)) return;
    // 80C67260: bl      0x8045C750
    {
            ctx->lr = 0x80C67264u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C67264:
    ctx->pc = 0x80C67264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67268:
    ctx->pc = 0x80C67268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67268u)) return;
    // 80C67268: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80C6726C:
    ctx->pc = 0x80C6726Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6726Cu)) return;
    // 80C6726C: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_80C67270:
    ctx->pc = 0x80C67270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67270u)) return;
    // 80C67270: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C67274:
    ctx->pc = 0x80C67274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67274u)) return;
    // 80C67274: addi    r6, r6, -227
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-227);

label_80C67278:
    ctx->pc = 0x80C67278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67278u)) return;
    // 80C67278: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6727C:
    ctx->pc = 0x80C6727Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6727Cu)) return;
    // 80C6727C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C67280u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C67280:
    ctx->pc = 0x80C67280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67280: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67284:
    ctx->pc = 0x80C67284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67284u)) return;
    // 80C67284: bl      0x8045F220
    {
            ctx->lr = 0x80C67288u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67288:
    ctx->pc = 0x80C67288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C67288: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C6728C:
    ctx->pc = 0x80C6728Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6728Cu)) return;
    // 80C6728C: addi    r4, r4, 11944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11944);

label_80C67290:
    ctx->pc = 0x80C67290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67290: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67290u)) return;
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
label_80C67294:
    ctx->pc = 0x80C67294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67294u)) return;
    // 80C67294: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67298:
    ctx->pc = 0x80C67298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67298u)) return;
    // 80C67298: addi    r4, r4, 11948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11948);

label_80C6729C:
    ctx->pc = 0x80C6729Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6729Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6729C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C6729Cu)) return;
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
label_80C672A0:
    ctx->pc = 0x80C672A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672A0u)) return;
    // 80C672A0: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C672A4:
    ctx->pc = 0x80C672A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672A4u)) return;
    // 80C672A4: addi    r4, r4, 11952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11952);

label_80C672A8:
    ctx->pc = 0x80C672A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C672A8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C672A8u)) return;
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
label_80C672AC:
    ctx->pc = 0x80C672ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672ACu)) return;
    // 80C672AC: bl      0x8045EF2C
    {
            ctx->lr = 0x80C672B0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C672B0:
    ctx->pc = 0x80C672B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C672B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C672B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C672B4:
    ctx->pc = 0x80C672B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672B4u)) return;
    // 80C672B4: bl      0x8045F220
    {
            ctx->lr = 0x80C672B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C672B8:
    ctx->pc = 0x80C672B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C672B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C672B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C672BC:
    ctx->pc = 0x80C672BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672BCu)) return;
    // 80C672BC: li      r5, 21046
    ctx->gpr[5] = (u32)(s32)(21046);

label_80C672C0:
    ctx->pc = 0x80C672C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672C0u)) return;
    // 80C672C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C672C4:
    ctx->pc = 0x80C672C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672C4u)) return;
    // 80C672C4: bl      0x8045EEA8
    {
            ctx->lr = 0x80C672C8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C672C8:
    ctx->pc = 0x80C672C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C672C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C672C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C672CC:
    ctx->pc = 0x80C672CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672CCu)) return;
    // 80C672CC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C672D0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C672D0:
    ctx->pc = 0x80C672D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C672D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C672D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C672D4:
    ctx->pc = 0x80C672D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672D4u)) return;
    // 80C672D4: bl      0x8045F220
    {
            ctx->lr = 0x80C672D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C672D8:
    ctx->pc = 0x80C672D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C672D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C672D8: bl      0x8045EB8C
    {
            ctx->lr = 0x80C672DCu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C672DC:
    ctx->pc = 0x80C672DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C672DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C672DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C672E0:
    ctx->pc = 0x80C672E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672E0u)) return;
    // 80C672E0: bl      0x8045F220
    {
            ctx->lr = 0x80C672E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C672E4:
    ctx->pc = 0x80C672E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C672E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C672E4: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C672E8:
    ctx->pc = 0x80C672E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672E8u)) return;
    // 80C672E8: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80C672EC:
    ctx->pc = 0x80C672ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672ECu)) return;
    // 80C672EC: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C672F0:
    ctx->pc = 0x80C672F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672F0u)) return;
    // 80C672F0: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C672F4:
    ctx->pc = 0x80C672F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672F4u)) return;
    // 80C672F4: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C672F8:
    ctx->pc = 0x80C672F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672F8u)) return;
    // 80C672F8: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C672FC:
    ctx->pc = 0x80C672FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C672FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C672FC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C672FCu)) return;
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
label_80C67300:
    ctx->pc = 0x80C67300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67300u)) return;
    // 80C67300: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C67304:
    ctx->pc = 0x80C67304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67304u)) return;
    // 80C67304: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C67308:
    ctx->pc = 0x80C67308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67308u)) return;
    // 80C67308: bl      0x8045EBE4
    {
            ctx->lr = 0x80C6730Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C6730C:
    ctx->pc = 0x80C6730Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6730Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80C6730C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67310:
    ctx->pc = 0x80C67310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67310u)) return;
    // 80C67310: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80C67314:
    ctx->pc = 0x80C67314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67314u)) return;
    // 80C67314: addi    r4, r4, 13404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13404);

label_80C67318:
    ctx->pc = 0x80C67318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67318u)) return;
    // 80C67318: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C6731C:
    ctx->pc = 0x80C6731Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6731Cu)) return;
    // 80C6731C: addi    r5, r5, 11960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11960);

label_80C67320:
    ctx->pc = 0x80C67320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C67320: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67320u)) return;
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
label_80C67324:
    ctx->pc = 0x80C67324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67324u)) return;
    // 80C67324: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67328:
    ctx->pc = 0x80C67328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67328u)) return;
    // 80C67328: addi    r5, r5, 11964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11964);

label_80C6732C:
    ctx->pc = 0x80C6732Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6732Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C6732C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6732Cu)) return;
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
label_80C67330:
    ctx->pc = 0x80C67330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67330u)) return;
    // 80C67330: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67334:
    ctx->pc = 0x80C67334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67334u)) return;
    // 80C67334: addi    r5, r5, 11968
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11968);

label_80C67338:
    ctx->pc = 0x80C67338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67338: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67338u)) return;
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
label_80C6733C:
    ctx->pc = 0x80C6733Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6733Cu)) return;
    // 80C6733C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C67340:
    ctx->pc = 0x80C67340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67340u)) return;
    // 80C67340: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C67344:
    ctx->pc = 0x80C67344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67344u)) return;
    // 80C67344: addi    r6, r6, -22788
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22788);

label_80C67348:
    ctx->pc = 0x80C67348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67348u)) return;
    // 80C67348: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6734C:
    ctx->pc = 0x80C6734Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6734Cu)) return;
    // 80C6734C: bl      0x8045ED84
    {
            ctx->lr = 0x80C67350u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80C67350:
    ctx->pc = 0x80C67350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67350: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C67354:
    ctx->pc = 0x80C67354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67354u)) return;
    // 80C67354: bl      0x8045F7C8
    {
            ctx->lr = 0x80C67358u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C67358:
    ctx->pc = 0x80C67358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67358: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C6735C:
    ctx->pc = 0x80C6735Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6735Cu)) return;
    // 80C6735C: bl      0x8045F220
    {
            ctx->lr = 0x80C67360u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67360:
    ctx->pc = 0x80C67360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C67360: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67364:
    ctx->pc = 0x80C67364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67364u)) return;
    // 80C67364: addi    r4, r4, 11972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11972);

label_80C67368:
    ctx->pc = 0x80C67368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67368: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67368u)) return;
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
label_80C6736C:
    ctx->pc = 0x80C6736Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6736Cu)) return;
    // 80C6736C: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67370:
    ctx->pc = 0x80C67370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67370u)) return;
    // 80C67370: addi    r4, r4, 11976
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11976);

label_80C67374:
    ctx->pc = 0x80C67374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67374: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67374u)) return;
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
label_80C67378:
    ctx->pc = 0x80C67378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67378u)) return;
    // 80C67378: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C6737C:
    ctx->pc = 0x80C6737Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6737Cu)) return;
    // 80C6737C: addi    r4, r4, 11980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11980);

label_80C67380:
    ctx->pc = 0x80C67380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67380: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67380u)) return;
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
label_80C67384:
    ctx->pc = 0x80C67384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67384u)) return;
    // 80C67384: bl      0x8045EF2C
    {
            ctx->lr = 0x80C67388u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C67388:
    ctx->pc = 0x80C67388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67388: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C6738C:
    ctx->pc = 0x80C6738Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6738Cu)) return;
    // 80C6738C: bl      0x8045F220
    {
            ctx->lr = 0x80C67390u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67390:
    ctx->pc = 0x80C67390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C67390: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C67394:
    ctx->pc = 0x80C67394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67394u)) return;
    // 80C67394: addi    r4, r5, -32
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-32);

label_80C67398:
    ctx->pc = 0x80C67398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67398u)) return;
    // 80C67398: addi    r5, r5, -12414
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12414);

label_80C6739C:
    ctx->pc = 0x80C6739Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6739Cu)) return;
    // 80C6739C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C673A0:
    ctx->pc = 0x80C673A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673A0u)) return;
    // 80C673A0: bl      0x8045EEA8
    {
            ctx->lr = 0x80C673A4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C673A4:
    ctx->pc = 0x80C673A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C673A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C673A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C673A8:
    ctx->pc = 0x80C673A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673A8u)) return;
    // 80C673A8: bl      0x8045F220
    {
            ctx->lr = 0x80C673ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C673AC:
    ctx->pc = 0x80C673ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C673ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C673AC: bl      0x8045EB8C
    {
            ctx->lr = 0x80C673B0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C673B0:
    ctx->pc = 0x80C673B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C673B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C673B0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C673B4:
    ctx->pc = 0x80C673B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673B4u)) return;
    // 80C673B4: bl      0x8045F220
    {
            ctx->lr = 0x80C673B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C673B8:
    ctx->pc = 0x80C673B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C673B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C673B8: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C673BC:
    ctx->pc = 0x80C673BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673BCu)) return;
    // 80C673BC: addi    r4, r4, -23304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23304);

label_80C673C0:
    ctx->pc = 0x80C673C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673C0u)) return;
    // 80C673C0: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C673C4:
    ctx->pc = 0x80C673C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673C4u)) return;
    // 80C673C4: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C673C8:
    ctx->pc = 0x80C673C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673C8u)) return;
    // 80C673C8: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C673CC:
    ctx->pc = 0x80C673CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673CCu)) return;
    // 80C673CC: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C673D0:
    ctx->pc = 0x80C673D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C673D0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C673D0u)) return;
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
label_80C673D4:
    ctx->pc = 0x80C673D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673D4u)) return;
    // 80C673D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C673D8:
    ctx->pc = 0x80C673D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673D8u)) return;
    // 80C673D8: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C673DC:
    ctx->pc = 0x80C673DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673DCu)) return;
    // 80C673DC: bl      0x8045EBE4
    {
            ctx->lr = 0x80C673E0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C673E0:
    ctx->pc = 0x80C673E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C673E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C673E0: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C673E4:
    ctx->pc = 0x80C673E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673E4u)) return;
    // 80C673E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C673E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C673E8:
    ctx->pc = 0x80C673E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C673E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C673E8: li      r3, 1177
    ctx->gpr[3] = (u32)(s32)(1177);

label_80C673EC:
    ctx->pc = 0x80C673ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673ECu)) return;
    // 80C673EC: bl      0x8045BFA0
    {
            ctx->lr = 0x80C673F0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C673F0:
    ctx->pc = 0x80C673F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C673F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C673F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C673F4:
    ctx->pc = 0x80C673F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673F4u)) return;
    // 80C673F4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C673F8:
    ctx->pc = 0x80C673F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673F8u)) return;
    // 80C673F8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C673FC:
    ctx->pc = 0x80C673FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C673FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C673FC: lwz     r0, 0(r4)
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
label_80C67400:
    ctx->pc = 0x80C67400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67400u)) return;
    // 80C67400: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C67404:
    ctx->pc = 0x80C67404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67404u)) return;
    // 80C67404: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67408:
    ctx->pc = 0x80C67408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67408u)) return;
    // 80C67408: addi    r4, r4, 13120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13120);

label_80C6740C:
    ctx->pc = 0x80C6740Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6740Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6740C: lwzx    r4, r4, r0
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
label_80C67410:
    ctx->pc = 0x80C67410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67410: lwz     r4, 0(r4)
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
label_80C67414:
    ctx->pc = 0x80C67414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67414u)) return;
    // 80C67414: bl      0x8045F608
    {
            ctx->lr = 0x80C67418u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C67418:
    ctx->pc = 0x80C67418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67418: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C6741C:
    ctx->pc = 0x80C6741Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6741Cu)) return;
    // 80C6741C: bl      0x8045F220
    {
            ctx->lr = 0x80C67420u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67420:
    ctx->pc = 0x80C67420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C67420: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C67424:
    ctx->pc = 0x80C67424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67424u)) return;
    // 80C67424: addi    r4, r4, 2016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2016);

label_80C67428:
    ctx->pc = 0x80C67428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67428u)) return;
    // 80C67428: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C6742C:
    ctx->pc = 0x80C6742Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6742Cu)) return;
    // 80C6742C: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C67430:
    ctx->pc = 0x80C67430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67430u)) return;
    // 80C67430: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C67434:
    ctx->pc = 0x80C67434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67434u)) return;
    // 80C67434: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C67438:
    ctx->pc = 0x80C67438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67438: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C67438u)) return;
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
label_80C6743C:
    ctx->pc = 0x80C6743Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6743Cu)) return;
    // 80C6743C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C67440:
    ctx->pc = 0x80C67440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67440u)) return;
    // 80C67440: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C67444:
    ctx->pc = 0x80C67444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67444u)) return;
    // 80C67444: bl      0x8045EBE4
    {
            ctx->lr = 0x80C67448u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C67448:
    ctx->pc = 0x80C67448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67448: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C6744C:
    ctx->pc = 0x80C6744Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6744Cu)) return;
    // 80C6744C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C67450u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C67450:
    ctx->pc = 0x80C67450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67450: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67454:
    ctx->pc = 0x80C67454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67454u)) return;
    // 80C67454: bl      0x8045F220
    {
            ctx->lr = 0x80C67458u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67458:
    ctx->pc = 0x80C67458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C67458: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C6745C:
    ctx->pc = 0x80C6745Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6745Cu)) return;
    // 80C6745C: addi    r4, r4, -23304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23304);

label_80C67460:
    ctx->pc = 0x80C67460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67460u)) return;
    // 80C67460: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C67464:
    ctx->pc = 0x80C67464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67464u)) return;
    // 80C67464: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C67468:
    ctx->pc = 0x80C67468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67468u)) return;
    // 80C67468: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C6746C:
    ctx->pc = 0x80C6746Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6746Cu)) return;
    // 80C6746C: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C67470:
    ctx->pc = 0x80C67470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67470: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C67470u)) return;
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
label_80C67474:
    ctx->pc = 0x80C67474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67474u)) return;
    // 80C67474: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C67478:
    ctx->pc = 0x80C67478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67478u)) return;
    // 80C67478: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C6747C:
    ctx->pc = 0x80C6747Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6747Cu)) return;
    // 80C6747C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C67480u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C67480:
    ctx->pc = 0x80C67480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67480: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C67484:
    ctx->pc = 0x80C67484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67484u)) return;
    // 80C67484: bl      0x8045F7C8
    {
            ctx->lr = 0x80C67488u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C67488:
    ctx->pc = 0x80C67488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C67488: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6748C:
    ctx->pc = 0x80C6748Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6748Cu)) return;
    // 80C6748C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C67490:
    ctx->pc = 0x80C67490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67490u)) return;
    // 80C67490: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67494:
    ctx->pc = 0x80C67494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67494u)) return;
    // 80C67494: addi    r5, r5, 11984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11984);

label_80C67498:
    ctx->pc = 0x80C67498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67498: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67498u)) return;
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
label_80C6749C:
    ctx->pc = 0x80C6749Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6749Cu)) return;
    // 80C6749C: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C674A0:
    ctx->pc = 0x80C674A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674A0u)) return;
    // 80C674A0: addi    r5, r5, 11988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11988);

label_80C674A4:
    ctx->pc = 0x80C674A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C674A4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C674A4u)) return;
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
label_80C674A8:
    ctx->pc = 0x80C674A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674A8u)) return;
    // 80C674A8: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C674AC:
    ctx->pc = 0x80C674ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674ACu)) return;
    // 80C674AC: addi    r5, r5, 11992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11992);

label_80C674B0:
    ctx->pc = 0x80C674B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C674B0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C674B0u)) return;
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
label_80C674B4:
    ctx->pc = 0x80C674B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674B4u)) return;
    // 80C674B4: bl      0x8045C750
    {
            ctx->lr = 0x80C674B8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C674B8:
    ctx->pc = 0x80C674B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C674B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C674B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C674BC:
    ctx->pc = 0x80C674BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674BCu)) return;
    // 80C674BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C674C0:
    ctx->pc = 0x80C674C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674C0u)) return;
    // 80C674C0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C674C4:
    ctx->pc = 0x80C674C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674C4u)) return;
    // 80C674C4: addi    r5, r6, -5120
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5120);

label_80C674C8:
    ctx->pc = 0x80C674C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674C8u)) return;
    // 80C674C8: addi    r6, r6, -3854
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3854);

label_80C674CC:
    ctx->pc = 0x80C674CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674CCu)) return;
    // 80C674CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C674D0:
    ctx->pc = 0x80C674D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674D0u)) return;
    // 80C674D0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C674D4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C674D4:
    ctx->pc = 0x80C674D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C674D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C674D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C674D8:
    ctx->pc = 0x80C674D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674D8u)) return;
    // 80C674D8: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80C674DC:
    ctx->pc = 0x80C674DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674DCu)) return;
    // 80C674DC: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C674E0:
    ctx->pc = 0x80C674E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674E0u)) return;
    // 80C674E0: addi    r5, r5, 11996
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11996);

label_80C674E4:
    ctx->pc = 0x80C674E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C674E4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C674E4u)) return;
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
label_80C674E8:
    ctx->pc = 0x80C674E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674E8u)) return;
    // 80C674E8: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C674EC:
    ctx->pc = 0x80C674ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674ECu)) return;
    // 80C674EC: addi    r5, r5, 12000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12000);

label_80C674F0:
    ctx->pc = 0x80C674F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C674F0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C674F0u)) return;
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
label_80C674F4:
    ctx->pc = 0x80C674F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674F4u)) return;
    // 80C674F4: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C674F8:
    ctx->pc = 0x80C674F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674F8u)) return;
    // 80C674F8: addi    r5, r5, 12004
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12004);

label_80C674FC:
    ctx->pc = 0x80C674FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C674FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C674FC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C674FCu)) return;
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
label_80C67500:
    ctx->pc = 0x80C67500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67500u)) return;
    // 80C67500: bl      0x8045C750
    {
            ctx->lr = 0x80C67504u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C67504:
    ctx->pc = 0x80C67504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67504: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67508:
    ctx->pc = 0x80C67508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67508u)) return;
    // 80C67508: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80C6750C:
    ctx->pc = 0x80C6750Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6750Cu)) return;
    // 80C6750C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C67510:
    ctx->pc = 0x80C67510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67510u)) return;
    // 80C67510: addi    r5, r6, -5120
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5120);

label_80C67514:
    ctx->pc = 0x80C67514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67514u)) return;
    // 80C67514: addi    r6, r6, -18446
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18446);

label_80C67518:
    ctx->pc = 0x80C67518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67518u)) return;
    // 80C67518: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6751C:
    ctx->pc = 0x80C6751Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6751Cu)) return;
    // 80C6751C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C67520u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C67520:
    ctx->pc = 0x80C67520u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67520u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67520: li      r3, 1178
    ctx->gpr[3] = (u32)(s32)(1178);

label_80C67524:
    ctx->pc = 0x80C67524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67524u)) return;
    // 80C67524: bl      0x8045BFA0
    {
            ctx->lr = 0x80C67528u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C67528:
    ctx->pc = 0x80C67528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C67528: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6752C:
    ctx->pc = 0x80C6752Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6752Cu)) return;
    // 80C6752C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C67530:
    ctx->pc = 0x80C67530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67530u)) return;
    // 80C67530: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C67534:
    ctx->pc = 0x80C67534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67534: lwz     r0, 0(r4)
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
label_80C67538:
    ctx->pc = 0x80C67538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67538u)) return;
    // 80C67538: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C6753C:
    ctx->pc = 0x80C6753Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6753Cu)) return;
    // 80C6753C: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67540:
    ctx->pc = 0x80C67540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67540u)) return;
    // 80C67540: addi    r4, r4, 13120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13120);

label_80C67544:
    ctx->pc = 0x80C67544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67544: lwzx    r4, r4, r0
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
label_80C67548:
    ctx->pc = 0x80C67548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67548: lwz     r4, 4(r4)
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
label_80C6754C:
    ctx->pc = 0x80C6754Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6754Cu)) return;
    // 80C6754C: bl      0x8045F608
    {
            ctx->lr = 0x80C67550u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C67550:
    ctx->pc = 0x80C67550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67550: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80C67554:
    ctx->pc = 0x80C67554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67554u)) return;
    // 80C67554: bl      0x8045F7C8
    {
            ctx->lr = 0x80C67558u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C67558:
    ctx->pc = 0x80C67558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C67558: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6755C:
    ctx->pc = 0x80C6755Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6755Cu)) return;
    // 80C6755C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C67560:
    ctx->pc = 0x80C67560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67560u)) return;
    // 80C67560: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67564:
    ctx->pc = 0x80C67564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67564u)) return;
    // 80C67564: addi    r5, r5, 12008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12008);

label_80C67568:
    ctx->pc = 0x80C67568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67568: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67568u)) return;
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
label_80C6756C:
    ctx->pc = 0x80C6756Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6756Cu)) return;
    // 80C6756C: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67570:
    ctx->pc = 0x80C67570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67570u)) return;
    // 80C67570: addi    r5, r5, 12012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12012);

label_80C67574:
    ctx->pc = 0x80C67574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67574: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67574u)) return;
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
label_80C67578:
    ctx->pc = 0x80C67578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67578u)) return;
    // 80C67578: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C6757C:
    ctx->pc = 0x80C6757Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6757Cu)) return;
    // 80C6757C: addi    r5, r5, 12016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12016);

label_80C67580:
    ctx->pc = 0x80C67580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67580: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67580u)) return;
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
label_80C67584:
    ctx->pc = 0x80C67584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67584u)) return;
    // 80C67584: bl      0x8045C750
    {
            ctx->lr = 0x80C67588u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C67588:
    ctx->pc = 0x80C67588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67588: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6758C:
    ctx->pc = 0x80C6758Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6758Cu)) return;
    // 80C6758C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C67590:
    ctx->pc = 0x80C67590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67590u)) return;
    // 80C67590: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C67594:
    ctx->pc = 0x80C67594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67594u)) return;
    // 80C67594: addi    r5, r5, -3584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3584);

label_80C67598:
    ctx->pc = 0x80C67598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67598u)) return;
    // 80C67598: li      r6, 15409
    ctx->gpr[6] = (u32)(s32)(15409);

label_80C6759C:
    ctx->pc = 0x80C6759Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6759Cu)) return;
    // 80C6759C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C675A0:
    ctx->pc = 0x80C675A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675A0u)) return;
    // 80C675A0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C675A4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C675A4:
    ctx->pc = 0x80C675A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C675A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C675A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C675A8:
    ctx->pc = 0x80C675A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675A8u)) return;
    // 80C675A8: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80C675AC:
    ctx->pc = 0x80C675ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675ACu)) return;
    // 80C675AC: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C675B0:
    ctx->pc = 0x80C675B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675B0u)) return;
    // 80C675B0: addi    r5, r5, 12020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12020);

label_80C675B4:
    ctx->pc = 0x80C675B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C675B4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C675B4u)) return;
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
label_80C675B8:
    ctx->pc = 0x80C675B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675B8u)) return;
    // 80C675B8: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C675BC:
    ctx->pc = 0x80C675BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675BCu)) return;
    // 80C675BC: addi    r5, r5, 12012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12012);

label_80C675C0:
    ctx->pc = 0x80C675C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C675C0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C675C0u)) return;
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
label_80C675C4:
    ctx->pc = 0x80C675C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675C4u)) return;
    // 80C675C4: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C675C8:
    ctx->pc = 0x80C675C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675C8u)) return;
    // 80C675C8: addi    r5, r5, 12024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12024);

label_80C675CC:
    ctx->pc = 0x80C675CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C675CC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C675CCu)) return;
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
label_80C675D0:
    ctx->pc = 0x80C675D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675D0u)) return;
    // 80C675D0: bl      0x8045C750
    {
            ctx->lr = 0x80C675D4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C675D4:
    ctx->pc = 0x80C675D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C675D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C675D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C675D8:
    ctx->pc = 0x80C675D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675D8u)) return;
    // 80C675D8: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80C675DC:
    ctx->pc = 0x80C675DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675DCu)) return;
    // 80C675DC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C675E0:
    ctx->pc = 0x80C675E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675E0u)) return;
    // 80C675E0: addi    r5, r5, -3584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3584);

label_80C675E4:
    ctx->pc = 0x80C675E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675E4u)) return;
    // 80C675E4: li      r6, 25085
    ctx->gpr[6] = (u32)(s32)(25085);

label_80C675E8:
    ctx->pc = 0x80C675E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675E8u)) return;
    // 80C675E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C675EC:
    ctx->pc = 0x80C675ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675ECu)) return;
    // 80C675EC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C675F0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C675F0:
    ctx->pc = 0x80C675F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C675F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C675F0: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80C675F4:
    ctx->pc = 0x80C675F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C675F4u)) return;
    // 80C675F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C675F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C675F8:
    ctx->pc = 0x80C675F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C675F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C675F8: bl      0x8045F32C
    {
            ctx->lr = 0x80C675FCu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C675FC:
    ctx->pc = 0x80C675FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C675FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C675FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67600:
    ctx->pc = 0x80C67600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67600u)) return;
    // 80C67600: bl      0x8045F220
    {
            ctx->lr = 0x80C67604u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67604:
    ctx->pc = 0x80C67604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C67604: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C67608:
    ctx->pc = 0x80C67608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67608u)) return;
    // 80C67608: addi    r4, r4, -4628
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4628);

label_80C6760C:
    ctx->pc = 0x80C6760Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6760Cu)) return;
    // 80C6760C: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C67610:
    ctx->pc = 0x80C67610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67610u)) return;
    // 80C67610: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C67614:
    ctx->pc = 0x80C67614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67614u)) return;
    // 80C67614: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C67618:
    ctx->pc = 0x80C67618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67618u)) return;
    // 80C67618: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C6761C:
    ctx->pc = 0x80C6761Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6761Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6761C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C6761Cu)) return;
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
label_80C67620:
    ctx->pc = 0x80C67620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67620u)) return;
    // 80C67620: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C67624:
    ctx->pc = 0x80C67624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67624u)) return;
    // 80C67624: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C67628:
    ctx->pc = 0x80C67628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67628u)) return;
    // 80C67628: bl      0x8045EBE4
    {
            ctx->lr = 0x80C6762Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C6762C:
    ctx->pc = 0x80C6762Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6762Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6762C: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C67630:
    ctx->pc = 0x80C67630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67630u)) return;
    // 80C67630: bl      0x8045F7C8
    {
            ctx->lr = 0x80C67634u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C67634:
    ctx->pc = 0x80C67634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67634: li      r3, 1179
    ctx->gpr[3] = (u32)(s32)(1179);

label_80C67638:
    ctx->pc = 0x80C67638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67638u)) return;
    // 80C67638: bl      0x8045BFA0
    {
            ctx->lr = 0x80C6763Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C6763C:
    ctx->pc = 0x80C6763Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6763Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C6763C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67640:
    ctx->pc = 0x80C67640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67640u)) return;
    // 80C67640: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C67644:
    ctx->pc = 0x80C67644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67644u)) return;
    // 80C67644: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C67648:
    ctx->pc = 0x80C67648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67648: lwz     r0, 0(r4)
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
label_80C6764C:
    ctx->pc = 0x80C6764Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6764Cu)) return;
    // 80C6764C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C67650:
    ctx->pc = 0x80C67650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67650u)) return;
    // 80C67650: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67654:
    ctx->pc = 0x80C67654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67654u)) return;
    // 80C67654: addi    r4, r4, 13120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13120);

label_80C67658:
    ctx->pc = 0x80C67658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67658: lwzx    r4, r4, r0
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
label_80C6765C:
    ctx->pc = 0x80C6765Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6765Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6765C: lwz     r4, 8(r4)
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
label_80C67660:
    ctx->pc = 0x80C67660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67660u)) return;
    // 80C67660: bl      0x8045F608
    {
            ctx->lr = 0x80C67664u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C67664:
    ctx->pc = 0x80C67664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C67664: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67668:
    ctx->pc = 0x80C67668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67668u)) return;
    // 80C67668: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6766C:
    ctx->pc = 0x80C6766Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6766Cu)) return;
    // 80C6766C: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67670:
    ctx->pc = 0x80C67670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67670u)) return;
    // 80C67670: addi    r5, r5, 12028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12028);

label_80C67674:
    ctx->pc = 0x80C67674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67674: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67674u)) return;
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
label_80C67678:
    ctx->pc = 0x80C67678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67678u)) return;
    // 80C67678: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C6767C:
    ctx->pc = 0x80C6767Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6767Cu)) return;
    // 80C6767C: addi    r5, r5, 12032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12032);

label_80C67680:
    ctx->pc = 0x80C67680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67680: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67680u)) return;
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
label_80C67684:
    ctx->pc = 0x80C67684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67684u)) return;
    // 80C67684: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67688:
    ctx->pc = 0x80C67688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67688u)) return;
    // 80C67688: addi    r5, r5, 12036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12036);

label_80C6768C:
    ctx->pc = 0x80C6768Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6768Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6768C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6768Cu)) return;
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
label_80C67690:
    ctx->pc = 0x80C67690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67690u)) return;
    // 80C67690: bl      0x8045C750
    {
            ctx->lr = 0x80C67694u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C67694:
    ctx->pc = 0x80C67694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67694: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67698:
    ctx->pc = 0x80C67698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67698u)) return;
    // 80C67698: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6769C:
    ctx->pc = 0x80C6769Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6769Cu)) return;
    // 80C6769C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C676A0:
    ctx->pc = 0x80C676A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676A0u)) return;
    // 80C676A0: addi    r5, r6, -2304
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2304);

label_80C676A4:
    ctx->pc = 0x80C676A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676A4u)) return;
    // 80C676A4: addi    r6, r6, -10867
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10867);

label_80C676A8:
    ctx->pc = 0x80C676A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676A8u)) return;
    // 80C676A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C676AC:
    ctx->pc = 0x80C676ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676ACu)) return;
    // 80C676AC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C676B0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C676B0:
    ctx->pc = 0x80C676B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C676B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C676B0: li      r3, 1180
    ctx->gpr[3] = (u32)(s32)(1180);

label_80C676B4:
    ctx->pc = 0x80C676B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676B4u)) return;
    // 80C676B4: bl      0x8045BFA0
    {
            ctx->lr = 0x80C676B8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C676B8:
    ctx->pc = 0x80C676B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C676B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C676B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C676BC:
    ctx->pc = 0x80C676BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676BCu)) return;
    // 80C676BC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C676C0:
    ctx->pc = 0x80C676C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676C0u)) return;
    // 80C676C0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C676C4:
    ctx->pc = 0x80C676C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C676C4: lwz     r0, 0(r4)
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
label_80C676C8:
    ctx->pc = 0x80C676C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676C8u)) return;
    // 80C676C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C676CC:
    ctx->pc = 0x80C676CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676CCu)) return;
    // 80C676CC: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C676D0:
    ctx->pc = 0x80C676D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676D0u)) return;
    // 80C676D0: addi    r4, r4, 13120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13120);

label_80C676D4:
    ctx->pc = 0x80C676D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C676D4: lwzx    r4, r4, r0
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
label_80C676D8:
    ctx->pc = 0x80C676D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C676D8: lwz     r4, 12(r4)
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
label_80C676DC:
    ctx->pc = 0x80C676DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676DCu)) return;
    // 80C676DC: bl      0x8045F608
    {
            ctx->lr = 0x80C676E0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C676E0:
    ctx->pc = 0x80C676E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C676E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C676E0: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C676E4:
    ctx->pc = 0x80C676E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676E4u)) return;
    // 80C676E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C676E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C676E8:
    ctx->pc = 0x80C676E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C676E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C676E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C676EC:
    ctx->pc = 0x80C676ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676ECu)) return;
    // 80C676EC: bl      0x8045F220
    {
            ctx->lr = 0x80C676F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C676F0:
    ctx->pc = 0x80C676F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C676F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C676F0: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C676F4:
    ctx->pc = 0x80C676F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676F4u)) return;
    // 80C676F4: addi    r4, r4, 12040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12040);

label_80C676F8:
    ctx->pc = 0x80C676F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C676F8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C676F8u)) return;
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
label_80C676FC:
    ctx->pc = 0x80C676FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C676FCu)) return;
    // 80C676FC: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67700:
    ctx->pc = 0x80C67700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67700u)) return;
    // 80C67700: addi    r4, r4, 12044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12044);

label_80C67704:
    ctx->pc = 0x80C67704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67704: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67704u)) return;
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
label_80C67708:
    ctx->pc = 0x80C67708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67708u)) return;
    // 80C67708: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C6770C:
    ctx->pc = 0x80C6770Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6770Cu)) return;
    // 80C6770C: addi    r4, r4, 12048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12048);

label_80C67710:
    ctx->pc = 0x80C67710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67710: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67710u)) return;
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
label_80C67714:
    ctx->pc = 0x80C67714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67714u)) return;
    // 80C67714: bl      0x8045EF2C
    {
            ctx->lr = 0x80C67718u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C67718:
    ctx->pc = 0x80C67718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67718: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6771C:
    ctx->pc = 0x80C6771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6771Cu)) return;
    // 80C6771C: bl      0x8045F220
    {
            ctx->lr = 0x80C67720u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67720:
    ctx->pc = 0x80C67720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C67720: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C67724:
    ctx->pc = 0x80C67724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67724u)) return;
    // 80C67724: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C67728:
    ctx->pc = 0x80C67728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67728u)) return;
    // 80C67728: addi    r5, r5, -31993
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31993);

label_80C6772C:
    ctx->pc = 0x80C6772Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6772Cu)) return;
    // 80C6772C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C67730:
    ctx->pc = 0x80C67730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67730u)) return;
    // 80C67730: bl      0x8045EEA8
    {
            ctx->lr = 0x80C67734u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C67734:
    ctx->pc = 0x80C67734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C67734: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67738:
    ctx->pc = 0x80C67738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67738u)) return;
    // 80C67738: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6773C:
    ctx->pc = 0x80C6773Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6773Cu)) return;
    // 80C6773C: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67740:
    ctx->pc = 0x80C67740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67740u)) return;
    // 80C67740: addi    r5, r5, 12052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12052);

label_80C67744:
    ctx->pc = 0x80C67744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67744: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67744u)) return;
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
label_80C67748:
    ctx->pc = 0x80C67748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67748u)) return;
    // 80C67748: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C6774C:
    ctx->pc = 0x80C6774Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6774Cu)) return;
    // 80C6774C: addi    r5, r5, 12056
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12056);

label_80C67750:
    ctx->pc = 0x80C67750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67750: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67750u)) return;
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
label_80C67754:
    ctx->pc = 0x80C67754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67754u)) return;
    // 80C67754: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67758:
    ctx->pc = 0x80C67758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67758u)) return;
    // 80C67758: addi    r5, r5, 12060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12060);

label_80C6775C:
    ctx->pc = 0x80C6775Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6775Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6775C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6775Cu)) return;
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
label_80C67760:
    ctx->pc = 0x80C67760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67760u)) return;
    // 80C67760: bl      0x8045C750
    {
            ctx->lr = 0x80C67764u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C67764:
    ctx->pc = 0x80C67764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C67764: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67768:
    ctx->pc = 0x80C67768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67768u)) return;
    // 80C67768: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6776C:
    ctx->pc = 0x80C6776Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6776Cu)) return;
    // 80C6776C: li      r5, 1536
    ctx->gpr[5] = (u32)(s32)(1536);

label_80C67770:
    ctx->pc = 0x80C67770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67770u)) return;
    // 80C67770: li      r6, 141
    ctx->gpr[6] = (u32)(s32)(141);

label_80C67774:
    ctx->pc = 0x80C67774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67774u)) return;
    // 80C67774: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C67778:
    ctx->pc = 0x80C67778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67778u)) return;
    // 80C67778: bl      0x8045C7B4
    {
            ctx->lr = 0x80C6777Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C6777C:
    ctx->pc = 0x80C6777Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6777Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6777C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67780:
    ctx->pc = 0x80C67780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67780u)) return;
    // 80C67780: bl      0x8045F220
    {
            ctx->lr = 0x80C67784u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67784:
    ctx->pc = 0x80C67784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C67784: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C67788:
    ctx->pc = 0x80C67788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67788u)) return;
    // 80C67788: addi    r4, r4, 29640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29640);

label_80C6778C:
    ctx->pc = 0x80C6778Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6778Cu)) return;
    // 80C6778C: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C67790:
    ctx->pc = 0x80C67790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67790u)) return;
    // 80C67790: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C67794:
    ctx->pc = 0x80C67794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67794u)) return;
    // 80C67794: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C67798:
    ctx->pc = 0x80C67798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67798u)) return;
    // 80C67798: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C6779C:
    ctx->pc = 0x80C6779Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6779Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6779C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C6779Cu)) return;
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
label_80C677A0:
    ctx->pc = 0x80C677A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677A0u)) return;
    // 80C677A0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C677A4:
    ctx->pc = 0x80C677A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677A4u)) return;
    // 80C677A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C677A8:
    ctx->pc = 0x80C677A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677A8u)) return;
    // 80C677A8: bl      0x8045EBE4
    {
            ctx->lr = 0x80C677ACu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C677AC:
    ctx->pc = 0x80C677ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C677ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C677AC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80C677B0:
    ctx->pc = 0x80C677B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677B0u)) return;
    // 80C677B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C677B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C677B4:
    ctx->pc = 0x80C677B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C677B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C677B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C677B8:
    ctx->pc = 0x80C677B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677B8u)) return;
    // 80C677B8: bl      0x8045F220
    {
            ctx->lr = 0x80C677BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C677BC:
    ctx->pc = 0x80C677BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C677BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C677BC: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C677C0:
    ctx->pc = 0x80C677C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677C0u)) return;
    // 80C677C0: addi    r4, r4, 12064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12064);

label_80C677C4:
    ctx->pc = 0x80C677C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C677C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C677C4u)) return;
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
label_80C677C8:
    ctx->pc = 0x80C677C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677C8u)) return;
    // 80C677C8: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C677CC:
    ctx->pc = 0x80C677CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677CCu)) return;
    // 80C677CC: addi    r4, r4, 12068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12068);

label_80C677D0:
    ctx->pc = 0x80C677D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C677D0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C677D0u)) return;
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
label_80C677D4:
    ctx->pc = 0x80C677D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677D4u)) return;
    // 80C677D4: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C677D8:
    ctx->pc = 0x80C677D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677D8u)) return;
    // 80C677D8: addi    r4, r4, 12072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12072);

label_80C677DC:
    ctx->pc = 0x80C677DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C677DC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C677DCu)) return;
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
label_80C677E0:
    ctx->pc = 0x80C677E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677E0u)) return;
    // 80C677E0: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C677E4:
    ctx->pc = 0x80C677E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677E4u)) return;
    // 80C677E4: addi    r4, r4, 12076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12076);

label_80C677E8:
    ctx->pc = 0x80C677E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C677E8: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C677E8u)) return;
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
label_80C677EC:
    ctx->pc = 0x80C677ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677ECu)) return;
    // 80C677EC: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C677F0:
    ctx->pc = 0x80C677F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677F0u)) return;
    // 80C677F0: addi    r4, r4, 12080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12080);

label_80C677F4:
    ctx->pc = 0x80C677F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C677F4: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C677F4u)) return;
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
label_80C677F8:
    ctx->pc = 0x80C677F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C677F8u)) return;
    // 80C677F8: bl      0x8045E570
    {
            ctx->lr = 0x80C677FCu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C677FC:
    ctx->pc = 0x80C677FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C677FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C677FC: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C67800:
    ctx->pc = 0x80C67800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67800u)) return;
    // 80C67800: bl      0x8045F7C8
    {
            ctx->lr = 0x80C67804u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C67804:
    ctx->pc = 0x80C67804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C67804: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67808:
    ctx->pc = 0x80C67808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67808u)) return;
    // 80C67808: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6780C:
    ctx->pc = 0x80C6780Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6780Cu)) return;
    // 80C6780C: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67810:
    ctx->pc = 0x80C67810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67810u)) return;
    // 80C67810: addi    r5, r5, 12028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12028);

label_80C67814:
    ctx->pc = 0x80C67814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67814: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67814u)) return;
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
label_80C67818:
    ctx->pc = 0x80C67818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67818u)) return;
    // 80C67818: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C6781C:
    ctx->pc = 0x80C6781Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6781Cu)) return;
    // 80C6781C: addi    r5, r5, 12032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12032);

label_80C67820:
    ctx->pc = 0x80C67820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67820: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67820u)) return;
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
label_80C67824:
    ctx->pc = 0x80C67824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67824u)) return;
    // 80C67824: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67828:
    ctx->pc = 0x80C67828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67828u)) return;
    // 80C67828: addi    r5, r5, 12036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12036);

label_80C6782C:
    ctx->pc = 0x80C6782Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6782Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6782C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6782Cu)) return;
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
label_80C67830:
    ctx->pc = 0x80C67830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67830u)) return;
    // 80C67830: bl      0x8045C750
    {
            ctx->lr = 0x80C67834u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C67834:
    ctx->pc = 0x80C67834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67834: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67838:
    ctx->pc = 0x80C67838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67838u)) return;
    // 80C67838: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6783C:
    ctx->pc = 0x80C6783Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6783Cu)) return;
    // 80C6783C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C67840:
    ctx->pc = 0x80C67840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67840u)) return;
    // 80C67840: addi    r5, r6, -2304
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2304);

label_80C67844:
    ctx->pc = 0x80C67844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67844u)) return;
    // 80C67844: addi    r6, r6, -10867
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10867);

label_80C67848:
    ctx->pc = 0x80C67848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67848u)) return;
    // 80C67848: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6784C:
    ctx->pc = 0x80C6784Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6784Cu)) return;
    // 80C6784C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C67850u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C67850:
    ctx->pc = 0x80C67850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67850: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67854:
    ctx->pc = 0x80C67854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67854u)) return;
    // 80C67854: bl      0x8045F220
    {
            ctx->lr = 0x80C67858u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67858:
    ctx->pc = 0x80C67858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C67858: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C6785C:
    ctx->pc = 0x80C6785Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6785Cu)) return;
    // 80C6785C: addi    r4, r4, 15828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15828);

label_80C67860:
    ctx->pc = 0x80C67860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67860u)) return;
    // 80C67860: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C67864:
    ctx->pc = 0x80C67864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67864u)) return;
    // 80C67864: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C67868:
    ctx->pc = 0x80C67868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67868u)) return;
    // 80C67868: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C6786C:
    ctx->pc = 0x80C6786Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6786Cu)) return;
    // 80C6786C: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C67870:
    ctx->pc = 0x80C67870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67870: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C67870u)) return;
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
label_80C67874:
    ctx->pc = 0x80C67874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67874u)) return;
    // 80C67874: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C67878:
    ctx->pc = 0x80C67878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67878u)) return;
    // 80C67878: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6787C:
    ctx->pc = 0x80C6787Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6787Cu)) return;
    // 80C6787C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C67880u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C67880:
    ctx->pc = 0x80C67880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67880: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67884:
    ctx->pc = 0x80C67884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67884u)) return;
    // 80C67884: bl      0x8045F220
    {
            ctx->lr = 0x80C67888u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67888:
    ctx->pc = 0x80C67888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67888: bl      0x8045EB40
    {
            ctx->lr = 0x80C6788Cu;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80C6788C:
    ctx->pc = 0x80C6788Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6788Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C6788C: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C67890:
    ctx->pc = 0x80C67890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67890u)) return;
    // 80C67890: addi    r3, r3, 12084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12084);

label_80C67894:
    ctx->pc = 0x80C67894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C67894: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C67894u)) return;
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
label_80C67898:
    ctx->pc = 0x80C67898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67898u)) return;
    // 80C67898: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C6789C:
    ctx->pc = 0x80C6789Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6789Cu)) return;
    // 80C6789C: addi    r3, r3, 12088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12088);

label_80C678A0:
    ctx->pc = 0x80C678A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C678A0: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C678A0u)) return;
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
label_80C678A4:
    ctx->pc = 0x80C678A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678A4u)) return;
    // 80C678A4: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C678A8:
    ctx->pc = 0x80C678A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678A8u)) return;
    // 80C678A8: addi    r3, r3, 12092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12092);

label_80C678AC:
    ctx->pc = 0x80C678ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C678AC: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C678ACu)) return;
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
label_80C678B0:
    ctx->pc = 0x80C678B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678B0u)) return;
    // 80C678B0: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80C678B0u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80C678B4:
    ctx->pc = 0x80C678B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678B4u)) return;
    // 80C678B4: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80C678B4u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80C678B8:
    ctx->pc = 0x80C678B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678B8u)) return;
    // 80C678B8: bl      0x80C6836C
    {
            ctx->lr = 0x80C678BCu;
            goto label_80C6836C;
    }

label_80C678BC:
    ctx->pc = 0x80C678BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C678BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C678BC: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C678C0:
    ctx->pc = 0x80C678C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678C0u)) return;
    // 80C678C0: addi    r4, r4, 25856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25856);

label_80C678C4:
    ctx->pc = 0x80C678C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C678C4: stw     r3, 0(r4)
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
label_80C678C8:
    ctx->pc = 0x80C678C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678C8u)) return;
    // 80C678C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C678CC:
    ctx->pc = 0x80C678CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678CCu)) return;
    // 80C678CC: bl      0x8045F220
    {
            ctx->lr = 0x80C678D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C678D0:
    ctx->pc = 0x80C678D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C678D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C678D0: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C678D4:
    ctx->pc = 0x80C678D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678D4u)) return;
    // 80C678D4: addi    r4, r4, 12040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12040);

label_80C678D8:
    ctx->pc = 0x80C678D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C678D8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C678D8u)) return;
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
label_80C678DC:
    ctx->pc = 0x80C678DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678DCu)) return;
    // 80C678DC: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C678E0:
    ctx->pc = 0x80C678E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678E0u)) return;
    // 80C678E0: addi    r4, r4, 12044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12044);

label_80C678E4:
    ctx->pc = 0x80C678E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C678E4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C678E4u)) return;
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
label_80C678E8:
    ctx->pc = 0x80C678E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678E8u)) return;
    // 80C678E8: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C678EC:
    ctx->pc = 0x80C678ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678ECu)) return;
    // 80C678EC: addi    r4, r4, 12048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12048);

label_80C678F0:
    ctx->pc = 0x80C678F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C678F0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C678F0u)) return;
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
label_80C678F4:
    ctx->pc = 0x80C678F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678F4u)) return;
    // 80C678F4: bl      0x8045EF2C
    {
            ctx->lr = 0x80C678F8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C678F8:
    ctx->pc = 0x80C678F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C678F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C678F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C678FC:
    ctx->pc = 0x80C678FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C678FCu)) return;
    // 80C678FC: bl      0x8045F220
    {
            ctx->lr = 0x80C67900u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67900:
    ctx->pc = 0x80C67900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C67900: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C67904:
    ctx->pc = 0x80C67904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67904u)) return;
    // 80C67904: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C67908:
    ctx->pc = 0x80C67908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67908u)) return;
    // 80C67908: addi    r5, r5, -31993
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31993);

label_80C6790C:
    ctx->pc = 0x80C6790Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6790Cu)) return;
    // 80C6790C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C67910:
    ctx->pc = 0x80C67910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67910u)) return;
    // 80C67910: bl      0x8045EEA8
    {
            ctx->lr = 0x80C67914u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C67914:
    ctx->pc = 0x80C67914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67914: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67918:
    ctx->pc = 0x80C67918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67918u)) return;
    // 80C67918: bl      0x8045F220
    {
            ctx->lr = 0x80C6791Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C6791C:
    ctx->pc = 0x80C6791Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6791Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C6791C: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C67920:
    ctx->pc = 0x80C67920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67920u)) return;
    // 80C67920: addi    r4, r4, 29640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29640);

label_80C67924:
    ctx->pc = 0x80C67924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67924u)) return;
    // 80C67924: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C67928:
    ctx->pc = 0x80C67928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67928u)) return;
    // 80C67928: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C6792C:
    ctx->pc = 0x80C6792Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6792Cu)) return;
    // 80C6792C: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C67930:
    ctx->pc = 0x80C67930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67930u)) return;
    // 80C67930: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C67934:
    ctx->pc = 0x80C67934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67934: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C67934u)) return;
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
label_80C67938:
    ctx->pc = 0x80C67938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67938u)) return;
    // 80C67938: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C6793C:
    ctx->pc = 0x80C6793Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6793Cu)) return;
    // 80C6793C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C67940:
    ctx->pc = 0x80C67940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67940u)) return;
    // 80C67940: bl      0x8045EBE4
    {
            ctx->lr = 0x80C67944u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C67944:
    ctx->pc = 0x80C67944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67944: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67948:
    ctx->pc = 0x80C67948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67948u)) return;
    // 80C67948: bl      0x8045F220
    {
            ctx->lr = 0x80C6794Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C6794C:
    ctx->pc = 0x80C6794Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6794Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C6794C: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67950:
    ctx->pc = 0x80C67950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67950u)) return;
    // 80C67950: addi    r4, r4, 12064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12064);

label_80C67954:
    ctx->pc = 0x80C67954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C67954: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67954u)) return;
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
label_80C67958:
    ctx->pc = 0x80C67958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67958u)) return;
    // 80C67958: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C6795C:
    ctx->pc = 0x80C6795Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6795Cu)) return;
    // 80C6795C: addi    r4, r4, 12068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12068);

label_80C67960:
    ctx->pc = 0x80C67960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67960: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67960u)) return;
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
label_80C67964:
    ctx->pc = 0x80C67964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67964u)) return;
    // 80C67964: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67968:
    ctx->pc = 0x80C67968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67968u)) return;
    // 80C67968: addi    r4, r4, 12072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12072);

label_80C6796C:
    ctx->pc = 0x80C6796Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6796Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6796C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C6796Cu)) return;
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
label_80C67970:
    ctx->pc = 0x80C67970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67970u)) return;
    // 80C67970: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67974:
    ctx->pc = 0x80C67974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67974u)) return;
    // 80C67974: addi    r4, r4, 12076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12076);

label_80C67978:
    ctx->pc = 0x80C67978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67978: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67978u)) return;
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
label_80C6797C:
    ctx->pc = 0x80C6797Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6797Cu)) return;
    // 80C6797C: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67980:
    ctx->pc = 0x80C67980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67980u)) return;
    // 80C67980: addi    r4, r4, 12080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12080);

label_80C67984:
    ctx->pc = 0x80C67984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67984: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67984u)) return;
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
label_80C67988:
    ctx->pc = 0x80C67988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67988u)) return;
    // 80C67988: bl      0x8045E570
    {
            ctx->lr = 0x80C6798Cu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C6798C:
    ctx->pc = 0x80C6798Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6798Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6798C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C67990:
    ctx->pc = 0x80C67990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67990u)) return;
    // 80C67990: bl      0x8045F7C8
    {
            ctx->lr = 0x80C67994u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C67994:
    ctx->pc = 0x80C67994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67994: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67998:
    ctx->pc = 0x80C67998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67998u)) return;
    // 80C67998: bl      0x8045F220
    {
            ctx->lr = 0x80C6799Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C6799C:
    ctx->pc = 0x80C6799Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6799Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C6799C: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C679A0:
    ctx->pc = 0x80C679A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679A0u)) return;
    // 80C679A0: addi    r4, r4, 12096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12096);

label_80C679A4:
    ctx->pc = 0x80C679A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C679A4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C679A4u)) return;
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
label_80C679A8:
    ctx->pc = 0x80C679A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679A8u)) return;
    // 80C679A8: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C679AC:
    ctx->pc = 0x80C679ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679ACu)) return;
    // 80C679AC: addi    r4, r4, 11976
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11976);

label_80C679B0:
    ctx->pc = 0x80C679B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C679B0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C679B0u)) return;
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
label_80C679B4:
    ctx->pc = 0x80C679B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679B4u)) return;
    // 80C679B4: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C679B8:
    ctx->pc = 0x80C679B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679B8u)) return;
    // 80C679B8: addi    r4, r4, 12100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12100);

label_80C679BC:
    ctx->pc = 0x80C679BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C679BC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C679BCu)) return;
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
label_80C679C0:
    ctx->pc = 0x80C679C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679C0u)) return;
    // 80C679C0: bl      0x8045EF2C
    {
            ctx->lr = 0x80C679C4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C679C4:
    ctx->pc = 0x80C679C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C679C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C679C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C679C8:
    ctx->pc = 0x80C679C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679C8u)) return;
    // 80C679C8: bl      0x8045F220
    {
            ctx->lr = 0x80C679CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C679CC:
    ctx->pc = 0x80C679CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C679CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C679CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C679D0:
    ctx->pc = 0x80C679D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679D0u)) return;
    // 80C679D0: li      r5, 20485
    ctx->gpr[5] = (u32)(s32)(20485);

label_80C679D4:
    ctx->pc = 0x80C679D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679D4u)) return;
    // 80C679D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C679D8:
    ctx->pc = 0x80C679D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679D8u)) return;
    // 80C679D8: bl      0x8045EEA8
    {
            ctx->lr = 0x80C679DCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C679DC:
    ctx->pc = 0x80C679DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C679DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C679DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C679E0:
    ctx->pc = 0x80C679E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679E0u)) return;
    // 80C679E0: bl      0x8045F220
    {
            ctx->lr = 0x80C679E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C679E4:
    ctx->pc = 0x80C679E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C679E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C679E4: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C679E8:
    ctx->pc = 0x80C679E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679E8u)) return;
    // 80C679E8: addi    r4, r4, 25832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25832);

label_80C679EC:
    ctx->pc = 0x80C679ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679ECu)) return;
    // 80C679EC: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C679F0:
    ctx->pc = 0x80C679F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679F0u)) return;
    // 80C679F0: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C679F4:
    ctx->pc = 0x80C679F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679F4u)) return;
    // 80C679F4: lis     r6, -27428
    ctx->gpr[6] = ((u32)(s32)(-27428) << 16);

label_80C679F8:
    ctx->pc = 0x80C679F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679F8u)) return;
    // 80C679F8: addi    r6, r6, 11956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11956);

label_80C679FC:
    ctx->pc = 0x80C679FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C679FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C679FC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C679FCu)) return;
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
label_80C67A00:
    ctx->pc = 0x80C67A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A00u)) return;
    // 80C67A00: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C67A04:
    ctx->pc = 0x80C67A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A04u)) return;
    // 80C67A04: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C67A08:
    ctx->pc = 0x80C67A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A08u)) return;
    // 80C67A08: bl      0x8045EBE4
    {
            ctx->lr = 0x80C67A0Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C67A0C:
    ctx->pc = 0x80C67A0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67A0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67A0C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67A10:
    ctx->pc = 0x80C67A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A10u)) return;
    // 80C67A10: bl      0x8045F220
    {
            ctx->lr = 0x80C67A14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C67A14:
    ctx->pc = 0x80C67A14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C67A14: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67A18:
    ctx->pc = 0x80C67A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A18u)) return;
    // 80C67A18: addi    r4, r4, 12104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12104);

label_80C67A1C:
    ctx->pc = 0x80C67A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C67A1C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67A1Cu)) return;
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
label_80C67A20:
    ctx->pc = 0x80C67A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A20u)) return;
    // 80C67A20: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67A24:
    ctx->pc = 0x80C67A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A24u)) return;
    // 80C67A24: addi    r4, r4, 12108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12108);

label_80C67A28:
    ctx->pc = 0x80C67A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67A28: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67A28u)) return;
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
label_80C67A2C:
    ctx->pc = 0x80C67A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A2Cu)) return;
    // 80C67A2C: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67A30:
    ctx->pc = 0x80C67A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A30u)) return;
    // 80C67A30: addi    r4, r4, 12112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12112);

label_80C67A34:
    ctx->pc = 0x80C67A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67A34: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67A34u)) return;
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
label_80C67A38:
    ctx->pc = 0x80C67A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A38u)) return;
    // 80C67A38: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67A3C:
    ctx->pc = 0x80C67A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A3Cu)) return;
    // 80C67A3C: addi    r4, r4, 12088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12088);

label_80C67A40:
    ctx->pc = 0x80C67A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67A40: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67A40u)) return;
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
label_80C67A44:
    ctx->pc = 0x80C67A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A44u)) return;
    // 80C67A44: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C67A48:
    ctx->pc = 0x80C67A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A48u)) return;
    // 80C67A48: addi    r4, r4, 12080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12080);

label_80C67A4C:
    ctx->pc = 0x80C67A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67A4C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C67A4Cu)) return;
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
label_80C67A50:
    ctx->pc = 0x80C67A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A50u)) return;
    // 80C67A50: bl      0x8045E570
    {
            ctx->lr = 0x80C67A54u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C67A54:
    ctx->pc = 0x80C67A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C67A54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67A58:
    ctx->pc = 0x80C67A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A58u)) return;
    // 80C67A58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C67A5C:
    ctx->pc = 0x80C67A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A5Cu)) return;
    // 80C67A5C: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67A60:
    ctx->pc = 0x80C67A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A60u)) return;
    // 80C67A60: addi    r5, r5, 12116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12116);

label_80C67A64:
    ctx->pc = 0x80C67A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67A64: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67A64u)) return;
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
label_80C67A68:
    ctx->pc = 0x80C67A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A68u)) return;
    // 80C67A68: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67A6C:
    ctx->pc = 0x80C67A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A6Cu)) return;
    // 80C67A6C: addi    r5, r5, 12120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12120);

label_80C67A70:
    ctx->pc = 0x80C67A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67A70: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67A70u)) return;
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
label_80C67A74:
    ctx->pc = 0x80C67A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A74u)) return;
    // 80C67A74: lis     r5, -27428
    ctx->gpr[5] = ((u32)(s32)(-27428) << 16);

label_80C67A78:
    ctx->pc = 0x80C67A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A78u)) return;
    // 80C67A78: addi    r5, r5, 12124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12124);

label_80C67A7C:
    ctx->pc = 0x80C67A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67A7C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C67A7Cu)) return;
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
label_80C67A80:
    ctx->pc = 0x80C67A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A80u)) return;
    // 80C67A80: bl      0x8045C750
    {
            ctx->lr = 0x80C67A84u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C67A84:
    ctx->pc = 0x80C67A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67A84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67A88:
    ctx->pc = 0x80C67A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A88u)) return;
    // 80C67A88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C67A8C:
    ctx->pc = 0x80C67A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A8Cu)) return;
    // 80C67A8C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C67A90:
    ctx->pc = 0x80C67A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A90u)) return;
    // 80C67A90: addi    r5, r6, -5888
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5888);

label_80C67A94:
    ctx->pc = 0x80C67A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A94u)) return;
    // 80C67A94: addi    r6, r6, -32627
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32627);

label_80C67A98:
    ctx->pc = 0x80C67A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A98u)) return;
    // 80C67A98: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C67A9C:
    ctx->pc = 0x80C67A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67A9Cu)) return;
    // 80C67A9C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C67AA0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C67AA0:
    ctx->pc = 0x80C67AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67AA0: bl      0x8045F32C
    {
            ctx->lr = 0x80C67AA4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C67AA4:
    ctx->pc = 0x80C67AA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67AA4: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C67AA8:
    ctx->pc = 0x80C67AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67AA8u)) return;
    // 80C67AA8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C67AACu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C67AAC:
    ctx->pc = 0x80C67AACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67AAC: b       0x80C67AF8
    {
            goto label_80C67AF8;
    }

label_80C67AB0:
    ctx->pc = 0x80C67AB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C67AB0: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C67AB4:
    ctx->pc = 0x80C67AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67AB4u)) return;
    // 80C67AB4: addi    r3, r3, 25856
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25856);

label_80C67AB8:
    ctx->pc = 0x80C67AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67AB8: lwz     r3, 0(r3)
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
label_80C67ABC:
    ctx->pc = 0x80C67ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67ABCu)) return;
    // 80C67ABC: cmplwi  r3, 0x0000
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

label_80C67AC0:
    ctx->pc = 0x80C67AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67AC0u)) return;
    // 80C67AC0: bc    12, 2, 0x80C67AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67AD8;
        }
    }

label_80C67AC4:
    ctx->pc = 0x80C67AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67AC4: bl      0x8050F9E0
    {
            ctx->lr = 0x80C67AC8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C67AC8:
    ctx->pc = 0x80C67AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C67AC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C67ACC:
    ctx->pc = 0x80C67ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67ACCu)) return;
    // 80C67ACC: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C67AD0:
    ctx->pc = 0x80C67AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67AD0u)) return;
    // 80C67AD0: addi    r3, r3, 25856
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25856);

label_80C67AD4:
    ctx->pc = 0x80C67AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67AD4: stw     r0, 0(r3)
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
label_80C67AD8:
    ctx->pc = 0x80C67AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67AD8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67ADC:
    ctx->pc = 0x80C67ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67ADCu)) return;
    // 80C67ADC: bl      0x8045EC10
    {
            ctx->lr = 0x80C67AE0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C67AE0:
    ctx->pc = 0x80C67AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67AE0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67AE4:
    ctx->pc = 0x80C67AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67AE4u)) return;
    // 80C67AE4: bl      0x8045ED54
    {
            ctx->lr = 0x80C67AE8u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C67AE8:
    ctx->pc = 0x80C67AE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67AE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C67AEC:
    ctx->pc = 0x80C67AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67AECu)) return;
    // 80C67AEC: bl      0x8045EC10
    {
            ctx->lr = 0x80C67AF0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C67AF0:
    ctx->pc = 0x80C67AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67AF0: bl      0x8045DE34
    {
            ctx->lr = 0x80C67AF4u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C67AF4:
    ctx->pc = 0x80C67AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67AF4: bl      0x80460A80
    {
            ctx->lr = 0x80C67AF8u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C67AF8:
    ctx->pc = 0x80C67AF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67AF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67AF8: lwz     r0, 20(r1)
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
label_80C67AFC:
    ctx->pc = 0x80C67AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67AFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67B00:
    ctx->pc = 0x80C67B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B00u)) return;
    // 80C67B00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C67B04:
    ctx->pc = 0x80C67B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B04u)) return;
    // 80C67B04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67B08:
    ctx->pc = 0x80C67B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67B08: stwu     r1, -16(r1)
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
label_80C67B0C:
    ctx->pc = 0x80C67B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67B0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67B10:
    ctx->pc = 0x80C67B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67B10: stw     r0, 20(r1)
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
label_80C67B14:
    ctx->pc = 0x80C67B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67B14: lwz     r3, 32(r3)
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
label_80C67B18:
    ctx->pc = 0x80C67B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67B18: lwz     r3, 16(r3)
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
label_80C67B1C:
    ctx->pc = 0x80C67B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B1Cu)) return;
    // 80C67B1C: bl      0x80509CF0
    {
            ctx->lr = 0x80C67B20u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C67B20:
    ctx->pc = 0x80C67B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67B20: lwz     r0, 20(r1)
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
label_80C67B24:
    ctx->pc = 0x80C67B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67B24: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67B28:
    ctx->pc = 0x80C67B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B28u)) return;
    // 80C67B28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C67B2C:
    ctx->pc = 0x80C67B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B2Cu)) return;
    // 80C67B2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67B30:
    ctx->pc = 0x80C67B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67B30: stwu     r1, -32(r1)
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
label_80C67B34:
    ctx->pc = 0x80C67B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C67B34: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67B38:
    ctx->pc = 0x80C67B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67B38: stw     r0, 36(r1)
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
label_80C67B3C:
    ctx->pc = 0x80C67B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67B3C: stw     r31, 28(r1)
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
label_80C67B40:
    ctx->pc = 0x80C67B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67B40: stw     r30, 24(r1)
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
label_80C67B44:
    ctx->pc = 0x80C67B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67B44: stw     r29, 20(r1)
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
label_80C67B48:
    ctx->pc = 0x80C67B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67B48: lwz     r31, 32(r3)
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
label_80C67B4C:
    ctx->pc = 0x80C67B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67B4C: lwz     r30, 16(r31)
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
label_80C67B50:
    ctx->pc = 0x80C67B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67B50: lwz     r5, 28(r31)
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
label_80C67B54:
    ctx->pc = 0x80C67B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B54u)) return;
    // 80C67B54: cmpwi   r5, 0
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

label_80C67B58:
    ctx->pc = 0x80C67B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B58u)) return;
    // 80C67B58: bc    4, 1, 0x80C67B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C67B90;
        }
    }

label_80C67B5C:
    ctx->pc = 0x80C67B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C67B5C: lwz     r4, 24(r31)
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
label_80C67B60:
    ctx->pc = 0x80C67B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B60u)) return;
    // 80C67B60: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C67B64:
    ctx->pc = 0x80C67B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C67B64: lwz     r0, 20(r31)
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
label_80C67B68:
    ctx->pc = 0x80C67B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C67B68u)) return;
    // 80C67B68: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C67B6C:
    ctx->pc = 0x80C67B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B6Cu)) return;
    // 80C67B6C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C67B70:
    ctx->pc = 0x80C67B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C67B70u)) return;
    // 80C67B70: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C67B74:
    ctx->pc = 0x80C67B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B74u)) return;
    // 80C67B74: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C67B78:
    ctx->pc = 0x80C67B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B78u)) return;
    // 80C67B78: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C67B7C:
    ctx->pc = 0x80C67B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B7Cu)) return;
    // 80C67B7C: bl      0x80509C74
    {
            ctx->lr = 0x80C67B80u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C67B80:
    ctx->pc = 0x80C67B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67B80: stw     r29, 20(r31)
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
label_80C67B84:
    ctx->pc = 0x80C67B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67B84: lwz     r3, 28(r31)
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
label_80C67B88:
    ctx->pc = 0x80C67B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B88u)) return;
    // 80C67B88: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C67B8C:
    ctx->pc = 0x80C67B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67B8C: stw     r0, 28(r31)
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
label_80C67B90:
    ctx->pc = 0x80C67B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67B90: lwz     r5, 40(r31)
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
label_80C67B94:
    ctx->pc = 0x80C67B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B94u)) return;
    // 80C67B94: cmpwi   r5, 0
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

label_80C67B98:
    ctx->pc = 0x80C67B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67B98u)) return;
    // 80C67B98: bc    4, 1, 0x80C67BD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C67BD0;
        }
    }

label_80C67B9C:
    ctx->pc = 0x80C67B9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67B9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C67B9C: lwz     r4, 36(r31)
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
label_80C67BA0:
    ctx->pc = 0x80C67BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BA0u)) return;
    // 80C67BA0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C67BA4:
    ctx->pc = 0x80C67BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C67BA4: lwz     r0, 32(r31)
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
label_80C67BA8:
    ctx->pc = 0x80C67BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C67BA8u)) return;
    // 80C67BA8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C67BAC:
    ctx->pc = 0x80C67BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BACu)) return;
    // 80C67BAC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C67BB0:
    ctx->pc = 0x80C67BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C67BB0u)) return;
    // 80C67BB0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C67BB4:
    ctx->pc = 0x80C67BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BB4u)) return;
    // 80C67BB4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C67BB8:
    ctx->pc = 0x80C67BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BB8u)) return;
    // 80C67BB8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C67BBC:
    ctx->pc = 0x80C67BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BBCu)) return;
    // 80C67BBC: bl      0x80509BF8
    {
            ctx->lr = 0x80C67BC0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C67BC0:
    ctx->pc = 0x80C67BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67BC0: stw     r29, 32(r31)
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
label_80C67BC4:
    ctx->pc = 0x80C67BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67BC4: lwz     r3, 40(r31)
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
label_80C67BC8:
    ctx->pc = 0x80C67BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BC8u)) return;
    // 80C67BC8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C67BCC:
    ctx->pc = 0x80C67BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67BCC: stw     r0, 40(r31)
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
label_80C67BD0:
    ctx->pc = 0x80C67BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67BD0: lwz     r5, 52(r31)
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
label_80C67BD4:
    ctx->pc = 0x80C67BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BD4u)) return;
    // 80C67BD4: cmpwi   r5, 0
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

label_80C67BD8:
    ctx->pc = 0x80C67BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BD8u)) return;
    // 80C67BD8: bc    4, 1, 0x80C67C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C67C10;
        }
    }

label_80C67BDC:
    ctx->pc = 0x80C67BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C67BDC: lwz     r4, 48(r31)
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
label_80C67BE0:
    ctx->pc = 0x80C67BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BE0u)) return;
    // 80C67BE0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C67BE4:
    ctx->pc = 0x80C67BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C67BE4: lwz     r0, 44(r31)
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
label_80C67BE8:
    ctx->pc = 0x80C67BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C67BE8u)) return;
    // 80C67BE8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C67BEC:
    ctx->pc = 0x80C67BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BECu)) return;
    // 80C67BEC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C67BF0:
    ctx->pc = 0x80C67BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C67BF0u)) return;
    // 80C67BF0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C67BF4:
    ctx->pc = 0x80C67BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BF4u)) return;
    // 80C67BF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C67BF8:
    ctx->pc = 0x80C67BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BF8u)) return;
    // 80C67BF8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C67BFC:
    ctx->pc = 0x80C67BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67BFCu)) return;
    // 80C67BFC: bl      0x80509B94
    {
            ctx->lr = 0x80C67C00u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C67C00:
    ctx->pc = 0x80C67C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67C00: stw     r29, 44(r31)
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
label_80C67C04:
    ctx->pc = 0x80C67C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67C04: lwz     r3, 52(r31)
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
label_80C67C08:
    ctx->pc = 0x80C67C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C08u)) return;
    // 80C67C08: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C67C0C:
    ctx->pc = 0x80C67C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67C0C: stw     r0, 52(r31)
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
label_80C67C10:
    ctx->pc = 0x80C67C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67C10: lwz     r31, 28(r1)
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
label_80C67C14:
    ctx->pc = 0x80C67C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67C14: lwz     r30, 24(r1)
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
label_80C67C18:
    ctx->pc = 0x80C67C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67C18: lwz     r29, 20(r1)
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
label_80C67C1C:
    ctx->pc = 0x80C67C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67C1C: lwz     r0, 36(r1)
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
label_80C67C20:
    ctx->pc = 0x80C67C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67C20: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67C24:
    ctx->pc = 0x80C67C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C24u)) return;
    // 80C67C24: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C67C28:
    ctx->pc = 0x80C67C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C28u)) return;
    // 80C67C28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67C2C:
    ctx->pc = 0x80C67C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C67C2C: stwu     r1, -32(r1)
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
label_80C67C30:
    ctx->pc = 0x80C67C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67C30: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67C34:
    ctx->pc = 0x80C67C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C67C34: stw     r0, 36(r1)
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
label_80C67C38:
    ctx->pc = 0x80C67C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67C38: stw     r31, 28(r1)
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
label_80C67C3C:
    ctx->pc = 0x80C67C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67C3C: stw     r30, 24(r1)
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
label_80C67C40:
    ctx->pc = 0x80C67C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67C40: stw     r29, 20(r1)
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
label_80C67C44:
    ctx->pc = 0x80C67C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C44u)) return;
    // 80C67C44: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C67C48:
    ctx->pc = 0x80C67C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C48u)) return;
    // 80C67C48: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C67C4C:
    ctx->pc = 0x80C67C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C4Cu)) return;
    // 80C67C4C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C67C50:
    ctx->pc = 0x80C67C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C50u)) return;
    // 80C67C50: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C67C54:
    ctx->pc = 0x80C67C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C54u)) return;
    // 80C67C54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C67C58:
    ctx->pc = 0x80C67C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C58u)) return;
    // 80C67C58: bl      0x8050FD60
    {
            ctx->lr = 0x80C67C5Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C67C5C:
    ctx->pc = 0x80C67C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C67C5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C67C60:
    ctx->pc = 0x80C67C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C60u)) return;
    // 80C67C60: cmplwi  r31, 0x0000
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

label_80C67C64:
    ctx->pc = 0x80C67C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C64u)) return;
    // 80C67C64: bc    12, 2, 0x80C67CC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67CC8;
        }
    }

label_80C67C68:
    ctx->pc = 0x80C67C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C67C68: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C67C6C:
    ctx->pc = 0x80C67C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C6Cu)) return;
    // 80C67C6C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C67C70:
    ctx->pc = 0x80C67C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C70u)) return;
    // 80C67C70: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C67C74:
    ctx->pc = 0x80C67C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C74u)) return;
    // 80C67C74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C67C78:
    ctx->pc = 0x80C67C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C78u)) return;
    // 80C67C78: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C67C7C:
    ctx->pc = 0x80C67C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C7Cu)) return;
    // 80C67C7C: bl      0x8050A0D4
    {
            ctx->lr = 0x80C67C80u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C67C80:
    ctx->pc = 0x80C67C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C67C80: lis     r3, -32570
    ctx->gpr[3] = ((u32)(s32)(-32570) << 16);

label_80C67C84:
    ctx->pc = 0x80C67C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C84u)) return;
    // 80C67C84: addi    r0, r3, 31536
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31536);

label_80C67C88:
    ctx->pc = 0x80C67C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C67C88: stw     r0, 16(r31)
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
label_80C67C8C:
    ctx->pc = 0x80C67C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C8Cu)) return;
    // 80C67C8C: lis     r3, -32570
    ctx->gpr[3] = ((u32)(s32)(-32570) << 16);

label_80C67C90:
    ctx->pc = 0x80C67C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C90u)) return;
    // 80C67C90: addi    r0, r3, 31496
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31496);

label_80C67C94:
    ctx->pc = 0x80C67C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C67C94: stw     r0, 24(r31)
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
label_80C67C98:
    ctx->pc = 0x80C67C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C67C98: lwz     r3, 32(r31)
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
label_80C67C9C:
    ctx->pc = 0x80C67C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67C9C: stw     r31, 16(r3)
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
label_80C67CA0:
    ctx->pc = 0x80C67CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CA0u)) return;
    // 80C67CA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C67CA4:
    ctx->pc = 0x80C67CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67CA4: stw     r0, 20(r3)
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
label_80C67CA8:
    ctx->pc = 0x80C67CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67CA8: stw     r0, 24(r3)
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
label_80C67CAC:
    ctx->pc = 0x80C67CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67CAC: stw     r0, 28(r3)
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
label_80C67CB0:
    ctx->pc = 0x80C67CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67CB0: stw     r0, 32(r3)
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
label_80C67CB4:
    ctx->pc = 0x80C67CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67CB4: stw     r0, 36(r3)
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
label_80C67CB8:
    ctx->pc = 0x80C67CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67CB8: stw     r0, 40(r3)
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
label_80C67CBC:
    ctx->pc = 0x80C67CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67CBC: stw     r0, 44(r3)
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
label_80C67CC0:
    ctx->pc = 0x80C67CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67CC0: stw     r0, 48(r3)
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
label_80C67CC4:
    ctx->pc = 0x80C67CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67CC4: stw     r0, 52(r3)
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
label_80C67CC8:
    ctx->pc = 0x80C67CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C67CC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C67CCC:
    ctx->pc = 0x80C67CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67CCC: lwz     r31, 28(r1)
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
label_80C67CD0:
    ctx->pc = 0x80C67CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67CD0: lwz     r30, 24(r1)
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
label_80C67CD4:
    ctx->pc = 0x80C67CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67CD4: lwz     r29, 20(r1)
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
label_80C67CD8:
    ctx->pc = 0x80C67CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67CD8: lwz     r0, 36(r1)
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
label_80C67CDC:
    ctx->pc = 0x80C67CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67CDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67CE0:
    ctx->pc = 0x80C67CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CE0u)) return;
    // 80C67CE0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C67CE4:
    ctx->pc = 0x80C67CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CE4u)) return;
    // 80C67CE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67CE8:
    ctx->pc = 0x80C67CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67CE8: stwu     r1, -16(r1)
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
label_80C67CEC:
    ctx->pc = 0x80C67CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C67CEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67CF0:
    ctx->pc = 0x80C67CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67CF0: stw     r0, 20(r1)
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
label_80C67CF4:
    ctx->pc = 0x80C67CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67CF4: stw     r31, 12(r1)
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
label_80C67CF8:
    ctx->pc = 0x80C67CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67CF8: stw     r30, 8(r1)
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
label_80C67CFC:
    ctx->pc = 0x80C67CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67CFCu)) return;
    // 80C67CFC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C67D00:
    ctx->pc = 0x80C67D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67D00: lwz     r31, 32(r3)
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
label_80C67D04:
    ctx->pc = 0x80C67D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67D04: stw     r30, 24(r31)
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
label_80C67D08:
    ctx->pc = 0x80C67D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67D08: stw     r5, 28(r31)
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
label_80C67D0C:
    ctx->pc = 0x80C67D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D0Cu)) return;
    // 80C67D0C: cmpwi   r5, 0
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

label_80C67D10:
    ctx->pc = 0x80C67D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D10u)) return;
    // 80C67D10: bc    12, 1, 0x80C67D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67D20;
        }
    }

label_80C67D14:
    ctx->pc = 0x80C67D14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67D14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67D14: lwz     r3, 16(r31)
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
label_80C67D18:
    ctx->pc = 0x80C67D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D18u)) return;
    // 80C67D18: bl      0x80509C74
    {
            ctx->lr = 0x80C67D1Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C67D1C:
    ctx->pc = 0x80C67D1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67D1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67D1C: stw     r30, 20(r31)
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
label_80C67D20:
    ctx->pc = 0x80C67D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67D20: lwz     r31, 12(r1)
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
label_80C67D24:
    ctx->pc = 0x80C67D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67D24: lwz     r30, 8(r1)
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
label_80C67D28:
    ctx->pc = 0x80C67D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67D28: lwz     r0, 20(r1)
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
label_80C67D2C:
    ctx->pc = 0x80C67D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67D2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67D30:
    ctx->pc = 0x80C67D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D30u)) return;
    // 80C67D30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C67D34:
    ctx->pc = 0x80C67D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D34u)) return;
    // 80C67D34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67D38:
    ctx->pc = 0x80C67D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67D38: stwu     r1, -16(r1)
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
label_80C67D3C:
    ctx->pc = 0x80C67D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C67D3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67D40:
    ctx->pc = 0x80C67D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67D40: stw     r0, 20(r1)
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
label_80C67D44:
    ctx->pc = 0x80C67D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67D44: stw     r31, 12(r1)
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
label_80C67D48:
    ctx->pc = 0x80C67D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67D48: stw     r30, 8(r1)
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
label_80C67D4C:
    ctx->pc = 0x80C67D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D4Cu)) return;
    // 80C67D4C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C67D50:
    ctx->pc = 0x80C67D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67D50: lwz     r31, 32(r3)
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
label_80C67D54:
    ctx->pc = 0x80C67D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67D54: stw     r30, 36(r31)
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
label_80C67D58:
    ctx->pc = 0x80C67D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67D58: stw     r5, 40(r31)
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
label_80C67D5C:
    ctx->pc = 0x80C67D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D5Cu)) return;
    // 80C67D5C: cmpwi   r5, 0
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

label_80C67D60:
    ctx->pc = 0x80C67D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D60u)) return;
    // 80C67D60: bc    12, 1, 0x80C67D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67D70;
        }
    }

label_80C67D64:
    ctx->pc = 0x80C67D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67D64: lwz     r3, 16(r31)
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
label_80C67D68:
    ctx->pc = 0x80C67D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D68u)) return;
    // 80C67D68: bl      0x80509BF8
    {
            ctx->lr = 0x80C67D6Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C67D6C:
    ctx->pc = 0x80C67D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67D6C: stw     r30, 32(r31)
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
label_80C67D70:
    ctx->pc = 0x80C67D70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67D70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67D70: lwz     r31, 12(r1)
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
label_80C67D74:
    ctx->pc = 0x80C67D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67D74: lwz     r30, 8(r1)
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
label_80C67D78:
    ctx->pc = 0x80C67D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67D78: lwz     r0, 20(r1)
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
label_80C67D7C:
    ctx->pc = 0x80C67D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67D7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67D80:
    ctx->pc = 0x80C67D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D80u)) return;
    // 80C67D80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C67D84:
    ctx->pc = 0x80C67D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D84u)) return;
    // 80C67D84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67D88:
    ctx->pc = 0x80C67D88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67D88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67D88: stwu     r1, -16(r1)
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
label_80C67D8C:
    ctx->pc = 0x80C67D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C67D8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67D90:
    ctx->pc = 0x80C67D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67D90: stw     r0, 20(r1)
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
label_80C67D94:
    ctx->pc = 0x80C67D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67D94: stw     r31, 12(r1)
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
label_80C67D98:
    ctx->pc = 0x80C67D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67D98: stw     r30, 8(r1)
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
label_80C67D9C:
    ctx->pc = 0x80C67D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67D9Cu)) return;
    // 80C67D9C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C67DA0:
    ctx->pc = 0x80C67DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67DA0: lwz     r31, 32(r3)
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
label_80C67DA4:
    ctx->pc = 0x80C67DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67DA4: stw     r30, 48(r31)
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
label_80C67DA8:
    ctx->pc = 0x80C67DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67DA8: stw     r5, 52(r31)
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
label_80C67DAC:
    ctx->pc = 0x80C67DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DACu)) return;
    // 80C67DAC: cmpwi   r5, 0
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

label_80C67DB0:
    ctx->pc = 0x80C67DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DB0u)) return;
    // 80C67DB0: bc    12, 1, 0x80C67DC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67DC0;
        }
    }

label_80C67DB4:
    ctx->pc = 0x80C67DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67DB4: lwz     r3, 16(r31)
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
label_80C67DB8:
    ctx->pc = 0x80C67DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DB8u)) return;
    // 80C67DB8: bl      0x80509B94
    {
            ctx->lr = 0x80C67DBCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C67DBC:
    ctx->pc = 0x80C67DBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67DBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67DBC: stw     r30, 44(r31)
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
label_80C67DC0:
    ctx->pc = 0x80C67DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67DC0: lwz     r31, 12(r1)
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
label_80C67DC4:
    ctx->pc = 0x80C67DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67DC4: lwz     r30, 8(r1)
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
label_80C67DC8:
    ctx->pc = 0x80C67DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67DC8: lwz     r0, 20(r1)
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
label_80C67DCC:
    ctx->pc = 0x80C67DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67DCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67DD0:
    ctx->pc = 0x80C67DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DD0u)) return;
    // 80C67DD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C67DD4:
    ctx->pc = 0x80C67DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DD4u)) return;
    // 80C67DD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67DD8:
    ctx->pc = 0x80C67DD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67DD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C67DD8: stwu     r1, -16(r1)
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
label_80C67DDC:
    ctx->pc = 0x80C67DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67DDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67DE0:
    ctx->pc = 0x80C67DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67DE0: stw     r0, 20(r1)
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
label_80C67DE4:
    ctx->pc = 0x80C67DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67DE4: stw     r31, 12(r1)
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
label_80C67DE8:
    ctx->pc = 0x80C67DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DE8u)) return;
    // 80C67DE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C67DEC:
    ctx->pc = 0x80C67DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DECu)) return;
    // 80C67DEC: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C67DF0:
    ctx->pc = 0x80C67DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DF0u)) return;
    // 80C67DF0: addi    r4, r4, 25868
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25868);

label_80C67DF4:
    ctx->pc = 0x80C67DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67DF4: lwz     r0, 0(r4)
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
label_80C67DF8:
    ctx->pc = 0x80C67DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DF8u)) return;
    // 80C67DF8: cmplwi  r0, 0x0000
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

label_80C67DFC:
    ctx->pc = 0x80C67DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67DFCu)) return;
    // 80C67DFC: bc    4, 2, 0x80C67E20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C67E20;
        }
    }

label_80C67E00:
    ctx->pc = 0x80C67E00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67E00: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C67E04:
    ctx->pc = 0x80C67E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E04u)) return;
    // 80C67E04: bl      0x8050EEC0
    {
            ctx->lr = 0x80C67E08u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C67E08:
    ctx->pc = 0x80C67E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C67E08: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C67E0C:
    ctx->pc = 0x80C67E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E0Cu)) return;
    // 80C67E0C: addi    r4, r4, 25868
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25868);

label_80C67E10:
    ctx->pc = 0x80C67E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67E10: stw     r3, 0(r4)
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
label_80C67E14:
    ctx->pc = 0x80C67E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E14u)) return;
    // 80C67E14: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C67E18:
    ctx->pc = 0x80C67E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E18u)) return;
    // 80C67E18: addi    r3, r3, 25864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25864);

label_80C67E1C:
    ctx->pc = 0x80C67E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67E1C: stw     r31, 0(r3)
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
label_80C67E20:
    ctx->pc = 0x80C67E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67E20: lwz     r31, 12(r1)
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
label_80C67E24:
    ctx->pc = 0x80C67E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67E24: lwz     r0, 20(r1)
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
label_80C67E28:
    ctx->pc = 0x80C67E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67E28: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67E2C:
    ctx->pc = 0x80C67E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E2Cu)) return;
    // 80C67E2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C67E30:
    ctx->pc = 0x80C67E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E30u)) return;
    // 80C67E30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67E34:
    ctx->pc = 0x80C67E34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C67E34: stwu     r1, -32(r1)
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
label_80C67E38:
    ctx->pc = 0x80C67E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C67E38: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67E3C:
    ctx->pc = 0x80C67E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C67E3C: stw     r0, 36(r1)
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
label_80C67E40:
    ctx->pc = 0x80C67E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67E40: stw     r31, 28(r1)
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
label_80C67E44:
    ctx->pc = 0x80C67E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67E44: stw     r30, 24(r1)
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
label_80C67E48:
    ctx->pc = 0x80C67E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67E48: stw     r29, 20(r1)
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
label_80C67E4C:
    ctx->pc = 0x80C67E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67E4C: stw     r28, 16(r1)
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
label_80C67E50:
    ctx->pc = 0x80C67E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E50u)) return;
    // 80C67E50: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C67E54:
    ctx->pc = 0x80C67E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E54u)) return;
    // 80C67E54: addi    r30, r3, 25868
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(25868);

label_80C67E58:
    ctx->pc = 0x80C67E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67E58: lwz     r0, 0(r30)
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
label_80C67E5C:
    ctx->pc = 0x80C67E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E5Cu)) return;
    // 80C67E5C: cmplwi  r0, 0x0000
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

label_80C67E60:
    ctx->pc = 0x80C67E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E60u)) return;
    // 80C67E60: bc    12, 2, 0x80C67EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67EC0;
        }
    }

label_80C67E64:
    ctx->pc = 0x80C67E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C67E64: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C67E68:
    ctx->pc = 0x80C67E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E68u)) return;
    // 80C67E68: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C67E6C:
    ctx->pc = 0x80C67E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E6Cu)) return;
    // 80C67E6C: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C67E70:
    ctx->pc = 0x80C67E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E70u)) return;
    // 80C67E70: addi    r31, r3, 25864
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(25864);

label_80C67E74:
    ctx->pc = 0x80C67E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E74u)) return;
    // 80C67E74: b       0x80C67E94
    {
            goto label_80C67E94;
    }

label_80C67E78:
    ctx->pc = 0x80C67E78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C67E78: lwz     r3, 0(r30)
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
label_80C67E7C:
    ctx->pc = 0x80C67E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67E7C: lwzx    r3, r3, r29
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
label_80C67E80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E80u)) return;
    // 80C67E80: cmplwi  r3, 0x0000
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

label_80C67E84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E84u)) return;
    // 80C67E84: bc    12, 2, 0x80C67E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67E8C;
        }
    }

label_80C67E88:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67E88: bl      0x8050F9E0
    {
            ctx->lr = 0x80C67E8Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C67E8C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C67E8C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C67E90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E90u)) return;
    // 80C67E90: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C67E94:
    ctx->pc = 0x80C67E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67E94: lwz     r0, 0(r31)
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
label_80C67E98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E98u)) return;
    // 80C67E98: cmpw    r28, r0
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

label_80C67E9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67E9Cu)) return;
    // 80C67E9C: bc    12, 0, 0x80C67E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C67E78u;
                return;
            }
            goto label_80C67E78;
        }
    }

label_80C67EA0:
    ctx->pc = 0x80C67EA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67EA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C67EA0: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C67EA4:
    ctx->pc = 0x80C67EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EA4u)) return;
    // 80C67EA4: addi    r3, r3, 25868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25868);

label_80C67EA8:
    ctx->pc = 0x80C67EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67EA8: lwz     r3, 0(r3)
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
label_80C67EAC:
    ctx->pc = 0x80C67EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EACu)) return;
    // 80C67EAC: bl      0x8050ED40
    {
            ctx->lr = 0x80C67EB0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C67EB0:
    ctx->pc = 0x80C67EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C67EB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C67EB4:
    ctx->pc = 0x80C67EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EB4u)) return;
    // 80C67EB4: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C67EB8:
    ctx->pc = 0x80C67EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EB8u)) return;
    // 80C67EB8: addi    r3, r3, 25868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25868);

label_80C67EBC:
    ctx->pc = 0x80C67EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67EBC: stw     r0, 0(r3)
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
label_80C67EC0:
    ctx->pc = 0x80C67EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67EC0: lwz     r31, 28(r1)
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
label_80C67EC4:
    ctx->pc = 0x80C67EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67EC4: lwz     r30, 24(r1)
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
label_80C67EC8:
    ctx->pc = 0x80C67EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67EC8: lwz     r29, 20(r1)
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
label_80C67ECC:
    ctx->pc = 0x80C67ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67ECC: lwz     r28, 16(r1)
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
label_80C67ED0:
    ctx->pc = 0x80C67ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67ED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67ED0: lwz     r0, 36(r1)
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
label_80C67ED4:
    ctx->pc = 0x80C67ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67ED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67ED8:
    ctx->pc = 0x80C67ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67ED8u)) return;
    // 80C67ED8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C67EDC:
    ctx->pc = 0x80C67EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EDCu)) return;
    // 80C67EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67EE0:
    ctx->pc = 0x80C67EE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67EE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67EE0: stwu     r1, -16(r1)
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
label_80C67EE4:
    ctx->pc = 0x80C67EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67EE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67EE8:
    ctx->pc = 0x80C67EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67EE8: stw     r0, 20(r1)
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
label_80C67EEC:
    ctx->pc = 0x80C67EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67EEC: stw     r31, 12(r1)
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
label_80C67EF0:
    ctx->pc = 0x80C67EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EF0u)) return;
    // 80C67EF0: lis     r6, -27427
    ctx->gpr[6] = ((u32)(s32)(-27427) << 16);

label_80C67EF4:
    ctx->pc = 0x80C67EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EF4u)) return;
    // 80C67EF4: addi    r6, r6, 25864
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25864);

label_80C67EF8:
    ctx->pc = 0x80C67EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67EF8: lwz     r0, 0(r6)
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
label_80C67EFC:
    ctx->pc = 0x80C67EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67EFCu)) return;
    // 80C67EFC: cmpw    r3, r0
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

label_80C67F00:
    ctx->pc = 0x80C67F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F00u)) return;
    // 80C67F00: bc    4, 0, 0x80C67F3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C67F3C;
        }
    }

label_80C67F04:
    ctx->pc = 0x80C67F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67F04: lis     r6, -27427
    ctx->gpr[6] = ((u32)(s32)(-27427) << 16);

label_80C67F08:
    ctx->pc = 0x80C67F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F08u)) return;
    // 80C67F08: addi    r6, r6, 25868
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25868);

label_80C67F0C:
    ctx->pc = 0x80C67F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67F0C: lwz     r6, 0(r6)
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
label_80C67F10:
    ctx->pc = 0x80C67F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F10u)) return;
    // 80C67F10: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C67F14:
    ctx->pc = 0x80C67F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67F14: lwzx    r0, r6, r31
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
label_80C67F18:
    ctx->pc = 0x80C67F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F18u)) return;
    // 80C67F18: cmplwi  r0, 0x0000
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

label_80C67F1C:
    ctx->pc = 0x80C67F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F1Cu)) return;
    // 80C67F1C: bc    4, 2, 0x80C67F3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C67F3C;
        }
    }

label_80C67F20:
    ctx->pc = 0x80C67F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C67F20: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C67F24:
    ctx->pc = 0x80C67F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F24u)) return;
    // 80C67F24: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C67F28:
    ctx->pc = 0x80C67F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F28u)) return;
    // 80C67F28: bl      0x80C67C2C
    {
            ctx->lr = 0x80C67F2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C67C2Cu;
                return;
            }
            goto label_80C67C2C;
    }

label_80C67F2C:
    ctx->pc = 0x80C67F2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67F2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C67F2C: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C67F30:
    ctx->pc = 0x80C67F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F30u)) return;
    // 80C67F30: addi    r4, r4, 25868
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25868);

label_80C67F34:
    ctx->pc = 0x80C67F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67F34: lwz     r4, 0(r4)
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
label_80C67F38:
    ctx->pc = 0x80C67F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67F38: stwx    r3, r4, r31
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
label_80C67F3C:
    ctx->pc = 0x80C67F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67F3C: lwz     r31, 12(r1)
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
label_80C67F40:
    ctx->pc = 0x80C67F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67F40: lwz     r0, 20(r1)
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
label_80C67F44:
    ctx->pc = 0x80C67F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67F44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67F48:
    ctx->pc = 0x80C67F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F48u)) return;
    // 80C67F48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C67F4C:
    ctx->pc = 0x80C67F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F4Cu)) return;
    // 80C67F4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67F50:
    ctx->pc = 0x80C67F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C67F50: stwu     r1, -16(r1)
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
label_80C67F54:
    ctx->pc = 0x80C67F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67F54: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67F58:
    ctx->pc = 0x80C67F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67F58: stw     r0, 20(r1)
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
label_80C67F5C:
    ctx->pc = 0x80C67F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67F5C: stw     r31, 12(r1)
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
label_80C67F60:
    ctx->pc = 0x80C67F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F60u)) return;
    // 80C67F60: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C67F64:
    ctx->pc = 0x80C67F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F64u)) return;
    // 80C67F64: addi    r4, r4, 25864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25864);

label_80C67F68:
    ctx->pc = 0x80C67F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67F68: lwz     r0, 0(r4)
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
label_80C67F6C:
    ctx->pc = 0x80C67F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F6Cu)) return;
    // 80C67F6C: cmpw    r3, r0
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

label_80C67F70:
    ctx->pc = 0x80C67F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F70u)) return;
    // 80C67F70: bc    4, 0, 0x80C67FA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C67FA8;
        }
    }

label_80C67F74:
    ctx->pc = 0x80C67F74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67F74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67F74: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C67F78:
    ctx->pc = 0x80C67F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F78u)) return;
    // 80C67F78: addi    r4, r4, 25868
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25868);

label_80C67F7C:
    ctx->pc = 0x80C67F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67F7C: lwz     r4, 0(r4)
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
label_80C67F80:
    ctx->pc = 0x80C67F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F80u)) return;
    // 80C67F80: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C67F84:
    ctx->pc = 0x80C67F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67F84: lwzx    r3, r4, r31
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
label_80C67F88:
    ctx->pc = 0x80C67F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F88u)) return;
    // 80C67F88: cmplwi  r3, 0x0000
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

label_80C67F8C:
    ctx->pc = 0x80C67F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F8Cu)) return;
    // 80C67F8C: bc    12, 2, 0x80C67FA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67FA8;
        }
    }

label_80C67F90:
    ctx->pc = 0x80C67F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67F90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67F90: bl      0x8050F9E0
    {
            ctx->lr = 0x80C67F94u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C67F94:
    ctx->pc = 0x80C67F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C67F94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C67F98:
    ctx->pc = 0x80C67F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F98u)) return;
    // 80C67F98: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C67F9C:
    ctx->pc = 0x80C67F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67F9Cu)) return;
    // 80C67F9C: addi    r3, r3, 25868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25868);

label_80C67FA0:
    ctx->pc = 0x80C67FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C67FA0: lwz     r3, 0(r3)
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
label_80C67FA4:
    ctx->pc = 0x80C67FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C67FA4: stwx    r0, r3, r31
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
label_80C67FA8:
    ctx->pc = 0x80C67FA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67FA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67FA8: lwz     r31, 12(r1)
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
label_80C67FAC:
    ctx->pc = 0x80C67FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67FAC: lwz     r0, 20(r1)
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
label_80C67FB0:
    ctx->pc = 0x80C67FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C67FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67FB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67FB4:
    ctx->pc = 0x80C67FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FB4u)) return;
    // 80C67FB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C67FB8:
    ctx->pc = 0x80C67FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FB8u)) return;
    // 80C67FB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C67FBC:
    ctx->pc = 0x80C67FBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C67FBC: stwu     r1, -16(r1)
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
label_80C67FC0:
    ctx->pc = 0x80C67FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C67FC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C67FC4:
    ctx->pc = 0x80C67FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C67FC4: stw     r0, 20(r1)
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
label_80C67FC8:
    ctx->pc = 0x80C67FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FC8u)) return;
    // 80C67FC8: lis     r6, -27427
    ctx->gpr[6] = ((u32)(s32)(-27427) << 16);

label_80C67FCC:
    ctx->pc = 0x80C67FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FCCu)) return;
    // 80C67FCC: addi    r6, r6, 25864
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25864);

label_80C67FD0:
    ctx->pc = 0x80C67FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67FD0: lwz     r0, 0(r6)
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
label_80C67FD4:
    ctx->pc = 0x80C67FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FD4u)) return;
    // 80C67FD4: cmpw    r3, r0
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

label_80C67FD8:
    ctx->pc = 0x80C67FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FD8u)) return;
    // 80C67FD8: bc    4, 0, 0x80C67FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C67FFC;
        }
    }

label_80C67FDC:
    ctx->pc = 0x80C67FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C67FDC: lis     r6, -27427
    ctx->gpr[6] = ((u32)(s32)(-27427) << 16);

label_80C67FE0:
    ctx->pc = 0x80C67FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FE0u)) return;
    // 80C67FE0: addi    r6, r6, 25868
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25868);

label_80C67FE4:
    ctx->pc = 0x80C67FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67FE4: lwz     r6, 0(r6)
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
label_80C67FE8:
    ctx->pc = 0x80C67FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FE8u)) return;
    // 80C67FE8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C67FEC:
    ctx->pc = 0x80C67FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C67FEC: lwzx    r3, r6, r0
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
label_80C67FF0:
    ctx->pc = 0x80C67FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FF0u)) return;
    // 80C67FF0: cmplwi  r3, 0x0000
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

label_80C67FF4:
    ctx->pc = 0x80C67FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C67FF4u)) return;
    // 80C67FF4: bc    12, 2, 0x80C67FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C67FFC;
        }
    }

label_80C67FF8:
    ctx->pc = 0x80C67FF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67FF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C67FF8: bl      0x80C67CE8
    {
            ctx->lr = 0x80C67FFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C67CE8u;
                return;
            }
            goto label_80C67CE8;
    }

label_80C67FFC:
    ctx->pc = 0x80C67FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C67FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C67FFC: lwz     r0, 20(r1)
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
label_80C68000:
    ctx->pc = 0x80C68000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C68000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68000: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68004:
    ctx->pc = 0x80C68004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68004u)) return;
    // 80C68004: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C68008:
    ctx->pc = 0x80C68008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68008u)) return;
    // 80C68008: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C6800C:
    ctx->pc = 0x80C6800Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6800Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6800C: stwu     r1, -16(r1)
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
label_80C68010:
    ctx->pc = 0x80C68010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C68010: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68014:
    ctx->pc = 0x80C68014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C68014: stw     r0, 20(r1)
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
label_80C68018:
    ctx->pc = 0x80C68018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68018u)) return;
    // 80C68018: lis     r6, -27427
    ctx->gpr[6] = ((u32)(s32)(-27427) << 16);

label_80C6801C:
    ctx->pc = 0x80C6801Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6801Cu)) return;
    // 80C6801C: addi    r6, r6, 25864
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25864);

label_80C68020:
    ctx->pc = 0x80C68020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68020: lwz     r0, 0(r6)
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
label_80C68024:
    ctx->pc = 0x80C68024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68024u)) return;
    // 80C68024: cmpw    r3, r0
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

label_80C68028:
    ctx->pc = 0x80C68028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68028u)) return;
    // 80C68028: bc    4, 0, 0x80C6804C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6804C;
        }
    }

label_80C6802C:
    ctx->pc = 0x80C6802Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6802Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6802C: lis     r6, -27427
    ctx->gpr[6] = ((u32)(s32)(-27427) << 16);

label_80C68030:
    ctx->pc = 0x80C68030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68030u)) return;
    // 80C68030: addi    r6, r6, 25868
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25868);

label_80C68034:
    ctx->pc = 0x80C68034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68034: lwz     r6, 0(r6)
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
label_80C68038:
    ctx->pc = 0x80C68038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68038u)) return;
    // 80C68038: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C6803C:
    ctx->pc = 0x80C6803Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6803Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6803C: lwzx    r3, r6, r0
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
label_80C68040:
    ctx->pc = 0x80C68040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68040u)) return;
    // 80C68040: cmplwi  r3, 0x0000
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

label_80C68044:
    ctx->pc = 0x80C68044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68044u)) return;
    // 80C68044: bc    12, 2, 0x80C6804C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6804C;
        }
    }

label_80C68048:
    ctx->pc = 0x80C68048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C68048: bl      0x80C67D38
    {
            ctx->lr = 0x80C6804Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C67D38u;
                return;
            }
            goto label_80C67D38;
    }

label_80C6804C:
    ctx->pc = 0x80C6804Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6804Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6804C: lwz     r0, 20(r1)
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
label_80C68050:
    ctx->pc = 0x80C68050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C68050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68050: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68054:
    ctx->pc = 0x80C68054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68054u)) return;
    // 80C68054: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C68058:
    ctx->pc = 0x80C68058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68058u)) return;
    // 80C68058: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C6805C:
    ctx->pc = 0x80C6805Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6805Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6805C: stwu     r1, -16(r1)
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
label_80C68060:
    ctx->pc = 0x80C68060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C68060: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68064:
    ctx->pc = 0x80C68064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C68064: stw     r0, 20(r1)
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
label_80C68068:
    ctx->pc = 0x80C68068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68068u)) return;
    // 80C68068: lis     r6, -27427
    ctx->gpr[6] = ((u32)(s32)(-27427) << 16);

label_80C6806C:
    ctx->pc = 0x80C6806Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6806Cu)) return;
    // 80C6806C: addi    r6, r6, 25864
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25864);

label_80C68070:
    ctx->pc = 0x80C68070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68070: lwz     r0, 0(r6)
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
label_80C68074:
    ctx->pc = 0x80C68074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68074u)) return;
    // 80C68074: cmpw    r3, r0
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

label_80C68078:
    ctx->pc = 0x80C68078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68078u)) return;
    // 80C68078: bc    4, 0, 0x80C6809C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6809C;
        }
    }

label_80C6807C:
    ctx->pc = 0x80C6807Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6807Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6807C: lis     r6, -27427
    ctx->gpr[6] = ((u32)(s32)(-27427) << 16);

label_80C68080:
    ctx->pc = 0x80C68080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68080u)) return;
    // 80C68080: addi    r6, r6, 25868
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25868);

label_80C68084:
    ctx->pc = 0x80C68084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68084: lwz     r6, 0(r6)
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
label_80C68088:
    ctx->pc = 0x80C68088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68088u)) return;
    // 80C68088: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C6808C:
    ctx->pc = 0x80C6808Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6808Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6808C: lwzx    r3, r6, r0
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
label_80C68090:
    ctx->pc = 0x80C68090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68090u)) return;
    // 80C68090: cmplwi  r3, 0x0000
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

label_80C68094:
    ctx->pc = 0x80C68094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68094u)) return;
    // 80C68094: bc    12, 2, 0x80C6809C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6809C;
        }
    }

label_80C68098:
    ctx->pc = 0x80C68098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C68098: bl      0x80C67D88
    {
            ctx->lr = 0x80C6809Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C67D88u;
                return;
            }
            goto label_80C67D88;
    }

label_80C6809C:
    ctx->pc = 0x80C6809Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6809Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6809C: lwz     r0, 20(r1)
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
label_80C680A0:
    ctx->pc = 0x80C680A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C680A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C680A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C680A4:
    ctx->pc = 0x80C680A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680A4u)) return;
    // 80C680A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C680A8:
    ctx->pc = 0x80C680A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680A8u)) return;
    // 80C680A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C680AC:
    ctx->pc = 0x80C680ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C680ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C680AC: stwu     r1, -32(r1)
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
label_80C680B0:
    ctx->pc = 0x80C680B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C680B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C680B4:
    ctx->pc = 0x80C680B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C680B4: stw     r0, 36(r1)
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
label_80C680B8:
    ctx->pc = 0x80C680B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C680B8: stw     r31, 28(r1)
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
label_80C680BC:
    ctx->pc = 0x80C680BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C680BC: stw     r30, 24(r1)
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
label_80C680C0:
    ctx->pc = 0x80C680C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C680C0: stw     r29, 20(r1)
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
label_80C680C4:
    ctx->pc = 0x80C680C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C680C4: stw     r28, 16(r1)
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
label_80C680C8:
    ctx->pc = 0x80C680C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680C8u)) return;
    // 80C680C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C680CC:
    ctx->pc = 0x80C680CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680CCu)) return;
    // 80C680CC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C680D0:
    ctx->pc = 0x80C680D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680D0u)) return;
    // 80C680D0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C680D4:
    ctx->pc = 0x80C680D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680D4u)) return;
    // 80C680D4: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C680D8:
    ctx->pc = 0x80C680D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680D8u)) return;
    // 80C680D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C680DC:
    ctx->pc = 0x80C680DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680DCu)) return;
    // 80C680DC: bl      0x80401DB0
    {
            ctx->lr = 0x80C680E0u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C680E0:
    ctx->pc = 0x80C680E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C680E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C680E0: lis     r4, -27427
    ctx->gpr[4] = ((u32)(s32)(-27427) << 16);

label_80C680E4:
    ctx->pc = 0x80C680E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680E4u)) return;
    // 80C680E4: addi    r4, r4, 25872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25872);

label_80C680E8:
    ctx->pc = 0x80C680E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C680E8: lwz     r0, 0(r4)
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
label_80C680EC:
    ctx->pc = 0x80C680ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680ECu)) return;
    // 80C680EC: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C680F0:
    ctx->pc = 0x80C680F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680F0u)) return;
    // 80C680F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C680F4:
    ctx->pc = 0x80C680F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680F4u)) return;
    // 80C680F4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C680F8:
    ctx->pc = 0x80C680F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680F8u)) return;
    // 80C680F8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C680FC:
    ctx->pc = 0x80C680FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C680FCu)) return;
    // 80C680FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C68100:
    ctx->pc = 0x80C68100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68100u)) return;
    // 80C68100: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C68104:
    ctx->pc = 0x80C68104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68104u)) return;
    // 80C68104: bl      0x8050A0D4
    {
            ctx->lr = 0x80C68108u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C68108:
    ctx->pc = 0x80C68108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C68108: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C6810C:
    ctx->pc = 0x80C6810Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6810Cu)) return;
    // 80C6810C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C68110:
    ctx->pc = 0x80C68110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68110u)) return;
    // 80C68110: bl      0x80509C74
    {
            ctx->lr = 0x80C68114u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C68114:
    ctx->pc = 0x80C68114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C68114: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C68118:
    ctx->pc = 0x80C68118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68118u)) return;
    // 80C68118: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C6811C:
    ctx->pc = 0x80C6811Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6811Cu)) return;
    // 80C6811C: bl      0x80509BF8
    {
            ctx->lr = 0x80C68120u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C68120:
    ctx->pc = 0x80C68120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C68120: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C68124:
    ctx->pc = 0x80C68124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68124u)) return;
    // 80C68124: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C68128:
    ctx->pc = 0x80C68128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68128u)) return;
    // 80C68128: bl      0x80509B94
    {
            ctx->lr = 0x80C6812Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C6812C:
    ctx->pc = 0x80C6812Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6812Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C6812C: lis     r3, -27427
    ctx->gpr[3] = ((u32)(s32)(-27427) << 16);

label_80C68130:
    ctx->pc = 0x80C68130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68130u)) return;
    // 80C68130: addi    r4, r3, 25872
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(25872);

label_80C68134:
    ctx->pc = 0x80C68134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C68134: lwz     r3, 0(r4)
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
label_80C68138:
    ctx->pc = 0x80C68138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68138u)) return;
    // 80C68138: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C6813C:
    ctx->pc = 0x80C6813Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6813Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6813C: stw     r0, 0(r4)
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
label_80C68140:
    ctx->pc = 0x80C68140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68140u)) return;
    // 80C68140: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C68144:
    ctx->pc = 0x80C68144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C68144: stw     r0, 0(r4)
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
label_80C68148:
    ctx->pc = 0x80C68148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C68148: lwz     r31, 28(r1)
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
label_80C6814C:
    ctx->pc = 0x80C6814Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6814Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6814C: lwz     r30, 24(r1)
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
label_80C68150:
    ctx->pc = 0x80C68150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C68150: lwz     r29, 20(r1)
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
label_80C68154:
    ctx->pc = 0x80C68154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C68154: lwz     r28, 16(r1)
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
label_80C68158:
    ctx->pc = 0x80C68158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68158: lwz     r0, 36(r1)
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
label_80C6815C:
    ctx->pc = 0x80C6815Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6815Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6815C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68160:
    ctx->pc = 0x80C68160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68160u)) return;
    // 80C68160: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C68164:
    ctx->pc = 0x80C68164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68164u)) return;
    // 80C68164: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C68168:
    ctx->pc = 0x80C68168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68168: stwu     r1, -64(r1)
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
label_80C6816C:
    ctx->pc = 0x80C6816Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6816Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6816C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68170:
    ctx->pc = 0x80C68170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68170: stw     r0, 68(r1)
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
label_80C68174:
    ctx->pc = 0x80C68174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68174u)) return;
    // 80C68174: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C68178:
    ctx->pc = 0x80C68178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68178u)) return;
    // 80C68178: bl      0x80006DD4
    {
            ctx->lr = 0x80C6817Cu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80C6817C:
    ctx->pc = 0x80C6817Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6817Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C6817C: lwz     r27, 32(r3)
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
label_80C68180:
    ctx->pc = 0x80C68180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68180u)) return;
    // 80C68180: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C68184:
    ctx->pc = 0x80C68184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68184u)) return;
    // 80C68184: addi    r3, r3, 12128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12128);

label_80C68188:
    ctx->pc = 0x80C68188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C68188: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68188u)) return;
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
label_80C6818C:
    ctx->pc = 0x80C6818Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6818Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C6818C: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C6818Cu)) return;
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
label_80C68190:
    ctx->pc = 0x80C68190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68190u)) return;
    // 80C68190: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C68190u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C68194:
    ctx->pc = 0x80C68194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68194u)) return;
    // 80C68194: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C68194u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C68198:
    ctx->pc = 0x80C68198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C68198: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C68198u)) return;
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
label_80C6819C:
    ctx->pc = 0x80C6819Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6819Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C6819C: lwz     r31, 12(r1)
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
label_80C681A0:
    ctx->pc = 0x80C681A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C681A0: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C681A0u)) return;
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
label_80C681A4:
    ctx->pc = 0x80C681A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681A4u)) return;
    // 80C681A4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C681A4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C681A8:
    ctx->pc = 0x80C681A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681A8u)) return;
    // 80C681A8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C681A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C681AC:
    ctx->pc = 0x80C681ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C681AC: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C681ACu)) return;
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
label_80C681B0:
    ctx->pc = 0x80C681B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C681B0: lwz     r30, 20(r1)
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
label_80C681B4:
    ctx->pc = 0x80C681B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C681B4: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C681B4u)) return;
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
label_80C681B8:
    ctx->pc = 0x80C681B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681B8u)) return;
    // 80C681B8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C681B8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C681BC:
    ctx->pc = 0x80C681BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681BCu)) return;
    // 80C681BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C681BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C681C0:
    ctx->pc = 0x80C681C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C681C0: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C681C0u)) return;
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
label_80C681C4:
    ctx->pc = 0x80C681C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C681C4: lwz     r29, 28(r1)
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
label_80C681C8:
    ctx->pc = 0x80C681C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C681C8: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C681C8u)) return;
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
label_80C681CC:
    ctx->pc = 0x80C681CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681CCu)) return;
    // 80C681CC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C681CCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C681D0:
    ctx->pc = 0x80C681D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681D0u)) return;
    // 80C681D0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C681D0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C681D4:
    ctx->pc = 0x80C681D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C681D4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C681D4u)) return;
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
label_80C681D8:
    ctx->pc = 0x80C681D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C681D8: lwz     r28, 36(r1)
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
label_80C681DC:
    ctx->pc = 0x80C681DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681DCu)) return;
    // 80C681DC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C681E0:
    ctx->pc = 0x80C681E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681E0u)) return;
    // 80C681E0: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80C681E4:
    ctx->pc = 0x80C681E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C681E4: lwz     r0, 0(r3)
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
label_80C681E8:
    ctx->pc = 0x80C681E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681E8u)) return;
    // 80C681E8: cmpwi   r0, 0
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

label_80C681EC:
    ctx->pc = 0x80C681ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681ECu)) return;
    // 80C681EC: bc    4, 2, 0x80C682A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C682A4;
        }
    }

label_80C681F0:
    ctx->pc = 0x80C681F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C681F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C681F0: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C681F4:
    ctx->pc = 0x80C681F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681F4u)) return;
    // 80C681F4: cmplwi  r0, 0x0000
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

label_80C681F8:
    ctx->pc = 0x80C681F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C681F8u)) return;
    // 80C681F8: bc    12, 2, 0x80C682A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C682A4;
        }
    }

label_80C681FC:
    ctx->pc = 0x80C681FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C681FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C681FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C68200:
    ctx->pc = 0x80C68200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68200u)) return;
    // 80C68200: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C68204:
    ctx->pc = 0x80C68204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68204u)) return;
    // 80C68204: bl      0x8060F4F8
    {
            ctx->lr = 0x80C68208u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C68208:
    ctx->pc = 0x80C68208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C68208: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C6820C:
    ctx->pc = 0x80C6820Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6820Cu)) return;
    // 80C6820C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C68210:
    ctx->pc = 0x80C68210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68210u)) return;
    // 80C68210: bl      0x8060F4F8
    {
            ctx->lr = 0x80C68214u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C68214:
    ctx->pc = 0x80C68214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C68214: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C68214u)) return;
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
label_80C68218:
    ctx->pc = 0x80C68218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68218u)) return;
    // 80C68218: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C6821C:
    ctx->pc = 0x80C6821Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6821Cu)) return;
    // 80C6821C: addi    r3, r3, 12136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12136);

label_80C68220:
    ctx->pc = 0x80C68220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C68220: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68220u)) return;
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
label_80C68224:
    ctx->pc = 0x80C68224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68224u)) return;
    // 80C68224: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C68224u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80C68228:
    ctx->pc = 0x80C68228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68228u)) return;
    // 80C68228: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C6822C:
    ctx->pc = 0x80C6822Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6822Cu)) return;
    // 80C6822C: bc    4, 2, 0x80C68240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C68240;
        }
    }

label_80C68230:
    ctx->pc = 0x80C68230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C68230: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C68234:
    ctx->pc = 0x80C68234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68234u)) return;
    // 80C68234: addi    r3, r3, 12132
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12132);

label_80C68238:
    ctx->pc = 0x80C68238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C68238: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68238u)) return;
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
label_80C6823C:
    ctx->pc = 0x80C6823Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6823Cu)) return;
    // 80C6823C: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6823Cu)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80C68240:
    ctx->pc = 0x80C68240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C68240: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C68244:
    ctx->pc = 0x80C68244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68244u)) return;
    // 80C68244: cmplwi  r0, 0x00FF
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

label_80C68248:
    ctx->pc = 0x80C68248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68248u)) return;
    // 80C68248: bc    4, 1, 0x80C68250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C68250;
        }
    }

label_80C6824C:
    ctx->pc = 0x80C6824Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6824Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6824C: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80C68250:
    ctx->pc = 0x80C68250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80C68250: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C68254:
    ctx->pc = 0x80C68254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68254u)) return;
    // 80C68254: addi    r3, r3, 12140
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12140);

label_80C68258:
    ctx->pc = 0x80C68258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C68258: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68258u)) return;
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
label_80C6825C:
    ctx->pc = 0x80C6825Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6825Cu)) return;
    // 80C6825C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C6825Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C68260:
    ctx->pc = 0x80C68260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68260u)) return;
    // 80C68260: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C68264:
    ctx->pc = 0x80C68264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68264u)) return;
    // 80C68264: addi    r3, r3, 12144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12144);

label_80C68268:
    ctx->pc = 0x80C68268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C68268: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68268u)) return;
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
label_80C6826C:
    ctx->pc = 0x80C6826Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6826Cu)) return;
    // 80C6826C: lis     r3, -27428
    ctx->gpr[3] = ((u32)(s32)(-27428) << 16);

label_80C68270:
    ctx->pc = 0x80C68270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68270u)) return;
    // 80C68270: addi    r3, r3, 12148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12148);

label_80C68274:
    ctx->pc = 0x80C68274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C68274: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68274u)) return;
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
label_80C68278:
    ctx->pc = 0x80C68278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68278u)) return;
    // 80C68278: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C6827C:
    ctx->pc = 0x80C6827Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6827Cu)) return;
    // 80C6827C: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C68280:
    ctx->pc = 0x80C68280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68280u)) return;
    // 80C68280: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C68284:
    ctx->pc = 0x80C68284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68284u)) return;
    // 80C68284: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C68288:
    ctx->pc = 0x80C68288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68288u)) return;
    // 80C68288: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80C6828C:
    ctx->pc = 0x80C6828Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6828Cu)) return;
    // 80C6828C: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C68290:
    ctx->pc = 0x80C68290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68290u)) return;
    // 80C68290: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C68294:
    ctx->pc = 0x80C68294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68294u)) return;
    // 80C68294: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C68298:
    ctx->pc = 0x80C68298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68298u)) return;
    // 80C68298: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C6829C:
    ctx->pc = 0x80C6829Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6829Cu)) return;
    // 80C6829C: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C682A0:
    ctx->pc = 0x80C682A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682A0u)) return;
    // 80C682A0: bl      0x80C68460
    {
            ctx->lr = 0x80C682A4u;
            goto label_80C68460;
    }

label_80C682A4:
    ctx->pc = 0x80C682A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C682A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C682A4: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C682A8:
    ctx->pc = 0x80C682A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682A8u)) return;
    // 80C682A8: bl      0x80006E20
    {
            ctx->lr = 0x80C682ACu;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80C682AC:
    ctx->pc = 0x80C682ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C682ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C682AC: lwz     r0, 68(r1)
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
label_80C682B0:
    ctx->pc = 0x80C682B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C682B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C682B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C682B4:
    ctx->pc = 0x80C682B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682B4u)) return;
    // 80C682B4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C682B8:
    ctx->pc = 0x80C682B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682B8u)) return;
    // 80C682B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C682BC:
    ctx->pc = 0x80C682BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C682BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C682BC: stwu     r1, -16(r1)
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
label_80C682C0:
    ctx->pc = 0x80C682C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C682C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C682C4:
    ctx->pc = 0x80C682C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C682C4: stw     r0, 20(r1)
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
label_80C682C8:
    ctx->pc = 0x80C682C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C682C8: lwz     r5, 32(r3)
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
label_80C682CC:
    ctx->pc = 0x80C682CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C682CC: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C682CCu)) return;
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
label_80C682D0:
    ctx->pc = 0x80C682D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C682D0: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C682D0u)) return;
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
label_80C682D4:
    ctx->pc = 0x80C682D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682D4u)) return;
    // 80C682D4: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C682D4u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80C682D8:
    ctx->pc = 0x80C682D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682D8u)) return;
    // 80C682D8: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C682DC:
    ctx->pc = 0x80C682DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682DCu)) return;
    // 80C682DC: addi    r4, r4, 12152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12152);

label_80C682E0:
    ctx->pc = 0x80C682E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C682E0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C682E0u)) return;
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
label_80C682E4:
    ctx->pc = 0x80C682E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682E4u)) return;
    // 80C682E4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C682E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C682E8:
    ctx->pc = 0x80C682E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682E8u)) return;
    // 80C682E8: bc    4, 1, 0x80C682F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C682F4;
        }
    }

label_80C682EC:
    ctx->pc = 0x80C682ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C682ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C682EC: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C682ECu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C682F0:
    ctx->pc = 0x80C682F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682F0u)) return;
    // 80C682F0: b       0x80C6830C
    {
            goto label_80C6830C;
    }

label_80C682F4:
    ctx->pc = 0x80C682F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C682F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C682F4: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C682F8:
    ctx->pc = 0x80C682F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682F8u)) return;
    // 80C682F8: addi    r4, r4, 12140
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12140);

label_80C682FC:
    ctx->pc = 0x80C682FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C682FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C682FC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C682FCu)) return;
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
label_80C68300:
    ctx->pc = 0x80C68300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68300u)) return;
    // 80C68300: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C68300u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C68304:
    ctx->pc = 0x80C68304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68304u)) return;
    // 80C68304: bc    4, 0, 0x80C6830C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6830C;
        }
    }

label_80C68308:
    ctx->pc = 0x80C68308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C68308: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C68308u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C6830C:
    ctx->pc = 0x80C6830Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6830Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6830C: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6830Cu)) return;
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
label_80C68310:
    ctx->pc = 0x80C68310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68310u)) return;
    // 80C68310: bl      0x80C68168
    {
            ctx->lr = 0x80C68314u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C68168u;
                return;
            }
            goto label_80C68168;
    }

label_80C68314:
    ctx->pc = 0x80C68314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68314: lwz     r0, 20(r1)
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
label_80C68318:
    ctx->pc = 0x80C68318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C68318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68318: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6831C:
    ctx->pc = 0x80C6831Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6831Cu)) return;
    // 80C6831C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C68320:
    ctx->pc = 0x80C68320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68320u)) return;
    // 80C68320: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C68324:
    ctx->pc = 0x80C68324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C68324: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C68328:
    ctx->pc = 0x80C68328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C68328: stwu     r1, -16(r1)
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
label_80C6832C:
    ctx->pc = 0x80C6832Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6832Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6832C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68330:
    ctx->pc = 0x80C68330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C68330: stw     r0, 20(r1)
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
label_80C68334:
    ctx->pc = 0x80C68334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68334u)) return;
    // 80C68334: lis     r4, -32569
    ctx->gpr[4] = ((u32)(s32)(-32569) << 16);

label_80C68338:
    ctx->pc = 0x80C68338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68338u)) return;
    // 80C68338: addi    r0, r4, -32068
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-32068);

label_80C6833C:
    ctx->pc = 0x80C6833Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6833Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6833C: stw     r0, 16(r3)
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
label_80C68340:
    ctx->pc = 0x80C68340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68340u)) return;
    // 80C68340: lis     r4, -32569
    ctx->gpr[4] = ((u32)(s32)(-32569) << 16);

label_80C68344:
    ctx->pc = 0x80C68344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68344u)) return;
    // 80C68344: addi    r0, r4, -32408
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-32408);

label_80C68348:
    ctx->pc = 0x80C68348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68348: stw     r0, 20(r3)
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
label_80C6834C:
    ctx->pc = 0x80C6834Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6834Cu)) return;
    // 80C6834C: lis     r4, -32569
    ctx->gpr[4] = ((u32)(s32)(-32569) << 16);

label_80C68350:
    ctx->pc = 0x80C68350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68350u)) return;
    // 80C68350: addi    r0, r4, -31964
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-31964);

label_80C68354:
    ctx->pc = 0x80C68354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C68354: stw     r0, 24(r3)
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
label_80C68358:
    ctx->pc = 0x80C68358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68358u)) return;
    // 80C68358: bl      0x80C682BC
    {
            ctx->lr = 0x80C6835Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C682BCu;
                return;
            }
            goto label_80C682BC;
    }

label_80C6835C:
    ctx->pc = 0x80C6835Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6835Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6835C: lwz     r0, 20(r1)
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
label_80C68360:
    ctx->pc = 0x80C68360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C68360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68360: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68364:
    ctx->pc = 0x80C68364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68364u)) return;
    // 80C68364: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C68368:
    ctx->pc = 0x80C68368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68368u)) return;
    // 80C68368: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C6836C:
    ctx->pc = 0x80C6836Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6836Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C6836C: stwu     r1, -96(r1)
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
label_80C68370:
    ctx->pc = 0x80C68370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C68370: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68374:
    ctx->pc = 0x80C68374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C68374: stw     r0, 100(r1)
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
label_80C68378:
    ctx->pc = 0x80C68378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C68378: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C68378u)) return;
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
label_80C6837C:
    ctx->pc = 0x80C6837Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6837Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C6837C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6837Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C6837Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68380:
    ctx->pc = 0x80C68380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C68380: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C68380u)) return;
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
label_80C68384:
    ctx->pc = 0x80C68384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C68384: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C68384u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C68384u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68388:
    ctx->pc = 0x80C68388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C68388: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C68388u)) return;
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
label_80C6838C:
    ctx->pc = 0x80C6838Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6838Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C6838C: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6838Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C6838Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68390:
    ctx->pc = 0x80C68390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C68390: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C68390u)) return;
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
label_80C68394:
    ctx->pc = 0x80C68394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C68394: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C68394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80C68394u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68398:
    ctx->pc = 0x80C68398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C68398: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C68398u)) return;
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
label_80C6839C:
    ctx->pc = 0x80C6839Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6839Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C6839C: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6839Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80C6839Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C683A0:
    ctx->pc = 0x80C683A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683A0u)) return;
    // 80C683A0: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80C683A0u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80C683A4:
    ctx->pc = 0x80C683A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683A4u)) return;
    // 80C683A4: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80C683A4u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80C683A8:
    ctx->pc = 0x80C683A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683A8u)) return;
    // 80C683A8: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80C683A8u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80C683AC:
    ctx->pc = 0x80C683ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683ACu)) return;
    // 80C683AC: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80C683ACu)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80C683B0:
    ctx->pc = 0x80C683B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683B0u)) return;
    // 80C683B0: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80C683B0u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80C683B4:
    ctx->pc = 0x80C683B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683B4u)) return;
    // 80C683B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C683B8:
    ctx->pc = 0x80C683B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683B8u)) return;
    // 80C683B8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C683BC:
    ctx->pc = 0x80C683BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683BCu)) return;
    // 80C683BC: lis     r5, -32569
    ctx->gpr[5] = ((u32)(s32)(-32569) << 16);

label_80C683C0:
    ctx->pc = 0x80C683C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683C0u)) return;
    // 80C683C0: addi    r5, r5, -31960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31960);

label_80C683C4:
    ctx->pc = 0x80C683C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683C4u)) return;
    // 80C683C4: bl      0x8050FD60
    {
            ctx->lr = 0x80C683C8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C683C8:
    ctx->pc = 0x80C683C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C683C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C683C8: lwz     r5, 32(r3)
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
label_80C683CC:
    ctx->pc = 0x80C683CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C683CC: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C683CCu)) return;
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
label_80C683D0:
    ctx->pc = 0x80C683D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C683D0: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C683D0u)) return;
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
label_80C683D4:
    ctx->pc = 0x80C683D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C683D4: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C683D4u)) return;
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
label_80C683D8:
    ctx->pc = 0x80C683D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C683D8: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C683D8u)) return;
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
label_80C683DC:
    ctx->pc = 0x80C683DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C683DC: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C683DCu)) return;
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
label_80C683E0:
    ctx->pc = 0x80C683E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683E0u)) return;
    // 80C683E0: lis     r4, -27428
    ctx->gpr[4] = ((u32)(s32)(-27428) << 16);

label_80C683E4:
    ctx->pc = 0x80C683E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683E4u)) return;
    // 80C683E4: addi    r4, r4, 12136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12136);

label_80C683E8:
    ctx->pc = 0x80C683E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C683E8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C683E8u)) return;
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
label_80C683EC:
    ctx->pc = 0x80C683ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C683EC: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C683ECu)) return;
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
label_80C683F0:
    ctx->pc = 0x80C683F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C683F0: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C683F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C683F0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C683F4:
    ctx->pc = 0x80C683F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C683F4: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C683F4u)) return;
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
label_80C683F8:
    ctx->pc = 0x80C683F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C683F8: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C683F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C683F8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C683FC:
    ctx->pc = 0x80C683FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C683FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C683FC: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C683FCu)) return;
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
label_80C68400:
    ctx->pc = 0x80C68400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C68400: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C68400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C68400u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68404:
    ctx->pc = 0x80C68404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C68404: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C68404u)) return;
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
label_80C68408:
    ctx->pc = 0x80C68408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C68408: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C68408u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80C68408u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6840C:
    ctx->pc = 0x80C6840Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6840Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6840C: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6840Cu)) return;
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
label_80C68410:
    ctx->pc = 0x80C68410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C68410: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C68410u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80C68410u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68414:
    ctx->pc = 0x80C68414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C68414: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C68414u)) return;
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
label_80C68418:
    ctx->pc = 0x80C68418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68418: lwz     r0, 100(r1)
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
label_80C6841C:
    ctx->pc = 0x80C6841Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6841Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6841C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68420:
    ctx->pc = 0x80C68420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68420u)) return;
    // 80C68420: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C68424:
    ctx->pc = 0x80C68424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68424u)) return;
    // 80C68424: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C68428:
    ctx->pc = 0x80C68428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68428: lwz     r3, 32(r3)
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
label_80C6842C:
    ctx->pc = 0x80C6842Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6842Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6842C: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6842Cu)) return;
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
label_80C68430:
    ctx->pc = 0x80C68430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68430u)) return;
    // 80C68430: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C68434:
    ctx->pc = 0x80C68434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68434: lwz     r3, 32(r3)
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
label_80C68438:
    ctx->pc = 0x80C68438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C68438: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68438u)) return;
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
label_80C6843C:
    ctx->pc = 0x80C6843Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6843Cu)) return;
    // 80C6843C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C68440:
    ctx->pc = 0x80C68440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68440: lwz     r3, 32(r3)
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
label_80C68444:
    ctx->pc = 0x80C68444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C68444: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68444u)) return;
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
label_80C68448:
    ctx->pc = 0x80C68448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68448: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68448u)) return;
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
label_80C6844C:
    ctx->pc = 0x80C6844Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6844Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6844C: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6844Cu)) return;
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
label_80C68450:
    ctx->pc = 0x80C68450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68450u)) return;
    // 80C68450: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C68454:
    ctx->pc = 0x80C68454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68454: lwz     r3, 32(r3)
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
label_80C68458:
    ctx->pc = 0x80C68458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C68458: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C68458u)) return;
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
label_80C6845C:
    ctx->pc = 0x80C6845Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6845Cu)) return;
    // 80C6845C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

label_80C68460:
    ctx->pc = 0x80C68460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68460: stwu     r1, -16(r1)
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
label_80C68464:
    ctx->pc = 0x80C68464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C68464: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C68468:
    ctx->pc = 0x80C68468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68468: stw     r0, 20(r1)
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
label_80C6846C:
    ctx->pc = 0x80C6846Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6846Cu)) return;
    // 80C6846C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C68470:
    ctx->pc = 0x80C68470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68470u)) return;
    // 80C68470: bl      0x80607948
    {
            ctx->lr = 0x80C68474u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80C68474:
    ctx->pc = 0x80C68474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C68474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C68474: lwz     r0, 20(r1)
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
label_80C68478:
    ctx->pc = 0x80C68478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C68478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C68478: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6847C:
    ctx->pc = 0x80C6847Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6847Cu)) return;
    // 80C6847C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C68480:
    ctx->pc = 0x80C68480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C68480u)) return;
    // 80C68480: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C671A0;
        }
    }

    ctx->pc = 0x80C68484u;
    return;
return_dispatch_80C671A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C671D4u: goto label_80C671D4;
    case 0x80C671D8u: goto label_80C671D8;
    case 0x80C671DCu: goto label_80C671DC;
    case 0x80C671E4u: goto label_80C671E4;
    case 0x80C671ECu: goto label_80C671EC;
    case 0x80C6721Cu: goto label_80C6721C;
    case 0x80C67234u: goto label_80C67234;
    case 0x80C67264u: goto label_80C67264;
    case 0x80C67280u: goto label_80C67280;
    case 0x80C67288u: goto label_80C67288;
    case 0x80C672B0u: goto label_80C672B0;
    case 0x80C672B8u: goto label_80C672B8;
    case 0x80C672C8u: goto label_80C672C8;
    case 0x80C672D0u: goto label_80C672D0;
    case 0x80C672D8u: goto label_80C672D8;
    case 0x80C672DCu: goto label_80C672DC;
    case 0x80C672E4u: goto label_80C672E4;
    case 0x80C6730Cu: goto label_80C6730C;
    case 0x80C67350u: goto label_80C67350;
    case 0x80C67358u: goto label_80C67358;
    case 0x80C67360u: goto label_80C67360;
    case 0x80C67388u: goto label_80C67388;
    case 0x80C67390u: goto label_80C67390;
    case 0x80C673A4u: goto label_80C673A4;
    case 0x80C673ACu: goto label_80C673AC;
    case 0x80C673B0u: goto label_80C673B0;
    case 0x80C673B8u: goto label_80C673B8;
    case 0x80C673E0u: goto label_80C673E0;
    case 0x80C673E8u: goto label_80C673E8;
    case 0x80C673F0u: goto label_80C673F0;
    case 0x80C67418u: goto label_80C67418;
    case 0x80C67420u: goto label_80C67420;
    case 0x80C67448u: goto label_80C67448;
    case 0x80C67450u: goto label_80C67450;
    case 0x80C67458u: goto label_80C67458;
    case 0x80C67480u: goto label_80C67480;
    case 0x80C67488u: goto label_80C67488;
    case 0x80C674B8u: goto label_80C674B8;
    case 0x80C674D4u: goto label_80C674D4;
    case 0x80C67504u: goto label_80C67504;
    case 0x80C67520u: goto label_80C67520;
    case 0x80C67528u: goto label_80C67528;
    case 0x80C67550u: goto label_80C67550;
    case 0x80C67558u: goto label_80C67558;
    case 0x80C67588u: goto label_80C67588;
    case 0x80C675A4u: goto label_80C675A4;
    case 0x80C675D4u: goto label_80C675D4;
    case 0x80C675F0u: goto label_80C675F0;
    case 0x80C675F8u: goto label_80C675F8;
    case 0x80C675FCu: goto label_80C675FC;
    case 0x80C67604u: goto label_80C67604;
    case 0x80C6762Cu: goto label_80C6762C;
    case 0x80C67634u: goto label_80C67634;
    case 0x80C6763Cu: goto label_80C6763C;
    case 0x80C67664u: goto label_80C67664;
    case 0x80C67694u: goto label_80C67694;
    case 0x80C676B0u: goto label_80C676B0;
    case 0x80C676B8u: goto label_80C676B8;
    case 0x80C676E0u: goto label_80C676E0;
    case 0x80C676E8u: goto label_80C676E8;
    case 0x80C676F0u: goto label_80C676F0;
    case 0x80C67718u: goto label_80C67718;
    case 0x80C67720u: goto label_80C67720;
    case 0x80C67734u: goto label_80C67734;
    case 0x80C67764u: goto label_80C67764;
    case 0x80C6777Cu: goto label_80C6777C;
    case 0x80C67784u: goto label_80C67784;
    case 0x80C677ACu: goto label_80C677AC;
    case 0x80C677B4u: goto label_80C677B4;
    case 0x80C677BCu: goto label_80C677BC;
    case 0x80C677FCu: goto label_80C677FC;
    case 0x80C67804u: goto label_80C67804;
    case 0x80C67834u: goto label_80C67834;
    case 0x80C67850u: goto label_80C67850;
    case 0x80C67858u: goto label_80C67858;
    case 0x80C67880u: goto label_80C67880;
    case 0x80C67888u: goto label_80C67888;
    case 0x80C6788Cu: goto label_80C6788C;
    case 0x80C678BCu: goto label_80C678BC;
    case 0x80C678D0u: goto label_80C678D0;
    case 0x80C678F8u: goto label_80C678F8;
    case 0x80C67900u: goto label_80C67900;
    case 0x80C67914u: goto label_80C67914;
    case 0x80C6791Cu: goto label_80C6791C;
    case 0x80C67944u: goto label_80C67944;
    case 0x80C6794Cu: goto label_80C6794C;
    case 0x80C6798Cu: goto label_80C6798C;
    case 0x80C67994u: goto label_80C67994;
    case 0x80C6799Cu: goto label_80C6799C;
    case 0x80C679C4u: goto label_80C679C4;
    case 0x80C679CCu: goto label_80C679CC;
    case 0x80C679DCu: goto label_80C679DC;
    case 0x80C679E4u: goto label_80C679E4;
    case 0x80C67A0Cu: goto label_80C67A0C;
    case 0x80C67A14u: goto label_80C67A14;
    case 0x80C67A54u: goto label_80C67A54;
    case 0x80C67A84u: goto label_80C67A84;
    case 0x80C67AA0u: goto label_80C67AA0;
    case 0x80C67AA4u: goto label_80C67AA4;
    case 0x80C67AACu: goto label_80C67AAC;
    case 0x80C67AC8u: goto label_80C67AC8;
    case 0x80C67AE0u: goto label_80C67AE0;
    case 0x80C67AE8u: goto label_80C67AE8;
    case 0x80C67AF0u: goto label_80C67AF0;
    case 0x80C67AF4u: goto label_80C67AF4;
    case 0x80C67AF8u: goto label_80C67AF8;
    case 0x80C67B20u: goto label_80C67B20;
    case 0x80C67B80u: goto label_80C67B80;
    case 0x80C67BC0u: goto label_80C67BC0;
    case 0x80C67C00u: goto label_80C67C00;
    case 0x80C67C5Cu: goto label_80C67C5C;
    case 0x80C67C80u: goto label_80C67C80;
    case 0x80C67D1Cu: goto label_80C67D1C;
    case 0x80C67D6Cu: goto label_80C67D6C;
    case 0x80C67DBCu: goto label_80C67DBC;
    case 0x80C67E08u: goto label_80C67E08;
    case 0x80C67E8Cu: goto label_80C67E8C;
    case 0x80C67EB0u: goto label_80C67EB0;
    case 0x80C67F2Cu: goto label_80C67F2C;
    case 0x80C67F94u: goto label_80C67F94;
    case 0x80C67FFCu: goto label_80C67FFC;
    case 0x80C6804Cu: goto label_80C6804C;
    case 0x80C6809Cu: goto label_80C6809C;
    case 0x80C680E0u: goto label_80C680E0;
    case 0x80C68108u: goto label_80C68108;
    case 0x80C68114u: goto label_80C68114;
    case 0x80C68120u: goto label_80C68120;
    case 0x80C6812Cu: goto label_80C6812C;
    case 0x80C6817Cu: goto label_80C6817C;
    case 0x80C68208u: goto label_80C68208;
    case 0x80C68214u: goto label_80C68214;
    case 0x80C682A4u: goto label_80C682A4;
    case 0x80C682ACu: goto label_80C682AC;
    case 0x80C68314u: goto label_80C68314;
    case 0x80C6835Cu: goto label_80C6835C;
    case 0x80C683C8u: goto label_80C683C8;
    case 0x80C68474u: goto label_80C68474;
    default: return;
    }
}

