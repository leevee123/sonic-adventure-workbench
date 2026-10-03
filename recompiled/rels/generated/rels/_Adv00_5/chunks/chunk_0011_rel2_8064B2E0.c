// DolRecomp output
#include "../generated.h"

void func_8064B2E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_8064B2E0[1387] = {
        &&label_8064B2E0,
        &&label_8064B2E4,
        &&label_8064B2E8,
        &&label_8064B2EC,
        &&label_8064B2F0,
        &&label_8064B2F4,
        &&label_8064B2F8,
        &&label_8064B2FC,
        &&label_8064B300,
        &&label_8064B304,
        &&label_8064B308,
        &&label_8064B30C,
        &&label_8064B310,
        &&label_8064B314,
        &&label_8064B318,
        &&label_8064B31C,
        &&label_8064B320,
        &&label_8064B324,
        &&label_8064B328,
        &&label_8064B32C,
        &&label_8064B330,
        &&label_8064B334,
        &&label_8064B338,
        &&label_8064B33C,
        &&label_8064B340,
        &&label_8064B344,
        &&label_8064B348,
        &&label_8064B34C,
        &&label_8064B350,
        &&label_8064B354,
        &&label_8064B358,
        &&label_8064B35C,
        &&label_8064B360,
        &&label_8064B364,
        &&label_8064B368,
        &&label_8064B36C,
        &&label_8064B370,
        &&label_8064B374,
        &&label_8064B378,
        &&label_8064B37C,
        &&label_8064B380,
        &&label_8064B384,
        &&label_8064B388,
        &&label_8064B38C,
        &&label_8064B390,
        &&label_8064B394,
        &&label_8064B398,
        &&label_8064B39C,
        &&label_8064B3A0,
        &&label_8064B3A4,
        &&label_8064B3A8,
        &&label_8064B3AC,
        &&label_8064B3B0,
        &&label_8064B3B4,
        &&label_8064B3B8,
        &&label_8064B3BC,
        &&label_8064B3C0,
        &&label_8064B3C4,
        &&label_8064B3C8,
        &&label_8064B3CC,
        &&label_8064B3D0,
        &&label_8064B3D4,
        &&label_8064B3D8,
        &&label_8064B3DC,
        &&label_8064B3E0,
        &&label_8064B3E4,
        &&label_8064B3E8,
        &&label_8064B3EC,
        &&label_8064B3F0,
        &&label_8064B3F4,
        &&label_8064B3F8,
        &&label_8064B3FC,
        &&label_8064B400,
        &&label_8064B404,
        &&label_8064B408,
        &&label_8064B40C,
        &&label_8064B410,
        &&label_8064B414,
        &&label_8064B418,
        &&label_8064B41C,
        &&label_8064B420,
        &&label_8064B424,
        &&label_8064B428,
        &&label_8064B42C,
        &&label_8064B430,
        &&label_8064B434,
        &&label_8064B438,
        &&label_8064B43C,
        &&label_8064B440,
        &&label_8064B444,
        &&label_8064B448,
        &&label_8064B44C,
        &&label_8064B450,
        &&label_8064B454,
        &&label_8064B458,
        &&label_8064B45C,
        &&label_8064B460,
        &&label_8064B464,
        &&label_8064B468,
        &&label_8064B46C,
        &&label_8064B470,
        &&label_8064B474,
        &&label_8064B478,
        &&label_8064B47C,
        &&label_8064B480,
        &&label_8064B484,
        &&label_8064B488,
        &&label_8064B48C,
        &&label_8064B490,
        &&label_8064B494,
        &&label_8064B498,
        &&label_8064B49C,
        &&label_8064B4A0,
        &&label_8064B4A4,
        &&label_8064B4A8,
        &&label_8064B4AC,
        &&label_8064B4B0,
        &&label_8064B4B4,
        &&label_8064B4B8,
        &&label_8064B4BC,
        &&label_8064B4C0,
        &&label_8064B4C4,
        &&label_8064B4C8,
        &&label_8064B4CC,
        &&label_8064B4D0,
        &&label_8064B4D4,
        &&label_8064B4D8,
        &&label_8064B4DC,
        &&label_8064B4E0,
        &&label_8064B4E4,
        &&label_8064B4E8,
        &&label_8064B4EC,
        &&label_8064B4F0,
        &&label_8064B4F4,
        &&label_8064B4F8,
        &&label_8064B4FC,
        &&label_8064B500,
        &&label_8064B504,
        &&label_8064B508,
        &&label_8064B50C,
        &&label_8064B510,
        &&label_8064B514,
        &&label_8064B518,
        &&label_8064B51C,
        &&label_8064B520,
        &&label_8064B524,
        &&label_8064B528,
        &&label_8064B52C,
        &&label_8064B530,
        &&label_8064B534,
        &&label_8064B538,
        &&label_8064B53C,
        &&label_8064B540,
        &&label_8064B544,
        &&label_8064B548,
        &&label_8064B54C,
        &&label_8064B550,
        &&label_8064B554,
        &&label_8064B558,
        &&label_8064B55C,
        &&label_8064B560,
        &&label_8064B564,
        &&label_8064B568,
        &&label_8064B56C,
        &&label_8064B570,
        &&label_8064B574,
        &&label_8064B578,
        &&label_8064B57C,
        &&label_8064B580,
        &&label_8064B584,
        &&label_8064B588,
        &&label_8064B58C,
        &&label_8064B590,
        &&label_8064B594,
        &&label_8064B598,
        &&label_8064B59C,
        &&label_8064B5A0,
        &&label_8064B5A4,
        &&label_8064B5A8,
        &&label_8064B5AC,
        &&label_8064B5B0,
        &&label_8064B5B4,
        &&label_8064B5B8,
        &&label_8064B5BC,
        &&label_8064B5C0,
        &&label_8064B5C4,
        &&label_8064B5C8,
        &&label_8064B5CC,
        &&label_8064B5D0,
        &&label_8064B5D4,
        &&label_8064B5D8,
        &&label_8064B5DC,
        &&label_8064B5E0,
        &&label_8064B5E4,
        &&label_8064B5E8,
        &&label_8064B5EC,
        &&label_8064B5F0,
        &&label_8064B5F4,
        &&label_8064B5F8,
        &&label_8064B5FC,
        &&label_8064B600,
        &&label_8064B604,
        &&label_8064B608,
        &&label_8064B60C,
        &&label_8064B610,
        &&label_8064B614,
        &&label_8064B618,
        &&label_8064B61C,
        &&label_8064B620,
        &&label_8064B624,
        &&label_8064B628,
        &&label_8064B62C,
        &&label_8064B630,
        &&label_8064B634,
        &&label_8064B638,
        &&label_8064B63C,
        &&label_8064B640,
        &&label_8064B644,
        &&label_8064B648,
        &&label_8064B64C,
        &&label_8064B650,
        &&label_8064B654,
        &&label_8064B658,
        &&label_8064B65C,
        &&label_8064B660,
        &&label_8064B664,
        &&label_8064B668,
        &&label_8064B66C,
        &&label_8064B670,
        &&label_8064B674,
        &&label_8064B678,
        &&label_8064B67C,
        &&label_8064B680,
        &&label_8064B684,
        &&label_8064B688,
        &&label_8064B68C,
        &&label_8064B690,
        &&label_8064B694,
        &&label_8064B698,
        &&label_8064B69C,
        &&label_8064B6A0,
        &&label_8064B6A4,
        &&label_8064B6A8,
        &&label_8064B6AC,
        &&label_8064B6B0,
        &&label_8064B6B4,
        &&label_8064B6B8,
        &&label_8064B6BC,
        &&label_8064B6C0,
        &&label_8064B6C4,
        &&label_8064B6C8,
        &&label_8064B6CC,
        &&label_8064B6D0,
        &&label_8064B6D4,
        &&label_8064B6D8,
        &&label_8064B6DC,
        &&label_8064B6E0,
        &&label_8064B6E4,
        &&label_8064B6E8,
        &&label_8064B6EC,
        &&label_8064B6F0,
        &&label_8064B6F4,
        &&label_8064B6F8,
        &&label_8064B6FC,
        &&label_8064B700,
        &&label_8064B704,
        &&label_8064B708,
        &&label_8064B70C,
        &&label_8064B710,
        &&label_8064B714,
        &&label_8064B718,
        &&label_8064B71C,
        &&label_8064B720,
        &&label_8064B724,
        &&label_8064B728,
        &&label_8064B72C,
        &&label_8064B730,
        &&label_8064B734,
        &&label_8064B738,
        &&label_8064B73C,
        &&label_8064B740,
        &&label_8064B744,
        &&label_8064B748,
        &&label_8064B74C,
        &&label_8064B750,
        &&label_8064B754,
        &&label_8064B758,
        &&label_8064B75C,
        &&label_8064B760,
        &&label_8064B764,
        &&label_8064B768,
        &&label_8064B76C,
        &&label_8064B770,
        &&label_8064B774,
        &&label_8064B778,
        &&label_8064B77C,
        &&label_8064B780,
        &&label_8064B784,
        &&label_8064B788,
        &&label_8064B78C,
        &&label_8064B790,
        &&label_8064B794,
        &&label_8064B798,
        &&label_8064B79C,
        &&label_8064B7A0,
        &&label_8064B7A4,
        &&label_8064B7A8,
        &&label_8064B7AC,
        &&label_8064B7B0,
        &&label_8064B7B4,
        &&label_8064B7B8,
        &&label_8064B7BC,
        &&label_8064B7C0,
        &&label_8064B7C4,
        &&label_8064B7C8,
        &&label_8064B7CC,
        &&label_8064B7D0,
        &&label_8064B7D4,
        &&label_8064B7D8,
        &&label_8064B7DC,
        &&label_8064B7E0,
        &&label_8064B7E4,
        &&label_8064B7E8,
        &&label_8064B7EC,
        &&label_8064B7F0,
        &&label_8064B7F4,
        &&label_8064B7F8,
        &&label_8064B7FC,
        &&label_8064B800,
        &&label_8064B804,
        &&label_8064B808,
        &&label_8064B80C,
        &&label_8064B810,
        &&label_8064B814,
        &&label_8064B818,
        &&label_8064B81C,
        &&label_8064B820,
        &&label_8064B824,
        &&label_8064B828,
        &&label_8064B82C,
        &&label_8064B830,
        &&label_8064B834,
        &&label_8064B838,
        &&label_8064B83C,
        &&label_8064B840,
        &&label_8064B844,
        &&label_8064B848,
        &&label_8064B84C,
        &&label_8064B850,
        &&label_8064B854,
        &&label_8064B858,
        &&label_8064B85C,
        &&label_8064B860,
        &&label_8064B864,
        &&label_8064B868,
        &&label_8064B86C,
        &&label_8064B870,
        &&label_8064B874,
        &&label_8064B878,
        &&label_8064B87C,
        &&label_8064B880,
        &&label_8064B884,
        &&label_8064B888,
        &&label_8064B88C,
        &&label_8064B890,
        &&label_8064B894,
        &&label_8064B898,
        &&label_8064B89C,
        &&label_8064B8A0,
        &&label_8064B8A4,
        &&label_8064B8A8,
        &&label_8064B8AC,
        &&label_8064B8B0,
        &&label_8064B8B4,
        &&label_8064B8B8,
        &&label_8064B8BC,
        &&label_8064B8C0,
        &&label_8064B8C4,
        &&label_8064B8C8,
        &&label_8064B8CC,
        &&label_8064B8D0,
        &&label_8064B8D4,
        &&label_8064B8D8,
        &&label_8064B8DC,
        &&label_8064B8E0,
        &&label_8064B8E4,
        &&label_8064B8E8,
        &&label_8064B8EC,
        &&label_8064B8F0,
        &&label_8064B8F4,
        &&label_8064B8F8,
        &&label_8064B8FC,
        &&label_8064B900,
        &&label_8064B904,
        &&label_8064B908,
        &&label_8064B90C,
        &&label_8064B910,
        &&label_8064B914,
        &&label_8064B918,
        &&label_8064B91C,
        &&label_8064B920,
        &&label_8064B924,
        &&label_8064B928,
        &&label_8064B92C,
        &&label_8064B930,
        &&label_8064B934,
        &&label_8064B938,
        &&label_8064B93C,
        &&label_8064B940,
        &&label_8064B944,
        &&label_8064B948,
        &&label_8064B94C,
        &&label_8064B950,
        &&label_8064B954,
        &&label_8064B958,
        &&label_8064B95C,
        &&label_8064B960,
        &&label_8064B964,
        &&label_8064B968,
        &&label_8064B96C,
        &&label_8064B970,
        &&label_8064B974,
        &&label_8064B978,
        &&label_8064B97C,
        &&label_8064B980,
        &&label_8064B984,
        &&label_8064B988,
        &&label_8064B98C,
        &&label_8064B990,
        &&label_8064B994,
        &&label_8064B998,
        &&label_8064B99C,
        &&label_8064B9A0,
        &&label_8064B9A4,
        &&label_8064B9A8,
        &&label_8064B9AC,
        &&label_8064B9B0,
        &&label_8064B9B4,
        &&label_8064B9B8,
        &&label_8064B9BC,
        &&label_8064B9C0,
        &&label_8064B9C4,
        &&label_8064B9C8,
        &&label_8064B9CC,
        &&label_8064B9D0,
        &&label_8064B9D4,
        &&label_8064B9D8,
        &&label_8064B9DC,
        &&label_8064B9E0,
        &&label_8064B9E4,
        &&label_8064B9E8,
        &&label_8064B9EC,
        &&label_8064B9F0,
        &&label_8064B9F4,
        &&label_8064B9F8,
        &&label_8064B9FC,
        &&label_8064BA00,
        &&label_8064BA04,
        &&label_8064BA08,
        &&label_8064BA0C,
        &&label_8064BA10,
        &&label_8064BA14,
        &&label_8064BA18,
        &&label_8064BA1C,
        &&label_8064BA20,
        &&label_8064BA24,
        &&label_8064BA28,
        &&label_8064BA2C,
        &&label_8064BA30,
        &&label_8064BA34,
        &&label_8064BA38,
        &&label_8064BA3C,
        &&label_8064BA40,
        &&label_8064BA44,
        &&label_8064BA48,
        &&label_8064BA4C,
        &&label_8064BA50,
        &&label_8064BA54,
        &&label_8064BA58,
        &&label_8064BA5C,
        &&label_8064BA60,
        &&label_8064BA64,
        &&label_8064BA68,
        &&label_8064BA6C,
        &&label_8064BA70,
        &&label_8064BA74,
        &&label_8064BA78,
        &&label_8064BA7C,
        &&label_8064BA80,
        &&label_8064BA84,
        &&label_8064BA88,
        &&label_8064BA8C,
        &&label_8064BA90,
        &&label_8064BA94,
        &&label_8064BA98,
        &&label_8064BA9C,
        &&label_8064BAA0,
        &&label_8064BAA4,
        &&label_8064BAA8,
        &&label_8064BAAC,
        &&label_8064BAB0,
        &&label_8064BAB4,
        &&label_8064BAB8,
        &&label_8064BABC,
        &&label_8064BAC0,
        &&label_8064BAC4,
        &&label_8064BAC8,
        &&label_8064BACC,
        &&label_8064BAD0,
        &&label_8064BAD4,
        &&label_8064BAD8,
        &&label_8064BADC,
        &&label_8064BAE0,
        &&label_8064BAE4,
        &&label_8064BAE8,
        &&label_8064BAEC,
        &&label_8064BAF0,
        &&label_8064BAF4,
        &&label_8064BAF8,
        &&label_8064BAFC,
        &&label_8064BB00,
        &&label_8064BB04,
        &&label_8064BB08,
        &&label_8064BB0C,
        &&label_8064BB10,
        &&label_8064BB14,
        &&label_8064BB18,
        &&label_8064BB1C,
        &&label_8064BB20,
        &&label_8064BB24,
        &&label_8064BB28,
        &&label_8064BB2C,
        &&label_8064BB30,
        &&label_8064BB34,
        &&label_8064BB38,
        &&label_8064BB3C,
        &&label_8064BB40,
        &&label_8064BB44,
        &&label_8064BB48,
        &&label_8064BB4C,
        &&label_8064BB50,
        &&label_8064BB54,
        &&label_8064BB58,
        &&label_8064BB5C,
        &&label_8064BB60,
        &&label_8064BB64,
        &&label_8064BB68,
        &&label_8064BB6C,
        &&label_8064BB70,
        &&label_8064BB74,
        &&label_8064BB78,
        &&label_8064BB7C,
        &&label_8064BB80,
        &&label_8064BB84,
        &&label_8064BB88,
        &&label_8064BB8C,
        &&label_8064BB90,
        &&label_8064BB94,
        &&label_8064BB98,
        &&label_8064BB9C,
        &&label_8064BBA0,
        &&label_8064BBA4,
        &&label_8064BBA8,
        &&label_8064BBAC,
        &&label_8064BBB0,
        &&label_8064BBB4,
        &&label_8064BBB8,
        &&label_8064BBBC,
        &&label_8064BBC0,
        &&label_8064BBC4,
        &&label_8064BBC8,
        &&label_8064BBCC,
        &&label_8064BBD0,
        &&label_8064BBD4,
        &&label_8064BBD8,
        &&label_8064BBDC,
        &&label_8064BBE0,
        &&label_8064BBE4,
        &&label_8064BBE8,
        &&label_8064BBEC,
        &&label_8064BBF0,
        &&label_8064BBF4,
        &&label_8064BBF8,
        &&label_8064BBFC,
        &&label_8064BC00,
        &&label_8064BC04,
        &&label_8064BC08,
        &&label_8064BC0C,
        &&label_8064BC10,
        &&label_8064BC14,
        &&label_8064BC18,
        &&label_8064BC1C,
        &&label_8064BC20,
        &&label_8064BC24,
        &&label_8064BC28,
        &&label_8064BC2C,
        &&label_8064BC30,
        &&label_8064BC34,
        &&label_8064BC38,
        &&label_8064BC3C,
        &&label_8064BC40,
        &&label_8064BC44,
        &&label_8064BC48,
        &&label_8064BC4C,
        &&label_8064BC50,
        &&label_8064BC54,
        &&label_8064BC58,
        &&label_8064BC5C,
        &&label_8064BC60,
        &&label_8064BC64,
        &&label_8064BC68,
        &&label_8064BC6C,
        &&label_8064BC70,
        &&label_8064BC74,
        &&label_8064BC78,
        &&label_8064BC7C,
        &&label_8064BC80,
        &&label_8064BC84,
        &&label_8064BC88,
        &&label_8064BC8C,
        &&label_8064BC90,
        &&label_8064BC94,
        &&label_8064BC98,
        &&label_8064BC9C,
        &&label_8064BCA0,
        &&label_8064BCA4,
        &&label_8064BCA8,
        &&label_8064BCAC,
        &&label_8064BCB0,
        &&label_8064BCB4,
        &&label_8064BCB8,
        &&label_8064BCBC,
        &&label_8064BCC0,
        &&label_8064BCC4,
        &&label_8064BCC8,
        &&label_8064BCCC,
        &&label_8064BCD0,
        &&label_8064BCD4,
        &&label_8064BCD8,
        &&label_8064BCDC,
        &&label_8064BCE0,
        &&label_8064BCE4,
        &&label_8064BCE8,
        &&label_8064BCEC,
        &&label_8064BCF0,
        &&label_8064BCF4,
        &&label_8064BCF8,
        &&label_8064BCFC,
        &&label_8064BD00,
        &&label_8064BD04,
        &&label_8064BD08,
        &&label_8064BD0C,
        &&label_8064BD10,
        &&label_8064BD14,
        &&label_8064BD18,
        &&label_8064BD1C,
        &&label_8064BD20,
        &&label_8064BD24,
        &&label_8064BD28,
        &&label_8064BD2C,
        &&label_8064BD30,
        &&label_8064BD34,
        &&label_8064BD38,
        &&label_8064BD3C,
        &&label_8064BD40,
        &&label_8064BD44,
        &&label_8064BD48,
        &&label_8064BD4C,
        &&label_8064BD50,
        &&label_8064BD54,
        &&label_8064BD58,
        &&label_8064BD5C,
        &&label_8064BD60,
        &&label_8064BD64,
        &&label_8064BD68,
        &&label_8064BD6C,
        &&label_8064BD70,
        &&label_8064BD74,
        &&label_8064BD78,
        &&label_8064BD7C,
        &&label_8064BD80,
        &&label_8064BD84,
        &&label_8064BD88,
        &&label_8064BD8C,
        &&label_8064BD90,
        &&label_8064BD94,
        &&label_8064BD98,
        &&label_8064BD9C,
        &&label_8064BDA0,
        &&label_8064BDA4,
        &&label_8064BDA8,
        &&label_8064BDAC,
        &&label_8064BDB0,
        &&label_8064BDB4,
        &&label_8064BDB8,
        &&label_8064BDBC,
        &&label_8064BDC0,
        &&label_8064BDC4,
        &&label_8064BDC8,
        &&label_8064BDCC,
        &&label_8064BDD0,
        &&label_8064BDD4,
        &&label_8064BDD8,
        &&label_8064BDDC,
        &&label_8064BDE0,
        &&label_8064BDE4,
        &&label_8064BDE8,
        &&label_8064BDEC,
        &&label_8064BDF0,
        &&label_8064BDF4,
        &&label_8064BDF8,
        &&label_8064BDFC,
        &&label_8064BE00,
        &&label_8064BE04,
        &&label_8064BE08,
        &&label_8064BE0C,
        &&label_8064BE10,
        &&label_8064BE14,
        &&label_8064BE18,
        &&label_8064BE1C,
        &&label_8064BE20,
        &&label_8064BE24,
        &&label_8064BE28,
        &&label_8064BE2C,
        &&label_8064BE30,
        &&label_8064BE34,
        &&label_8064BE38,
        &&label_8064BE3C,
        &&label_8064BE40,
        &&label_8064BE44,
        &&label_8064BE48,
        &&label_8064BE4C,
        &&label_8064BE50,
        &&label_8064BE54,
        &&label_8064BE58,
        &&label_8064BE5C,
        &&label_8064BE60,
        &&label_8064BE64,
        &&label_8064BE68,
        &&label_8064BE6C,
        &&label_8064BE70,
        &&label_8064BE74,
        &&label_8064BE78,
        &&label_8064BE7C,
        &&label_8064BE80,
        &&label_8064BE84,
        &&label_8064BE88,
        &&label_8064BE8C,
        &&label_8064BE90,
        &&label_8064BE94,
        &&label_8064BE98,
        &&label_8064BE9C,
        &&label_8064BEA0,
        &&label_8064BEA4,
        &&label_8064BEA8,
        &&label_8064BEAC,
        &&label_8064BEB0,
        &&label_8064BEB4,
        &&label_8064BEB8,
        &&label_8064BEBC,
        &&label_8064BEC0,
        &&label_8064BEC4,
        &&label_8064BEC8,
        &&label_8064BECC,
        &&label_8064BED0,
        &&label_8064BED4,
        &&label_8064BED8,
        &&label_8064BEDC,
        &&label_8064BEE0,
        &&label_8064BEE4,
        &&label_8064BEE8,
        &&label_8064BEEC,
        &&label_8064BEF0,
        &&label_8064BEF4,
        &&label_8064BEF8,
        &&label_8064BEFC,
        &&label_8064BF00,
        &&label_8064BF04,
        &&label_8064BF08,
        &&label_8064BF0C,
        &&label_8064BF10,
        &&label_8064BF14,
        &&label_8064BF18,
        &&label_8064BF1C,
        &&label_8064BF20,
        &&label_8064BF24,
        &&label_8064BF28,
        &&label_8064BF2C,
        &&label_8064BF30,
        &&label_8064BF34,
        &&label_8064BF38,
        &&label_8064BF3C,
        &&label_8064BF40,
        &&label_8064BF44,
        &&label_8064BF48,
        &&label_8064BF4C,
        &&label_8064BF50,
        &&label_8064BF54,
        &&label_8064BF58,
        &&label_8064BF5C,
        &&label_8064BF60,
        &&label_8064BF64,
        &&label_8064BF68,
        &&label_8064BF6C,
        &&label_8064BF70,
        &&label_8064BF74,
        &&label_8064BF78,
        &&label_8064BF7C,
        &&label_8064BF80,
        &&label_8064BF84,
        &&label_8064BF88,
        &&label_8064BF8C,
        &&label_8064BF90,
        &&label_8064BF94,
        &&label_8064BF98,
        &&label_8064BF9C,
        &&label_8064BFA0,
        &&label_8064BFA4,
        &&label_8064BFA8,
        &&label_8064BFAC,
        &&label_8064BFB0,
        &&label_8064BFB4,
        &&label_8064BFB8,
        &&label_8064BFBC,
        &&label_8064BFC0,
        &&label_8064BFC4,
        &&label_8064BFC8,
        &&label_8064BFCC,
        &&label_8064BFD0,
        &&label_8064BFD4,
        &&label_8064BFD8,
        &&label_8064BFDC,
        &&label_8064BFE0,
        &&label_8064BFE4,
        &&label_8064BFE8,
        &&label_8064BFEC,
        &&label_8064BFF0,
        &&label_8064BFF4,
        &&label_8064BFF8,
        &&label_8064BFFC,
        &&label_8064C000,
        &&label_8064C004,
        &&label_8064C008,
        &&label_8064C00C,
        &&label_8064C010,
        &&label_8064C014,
        &&label_8064C018,
        &&label_8064C01C,
        &&label_8064C020,
        &&label_8064C024,
        &&label_8064C028,
        &&label_8064C02C,
        &&label_8064C030,
        &&label_8064C034,
        &&label_8064C038,
        &&label_8064C03C,
        &&label_8064C040,
        &&label_8064C044,
        &&label_8064C048,
        &&label_8064C04C,
        &&label_8064C050,
        &&label_8064C054,
        &&label_8064C058,
        &&label_8064C05C,
        &&label_8064C060,
        &&label_8064C064,
        &&label_8064C068,
        &&label_8064C06C,
        &&label_8064C070,
        &&label_8064C074,
        &&label_8064C078,
        &&label_8064C07C,
        &&label_8064C080,
        &&label_8064C084,
        &&label_8064C088,
        &&label_8064C08C,
        &&label_8064C090,
        &&label_8064C094,
        &&label_8064C098,
        &&label_8064C09C,
        &&label_8064C0A0,
        &&label_8064C0A4,
        &&label_8064C0A8,
        &&label_8064C0AC,
        &&label_8064C0B0,
        &&label_8064C0B4,
        &&label_8064C0B8,
        &&label_8064C0BC,
        &&label_8064C0C0,
        &&label_8064C0C4,
        &&label_8064C0C8,
        &&label_8064C0CC,
        &&label_8064C0D0,
        &&label_8064C0D4,
        &&label_8064C0D8,
        &&label_8064C0DC,
        &&label_8064C0E0,
        &&label_8064C0E4,
        &&label_8064C0E8,
        &&label_8064C0EC,
        &&label_8064C0F0,
        &&label_8064C0F4,
        &&label_8064C0F8,
        &&label_8064C0FC,
        &&label_8064C100,
        &&label_8064C104,
        &&label_8064C108,
        &&label_8064C10C,
        &&label_8064C110,
        &&label_8064C114,
        &&label_8064C118,
        &&label_8064C11C,
        &&label_8064C120,
        &&label_8064C124,
        &&label_8064C128,
        &&label_8064C12C,
        &&label_8064C130,
        &&label_8064C134,
        &&label_8064C138,
        &&label_8064C13C,
        &&label_8064C140,
        &&label_8064C144,
        &&label_8064C148,
        &&label_8064C14C,
        &&label_8064C150,
        &&label_8064C154,
        &&label_8064C158,
        &&label_8064C15C,
        &&label_8064C160,
        &&label_8064C164,
        &&label_8064C168,
        &&label_8064C16C,
        &&label_8064C170,
        &&label_8064C174,
        &&label_8064C178,
        &&label_8064C17C,
        &&label_8064C180,
        &&label_8064C184,
        &&label_8064C188,
        &&label_8064C18C,
        &&label_8064C190,
        &&label_8064C194,
        &&label_8064C198,
        &&label_8064C19C,
        &&label_8064C1A0,
        &&label_8064C1A4,
        &&label_8064C1A8,
        &&label_8064C1AC,
        &&label_8064C1B0,
        &&label_8064C1B4,
        &&label_8064C1B8,
        &&label_8064C1BC,
        &&label_8064C1C0,
        &&label_8064C1C4,
        &&label_8064C1C8,
        &&label_8064C1CC,
        &&label_8064C1D0,
        &&label_8064C1D4,
        &&label_8064C1D8,
        &&label_8064C1DC,
        &&label_8064C1E0,
        &&label_8064C1E4,
        &&label_8064C1E8,
        &&label_8064C1EC,
        &&label_8064C1F0,
        &&label_8064C1F4,
        &&label_8064C1F8,
        &&label_8064C1FC,
        &&label_8064C200,
        &&label_8064C204,
        &&label_8064C208,
        &&label_8064C20C,
        &&label_8064C210,
        &&label_8064C214,
        &&label_8064C218,
        &&label_8064C21C,
        &&label_8064C220,
        &&label_8064C224,
        &&label_8064C228,
        &&label_8064C22C,
        &&label_8064C230,
        &&label_8064C234,
        &&label_8064C238,
        &&label_8064C23C,
        &&label_8064C240,
        &&label_8064C244,
        &&label_8064C248,
        &&label_8064C24C,
        &&label_8064C250,
        &&label_8064C254,
        &&label_8064C258,
        &&label_8064C25C,
        &&label_8064C260,
        &&label_8064C264,
        &&label_8064C268,
        &&label_8064C26C,
        &&label_8064C270,
        &&label_8064C274,
        &&label_8064C278,
        &&label_8064C27C,
        &&label_8064C280,
        &&label_8064C284,
        &&label_8064C288,
        &&label_8064C28C,
        &&label_8064C290,
        &&label_8064C294,
        &&label_8064C298,
        &&label_8064C29C,
        &&label_8064C2A0,
        &&label_8064C2A4,
        &&label_8064C2A8,
        &&label_8064C2AC,
        &&label_8064C2B0,
        &&label_8064C2B4,
        &&label_8064C2B8,
        &&label_8064C2BC,
        &&label_8064C2C0,
        &&label_8064C2C4,
        &&label_8064C2C8,
        &&label_8064C2CC,
        &&label_8064C2D0,
        &&label_8064C2D4,
        &&label_8064C2D8,
        &&label_8064C2DC,
        &&label_8064C2E0,
        &&label_8064C2E4,
        &&label_8064C2E8,
        &&label_8064C2EC,
        &&label_8064C2F0,
        &&label_8064C2F4,
        &&label_8064C2F8,
        &&label_8064C2FC,
        &&label_8064C300,
        &&label_8064C304,
        &&label_8064C308,
        &&label_8064C30C,
        &&label_8064C310,
        &&label_8064C314,
        &&label_8064C318,
        &&label_8064C31C,
        &&label_8064C320,
        &&label_8064C324,
        &&label_8064C328,
        &&label_8064C32C,
        &&label_8064C330,
        &&label_8064C334,
        &&label_8064C338,
        &&label_8064C33C,
        &&label_8064C340,
        &&label_8064C344,
        &&label_8064C348,
        &&label_8064C34C,
        &&label_8064C350,
        &&label_8064C354,
        &&label_8064C358,
        &&label_8064C35C,
        &&label_8064C360,
        &&label_8064C364,
        &&label_8064C368,
        &&label_8064C36C,
        &&label_8064C370,
        &&label_8064C374,
        &&label_8064C378,
        &&label_8064C37C,
        &&label_8064C380,
        &&label_8064C384,
        &&label_8064C388,
        &&label_8064C38C,
        &&label_8064C390,
        &&label_8064C394,
        &&label_8064C398,
        &&label_8064C39C,
        &&label_8064C3A0,
        &&label_8064C3A4,
        &&label_8064C3A8,
        &&label_8064C3AC,
        &&label_8064C3B0,
        &&label_8064C3B4,
        &&label_8064C3B8,
        &&label_8064C3BC,
        &&label_8064C3C0,
        &&label_8064C3C4,
        &&label_8064C3C8,
        &&label_8064C3CC,
        &&label_8064C3D0,
        &&label_8064C3D4,
        &&label_8064C3D8,
        &&label_8064C3DC,
        &&label_8064C3E0,
        &&label_8064C3E4,
        &&label_8064C3E8,
        &&label_8064C3EC,
        &&label_8064C3F0,
        &&label_8064C3F4,
        &&label_8064C3F8,
        &&label_8064C3FC,
        &&label_8064C400,
        &&label_8064C404,
        &&label_8064C408,
        &&label_8064C40C,
        &&label_8064C410,
        &&label_8064C414,
        &&label_8064C418,
        &&label_8064C41C,
        &&label_8064C420,
        &&label_8064C424,
        &&label_8064C428,
        &&label_8064C42C,
        &&label_8064C430,
        &&label_8064C434,
        &&label_8064C438,
        &&label_8064C43C,
        &&label_8064C440,
        &&label_8064C444,
        &&label_8064C448,
        &&label_8064C44C,
        &&label_8064C450,
        &&label_8064C454,
        &&label_8064C458,
        &&label_8064C45C,
        &&label_8064C460,
        &&label_8064C464,
        &&label_8064C468,
        &&label_8064C46C,
        &&label_8064C470,
        &&label_8064C474,
        &&label_8064C478,
        &&label_8064C47C,
        &&label_8064C480,
        &&label_8064C484,
        &&label_8064C488,
        &&label_8064C48C,
        &&label_8064C490,
        &&label_8064C494,
        &&label_8064C498,
        &&label_8064C49C,
        &&label_8064C4A0,
        &&label_8064C4A4,
        &&label_8064C4A8,
        &&label_8064C4AC,
        &&label_8064C4B0,
        &&label_8064C4B4,
        &&label_8064C4B8,
        &&label_8064C4BC,
        &&label_8064C4C0,
        &&label_8064C4C4,
        &&label_8064C4C8,
        &&label_8064C4CC,
        &&label_8064C4D0,
        &&label_8064C4D4,
        &&label_8064C4D8,
        &&label_8064C4DC,
        &&label_8064C4E0,
        &&label_8064C4E4,
        &&label_8064C4E8,
        &&label_8064C4EC,
        &&label_8064C4F0,
        &&label_8064C4F4,
        &&label_8064C4F8,
        &&label_8064C4FC,
        &&label_8064C500,
        &&label_8064C504,
        &&label_8064C508,
        &&label_8064C50C,
        &&label_8064C510,
        &&label_8064C514,
        &&label_8064C518,
        &&label_8064C51C,
        &&label_8064C520,
        &&label_8064C524,
        &&label_8064C528,
        &&label_8064C52C,
        &&label_8064C530,
        &&label_8064C534,
        &&label_8064C538,
        &&label_8064C53C,
        &&label_8064C540,
        &&label_8064C544,
        &&label_8064C548,
        &&label_8064C54C,
        &&label_8064C550,
        &&label_8064C554,
        &&label_8064C558,
        &&label_8064C55C,
        &&label_8064C560,
        &&label_8064C564,
        &&label_8064C568,
        &&label_8064C56C,
        &&label_8064C570,
        &&label_8064C574,
        &&label_8064C578,
        &&label_8064C57C,
        &&label_8064C580,
        &&label_8064C584,
        &&label_8064C588,
        &&label_8064C58C,
        &&label_8064C590,
        &&label_8064C594,
        &&label_8064C598,
        &&label_8064C59C,
        &&label_8064C5A0,
        &&label_8064C5A4,
        &&label_8064C5A8,
        &&label_8064C5AC,
        &&label_8064C5B0,
        &&label_8064C5B4,
        &&label_8064C5B8,
        &&label_8064C5BC,
        &&label_8064C5C0,
        &&label_8064C5C4,
        &&label_8064C5C8,
        &&label_8064C5CC,
        &&label_8064C5D0,
        &&label_8064C5D4,
        &&label_8064C5D8,
        &&label_8064C5DC,
        &&label_8064C5E0,
        &&label_8064C5E4,
        &&label_8064C5E8,
        &&label_8064C5EC,
        &&label_8064C5F0,
        &&label_8064C5F4,
        &&label_8064C5F8,
        &&label_8064C5FC,
        &&label_8064C600,
        &&label_8064C604,
        &&label_8064C608,
        &&label_8064C60C,
        &&label_8064C610,
        &&label_8064C614,
        &&label_8064C618,
        &&label_8064C61C,
        &&label_8064C620,
        &&label_8064C624,
        &&label_8064C628,
        &&label_8064C62C,
        &&label_8064C630,
        &&label_8064C634,
        &&label_8064C638,
        &&label_8064C63C,
        &&label_8064C640,
        &&label_8064C644,
        &&label_8064C648,
        &&label_8064C64C,
        &&label_8064C650,
        &&label_8064C654,
        &&label_8064C658,
        &&label_8064C65C,
        &&label_8064C660,
        &&label_8064C664,
        &&label_8064C668,
        &&label_8064C66C,
        &&label_8064C670,
        &&label_8064C674,
        &&label_8064C678,
        &&label_8064C67C,
        &&label_8064C680,
        &&label_8064C684,
        &&label_8064C688,
        &&label_8064C68C,
        &&label_8064C690,
        &&label_8064C694,
        &&label_8064C698,
        &&label_8064C69C,
        &&label_8064C6A0,
        &&label_8064C6A4,
        &&label_8064C6A8,
        &&label_8064C6AC,
        &&label_8064C6B0,
        &&label_8064C6B4,
        &&label_8064C6B8,
        &&label_8064C6BC,
        &&label_8064C6C0,
        &&label_8064C6C4,
        &&label_8064C6C8,
        &&label_8064C6CC,
        &&label_8064C6D0,
        &&label_8064C6D4,
        &&label_8064C6D8,
        &&label_8064C6DC,
        &&label_8064C6E0,
        &&label_8064C6E4,
        &&label_8064C6E8,
        &&label_8064C6EC,
        &&label_8064C6F0,
        &&label_8064C6F4,
        &&label_8064C6F8,
        &&label_8064C6FC,
        &&label_8064C700,
        &&label_8064C704,
        &&label_8064C708,
        &&label_8064C70C,
        &&label_8064C710,
        &&label_8064C714,
        &&label_8064C718,
        &&label_8064C71C,
        &&label_8064C720,
        &&label_8064C724,
        &&label_8064C728,
        &&label_8064C72C,
        &&label_8064C730,
        &&label_8064C734,
        &&label_8064C738,
        &&label_8064C73C,
        &&label_8064C740,
        &&label_8064C744,
        &&label_8064C748,
        &&label_8064C74C,
        &&label_8064C750,
        &&label_8064C754,
        &&label_8064C758,
        &&label_8064C75C,
        &&label_8064C760,
        &&label_8064C764,
        &&label_8064C768,
        &&label_8064C76C,
        &&label_8064C770,
        &&label_8064C774,
        &&label_8064C778,
        &&label_8064C77C,
        &&label_8064C780,
        &&label_8064C784,
        &&label_8064C788,
        &&label_8064C78C,
        &&label_8064C790,
        &&label_8064C794,
        &&label_8064C798,
        &&label_8064C79C,
        &&label_8064C7A0,
        &&label_8064C7A4,
        &&label_8064C7A8,
        &&label_8064C7AC,
        &&label_8064C7B0,
        &&label_8064C7B4,
        &&label_8064C7B8,
        &&label_8064C7BC,
        &&label_8064C7C0,
        &&label_8064C7C4,
        &&label_8064C7C8,
        &&label_8064C7CC,
        &&label_8064C7D0,
        &&label_8064C7D4,
        &&label_8064C7D8,
        &&label_8064C7DC,
        &&label_8064C7E0,
        &&label_8064C7E4,
        &&label_8064C7E8,
        &&label_8064C7EC,
        &&label_8064C7F0,
        &&label_8064C7F4,
        &&label_8064C7F8,
        &&label_8064C7FC,
        &&label_8064C800,
        &&label_8064C804,
        &&label_8064C808,
        &&label_8064C80C,
        &&label_8064C810,
        &&label_8064C814,
        &&label_8064C818,
        &&label_8064C81C,
        &&label_8064C820,
        &&label_8064C824,
        &&label_8064C828,
        &&label_8064C82C,
        &&label_8064C830,
        &&label_8064C834,
        &&label_8064C838,
        &&label_8064C83C,
        &&label_8064C840,
        &&label_8064C844,
        &&label_8064C848,
        &&label_8064C84C,
        &&label_8064C850,
        &&label_8064C854,
        &&label_8064C858,
        &&label_8064C85C,
        &&label_8064C860,
        &&label_8064C864,
        &&label_8064C868,
        &&label_8064C86C,
        &&label_8064C870,
        &&label_8064C874,
        &&label_8064C878,
        &&label_8064C87C,
        &&label_8064C880,
        &&label_8064C884,
        &&label_8064C888
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x8064B2E0u && pc <= 0x8064C888u && ((pc - 0x8064B2E0u) & 3u) == 0u)
            goto *pc_table_8064B2E0[(pc - 0x8064B2E0u) >> 2];
    }
    return;
label_8064B2E0:
    ctx->pc = 0x8064B2E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B2E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B2E0: lfd     f2, -13400(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B2E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13400);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B2E4:
    ctx->pc = 0x8064B2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B2E4u)) return;
    // 8064B2E4: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_8064B2E8:
    ctx->pc = 0x8064B2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B2E8: lfd     f1, -13424(r6)
    if (!ppc_fp_available_inline(ctx, 0x8064B2E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-13424);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B2EC:
    ctx->pc = 0x8064B2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B2EC: stw     r0, 236(r1)
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
label_8064B2F0:
    ctx->pc = 0x8064B2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B2F0: lfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B2F0u)) return;
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
label_8064B2F4:
    ctx->pc = 0x8064B2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B2F4u)) return;
    // 8064B2F4: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B2F4u)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_8064B2F8:
    ctx->pc = 0x8064B2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B2F8u)) return;
    // 8064B2F8: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B2F8u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064B2FC:
    ctx->pc = 0x8064B2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B2FCu)) return;
    // 8064B2FC: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B2FCu)) return;
    ppc_frsp(ctx, 1, 1);

label_8064B300:
    ctx->pc = 0x8064B300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B300u)) return;
    // 8064B300: bl      0x80013948
    {
            ctx->lr = 0x8064B304u;
            ctx->pc = 0x80013948u;
            return;
    }

label_8064B304:
    ctx->pc = 0x8064B304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 8064B304: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064B308:
    ctx->pc = 0x8064B308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B308u)) return;
    // 8064B308: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B308u)) return;
    ppc_frsp(ctx, 1, 1);

label_8064B30C:
    ctx->pc = 0x8064B30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B30Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B30C: lfs     f0, -13416(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B30Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13416);
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
label_8064B310:
    ctx->pc = 0x8064B310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B310u)) return;
    // 8064B310: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B314:
    ctx->pc = 0x8064B314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B314: lfs     f3, -13428(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B314u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13428);
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
label_8064B318:
    ctx->pc = 0x8064B318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B318u)) return;
    // 8064B318: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_8064B31C:
    ctx->pc = 0x8064B31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B31Cu)) return;
    // 8064B31C: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B31Cu)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_8064B320:
    ctx->pc = 0x8064B320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B320u)) return;
    // 8064B320: fmuls   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8064B320u)) return;
    ppc_fmuls(ctx, 2, 0, 31);

label_8064B324:
    ctx->pc = 0x8064B324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B324u)) return;
    // 8064B324: bl      0x8003A888
    {
            ctx->lr = 0x8064B328u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_8064B328:
    ctx->pc = 0x8064B328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064B328: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B328u)) return;
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
label_8064B32C:
    ctx->pc = 0x8064B32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B32Cu)) return;
    // 8064B32C: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B330:
    ctx->pc = 0x8064B330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B330: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B330u)) return;
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
label_8064B334:
    ctx->pc = 0x8064B334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B334u)) return;
    // 8064B334: addi    r4, r3, -13428
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-13428);

label_8064B338:
    ctx->pc = 0x8064B338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B338: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B338u)) return;
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
label_8064B33C:
    ctx->pc = 0x8064B33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B33Cu)) return;
    // 8064B33C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_8064B340:
    ctx->pc = 0x8064B340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B340u)) return;
    // 8064B340: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B340u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8064B344:
    ctx->pc = 0x8064B344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B344: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B344u)) return;
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
label_8064B348:
    ctx->pc = 0x8064B348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B348u)) return;
    // 8064B348: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B348u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_8064B34C:
    ctx->pc = 0x8064B34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B34Cu)) return;
    // 8064B34C: bl      0x8003A8BC
    {
            ctx->lr = 0x8064B350u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_8064B350:
    ctx->pc = 0x8064B350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064B350: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_8064B354:
    ctx->pc = 0x8064B354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B354u)) return;
    // 8064B354: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_8064B358:
    ctx->pc = 0x8064B358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B358u)) return;
    // 8064B358: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8064B35C:
    ctx->pc = 0x8064B35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B35Cu)) return;
    // 8064B35C: bl      0x8003A434
    {
            ctx->lr = 0x8064B360u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_8064B360:
    ctx->pc = 0x8064B360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064B360: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_8064B364:
    ctx->pc = 0x8064B364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B364u)) return;
    // 8064B364: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_8064B368:
    ctx->pc = 0x8064B368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B368u)) return;
    // 8064B368: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8064B36C:
    ctx->pc = 0x8064B36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B36Cu)) return;
    // 8064B36C: bl      0x8003768C
    {
            ctx->lr = 0x8064B370u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_8064B370:
    ctx->pc = 0x8064B370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 44u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 44u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 8064B370: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B370u)) return;
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
label_8064B374:
    ctx->pc = 0x8064B374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B374u)) return;
    // 8064B374: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064B378:
    ctx->pc = 0x8064B378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B378u)) return;
    // 8064B378: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B37C:
    ctx->pc = 0x8064B37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B37Cu)) return;
    // 8064B37C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8064B380:
    ctx->pc = 0x8064B380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 8064B380: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B380u)) return;
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
label_8064B384:
    ctx->pc = 0x8064B384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B384u)) return;
    // 8064B384: addi    r5, r4, -13428
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-13428);

label_8064B388:
    ctx->pc = 0x8064B388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B388u)) return;
    // 8064B388: addi    r4, r3, -13412
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-13412);

label_8064B38C:
    ctx->pc = 0x8064B38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 8064B38C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8064B38Cu)) return;
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
label_8064B390:
    ctx->pc = 0x8064B390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 8064B390: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B390u)) return;
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
label_8064B394:
    ctx->pc = 0x8064B394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B394u)) return;
    // 8064B394: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_8064B398:
    ctx->pc = 0x8064B398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8064B398: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B398u)) return;
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
label_8064B39C:
    ctx->pc = 0x8064B39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B39Cu)) return;
    // 8064B39C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8064B3A0:
    ctx->pc = 0x8064B3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8064B3A0: stfs     f2, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3A0u)) return;
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
label_8064B3A4:
    ctx->pc = 0x8064B3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 8064B3A4: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B3A4u)) return;
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
label_8064B3A8:
    ctx->pc = 0x8064B3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8064B3A8: stfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3A8u)) return;
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
label_8064B3AC:
    ctx->pc = 0x8064B3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8064B3AC: lfs     f2, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B3ACu)) return;
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
label_8064B3B0:
    ctx->pc = 0x8064B3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8064B3B0: stfs     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3B0u)) return;
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
label_8064B3B4:
    ctx->pc = 0x8064B3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064B3B4: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B3B4u)) return;
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
label_8064B3B8:
    ctx->pc = 0x8064B3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064B3B8: stfs     f2, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3B8u)) return;
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
label_8064B3BC:
    ctx->pc = 0x8064B3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8064B3BC: stfs     f2, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3BCu)) return;
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
label_8064B3C0:
    ctx->pc = 0x8064B3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8064B3C0: lfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B3C0u)) return;
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
label_8064B3C4:
    ctx->pc = 0x8064B3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8064B3C4: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3C4u)) return;
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
label_8064B3C8:
    ctx->pc = 0x8064B3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8064B3C8: stfs     f2, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3C8u)) return;
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
label_8064B3CC:
    ctx->pc = 0x8064B3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064B3CC: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B3CCu)) return;
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
label_8064B3D0:
    ctx->pc = 0x8064B3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064B3D0: stfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3D0u)) return;
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
label_8064B3D4:
    ctx->pc = 0x8064B3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064B3D4: lfs     f2, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B3D4u)) return;
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
label_8064B3D8:
    ctx->pc = 0x8064B3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064B3D8: stfs     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3D8u)) return;
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
label_8064B3DC:
    ctx->pc = 0x8064B3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064B3DC: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B3DCu)) return;
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
label_8064B3E0:
    ctx->pc = 0x8064B3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064B3E0: stfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3E0u)) return;
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
label_8064B3E4:
    ctx->pc = 0x8064B3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064B3E4: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B3E4u)) return;
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
label_8064B3E8:
    ctx->pc = 0x8064B3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064B3E8: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3E8u)) return;
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
label_8064B3EC:
    ctx->pc = 0x8064B3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064B3EC: stfs     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3ECu)) return;
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
label_8064B3F0:
    ctx->pc = 0x8064B3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064B3F0: stfs     f1, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3F0u)) return;
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
label_8064B3F4:
    ctx->pc = 0x8064B3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064B3F4: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3F4u)) return;
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
label_8064B3F8:
    ctx->pc = 0x8064B3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064B3F8: stfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3F8u)) return;
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
label_8064B3FC:
    ctx->pc = 0x8064B3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B3FC: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B3FCu)) return;
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
label_8064B400:
    ctx->pc = 0x8064B400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B400: stfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B400u)) return;
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
label_8064B404:
    ctx->pc = 0x8064B404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B404: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B404u)) return;
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
label_8064B408:
    ctx->pc = 0x8064B408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B408: stfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B408u)) return;
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
label_8064B40C:
    ctx->pc = 0x8064B40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B40C: stw     r0, 220(r1)
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
label_8064B410:
    ctx->pc = 0x8064B410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B410: stw     r0, 196(r1)
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
label_8064B414:
    ctx->pc = 0x8064B414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B414: stw     r0, 172(r1)
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
label_8064B418:
    ctx->pc = 0x8064B418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B418: stw     r0, 148(r1)
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
label_8064B41C:
    ctx->pc = 0x8064B41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B41Cu)) return;
    // 8064B41C: bl      0x80050070
    {
            ctx->lr = 0x8064B420u;
            ctx->pc = 0x80050070u;
            return;
    }

label_8064B420:
    ctx->pc = 0x8064B420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B420: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8064B420u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8064B420u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B424:
    ctx->pc = 0x8064B424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B424: lwz     r0, 276(r1)
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
label_8064B428:
    ctx->pc = 0x8064B428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B428: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B428u)) return;
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
label_8064B42C:
    ctx->pc = 0x8064B42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B42C: lwz     r31, 252(r1)
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
label_8064B430:
    ctx->pc = 0x8064B430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064B430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B430: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B434:
    ctx->pc = 0x8064B434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B434u)) return;
    // 8064B434: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_8064B438:
    ctx->pc = 0x8064B438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B438u)) return;
    // 8064B438: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064B43C:
    ctx->pc = 0x8064B43Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B43Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B43C: stwu     r1, -16(r1)
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
label_8064B440:
    ctx->pc = 0x8064B440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B440: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B444:
    ctx->pc = 0x8064B444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B444u)) return;
    // 8064B444: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064B448:
    ctx->pc = 0x8064B448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B448: stw     r0, 20(r1)
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
label_8064B44C:
    ctx->pc = 0x8064B44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B44Cu)) return;
    // 8064B44C: bl      0x804C90A0
    {
            ctx->lr = 0x8064B450u;
            ctx->pc = 0x804C90A0u;
            return;
    }

label_8064B450:
    ctx->pc = 0x8064B450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064B450: cmplwi  r3, 0x0000
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

label_8064B454:
    ctx->pc = 0x8064B454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B454u)) return;
    // 8064B454: bc    4, 2, 0x8064B460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064B460;
        }
    }

label_8064B458:
    ctx->pc = 0x8064B458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064B458: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064B45C:
    ctx->pc = 0x8064B45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B45Cu)) return;
    // 8064B45C: b       0x8064B478
    {
            goto label_8064B478;
    }

label_8064B460:
    ctx->pc = 0x8064B460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B460: lwz     r3, 32(r3)
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
label_8064B464:
    ctx->pc = 0x8064B464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B464: lwz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B468:
    ctx->pc = 0x8064B468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B468: lbz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B46C:
    ctx->pc = 0x8064B46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B46Cu)) return;
    // 8064B46C: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_8064B470:
    ctx->pc = 0x8064B470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B470u)) return;
    // 8064B470: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8064B474:
    ctx->pc = 0x8064B474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B474u)) return;
    // 8064B474: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_8064B478:
    ctx->pc = 0x8064B478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B478: lwz     r0, 20(r1)
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
label_8064B47C:
    ctx->pc = 0x8064B47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064B47Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B47C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B480:
    ctx->pc = 0x8064B480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B480u)) return;
    // 8064B480: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8064B484:
    ctx->pc = 0x8064B484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B484u)) return;
    // 8064B484: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064B488:
    ctx->pc = 0x8064B488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8064B488: stwu     r1, -48(r1)
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
label_8064B48C:
    ctx->pc = 0x8064B48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064B48C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B490:
    ctx->pc = 0x8064B490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064B490: stw     r0, 52(r1)
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
label_8064B494:
    ctx->pc = 0x8064B494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064B494: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B494u)) return;
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
label_8064B498:
    ctx->pc = 0x8064B498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064B498: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8064B498u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8064B498u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B49C:
    ctx->pc = 0x8064B49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B49Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064B49C: stw     r31, 28(r1)
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
label_8064B4A0:
    ctx->pc = 0x8064B4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064B4A0: lwz     r5, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B4A4:
    ctx->pc = 0x8064B4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4A4u)) return;
    // 8064B4A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8064B4A8:
    ctx->pc = 0x8064B4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4A8u)) return;
    // 8064B4A8: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B4AC:
    ctx->pc = 0x8064B4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4ACu)) return;
    // 8064B4AC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8064B4B0:
    ctx->pc = 0x8064B4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4B0u)) return;
    // 8064B4B0: addi    r4, r3, -13224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-13224);

label_8064B4B4:
    ctx->pc = 0x8064B4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4B4u)) return;
    // 8064B4B4: lis     r6, -28546
    ctx->gpr[6] = ((u32)(s32)(-28546) << 16);

label_8064B4B8:
    ctx->pc = 0x8064B4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4B8u)) return;
    // 8064B4B8: xoris   r3, r5, 0x8000
    ctx->gpr[3] = ctx->gpr[5] ^ (0x8000u << 16);

label_8064B4BC:
    ctx->pc = 0x8064B4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B4BC: stw     r0, 8(r1)
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
label_8064B4C0:
    ctx->pc = 0x8064B4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B4C0: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B4C0u)) return;
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
label_8064B4C4:
    ctx->pc = 0x8064B4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B4C4: stw     r3, 12(r1)
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
label_8064B4C8:
    ctx->pc = 0x8064B4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B4C8: lfd     f2, -13240(r6)
    if (!ppc_fp_available_inline(ctx, 0x8064B4C8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-13240);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B4CC:
    ctx->pc = 0x8064B4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B4CC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B4CCu)) return;
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
label_8064B4D0:
    ctx->pc = 0x8064B4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4D0u)) return;
    // 8064B4D0: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B4D0u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_8064B4D4:
    ctx->pc = 0x8064B4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4D4u)) return;
    // 8064B4D4: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B4D4u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_8064B4D8:
    ctx->pc = 0x8064B4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4D8u)) return;
    // 8064B4D8: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B4D8u)) return;
    ppc_frsp(ctx, 1, 1);

label_8064B4DC:
    ctx->pc = 0x8064B4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4DCu)) return;
    // 8064B4DC: bl      0x80014034
    {
            ctx->lr = 0x8064B4E0u;
            ctx->pc = 0x80014034u;
            return;
    }

label_8064B4E0:
    ctx->pc = 0x8064B4E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B4E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064B4E0: lwz     r5, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B4E4:
    ctx->pc = 0x8064B4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4E4u)) return;
    // 8064B4E4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8064B4E8:
    ctx->pc = 0x8064B4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4E8u)) return;
    // 8064B4E8: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064B4EC:
    ctx->pc = 0x8064B4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064B4EC: stw     r0, 16(r1)
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
label_8064B4F0:
    ctx->pc = 0x8064B4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4F0u)) return;
    // 8064B4F0: addi    r5, r5, 2048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2048);

label_8064B4F4:
    ctx->pc = 0x8064B4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4F4u)) return;
    // 8064B4F4: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B4F8:
    ctx->pc = 0x8064B4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064B4F8: stw     r5, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B4FC:
    ctx->pc = 0x8064B4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B4FCu)) return;
    // 8064B4FC: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B4FCu)) return;
    ppc_frsp(ctx, 31, 1);

label_8064B500:
    ctx->pc = 0x8064B500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064B500: lfd     f1, -13224(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B500u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13224);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B504:
    ctx->pc = 0x8064B504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B504: lwz     r0, 44(r31)
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
label_8064B508:
    ctx->pc = 0x8064B508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B508: lfd     f2, -13240(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B508u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13240);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B50C:
    ctx->pc = 0x8064B50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B50Cu)) return;
    // 8064B50C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_8064B510:
    ctx->pc = 0x8064B510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B510: stw     r0, 20(r1)
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
label_8064B514:
    ctx->pc = 0x8064B514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B514: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B514u)) return;
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
label_8064B518:
    ctx->pc = 0x8064B518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B518u)) return;
    // 8064B518: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B518u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_8064B51C:
    ctx->pc = 0x8064B51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B51Cu)) return;
    // 8064B51C: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B51Cu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_8064B520:
    ctx->pc = 0x8064B520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B520u)) return;
    // 8064B520: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B520u)) return;
    ppc_frsp(ctx, 1, 1);

label_8064B524:
    ctx->pc = 0x8064B524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B524u)) return;
    // 8064B524: bl      0x80014034
    {
            ctx->lr = 0x8064B528u;
            ctx->pc = 0x80014034u;
            return;
    }

label_8064B528:
    ctx->pc = 0x8064B528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 8064B528: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B52C:
    ctx->pc = 0x8064B52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B52Cu)) return;
    // 8064B52C: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B52Cu)) return;
    ppc_frsp(ctx, 1, 1);

label_8064B530:
    ctx->pc = 0x8064B530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064B530: lfs     f0, -13232(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B530u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13232);
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
label_8064B534:
    ctx->pc = 0x8064B534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B534u)) return;
    // 8064B534: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B534u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_8064B538:
    ctx->pc = 0x8064B538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B538u)) return;
    // 8064B538: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8064B538u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_8064B53C:
    ctx->pc = 0x8064B53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B53Cu)) return;
    // 8064B53C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B53Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_8064B540:
    ctx->pc = 0x8064B540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B540: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B540u)) return;
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
label_8064B544:
    ctx->pc = 0x8064B544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B544: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8064B544u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8064B544u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B548:
    ctx->pc = 0x8064B548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B548: lwz     r0, 52(r1)
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
label_8064B54C:
    ctx->pc = 0x8064B54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B54C: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B54Cu)) return;
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
label_8064B550:
    ctx->pc = 0x8064B550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B550: lwz     r31, 28(r1)
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
label_8064B554:
    ctx->pc = 0x8064B554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064B554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B554: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B558:
    ctx->pc = 0x8064B558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B558u)) return;
    // 8064B558: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8064B55C:
    ctx->pc = 0x8064B55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B55Cu)) return;
    // 8064B55C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064B560:
    ctx->pc = 0x8064B560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064B560: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B560u)) return;
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
label_8064B564:
    ctx->pc = 0x8064B564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064B564: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B564u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
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
label_8064B568:
    ctx->pc = 0x8064B568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B568u)) return;
    // 8064B568: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B568u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064B56C:
    ctx->pc = 0x8064B56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064B56C: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B56Cu)) return;
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
label_8064B570:
    ctx->pc = 0x8064B570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B570: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B570u)) return;
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
label_8064B574:
    ctx->pc = 0x8064B574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B574: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B574u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
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
label_8064B578:
    ctx->pc = 0x8064B578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B578u)) return;
    // 8064B578: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B578u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064B57C:
    ctx->pc = 0x8064B57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B57Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B57C: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B57Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B580:
    ctx->pc = 0x8064B580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B580: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B580u)) return;
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
label_8064B584:
    ctx->pc = 0x8064B584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B584: lfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B584u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
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
label_8064B588:
    ctx->pc = 0x8064B588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B588u)) return;
    // 8064B588: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B588u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064B58C:
    ctx->pc = 0x8064B58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B58Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B58C: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B58Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B590:
    ctx->pc = 0x8064B590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B590u)) return;
    // 8064B590: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064B594:
    ctx->pc = 0x8064B594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8064B594: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064B598:
    ctx->pc = 0x8064B598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B598: lfs     f0, -13216(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B598u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13216);
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
label_8064B59C:
    ctx->pc = 0x8064B59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B59Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B59C: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B59Cu)) return;
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
label_8064B5A0:
    ctx->pc = 0x8064B5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B5A0: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B5A0u)) return;
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
label_8064B5A4:
    ctx->pc = 0x8064B5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B5A4: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B5A4u)) return;
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
label_8064B5A8:
    ctx->pc = 0x8064B5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5A8u)) return;
    // 8064B5A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064B5AC:
    ctx->pc = 0x8064B5ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 49u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B5ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 49u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 8064B5AC: stwu     r1, -64(r1)
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
label_8064B5B0:
    ctx->pc = 0x8064B5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 8064B5B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B5B4:
    ctx->pc = 0x8064B5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5B4u)) return;
    // 8064B5B4: lis     r6, -28491
    ctx->gpr[6] = ((u32)(s32)(-28491) << 16);

label_8064B5B8:
    ctx->pc = 0x8064B5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 8064B5B8: stw     r0, 68(r1)
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
label_8064B5BC:
    ctx->pc = 0x8064B5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5BCu)) return;
    // 8064B5BC: addi    r6, r6, -11900
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11900);

label_8064B5C0:
    ctx->pc = 0x8064B5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 8064B5C0: stw     r31, 60(r1)
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
label_8064B5C4:
    ctx->pc = 0x8064B5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5C4u)) return;
    // 8064B5C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8064B5C8:
    ctx->pc = 0x8064B5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5C8u)) return;
    // 8064B5C8: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B5CC:
    ctx->pc = 0x8064B5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 8064B5CC: lwz     r0, 0(r4)
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
label_8064B5D0:
    ctx->pc = 0x8064B5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 8064B5D0: lwz     r6, 0(r6)
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
label_8064B5D4:
    ctx->pc = 0x8064B5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8064B5D4u)) return;
    // 8064B5D4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8064B5D8:
    ctx->pc = 0x8064B5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 8064B5D8: lfs     f3, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B5D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_8064B5DC:
    ctx->pc = 0x8064B5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 8064B5DC: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B5DCu)) return;
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
label_8064B5E0:
    ctx->pc = 0x8064B5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8064B5E0: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B5E0u)) return;
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
label_8064B5E4:
    ctx->pc = 0x8064B5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5E4u)) return;
    // 8064B5E4: add   r7, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8064B5E8:
    ctx->pc = 0x8064B5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8064B5E8: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B5EC:
    ctx->pc = 0x8064B5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 8064B5EC: lwz     r6, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B5F0:
    ctx->pc = 0x8064B5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8064B5F0: stw     r0, 36(r1)
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
label_8064B5F4:
    ctx->pc = 0x8064B5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8064B5F4: lwz     r0, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B5F8:
    ctx->pc = 0x8064B5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8064B5F8: stw     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B5FC:
    ctx->pc = 0x8064B5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064B5FC: lfs     f4, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B5FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
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
label_8064B600:
    ctx->pc = 0x8064B600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064B600: lfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
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
label_8064B604:
    ctx->pc = 0x8064B604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B604u)) return;
    // 8064B604: fsubs   f4, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B604u)) return;
    ppc_fsubs(ctx, 4, 4, 3);

label_8064B608:
    ctx->pc = 0x8064B608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8064B608: stw     r0, 44(r1)
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
label_8064B60C:
    ctx->pc = 0x8064B60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B60Cu)) return;
    // 8064B60C: fsubs   f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B60Cu)) return;
    ppc_fsubs(ctx, 3, 2, 0);

label_8064B610:
    ctx->pc = 0x8064B610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8064B610: lfs     f0, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B610u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064B614:
    ctx->pc = 0x8064B614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064B614: lfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
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
label_8064B618:
    ctx->pc = 0x8064B618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064B618: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B618u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B61C:
    ctx->pc = 0x8064B61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B61Cu)) return;
    // 8064B61C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B61Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_8064B620:
    ctx->pc = 0x8064B620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064B620: stfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B624:
    ctx->pc = 0x8064B624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064B624: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B628:
    ctx->pc = 0x8064B628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064B628: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B62C:
    ctx->pc = 0x8064B62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064B62C: stw     r0, 12(r1)
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
label_8064B630:
    ctx->pc = 0x8064B630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064B630: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B630u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B634:
    ctx->pc = 0x8064B634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064B634: lfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B634u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_8064B638:
    ctx->pc = 0x8064B638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064B638: stw     r3, 16(r1)
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
label_8064B63C:
    ctx->pc = 0x8064B63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064B63C: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B640:
    ctx->pc = 0x8064B640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B640u)) return;
    // 8064B640: fmuls   f2, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B640u)) return;
    ppc_fmuls(ctx, 2, 2, 2);

label_8064B644:
    ctx->pc = 0x8064B644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B644: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B644u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B648:
    ctx->pc = 0x8064B648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B648: stw     r0, 20(r1)
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
label_8064B64C:
    ctx->pc = 0x8064B64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B64Cu)) return;
    // 8064B64C: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B64Cu)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_8064B650:
    ctx->pc = 0x8064B650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B650: lfs     f3, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B650u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_8064B654:
    ctx->pc = 0x8064B654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B654u)) return;
    // 8064B654: fmuls   f3, f3, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B654u)) return;
    ppc_fmuls(ctx, 3, 3, 3);

label_8064B658:
    ctx->pc = 0x8064B658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B658u)) return;
    // 8064B658: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B658u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_8064B65C:
    ctx->pc = 0x8064B65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B65Cu)) return;
    // 8064B65C: fadds   f4, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B65Cu)) return;
    ppc_fadds(ctx, 4, 3, 1);

label_8064B660:
    ctx->pc = 0x8064B660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B660u)) return;
    // 8064B660: fcmpo   cr0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B660u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[0], true);

label_8064B664:
    ctx->pc = 0x8064B664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B664u)) return;
    // 8064B664: bc    4, 1, 0x8064B6BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064B6BC;
        }
    }

label_8064B668:
    ctx->pc = 0x8064B668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064B668: frsqrte    f1, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B668u)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[4], &result)) ctx->fpr[1] = result; }

label_8064B66C:
    ctx->pc = 0x8064B66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B66Cu)) return;
    // 8064B66C: lis     r6, -28546
    ctx->gpr[6] = ((u32)(s32)(-28546) << 16);

label_8064B670:
    ctx->pc = 0x8064B670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B670u)) return;
    // 8064B670: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B674:
    ctx->pc = 0x8064B674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064B674: lfd     f3, -13208(r6)
    if (!ppc_fp_available_inline(ctx, 0x8064B674u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-13208);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B678:
    ctx->pc = 0x8064B678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064B678: lfd     f2, -13200(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B678u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B67C:
    ctx->pc = 0x8064B67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B67Cu)) return;
    // 8064B67C: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B67Cu)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064B680:
    ctx->pc = 0x8064B680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B680u)) return;
    // 8064B680: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B680u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064B684:
    ctx->pc = 0x8064B684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B684u)) return;
    // 8064B684: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B684u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064B688:
    ctx->pc = 0x8064B688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B688u)) return;
    // 8064B688: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B688u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064B68C:
    ctx->pc = 0x8064B68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B68Cu)) return;
    // 8064B68C: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B68Cu)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064B690:
    ctx->pc = 0x8064B690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B690u)) return;
    // 8064B690: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B690u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064B694:
    ctx->pc = 0x8064B694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B694u)) return;
    // 8064B694: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B694u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064B698:
    ctx->pc = 0x8064B698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B698u)) return;
    // 8064B698: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B698u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064B69C:
    ctx->pc = 0x8064B69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B69Cu)) return;
    // 8064B69C: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B69Cu)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064B6A0:
    ctx->pc = 0x8064B6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6A0u)) return;
    // 8064B6A0: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B6A0u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064B6A4:
    ctx->pc = 0x8064B6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6A4u)) return;
    // 8064B6A4: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B6A4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064B6A8:
    ctx->pc = 0x8064B6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6A8u)) return;
    // 8064B6A8: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B6A8u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_8064B6AC:
    ctx->pc = 0x8064B6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6ACu)) return;
    // 8064B6AC: fmul   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B6ACu)) return;
    ppc_fmul(ctx, 0, 4, 0);

label_8064B6B0:
    ctx->pc = 0x8064B6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6B0u)) return;
    // 8064B6B0: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B6B0u)) return;
    ppc_frsp(ctx, 0, 0);

label_8064B6B4:
    ctx->pc = 0x8064B6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B6B4: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B6B4u)) return;
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
label_8064B6B8:
    ctx->pc = 0x8064B6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064B6B8: lfs     f4, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B6B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_8064B6BC:
    ctx->pc = 0x8064B6BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B6BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064B6BC: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B6C0:
    ctx->pc = 0x8064B6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B6C0: lfs     f0, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B6C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064B6C4:
    ctx->pc = 0x8064B6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6C4u)) return;
    // 8064B6C4: fcmpu   cr0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B6C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[4], false);

label_8064B6C8:
    ctx->pc = 0x8064B6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6C8u)) return;
    // 8064B6C8: bc    4, 2, 0x8064B6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064B6DC;
        }
    }

label_8064B6CC:
    ctx->pc = 0x8064B6CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B6CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B6CC: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B6CCu)) return;
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
label_8064B6D0:
    ctx->pc = 0x8064B6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B6D0: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B6D0u)) return;
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
label_8064B6D4:
    ctx->pc = 0x8064B6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B6D4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B6D4u)) return;
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
label_8064B6D8:
    ctx->pc = 0x8064B6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6D8u)) return;
    // 8064B6D8: b       0x8064B70C
    {
            goto label_8064B70C;
    }

label_8064B6DC:
    ctx->pc = 0x8064B6DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 28u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B6DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 28u : 1u;
    // 8064B6DC: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B6E0:
    ctx->pc = 0x8064B6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064B6E0: lfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B6E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_8064B6E4:
    ctx->pc = 0x8064B6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064B6E4: lfs     f3, -13192(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B6E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13192);
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
label_8064B6E8:
    ctx->pc = 0x8064B6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8064B6E8: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B6E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B6EC:
    ctx->pc = 0x8064B6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8064B6ECu)) return;
    // 8064B6EC: fdivs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B6ECu)) return;
    ppc_fdivs(ctx, 3, 3, 4);

label_8064B6F0:
    ctx->pc = 0x8064B6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B6F0: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B6F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_8064B6F4:
    ctx->pc = 0x8064B6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6F4u)) return;
    // 8064B6F4: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B6F4u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8064B6F8:
    ctx->pc = 0x8064B6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6F8u)) return;
    // 8064B6F8: fmuls   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B6F8u)) return;
    ppc_fmuls(ctx, 1, 1, 3);

label_8064B6FC:
    ctx->pc = 0x8064B6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B6FCu)) return;
    // 8064B6FC: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B6FCu)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_8064B700:
    ctx->pc = 0x8064B700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B700: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B700u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B704:
    ctx->pc = 0x8064B704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B704: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B704u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B708:
    ctx->pc = 0x8064B708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064B708: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B708u)) return;
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
label_8064B70C:
    ctx->pc = 0x8064B70Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B70Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064B70C: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B710:
    ctx->pc = 0x8064B710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B710u)) return;
    // 8064B710: lis     r6, -28546
    ctx->gpr[6] = ((u32)(s32)(-28546) << 16);

label_8064B714:
    ctx->pc = 0x8064B714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064B714: lfs     f0, -13188(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B714u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13188);
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
label_8064B718:
    ctx->pc = 0x8064B718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B718u)) return;
    // 8064B718: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064B71C:
    ctx->pc = 0x8064B71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B71Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064B71C: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B71Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B720:
    ctx->pc = 0x8064B720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B720u)) return;
    // 8064B720: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B720u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_8064B724:
    ctx->pc = 0x8064B724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064B724: lfs     f6, -13232(r6)
    if (!ppc_fp_available_inline(ctx, 0x8064B724u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-13232);
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
label_8064B728:
    ctx->pc = 0x8064B728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064B728: lfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B728u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_8064B72C:
    ctx->pc = 0x8064B72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B72Cu)) return;
    // 8064B72C: fmuls   f5, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B72Cu)) return;
    ppc_fmuls(ctx, 5, 6, 1);

label_8064B730:
    ctx->pc = 0x8064B730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064B730: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B730u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_8064B734:
    ctx->pc = 0x8064B734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B734u)) return;
    // 8064B734: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B734u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8064B738:
    ctx->pc = 0x8064B738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B738u)) return;
    // 8064B738: fmuls   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B738u)) return;
    ppc_fmuls(ctx, 4, 6, 4);

label_8064B73C:
    ctx->pc = 0x8064B73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B73C: stfs     f5, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B73Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B740:
    ctx->pc = 0x8064B740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B740u)) return;
    // 8064B740: fmuls   f3, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B740u)) return;
    ppc_fmuls(ctx, 3, 6, 2);

label_8064B744:
    ctx->pc = 0x8064B744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B744: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B748:
    ctx->pc = 0x8064B748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B748: stfs     f4, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B748u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B74C:
    ctx->pc = 0x8064B74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B74C: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B750:
    ctx->pc = 0x8064B750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B750: stfs     f3, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B750u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B754:
    ctx->pc = 0x8064B754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B754: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B758:
    ctx->pc = 0x8064B758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B758: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B75C:
    ctx->pc = 0x8064B75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B75Cu)) return;
    // 8064B75C: bl      0x80401910
    {
            ctx->lr = 0x8064B760u;
            ctx->pc = 0x80401910u;
            return;
    }

label_8064B760:
    ctx->pc = 0x8064B760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8064B760: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_8064B764:
    ctx->pc = 0x8064B764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B764: stw     r0, 24(r31)
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
label_8064B768:
    ctx->pc = 0x8064B768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B768: lwz     r0, 68(r1)
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
label_8064B76C:
    ctx->pc = 0x8064B76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B76Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B76C: lwz     r31, 60(r1)
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
label_8064B770:
    ctx->pc = 0x8064B770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064B770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B770: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B774:
    ctx->pc = 0x8064B774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B774u)) return;
    // 8064B774: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8064B778:
    ctx->pc = 0x8064B778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B778u)) return;
    // 8064B778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064B77C:
    ctx->pc = 0x8064B77Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B77Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064B77C: stwu     r1, -64(r1)
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
label_8064B780:
    ctx->pc = 0x8064B780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064B780: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B784:
    ctx->pc = 0x8064B784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064B784: stw     r0, 68(r1)
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
label_8064B788:
    ctx->pc = 0x8064B788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064B788: stw     r31, 60(r1)
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
label_8064B78C:
    ctx->pc = 0x8064B78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B78Cu)) return;
    // 8064B78C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8064B790:
    ctx->pc = 0x8064B790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B790: stw     r30, 56(r1)
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
label_8064B794:
    ctx->pc = 0x8064B794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B794u)) return;
    // 8064B794: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8064B798:
    ctx->pc = 0x8064B798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B798: lwz     r3, 12(r3)
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
label_8064B79C:
    ctx->pc = 0x8064B79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B79Cu)) return;
    // 8064B79C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8064B7A0:
    ctx->pc = 0x8064B7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B7A0: stw     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B7A4:
    ctx->pc = 0x8064B7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B7A4: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B7A8:
    ctx->pc = 0x8064B7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7A8u)) return;
    // 8064B7A8: cmpw    r3, r0
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

label_8064B7AC:
    ctx->pc = 0x8064B7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7ACu)) return;
    // 8064B7AC: bc    4, 1, 0x8064B984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064B984;
        }
    }

label_8064B7B0:
    ctx->pc = 0x8064B7B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B7B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8064B7B0: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064B7B4:
    ctx->pc = 0x8064B7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B7B4: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B7B8:
    ctx->pc = 0x8064B7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7B8u)) return;
    // 8064B7B8: addi    r3, r3, -11908
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11908);

label_8064B7BC:
    ctx->pc = 0x8064B7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B7BC: lwz     r3, 0(r3)
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
label_8064B7C0:
    ctx->pc = 0x8064B7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7C0u)) return;
    // 8064B7C0: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_8064B7C4:
    ctx->pc = 0x8064B7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7C4u)) return;
    // 8064B7C4: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8064B7C8:
    ctx->pc = 0x8064B7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7C8u)) return;
    // 8064B7C8: bc    12, 0, 0x8064B7D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064B7D4;
        }
    }

label_8064B7CC:
    ctx->pc = 0x8064B7CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B7CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064B7CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064B7D0:
    ctx->pc = 0x8064B7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7D0u)) return;
    // 8064B7D0: b       0x8064B9B8
    {
            goto label_8064B9B8;
    }

label_8064B7D4:
    ctx->pc = 0x8064B7D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 46u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B7D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 46u : 1u;
    // 8064B7D4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8064B7D8:
    ctx->pc = 0x8064B7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7D8u)) return;
    // 8064B7D8: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064B7DC:
    ctx->pc = 0x8064B7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 8064B7DC: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B7E0:
    ctx->pc = 0x8064B7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7E0u)) return;
    // 8064B7E0: addi    r4, r3, -11900
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11900);

label_8064B7E4:
    ctx->pc = 0x8064B7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7E4u)) return;
    // 8064B7E4: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B7E8:
    ctx->pc = 0x8064B7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 8064B7E8: lwz     r0, 0(r31)
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
label_8064B7EC:
    ctx->pc = 0x8064B7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 8064B7EC: lwz     r4, 0(r4)
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
label_8064B7F0:
    ctx->pc = 0x8064B7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8064B7F0u)) return;
    // 8064B7F0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8064B7F4:
    ctx->pc = 0x8064B7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 8064B7F4: lfs     f0, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B7F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064B7F8:
    ctx->pc = 0x8064B7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 8064B7F8: lfs     f4, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064B7F8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
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
label_8064B7FC:
    ctx->pc = 0x8064B7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8064B7FC: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064B7FCu)) return;
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
label_8064B800:
    ctx->pc = 0x8064B800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B800u)) return;
    // 8064B800: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8064B804:
    ctx->pc = 0x8064B804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8064B804: lfs     f1, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064B804u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B808:
    ctx->pc = 0x8064B808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 8064B808: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B80C:
    ctx->pc = 0x8064B80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8064B80C: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B810:
    ctx->pc = 0x8064B810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8064B810: stw     r0, 12(r1)
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
label_8064B814:
    ctx->pc = 0x8064B814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8064B814: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B818:
    ctx->pc = 0x8064B818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064B818: stw     r3, 16(r1)
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
label_8064B81C:
    ctx->pc = 0x8064B81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064B81C: lfs     f5, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B81Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_8064B820:
    ctx->pc = 0x8064B820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8064B820: lfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_8064B824:
    ctx->pc = 0x8064B824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B824u)) return;
    // 8064B824: fsubs   f4, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B824u)) return;
    ppc_fsubs(ctx, 4, 5, 4);

label_8064B828:
    ctx->pc = 0x8064B828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8064B828: stw     r0, 20(r1)
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
label_8064B82C:
    ctx->pc = 0x8064B82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B82Cu)) return;
    // 8064B82C: fsubs   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B82Cu)) return;
    ppc_fsubs(ctx, 3, 3, 2);

label_8064B830:
    ctx->pc = 0x8064B830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064B830: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B830u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_8064B834:
    ctx->pc = 0x8064B834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064B834: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B834u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B838:
    ctx->pc = 0x8064B838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B838u)) return;
    // 8064B838: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B838u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_8064B83C:
    ctx->pc = 0x8064B83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064B83C: stfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B83Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B840:
    ctx->pc = 0x8064B840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064B840: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B844:
    ctx->pc = 0x8064B844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064B844: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B848:
    ctx->pc = 0x8064B848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064B848: stw     r0, 36(r1)
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
label_8064B84C:
    ctx->pc = 0x8064B84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064B84C: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B84Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B850:
    ctx->pc = 0x8064B850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064B850: lfs     f2, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B850u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
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
label_8064B854:
    ctx->pc = 0x8064B854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064B854: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B858:
    ctx->pc = 0x8064B858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064B858: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B85C:
    ctx->pc = 0x8064B85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B85Cu)) return;
    // 8064B85C: fmuls   f2, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B85Cu)) return;
    ppc_fmuls(ctx, 2, 2, 2);

label_8064B860:
    ctx->pc = 0x8064B860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B860: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B860u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B864:
    ctx->pc = 0x8064B864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B864: stw     r0, 44(r1)
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
label_8064B868:
    ctx->pc = 0x8064B868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B868u)) return;
    // 8064B868: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B868u)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_8064B86C:
    ctx->pc = 0x8064B86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B86C: lfs     f3, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B86Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
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
label_8064B870:
    ctx->pc = 0x8064B870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B870u)) return;
    // 8064B870: fmuls   f3, f3, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B870u)) return;
    ppc_fmuls(ctx, 3, 3, 3);

label_8064B874:
    ctx->pc = 0x8064B874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B874u)) return;
    // 8064B874: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B874u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_8064B878:
    ctx->pc = 0x8064B878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B878u)) return;
    // 8064B878: fadds   f4, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B878u)) return;
    ppc_fadds(ctx, 4, 3, 1);

label_8064B87C:
    ctx->pc = 0x8064B87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B87Cu)) return;
    // 8064B87C: fcmpo   cr0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B87Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[0], true);

label_8064B880:
    ctx->pc = 0x8064B880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B880u)) return;
    // 8064B880: bc    4, 1, 0x8064B8D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064B8D8;
        }
    }

label_8064B884:
    ctx->pc = 0x8064B884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064B884: frsqrte    f1, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B884u)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[4], &result)) ctx->fpr[1] = result; }

label_8064B888:
    ctx->pc = 0x8064B888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B888u)) return;
    // 8064B888: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064B88C:
    ctx->pc = 0x8064B88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B88Cu)) return;
    // 8064B88C: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B890:
    ctx->pc = 0x8064B890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064B890: lfd     f3, -13208(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B890u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13208);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B894:
    ctx->pc = 0x8064B894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064B894: lfd     f2, -13200(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B894u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B898:
    ctx->pc = 0x8064B898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B898u)) return;
    // 8064B898: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B898u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064B89C:
    ctx->pc = 0x8064B89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B89Cu)) return;
    // 8064B89C: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B89Cu)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064B8A0:
    ctx->pc = 0x8064B8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8A0u)) return;
    // 8064B8A0: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B8A0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064B8A4:
    ctx->pc = 0x8064B8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8A4u)) return;
    // 8064B8A4: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B8A4u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064B8A8:
    ctx->pc = 0x8064B8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8A8u)) return;
    // 8064B8A8: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B8A8u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064B8AC:
    ctx->pc = 0x8064B8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8ACu)) return;
    // 8064B8AC: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B8ACu)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064B8B0:
    ctx->pc = 0x8064B8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8B0u)) return;
    // 8064B8B0: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B8B0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064B8B4:
    ctx->pc = 0x8064B8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8B4u)) return;
    // 8064B8B4: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B8B4u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064B8B8:
    ctx->pc = 0x8064B8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8B8u)) return;
    // 8064B8B8: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B8B8u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064B8BC:
    ctx->pc = 0x8064B8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8BCu)) return;
    // 8064B8BC: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B8BCu)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064B8C0:
    ctx->pc = 0x8064B8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8C0u)) return;
    // 8064B8C0: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B8C0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064B8C4:
    ctx->pc = 0x8064B8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8C4u)) return;
    // 8064B8C4: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B8C4u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_8064B8C8:
    ctx->pc = 0x8064B8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8C8u)) return;
    // 8064B8C8: fmul   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B8C8u)) return;
    ppc_fmul(ctx, 0, 4, 0);

label_8064B8CC:
    ctx->pc = 0x8064B8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8CCu)) return;
    // 8064B8CC: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B8CCu)) return;
    ppc_frsp(ctx, 0, 0);

label_8064B8D0:
    ctx->pc = 0x8064B8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B8D0: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B8D0u)) return;
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
label_8064B8D4:
    ctx->pc = 0x8064B8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064B8D4: lfs     f4, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B8D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_8064B8D8:
    ctx->pc = 0x8064B8D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B8D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064B8D8: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B8DC:
    ctx->pc = 0x8064B8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B8DC: lfs     f0, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B8DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064B8E0:
    ctx->pc = 0x8064B8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8E0u)) return;
    // 8064B8E0: fcmpu   cr0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B8E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[4], false);

label_8064B8E4:
    ctx->pc = 0x8064B8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8E4u)) return;
    // 8064B8E4: bc    4, 2, 0x8064B8F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064B8F8;
        }
    }

label_8064B8E8:
    ctx->pc = 0x8064B8E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B8E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B8E8: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B8E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B8EC:
    ctx->pc = 0x8064B8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B8EC: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B8ECu)) return;
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
label_8064B8F0:
    ctx->pc = 0x8064B8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B8F0: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B8F0u)) return;
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
label_8064B8F4:
    ctx->pc = 0x8064B8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8F4u)) return;
    // 8064B8F4: b       0x8064B928
    {
            goto label_8064B928;
    }

label_8064B8F8:
    ctx->pc = 0x8064B8F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 28u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B8F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 28u : 1u;
    // 8064B8F8: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B8FC:
    ctx->pc = 0x8064B8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064B8FC: lfs     f2, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B8FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
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
label_8064B900:
    ctx->pc = 0x8064B900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064B900: lfs     f3, -13192(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B900u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13192);
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
label_8064B904:
    ctx->pc = 0x8064B904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8064B904: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B908:
    ctx->pc = 0x8064B908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8064B908u)) return;
    // 8064B908: fdivs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B908u)) return;
    ppc_fdivs(ctx, 3, 3, 4);

label_8064B90C:
    ctx->pc = 0x8064B90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B90Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B90C: lfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B90Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
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
label_8064B910:
    ctx->pc = 0x8064B910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B910u)) return;
    // 8064B910: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B910u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8064B914:
    ctx->pc = 0x8064B914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B914u)) return;
    // 8064B914: fmuls   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B914u)) return;
    ppc_fmuls(ctx, 1, 1, 3);

label_8064B918:
    ctx->pc = 0x8064B918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B918u)) return;
    // 8064B918: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8064B918u)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_8064B91C:
    ctx->pc = 0x8064B91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B91Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B91C: stfs     f2, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B91Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B920:
    ctx->pc = 0x8064B920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B920: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B920u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B924:
    ctx->pc = 0x8064B924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064B924: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B924u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B928:
    ctx->pc = 0x8064B928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064B928: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064B92C:
    ctx->pc = 0x8064B92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B92Cu)) return;
    // 8064B92C: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064B930:
    ctx->pc = 0x8064B930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064B930: lfs     f0, -13188(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064B930u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13188);
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
label_8064B934:
    ctx->pc = 0x8064B934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B934u)) return;
    // 8064B934: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064B938:
    ctx->pc = 0x8064B938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064B938: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B938u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B93C:
    ctx->pc = 0x8064B93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B93Cu)) return;
    // 8064B93C: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B93Cu)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_8064B940:
    ctx->pc = 0x8064B940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064B940: lfs     f6, -13232(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064B940u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13232);
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
label_8064B944:
    ctx->pc = 0x8064B944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064B944: lfs     f4, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
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
label_8064B948:
    ctx->pc = 0x8064B948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B948u)) return;
    // 8064B948: fmuls   f5, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x8064B948u)) return;
    ppc_fmuls(ctx, 5, 6, 1);

label_8064B94C:
    ctx->pc = 0x8064B94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B94Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064B94C: lfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B94Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
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
label_8064B950:
    ctx->pc = 0x8064B950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B950u)) return;
    // 8064B950: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B950u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8064B954:
    ctx->pc = 0x8064B954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B954u)) return;
    // 8064B954: fmuls   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8064B954u)) return;
    ppc_fmuls(ctx, 4, 6, 4);

label_8064B958:
    ctx->pc = 0x8064B958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B958: stfs     f5, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B958u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B95C:
    ctx->pc = 0x8064B95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B95Cu)) return;
    // 8064B95C: fmuls   f3, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x8064B95Cu)) return;
    ppc_fmuls(ctx, 3, 6, 2);

label_8064B960:
    ctx->pc = 0x8064B960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B960: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064B960u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B964:
    ctx->pc = 0x8064B964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B964: stfs     f4, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B964u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B968:
    ctx->pc = 0x8064B968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B968: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B96C:
    ctx->pc = 0x8064B96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B96C: stfs     f3, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B96Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B970:
    ctx->pc = 0x8064B970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B970: stw     r3, 40(r31)
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
label_8064B974:
    ctx->pc = 0x8064B974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064B974: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B978:
    ctx->pc = 0x8064B978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B978u)) return;
    // 8064B978: bl      0x80401910
    {
            ctx->lr = 0x8064B97Cu;
            ctx->pc = 0x80401910u;
            return;
    }

label_8064B97C:
    ctx->pc = 0x8064B97Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B97Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064B97C: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_8064B980:
    ctx->pc = 0x8064B980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064B980: stw     r0, 24(r30)
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
label_8064B984:
    ctx->pc = 0x8064B984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064B984: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B984u)) return;
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
label_8064B988:
    ctx->pc = 0x8064B988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B988u)) return;
    // 8064B988: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8064B98C:
    ctx->pc = 0x8064B98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064B98C: lfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B98Cu)) return;
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
label_8064B990:
    ctx->pc = 0x8064B990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B990u)) return;
    // 8064B990: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B990u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064B994:
    ctx->pc = 0x8064B994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064B994: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B994u)) return;
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
label_8064B998:
    ctx->pc = 0x8064B998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064B998: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B998u)) return;
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
label_8064B99C:
    ctx->pc = 0x8064B99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B99C: lfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B99Cu)) return;
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
label_8064B9A0:
    ctx->pc = 0x8064B9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9A0u)) return;
    // 8064B9A0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B9A0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064B9A4:
    ctx->pc = 0x8064B9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B9A4: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B9A4u)) return;
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
label_8064B9A8:
    ctx->pc = 0x8064B9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064B9A8: lfs     f1, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B9A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B9AC:
    ctx->pc = 0x8064B9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B9AC: lfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B9ACu)) return;
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
label_8064B9B0:
    ctx->pc = 0x8064B9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9B0u)) return;
    // 8064B9B0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064B9B0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064B9B4:
    ctx->pc = 0x8064B9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064B9B4: stfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064B9B4u)) return;
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
label_8064B9B8:
    ctx->pc = 0x8064B9B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B9B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064B9B8: lwz     r0, 68(r1)
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
label_8064B9BC:
    ctx->pc = 0x8064B9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064B9BC: lwz     r31, 60(r1)
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
label_8064B9C0:
    ctx->pc = 0x8064B9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064B9C0: lwz     r30, 56(r1)
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
label_8064B9C4:
    ctx->pc = 0x8064B9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064B9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064B9C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B9C8:
    ctx->pc = 0x8064B9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9C8u)) return;
    // 8064B9C8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8064B9CC:
    ctx->pc = 0x8064B9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9CCu)) return;
    // 8064B9CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064B9D0:
    ctx->pc = 0x8064B9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064B9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8064B9D0: stwu     r1, -48(r1)
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
label_8064B9D4:
    ctx->pc = 0x8064B9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064B9D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B9D8:
    ctx->pc = 0x8064B9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9D8u)) return;
    // 8064B9D8: lis     r5, -28546
    ctx->gpr[5] = ((u32)(s32)(-28546) << 16);

label_8064B9DC:
    ctx->pc = 0x8064B9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9DCu)) return;
    // 8064B9DC: lis     r6, -28491
    ctx->gpr[6] = ((u32)(s32)(-28491) << 16);

label_8064B9E0:
    ctx->pc = 0x8064B9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064B9E0: stw     r0, 52(r1)
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
label_8064B9E4:
    ctx->pc = 0x8064B9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9E4u)) return;
    // 8064B9E4: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_8064B9E8:
    ctx->pc = 0x8064B9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064B9E8: lfs     f0, -13184(r5)
    if (!ppc_fp_available_inline(ctx, 0x8064B9E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-13184);
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
label_8064B9EC:
    ctx->pc = 0x8064B9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9ECu)) return;
    // 8064B9EC: addi    r6, r6, -12148
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12148);

label_8064B9F0:
    ctx->pc = 0x8064B9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064B9F0: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B9F4:
    ctx->pc = 0x8064B9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064B9F4: lwz     r5, -11900(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11900);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064B9F8:
    ctx->pc = 0x8064B9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9F8u)) return;
    // 8064B9F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8064B9FC:
    ctx->pc = 0x8064B9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064B9FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064B9FC: stw     r0, 8(r1)
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
label_8064BA00:
    ctx->pc = 0x8064BA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA00u)) return;
    // 8064BA00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064BA04:
    ctx->pc = 0x8064BA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064BA04: lhz     r3, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA08:
    ctx->pc = 0x8064BA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064BA08: stw     r3, 12(r1)
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
label_8064BA0C:
    ctx->pc = 0x8064BA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA0Cu)) return;
    // 8064BA0C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8064BA10:
    ctx->pc = 0x8064BA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BA10: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA14:
    ctx->pc = 0x8064BA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BA14: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BA14u)) return;
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
label_8064BA18:
    ctx->pc = 0x8064BA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BA18: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA1C:
    ctx->pc = 0x8064BA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BA1C: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA20:
    ctx->pc = 0x8064BA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BA20: stw     r0, 32(r1)
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
label_8064BA24:
    ctx->pc = 0x8064BA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA24u)) return;
    // 8064BA24: bl      0x8050BFD4
    {
            ctx->lr = 0x8064BA28u;
            ctx->pc = 0x8050BFD4u;
            return;
    }

label_8064BA28:
    ctx->pc = 0x8064BA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8064BA28: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_8064BA2C:
    ctx->pc = 0x8064BA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA2Cu)) return;
    // 8064BA2C: addi    r0, r3, -21
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21);

label_8064BA30:
    ctx->pc = 0x8064BA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BA30: stw     r0, -11908(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11908);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA34:
    ctx->pc = 0x8064BA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BA34: lwz     r0, 52(r1)
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
label_8064BA38:
    ctx->pc = 0x8064BA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064BA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BA38: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA3C:
    ctx->pc = 0x8064BA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA3Cu)) return;
    // 8064BA3C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8064BA40:
    ctx->pc = 0x8064BA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA40u)) return;
    // 8064BA40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064BA44:
    ctx->pc = 0x8064BA44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BA44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BA44: lhz     r4, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA48:
    ctx->pc = 0x8064BA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA48u)) return;
    // 8064BA48: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_8064BA4C:
    ctx->pc = 0x8064BA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA4Cu)) return;
    // 8064BA4C: rlwinm r0, r4, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_8064BA50:
    ctx->pc = 0x8064BA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BA50: sth     r4, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA54:
    ctx->pc = 0x8064BA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA54u)) return;
    // 8064BA54: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8064BA58:
    ctx->pc = 0x8064BA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA58u)) return;
    // 8064BA58: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064BA5C:
    ctx->pc = 0x8064BA5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8064BA5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8064BA60:
    ctx->pc = 0x8064BA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BA60: sth     r5, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA64:
    ctx->pc = 0x8064BA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BA64: lbz     r4, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA68:
    ctx->pc = 0x8064BA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA68u)) return;
    // 8064BA68: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_8064BA6C:
    ctx->pc = 0x8064BA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA6Cu)) return;
    // 8064BA6C: rlwinm r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_8064BA70:
    ctx->pc = 0x8064BA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BA70: stb     r4, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA74:
    ctx->pc = 0x8064BA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA74u)) return;
    // 8064BA74: cmplwi  r0, 0x000F
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

label_8064BA78:
    ctx->pc = 0x8064BA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA78u)) return;
    // 8064BA78: bc    12, 0, 0x8064BA80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BA80;
        }
    }

label_8064BA7C:
    ctx->pc = 0x8064BA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064BA7C: stb     r5, 3(r3)
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
label_8064BA80:
    ctx->pc = 0x8064BA80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BA80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BA80: lbz     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA84:
    ctx->pc = 0x8064BA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA84u)) return;
    // 8064BA84: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_8064BA88:
    ctx->pc = 0x8064BA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA88u)) return;
    // 8064BA88: addi    r4, r4, -12712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12712);

label_8064BA8C:
    ctx->pc = 0x8064BA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA8Cu)) return;
    // 8064BA8C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8064BA90:
    ctx->pc = 0x8064BA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BA90: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BA94:
    ctx->pc = 0x8064BA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BA94: stw     r0, 16(r3)
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
label_8064BA98:
    ctx->pc = 0x8064BA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BA98u)) return;
    // 8064BA98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064BA9C:
    ctx->pc = 0x8064BA9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BA9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064BA9C: stwu     r1, -64(r1)
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
label_8064BAA0:
    ctx->pc = 0x8064BAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064BAA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BAA4:
    ctx->pc = 0x8064BAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064BAA4: stw     r0, 68(r1)
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
label_8064BAA8:
    ctx->pc = 0x8064BAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064BAA8: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BAA8u)) return;
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
label_8064BAAC:
    ctx->pc = 0x8064BAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BAAC: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8064BAACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8064BAACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BAB0:
    ctx->pc = 0x8064BAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BAB0: stw     r31, 44(r1)
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
label_8064BAB4:
    ctx->pc = 0x8064BAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAB4u)) return;
    // 8064BAB4: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064BAB8:
    ctx->pc = 0x8064BAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BAB8: lwz     r31, 32(r3)
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
label_8064BABC:
    ctx->pc = 0x8064BABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BABC: lfs     f1, -13180(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064BABCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BAC0:
    ctx->pc = 0x8064BAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAC0u)) return;
    // 8064BAC0: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_8064BAC4:
    ctx->pc = 0x8064BAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAC4u)) return;
    // 8064BAC4: bl      0x8060F044
    {
            ctx->lr = 0x8064BAC8u;
            ctx->pc = 0x8060F044u;
            return;
    }

label_8064BAC8:
    ctx->pc = 0x8064BAC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BAC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064BAC8: cmpwi   r3, 0
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

label_8064BACC:
    ctx->pc = 0x8064BACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BACCu)) return;
    // 8064BACC: bc    12, 2, 0x8064BB60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BB60;
        }
    }

label_8064BAD0:
    ctx->pc = 0x8064BAD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BAD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064BAD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BAD4:
    ctx->pc = 0x8064BAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAD4u)) return;
    // 8064BAD4: bl      0x8004B49C
    {
            ctx->lr = 0x8064BAD8u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_8064BAD8:
    ctx->pc = 0x8064BAD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BAD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BAD8: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_8064BADC:
    ctx->pc = 0x8064BADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BADCu)) return;
    // 8064BADC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BAE0:
    ctx->pc = 0x8064BAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAE0u)) return;
    // 8064BAE0: bl      0x8004AA9C
    {
            ctx->lr = 0x8064BAE4u;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_8064BAE4:
    ctx->pc = 0x8064BAE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BAE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BAE4: lwz     r0, 28(r31)
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
label_8064BAE8:
    ctx->pc = 0x8064BAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAE8u)) return;
    // 8064BAE8: cmpwi   r0, 0
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

label_8064BAEC:
    ctx->pc = 0x8064BAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAECu)) return;
    // 8064BAEC: bc    12, 2, 0x8064BAFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BAFC;
        }
    }

label_8064BAF0:
    ctx->pc = 0x8064BAF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BAF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BAF0: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064BAF4:
    ctx->pc = 0x8064BAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAF4u)) return;
    // 8064BAF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BAF8:
    ctx->pc = 0x8064BAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BAF8u)) return;
    // 8064BAF8: bl      0x8004AFDC
    {
            ctx->lr = 0x8064BAFCu;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_8064BAFC:
    ctx->pc = 0x8064BAFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BAFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BAFC: lwz     r0, 20(r31)
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
label_8064BB00:
    ctx->pc = 0x8064BB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB00u)) return;
    // 8064BB00: cmpwi   r0, 0
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

label_8064BB04:
    ctx->pc = 0x8064BB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB04u)) return;
    // 8064BB04: bc    12, 2, 0x8064BB14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BB14;
        }
    }

label_8064BB08:
    ctx->pc = 0x8064BB08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BB08: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064BB0C:
    ctx->pc = 0x8064BB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB0Cu)) return;
    // 8064BB0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BB10:
    ctx->pc = 0x8064BB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB10u)) return;
    // 8064BB10: bl      0x8004B3E0
    {
            ctx->lr = 0x8064BB14u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_8064BB14:
    ctx->pc = 0x8064BB14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BB14: lwz     r0, 24(r31)
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
label_8064BB18:
    ctx->pc = 0x8064BB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB18u)) return;
    // 8064BB18: cmpwi   r0, 0
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

label_8064BB1C:
    ctx->pc = 0x8064BB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB1Cu)) return;
    // 8064BB1C: bc    12, 2, 0x8064BB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BB2C;
        }
    }

label_8064BB20:
    ctx->pc = 0x8064BB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BB20: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064BB24:
    ctx->pc = 0x8064BB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB24u)) return;
    // 8064BB24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BB28:
    ctx->pc = 0x8064BB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB28u)) return;
    // 8064BB28: bl      0x8004AF5C
    {
            ctx->lr = 0x8064BB2Cu;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_8064BB2C:
    ctx->pc = 0x8064BB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8064BB2C: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064BB30:
    ctx->pc = 0x8064BB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB30u)) return;
    // 8064BB30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BB34:
    ctx->pc = 0x8064BB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BB34: lfs     f1, -13232(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064BB34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BB38:
    ctx->pc = 0x8064BB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB38u)) return;
    // 8064BB38: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BB38u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_8064BB3C:
    ctx->pc = 0x8064BB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB3Cu)) return;
    // 8064BB3C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BB3Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_8064BB40:
    ctx->pc = 0x8064BB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB40u)) return;
    // 8064BB40: bl      0x8004A8A8
    {
            ctx->lr = 0x8064BB44u;
            ctx->pc = 0x8004A8A8u;
            return;
    }

label_8064BB44:
    ctx->pc = 0x8064BB44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BB44: lis     r3, -28492
    ctx->gpr[3] = ((u32)(s32)(-28492) << 16);

label_8064BB48:
    ctx->pc = 0x8064BB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB48u)) return;
    // 8064BB48: addi    r3, r3, 13996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13996);

label_8064BB4C:
    ctx->pc = 0x8064BB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB4Cu)) return;
    // 8064BB4C: bl      0x8060F594
    {
            ctx->lr = 0x8064BB50u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_8064BB50:
    ctx->pc = 0x8064BB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BB50: lwz     r3, 16(r31)
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
label_8064BB54:
    ctx->pc = 0x8064BB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB54u)) return;
    // 8064BB54: bl      0x80055FF4
    {
            ctx->lr = 0x8064BB58u;
            ctx->pc = 0x80055FF4u;
            return;
    }

label_8064BB58:
    ctx->pc = 0x8064BB58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064BB58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8064BB5C:
    ctx->pc = 0x8064BB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB5Cu)) return;
    // 8064BB5C: bl      0x8004B504
    {
            ctx->lr = 0x8064BB60u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_8064BB60:
    ctx->pc = 0x8064BB60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8064BB60: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BB64:
    ctx->pc = 0x8064BB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BB64: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064BB64u)) return;
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
label_8064BB68:
    ctx->pc = 0x8064BB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BB68: lfs     f2, -13172(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BB68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13172);
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
label_8064BB6C:
    ctx->pc = 0x8064BB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB6Cu)) return;
    // 8064BB6C: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_8064BB70:
    ctx->pc = 0x8064BB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BB70: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064BB70u)) return;
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
label_8064BB74:
    ctx->pc = 0x8064BB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB74u)) return;
    // 8064BB74: bl      0x80401580
    {
            ctx->lr = 0x8064BB78u;
            ctx->pc = 0x80401580u;
            return;
    }

label_8064BB78:
    ctx->pc = 0x8064BB78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8064BB78: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BB7C:
    ctx->pc = 0x8064BB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BB7C: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064BB7Cu)) return;
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
label_8064BB80:
    ctx->pc = 0x8064BB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BB80: lfs     f2, -13176(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BB80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13176);
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
label_8064BB84:
    ctx->pc = 0x8064BB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB84u)) return;
    // 8064BB84: fadds   f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BB84u)) return;
    ppc_fadds(ctx, 5, 2, 1);

label_8064BB88:
    ctx->pc = 0x8064BB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB88u)) return;
    // 8064BB88: fcmpo   cr0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x8064BB88u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[5], true);

label_8064BB8C:
    ctx->pc = 0x8064BB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB8Cu)) return;
    // 8064BB8C: bc    4, 1, 0x8064BC48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064BC48;
        }
    }

label_8064BB90:
    ctx->pc = 0x8064BB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    // 8064BB90: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BB94:
    ctx->pc = 0x8064BB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB94u)) return;
    // 8064BB94: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x8064BB94u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_8064BB98:
    ctx->pc = 0x8064BB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8064BB98: lfs     f3, -13192(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BB98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13192);
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
label_8064BB9C:
    ctx->pc = 0x8064BB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BB9Cu)) return;
    // 8064BB9C: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BBA0:
    ctx->pc = 0x8064BBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8064BBA0: lfs     f4, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064BBA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_8064BBA4:
    ctx->pc = 0x8064BBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBA4u)) return;
    // 8064BBA4: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064BBA8:
    ctx->pc = 0x8064BBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBA8u)) return;
    // 8064BBA8: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BBA8u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_8064BBAC:
    ctx->pc = 0x8064BBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064BBAC: lfs     f1, -13184(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BBACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BBB0:
    ctx->pc = 0x8064BBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064BBB0: lfs     f2, -13168(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064BBB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13168);
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
label_8064BBB4:
    ctx->pc = 0x8064BBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBB4u)) return;
    // 8064BBB4: fabs    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BBB4u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) & 0x7FFFFFFFFFFFFFFFull);

label_8064BBB8:
    ctx->pc = 0x8064BBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8064BBB8: stfs     f4, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BBB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BBBC:
    ctx->pc = 0x8064BBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8064BBBC: stfs     f5, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BBBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BBC0:
    ctx->pc = 0x8064BBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBC0u)) return;
    // 8064BBC0: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BBC0u)) return;
    ppc_frsp(ctx, 0, 0);

label_8064BBC4:
    ctx->pc = 0x8064BBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064BBC4: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064BBC4u)) return;
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
label_8064BBC8:
    ctx->pc = 0x8064BBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBC8u)) return;
    // 8064BBC8: fmadds f0, f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8064BBC8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8064BBCC:
    ctx->pc = 0x8064BBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064BBCC: stfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BBCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BBD0:
    ctx->pc = 0x8064BBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8064BBD0u)) return;
    // 8064BBD0: fdivs   f31, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BBD0u)) return;
    ppc_fdivs(ctx, 31, 2, 0);

label_8064BBD4:
    ctx->pc = 0x8064BBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBD4u)) return;
    // 8064BBD4: bl      0x80510928
    {
            ctx->lr = 0x8064BBD8u;
            ctx->pc = 0x80510928u;
            return;
    }

label_8064BBD8:
    ctx->pc = 0x8064BBD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BBD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064BBD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BBDC:
    ctx->pc = 0x8064BBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBDCu)) return;
    // 8064BBDC: bl      0x8004B49C
    {
            ctx->lr = 0x8064BBE0u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_8064BBE0:
    ctx->pc = 0x8064BBE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BBE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BBE0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8064BBE4:
    ctx->pc = 0x8064BBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBE4u)) return;
    // 8064BBE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BBE8:
    ctx->pc = 0x8064BBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBE8u)) return;
    // 8064BBE8: bl      0x8004AA9C
    {
            ctx->lr = 0x8064BBECu;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_8064BBEC:
    ctx->pc = 0x8064BBECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BBECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BBEC: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BBF0:
    ctx->pc = 0x8064BBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBF0u)) return;
    // 8064BBF0: cmpwi   r0, 0
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

label_8064BBF4:
    ctx->pc = 0x8064BBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBF4u)) return;
    // 8064BBF4: bc    12, 2, 0x8064BC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BC04;
        }
    }

label_8064BBF8:
    ctx->pc = 0x8064BBF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BBF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BBF8: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064BBFC:
    ctx->pc = 0x8064BBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BBFCu)) return;
    // 8064BBFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BC00:
    ctx->pc = 0x8064BC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC00u)) return;
    // 8064BC00: bl      0x8004AFDC
    {
            ctx->lr = 0x8064BC04u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_8064BC04:
    ctx->pc = 0x8064BC04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BC04: lwz     r0, 20(r1)
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
label_8064BC08:
    ctx->pc = 0x8064BC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC08u)) return;
    // 8064BC08: cmpwi   r0, 0
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

label_8064BC0C:
    ctx->pc = 0x8064BC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC0Cu)) return;
    // 8064BC0C: bc    12, 2, 0x8064BC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BC1C;
        }
    }

label_8064BC10:
    ctx->pc = 0x8064BC10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BC10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BC10: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064BC14:
    ctx->pc = 0x8064BC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC14u)) return;
    // 8064BC14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BC18:
    ctx->pc = 0x8064BC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC18u)) return;
    // 8064BC18: bl      0x8004B3E0
    {
            ctx->lr = 0x8064BC1Cu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_8064BC1C:
    ctx->pc = 0x8064BC1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BC1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8064BC1C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8064BC1Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8064BC20:
    ctx->pc = 0x8064BC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC20u)) return;
    // 8064BC20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064BC24:
    ctx->pc = 0x8064BC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC24u)) return;
    // 8064BC24: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x8064BC24u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_8064BC28:
    ctx->pc = 0x8064BC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC28u)) return;
    // 8064BC28: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x8064BC28u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_8064BC2C:
    ctx->pc = 0x8064BC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC2Cu)) return;
    // 8064BC2C: bl      0x8004A8A8
    {
            ctx->lr = 0x8064BC30u;
            ctx->pc = 0x8004A8A8u;
            return;
    }

label_8064BC30:
    ctx->pc = 0x8064BC30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BC30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064BC30: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8064BC30u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8064BC34:
    ctx->pc = 0x8064BC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC34u)) return;
    // 8064BC34: lis     r3, -28662
    ctx->gpr[3] = ((u32)(s32)(-28662) << 16);

label_8064BC38:
    ctx->pc = 0x8064BC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC38u)) return;
    // 8064BC38: addi    r3, r3, -1452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1452);

label_8064BC3C:
    ctx->pc = 0x8064BC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC3Cu)) return;
    // 8064BC3C: bl      0x8060A740
    {
            ctx->lr = 0x8064BC40u;
            ctx->pc = 0x8060A740u;
            return;
    }

label_8064BC40:
    ctx->pc = 0x8064BC40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BC40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064BC40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8064BC44:
    ctx->pc = 0x8064BC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC44u)) return;
    // 8064BC44: bl      0x8004B504
    {
            ctx->lr = 0x8064BC48u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_8064BC48:
    ctx->pc = 0x8064BC48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BC48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064BC48: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8064BC48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8064BC48u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC4C:
    ctx->pc = 0x8064BC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BC4C: lwz     r0, 68(r1)
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
label_8064BC50:
    ctx->pc = 0x8064BC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BC50: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BC50u)) return;
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
label_8064BC54:
    ctx->pc = 0x8064BC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BC54: lwz     r31, 44(r1)
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
label_8064BC58:
    ctx->pc = 0x8064BC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064BC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BC58: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC5C:
    ctx->pc = 0x8064BC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC5Cu)) return;
    // 8064BC5C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8064BC60:
    ctx->pc = 0x8064BC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC60u)) return;
    // 8064BC60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064BC64:
    ctx->pc = 0x8064BC64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BC64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064BC64: stwu     r1, -160(r1)
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
label_8064BC68:
    ctx->pc = 0x8064BC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064BC68: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC6C:
    ctx->pc = 0x8064BC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064BC6C: stw     r0, 164(r1)
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
label_8064BC70:
    ctx->pc = 0x8064BC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064BC70: stfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BC70u)) return;
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
label_8064BC74:
    ctx->pc = 0x8064BC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064BC74: psq_st   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8064BC74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8064BC74u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC78:
    ctx->pc = 0x8064BC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064BC78: stw     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC7C:
    ctx->pc = 0x8064BC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064BC7C: stw     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC80:
    ctx->pc = 0x8064BC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064BC80: stw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC84:
    ctx->pc = 0x8064BC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC84u)) return;
    // 8064BC84: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064BC88:
    ctx->pc = 0x8064BC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064BC88: lwz     r31, 32(r3)
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
label_8064BC8C:
    ctx->pc = 0x8064BC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064BC8C: lwz     r30, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC90:
    ctx->pc = 0x8064BC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC90u)) return;
    // 8064BC90: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8064BC94:
    ctx->pc = 0x8064BC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064BC94: lfs     f5, -13216(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064BC94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13216);
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
label_8064BC98:
    ctx->pc = 0x8064BC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BC98: stfs     f5, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064BC98u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BC9C:
    ctx->pc = 0x8064BC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BC9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BC9C: stfs     f5, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064BC9Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BCA0:
    ctx->pc = 0x8064BCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BCA0: stfs     f5, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064BCA0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BCA4:
    ctx->pc = 0x8064BCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BCA4: lbz     r0, 0(r31)
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
label_8064BCA8:
    ctx->pc = 0x8064BCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCA8u)) return;
    // 8064BCA8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8064BCAC:
    ctx->pc = 0x8064BCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCACu)) return;
    // 8064BCAC: cmpwi   r0, 1
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

label_8064BCB0:
    ctx->pc = 0x8064BCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCB0u)) return;
    // 8064BCB0: bc    12, 2, 0x8064BED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BED0;
        }
    }

label_8064BCB4:
    ctx->pc = 0x8064BCB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BCB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064BCB4: bc    4, 0, 0x8064C1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C1F4;
        }
    }

label_8064BCB8:
    ctx->pc = 0x8064BCB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BCB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064BCB8: cmpwi   r0, 0
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

label_8064BCBC:
    ctx->pc = 0x8064BCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCBCu)) return;
    // 8064BCBC: bc    4, 0, 0x8064BCC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064BCC8;
        }
    }

label_8064BCC0:
    ctx->pc = 0x8064BCC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BCC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064BCC0: b       0x8064C1F4
    {
            goto label_8064C1F4;
    }

label_8064BCC4:
    ctx->pc = 0x8064BCC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BCC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064BCC4: b       0x8064C1F4
    {
            goto label_8064C1F4;
    }

label_8064BCC8:
    ctx->pc = 0x8064BCC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 69u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BCC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 69u : 1u;
    // 8064BCC8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8064BCCC:
    ctx->pc = 0x8064BCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCCCu)) return;
    // 8064BCCC: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_8064BCD0:
    ctx->pc = 0x8064BCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 8064BCD0: stb     r0, 0(r31)
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
label_8064BCD4:
    ctx->pc = 0x8064BCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCD4u)) return;
    // 8064BCD4: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064BCD8:
    ctx->pc = 0x8064BCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCD8u)) return;
    // 8064BCD8: addi    r7, r3, -11900
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-11900);

label_8064BCDC:
    ctx->pc = 0x8064BCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCDCu)) return;
    // 8064BCDC: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064BCE0:
    ctx->pc = 0x8064BCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 8064BCE0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BCE4:
    ctx->pc = 0x8064BCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCE4u)) return;
    // 8064BCE4: addi    r4, r4, -12268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12268);

label_8064BCE8:
    ctx->pc = 0x8064BCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 8064BCE8: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BCEC:
    ctx->pc = 0x8064BCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCECu)) return;
    // 8064BCEC: addi    r3, r3, -12712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12712);

label_8064BCF0:
    ctx->pc = 0x8064BCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCF0u)) return;
    // 8064BCF0: rlwinm r6, r0, 3, 0, 28
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_8064BCF4:
    ctx->pc = 0x8064BCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCF4u)) return;
    // 8064BCF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064BCF8:
    ctx->pc = 0x8064BCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BCF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 8064BCF8: lhzx    r8, r4, r6
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[6];
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BCFC:
    ctx->pc = 0x8064BCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8064BCFCu)) return;
    // 8064BCFC: mulli   r4, r8, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[8] * (s64)(s32)12);

label_8064BD00:
    ctx->pc = 0x8064BD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD00u)) return;
    // 8064BD00: add   r6, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8064BD04:
    ctx->pc = 0x8064BD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 8064BD04: lwz     r5, 0(r6)
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
label_8064BD08:
    ctx->pc = 0x8064BD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 8064BD08: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD0C:
    ctx->pc = 0x8064BD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 8064BD0C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD10:
    ctx->pc = 0x8064BD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 8064BD10: stw     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD14:
    ctx->pc = 0x8064BD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 8064BD14: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD18:
    ctx->pc = 0x8064BD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 8064BD18: stw     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD1C:
    ctx->pc = 0x8064BD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 8064BD1C: stw     r8, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD20:
    ctx->pc = 0x8064BD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 8064BD20: lwz     r3, 0(r3)
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
label_8064BD24:
    ctx->pc = 0x8064BD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 8064BD24: stw     r3, 16(r31)
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
label_8064BD28:
    ctx->pc = 0x8064BD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 8064BD28: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD2C:
    ctx->pc = 0x8064BD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 8064BD2C: sth     r0, 6(r31)
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
label_8064BD30:
    ctx->pc = 0x8064BD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 8064BD30: stw     r0, 44(r30)
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
label_8064BD34:
    ctx->pc = 0x8064BD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 8064BD34: lwz     r0, 0(r30)
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
label_8064BD38:
    ctx->pc = 0x8064BD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 8064BD38: lwz     r3, 0(r7)
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
label_8064BD3C:
    ctx->pc = 0x8064BD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8064BD3Cu)) return;
    // 8064BD3C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8064BD40:
    ctx->pc = 0x8064BD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 8064BD40: lfs     f3, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064BD40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_8064BD44:
    ctx->pc = 0x8064BD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8064BD44: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064BD44u)) return;
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
label_8064BD48:
    ctx->pc = 0x8064BD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 8064BD48: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064BD48u)) return;
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
label_8064BD4C:
    ctx->pc = 0x8064BD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD4Cu)) return;
    // 8064BD4C: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8064BD50:
    ctx->pc = 0x8064BD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 8064BD50: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD54:
    ctx->pc = 0x8064BD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8064BD54: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD58:
    ctx->pc = 0x8064BD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8064BD58: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD5C:
    ctx->pc = 0x8064BD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8064BD5C: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD60:
    ctx->pc = 0x8064BD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064BD60: stw     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD64:
    ctx->pc = 0x8064BD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064BD64: lfs     f4, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BD64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
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
label_8064BD68:
    ctx->pc = 0x8064BD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8064BD68: lfs     f2, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BD68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
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
label_8064BD6C:
    ctx->pc = 0x8064BD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8064BD6C: stw     r0, 84(r1)
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
label_8064BD70:
    ctx->pc = 0x8064BD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD70u)) return;
    // 8064BD70: fsubs   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x8064BD70u)) return;
    ppc_fsubs(ctx, 3, 4, 3);

label_8064BD74:
    ctx->pc = 0x8064BD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD74u)) return;
    // 8064BD74: fsubs   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BD74u)) return;
    ppc_fsubs(ctx, 2, 2, 1);

label_8064BD78:
    ctx->pc = 0x8064BD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064BD78: lfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BD78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD7C:
    ctx->pc = 0x8064BD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064BD7C: stfs     f3, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BD7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD80:
    ctx->pc = 0x8064BD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD80u)) return;
    // 8064BD80: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BD80u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_8064BD84:
    ctx->pc = 0x8064BD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064BD84: stfs     f2, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BD84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD88:
    ctx->pc = 0x8064BD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064BD88: lwz     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD8C:
    ctx->pc = 0x8064BD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064BD8C: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD90:
    ctx->pc = 0x8064BD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064BD90: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BD90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD94:
    ctx->pc = 0x8064BD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064BD94: stw     r0, 100(r1)
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
label_8064BD98:
    ctx->pc = 0x8064BD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064BD98: lwz     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BD9C:
    ctx->pc = 0x8064BD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BD9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064BD9C: stw     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BDA0:
    ctx->pc = 0x8064BDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064BDA0: lfs     f1, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BDA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BDA4:
    ctx->pc = 0x8064BDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064BDA4: lfs     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BDA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
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
label_8064BDA8:
    ctx->pc = 0x8064BDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064BDA8: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BDAC:
    ctx->pc = 0x8064BDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDACu)) return;
    // 8064BDAC: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BDACu)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_8064BDB0:
    ctx->pc = 0x8064BDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDB0u)) return;
    // 8064BDB0: fmuls   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BDB0u)) return;
    ppc_fmuls(ctx, 0, 0, 0);

label_8064BDB4:
    ctx->pc = 0x8064BDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BDB4: lfs     f2, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BDB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
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
label_8064BDB8:
    ctx->pc = 0x8064BDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDB8u)) return;
    // 8064BDB8: fmuls   f2, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x8064BDB8u)) return;
    ppc_fmuls(ctx, 2, 2, 2);

label_8064BDBC:
    ctx->pc = 0x8064BDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDBCu)) return;
    // 8064BDBC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BDBCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064BDC0:
    ctx->pc = 0x8064BDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDC0u)) return;
    // 8064BDC0: fadds   f4, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BDC0u)) return;
    ppc_fadds(ctx, 4, 2, 0);

label_8064BDC4:
    ctx->pc = 0x8064BDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDC4u)) return;
    // 8064BDC4: fcmpo   cr0, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x8064BDC4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[5], true);

label_8064BDC8:
    ctx->pc = 0x8064BDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDC8u)) return;
    // 8064BDC8: bc    4, 1, 0x8064BE20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064BE20;
        }
    }

label_8064BDCC:
    ctx->pc = 0x8064BDCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BDCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064BDCC: frsqrte    f1, f4
    if (!ppc_fp_available_inline(ctx, 0x8064BDCCu)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[4], &result)) ctx->fpr[1] = result; }

label_8064BDD0:
    ctx->pc = 0x8064BDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDD0u)) return;
    // 8064BDD0: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064BDD4:
    ctx->pc = 0x8064BDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDD4u)) return;
    // 8064BDD4: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BDD8:
    ctx->pc = 0x8064BDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064BDD8: lfd     f3, -13208(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064BDD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13208);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BDDC:
    ctx->pc = 0x8064BDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064BDDC: lfd     f2, -13200(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BDDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BDE0:
    ctx->pc = 0x8064BDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDE0u)) return;
    // 8064BDE0: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BDE0u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064BDE4:
    ctx->pc = 0x8064BDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDE4u)) return;
    // 8064BDE4: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BDE4u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064BDE8:
    ctx->pc = 0x8064BDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDE8u)) return;
    // 8064BDE8: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064BDE8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064BDEC:
    ctx->pc = 0x8064BDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDECu)) return;
    // 8064BDEC: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BDECu)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064BDF0:
    ctx->pc = 0x8064BDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDF0u)) return;
    // 8064BDF0: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BDF0u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064BDF4:
    ctx->pc = 0x8064BDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDF4u)) return;
    // 8064BDF4: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BDF4u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064BDF8:
    ctx->pc = 0x8064BDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDF8u)) return;
    // 8064BDF8: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064BDF8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064BDFC:
    ctx->pc = 0x8064BDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BDFCu)) return;
    // 8064BDFC: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BDFCu)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064BE00:
    ctx->pc = 0x8064BE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE00u)) return;
    // 8064BE00: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BE00u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064BE04:
    ctx->pc = 0x8064BE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE04u)) return;
    // 8064BE04: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BE04u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064BE08:
    ctx->pc = 0x8064BE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE08u)) return;
    // 8064BE08: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064BE08u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064BE0C:
    ctx->pc = 0x8064BE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE0Cu)) return;
    // 8064BE0C: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BE0Cu)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_8064BE10:
    ctx->pc = 0x8064BE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE10u)) return;
    // 8064BE10: fmul   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BE10u)) return;
    ppc_fmul(ctx, 0, 4, 0);

label_8064BE14:
    ctx->pc = 0x8064BE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE14u)) return;
    // 8064BE14: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BE14u)) return;
    ppc_frsp(ctx, 0, 0);

label_8064BE18:
    ctx->pc = 0x8064BE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BE18: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE18u)) return;
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
label_8064BE1C:
    ctx->pc = 0x8064BE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064BE1C: lfs     f4, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_8064BE20:
    ctx->pc = 0x8064BE20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BE20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064BE20: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BE24:
    ctx->pc = 0x8064BE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BE24: lfs     f0, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BE24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064BE28:
    ctx->pc = 0x8064BE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE28u)) return;
    // 8064BE28: fcmpu   cr0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x8064BE28u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[4], false);

label_8064BE2C:
    ctx->pc = 0x8064BE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE2Cu)) return;
    // 8064BE2C: bc    4, 2, 0x8064BE40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064BE40;
        }
    }

label_8064BE30:
    ctx->pc = 0x8064BE30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BE30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BE30: stfs     f0, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BE34:
    ctx->pc = 0x8064BE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BE34: stfs     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BE38:
    ctx->pc = 0x8064BE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BE38: stfs     f0, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BE3C:
    ctx->pc = 0x8064BE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE3Cu)) return;
    // 8064BE3C: b       0x8064BE70
    {
            goto label_8064BE70;
    }

label_8064BE40:
    ctx->pc = 0x8064BE40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 28u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BE40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 28u : 1u;
    // 8064BE40: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BE44:
    ctx->pc = 0x8064BE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064BE44: lfs     f2, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
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
label_8064BE48:
    ctx->pc = 0x8064BE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064BE48: lfs     f3, -13192(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BE48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13192);
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
label_8064BE4C:
    ctx->pc = 0x8064BE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8064BE4C: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BE50:
    ctx->pc = 0x8064BE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8064BE50u)) return;
    // 8064BE50: fdivs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x8064BE50u)) return;
    ppc_fdivs(ctx, 3, 3, 4);

label_8064BE54:
    ctx->pc = 0x8064BE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BE54: lfs     f0, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
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
label_8064BE58:
    ctx->pc = 0x8064BE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE58u)) return;
    // 8064BE58: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8064BE58u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8064BE5C:
    ctx->pc = 0x8064BE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE5Cu)) return;
    // 8064BE5C: fmuls   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x8064BE5Cu)) return;
    ppc_fmuls(ctx, 1, 1, 3);

label_8064BE60:
    ctx->pc = 0x8064BE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE60u)) return;
    // 8064BE60: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8064BE60u)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_8064BE64:
    ctx->pc = 0x8064BE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BE64: stfs     f2, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BE68:
    ctx->pc = 0x8064BE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BE68: stfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BE6C:
    ctx->pc = 0x8064BE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064BE6C: stfs     f0, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BE70:
    ctx->pc = 0x8064BE70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BE70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064BE70: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BE74:
    ctx->pc = 0x8064BE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE74u)) return;
    // 8064BE74: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064BE78:
    ctx->pc = 0x8064BE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064BE78: lfs     f0, -13188(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BE78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13188);
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
label_8064BE7C:
    ctx->pc = 0x8064BE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE7Cu)) return;
    // 8064BE7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064BE80:
    ctx->pc = 0x8064BE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064BE80: lfs     f1, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BE84:
    ctx->pc = 0x8064BE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE84u)) return;
    // 8064BE84: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BE84u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_8064BE88:
    ctx->pc = 0x8064BE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064BE88: lfs     f6, -13232(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064BE88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13232);
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
label_8064BE8C:
    ctx->pc = 0x8064BE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064BE8C: lfs     f4, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
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
label_8064BE90:
    ctx->pc = 0x8064BE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE90u)) return;
    // 8064BE90: fmuls   f5, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BE90u)) return;
    ppc_fmuls(ctx, 5, 6, 1);

label_8064BE94:
    ctx->pc = 0x8064BE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064BE94: lfs     f2, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BE94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
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
label_8064BE98:
    ctx->pc = 0x8064BE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE98u)) return;
    // 8064BE98: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BE98u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8064BE9C:
    ctx->pc = 0x8064BE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BE9Cu)) return;
    // 8064BE9C: fmuls   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8064BE9Cu)) return;
    ppc_fmuls(ctx, 4, 6, 4);

label_8064BEA0:
    ctx->pc = 0x8064BEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064BEA0: stfs     f5, 16(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064BEA0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BEA4:
    ctx->pc = 0x8064BEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEA4u)) return;
    // 8064BEA4: fmuls   f3, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x8064BEA4u)) return;
    ppc_fmuls(ctx, 3, 6, 2);

label_8064BEA8:
    ctx->pc = 0x8064BEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BEA8: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BEA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BEAC:
    ctx->pc = 0x8064BEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BEAC: stfs     f4, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064BEACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BEB0:
    ctx->pc = 0x8064BEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BEB0: lwz     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BEB4:
    ctx->pc = 0x8064BEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BEB4: stfs     f3, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064BEB4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BEB8:
    ctx->pc = 0x8064BEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BEB8: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BEBC:
    ctx->pc = 0x8064BEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BEBC: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BEC0:
    ctx->pc = 0x8064BEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEC0u)) return;
    // 8064BEC0: bl      0x80401910
    {
            ctx->lr = 0x8064BEC4u;
            ctx->pc = 0x80401910u;
            return;
    }

label_8064BEC4:
    ctx->pc = 0x8064BEC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BEC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064BEC4: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_8064BEC8:
    ctx->pc = 0x8064BEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BEC8: stw     r0, 24(r31)
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
label_8064BECC:
    ctx->pc = 0x8064BECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BECCu)) return;
    // 8064BECC: b       0x8064C1F4
    {
            goto label_8064C1F4;
    }

label_8064BED0:
    ctx->pc = 0x8064BED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BED0: lhz     r3, 6(r31)
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
label_8064BED4:
    ctx->pc = 0x8064BED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BED4u)) return;
    // 8064BED4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8064BED8:
    ctx->pc = 0x8064BED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BED8u)) return;
    // 8064BED8: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8064BEDC:
    ctx->pc = 0x8064BEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BEDC: sth     r3, 6(r31)
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
label_8064BEE0:
    ctx->pc = 0x8064BEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEE0u)) return;
    // 8064BEE0: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8064BEE4:
    ctx->pc = 0x8064BEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEE4u)) return;
    // 8064BEE4: bc    12, 0, 0x8064BF24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BF24;
        }
    }

label_8064BEE8:
    ctx->pc = 0x8064BEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8064BEE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8064BEEC:
    ctx->pc = 0x8064BEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BEEC: sth     r4, 6(r31)
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
label_8064BEF0:
    ctx->pc = 0x8064BEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BEF0: lbz     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BEF4:
    ctx->pc = 0x8064BEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEF4u)) return;
    // 8064BEF4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8064BEF8:
    ctx->pc = 0x8064BEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEF8u)) return;
    // 8064BEF8: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_8064BEFC:
    ctx->pc = 0x8064BEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BEFC: stb     r3, 3(r31)
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
label_8064BF00:
    ctx->pc = 0x8064BF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF00u)) return;
    // 8064BF00: cmplwi  r0, 0x000F
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

label_8064BF04:
    ctx->pc = 0x8064BF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF04u)) return;
    // 8064BF04: bc    12, 0, 0x8064BF0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BF0C;
        }
    }

label_8064BF08:
    ctx->pc = 0x8064BF08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BF08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064BF08: stb     r4, 3(r31)
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
label_8064BF0C:
    ctx->pc = 0x8064BF0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BF0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BF0C: lbz     r0, 3(r31)
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
label_8064BF10:
    ctx->pc = 0x8064BF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF10u)) return;
    // 8064BF10: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064BF14:
    ctx->pc = 0x8064BF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF14u)) return;
    // 8064BF14: addi    r3, r3, -12712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12712);

label_8064BF18:
    ctx->pc = 0x8064BF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF18u)) return;
    // 8064BF18: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8064BF1C:
    ctx->pc = 0x8064BF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064BF1C: lwzx    r0, r3, r0
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
label_8064BF20:
    ctx->pc = 0x8064BF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064BF20: stw     r0, 16(r31)
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
label_8064BF24:
    ctx->pc = 0x8064BF24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BF24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064BF24: lwz     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF28:
    ctx->pc = 0x8064BF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF28u)) return;
    // 8064BF28: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8064BF2C:
    ctx->pc = 0x8064BF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF2Cu)) return;
    // 8064BF2C: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064BF30:
    ctx->pc = 0x8064BF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF30u)) return;
    // 8064BF30: lis     r5, -28546
    ctx->gpr[5] = ((u32)(s32)(-28546) << 16);

label_8064BF34:
    ctx->pc = 0x8064BF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF34u)) return;
    // 8064BF34: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8064BF38:
    ctx->pc = 0x8064BF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064BF38: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF3C:
    ctx->pc = 0x8064BF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064BF3C: lfd     f1, -13224(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064BF3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13224);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF40:
    ctx->pc = 0x8064BF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BF40: stw     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF44:
    ctx->pc = 0x8064BF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BF44: lfd     f2, -13240(r5)
    if (!ppc_fp_available_inline(ctx, 0x8064BF44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-13240);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF48:
    ctx->pc = 0x8064BF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BF48: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BF48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF4C:
    ctx->pc = 0x8064BF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF4Cu)) return;
    // 8064BF4C: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BF4Cu)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_8064BF50:
    ctx->pc = 0x8064BF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF50u)) return;
    // 8064BF50: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BF50u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_8064BF54:
    ctx->pc = 0x8064BF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF54u)) return;
    // 8064BF54: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BF54u)) return;
    ppc_frsp(ctx, 1, 1);

label_8064BF58:
    ctx->pc = 0x8064BF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF58u)) return;
    // 8064BF58: bl      0x80014034
    {
            ctx->lr = 0x8064BF5Cu;
            ctx->pc = 0x80014034u;
            return;
    }

label_8064BF5C:
    ctx->pc = 0x8064BF5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BF5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064BF5C: lwz     r5, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF60:
    ctx->pc = 0x8064BF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF60u)) return;
    // 8064BF60: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8064BF64:
    ctx->pc = 0x8064BF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF64u)) return;
    // 8064BF64: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064BF68:
    ctx->pc = 0x8064BF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064BF68: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF6C:
    ctx->pc = 0x8064BF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF6Cu)) return;
    // 8064BF6C: addi    r5, r5, 2048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2048);

label_8064BF70:
    ctx->pc = 0x8064BF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF70u)) return;
    // 8064BF70: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BF74:
    ctx->pc = 0x8064BF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064BF74: stw     r5, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF78:
    ctx->pc = 0x8064BF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF78u)) return;
    // 8064BF78: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BF78u)) return;
    ppc_frsp(ctx, 31, 1);

label_8064BF7C:
    ctx->pc = 0x8064BF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064BF7C: lfd     f1, -13224(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BF7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13224);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF80:
    ctx->pc = 0x8064BF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064BF80: lwz     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF84:
    ctx->pc = 0x8064BF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064BF84: lfd     f2, -13240(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064BF84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13240);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF88:
    ctx->pc = 0x8064BF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF88u)) return;
    // 8064BF88: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_8064BF8C:
    ctx->pc = 0x8064BF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BF8C: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF90:
    ctx->pc = 0x8064BF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064BF90: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064BF90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BF94:
    ctx->pc = 0x8064BF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF94u)) return;
    // 8064BF94: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BF94u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_8064BF98:
    ctx->pc = 0x8064BF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF98u)) return;
    // 8064BF98: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BF98u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_8064BF9C:
    ctx->pc = 0x8064BF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BF9Cu)) return;
    // 8064BF9C: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BF9Cu)) return;
    ppc_frsp(ctx, 1, 1);

label_8064BFA0:
    ctx->pc = 0x8064BFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFA0u)) return;
    // 8064BFA0: bl      0x80014034
    {
            ctx->lr = 0x8064BFA4u;
            ctx->pc = 0x80014034u;
            return;
    }

label_8064BFA4:
    ctx->pc = 0x8064BFA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BFA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 8064BFA4: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064BFA8:
    ctx->pc = 0x8064BFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFA8u)) return;
    // 8064BFA8: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BFA8u)) return;
    ppc_frsp(ctx, 1, 1);

label_8064BFAC:
    ctx->pc = 0x8064BFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064BFAC: lfs     f0, -13232(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064BFACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13232);
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
label_8064BFB0:
    ctx->pc = 0x8064BFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFB0u)) return;
    // 8064BFB0: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8064BFB0u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_8064BFB4:
    ctx->pc = 0x8064BFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFB4u)) return;
    // 8064BFB4: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8064BFB4u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_8064BFB8:
    ctx->pc = 0x8064BFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFB8u)) return;
    // 8064BFB8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064BFB8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_8064BFBC:
    ctx->pc = 0x8064BFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064BFBC: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064BFBCu)) return;
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
label_8064BFC0:
    ctx->pc = 0x8064BFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BFC0: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BFC4:
    ctx->pc = 0x8064BFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFC4u)) return;
    // 8064BFC4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8064BFC8:
    ctx->pc = 0x8064BFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BFC8: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BFCC:
    ctx->pc = 0x8064BFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064BFCC: lwz     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BFD0:
    ctx->pc = 0x8064BFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFD0u)) return;
    // 8064BFD0: cmpw    r3, r0
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

label_8064BFD4:
    ctx->pc = 0x8064BFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFD4u)) return;
    // 8064BFD4: bc    4, 1, 0x8064C1AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C1AC;
        }
    }

label_8064BFD8:
    ctx->pc = 0x8064BFD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BFD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8064BFD8: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064BFDC:
    ctx->pc = 0x8064BFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064BFDC: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064BFE0:
    ctx->pc = 0x8064BFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFE0u)) return;
    // 8064BFE0: addi    r3, r3, -11908
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11908);

label_8064BFE4:
    ctx->pc = 0x8064BFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064BFE4: lwz     r3, 0(r3)
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
label_8064BFE8:
    ctx->pc = 0x8064BFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFE8u)) return;
    // 8064BFE8: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_8064BFEC:
    ctx->pc = 0x8064BFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFECu)) return;
    // 8064BFEC: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8064BFF0:
    ctx->pc = 0x8064BFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFF0u)) return;
    // 8064BFF0: bc    12, 0, 0x8064BFFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064BFFC;
        }
    }

label_8064BFF4:
    ctx->pc = 0x8064BFF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BFF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064BFF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064BFF8:
    ctx->pc = 0x8064BFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064BFF8u)) return;
    // 8064BFF8: b       0x8064C1E0
    {
            goto label_8064C1E0;
    }

label_8064BFFC:
    ctx->pc = 0x8064BFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 46u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064BFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 46u : 1u;
    // 8064BFFC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8064C000:
    ctx->pc = 0x8064C000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C000u)) return;
    // 8064C000: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064C004:
    ctx->pc = 0x8064C004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 8064C004: stw     r0, 0(r30)
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
label_8064C008:
    ctx->pc = 0x8064C008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C008u)) return;
    // 8064C008: addi    r4, r3, -11900
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11900);

label_8064C00C:
    ctx->pc = 0x8064C00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C00Cu)) return;
    // 8064C00C: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C010:
    ctx->pc = 0x8064C010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 8064C010: lwz     r0, 0(r30)
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
label_8064C014:
    ctx->pc = 0x8064C014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 8064C014: lwz     r4, 0(r4)
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
label_8064C018:
    ctx->pc = 0x8064C018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8064C018u)) return;
    // 8064C018: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8064C01C:
    ctx->pc = 0x8064C01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 8064C01C: lfs     f0, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C01Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064C020:
    ctx->pc = 0x8064C020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 8064C020: lfs     f4, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C020u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_8064C024:
    ctx->pc = 0x8064C024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8064C024: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C024u)) return;
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
label_8064C028:
    ctx->pc = 0x8064C028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C028u)) return;
    // 8064C028: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8064C02C:
    ctx->pc = 0x8064C02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8064C02C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C02Cu)) return;
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
label_8064C030:
    ctx->pc = 0x8064C030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 8064C030: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C034:
    ctx->pc = 0x8064C034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8064C034: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C038:
    ctx->pc = 0x8064C038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8064C038: stw     r0, 16(r1)
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
label_8064C03C:
    ctx->pc = 0x8064C03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C03Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8064C03C: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C040:
    ctx->pc = 0x8064C040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064C040: stw     r3, 20(r1)
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
label_8064C044:
    ctx->pc = 0x8064C044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064C044: lfs     f5, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_8064C048:
    ctx->pc = 0x8064C048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8064C048: lfs     f3, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_8064C04C:
    ctx->pc = 0x8064C04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C04Cu)) return;
    // 8064C04C: fsubs   f4, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C04Cu)) return;
    ppc_fsubs(ctx, 4, 5, 4);

label_8064C050:
    ctx->pc = 0x8064C050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8064C050: stw     r0, 24(r1)
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
label_8064C054:
    ctx->pc = 0x8064C054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C054u)) return;
    // 8064C054: fsubs   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x8064C054u)) return;
    ppc_fsubs(ctx, 3, 3, 2);

label_8064C058:
    ctx->pc = 0x8064C058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064C058: lfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C058u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
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
label_8064C05C:
    ctx->pc = 0x8064C05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C05Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064C05C: stfs     f4, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C05Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C060:
    ctx->pc = 0x8064C060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C060u)) return;
    // 8064C060: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C060u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_8064C064:
    ctx->pc = 0x8064C064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064C064: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C064u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C068:
    ctx->pc = 0x8064C068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C068: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C06C:
    ctx->pc = 0x8064C06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064C06C: lwz     r3, 32(r1)
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
label_8064C070:
    ctx->pc = 0x8064C070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064C070: stw     r0, 40(r1)
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
label_8064C074:
    ctx->pc = 0x8064C074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064C074: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C074u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C078:
    ctx->pc = 0x8064C078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064C078: lfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
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
label_8064C07C:
    ctx->pc = 0x8064C07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064C07C: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C080:
    ctx->pc = 0x8064C080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064C080: lwz     r0, 36(r1)
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
label_8064C084:
    ctx->pc = 0x8064C084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C084u)) return;
    // 8064C084: fmuls   f2, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x8064C084u)) return;
    ppc_fmuls(ctx, 2, 2, 2);

label_8064C088:
    ctx->pc = 0x8064C088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064C088: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C08C:
    ctx->pc = 0x8064C08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C08Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064C08C: stw     r0, 48(r1)
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
label_8064C090:
    ctx->pc = 0x8064C090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C090u)) return;
    // 8064C090: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C090u)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_8064C094:
    ctx->pc = 0x8064C094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C094: lfs     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C094u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
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
label_8064C098:
    ctx->pc = 0x8064C098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C098u)) return;
    // 8064C098: fmuls   f3, f3, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C098u)) return;
    ppc_fmuls(ctx, 3, 3, 3);

label_8064C09C:
    ctx->pc = 0x8064C09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C09Cu)) return;
    // 8064C09C: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C09Cu)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_8064C0A0:
    ctx->pc = 0x8064C0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0A0u)) return;
    // 8064C0A0: fadds   f4, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C0A0u)) return;
    ppc_fadds(ctx, 4, 3, 1);

label_8064C0A4:
    ctx->pc = 0x8064C0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0A4u)) return;
    // 8064C0A4: fcmpo   cr0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C0A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[0], true);

label_8064C0A8:
    ctx->pc = 0x8064C0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0A8u)) return;
    // 8064C0A8: bc    4, 1, 0x8064C100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C100;
        }
    }

label_8064C0AC:
    ctx->pc = 0x8064C0ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064C0AC: frsqrte    f1, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C0ACu)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[4], &result)) ctx->fpr[1] = result; }

label_8064C0B0:
    ctx->pc = 0x8064C0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0B0u)) return;
    // 8064C0B0: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064C0B4:
    ctx->pc = 0x8064C0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0B4u)) return;
    // 8064C0B4: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C0B8:
    ctx->pc = 0x8064C0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064C0B8: lfd     f3, -13208(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064C0B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13208);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C0BC:
    ctx->pc = 0x8064C0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C0BC: lfd     f2, -13200(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C0BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C0C0:
    ctx->pc = 0x8064C0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0C0u)) return;
    // 8064C0C0: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C0C0u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064C0C4:
    ctx->pc = 0x8064C0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0C4u)) return;
    // 8064C0C4: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C0C4u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064C0C8:
    ctx->pc = 0x8064C0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0C8u)) return;
    // 8064C0C8: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064C0C8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064C0CC:
    ctx->pc = 0x8064C0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0CCu)) return;
    // 8064C0CC: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C0CCu)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064C0D0:
    ctx->pc = 0x8064C0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0D0u)) return;
    // 8064C0D0: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C0D0u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064C0D4:
    ctx->pc = 0x8064C0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0D4u)) return;
    // 8064C0D4: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C0D4u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064C0D8:
    ctx->pc = 0x8064C0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0D8u)) return;
    // 8064C0D8: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064C0D8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064C0DC:
    ctx->pc = 0x8064C0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0DCu)) return;
    // 8064C0DC: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C0DCu)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8064C0E0:
    ctx->pc = 0x8064C0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0E0u)) return;
    // 8064C0E0: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C0E0u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_8064C0E4:
    ctx->pc = 0x8064C0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0E4u)) return;
    // 8064C0E4: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C0E4u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8064C0E8:
    ctx->pc = 0x8064C0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0E8u)) return;
    // 8064C0E8: fnmsub f0, f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8064C0E8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_8064C0EC:
    ctx->pc = 0x8064C0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0ECu)) return;
    // 8064C0EC: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C0ECu)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_8064C0F0:
    ctx->pc = 0x8064C0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0F0u)) return;
    // 8064C0F0: fmul   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C0F0u)) return;
    ppc_fmul(ctx, 0, 4, 0);

label_8064C0F4:
    ctx->pc = 0x8064C0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0F4u)) return;
    // 8064C0F4: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C0F4u)) return;
    ppc_frsp(ctx, 0, 0);

label_8064C0F8:
    ctx->pc = 0x8064C0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C0F8: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C0F8u)) return;
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
label_8064C0FC:
    ctx->pc = 0x8064C0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C0FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C0FC: lfs     f4, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C0FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_8064C100:
    ctx->pc = 0x8064C100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064C100: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C104:
    ctx->pc = 0x8064C104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C104: lfs     f0, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C104u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064C108:
    ctx->pc = 0x8064C108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C108u)) return;
    // 8064C108: fcmpu   cr0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C108u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[4], false);

label_8064C10C:
    ctx->pc = 0x8064C10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C10Cu)) return;
    // 8064C10C: bc    4, 2, 0x8064C120
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C120;
        }
    }

label_8064C110:
    ctx->pc = 0x8064C110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C110: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C114:
    ctx->pc = 0x8064C114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C114: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C118:
    ctx->pc = 0x8064C118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C118: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C118u)) return;
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
label_8064C11C:
    ctx->pc = 0x8064C11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C11Cu)) return;
    // 8064C11C: b       0x8064C150
    {
            goto label_8064C150;
    }

label_8064C120:
    ctx->pc = 0x8064C120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 28u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 28u : 1u;
    // 8064C120: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C124:
    ctx->pc = 0x8064C124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064C124: lfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C124u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
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
label_8064C128:
    ctx->pc = 0x8064C128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064C128: lfs     f3, -13192(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C128u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13192);
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
label_8064C12C:
    ctx->pc = 0x8064C12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8064C12C: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C12Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C130:
    ctx->pc = 0x8064C130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8064C130u)) return;
    // 8064C130: fdivs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C130u)) return;
    ppc_fdivs(ctx, 3, 3, 4);

label_8064C134:
    ctx->pc = 0x8064C134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C134: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
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
label_8064C138:
    ctx->pc = 0x8064C138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C138u)) return;
    // 8064C138: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C138u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8064C13C:
    ctx->pc = 0x8064C13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C13Cu)) return;
    // 8064C13C: fmuls   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C13Cu)) return;
    ppc_fmuls(ctx, 1, 1, 3);

label_8064C140:
    ctx->pc = 0x8064C140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C140u)) return;
    // 8064C140: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C140u)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_8064C144:
    ctx->pc = 0x8064C144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C144: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C148:
    ctx->pc = 0x8064C148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C148: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C14C:
    ctx->pc = 0x8064C14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C14C: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C14Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C150:
    ctx->pc = 0x8064C150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064C150: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C154:
    ctx->pc = 0x8064C154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C154u)) return;
    // 8064C154: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064C158:
    ctx->pc = 0x8064C158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064C158: lfs     f0, -13188(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C158u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13188);
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
label_8064C15C:
    ctx->pc = 0x8064C15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C15Cu)) return;
    // 8064C15C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064C160:
    ctx->pc = 0x8064C160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C160: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C164:
    ctx->pc = 0x8064C164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C164u)) return;
    // 8064C164: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C164u)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_8064C168:
    ctx->pc = 0x8064C168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064C168: lfs     f6, -13232(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064C168u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13232);
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
label_8064C16C:
    ctx->pc = 0x8064C16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064C16C: lfs     f4, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C16Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
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
label_8064C170:
    ctx->pc = 0x8064C170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C170u)) return;
    // 8064C170: fmuls   f5, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C170u)) return;
    ppc_fmuls(ctx, 5, 6, 1);

label_8064C174:
    ctx->pc = 0x8064C174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064C174: lfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C174u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
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
label_8064C178:
    ctx->pc = 0x8064C178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C178u)) return;
    // 8064C178: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C178u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8064C17C:
    ctx->pc = 0x8064C17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C17Cu)) return;
    // 8064C17C: fmuls   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C17Cu)) return;
    ppc_fmuls(ctx, 4, 6, 4);

label_8064C180:
    ctx->pc = 0x8064C180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064C180: stfs     f5, 16(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C180u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C184:
    ctx->pc = 0x8064C184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C184u)) return;
    // 8064C184: fmuls   f3, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x8064C184u)) return;
    ppc_fmuls(ctx, 3, 6, 2);

label_8064C188:
    ctx->pc = 0x8064C188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C188: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C18C:
    ctx->pc = 0x8064C18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C18Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C18C: stfs     f4, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C18Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C190:
    ctx->pc = 0x8064C190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C190: lwz     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C194:
    ctx->pc = 0x8064C194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C194: stfs     f3, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C194u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C198:
    ctx->pc = 0x8064C198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C198: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C19C:
    ctx->pc = 0x8064C19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C19C: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C1A0:
    ctx->pc = 0x8064C1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1A0u)) return;
    // 8064C1A0: bl      0x80401910
    {
            ctx->lr = 0x8064C1A4u;
            ctx->pc = 0x80401910u;
            return;
    }

label_8064C1A4:
    ctx->pc = 0x8064C1A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C1A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C1A4: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_8064C1A8:
    ctx->pc = 0x8064C1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C1A8: stw     r0, 24(r31)
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
label_8064C1AC:
    ctx->pc = 0x8064C1ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C1ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064C1AC: lfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1ACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C1B0:
    ctx->pc = 0x8064C1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1B0u)) return;
    // 8064C1B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8064C1B4:
    ctx->pc = 0x8064C1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064C1B4: lfs     f0, 16(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1B4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
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
label_8064C1B8:
    ctx->pc = 0x8064C1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1B8u)) return;
    // 8064C1B8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C1B8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064C1BC:
    ctx->pc = 0x8064C1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064C1BC: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1BCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C1C0:
    ctx->pc = 0x8064C1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064C1C0: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C1C4:
    ctx->pc = 0x8064C1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C1C4: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
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
label_8064C1C8:
    ctx->pc = 0x8064C1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1C8u)) return;
    // 8064C1C8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C1C8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064C1CC:
    ctx->pc = 0x8064C1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C1CC: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1CCu)) return;
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
label_8064C1D0:
    ctx->pc = 0x8064C1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C1D0: lfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1D0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C1D4:
    ctx->pc = 0x8064C1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C1D4: lfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1D4u)) return;
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
label_8064C1D8:
    ctx->pc = 0x8064C1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1D8u)) return;
    // 8064C1D8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C1D8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_8064C1DC:
    ctx->pc = 0x8064C1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C1DC: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1DCu)) return;
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
label_8064C1E0:
    ctx->pc = 0x8064C1E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C1E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C1E0: cmpwi   r0, 0
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

label_8064C1E4:
    ctx->pc = 0x8064C1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1E4u)) return;
    // 8064C1E4: bc    4, 2, 0x8064C1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C1F4;
        }
    }

label_8064C1E8:
    ctx->pc = 0x8064C1E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C1E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C1E8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8064C1EC:
    ctx->pc = 0x8064C1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1ECu)) return;
    // 8064C1EC: bl      0x8050F9E0
    {
            ctx->lr = 0x8064C1F0u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_8064C1F0:
    ctx->pc = 0x8064C1F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C1F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C1F0: b       0x8064C3B8
    {
            goto label_8064C3B8;
    }

label_8064C1F4:
    ctx->pc = 0x8064C1F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C1F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C1F4: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C1F4u)) return;
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
label_8064C1F8:
    ctx->pc = 0x8064C1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1F8u)) return;
    // 8064C1F8: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C1FC:
    ctx->pc = 0x8064C1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064C1FC: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C1FCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
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
label_8064C200:
    ctx->pc = 0x8064C200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064C200: lfs     f1, -13180(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C200u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C204:
    ctx->pc = 0x8064C204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C204u)) return;
    // 8064C204: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C204u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_8064C208:
    ctx->pc = 0x8064C208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064C208: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C208u)) return;
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
label_8064C20C:
    ctx->pc = 0x8064C20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064C20C: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C20Cu)) return;
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
label_8064C210:
    ctx->pc = 0x8064C210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064C210: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C210u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_8064C214:
    ctx->pc = 0x8064C214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C214u)) return;
    // 8064C214: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C214u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_8064C218:
    ctx->pc = 0x8064C218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064C218: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C218u)) return;
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
label_8064C21C:
    ctx->pc = 0x8064C21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C21C: lfs     f2, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C21Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_8064C220:
    ctx->pc = 0x8064C220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C220: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x8064C220u)) return;
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
label_8064C224:
    ctx->pc = 0x8064C224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C224u)) return;
    // 8064C224: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C224u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_8064C228:
    ctx->pc = 0x8064C228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C228: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C228u)) return;
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
label_8064C22C:
    ctx->pc = 0x8064C22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C22C: lwz     r31, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C230:
    ctx->pc = 0x8064C230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C230u)) return;
    // 8064C230: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_8064C234:
    ctx->pc = 0x8064C234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C234u)) return;
    // 8064C234: bl      0x8060F044
    {
            ctx->lr = 0x8064C238u;
            ctx->pc = 0x8060F044u;
            return;
    }

label_8064C238:
    ctx->pc = 0x8064C238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C238: cmpwi   r3, 0
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

label_8064C23C:
    ctx->pc = 0x8064C23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C23Cu)) return;
    // 8064C23C: bc    12, 2, 0x8064C2D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C2D0;
        }
    }

label_8064C240:
    ctx->pc = 0x8064C240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C240: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C244:
    ctx->pc = 0x8064C244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C244u)) return;
    // 8064C244: bl      0x8004B49C
    {
            ctx->lr = 0x8064C248u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_8064C248:
    ctx->pc = 0x8064C248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C248: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_8064C24C:
    ctx->pc = 0x8064C24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C24Cu)) return;
    // 8064C24C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C250:
    ctx->pc = 0x8064C250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C250u)) return;
    // 8064C250: bl      0x8004AA9C
    {
            ctx->lr = 0x8064C254u;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_8064C254:
    ctx->pc = 0x8064C254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C254: lwz     r0, 28(r31)
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
label_8064C258:
    ctx->pc = 0x8064C258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C258u)) return;
    // 8064C258: cmpwi   r0, 0
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

label_8064C25C:
    ctx->pc = 0x8064C25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C25Cu)) return;
    // 8064C25C: bc    12, 2, 0x8064C26C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C26C;
        }
    }

label_8064C260:
    ctx->pc = 0x8064C260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C260: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064C264:
    ctx->pc = 0x8064C264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C264u)) return;
    // 8064C264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C268:
    ctx->pc = 0x8064C268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C268u)) return;
    // 8064C268: bl      0x8004AFDC
    {
            ctx->lr = 0x8064C26Cu;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_8064C26C:
    ctx->pc = 0x8064C26Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C26Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C26C: lwz     r0, 20(r31)
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
label_8064C270:
    ctx->pc = 0x8064C270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C270u)) return;
    // 8064C270: cmpwi   r0, 0
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

label_8064C274:
    ctx->pc = 0x8064C274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C274u)) return;
    // 8064C274: bc    12, 2, 0x8064C284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C284;
        }
    }

label_8064C278:
    ctx->pc = 0x8064C278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C278: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064C27C:
    ctx->pc = 0x8064C27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C27Cu)) return;
    // 8064C27C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C280:
    ctx->pc = 0x8064C280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C280u)) return;
    // 8064C280: bl      0x8004B3E0
    {
            ctx->lr = 0x8064C284u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_8064C284:
    ctx->pc = 0x8064C284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C284: lwz     r0, 24(r31)
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
label_8064C288:
    ctx->pc = 0x8064C288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C288u)) return;
    // 8064C288: cmpwi   r0, 0
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

label_8064C28C:
    ctx->pc = 0x8064C28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C28Cu)) return;
    // 8064C28C: bc    12, 2, 0x8064C29C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C29C;
        }
    }

label_8064C290:
    ctx->pc = 0x8064C290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C290: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064C294:
    ctx->pc = 0x8064C294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C294u)) return;
    // 8064C294: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C298:
    ctx->pc = 0x8064C298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C298u)) return;
    // 8064C298: bl      0x8004AF5C
    {
            ctx->lr = 0x8064C29Cu;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_8064C29C:
    ctx->pc = 0x8064C29Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C29Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8064C29C: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064C2A0:
    ctx->pc = 0x8064C2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2A0u)) return;
    // 8064C2A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C2A4:
    ctx->pc = 0x8064C2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C2A4: lfs     f1, -13232(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064C2A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C2A8:
    ctx->pc = 0x8064C2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2A8u)) return;
    // 8064C2A8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C2A8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_8064C2AC:
    ctx->pc = 0x8064C2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2ACu)) return;
    // 8064C2AC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C2ACu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_8064C2B0:
    ctx->pc = 0x8064C2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2B0u)) return;
    // 8064C2B0: bl      0x8004A8A8
    {
            ctx->lr = 0x8064C2B4u;
            ctx->pc = 0x8004A8A8u;
            return;
    }

label_8064C2B4:
    ctx->pc = 0x8064C2B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C2B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C2B4: lis     r3, -28492
    ctx->gpr[3] = ((u32)(s32)(-28492) << 16);

label_8064C2B8:
    ctx->pc = 0x8064C2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2B8u)) return;
    // 8064C2B8: addi    r3, r3, 13996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13996);

label_8064C2BC:
    ctx->pc = 0x8064C2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2BCu)) return;
    // 8064C2BC: bl      0x8060F594
    {
            ctx->lr = 0x8064C2C0u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_8064C2C0:
    ctx->pc = 0x8064C2C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C2C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C2C0: lwz     r3, 16(r31)
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
label_8064C2C4:
    ctx->pc = 0x8064C2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2C4u)) return;
    // 8064C2C4: bl      0x80055FF4
    {
            ctx->lr = 0x8064C2C8u;
            ctx->pc = 0x80055FF4u;
            return;
    }

label_8064C2C8:
    ctx->pc = 0x8064C2C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C2C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C2C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8064C2CC:
    ctx->pc = 0x8064C2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2CCu)) return;
    // 8064C2CC: bl      0x8004B504
    {
            ctx->lr = 0x8064C2D0u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_8064C2D0:
    ctx->pc = 0x8064C2D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C2D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8064C2D0: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C2D4:
    ctx->pc = 0x8064C2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C2D4: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C2D4u)) return;
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
label_8064C2D8:
    ctx->pc = 0x8064C2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C2D8: lfs     f2, -13172(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C2D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13172);
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
label_8064C2DC:
    ctx->pc = 0x8064C2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2DCu)) return;
    // 8064C2DC: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_8064C2E0:
    ctx->pc = 0x8064C2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C2E0: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C2E0u)) return;
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
label_8064C2E4:
    ctx->pc = 0x8064C2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2E4u)) return;
    // 8064C2E4: bl      0x80401580
    {
            ctx->lr = 0x8064C2E8u;
            ctx->pc = 0x80401580u;
            return;
    }

label_8064C2E8:
    ctx->pc = 0x8064C2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8064C2E8: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C2EC:
    ctx->pc = 0x8064C2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C2EC: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C2ECu)) return;
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
label_8064C2F0:
    ctx->pc = 0x8064C2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C2F0: lfs     f2, -13176(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C2F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13176);
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
label_8064C2F4:
    ctx->pc = 0x8064C2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2F4u)) return;
    // 8064C2F4: fadds   f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C2F4u)) return;
    ppc_fadds(ctx, 5, 2, 1);

label_8064C2F8:
    ctx->pc = 0x8064C2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2F8u)) return;
    // 8064C2F8: fcmpo   cr0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x8064C2F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[5], true);

label_8064C2FC:
    ctx->pc = 0x8064C2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C2FCu)) return;
    // 8064C2FC: bc    4, 1, 0x8064C3B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C3B8;
        }
    }

label_8064C300:
    ctx->pc = 0x8064C300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    // 8064C300: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C304:
    ctx->pc = 0x8064C304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C304u)) return;
    // 8064C304: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x8064C304u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_8064C308:
    ctx->pc = 0x8064C308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8064C308: lfs     f3, -13192(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C308u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13192);
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
label_8064C30C:
    ctx->pc = 0x8064C30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C30Cu)) return;
    // 8064C30C: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C310:
    ctx->pc = 0x8064C310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8064C310: lfs     f4, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C310u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_8064C314:
    ctx->pc = 0x8064C314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C314u)) return;
    // 8064C314: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064C318:
    ctx->pc = 0x8064C318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C318u)) return;
    // 8064C318: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C318u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_8064C31C:
    ctx->pc = 0x8064C31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8064C31C: lfs     f1, -13184(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C31Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C320:
    ctx->pc = 0x8064C320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064C320: lfs     f2, -13168(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064C320u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13168);
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
label_8064C324:
    ctx->pc = 0x8064C324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C324u)) return;
    // 8064C324: fabs    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C324u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) & 0x7FFFFFFFFFFFFFFFull);

label_8064C328:
    ctx->pc = 0x8064C328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8064C328: stfs     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C32C:
    ctx->pc = 0x8064C32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8064C32C: stfs     f5, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C32Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C330:
    ctx->pc = 0x8064C330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C330u)) return;
    // 8064C330: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C330u)) return;
    ppc_frsp(ctx, 0, 0);

label_8064C334:
    ctx->pc = 0x8064C334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064C334: lfs     f4, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C334u)) return;
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
label_8064C338:
    ctx->pc = 0x8064C338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C338u)) return;
    // 8064C338: fmadds f0, f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C338u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8064C33C:
    ctx->pc = 0x8064C33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064C33C: stfs     f4, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C33Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C340:
    ctx->pc = 0x8064C340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8064C340u)) return;
    // 8064C340: fdivs   f31, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C340u)) return;
    ppc_fdivs(ctx, 31, 2, 0);

label_8064C344:
    ctx->pc = 0x8064C344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C344u)) return;
    // 8064C344: bl      0x80510928
    {
            ctx->lr = 0x8064C348u;
            ctx->pc = 0x80510928u;
            return;
    }

label_8064C348:
    ctx->pc = 0x8064C348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C348: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C34C:
    ctx->pc = 0x8064C34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C34Cu)) return;
    // 8064C34C: bl      0x8004B49C
    {
            ctx->lr = 0x8064C350u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_8064C350:
    ctx->pc = 0x8064C350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C350: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_8064C354:
    ctx->pc = 0x8064C354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C354u)) return;
    // 8064C354: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C358:
    ctx->pc = 0x8064C358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C358u)) return;
    // 8064C358: bl      0x8004AA9C
    {
            ctx->lr = 0x8064C35Cu;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_8064C35C:
    ctx->pc = 0x8064C35Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C35Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C35C: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C360:
    ctx->pc = 0x8064C360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C360u)) return;
    // 8064C360: cmpwi   r0, 0
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

label_8064C364:
    ctx->pc = 0x8064C364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C364u)) return;
    // 8064C364: bc    12, 2, 0x8064C374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C374;
        }
    }

label_8064C368:
    ctx->pc = 0x8064C368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C368: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064C36C:
    ctx->pc = 0x8064C36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C36Cu)) return;
    // 8064C36C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C370:
    ctx->pc = 0x8064C370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C370u)) return;
    // 8064C370: bl      0x8004AFDC
    {
            ctx->lr = 0x8064C374u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_8064C374:
    ctx->pc = 0x8064C374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C374: lwz     r0, 52(r1)
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
label_8064C378:
    ctx->pc = 0x8064C378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C378u)) return;
    // 8064C378: cmpwi   r0, 0
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

label_8064C37C:
    ctx->pc = 0x8064C37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C37Cu)) return;
    // 8064C37C: bc    12, 2, 0x8064C38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C38C;
        }
    }

label_8064C380:
    ctx->pc = 0x8064C380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C380: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064C384:
    ctx->pc = 0x8064C384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C384u)) return;
    // 8064C384: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C388:
    ctx->pc = 0x8064C388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C388u)) return;
    // 8064C388: bl      0x8004B3E0
    {
            ctx->lr = 0x8064C38Cu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_8064C38C:
    ctx->pc = 0x8064C38Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C38Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8064C38C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8064C38Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8064C390:
    ctx->pc = 0x8064C390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C390u)) return;
    // 8064C390: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C394:
    ctx->pc = 0x8064C394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C394u)) return;
    // 8064C394: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x8064C394u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_8064C398:
    ctx->pc = 0x8064C398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C398u)) return;
    // 8064C398: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x8064C398u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_8064C39C:
    ctx->pc = 0x8064C39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C39Cu)) return;
    // 8064C39C: bl      0x8004A8A8
    {
            ctx->lr = 0x8064C3A0u;
            ctx->pc = 0x8004A8A8u;
            return;
    }

label_8064C3A0:
    ctx->pc = 0x8064C3A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C3A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064C3A0: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8064C3A0u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8064C3A4:
    ctx->pc = 0x8064C3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3A4u)) return;
    // 8064C3A4: lis     r3, -28662
    ctx->gpr[3] = ((u32)(s32)(-28662) << 16);

label_8064C3A8:
    ctx->pc = 0x8064C3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3A8u)) return;
    // 8064C3A8: addi    r3, r3, -1452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1452);

label_8064C3AC:
    ctx->pc = 0x8064C3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3ACu)) return;
    // 8064C3AC: bl      0x8060A740
    {
            ctx->lr = 0x8064C3B0u;
            ctx->pc = 0x8060A740u;
            return;
    }

label_8064C3B0:
    ctx->pc = 0x8064C3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C3B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8064C3B4:
    ctx->pc = 0x8064C3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3B4u)) return;
    // 8064C3B4: bl      0x8004B504
    {
            ctx->lr = 0x8064C3B8u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_8064C3B8:
    ctx->pc = 0x8064C3B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C3B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064C3B8: psq_l   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8064C3B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8064C3B8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C3BC:
    ctx->pc = 0x8064C3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064C3BC: lwz     r0, 164(r1)
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
label_8064C3C0:
    ctx->pc = 0x8064C3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064C3C0: lfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C3C0u)) return;
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
label_8064C3C4:
    ctx->pc = 0x8064C3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C3C4: lwz     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C3C8:
    ctx->pc = 0x8064C3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C3C8: lwz     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C3CC:
    ctx->pc = 0x8064C3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C3CC: lwz     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C3D0:
    ctx->pc = 0x8064C3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064C3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C3D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C3D4:
    ctx->pc = 0x8064C3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3D4u)) return;
    // 8064C3D4: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_8064C3D8:
    ctx->pc = 0x8064C3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3D8u)) return;
    // 8064C3D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064C3DC:
    ctx->pc = 0x8064C3DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C3DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064C3DC: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064C3E0:
    ctx->pc = 0x8064C3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3E0u)) return;
    // 8064C3E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8064C3E4:
    ctx->pc = 0x8064C3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C3E4: stb     r0, -11912(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11912);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C3E8:
    ctx->pc = 0x8064C3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3E8u)) return;
    // 8064C3E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064C3EC:
    ctx->pc = 0x8064C3ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C3ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064C3EC: stwu     r1, -16(r1)
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
label_8064C3F0:
    ctx->pc = 0x8064C3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064C3F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C3F4:
    ctx->pc = 0x8064C3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3F4u)) return;
    // 8064C3F4: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8064C3F8:
    ctx->pc = 0x8064C3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064C3F8: stw     r0, 20(r1)
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
label_8064C3FC:
    ctx->pc = 0x8064C3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C3FCu)) return;
    // 8064C3FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064C400:
    ctx->pc = 0x8064C400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C400: stw     r31, 12(r1)
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
label_8064C404:
    ctx->pc = 0x8064C404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C404u)) return;
    // 8064C404: addi    r31, r3, -11912
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-11912);

label_8064C408:
    ctx->pc = 0x8064C408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C408: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C40C:
    ctx->pc = 0x8064C40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C40C: stb     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C410:
    ctx->pc = 0x8064C410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C410u)) return;
    // 8064C410: cmplwi  r3, 0x0000
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

label_8064C414:
    ctx->pc = 0x8064C414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C414: stb     r0, 0(r31)
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
label_8064C418:
    ctx->pc = 0x8064C418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C418u)) return;
    // 8064C418: bc    12, 2, 0x8064C428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C428;
        }
    }

label_8064C41C:
    ctx->pc = 0x8064C41Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C41Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C41C: bl      0x8004E730
    {
            ctx->lr = 0x8064C420u;
            ctx->pc = 0x8004E730u;
            return;
    }

label_8064C420:
    ctx->pc = 0x8064C420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C420: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064C424:
    ctx->pc = 0x8064C424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C424: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C428:
    ctx->pc = 0x8064C428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C428: lwz     r3, 8(r31)
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
label_8064C42C:
    ctx->pc = 0x8064C42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C42Cu)) return;
    // 8064C42C: cmplwi  r3, 0x0000
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

label_8064C430:
    ctx->pc = 0x8064C430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C430u)) return;
    // 8064C430: bc    12, 2, 0x8064C440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C440;
        }
    }

label_8064C434:
    ctx->pc = 0x8064C434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C434: bl      0x8004E730
    {
            ctx->lr = 0x8064C438u;
            ctx->pc = 0x8004E730u;
            return;
    }

label_8064C438:
    ctx->pc = 0x8064C438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C438: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064C43C:
    ctx->pc = 0x8064C43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C43Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C43C: stw     r0, 8(r31)
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
label_8064C440:
    ctx->pc = 0x8064C440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C440: lwz     r0, 20(r1)
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
label_8064C444:
    ctx->pc = 0x8064C444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C444: lwz     r31, 12(r1)
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
label_8064C448:
    ctx->pc = 0x8064C448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064C448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C448: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C44C:
    ctx->pc = 0x8064C44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C44Cu)) return;
    // 8064C44C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8064C450:
    ctx->pc = 0x8064C450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C450u)) return;
    // 8064C450: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064C454:
    ctx->pc = 0x8064C454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064C454: stwu     r1, -64(r1)
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
label_8064C458:
    ctx->pc = 0x8064C458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064C458: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C45C:
    ctx->pc = 0x8064C45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C45Cu)) return;
    // 8064C45C: lis     r5, -28491
    ctx->gpr[5] = ((u32)(s32)(-28491) << 16);

label_8064C460:
    ctx->pc = 0x8064C460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C460u)) return;
    // 8064C460: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_8064C464:
    ctx->pc = 0x8064C464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C464: stw     r0, 68(r1)
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
label_8064C468:
    ctx->pc = 0x8064C468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x8064C468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C468: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C46C:
    ctx->pc = 0x8064C46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C46Cu)) return;
    // 8064C46C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8064C470:
    ctx->pc = 0x8064C470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C470u)) return;
    // 8064C470: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C474:
    ctx->pc = 0x8064C474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C474u)) return;
    // 8064C474: addi    r28, r5, -12712
    ctx->gpr[28] = ctx->gpr[5] + (u32)(s32)(-12712);

label_8064C478:
    ctx->pc = 0x8064C478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C478u)) return;
    // 8064C478: addi    r29, r4, -11912
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(-11912);

label_8064C47C:
    ctx->pc = 0x8064C47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C47Cu)) return;
    // 8064C47C: bl      0x804C90A0
    {
            ctx->lr = 0x8064C480u;
            ctx->pc = 0x804C90A0u;
            return;
    }

label_8064C480:
    ctx->pc = 0x8064C480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C480: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8064C484:
    ctx->pc = 0x8064C484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C484u)) return;
    // 8064C484: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C488:
    ctx->pc = 0x8064C488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C488u)) return;
    // 8064C488: bl      0x804C9040
    {
            ctx->lr = 0x8064C48Cu;
            ctx->pc = 0x804C9040u;
            return;
    }

label_8064C48C:
    ctx->pc = 0x8064C48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C48C: cmplwi  r30, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8064C490:
    ctx->pc = 0x8064C490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C490u)) return;
    // 8064C490: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8064C494:
    ctx->pc = 0x8064C494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C494u)) return;
    // 8064C494: bc    12, 2, 0x8064C4AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C4AC;
        }
    }

label_8064C498:
    ctx->pc = 0x8064C498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C498: cmplwi  r31, 0x0000
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

label_8064C49C:
    ctx->pc = 0x8064C49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C49Cu)) return;
    // 8064C49C: bc    12, 2, 0x8064C4AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C4AC;
        }
    }

label_8064C4A0:
    ctx->pc = 0x8064C4A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C4A0: lbz     r0, 0(r29)
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
label_8064C4A4:
    ctx->pc = 0x8064C4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4A4u)) return;
    // 8064C4A4: cmplwi  r0, 0x0000
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

label_8064C4A8:
    ctx->pc = 0x8064C4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4A8u)) return;
    // 8064C4A8: bc    12, 2, 0x8064C4B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C4B8;
        }
    }

label_8064C4AC:
    ctx->pc = 0x8064C4ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C4AC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8064C4B0:
    ctx->pc = 0x8064C4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4B0u)) return;
    // 8064C4B0: bl      0x8050F9E0
    {
            ctx->lr = 0x8064C4B4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_8064C4B4:
    ctx->pc = 0x8064C4B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C4B4: b       0x8064C7F8
    {
            goto label_8064C7F8;
    }

label_8064C4B8:
    ctx->pc = 0x8064C4B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C4B8: lwz     r27, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C4BC:
    ctx->pc = 0x8064C4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C4BC: lbz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C4C0:
    ctx->pc = 0x8064C4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4C0u)) return;
    // 8064C4C0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8064C4C4:
    ctx->pc = 0x8064C4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4C4u)) return;
    // 8064C4C4: cmpwi   r0, 2
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

label_8064C4C8:
    ctx->pc = 0x8064C4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4C8u)) return;
    // 8064C4C8: bc    12, 2, 0x8064C7D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C7D0;
        }
    }

label_8064C4CC:
    ctx->pc = 0x8064C4CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C4CC: bc    4, 0, 0x8064C7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C7F8;
        }
    }

label_8064C4D0:
    ctx->pc = 0x8064C4D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C4D0: cmpwi   r0, 0
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

label_8064C4D4:
    ctx->pc = 0x8064C4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4D4u)) return;
    // 8064C4D4: bc    12, 2, 0x8064C4E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C4E4;
        }
    }

label_8064C4D8:
    ctx->pc = 0x8064C4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C4D8: bc    4, 0, 0x8064C5C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C5C0;
        }
    }

label_8064C4DC:
    ctx->pc = 0x8064C4DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C4DC: b       0x8064C7F8
    {
            goto label_8064C7F8;
    }

label_8064C4E0:
    ctx->pc = 0x8064C4E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C4E0: b       0x8064C7F8
    {
            goto label_8064C7F8;
    }

label_8064C4E4:
    ctx->pc = 0x8064C4E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 28u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C4E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 28u : 1u;
    // 8064C4E4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8064C4E8:
    ctx->pc = 0x8064C4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4E8u)) return;
    // 8064C4E8: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_8064C4EC:
    ctx->pc = 0x8064C4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064C4EC: stb     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C4F0:
    ctx->pc = 0x8064C4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4F0u)) return;
    // 8064C4F0: addi    r0, r28, 492
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(492);

label_8064C4F4:
    ctx->pc = 0x8064C4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4F4u)) return;
    // 8064C4F4: addi    r5, r28, 444
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(444);

label_8064C4F8:
    ctx->pc = 0x8064C4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4F8u)) return;
    // 8064C4F8: addi    r3, r3, 30464
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30464);

label_8064C4FC:
    ctx->pc = 0x8064C4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8064C4FC: lwz     r4, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C500:
    ctx->pc = 0x8064C500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8064C500u)) return;
    // 8064C500: mulli   r4, r4, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_8064C504:
    ctx->pc = 0x8064C504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C504u)) return;
    // 8064C504: add   r6, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8064C508:
    ctx->pc = 0x8064C508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C508: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C50C:
    ctx->pc = 0x8064C50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064C50C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C510:
    ctx->pc = 0x8064C510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064C510: stw     r4, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C514:
    ctx->pc = 0x8064C514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064C514: stw     r0, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C518:
    ctx->pc = 0x8064C518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064C518: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C51C:
    ctx->pc = 0x8064C51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C51Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064C51C: stw     r0, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C520:
    ctx->pc = 0x8064C520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064C520: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C524:
    ctx->pc = 0x8064C524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C524u)) return;
    // 8064C524: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_8064C528:
    ctx->pc = 0x8064C528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C528u)) return;
    // 8064C528: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8064C52C:
    ctx->pc = 0x8064C52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064C52C: lhz     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C530:
    ctx->pc = 0x8064C530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C530: sth     r0, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C534:
    ctx->pc = 0x8064C534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C534: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C538:
    ctx->pc = 0x8064C538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C538u)) return;
    // 8064C538: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_8064C53C:
    ctx->pc = 0x8064C53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C53Cu)) return;
    // 8064C53C: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8064C540:
    ctx->pc = 0x8064C540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C540: lwz     r0, 4(r4)
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
label_8064C544:
    ctx->pc = 0x8064C544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C544: stw     r0, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C548:
    ctx->pc = 0x8064C548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C548u)) return;
    // 8064C548: bl      0x8004E6D8
    {
            ctx->lr = 0x8064C54Cu;
            ctx->pc = 0x8004E6D8u;
            return;
    }

label_8064C54C:
    ctx->pc = 0x8064C54Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C54Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C54C: stw     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C550:
    ctx->pc = 0x8064C550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C550: lhz     r3, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C554:
    ctx->pc = 0x8064C554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C554u)) return;
    // 8064C554: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_8064C558:
    ctx->pc = 0x8064C558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8064C558u)) return;
    // 8064C558: mulli   r3, r0, 240
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)240);

label_8064C55C:
    ctx->pc = 0x8064C55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C55Cu)) return;
    // 8064C55C: bl      0x8004E6D8
    {
            ctx->lr = 0x8064C560u;
            ctx->pc = 0x8004E6D8u;
            return;
    }

label_8064C560:
    ctx->pc = 0x8064C560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C560: stw     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C564:
    ctx->pc = 0x8064C564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C564u)) return;
    // 8064C564: li      r4, 1500
    ctx->gpr[4] = (u32)(s32)(1500);

label_8064C568:
    ctx->pc = 0x8064C568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C568: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C56C:
    ctx->pc = 0x8064C56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C56Cu)) return;
    // 8064C56C: bl      0x80054E08
    {
            ctx->lr = 0x8064C570u;
            ctx->pc = 0x80054E08u;
            return;
    }

label_8064C570:
    ctx->pc = 0x8064C570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C570: lwz     r0, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C574:
    ctx->pc = 0x8064C574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C574u)) return;
    // 8064C574: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C578:
    ctx->pc = 0x8064C578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064C578: lfs     f0, -13184(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C578u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13184);
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
label_8064C57C:
    ctx->pc = 0x8064C57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C57Cu)) return;
    // 8064C57C: addi    r6, r28, 564
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(564);

label_8064C580:
    ctx->pc = 0x8064C580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064C580: stw     r0, 12(r1)
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
label_8064C584:
    ctx->pc = 0x8064C584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C584u)) return;
    // 8064C584: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8064C588:
    ctx->pc = 0x8064C588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064C588: lwz     r5, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C58C:
    ctx->pc = 0x8064C58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C58Cu)) return;
    // 8064C58C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064C590:
    ctx->pc = 0x8064C590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064C590: lhz     r7, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C594:
    ctx->pc = 0x8064C594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C594u)) return;
    // 8064C594: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8064C598:
    ctx->pc = 0x8064C598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C598: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C59C:
    ctx->pc = 0x8064C59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C59Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C59C: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C5A0:
    ctx->pc = 0x8064C5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C5A0: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C5A0u)) return;
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
label_8064C5A4:
    ctx->pc = 0x8064C5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C5A4: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C5A8:
    ctx->pc = 0x8064C5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C5A8: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C5AC:
    ctx->pc = 0x8064C5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C5AC: stw     r0, 36(r1)
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
label_8064C5B0:
    ctx->pc = 0x8064C5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5B0u)) return;
    // 8064C5B0: bl      0x8050BFD4
    {
            ctx->lr = 0x8064C5B4u;
            ctx->pc = 0x8050BFD4u;
            return;
    }

label_8064C5B4:
    ctx->pc = 0x8064C5B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C5B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C5B4: addi    r0, r3, -21
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21);

label_8064C5B8:
    ctx->pc = 0x8064C5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C5B8: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C5BC:
    ctx->pc = 0x8064C5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5BCu)) return;
    // 8064C5BC: b       0x8064C7F8
    {
            goto label_8064C7F8;
    }

label_8064C5C0:
    ctx->pc = 0x8064C5C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C5C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C5C0: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C5C4:
    ctx->pc = 0x8064C5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5C4u)) return;
    // 8064C5C4: addi    r3, r27, 32
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(32);

label_8064C5C8:
    ctx->pc = 0x8064C5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5C8u)) return;
    // 8064C5C8: addi    r4, r4, 32
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32);

label_8064C5CC:
    ctx->pc = 0x8064C5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5CCu)) return;
    // 8064C5CC: bl      0x8004ED20
    {
            ctx->lr = 0x8064C5D0u;
            ctx->pc = 0x8004ED20u;
            return;
    }

label_8064C5D0:
    ctx->pc = 0x8064C5D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C5D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064C5D0: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C5D4:
    ctx->pc = 0x8064C5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C5D4: lfs     f0, -13164(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C5D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13164);
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
label_8064C5D8:
    ctx->pc = 0x8064C5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5D8u)) return;
    // 8064C5D8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C5D8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8064C5DC:
    ctx->pc = 0x8064C5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5DCu)) return;
    // 8064C5DC: bc    4, 0, 0x8064C7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C7F8;
        }
    }

label_8064C5E0:
    ctx->pc = 0x8064C5E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C5E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C5E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C5E4:
    ctx->pc = 0x8064C5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5E4u)) return;
    // 8064C5E4: bl      0x804C90A0
    {
            ctx->lr = 0x8064C5E8u;
            ctx->pc = 0x804C90A0u;
            return;
    }

label_8064C5E8:
    ctx->pc = 0x8064C5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C5E8: cmplwi  r3, 0x0000
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

label_8064C5EC:
    ctx->pc = 0x8064C5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5ECu)) return;
    // 8064C5EC: bc    4, 2, 0x8064C5F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C5F8;
        }
    }

label_8064C5F0:
    ctx->pc = 0x8064C5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C5F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064C5F4:
    ctx->pc = 0x8064C5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5F4u)) return;
    // 8064C5F4: b       0x8064C618
    {
            goto label_8064C618;
    }

label_8064C5F8:
    ctx->pc = 0x8064C5F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C5F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C5F8: lwz     r3, 32(r3)
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
label_8064C5FC:
    ctx->pc = 0x8064C5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C5FC: lwz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C600:
    ctx->pc = 0x8064C600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C600: lbz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C604:
    ctx->pc = 0x8064C604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C604u)) return;
    // 8064C604: cmplwi  r0, 0x0000
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

label_8064C608:
    ctx->pc = 0x8064C608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C608u)) return;
    // 8064C608: bc    4, 2, 0x8064C614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C614;
        }
    }

label_8064C60C:
    ctx->pc = 0x8064C60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C60C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064C610:
    ctx->pc = 0x8064C610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C610u)) return;
    // 8064C610: b       0x8064C618
    {
            goto label_8064C618;
    }

label_8064C614:
    ctx->pc = 0x8064C614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C614: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8064C618:
    ctx->pc = 0x8064C618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C618: cmpwi   r0, 0
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

label_8064C61C:
    ctx->pc = 0x8064C61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C61Cu)) return;
    // 8064C61C: bc    4, 2, 0x8064C7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C7F8;
        }
    }

label_8064C620:
    ctx->pc = 0x8064C620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8064C620: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8064C624:
    ctx->pc = 0x8064C624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C624u)) return;
    // 8064C624: lis     r3, -32667
    ctx->gpr[3] = ((u32)(s32)(-32667) << 16);

label_8064C628:
    ctx->pc = 0x8064C628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C628: stb     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C62C:
    ctx->pc = 0x8064C62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C62Cu)) return;
    // 8064C62C: addi    r5, r3, -17308
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-17308);

label_8064C630:
    ctx->pc = 0x8064C630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C630u)) return;
    // 8064C630: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_8064C634:
    ctx->pc = 0x8064C634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C634u)) return;
    // 8064C634: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8064C638:
    ctx->pc = 0x8064C638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C638u)) return;
    // 8064C638: bl      0x8050FD60
    {
            ctx->lr = 0x8064C63Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_8064C63C:
    ctx->pc = 0x8064C63Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C63Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C63C: cmplwi  r3, 0x0000
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

label_8064C640:
    ctx->pc = 0x8064C640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C640u)) return;
    // 8064C640: bc    12, 2, 0x8064C65C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C65C;
        }
    }

label_8064C644:
    ctx->pc = 0x8064C644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C644: lwz     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C648:
    ctx->pc = 0x8064C648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C648u)) return;
    // 8064C648: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_8064C64C:
    ctx->pc = 0x8064C64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C64Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C64C: lwz     r5, 32(r3)
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
label_8064C650:
    ctx->pc = 0x8064C650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C650u)) return;
    // 8064C650: addi    r0, r4, -17764
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17764);

label_8064C654:
    ctx->pc = 0x8064C654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C654: stw     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C658:
    ctx->pc = 0x8064C658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C658: stw     r0, 20(r3)
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
label_8064C65C:
    ctx->pc = 0x8064C65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C65C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C660:
    ctx->pc = 0x8064C660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C660u)) return;
    // 8064C660: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_8064C664:
    ctx->pc = 0x8064C664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C664u)) return;
    // 8064C664: bl      0x804CA6BC
    {
            ctx->lr = 0x8064C668u;
            ctx->pc = 0x804CA6BCu;
            return;
    }

label_8064C668:
    ctx->pc = 0x8064C668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 38u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 38u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 8064C668: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C66C:
    ctx->pc = 0x8064C66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C66Cu)) return;
    // 8064C66C: lis     r5, -28643
    ctx->gpr[5] = ((u32)(s32)(-28643) << 16);

label_8064C670:
    ctx->pc = 0x8064C670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C670u)) return;
    // 8064C670: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C674:
    ctx->pc = 0x8064C674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C674u)) return;
    // 8064C674: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064C678:
    ctx->pc = 0x8064C678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C678u)) return;
    // 8064C678: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_8064C67C:
    ctx->pc = 0x8064C67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C67Cu)) return;
    // 8064C67C: addi    r6, r28, 444
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(444);

label_8064C680:
    ctx->pc = 0x8064C680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8064C680: lhzx    r6, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C684:
    ctx->pc = 0x8064C684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C684u)) return;
    // 8064C684: addi    r5, r5, -29804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29804);

label_8064C688:
    ctx->pc = 0x8064C688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8064C688: lwz     r7, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C68C:
    ctx->pc = 0x8064C68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C68Cu)) return;
    // 8064C68C: addi    r0, r6, 20
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(20);

label_8064C690:
    ctx->pc = 0x8064C690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8064C690: lfs     f3, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C690u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064C694:
    ctx->pc = 0x8064C694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C694u)) return;
    // 8064C694: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8064C698:
    ctx->pc = 0x8064C698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8064C698: lfs     f5, -13232(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064C698u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13232);
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
label_8064C69C:
    ctx->pc = 0x8064C69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8064C69Cu)) return;
    // 8064C69C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8064C6A0:
    ctx->pc = 0x8064C6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8064C6A0: lfsx    f8, r7, r0
    if (!ppc_fp_available_inline(ctx, 0x8064C6A0u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
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
label_8064C6A4:
    ctx->pc = 0x8064C6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6A4u)) return;
    // 8064C6A4: add   r3, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8064C6A8:
    ctx->pc = 0x8064C6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8064C6A8: stfs     f8, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x8064C6A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C6AC:
    ctx->pc = 0x8064C6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8064C6AC: lfs     f7, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C6ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_8064C6B0:
    ctx->pc = 0x8064C6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064C6B0: stfs     f7, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x8064C6B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C6B4:
    ctx->pc = 0x8064C6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C6B4: lfs     f6, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C6B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
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
label_8064C6B8:
    ctx->pc = 0x8064C6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8064C6B8: stfs     f6, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x8064C6B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C6BC:
    ctx->pc = 0x8064C6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8064C6BC: lwz     r3, 32(r30)
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
label_8064C6C0:
    ctx->pc = 0x8064C6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8064C6C0: lfs     f1, 272(r31)
    if (!ppc_fp_available_inline(ctx, 0x8064C6C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C6C4:
    ctx->pc = 0x8064C6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064C6C4: lfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C6C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_8064C6C8:
    ctx->pc = 0x8064C6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8064C6C8: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C6C8u)) return;
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
label_8064C6CC:
    ctx->pc = 0x8064C6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6CCu)) return;
    // 8064C6CC: fadds   f4, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C6CCu)) return;
    ppc_fadds(ctx, 4, 2, 1);

label_8064C6D0:
    ctx->pc = 0x8064C6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8064C6D0: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C6D0u)) return;
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
label_8064C6D4:
    ctx->pc = 0x8064C6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6D4u)) return;
    // 8064C6D4: fsubs   f9, f8, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C6D4u)) return;
    ppc_fsubs(ctx, 9, 8, 0);

label_8064C6D8:
    ctx->pc = 0x8064C6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6D8u)) return;
    // 8064C6D8: fsubs   f2, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C6D8u)) return;
    ppc_fsubs(ctx, 2, 6, 1);

label_8064C6DC:
    ctx->pc = 0x8064C6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6DCu)) return;
    // 8064C6DC: fadds   f8, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C6DCu)) return;
    ppc_fadds(ctx, 8, 5, 4);

label_8064C6E0:
    ctx->pc = 0x8064C6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6E0u)) return;
    // 8064C6E0: fsubs   f10, f7, f8
    if (!ppc_fp_available_inline(ctx, 0x8064C6E0u)) return;
    ppc_fsubs(ctx, 10, 7, 8);

label_8064C6E4:
    ctx->pc = 0x8064C6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6E4u)) return;
    // 8064C6E4: fmuls   f4, f10, f10
    if (!ppc_fp_available_inline(ctx, 0x8064C6E4u)) return;
    ppc_fmuls(ctx, 4, 10, 10);

label_8064C6E8:
    ctx->pc = 0x8064C6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6E8u)) return;
    // 8064C6E8: fmadds f4, f9, f9, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C6E8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[9], ctx->fpr[9], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[4] = ctx->ps1[4] = result;
    }

label_8064C6EC:
    ctx->pc = 0x8064C6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6ECu)) return;
    // 8064C6EC: fmadds f7, f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C6ECu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[2], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[7] = ctx->ps1[7] = result;
    }

label_8064C6F0:
    ctx->pc = 0x8064C6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6F0u)) return;
    // 8064C6F0: fcmpo   cr0, f7, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C6F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[7], ctx->fpr[3], true);

label_8064C6F4:
    ctx->pc = 0x8064C6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6F4u)) return;
    // 8064C6F4: bc    4, 1, 0x8064C74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C74C;
        }
    }

label_8064C6F8:
    ctx->pc = 0x8064C6F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C6F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8064C6F8: frsqrte    f4, f7
    if (!ppc_fp_available_inline(ctx, 0x8064C6F8u)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[7], &result)) ctx->fpr[4] = result; }

label_8064C6FC:
    ctx->pc = 0x8064C6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C6FCu)) return;
    // 8064C6FC: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_8064C700:
    ctx->pc = 0x8064C700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C700u)) return;
    // 8064C700: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C704:
    ctx->pc = 0x8064C704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8064C704: lfd     f6, -13208(r4)
    if (!ppc_fp_available_inline(ctx, 0x8064C704u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-13208);
        ctx->fpr[6] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C708:
    ctx->pc = 0x8064C708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8064C708: lfd     f5, -13200(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C708u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13200);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C70C:
    ctx->pc = 0x8064C70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C70Cu)) return;
    // 8064C70C: fmul   f3, f4, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C70Cu)) return;
    ppc_fmul(ctx, 3, 4, 4);

label_8064C710:
    ctx->pc = 0x8064C710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C710u)) return;
    // 8064C710: fmul   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C710u)) return;
    ppc_fmul(ctx, 4, 6, 4);

label_8064C714:
    ctx->pc = 0x8064C714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C714u)) return;
    // 8064C714: fnmsub f3, f7, f3, f5
    if (!ppc_fp_available_inline(ctx, 0x8064C714u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[3], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[3] = result;
    }

label_8064C718:
    ctx->pc = 0x8064C718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C718u)) return;
    // 8064C718: fmul   f4, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C718u)) return;
    ppc_fmul(ctx, 4, 4, 3);

label_8064C71C:
    ctx->pc = 0x8064C71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C71Cu)) return;
    // 8064C71C: fmul   f3, f4, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C71Cu)) return;
    ppc_fmul(ctx, 3, 4, 4);

label_8064C720:
    ctx->pc = 0x8064C720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C720u)) return;
    // 8064C720: fmul   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C720u)) return;
    ppc_fmul(ctx, 4, 6, 4);

label_8064C724:
    ctx->pc = 0x8064C724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C724u)) return;
    // 8064C724: fnmsub f3, f7, f3, f5
    if (!ppc_fp_available_inline(ctx, 0x8064C724u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[3], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[3] = result;
    }

label_8064C728:
    ctx->pc = 0x8064C728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C728u)) return;
    // 8064C728: fmul   f4, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C728u)) return;
    ppc_fmul(ctx, 4, 4, 3);

label_8064C72C:
    ctx->pc = 0x8064C72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C72Cu)) return;
    // 8064C72C: fmul   f3, f4, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C72Cu)) return;
    ppc_fmul(ctx, 3, 4, 4);

label_8064C730:
    ctx->pc = 0x8064C730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C730u)) return;
    // 8064C730: fmul   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8064C730u)) return;
    ppc_fmul(ctx, 4, 6, 4);

label_8064C734:
    ctx->pc = 0x8064C734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C734u)) return;
    // 8064C734: fnmsub f3, f7, f3, f5
    if (!ppc_fp_available_inline(ctx, 0x8064C734u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[3], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[3] = result;
    }

label_8064C738:
    ctx->pc = 0x8064C738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C738u)) return;
    // 8064C738: fmul   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C738u)) return;
    ppc_fmul(ctx, 3, 4, 3);

label_8064C73C:
    ctx->pc = 0x8064C73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C73Cu)) return;
    // 8064C73C: fmul   f3, f7, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C73Cu)) return;
    ppc_fmul(ctx, 3, 7, 3);

label_8064C740:
    ctx->pc = 0x8064C740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C740u)) return;
    // 8064C740: frsp    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C740u)) return;
    ppc_frsp(ctx, 3, 3);

label_8064C744:
    ctx->pc = 0x8064C744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C744: stfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C748:
    ctx->pc = 0x8064C748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C748: lfs     f7, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8064C748u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_8064C74C:
    ctx->pc = 0x8064C74Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C74Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064C74C: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C750:
    ctx->pc = 0x8064C750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C750: lfs     f3, -13216(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C750u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13216);
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
label_8064C754:
    ctx->pc = 0x8064C754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C754u)) return;
    // 8064C754: fcmpu   cr0, f3, f7
    if (!ppc_fp_available_inline(ctx, 0x8064C754u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[7], false);

label_8064C758:
    ctx->pc = 0x8064C758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C758u)) return;
    // 8064C758: bc    4, 2, 0x8064C76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C76C;
        }
    }

label_8064C75C:
    ctx->pc = 0x8064C75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8064C75C: fmr    f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C75Cu)) return;
    ctx->fpr[2] = ctx->fpr[3];

label_8064C760:
    ctx->pc = 0x8064C760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C760u)) return;
    // 8064C760: fmr    f10, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C760u)) return;
    ctx->fpr[10] = ctx->fpr[3];

label_8064C764:
    ctx->pc = 0x8064C764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C764u)) return;
    // 8064C764: fmr    f9, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C764u)) return;
    ctx->fpr[9] = ctx->fpr[3];

label_8064C768:
    ctx->pc = 0x8064C768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C768u)) return;
    // 8064C768: b       0x8064C784
    {
            goto label_8064C784;
    }

label_8064C76C:
    ctx->pc = 0x8064C76Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C76Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    // 8064C76C: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C770:
    ctx->pc = 0x8064C770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8064C770: lfs     f3, -13192(r3)
    if (!ppc_fp_available_inline(ctx, 0x8064C770u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-13192);
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
label_8064C774:
    ctx->pc = 0x8064C774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8064C774u)) return;
    // 8064C774: fdivs   f3, f3, f7
    if (!ppc_fp_available_inline(ctx, 0x8064C774u)) return;
    ppc_fdivs(ctx, 3, 3, 7);

label_8064C778:
    ctx->pc = 0x8064C778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C778u)) return;
    // 8064C778: fmuls   f9, f9, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C778u)) return;
    ppc_fmuls(ctx, 9, 9, 3);

label_8064C77C:
    ctx->pc = 0x8064C77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C77Cu)) return;
    // 8064C77C: fmuls   f10, f10, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C77Cu)) return;
    ppc_fmuls(ctx, 10, 10, 3);

label_8064C780:
    ctx->pc = 0x8064C780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C780u)) return;
    // 8064C780: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8064C780u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8064C784:
    ctx->pc = 0x8064C784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 8064C784: lis     r3, -28546
    ctx->gpr[3] = ((u32)(s32)(-28546) << 16);

label_8064C788:
    ctx->pc = 0x8064C788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C788u)) return;
    // 8064C788: lis     r4, -28643
    ctx->gpr[4] = ((u32)(s32)(-28643) << 16);

label_8064C78C:
    ctx->pc = 0x8064C78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C78Cu)) return;
    // 8064C78C: addi    r5, r3, -13160
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-13160);

label_8064C790:
    ctx->pc = 0x8064C790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8064C790: lfs     f5, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8064C790u)) return;
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
label_8064C794:
    ctx->pc = 0x8064C794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C794u)) return;
    // 8064C794: addi    r6, r4, -29804
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-29804);

label_8064C798:
    ctx->pc = 0x8064C798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C798u)) return;
    // 8064C798: lis     r3, -32701
    ctx->gpr[3] = ((u32)(s32)(-32701) << 16);

label_8064C79C:
    ctx->pc = 0x8064C79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C79Cu)) return;
    // 8064C79C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8064C7A0:
    ctx->pc = 0x8064C7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7A0u)) return;
    // 8064C7A0: fnmsubs f4, f5, f9, f0
    if (!ppc_fp_available_inline(ctx, 0x8064C7A0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[9], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[4] = ctx->ps1[4] = result;
    }

label_8064C7A4:
    ctx->pc = 0x8064C7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7A4u)) return;
    // 8064C7A4: addi    r3, r3, 2784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2784);

label_8064C7A8:
    ctx->pc = 0x8064C7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7A8u)) return;
    // 8064C7A8: fnmsubs f3, f5, f10, f8
    if (!ppc_fp_available_inline(ctx, 0x8064C7A8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[10], ctx->fpr[8], true, true, true, &result))
            ctx->fpr[3] = ctx->ps1[3] = result;
    }

label_8064C7AC:
    ctx->pc = 0x8064C7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7ACu)) return;
    // 8064C7AC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8064C7B0:
    ctx->pc = 0x8064C7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7B0u)) return;
    // 8064C7B0: fnmsubs f0, f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8064C7B0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[2], ctx->fpr[1], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8064C7B4:
    ctx->pc = 0x8064C7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C7B4: stfs     f4, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x8064C7B4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C7B8:
    ctx->pc = 0x8064C7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C7B8: stfs     f3, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x8064C7B8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C7BC:
    ctx->pc = 0x8064C7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C7BC: stfs     f0, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x8064C7BCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C7C0:
    ctx->pc = 0x8064C7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7C0u)) return;
    // 8064C7C0: bl      0x80420DF0
    {
            ctx->lr = 0x8064C7C4u;
            ctx->pc = 0x80420DF0u;
            return;
    }

label_8064C7C4:
    ctx->pc = 0x8064C7C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C7C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8064C7C4: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_8064C7C8:
    ctx->pc = 0x8064C7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C7C8: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C7CC:
    ctx->pc = 0x8064C7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7CCu)) return;
    // 8064C7CC: b       0x8064C7F8
    {
            goto label_8064C7F8;
    }

label_8064C7D0:
    ctx->pc = 0x8064C7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8064C7D0: lwz     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C7D4:
    ctx->pc = 0x8064C7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7D4u)) return;
    // 8064C7D4: addic.  r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8064C7D8:
    ctx->pc = 0x8064C7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C7D8: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C7DC:
    ctx->pc = 0x8064C7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7DCu)) return;
    // 8064C7DC: bc    4, 2, 0x8064C7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C7F8;
        }
    }

label_8064C7E0:
    ctx->pc = 0x8064C7E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C7E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8064C7E0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_8064C7E4:
    ctx->pc = 0x8064C7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7E4u)) return;
    // 8064C7E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8064C7E8:
    ctx->pc = 0x8064C7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C7E8: stb     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C7EC:
    ctx->pc = 0x8064C7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7ECu)) return;
    // 8064C7EC: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_8064C7F0:
    ctx->pc = 0x8064C7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7F0u)) return;
    // 8064C7F0: bl      0x804CA6BC
    {
            ctx->lr = 0x8064C7F4u;
            ctx->pc = 0x804CA6BCu;
            return;
    }

label_8064C7F4:
    ctx->pc = 0x8064C7F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C7F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8064C7F4: bl      0x80420C0C
    {
            ctx->lr = 0x8064C7F8u;
            ctx->pc = 0x80420C0Cu;
            return;
    }

label_8064C7F8:
    ctx->pc = 0x8064C7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C7F8: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C7FC:
    ctx->pc = 0x8064C7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C7FC: lwz     r0, 68(r1)
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
label_8064C800:
    ctx->pc = 0x8064C800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064C800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C800: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C804:
    ctx->pc = 0x8064C804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C804u)) return;
    // 8064C804: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8064C808:
    ctx->pc = 0x8064C808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C808u)) return;
    // 8064C808: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

label_8064C80C:
    ctx->pc = 0x8064C80Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C80Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8064C80C: stwu     r1, -16(r1)
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
label_8064C810:
    ctx->pc = 0x8064C810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8064C810: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C814:
    ctx->pc = 0x8064C814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C814u)) return;
    // 8064C814: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_8064C818:
    ctx->pc = 0x8064C818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C818: stw     r0, 20(r1)
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
label_8064C81C:
    ctx->pc = 0x8064C81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C81C: stw     r31, 12(r1)
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
label_8064C820:
    ctx->pc = 0x8064C820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C820u)) return;
    // 8064C820: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8064C824:
    ctx->pc = 0x8064C824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C824: lbz     r0, -11911(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11911);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C828:
    ctx->pc = 0x8064C828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C828u)) return;
    // 8064C828: cmplwi  r0, 0x0000
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

label_8064C82C:
    ctx->pc = 0x8064C82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C82Cu)) return;
    // 8064C82C: bc    4, 2, 0x8064C878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8064C878;
        }
    }

label_8064C830:
    ctx->pc = 0x8064C830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8064C830: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_8064C834:
    ctx->pc = 0x8064C834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C834u)) return;
    // 8064C834: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8064C838:
    ctx->pc = 0x8064C838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C838u)) return;
    // 8064C838: addi    r5, r4, -15276
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-15276);

label_8064C83C:
    ctx->pc = 0x8064C83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C83Cu)) return;
    // 8064C83C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8064C840:
    ctx->pc = 0x8064C840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C840u)) return;
    // 8064C840: bl      0x8050FD60
    {
            ctx->lr = 0x8064C844u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_8064C844:
    ctx->pc = 0x8064C844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8064C844: cmplwi  r3, 0x0000
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

label_8064C848:
    ctx->pc = 0x8064C848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C848u)) return;
    // 8064C848: bc    12, 2, 0x8064C878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8064C878;
        }
    }

label_8064C84C:
    ctx->pc = 0x8064C84Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C84Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8064C84C: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C850:
    ctx->pc = 0x8064C850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C850u)) return;
    // 8064C850: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_8064C854:
    ctx->pc = 0x8064C854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C854u)) return;
    // 8064C854: addi    r0, r6, -15380
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-15380);

label_8064C858:
    ctx->pc = 0x8064C858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C858u)) return;
    // 8064C858: lis     r5, -28491
    ctx->gpr[5] = ((u32)(s32)(-28491) << 16);

label_8064C85C:
    ctx->pc = 0x8064C85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8064C85C: stw     r31, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C860:
    ctx->pc = 0x8064C860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C860u)) return;
    // 8064C860: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_8064C864:
    ctx->pc = 0x8064C864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C864: stw     r0, 24(r3)
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
label_8064C868:
    ctx->pc = 0x8064C868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C868u)) return;
    // 8064C868: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8064C86C:
    ctx->pc = 0x8064C86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C86Cu)) return;
    // 8064C86C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8064C870:
    ctx->pc = 0x8064C870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8064C870: stb     r3, -11911(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11911);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C874:
    ctx->pc = 0x8064C874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8064C874: stb     r0, -11912(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11912);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C878:
    ctx->pc = 0x8064C878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8064C878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8064C878: lwz     r0, 20(r1)
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
label_8064C87C:
    ctx->pc = 0x8064C87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8064C87C: lwz     r31, 12(r1)
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
label_8064C880:
    ctx->pc = 0x8064C880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8064C880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8064C880: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8064C884:
    ctx->pc = 0x8064C884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C884u)) return;
    // 8064C884: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8064C888:
    ctx->pc = 0x8064C888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8064C888u)) return;
    // 8064C888: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8064B2E0;
        }
    }

    ctx->pc = 0x8064C88Cu;
    return;
return_dispatch_8064B2E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8064B304u: goto label_8064B304;
    case 0x8064B328u: goto label_8064B328;
    case 0x8064B350u: goto label_8064B350;
    case 0x8064B360u: goto label_8064B360;
    case 0x8064B370u: goto label_8064B370;
    case 0x8064B420u: goto label_8064B420;
    case 0x8064B450u: goto label_8064B450;
    case 0x8064B4E0u: goto label_8064B4E0;
    case 0x8064B528u: goto label_8064B528;
    case 0x8064B760u: goto label_8064B760;
    case 0x8064B97Cu: goto label_8064B97C;
    case 0x8064BA28u: goto label_8064BA28;
    case 0x8064BAC8u: goto label_8064BAC8;
    case 0x8064BAD8u: goto label_8064BAD8;
    case 0x8064BAE4u: goto label_8064BAE4;
    case 0x8064BAFCu: goto label_8064BAFC;
    case 0x8064BB14u: goto label_8064BB14;
    case 0x8064BB2Cu: goto label_8064BB2C;
    case 0x8064BB44u: goto label_8064BB44;
    case 0x8064BB50u: goto label_8064BB50;
    case 0x8064BB58u: goto label_8064BB58;
    case 0x8064BB60u: goto label_8064BB60;
    case 0x8064BB78u: goto label_8064BB78;
    case 0x8064BBD8u: goto label_8064BBD8;
    case 0x8064BBE0u: goto label_8064BBE0;
    case 0x8064BBECu: goto label_8064BBEC;
    case 0x8064BC04u: goto label_8064BC04;
    case 0x8064BC1Cu: goto label_8064BC1C;
    case 0x8064BC30u: goto label_8064BC30;
    case 0x8064BC40u: goto label_8064BC40;
    case 0x8064BC48u: goto label_8064BC48;
    case 0x8064BEC4u: goto label_8064BEC4;
    case 0x8064BF5Cu: goto label_8064BF5C;
    case 0x8064BFA4u: goto label_8064BFA4;
    case 0x8064C1A4u: goto label_8064C1A4;
    case 0x8064C1F0u: goto label_8064C1F0;
    case 0x8064C238u: goto label_8064C238;
    case 0x8064C248u: goto label_8064C248;
    case 0x8064C254u: goto label_8064C254;
    case 0x8064C26Cu: goto label_8064C26C;
    case 0x8064C284u: goto label_8064C284;
    case 0x8064C29Cu: goto label_8064C29C;
    case 0x8064C2B4u: goto label_8064C2B4;
    case 0x8064C2C0u: goto label_8064C2C0;
    case 0x8064C2C8u: goto label_8064C2C8;
    case 0x8064C2D0u: goto label_8064C2D0;
    case 0x8064C2E8u: goto label_8064C2E8;
    case 0x8064C348u: goto label_8064C348;
    case 0x8064C350u: goto label_8064C350;
    case 0x8064C35Cu: goto label_8064C35C;
    case 0x8064C374u: goto label_8064C374;
    case 0x8064C38Cu: goto label_8064C38C;
    case 0x8064C3A0u: goto label_8064C3A0;
    case 0x8064C3B0u: goto label_8064C3B0;
    case 0x8064C3B8u: goto label_8064C3B8;
    case 0x8064C420u: goto label_8064C420;
    case 0x8064C438u: goto label_8064C438;
    case 0x8064C480u: goto label_8064C480;
    case 0x8064C48Cu: goto label_8064C48C;
    case 0x8064C4B4u: goto label_8064C4B4;
    case 0x8064C54Cu: goto label_8064C54C;
    case 0x8064C560u: goto label_8064C560;
    case 0x8064C570u: goto label_8064C570;
    case 0x8064C5B4u: goto label_8064C5B4;
    case 0x8064C5D0u: goto label_8064C5D0;
    case 0x8064C5E8u: goto label_8064C5E8;
    case 0x8064C63Cu: goto label_8064C63C;
    case 0x8064C668u: goto label_8064C668;
    case 0x8064C7C4u: goto label_8064C7C4;
    case 0x8064C7F4u: goto label_8064C7F4;
    case 0x8064C7F8u: goto label_8064C7F8;
    case 0x8064C844u: goto label_8064C844;
    default: return;
    }
}

