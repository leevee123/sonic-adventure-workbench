// DolRecomp output
#include "../generated.h"

void func_80B7D2C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80B7D2C0[1930] = {
        &&label_80B7D2C0,
        &&label_80B7D2C4,
        &&label_80B7D2C8,
        &&label_80B7D2CC,
        &&label_80B7D2D0,
        &&label_80B7D2D4,
        &&label_80B7D2D8,
        &&label_80B7D2DC,
        &&label_80B7D2E0,
        &&label_80B7D2E4,
        &&label_80B7D2E8,
        &&label_80B7D2EC,
        &&label_80B7D2F0,
        &&label_80B7D2F4,
        &&label_80B7D2F8,
        &&label_80B7D2FC,
        &&label_80B7D300,
        &&label_80B7D304,
        &&label_80B7D308,
        &&label_80B7D30C,
        &&label_80B7D310,
        &&label_80B7D314,
        &&label_80B7D318,
        &&label_80B7D31C,
        &&label_80B7D320,
        &&label_80B7D324,
        &&label_80B7D328,
        &&label_80B7D32C,
        &&label_80B7D330,
        &&label_80B7D334,
        &&label_80B7D338,
        &&label_80B7D33C,
        &&label_80B7D340,
        &&label_80B7D344,
        &&label_80B7D348,
        &&label_80B7D34C,
        &&label_80B7D350,
        &&label_80B7D354,
        &&label_80B7D358,
        &&label_80B7D35C,
        &&label_80B7D360,
        &&label_80B7D364,
        &&label_80B7D368,
        &&label_80B7D36C,
        &&label_80B7D370,
        &&label_80B7D374,
        &&label_80B7D378,
        &&label_80B7D37C,
        &&label_80B7D380,
        &&label_80B7D384,
        &&label_80B7D388,
        &&label_80B7D38C,
        &&label_80B7D390,
        &&label_80B7D394,
        &&label_80B7D398,
        &&label_80B7D39C,
        &&label_80B7D3A0,
        &&label_80B7D3A4,
        &&label_80B7D3A8,
        &&label_80B7D3AC,
        &&label_80B7D3B0,
        &&label_80B7D3B4,
        &&label_80B7D3B8,
        &&label_80B7D3BC,
        &&label_80B7D3C0,
        &&label_80B7D3C4,
        &&label_80B7D3C8,
        &&label_80B7D3CC,
        &&label_80B7D3D0,
        &&label_80B7D3D4,
        &&label_80B7D3D8,
        &&label_80B7D3DC,
        &&label_80B7D3E0,
        &&label_80B7D3E4,
        &&label_80B7D3E8,
        &&label_80B7D3EC,
        &&label_80B7D3F0,
        &&label_80B7D3F4,
        &&label_80B7D3F8,
        &&label_80B7D3FC,
        &&label_80B7D400,
        &&label_80B7D404,
        &&label_80B7D408,
        &&label_80B7D40C,
        &&label_80B7D410,
        &&label_80B7D414,
        &&label_80B7D418,
        &&label_80B7D41C,
        &&label_80B7D420,
        &&label_80B7D424,
        &&label_80B7D428,
        &&label_80B7D42C,
        &&label_80B7D430,
        &&label_80B7D434,
        &&label_80B7D438,
        &&label_80B7D43C,
        &&label_80B7D440,
        &&label_80B7D444,
        &&label_80B7D448,
        &&label_80B7D44C,
        &&label_80B7D450,
        &&label_80B7D454,
        &&label_80B7D458,
        &&label_80B7D45C,
        &&label_80B7D460,
        &&label_80B7D464,
        &&label_80B7D468,
        &&label_80B7D46C,
        &&label_80B7D470,
        &&label_80B7D474,
        &&label_80B7D478,
        &&label_80B7D47C,
        &&label_80B7D480,
        &&label_80B7D484,
        &&label_80B7D488,
        &&label_80B7D48C,
        &&label_80B7D490,
        &&label_80B7D494,
        &&label_80B7D498,
        &&label_80B7D49C,
        &&label_80B7D4A0,
        &&label_80B7D4A4,
        &&label_80B7D4A8,
        &&label_80B7D4AC,
        &&label_80B7D4B0,
        &&label_80B7D4B4,
        &&label_80B7D4B8,
        &&label_80B7D4BC,
        &&label_80B7D4C0,
        &&label_80B7D4C4,
        &&label_80B7D4C8,
        &&label_80B7D4CC,
        &&label_80B7D4D0,
        &&label_80B7D4D4,
        &&label_80B7D4D8,
        &&label_80B7D4DC,
        &&label_80B7D4E0,
        &&label_80B7D4E4,
        &&label_80B7D4E8,
        &&label_80B7D4EC,
        &&label_80B7D4F0,
        &&label_80B7D4F4,
        &&label_80B7D4F8,
        &&label_80B7D4FC,
        &&label_80B7D500,
        &&label_80B7D504,
        &&label_80B7D508,
        &&label_80B7D50C,
        &&label_80B7D510,
        &&label_80B7D514,
        &&label_80B7D518,
        &&label_80B7D51C,
        &&label_80B7D520,
        &&label_80B7D524,
        &&label_80B7D528,
        &&label_80B7D52C,
        &&label_80B7D530,
        &&label_80B7D534,
        &&label_80B7D538,
        &&label_80B7D53C,
        &&label_80B7D540,
        &&label_80B7D544,
        &&label_80B7D548,
        &&label_80B7D54C,
        &&label_80B7D550,
        &&label_80B7D554,
        &&label_80B7D558,
        &&label_80B7D55C,
        &&label_80B7D560,
        &&label_80B7D564,
        &&label_80B7D568,
        &&label_80B7D56C,
        &&label_80B7D570,
        &&label_80B7D574,
        &&label_80B7D578,
        &&label_80B7D57C,
        &&label_80B7D580,
        &&label_80B7D584,
        &&label_80B7D588,
        &&label_80B7D58C,
        &&label_80B7D590,
        &&label_80B7D594,
        &&label_80B7D598,
        &&label_80B7D59C,
        &&label_80B7D5A0,
        &&label_80B7D5A4,
        &&label_80B7D5A8,
        &&label_80B7D5AC,
        &&label_80B7D5B0,
        &&label_80B7D5B4,
        &&label_80B7D5B8,
        &&label_80B7D5BC,
        &&label_80B7D5C0,
        &&label_80B7D5C4,
        &&label_80B7D5C8,
        &&label_80B7D5CC,
        &&label_80B7D5D0,
        &&label_80B7D5D4,
        &&label_80B7D5D8,
        &&label_80B7D5DC,
        &&label_80B7D5E0,
        &&label_80B7D5E4,
        &&label_80B7D5E8,
        &&label_80B7D5EC,
        &&label_80B7D5F0,
        &&label_80B7D5F4,
        &&label_80B7D5F8,
        &&label_80B7D5FC,
        &&label_80B7D600,
        &&label_80B7D604,
        &&label_80B7D608,
        &&label_80B7D60C,
        &&label_80B7D610,
        &&label_80B7D614,
        &&label_80B7D618,
        &&label_80B7D61C,
        &&label_80B7D620,
        &&label_80B7D624,
        &&label_80B7D628,
        &&label_80B7D62C,
        &&label_80B7D630,
        &&label_80B7D634,
        &&label_80B7D638,
        &&label_80B7D63C,
        &&label_80B7D640,
        &&label_80B7D644,
        &&label_80B7D648,
        &&label_80B7D64C,
        &&label_80B7D650,
        &&label_80B7D654,
        &&label_80B7D658,
        &&label_80B7D65C,
        &&label_80B7D660,
        &&label_80B7D664,
        &&label_80B7D668,
        &&label_80B7D66C,
        &&label_80B7D670,
        &&label_80B7D674,
        &&label_80B7D678,
        &&label_80B7D67C,
        &&label_80B7D680,
        &&label_80B7D684,
        &&label_80B7D688,
        &&label_80B7D68C,
        &&label_80B7D690,
        &&label_80B7D694,
        &&label_80B7D698,
        &&label_80B7D69C,
        &&label_80B7D6A0,
        &&label_80B7D6A4,
        &&label_80B7D6A8,
        &&label_80B7D6AC,
        &&label_80B7D6B0,
        &&label_80B7D6B4,
        &&label_80B7D6B8,
        &&label_80B7D6BC,
        &&label_80B7D6C0,
        &&label_80B7D6C4,
        &&label_80B7D6C8,
        &&label_80B7D6CC,
        &&label_80B7D6D0,
        &&label_80B7D6D4,
        &&label_80B7D6D8,
        &&label_80B7D6DC,
        &&label_80B7D6E0,
        &&label_80B7D6E4,
        &&label_80B7D6E8,
        &&label_80B7D6EC,
        &&label_80B7D6F0,
        &&label_80B7D6F4,
        &&label_80B7D6F8,
        &&label_80B7D6FC,
        &&label_80B7D700,
        &&label_80B7D704,
        &&label_80B7D708,
        &&label_80B7D70C,
        &&label_80B7D710,
        &&label_80B7D714,
        &&label_80B7D718,
        &&label_80B7D71C,
        &&label_80B7D720,
        &&label_80B7D724,
        &&label_80B7D728,
        &&label_80B7D72C,
        &&label_80B7D730,
        &&label_80B7D734,
        &&label_80B7D738,
        &&label_80B7D73C,
        &&label_80B7D740,
        &&label_80B7D744,
        &&label_80B7D748,
        &&label_80B7D74C,
        &&label_80B7D750,
        &&label_80B7D754,
        &&label_80B7D758,
        &&label_80B7D75C,
        &&label_80B7D760,
        &&label_80B7D764,
        &&label_80B7D768,
        &&label_80B7D76C,
        &&label_80B7D770,
        &&label_80B7D774,
        &&label_80B7D778,
        &&label_80B7D77C,
        &&label_80B7D780,
        &&label_80B7D784,
        &&label_80B7D788,
        &&label_80B7D78C,
        &&label_80B7D790,
        &&label_80B7D794,
        &&label_80B7D798,
        &&label_80B7D79C,
        &&label_80B7D7A0,
        &&label_80B7D7A4,
        &&label_80B7D7A8,
        &&label_80B7D7AC,
        &&label_80B7D7B0,
        &&label_80B7D7B4,
        &&label_80B7D7B8,
        &&label_80B7D7BC,
        &&label_80B7D7C0,
        &&label_80B7D7C4,
        &&label_80B7D7C8,
        &&label_80B7D7CC,
        &&label_80B7D7D0,
        &&label_80B7D7D4,
        &&label_80B7D7D8,
        &&label_80B7D7DC,
        &&label_80B7D7E0,
        &&label_80B7D7E4,
        &&label_80B7D7E8,
        &&label_80B7D7EC,
        &&label_80B7D7F0,
        &&label_80B7D7F4,
        &&label_80B7D7F8,
        &&label_80B7D7FC,
        &&label_80B7D800,
        &&label_80B7D804,
        &&label_80B7D808,
        &&label_80B7D80C,
        &&label_80B7D810,
        &&label_80B7D814,
        &&label_80B7D818,
        &&label_80B7D81C,
        &&label_80B7D820,
        &&label_80B7D824,
        &&label_80B7D828,
        &&label_80B7D82C,
        &&label_80B7D830,
        &&label_80B7D834,
        &&label_80B7D838,
        &&label_80B7D83C,
        &&label_80B7D840,
        &&label_80B7D844,
        &&label_80B7D848,
        &&label_80B7D84C,
        &&label_80B7D850,
        &&label_80B7D854,
        &&label_80B7D858,
        &&label_80B7D85C,
        &&label_80B7D860,
        &&label_80B7D864,
        &&label_80B7D868,
        &&label_80B7D86C,
        &&label_80B7D870,
        &&label_80B7D874,
        &&label_80B7D878,
        &&label_80B7D87C,
        &&label_80B7D880,
        &&label_80B7D884,
        &&label_80B7D888,
        &&label_80B7D88C,
        &&label_80B7D890,
        &&label_80B7D894,
        &&label_80B7D898,
        &&label_80B7D89C,
        &&label_80B7D8A0,
        &&label_80B7D8A4,
        &&label_80B7D8A8,
        &&label_80B7D8AC,
        &&label_80B7D8B0,
        &&label_80B7D8B4,
        &&label_80B7D8B8,
        &&label_80B7D8BC,
        &&label_80B7D8C0,
        &&label_80B7D8C4,
        &&label_80B7D8C8,
        &&label_80B7D8CC,
        &&label_80B7D8D0,
        &&label_80B7D8D4,
        &&label_80B7D8D8,
        &&label_80B7D8DC,
        &&label_80B7D8E0,
        &&label_80B7D8E4,
        &&label_80B7D8E8,
        &&label_80B7D8EC,
        &&label_80B7D8F0,
        &&label_80B7D8F4,
        &&label_80B7D8F8,
        &&label_80B7D8FC,
        &&label_80B7D900,
        &&label_80B7D904,
        &&label_80B7D908,
        &&label_80B7D90C,
        &&label_80B7D910,
        &&label_80B7D914,
        &&label_80B7D918,
        &&label_80B7D91C,
        &&label_80B7D920,
        &&label_80B7D924,
        &&label_80B7D928,
        &&label_80B7D92C,
        &&label_80B7D930,
        &&label_80B7D934,
        &&label_80B7D938,
        &&label_80B7D93C,
        &&label_80B7D940,
        &&label_80B7D944,
        &&label_80B7D948,
        &&label_80B7D94C,
        &&label_80B7D950,
        &&label_80B7D954,
        &&label_80B7D958,
        &&label_80B7D95C,
        &&label_80B7D960,
        &&label_80B7D964,
        &&label_80B7D968,
        &&label_80B7D96C,
        &&label_80B7D970,
        &&label_80B7D974,
        &&label_80B7D978,
        &&label_80B7D97C,
        &&label_80B7D980,
        &&label_80B7D984,
        &&label_80B7D988,
        &&label_80B7D98C,
        &&label_80B7D990,
        &&label_80B7D994,
        &&label_80B7D998,
        &&label_80B7D99C,
        &&label_80B7D9A0,
        &&label_80B7D9A4,
        &&label_80B7D9A8,
        &&label_80B7D9AC,
        &&label_80B7D9B0,
        &&label_80B7D9B4,
        &&label_80B7D9B8,
        &&label_80B7D9BC,
        &&label_80B7D9C0,
        &&label_80B7D9C4,
        &&label_80B7D9C8,
        &&label_80B7D9CC,
        &&label_80B7D9D0,
        &&label_80B7D9D4,
        &&label_80B7D9D8,
        &&label_80B7D9DC,
        &&label_80B7D9E0,
        &&label_80B7D9E4,
        &&label_80B7D9E8,
        &&label_80B7D9EC,
        &&label_80B7D9F0,
        &&label_80B7D9F4,
        &&label_80B7D9F8,
        &&label_80B7D9FC,
        &&label_80B7DA00,
        &&label_80B7DA04,
        &&label_80B7DA08,
        &&label_80B7DA0C,
        &&label_80B7DA10,
        &&label_80B7DA14,
        &&label_80B7DA18,
        &&label_80B7DA1C,
        &&label_80B7DA20,
        &&label_80B7DA24,
        &&label_80B7DA28,
        &&label_80B7DA2C,
        &&label_80B7DA30,
        &&label_80B7DA34,
        &&label_80B7DA38,
        &&label_80B7DA3C,
        &&label_80B7DA40,
        &&label_80B7DA44,
        &&label_80B7DA48,
        &&label_80B7DA4C,
        &&label_80B7DA50,
        &&label_80B7DA54,
        &&label_80B7DA58,
        &&label_80B7DA5C,
        &&label_80B7DA60,
        &&label_80B7DA64,
        &&label_80B7DA68,
        &&label_80B7DA6C,
        &&label_80B7DA70,
        &&label_80B7DA74,
        &&label_80B7DA78,
        &&label_80B7DA7C,
        &&label_80B7DA80,
        &&label_80B7DA84,
        &&label_80B7DA88,
        &&label_80B7DA8C,
        &&label_80B7DA90,
        &&label_80B7DA94,
        &&label_80B7DA98,
        &&label_80B7DA9C,
        &&label_80B7DAA0,
        &&label_80B7DAA4,
        &&label_80B7DAA8,
        &&label_80B7DAAC,
        &&label_80B7DAB0,
        &&label_80B7DAB4,
        &&label_80B7DAB8,
        &&label_80B7DABC,
        &&label_80B7DAC0,
        &&label_80B7DAC4,
        &&label_80B7DAC8,
        &&label_80B7DACC,
        &&label_80B7DAD0,
        &&label_80B7DAD4,
        &&label_80B7DAD8,
        &&label_80B7DADC,
        &&label_80B7DAE0,
        &&label_80B7DAE4,
        &&label_80B7DAE8,
        &&label_80B7DAEC,
        &&label_80B7DAF0,
        &&label_80B7DAF4,
        &&label_80B7DAF8,
        &&label_80B7DAFC,
        &&label_80B7DB00,
        &&label_80B7DB04,
        &&label_80B7DB08,
        &&label_80B7DB0C,
        &&label_80B7DB10,
        &&label_80B7DB14,
        &&label_80B7DB18,
        &&label_80B7DB1C,
        &&label_80B7DB20,
        &&label_80B7DB24,
        &&label_80B7DB28,
        &&label_80B7DB2C,
        &&label_80B7DB30,
        &&label_80B7DB34,
        &&label_80B7DB38,
        &&label_80B7DB3C,
        &&label_80B7DB40,
        &&label_80B7DB44,
        &&label_80B7DB48,
        &&label_80B7DB4C,
        &&label_80B7DB50,
        &&label_80B7DB54,
        &&label_80B7DB58,
        &&label_80B7DB5C,
        &&label_80B7DB60,
        &&label_80B7DB64,
        &&label_80B7DB68,
        &&label_80B7DB6C,
        &&label_80B7DB70,
        &&label_80B7DB74,
        &&label_80B7DB78,
        &&label_80B7DB7C,
        &&label_80B7DB80,
        &&label_80B7DB84,
        &&label_80B7DB88,
        &&label_80B7DB8C,
        &&label_80B7DB90,
        &&label_80B7DB94,
        &&label_80B7DB98,
        &&label_80B7DB9C,
        &&label_80B7DBA0,
        &&label_80B7DBA4,
        &&label_80B7DBA8,
        &&label_80B7DBAC,
        &&label_80B7DBB0,
        &&label_80B7DBB4,
        &&label_80B7DBB8,
        &&label_80B7DBBC,
        &&label_80B7DBC0,
        &&label_80B7DBC4,
        &&label_80B7DBC8,
        &&label_80B7DBCC,
        &&label_80B7DBD0,
        &&label_80B7DBD4,
        &&label_80B7DBD8,
        &&label_80B7DBDC,
        &&label_80B7DBE0,
        &&label_80B7DBE4,
        &&label_80B7DBE8,
        &&label_80B7DBEC,
        &&label_80B7DBF0,
        &&label_80B7DBF4,
        &&label_80B7DBF8,
        &&label_80B7DBFC,
        &&label_80B7DC00,
        &&label_80B7DC04,
        &&label_80B7DC08,
        &&label_80B7DC0C,
        &&label_80B7DC10,
        &&label_80B7DC14,
        &&label_80B7DC18,
        &&label_80B7DC1C,
        &&label_80B7DC20,
        &&label_80B7DC24,
        &&label_80B7DC28,
        &&label_80B7DC2C,
        &&label_80B7DC30,
        &&label_80B7DC34,
        &&label_80B7DC38,
        &&label_80B7DC3C,
        &&label_80B7DC40,
        &&label_80B7DC44,
        &&label_80B7DC48,
        &&label_80B7DC4C,
        &&label_80B7DC50,
        &&label_80B7DC54,
        &&label_80B7DC58,
        &&label_80B7DC5C,
        &&label_80B7DC60,
        &&label_80B7DC64,
        &&label_80B7DC68,
        &&label_80B7DC6C,
        &&label_80B7DC70,
        &&label_80B7DC74,
        &&label_80B7DC78,
        &&label_80B7DC7C,
        &&label_80B7DC80,
        &&label_80B7DC84,
        &&label_80B7DC88,
        &&label_80B7DC8C,
        &&label_80B7DC90,
        &&label_80B7DC94,
        &&label_80B7DC98,
        &&label_80B7DC9C,
        &&label_80B7DCA0,
        &&label_80B7DCA4,
        &&label_80B7DCA8,
        &&label_80B7DCAC,
        &&label_80B7DCB0,
        &&label_80B7DCB4,
        &&label_80B7DCB8,
        &&label_80B7DCBC,
        &&label_80B7DCC0,
        &&label_80B7DCC4,
        &&label_80B7DCC8,
        &&label_80B7DCCC,
        &&label_80B7DCD0,
        &&label_80B7DCD4,
        &&label_80B7DCD8,
        &&label_80B7DCDC,
        &&label_80B7DCE0,
        &&label_80B7DCE4,
        &&label_80B7DCE8,
        &&label_80B7DCEC,
        &&label_80B7DCF0,
        &&label_80B7DCF4,
        &&label_80B7DCF8,
        &&label_80B7DCFC,
        &&label_80B7DD00,
        &&label_80B7DD04,
        &&label_80B7DD08,
        &&label_80B7DD0C,
        &&label_80B7DD10,
        &&label_80B7DD14,
        &&label_80B7DD18,
        &&label_80B7DD1C,
        &&label_80B7DD20,
        &&label_80B7DD24,
        &&label_80B7DD28,
        &&label_80B7DD2C,
        &&label_80B7DD30,
        &&label_80B7DD34,
        &&label_80B7DD38,
        &&label_80B7DD3C,
        &&label_80B7DD40,
        &&label_80B7DD44,
        &&label_80B7DD48,
        &&label_80B7DD4C,
        &&label_80B7DD50,
        &&label_80B7DD54,
        &&label_80B7DD58,
        &&label_80B7DD5C,
        &&label_80B7DD60,
        &&label_80B7DD64,
        &&label_80B7DD68,
        &&label_80B7DD6C,
        &&label_80B7DD70,
        &&label_80B7DD74,
        &&label_80B7DD78,
        &&label_80B7DD7C,
        &&label_80B7DD80,
        &&label_80B7DD84,
        &&label_80B7DD88,
        &&label_80B7DD8C,
        &&label_80B7DD90,
        &&label_80B7DD94,
        &&label_80B7DD98,
        &&label_80B7DD9C,
        &&label_80B7DDA0,
        &&label_80B7DDA4,
        &&label_80B7DDA8,
        &&label_80B7DDAC,
        &&label_80B7DDB0,
        &&label_80B7DDB4,
        &&label_80B7DDB8,
        &&label_80B7DDBC,
        &&label_80B7DDC0,
        &&label_80B7DDC4,
        &&label_80B7DDC8,
        &&label_80B7DDCC,
        &&label_80B7DDD0,
        &&label_80B7DDD4,
        &&label_80B7DDD8,
        &&label_80B7DDDC,
        &&label_80B7DDE0,
        &&label_80B7DDE4,
        &&label_80B7DDE8,
        &&label_80B7DDEC,
        &&label_80B7DDF0,
        &&label_80B7DDF4,
        &&label_80B7DDF8,
        &&label_80B7DDFC,
        &&label_80B7DE00,
        &&label_80B7DE04,
        &&label_80B7DE08,
        &&label_80B7DE0C,
        &&label_80B7DE10,
        &&label_80B7DE14,
        &&label_80B7DE18,
        &&label_80B7DE1C,
        &&label_80B7DE20,
        &&label_80B7DE24,
        &&label_80B7DE28,
        &&label_80B7DE2C,
        &&label_80B7DE30,
        &&label_80B7DE34,
        &&label_80B7DE38,
        &&label_80B7DE3C,
        &&label_80B7DE40,
        &&label_80B7DE44,
        &&label_80B7DE48,
        &&label_80B7DE4C,
        &&label_80B7DE50,
        &&label_80B7DE54,
        &&label_80B7DE58,
        &&label_80B7DE5C,
        &&label_80B7DE60,
        &&label_80B7DE64,
        &&label_80B7DE68,
        &&label_80B7DE6C,
        &&label_80B7DE70,
        &&label_80B7DE74,
        &&label_80B7DE78,
        &&label_80B7DE7C,
        &&label_80B7DE80,
        &&label_80B7DE84,
        &&label_80B7DE88,
        &&label_80B7DE8C,
        &&label_80B7DE90,
        &&label_80B7DE94,
        &&label_80B7DE98,
        &&label_80B7DE9C,
        &&label_80B7DEA0,
        &&label_80B7DEA4,
        &&label_80B7DEA8,
        &&label_80B7DEAC,
        &&label_80B7DEB0,
        &&label_80B7DEB4,
        &&label_80B7DEB8,
        &&label_80B7DEBC,
        &&label_80B7DEC0,
        &&label_80B7DEC4,
        &&label_80B7DEC8,
        &&label_80B7DECC,
        &&label_80B7DED0,
        &&label_80B7DED4,
        &&label_80B7DED8,
        &&label_80B7DEDC,
        &&label_80B7DEE0,
        &&label_80B7DEE4,
        &&label_80B7DEE8,
        &&label_80B7DEEC,
        &&label_80B7DEF0,
        &&label_80B7DEF4,
        &&label_80B7DEF8,
        &&label_80B7DEFC,
        &&label_80B7DF00,
        &&label_80B7DF04,
        &&label_80B7DF08,
        &&label_80B7DF0C,
        &&label_80B7DF10,
        &&label_80B7DF14,
        &&label_80B7DF18,
        &&label_80B7DF1C,
        &&label_80B7DF20,
        &&label_80B7DF24,
        &&label_80B7DF28,
        &&label_80B7DF2C,
        &&label_80B7DF30,
        &&label_80B7DF34,
        &&label_80B7DF38,
        &&label_80B7DF3C,
        &&label_80B7DF40,
        &&label_80B7DF44,
        &&label_80B7DF48,
        &&label_80B7DF4C,
        &&label_80B7DF50,
        &&label_80B7DF54,
        &&label_80B7DF58,
        &&label_80B7DF5C,
        &&label_80B7DF60,
        &&label_80B7DF64,
        &&label_80B7DF68,
        &&label_80B7DF6C,
        &&label_80B7DF70,
        &&label_80B7DF74,
        &&label_80B7DF78,
        &&label_80B7DF7C,
        &&label_80B7DF80,
        &&label_80B7DF84,
        &&label_80B7DF88,
        &&label_80B7DF8C,
        &&label_80B7DF90,
        &&label_80B7DF94,
        &&label_80B7DF98,
        &&label_80B7DF9C,
        &&label_80B7DFA0,
        &&label_80B7DFA4,
        &&label_80B7DFA8,
        &&label_80B7DFAC,
        &&label_80B7DFB0,
        &&label_80B7DFB4,
        &&label_80B7DFB8,
        &&label_80B7DFBC,
        &&label_80B7DFC0,
        &&label_80B7DFC4,
        &&label_80B7DFC8,
        &&label_80B7DFCC,
        &&label_80B7DFD0,
        &&label_80B7DFD4,
        &&label_80B7DFD8,
        &&label_80B7DFDC,
        &&label_80B7DFE0,
        &&label_80B7DFE4,
        &&label_80B7DFE8,
        &&label_80B7DFEC,
        &&label_80B7DFF0,
        &&label_80B7DFF4,
        &&label_80B7DFF8,
        &&label_80B7DFFC,
        &&label_80B7E000,
        &&label_80B7E004,
        &&label_80B7E008,
        &&label_80B7E00C,
        &&label_80B7E010,
        &&label_80B7E014,
        &&label_80B7E018,
        &&label_80B7E01C,
        &&label_80B7E020,
        &&label_80B7E024,
        &&label_80B7E028,
        &&label_80B7E02C,
        &&label_80B7E030,
        &&label_80B7E034,
        &&label_80B7E038,
        &&label_80B7E03C,
        &&label_80B7E040,
        &&label_80B7E044,
        &&label_80B7E048,
        &&label_80B7E04C,
        &&label_80B7E050,
        &&label_80B7E054,
        &&label_80B7E058,
        &&label_80B7E05C,
        &&label_80B7E060,
        &&label_80B7E064,
        &&label_80B7E068,
        &&label_80B7E06C,
        &&label_80B7E070,
        &&label_80B7E074,
        &&label_80B7E078,
        &&label_80B7E07C,
        &&label_80B7E080,
        &&label_80B7E084,
        &&label_80B7E088,
        &&label_80B7E08C,
        &&label_80B7E090,
        &&label_80B7E094,
        &&label_80B7E098,
        &&label_80B7E09C,
        &&label_80B7E0A0,
        &&label_80B7E0A4,
        &&label_80B7E0A8,
        &&label_80B7E0AC,
        &&label_80B7E0B0,
        &&label_80B7E0B4,
        &&label_80B7E0B8,
        &&label_80B7E0BC,
        &&label_80B7E0C0,
        &&label_80B7E0C4,
        &&label_80B7E0C8,
        &&label_80B7E0CC,
        &&label_80B7E0D0,
        &&label_80B7E0D4,
        &&label_80B7E0D8,
        &&label_80B7E0DC,
        &&label_80B7E0E0,
        &&label_80B7E0E4,
        &&label_80B7E0E8,
        &&label_80B7E0EC,
        &&label_80B7E0F0,
        &&label_80B7E0F4,
        &&label_80B7E0F8,
        &&label_80B7E0FC,
        &&label_80B7E100,
        &&label_80B7E104,
        &&label_80B7E108,
        &&label_80B7E10C,
        &&label_80B7E110,
        &&label_80B7E114,
        &&label_80B7E118,
        &&label_80B7E11C,
        &&label_80B7E120,
        &&label_80B7E124,
        &&label_80B7E128,
        &&label_80B7E12C,
        &&label_80B7E130,
        &&label_80B7E134,
        &&label_80B7E138,
        &&label_80B7E13C,
        &&label_80B7E140,
        &&label_80B7E144,
        &&label_80B7E148,
        &&label_80B7E14C,
        &&label_80B7E150,
        &&label_80B7E154,
        &&label_80B7E158,
        &&label_80B7E15C,
        &&label_80B7E160,
        &&label_80B7E164,
        &&label_80B7E168,
        &&label_80B7E16C,
        &&label_80B7E170,
        &&label_80B7E174,
        &&label_80B7E178,
        &&label_80B7E17C,
        &&label_80B7E180,
        &&label_80B7E184,
        &&label_80B7E188,
        &&label_80B7E18C,
        &&label_80B7E190,
        &&label_80B7E194,
        &&label_80B7E198,
        &&label_80B7E19C,
        &&label_80B7E1A0,
        &&label_80B7E1A4,
        &&label_80B7E1A8,
        &&label_80B7E1AC,
        &&label_80B7E1B0,
        &&label_80B7E1B4,
        &&label_80B7E1B8,
        &&label_80B7E1BC,
        &&label_80B7E1C0,
        &&label_80B7E1C4,
        &&label_80B7E1C8,
        &&label_80B7E1CC,
        &&label_80B7E1D0,
        &&label_80B7E1D4,
        &&label_80B7E1D8,
        &&label_80B7E1DC,
        &&label_80B7E1E0,
        &&label_80B7E1E4,
        &&label_80B7E1E8,
        &&label_80B7E1EC,
        &&label_80B7E1F0,
        &&label_80B7E1F4,
        &&label_80B7E1F8,
        &&label_80B7E1FC,
        &&label_80B7E200,
        &&label_80B7E204,
        &&label_80B7E208,
        &&label_80B7E20C,
        &&label_80B7E210,
        &&label_80B7E214,
        &&label_80B7E218,
        &&label_80B7E21C,
        &&label_80B7E220,
        &&label_80B7E224,
        &&label_80B7E228,
        &&label_80B7E22C,
        &&label_80B7E230,
        &&label_80B7E234,
        &&label_80B7E238,
        &&label_80B7E23C,
        &&label_80B7E240,
        &&label_80B7E244,
        &&label_80B7E248,
        &&label_80B7E24C,
        &&label_80B7E250,
        &&label_80B7E254,
        &&label_80B7E258,
        &&label_80B7E25C,
        &&label_80B7E260,
        &&label_80B7E264,
        &&label_80B7E268,
        &&label_80B7E26C,
        &&label_80B7E270,
        &&label_80B7E274,
        &&label_80B7E278,
        &&label_80B7E27C,
        &&label_80B7E280,
        &&label_80B7E284,
        &&label_80B7E288,
        &&label_80B7E28C,
        &&label_80B7E290,
        &&label_80B7E294,
        &&label_80B7E298,
        &&label_80B7E29C,
        &&label_80B7E2A0,
        &&label_80B7E2A4,
        &&label_80B7E2A8,
        &&label_80B7E2AC,
        &&label_80B7E2B0,
        &&label_80B7E2B4,
        &&label_80B7E2B8,
        &&label_80B7E2BC,
        &&label_80B7E2C0,
        &&label_80B7E2C4,
        &&label_80B7E2C8,
        &&label_80B7E2CC,
        &&label_80B7E2D0,
        &&label_80B7E2D4,
        &&label_80B7E2D8,
        &&label_80B7E2DC,
        &&label_80B7E2E0,
        &&label_80B7E2E4,
        &&label_80B7E2E8,
        &&label_80B7E2EC,
        &&label_80B7E2F0,
        &&label_80B7E2F4,
        &&label_80B7E2F8,
        &&label_80B7E2FC,
        &&label_80B7E300,
        &&label_80B7E304,
        &&label_80B7E308,
        &&label_80B7E30C,
        &&label_80B7E310,
        &&label_80B7E314,
        &&label_80B7E318,
        &&label_80B7E31C,
        &&label_80B7E320,
        &&label_80B7E324,
        &&label_80B7E328,
        &&label_80B7E32C,
        &&label_80B7E330,
        &&label_80B7E334,
        &&label_80B7E338,
        &&label_80B7E33C,
        &&label_80B7E340,
        &&label_80B7E344,
        &&label_80B7E348,
        &&label_80B7E34C,
        &&label_80B7E350,
        &&label_80B7E354,
        &&label_80B7E358,
        &&label_80B7E35C,
        &&label_80B7E360,
        &&label_80B7E364,
        &&label_80B7E368,
        &&label_80B7E36C,
        &&label_80B7E370,
        &&label_80B7E374,
        &&label_80B7E378,
        &&label_80B7E37C,
        &&label_80B7E380,
        &&label_80B7E384,
        &&label_80B7E388,
        &&label_80B7E38C,
        &&label_80B7E390,
        &&label_80B7E394,
        &&label_80B7E398,
        &&label_80B7E39C,
        &&label_80B7E3A0,
        &&label_80B7E3A4,
        &&label_80B7E3A8,
        &&label_80B7E3AC,
        &&label_80B7E3B0,
        &&label_80B7E3B4,
        &&label_80B7E3B8,
        &&label_80B7E3BC,
        &&label_80B7E3C0,
        &&label_80B7E3C4,
        &&label_80B7E3C8,
        &&label_80B7E3CC,
        &&label_80B7E3D0,
        &&label_80B7E3D4,
        &&label_80B7E3D8,
        &&label_80B7E3DC,
        &&label_80B7E3E0,
        &&label_80B7E3E4,
        &&label_80B7E3E8,
        &&label_80B7E3EC,
        &&label_80B7E3F0,
        &&label_80B7E3F4,
        &&label_80B7E3F8,
        &&label_80B7E3FC,
        &&label_80B7E400,
        &&label_80B7E404,
        &&label_80B7E408,
        &&label_80B7E40C,
        &&label_80B7E410,
        &&label_80B7E414,
        &&label_80B7E418,
        &&label_80B7E41C,
        &&label_80B7E420,
        &&label_80B7E424,
        &&label_80B7E428,
        &&label_80B7E42C,
        &&label_80B7E430,
        &&label_80B7E434,
        &&label_80B7E438,
        &&label_80B7E43C,
        &&label_80B7E440,
        &&label_80B7E444,
        &&label_80B7E448,
        &&label_80B7E44C,
        &&label_80B7E450,
        &&label_80B7E454,
        &&label_80B7E458,
        &&label_80B7E45C,
        &&label_80B7E460,
        &&label_80B7E464,
        &&label_80B7E468,
        &&label_80B7E46C,
        &&label_80B7E470,
        &&label_80B7E474,
        &&label_80B7E478,
        &&label_80B7E47C,
        &&label_80B7E480,
        &&label_80B7E484,
        &&label_80B7E488,
        &&label_80B7E48C,
        &&label_80B7E490,
        &&label_80B7E494,
        &&label_80B7E498,
        &&label_80B7E49C,
        &&label_80B7E4A0,
        &&label_80B7E4A4,
        &&label_80B7E4A8,
        &&label_80B7E4AC,
        &&label_80B7E4B0,
        &&label_80B7E4B4,
        &&label_80B7E4B8,
        &&label_80B7E4BC,
        &&label_80B7E4C0,
        &&label_80B7E4C4,
        &&label_80B7E4C8,
        &&label_80B7E4CC,
        &&label_80B7E4D0,
        &&label_80B7E4D4,
        &&label_80B7E4D8,
        &&label_80B7E4DC,
        &&label_80B7E4E0,
        &&label_80B7E4E4,
        &&label_80B7E4E8,
        &&label_80B7E4EC,
        &&label_80B7E4F0,
        &&label_80B7E4F4,
        &&label_80B7E4F8,
        &&label_80B7E4FC,
        &&label_80B7E500,
        &&label_80B7E504,
        &&label_80B7E508,
        &&label_80B7E50C,
        &&label_80B7E510,
        &&label_80B7E514,
        &&label_80B7E518,
        &&label_80B7E51C,
        &&label_80B7E520,
        &&label_80B7E524,
        &&label_80B7E528,
        &&label_80B7E52C,
        &&label_80B7E530,
        &&label_80B7E534,
        &&label_80B7E538,
        &&label_80B7E53C,
        &&label_80B7E540,
        &&label_80B7E544,
        &&label_80B7E548,
        &&label_80B7E54C,
        &&label_80B7E550,
        &&label_80B7E554,
        &&label_80B7E558,
        &&label_80B7E55C,
        &&label_80B7E560,
        &&label_80B7E564,
        &&label_80B7E568,
        &&label_80B7E56C,
        &&label_80B7E570,
        &&label_80B7E574,
        &&label_80B7E578,
        &&label_80B7E57C,
        &&label_80B7E580,
        &&label_80B7E584,
        &&label_80B7E588,
        &&label_80B7E58C,
        &&label_80B7E590,
        &&label_80B7E594,
        &&label_80B7E598,
        &&label_80B7E59C,
        &&label_80B7E5A0,
        &&label_80B7E5A4,
        &&label_80B7E5A8,
        &&label_80B7E5AC,
        &&label_80B7E5B0,
        &&label_80B7E5B4,
        &&label_80B7E5B8,
        &&label_80B7E5BC,
        &&label_80B7E5C0,
        &&label_80B7E5C4,
        &&label_80B7E5C8,
        &&label_80B7E5CC,
        &&label_80B7E5D0,
        &&label_80B7E5D4,
        &&label_80B7E5D8,
        &&label_80B7E5DC,
        &&label_80B7E5E0,
        &&label_80B7E5E4,
        &&label_80B7E5E8,
        &&label_80B7E5EC,
        &&label_80B7E5F0,
        &&label_80B7E5F4,
        &&label_80B7E5F8,
        &&label_80B7E5FC,
        &&label_80B7E600,
        &&label_80B7E604,
        &&label_80B7E608,
        &&label_80B7E60C,
        &&label_80B7E610,
        &&label_80B7E614,
        &&label_80B7E618,
        &&label_80B7E61C,
        &&label_80B7E620,
        &&label_80B7E624,
        &&label_80B7E628,
        &&label_80B7E62C,
        &&label_80B7E630,
        &&label_80B7E634,
        &&label_80B7E638,
        &&label_80B7E63C,
        &&label_80B7E640,
        &&label_80B7E644,
        &&label_80B7E648,
        &&label_80B7E64C,
        &&label_80B7E650,
        &&label_80B7E654,
        &&label_80B7E658,
        &&label_80B7E65C,
        &&label_80B7E660,
        &&label_80B7E664,
        &&label_80B7E668,
        &&label_80B7E66C,
        &&label_80B7E670,
        &&label_80B7E674,
        &&label_80B7E678,
        &&label_80B7E67C,
        &&label_80B7E680,
        &&label_80B7E684,
        &&label_80B7E688,
        &&label_80B7E68C,
        &&label_80B7E690,
        &&label_80B7E694,
        &&label_80B7E698,
        &&label_80B7E69C,
        &&label_80B7E6A0,
        &&label_80B7E6A4,
        &&label_80B7E6A8,
        &&label_80B7E6AC,
        &&label_80B7E6B0,
        &&label_80B7E6B4,
        &&label_80B7E6B8,
        &&label_80B7E6BC,
        &&label_80B7E6C0,
        &&label_80B7E6C4,
        &&label_80B7E6C8,
        &&label_80B7E6CC,
        &&label_80B7E6D0,
        &&label_80B7E6D4,
        &&label_80B7E6D8,
        &&label_80B7E6DC,
        &&label_80B7E6E0,
        &&label_80B7E6E4,
        &&label_80B7E6E8,
        &&label_80B7E6EC,
        &&label_80B7E6F0,
        &&label_80B7E6F4,
        &&label_80B7E6F8,
        &&label_80B7E6FC,
        &&label_80B7E700,
        &&label_80B7E704,
        &&label_80B7E708,
        &&label_80B7E70C,
        &&label_80B7E710,
        &&label_80B7E714,
        &&label_80B7E718,
        &&label_80B7E71C,
        &&label_80B7E720,
        &&label_80B7E724,
        &&label_80B7E728,
        &&label_80B7E72C,
        &&label_80B7E730,
        &&label_80B7E734,
        &&label_80B7E738,
        &&label_80B7E73C,
        &&label_80B7E740,
        &&label_80B7E744,
        &&label_80B7E748,
        &&label_80B7E74C,
        &&label_80B7E750,
        &&label_80B7E754,
        &&label_80B7E758,
        &&label_80B7E75C,
        &&label_80B7E760,
        &&label_80B7E764,
        &&label_80B7E768,
        &&label_80B7E76C,
        &&label_80B7E770,
        &&label_80B7E774,
        &&label_80B7E778,
        &&label_80B7E77C,
        &&label_80B7E780,
        &&label_80B7E784,
        &&label_80B7E788,
        &&label_80B7E78C,
        &&label_80B7E790,
        &&label_80B7E794,
        &&label_80B7E798,
        &&label_80B7E79C,
        &&label_80B7E7A0,
        &&label_80B7E7A4,
        &&label_80B7E7A8,
        &&label_80B7E7AC,
        &&label_80B7E7B0,
        &&label_80B7E7B4,
        &&label_80B7E7B8,
        &&label_80B7E7BC,
        &&label_80B7E7C0,
        &&label_80B7E7C4,
        &&label_80B7E7C8,
        &&label_80B7E7CC,
        &&label_80B7E7D0,
        &&label_80B7E7D4,
        &&label_80B7E7D8,
        &&label_80B7E7DC,
        &&label_80B7E7E0,
        &&label_80B7E7E4,
        &&label_80B7E7E8,
        &&label_80B7E7EC,
        &&label_80B7E7F0,
        &&label_80B7E7F4,
        &&label_80B7E7F8,
        &&label_80B7E7FC,
        &&label_80B7E800,
        &&label_80B7E804,
        &&label_80B7E808,
        &&label_80B7E80C,
        &&label_80B7E810,
        &&label_80B7E814,
        &&label_80B7E818,
        &&label_80B7E81C,
        &&label_80B7E820,
        &&label_80B7E824,
        &&label_80B7E828,
        &&label_80B7E82C,
        &&label_80B7E830,
        &&label_80B7E834,
        &&label_80B7E838,
        &&label_80B7E83C,
        &&label_80B7E840,
        &&label_80B7E844,
        &&label_80B7E848,
        &&label_80B7E84C,
        &&label_80B7E850,
        &&label_80B7E854,
        &&label_80B7E858,
        &&label_80B7E85C,
        &&label_80B7E860,
        &&label_80B7E864,
        &&label_80B7E868,
        &&label_80B7E86C,
        &&label_80B7E870,
        &&label_80B7E874,
        &&label_80B7E878,
        &&label_80B7E87C,
        &&label_80B7E880,
        &&label_80B7E884,
        &&label_80B7E888,
        &&label_80B7E88C,
        &&label_80B7E890,
        &&label_80B7E894,
        &&label_80B7E898,
        &&label_80B7E89C,
        &&label_80B7E8A0,
        &&label_80B7E8A4,
        &&label_80B7E8A8,
        &&label_80B7E8AC,
        &&label_80B7E8B0,
        &&label_80B7E8B4,
        &&label_80B7E8B8,
        &&label_80B7E8BC,
        &&label_80B7E8C0,
        &&label_80B7E8C4,
        &&label_80B7E8C8,
        &&label_80B7E8CC,
        &&label_80B7E8D0,
        &&label_80B7E8D4,
        &&label_80B7E8D8,
        &&label_80B7E8DC,
        &&label_80B7E8E0,
        &&label_80B7E8E4,
        &&label_80B7E8E8,
        &&label_80B7E8EC,
        &&label_80B7E8F0,
        &&label_80B7E8F4,
        &&label_80B7E8F8,
        &&label_80B7E8FC,
        &&label_80B7E900,
        &&label_80B7E904,
        &&label_80B7E908,
        &&label_80B7E90C,
        &&label_80B7E910,
        &&label_80B7E914,
        &&label_80B7E918,
        &&label_80B7E91C,
        &&label_80B7E920,
        &&label_80B7E924,
        &&label_80B7E928,
        &&label_80B7E92C,
        &&label_80B7E930,
        &&label_80B7E934,
        &&label_80B7E938,
        &&label_80B7E93C,
        &&label_80B7E940,
        &&label_80B7E944,
        &&label_80B7E948,
        &&label_80B7E94C,
        &&label_80B7E950,
        &&label_80B7E954,
        &&label_80B7E958,
        &&label_80B7E95C,
        &&label_80B7E960,
        &&label_80B7E964,
        &&label_80B7E968,
        &&label_80B7E96C,
        &&label_80B7E970,
        &&label_80B7E974,
        &&label_80B7E978,
        &&label_80B7E97C,
        &&label_80B7E980,
        &&label_80B7E984,
        &&label_80B7E988,
        &&label_80B7E98C,
        &&label_80B7E990,
        &&label_80B7E994,
        &&label_80B7E998,
        &&label_80B7E99C,
        &&label_80B7E9A0,
        &&label_80B7E9A4,
        &&label_80B7E9A8,
        &&label_80B7E9AC,
        &&label_80B7E9B0,
        &&label_80B7E9B4,
        &&label_80B7E9B8,
        &&label_80B7E9BC,
        &&label_80B7E9C0,
        &&label_80B7E9C4,
        &&label_80B7E9C8,
        &&label_80B7E9CC,
        &&label_80B7E9D0,
        &&label_80B7E9D4,
        &&label_80B7E9D8,
        &&label_80B7E9DC,
        &&label_80B7E9E0,
        &&label_80B7E9E4,
        &&label_80B7E9E8,
        &&label_80B7E9EC,
        &&label_80B7E9F0,
        &&label_80B7E9F4,
        &&label_80B7E9F8,
        &&label_80B7E9FC,
        &&label_80B7EA00,
        &&label_80B7EA04,
        &&label_80B7EA08,
        &&label_80B7EA0C,
        &&label_80B7EA10,
        &&label_80B7EA14,
        &&label_80B7EA18,
        &&label_80B7EA1C,
        &&label_80B7EA20,
        &&label_80B7EA24,
        &&label_80B7EA28,
        &&label_80B7EA2C,
        &&label_80B7EA30,
        &&label_80B7EA34,
        &&label_80B7EA38,
        &&label_80B7EA3C,
        &&label_80B7EA40,
        &&label_80B7EA44,
        &&label_80B7EA48,
        &&label_80B7EA4C,
        &&label_80B7EA50,
        &&label_80B7EA54,
        &&label_80B7EA58,
        &&label_80B7EA5C,
        &&label_80B7EA60,
        &&label_80B7EA64,
        &&label_80B7EA68,
        &&label_80B7EA6C,
        &&label_80B7EA70,
        &&label_80B7EA74,
        &&label_80B7EA78,
        &&label_80B7EA7C,
        &&label_80B7EA80,
        &&label_80B7EA84,
        &&label_80B7EA88,
        &&label_80B7EA8C,
        &&label_80B7EA90,
        &&label_80B7EA94,
        &&label_80B7EA98,
        &&label_80B7EA9C,
        &&label_80B7EAA0,
        &&label_80B7EAA4,
        &&label_80B7EAA8,
        &&label_80B7EAAC,
        &&label_80B7EAB0,
        &&label_80B7EAB4,
        &&label_80B7EAB8,
        &&label_80B7EABC,
        &&label_80B7EAC0,
        &&label_80B7EAC4,
        &&label_80B7EAC8,
        &&label_80B7EACC,
        &&label_80B7EAD0,
        &&label_80B7EAD4,
        &&label_80B7EAD8,
        &&label_80B7EADC,
        &&label_80B7EAE0,
        &&label_80B7EAE4,
        &&label_80B7EAE8,
        &&label_80B7EAEC,
        &&label_80B7EAF0,
        &&label_80B7EAF4,
        &&label_80B7EAF8,
        &&label_80B7EAFC,
        &&label_80B7EB00,
        &&label_80B7EB04,
        &&label_80B7EB08,
        &&label_80B7EB0C,
        &&label_80B7EB10,
        &&label_80B7EB14,
        &&label_80B7EB18,
        &&label_80B7EB1C,
        &&label_80B7EB20,
        &&label_80B7EB24,
        &&label_80B7EB28,
        &&label_80B7EB2C,
        &&label_80B7EB30,
        &&label_80B7EB34,
        &&label_80B7EB38,
        &&label_80B7EB3C,
        &&label_80B7EB40,
        &&label_80B7EB44,
        &&label_80B7EB48,
        &&label_80B7EB4C,
        &&label_80B7EB50,
        &&label_80B7EB54,
        &&label_80B7EB58,
        &&label_80B7EB5C,
        &&label_80B7EB60,
        &&label_80B7EB64,
        &&label_80B7EB68,
        &&label_80B7EB6C,
        &&label_80B7EB70,
        &&label_80B7EB74,
        &&label_80B7EB78,
        &&label_80B7EB7C,
        &&label_80B7EB80,
        &&label_80B7EB84,
        &&label_80B7EB88,
        &&label_80B7EB8C,
        &&label_80B7EB90,
        &&label_80B7EB94,
        &&label_80B7EB98,
        &&label_80B7EB9C,
        &&label_80B7EBA0,
        &&label_80B7EBA4,
        &&label_80B7EBA8,
        &&label_80B7EBAC,
        &&label_80B7EBB0,
        &&label_80B7EBB4,
        &&label_80B7EBB8,
        &&label_80B7EBBC,
        &&label_80B7EBC0,
        &&label_80B7EBC4,
        &&label_80B7EBC8,
        &&label_80B7EBCC,
        &&label_80B7EBD0,
        &&label_80B7EBD4,
        &&label_80B7EBD8,
        &&label_80B7EBDC,
        &&label_80B7EBE0,
        &&label_80B7EBE4,
        &&label_80B7EBE8,
        &&label_80B7EBEC,
        &&label_80B7EBF0,
        &&label_80B7EBF4,
        &&label_80B7EBF8,
        &&label_80B7EBFC,
        &&label_80B7EC00,
        &&label_80B7EC04,
        &&label_80B7EC08,
        &&label_80B7EC0C,
        &&label_80B7EC10,
        &&label_80B7EC14,
        &&label_80B7EC18,
        &&label_80B7EC1C,
        &&label_80B7EC20,
        &&label_80B7EC24,
        &&label_80B7EC28,
        &&label_80B7EC2C,
        &&label_80B7EC30,
        &&label_80B7EC34,
        &&label_80B7EC38,
        &&label_80B7EC3C,
        &&label_80B7EC40,
        &&label_80B7EC44,
        &&label_80B7EC48,
        &&label_80B7EC4C,
        &&label_80B7EC50,
        &&label_80B7EC54,
        &&label_80B7EC58,
        &&label_80B7EC5C,
        &&label_80B7EC60,
        &&label_80B7EC64,
        &&label_80B7EC68,
        &&label_80B7EC6C,
        &&label_80B7EC70,
        &&label_80B7EC74,
        &&label_80B7EC78,
        &&label_80B7EC7C,
        &&label_80B7EC80,
        &&label_80B7EC84,
        &&label_80B7EC88,
        &&label_80B7EC8C,
        &&label_80B7EC90,
        &&label_80B7EC94,
        &&label_80B7EC98,
        &&label_80B7EC9C,
        &&label_80B7ECA0,
        &&label_80B7ECA4,
        &&label_80B7ECA8,
        &&label_80B7ECAC,
        &&label_80B7ECB0,
        &&label_80B7ECB4,
        &&label_80B7ECB8,
        &&label_80B7ECBC,
        &&label_80B7ECC0,
        &&label_80B7ECC4,
        &&label_80B7ECC8,
        &&label_80B7ECCC,
        &&label_80B7ECD0,
        &&label_80B7ECD4,
        &&label_80B7ECD8,
        &&label_80B7ECDC,
        &&label_80B7ECE0,
        &&label_80B7ECE4,
        &&label_80B7ECE8,
        &&label_80B7ECEC,
        &&label_80B7ECF0,
        &&label_80B7ECF4,
        &&label_80B7ECF8,
        &&label_80B7ECFC,
        &&label_80B7ED00,
        &&label_80B7ED04,
        &&label_80B7ED08,
        &&label_80B7ED0C,
        &&label_80B7ED10,
        &&label_80B7ED14,
        &&label_80B7ED18,
        &&label_80B7ED1C,
        &&label_80B7ED20,
        &&label_80B7ED24,
        &&label_80B7ED28,
        &&label_80B7ED2C,
        &&label_80B7ED30,
        &&label_80B7ED34,
        &&label_80B7ED38,
        &&label_80B7ED3C,
        &&label_80B7ED40,
        &&label_80B7ED44,
        &&label_80B7ED48,
        &&label_80B7ED4C,
        &&label_80B7ED50,
        &&label_80B7ED54,
        &&label_80B7ED58,
        &&label_80B7ED5C,
        &&label_80B7ED60,
        &&label_80B7ED64,
        &&label_80B7ED68,
        &&label_80B7ED6C,
        &&label_80B7ED70,
        &&label_80B7ED74,
        &&label_80B7ED78,
        &&label_80B7ED7C,
        &&label_80B7ED80,
        &&label_80B7ED84,
        &&label_80B7ED88,
        &&label_80B7ED8C,
        &&label_80B7ED90,
        &&label_80B7ED94,
        &&label_80B7ED98,
        &&label_80B7ED9C,
        &&label_80B7EDA0,
        &&label_80B7EDA4,
        &&label_80B7EDA8,
        &&label_80B7EDAC,
        &&label_80B7EDB0,
        &&label_80B7EDB4,
        &&label_80B7EDB8,
        &&label_80B7EDBC,
        &&label_80B7EDC0,
        &&label_80B7EDC4,
        &&label_80B7EDC8,
        &&label_80B7EDCC,
        &&label_80B7EDD0,
        &&label_80B7EDD4,
        &&label_80B7EDD8,
        &&label_80B7EDDC,
        &&label_80B7EDE0,
        &&label_80B7EDE4,
        &&label_80B7EDE8,
        &&label_80B7EDEC,
        &&label_80B7EDF0,
        &&label_80B7EDF4,
        &&label_80B7EDF8,
        &&label_80B7EDFC,
        &&label_80B7EE00,
        &&label_80B7EE04,
        &&label_80B7EE08,
        &&label_80B7EE0C,
        &&label_80B7EE10,
        &&label_80B7EE14,
        &&label_80B7EE18,
        &&label_80B7EE1C,
        &&label_80B7EE20,
        &&label_80B7EE24,
        &&label_80B7EE28,
        &&label_80B7EE2C,
        &&label_80B7EE30,
        &&label_80B7EE34,
        &&label_80B7EE38,
        &&label_80B7EE3C,
        &&label_80B7EE40,
        &&label_80B7EE44,
        &&label_80B7EE48,
        &&label_80B7EE4C,
        &&label_80B7EE50,
        &&label_80B7EE54,
        &&label_80B7EE58,
        &&label_80B7EE5C,
        &&label_80B7EE60,
        &&label_80B7EE64,
        &&label_80B7EE68,
        &&label_80B7EE6C,
        &&label_80B7EE70,
        &&label_80B7EE74,
        &&label_80B7EE78,
        &&label_80B7EE7C,
        &&label_80B7EE80,
        &&label_80B7EE84,
        &&label_80B7EE88,
        &&label_80B7EE8C,
        &&label_80B7EE90,
        &&label_80B7EE94,
        &&label_80B7EE98,
        &&label_80B7EE9C,
        &&label_80B7EEA0,
        &&label_80B7EEA4,
        &&label_80B7EEA8,
        &&label_80B7EEAC,
        &&label_80B7EEB0,
        &&label_80B7EEB4,
        &&label_80B7EEB8,
        &&label_80B7EEBC,
        &&label_80B7EEC0,
        &&label_80B7EEC4,
        &&label_80B7EEC8,
        &&label_80B7EECC,
        &&label_80B7EED0,
        &&label_80B7EED4,
        &&label_80B7EED8,
        &&label_80B7EEDC,
        &&label_80B7EEE0,
        &&label_80B7EEE4,
        &&label_80B7EEE8,
        &&label_80B7EEEC,
        &&label_80B7EEF0,
        &&label_80B7EEF4,
        &&label_80B7EEF8,
        &&label_80B7EEFC,
        &&label_80B7EF00,
        &&label_80B7EF04,
        &&label_80B7EF08,
        &&label_80B7EF0C,
        &&label_80B7EF10,
        &&label_80B7EF14,
        &&label_80B7EF18,
        &&label_80B7EF1C,
        &&label_80B7EF20,
        &&label_80B7EF24,
        &&label_80B7EF28,
        &&label_80B7EF2C,
        &&label_80B7EF30,
        &&label_80B7EF34,
        &&label_80B7EF38,
        &&label_80B7EF3C,
        &&label_80B7EF40,
        &&label_80B7EF44,
        &&label_80B7EF48,
        &&label_80B7EF4C,
        &&label_80B7EF50,
        &&label_80B7EF54,
        &&label_80B7EF58,
        &&label_80B7EF5C,
        &&label_80B7EF60,
        &&label_80B7EF64,
        &&label_80B7EF68,
        &&label_80B7EF6C,
        &&label_80B7EF70,
        &&label_80B7EF74,
        &&label_80B7EF78,
        &&label_80B7EF7C,
        &&label_80B7EF80,
        &&label_80B7EF84,
        &&label_80B7EF88,
        &&label_80B7EF8C,
        &&label_80B7EF90,
        &&label_80B7EF94,
        &&label_80B7EF98,
        &&label_80B7EF9C,
        &&label_80B7EFA0,
        &&label_80B7EFA4,
        &&label_80B7EFA8,
        &&label_80B7EFAC,
        &&label_80B7EFB0,
        &&label_80B7EFB4,
        &&label_80B7EFB8,
        &&label_80B7EFBC,
        &&label_80B7EFC0,
        &&label_80B7EFC4,
        &&label_80B7EFC8,
        &&label_80B7EFCC,
        &&label_80B7EFD0,
        &&label_80B7EFD4,
        &&label_80B7EFD8,
        &&label_80B7EFDC,
        &&label_80B7EFE0,
        &&label_80B7EFE4,
        &&label_80B7EFE8,
        &&label_80B7EFEC,
        &&label_80B7EFF0,
        &&label_80B7EFF4,
        &&label_80B7EFF8,
        &&label_80B7EFFC,
        &&label_80B7F000,
        &&label_80B7F004,
        &&label_80B7F008,
        &&label_80B7F00C,
        &&label_80B7F010,
        &&label_80B7F014,
        &&label_80B7F018,
        &&label_80B7F01C,
        &&label_80B7F020,
        &&label_80B7F024,
        &&label_80B7F028,
        &&label_80B7F02C,
        &&label_80B7F030,
        &&label_80B7F034,
        &&label_80B7F038,
        &&label_80B7F03C,
        &&label_80B7F040,
        &&label_80B7F044,
        &&label_80B7F048,
        &&label_80B7F04C,
        &&label_80B7F050,
        &&label_80B7F054,
        &&label_80B7F058,
        &&label_80B7F05C,
        &&label_80B7F060,
        &&label_80B7F064,
        &&label_80B7F068,
        &&label_80B7F06C,
        &&label_80B7F070,
        &&label_80B7F074,
        &&label_80B7F078,
        &&label_80B7F07C,
        &&label_80B7F080,
        &&label_80B7F084,
        &&label_80B7F088,
        &&label_80B7F08C,
        &&label_80B7F090,
        &&label_80B7F094,
        &&label_80B7F098,
        &&label_80B7F09C,
        &&label_80B7F0A0,
        &&label_80B7F0A4,
        &&label_80B7F0A8,
        &&label_80B7F0AC,
        &&label_80B7F0B0,
        &&label_80B7F0B4,
        &&label_80B7F0B8,
        &&label_80B7F0BC,
        &&label_80B7F0C0,
        &&label_80B7F0C4,
        &&label_80B7F0C8,
        &&label_80B7F0CC,
        &&label_80B7F0D0,
        &&label_80B7F0D4,
        &&label_80B7F0D8,
        &&label_80B7F0DC,
        &&label_80B7F0E0,
        &&label_80B7F0E4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80B7D2C0u && pc <= 0x80B7F0E4u && ((pc - 0x80B7D2C0u) & 3u) == 0u)
            goto *pc_table_80B7D2C0[(pc - 0x80B7D2C0u) >> 2];
    }
    return;
label_80B7D2C0:
    ctx->pc = 0x80B7D2C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D2C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7D2C0: stwu     r1, -48(r1)
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
label_80B7D2C4:
    ctx->pc = 0x80B7D2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7D2C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7D2C8:
    ctx->pc = 0x80B7D2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D2C8: stw     r0, 52(r1)
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
label_80B7D2CC:
    ctx->pc = 0x80B7D2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7D2CC: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7D2CCu)) return;
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
label_80B7D2D0:
    ctx->pc = 0x80B7D2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7D2D0: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7D2D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80B7D2D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7D2D4:
    ctx->pc = 0x80B7D2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D2D4: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7D2D4u)) return;
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
label_80B7D2D8:
    ctx->pc = 0x80B7D2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7D2D8: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7D2D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80B7D2D8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7D2DC:
    ctx->pc = 0x80B7D2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D2DC: stw     r31, 12(r1)
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
label_80B7D2E0:
    ctx->pc = 0x80B7D2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2E0u)) return;
    // 80B7D2E0: cmpwi   r3, 2
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

label_80B7D2E4:
    ctx->pc = 0x80B7D2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2E4u)) return;
    // 80B7D2E4: bc    12, 2, 0x80B7E688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E688;
        }
    }

label_80B7D2E8:
    ctx->pc = 0x80B7D2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7D2E8: bc    4, 0, 0x80B7D2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7D2FC;
        }
    }

label_80B7D2EC:
    ctx->pc = 0x80B7D2ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D2ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D2EC: cmpwi   r3, 0
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

label_80B7D2F0:
    ctx->pc = 0x80B7D2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D2F0u)) return;
    // 80B7D2F0: bc    12, 2, 0x80B7E748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E748;
        }
    }

label_80B7D2F4:
    ctx->pc = 0x80B7D2F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D2F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7D2F4: bc    4, 0, 0x80B7D304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7D304;
        }
    }

label_80B7D2F8:
    ctx->pc = 0x80B7D2F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D2F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7D2F8: b       0x80B7E748
    {
            goto label_80B7E748;
    }

label_80B7D2FC:
    ctx->pc = 0x80B7D2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D2FC: cmpwi   r3, 4
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

label_80B7D300:
    ctx->pc = 0x80B7D300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D300u)) return;
    // 80B7D300: b       0x80B7E748
    {
            goto label_80B7E748;
    }

label_80B7D304:
    ctx->pc = 0x80B7D304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D304: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D308:
    ctx->pc = 0x80B7D308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D308u)) return;
    // 80B7D308: bl      0x804C9040
    {
            ctx->lr = 0x80B7D30Cu;
            ctx->pc = 0x804C9040u;
            return;
    }

label_80B7D30C:
    ctx->pc = 0x80B7D30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7D30C: lha     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7D310:
    ctx->pc = 0x80B7D310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D310u)) return;
    // 80B7D310: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D314:
    ctx->pc = 0x80B7D314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D314u)) return;
    // 80B7D314: addi    r3, r3, -32632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32632);

label_80B7D318:
    ctx->pc = 0x80B7D318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7D318: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7D31C:
    ctx->pc = 0x80B7D31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D31Cu)) return;
    // 80B7D31C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80B7D320:
    ctx->pc = 0x80B7D320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D320u)) return;
    // 80B7D320: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D324:
    ctx->pc = 0x80B7D324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D324u)) return;
    // 80B7D324: addi    r3, r3, -32628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32628);

label_80B7D328:
    ctx->pc = 0x80B7D328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D328: stw     r0, 0(r3)
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
label_80B7D32C:
    ctx->pc = 0x80B7D32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D32Cu)) return;
    // 80B7D32C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D330:
    ctx->pc = 0x80B7D330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D330u)) return;
    // 80B7D330: bl      0x804C9040
    {
            ctx->lr = 0x80B7D334u;
            ctx->pc = 0x804C9040u;
            return;
    }

label_80B7D334:
    ctx->pc = 0x80B7D334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D334: lha     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7D338:
    ctx->pc = 0x80B7D338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D338u)) return;
    // 80B7D338: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_80B7D33C:
    ctx->pc = 0x80B7D33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D33Cu)) return;
    // 80B7D33C: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80B7D340:
    ctx->pc = 0x80B7D340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D340: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7D344:
    ctx->pc = 0x80B7D344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D344u)) return;
    // 80B7D344: bl      0x8045DE7C
    {
            ctx->lr = 0x80B7D348u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80B7D348:
    ctx->pc = 0x80B7D348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7D348: bl      0x80460A60
    {
            ctx->lr = 0x80B7D34Cu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80B7D34C:
    ctx->pc = 0x80B7D34Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D34Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7D34C: bl      0x80460A24
    {
            ctx->lr = 0x80B7D350u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80B7D350:
    ctx->pc = 0x80B7D350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D350: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D354:
    ctx->pc = 0x80B7D354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D354u)) return;
    // 80B7D354: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80B7D358:
    ctx->pc = 0x80B7D358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D358u)) return;
    // 80B7D358: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80B7D35C:
    ctx->pc = 0x80B7D35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D35Cu)) return;
    // 80B7D35C: bl      0x8045C0F8
    {
            ctx->lr = 0x80B7D360u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80B7D360:
    ctx->pc = 0x80B7D360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D360: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D364:
    ctx->pc = 0x80B7D364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D364u)) return;
    // 80B7D364: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D368u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D368:
    ctx->pc = 0x80B7D368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D368: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D36C:
    ctx->pc = 0x80B7D36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D36Cu)) return;
    // 80B7D36C: bl      0x8045EC10
    {
            ctx->lr = 0x80B7D370u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B7D370:
    ctx->pc = 0x80B7D370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D370: li      r3, 36
    ctx->gpr[3] = (u32)(s32)(36);

label_80B7D374:
    ctx->pc = 0x80B7D374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D374u)) return;
    // 80B7D374: bl      0x80406090
    {
            ctx->lr = 0x80B7D378u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80B7D378:
    ctx->pc = 0x80B7D378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D378: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D37C:
    ctx->pc = 0x80B7D37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D37Cu)) return;
    // 80B7D37C: addi    r3, r3, -32636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32636);

label_80B7D380:
    ctx->pc = 0x80B7D380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D380: lwz     r3, 0(r3)
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
label_80B7D384:
    ctx->pc = 0x80B7D384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D384u)) return;
    // 80B7D384: cmplwi  r3, 0x0000
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

label_80B7D388:
    ctx->pc = 0x80B7D388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D388u)) return;
    // 80B7D388: bc    12, 2, 0x80B7D39C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7D39C;
        }
    }

label_80B7D38C:
    ctx->pc = 0x80B7D38Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D38Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D38C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D390:
    ctx->pc = 0x80B7D390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D390u)) return;
    // 80B7D390: addi    r4, r4, 10032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10032);

label_80B7D394:
    ctx->pc = 0x80B7D394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D394: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D394u)) return;
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
label_80B7D398:
    ctx->pc = 0x80B7D398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D398u)) return;
    // 80B7D398: bl      0x80B7EA7C
    {
            ctx->lr = 0x80B7D39Cu;
            goto label_80B7EA7C;
    }

label_80B7D39C:
    ctx->pc = 0x80B7D39Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D39Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D39C: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D3A0:
    ctx->pc = 0x80B7D3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3A0u)) return;
    // 80B7D3A0: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7D3A4:
    ctx->pc = 0x80B7D3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D3A4: lwz     r3, 0(r3)
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
label_80B7D3A8:
    ctx->pc = 0x80B7D3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3A8u)) return;
    // 80B7D3A8: cmplwi  r3, 0x0000
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

label_80B7D3AC:
    ctx->pc = 0x80B7D3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3ACu)) return;
    // 80B7D3AC: bc    12, 2, 0x80B7D3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7D3C0;
        }
    }

label_80B7D3B0:
    ctx->pc = 0x80B7D3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D3B0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D3B4:
    ctx->pc = 0x80B7D3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3B4u)) return;
    // 80B7D3B4: addi    r4, r4, 10036
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10036);

label_80B7D3B8:
    ctx->pc = 0x80B7D3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D3B8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D3B8u)) return;
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
label_80B7D3BC:
    ctx->pc = 0x80B7D3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3BCu)) return;
    // 80B7D3BC: bl      0x80B7EA7C
    {
            ctx->lr = 0x80B7D3C0u;
            goto label_80B7EA7C;
    }

label_80B7D3C0:
    ctx->pc = 0x80B7D3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7D3C0: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7D3C4:
    ctx->pc = 0x80B7D3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3C4u)) return;
    // 80B7D3C4: addi    r3, r3, 10040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10040);

label_80B7D3C8:
    ctx->pc = 0x80B7D3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7D3C8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7D3C8u)) return;
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
label_80B7D3CC:
    ctx->pc = 0x80B7D3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3CCu)) return;
    // 80B7D3CC: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7D3D0:
    ctx->pc = 0x80B7D3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3D0u)) return;
    // 80B7D3D0: addi    r3, r3, 10044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10044);

label_80B7D3D4:
    ctx->pc = 0x80B7D3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7D3D4: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7D3D4u)) return;
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
label_80B7D3D8:
    ctx->pc = 0x80B7D3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3D8u)) return;
    // 80B7D3D8: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7D3DC:
    ctx->pc = 0x80B7D3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3DCu)) return;
    // 80B7D3DC: addi    r3, r3, 10048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10048);

label_80B7D3E0:
    ctx->pc = 0x80B7D3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7D3E0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7D3E0u)) return;
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
label_80B7D3E4:
    ctx->pc = 0x80B7D3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3E4u)) return;
    // 80B7D3E4: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80B7D3E4u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80B7D3E8:
    ctx->pc = 0x80B7D3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3E8u)) return;
    // 80B7D3E8: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80B7D3E8u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80B7D3EC:
    ctx->pc = 0x80B7D3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3ECu)) return;
    // 80B7D3EC: bl      0x80B7E994
    {
            ctx->lr = 0x80B7D3F0u;
            goto label_80B7E994;
    }

label_80B7D3F0:
    ctx->pc = 0x80B7D3F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D3F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80B7D3F0: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7D3F4:
    ctx->pc = 0x80B7D3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3F4u)) return;
    // 80B7D3F4: addi    r4, r4, -32636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32636);

label_80B7D3F8:
    ctx->pc = 0x80B7D3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B7D3F8: stw     r3, 0(r4)
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
label_80B7D3FC:
    ctx->pc = 0x80B7D3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D3FCu)) return;
    // 80B7D3FC: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7D400:
    ctx->pc = 0x80B7D400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D400u)) return;
    // 80B7D400: addi    r3, r3, 10052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10052);

label_80B7D404:
    ctx->pc = 0x80B7D404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7D404: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7D404u)) return;
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
label_80B7D408:
    ctx->pc = 0x80B7D408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D408u)) return;
    // 80B7D408: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7D40C:
    ctx->pc = 0x80B7D40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D40Cu)) return;
    // 80B7D40C: addi    r3, r3, 10056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10056);

label_80B7D410:
    ctx->pc = 0x80B7D410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7D410: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7D410u)) return;
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
label_80B7D414:
    ctx->pc = 0x80B7D414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D414u)) return;
    // 80B7D414: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7D418:
    ctx->pc = 0x80B7D418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D418u)) return;
    // 80B7D418: addi    r3, r3, 10060
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10060);

label_80B7D41C:
    ctx->pc = 0x80B7D41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D41C: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7D41Cu)) return;
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
label_80B7D420:
    ctx->pc = 0x80B7D420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D420u)) return;
    // 80B7D420: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7D424:
    ctx->pc = 0x80B7D424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D424u)) return;
    // 80B7D424: addi    r3, r3, 10064
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10064);

label_80B7D428:
    ctx->pc = 0x80B7D428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D428: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7D428u)) return;
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
label_80B7D42C:
    ctx->pc = 0x80B7D42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D42Cu)) return;
    // 80B7D42C: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7D430:
    ctx->pc = 0x80B7D430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D430u)) return;
    // 80B7D430: addi    r3, r3, 10068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10068);

label_80B7D434:
    ctx->pc = 0x80B7D434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D434: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7D434u)) return;
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
label_80B7D438:
    ctx->pc = 0x80B7D438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D438u)) return;
    // 80B7D438: bl      0x80B7E994
    {
            ctx->lr = 0x80B7D43Cu;
            goto label_80B7E994;
    }

label_80B7D43C:
    ctx->pc = 0x80B7D43Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D43Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D43C: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7D440:
    ctx->pc = 0x80B7D440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D440u)) return;
    // 80B7D440: addi    r4, r4, -32640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32640);

label_80B7D444:
    ctx->pc = 0x80B7D444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D444: stw     r3, 0(r4)
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
label_80B7D448:
    ctx->pc = 0x80B7D448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D448u)) return;
    // 80B7D448: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D44C:
    ctx->pc = 0x80B7D44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D44Cu)) return;
    // 80B7D44C: bl      0x8045F220
    {
            ctx->lr = 0x80B7D450u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D450:
    ctx->pc = 0x80B7D450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7D450: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D454:
    ctx->pc = 0x80B7D454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D454u)) return;
    // 80B7D454: addi    r4, r4, 10072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10072);

label_80B7D458:
    ctx->pc = 0x80B7D458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D458: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D458u)) return;
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
label_80B7D45C:
    ctx->pc = 0x80B7D45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D45Cu)) return;
    // 80B7D45C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D460:
    ctx->pc = 0x80B7D460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D460u)) return;
    // 80B7D460: addi    r4, r4, 10076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10076);

label_80B7D464:
    ctx->pc = 0x80B7D464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D464: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D464u)) return;
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
label_80B7D468:
    ctx->pc = 0x80B7D468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D468u)) return;
    // 80B7D468: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D46C:
    ctx->pc = 0x80B7D46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D46Cu)) return;
    // 80B7D46C: addi    r4, r4, 10080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10080);

label_80B7D470:
    ctx->pc = 0x80B7D470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D470: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D470u)) return;
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
label_80B7D474:
    ctx->pc = 0x80B7D474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D474u)) return;
    // 80B7D474: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7D478u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7D478:
    ctx->pc = 0x80B7D478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D478: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D47C:
    ctx->pc = 0x80B7D47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D47Cu)) return;
    // 80B7D47C: bl      0x8045F220
    {
            ctx->lr = 0x80B7D480u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D480:
    ctx->pc = 0x80B7D480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D480: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7D484:
    ctx->pc = 0x80B7D484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D484u)) return;
    // 80B7D484: addi    r4, r6, -64
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-64);

label_80B7D488:
    ctx->pc = 0x80B7D488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D488u)) return;
    // 80B7D488: li      r5, 10240
    ctx->gpr[5] = (u32)(s32)(10240);

label_80B7D48C:
    ctx->pc = 0x80B7D48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D48Cu)) return;
    // 80B7D48C: addi    r6, r6, -777
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-777);

label_80B7D490:
    ctx->pc = 0x80B7D490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D490u)) return;
    // 80B7D490: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7D494u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7D494:
    ctx->pc = 0x80B7D494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B7D494: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7D498:
    ctx->pc = 0x80B7D498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D498u)) return;
    // 80B7D498: lis     r4, -32677
    ctx->gpr[4] = ((u32)(s32)(-32677) << 16);

label_80B7D49C:
    ctx->pc = 0x80B7D49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D49Cu)) return;
    // 80B7D49C: addi    r4, r4, -3644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3644);

label_80B7D4A0:
    ctx->pc = 0x80B7D4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4A0u)) return;
    // 80B7D4A0: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D4A4:
    ctx->pc = 0x80B7D4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4A4u)) return;
    // 80B7D4A4: addi    r5, r5, 10084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10084);

label_80B7D4A8:
    ctx->pc = 0x80B7D4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7D4A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D4A8u)) return;
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
label_80B7D4AC:
    ctx->pc = 0x80B7D4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4ACu)) return;
    // 80B7D4AC: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D4B0:
    ctx->pc = 0x80B7D4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4B0u)) return;
    // 80B7D4B0: addi    r5, r5, 10088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10088);

label_80B7D4B4:
    ctx->pc = 0x80B7D4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7D4B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D4B4u)) return;
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
label_80B7D4B8:
    ctx->pc = 0x80B7D4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4B8u)) return;
    // 80B7D4B8: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D4BC:
    ctx->pc = 0x80B7D4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4BCu)) return;
    // 80B7D4BC: addi    r5, r5, 10092
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10092);

label_80B7D4C0:
    ctx->pc = 0x80B7D4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7D4C0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D4C0u)) return;
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
label_80B7D4C4:
    ctx->pc = 0x80B7D4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4C4u)) return;
    // 80B7D4C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B7D4C8:
    ctx->pc = 0x80B7D4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4C8u)) return;
    // 80B7D4C8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7D4CC:
    ctx->pc = 0x80B7D4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4CCu)) return;
    // 80B7D4CC: addi    r6, r6, -1536
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1536);

label_80B7D4D0:
    ctx->pc = 0x80B7D4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4D0u)) return;
    // 80B7D4D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7D4D4:
    ctx->pc = 0x80B7D4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4D4u)) return;
    // 80B7D4D4: bl      0x8045ED84
    {
            ctx->lr = 0x80B7D4D8u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80B7D4D8:
    ctx->pc = 0x80B7D4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D4D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D4DC:
    ctx->pc = 0x80B7D4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4DCu)) return;
    // 80B7D4DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D4E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D4E0:
    ctx->pc = 0x80B7D4E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D4E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D4E0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7D4E4:
    ctx->pc = 0x80B7D4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4E4u)) return;
    // 80B7D4E4: bl      0x8045F220
    {
            ctx->lr = 0x80B7D4E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D4E8:
    ctx->pc = 0x80B7D4E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D4E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7D4E8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D4EC:
    ctx->pc = 0x80B7D4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4ECu)) return;
    // 80B7D4EC: addi    r4, r4, 10096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10096);

label_80B7D4F0:
    ctx->pc = 0x80B7D4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D4F0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D4F0u)) return;
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
label_80B7D4F4:
    ctx->pc = 0x80B7D4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4F4u)) return;
    // 80B7D4F4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D4F8:
    ctx->pc = 0x80B7D4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4F8u)) return;
    // 80B7D4F8: addi    r4, r4, 10100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10100);

label_80B7D4FC:
    ctx->pc = 0x80B7D4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D4FC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D4FCu)) return;
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
label_80B7D500:
    ctx->pc = 0x80B7D500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D500u)) return;
    // 80B7D500: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D504:
    ctx->pc = 0x80B7D504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D504u)) return;
    // 80B7D504: addi    r4, r4, 10104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10104);

label_80B7D508:
    ctx->pc = 0x80B7D508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D508: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D508u)) return;
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
label_80B7D50C:
    ctx->pc = 0x80B7D50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D50Cu)) return;
    // 80B7D50C: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7D510u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7D510:
    ctx->pc = 0x80B7D510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D510: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7D514:
    ctx->pc = 0x80B7D514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D514u)) return;
    // 80B7D514: bl      0x8045F220
    {
            ctx->lr = 0x80B7D518u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D518:
    ctx->pc = 0x80B7D518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D518: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D51C:
    ctx->pc = 0x80B7D51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D51Cu)) return;
    // 80B7D51C: li      r5, 4169
    ctx->gpr[5] = (u32)(s32)(4169);

label_80B7D520:
    ctx->pc = 0x80B7D520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D520u)) return;
    // 80B7D520: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7D524:
    ctx->pc = 0x80B7D524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D524u)) return;
    // 80B7D524: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7D528u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7D528:
    ctx->pc = 0x80B7D528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D528: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D52C:
    ctx->pc = 0x80B7D52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D52Cu)) return;
    // 80B7D52C: addi    r3, r3, -32636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32636);

label_80B7D530:
    ctx->pc = 0x80B7D530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D530: lwz     r3, 0(r3)
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
label_80B7D534:
    ctx->pc = 0x80B7D534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D534u)) return;
    // 80B7D534: cmplwi  r3, 0x0000
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

label_80B7D538:
    ctx->pc = 0x80B7D538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D538u)) return;
    // 80B7D538: bc    12, 2, 0x80B7D54C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7D54C;
        }
    }

label_80B7D53C:
    ctx->pc = 0x80B7D53Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D53Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D53C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D540:
    ctx->pc = 0x80B7D540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D540u)) return;
    // 80B7D540: addi    r4, r4, 10108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10108);

label_80B7D544:
    ctx->pc = 0x80B7D544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D544: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D544u)) return;
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
label_80B7D548:
    ctx->pc = 0x80B7D548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D548u)) return;
    // 80B7D548: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7D54Cu;
            goto label_80B7EA50;
    }

label_80B7D54C:
    ctx->pc = 0x80B7D54Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D54Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7D54C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D550:
    ctx->pc = 0x80B7D550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D550u)) return;
    // 80B7D550: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D554:
    ctx->pc = 0x80B7D554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D554u)) return;
    // 80B7D554: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D558:
    ctx->pc = 0x80B7D558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D558u)) return;
    // 80B7D558: addi    r5, r5, 10112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10112);

label_80B7D55C:
    ctx->pc = 0x80B7D55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D55C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D55Cu)) return;
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
label_80B7D560:
    ctx->pc = 0x80B7D560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D560u)) return;
    // 80B7D560: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D564:
    ctx->pc = 0x80B7D564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D564u)) return;
    // 80B7D564: addi    r5, r5, 10116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10116);

label_80B7D568:
    ctx->pc = 0x80B7D568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D568: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D568u)) return;
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
label_80B7D56C:
    ctx->pc = 0x80B7D56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D56Cu)) return;
    // 80B7D56C: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D570:
    ctx->pc = 0x80B7D570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D570u)) return;
    // 80B7D570: addi    r5, r5, 10120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10120);

label_80B7D574:
    ctx->pc = 0x80B7D574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D574: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D574u)) return;
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
label_80B7D578:
    ctx->pc = 0x80B7D578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D578u)) return;
    // 80B7D578: bl      0x8045C750
    {
            ctx->lr = 0x80B7D57Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7D57C:
    ctx->pc = 0x80B7D57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7D57C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D580:
    ctx->pc = 0x80B7D580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D580u)) return;
    // 80B7D580: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D584:
    ctx->pc = 0x80B7D584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D584u)) return;
    // 80B7D584: li      r5, 1792
    ctx->gpr[5] = (u32)(s32)(1792);

label_80B7D588:
    ctx->pc = 0x80B7D588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D588u)) return;
    // 80B7D588: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7D58C:
    ctx->pc = 0x80B7D58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D58Cu)) return;
    // 80B7D58C: addi    r6, r6, -23552
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23552);

label_80B7D590:
    ctx->pc = 0x80B7D590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D590u)) return;
    // 80B7D590: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80B7D594:
    ctx->pc = 0x80B7D594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D594u)) return;
    // 80B7D594: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7D598u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7D598:
    ctx->pc = 0x80B7D598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7D598: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D59C:
    ctx->pc = 0x80B7D59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D59Cu)) return;
    // 80B7D59C: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80B7D5A0:
    ctx->pc = 0x80B7D5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5A0u)) return;
    // 80B7D5A0: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D5A4:
    ctx->pc = 0x80B7D5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5A4u)) return;
    // 80B7D5A4: addi    r5, r5, 10124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10124);

label_80B7D5A8:
    ctx->pc = 0x80B7D5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D5A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D5A8u)) return;
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
label_80B7D5AC:
    ctx->pc = 0x80B7D5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5ACu)) return;
    // 80B7D5AC: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D5B0:
    ctx->pc = 0x80B7D5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5B0u)) return;
    // 80B7D5B0: addi    r5, r5, 10128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10128);

label_80B7D5B4:
    ctx->pc = 0x80B7D5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D5B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D5B4u)) return;
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
label_80B7D5B8:
    ctx->pc = 0x80B7D5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5B8u)) return;
    // 80B7D5B8: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D5BC:
    ctx->pc = 0x80B7D5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5BCu)) return;
    // 80B7D5BC: addi    r5, r5, 10132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10132);

label_80B7D5C0:
    ctx->pc = 0x80B7D5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D5C0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D5C0u)) return;
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
label_80B7D5C4:
    ctx->pc = 0x80B7D5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5C4u)) return;
    // 80B7D5C4: bl      0x8045C750
    {
            ctx->lr = 0x80B7D5C8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7D5C8:
    ctx->pc = 0x80B7D5C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D5C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7D5C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D5CC:
    ctx->pc = 0x80B7D5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5CCu)) return;
    // 80B7D5CC: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80B7D5D0:
    ctx->pc = 0x80B7D5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5D0u)) return;
    // 80B7D5D0: li      r5, 2355
    ctx->gpr[5] = (u32)(s32)(2355);

label_80B7D5D4:
    ctx->pc = 0x80B7D5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5D4u)) return;
    // 80B7D5D4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7D5D8:
    ctx->pc = 0x80B7D5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5D8u)) return;
    // 80B7D5D8: addi    r6, r6, -24489
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24489);

label_80B7D5DC:
    ctx->pc = 0x80B7D5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5DCu)) return;
    // 80B7D5DC: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80B7D5E0:
    ctx->pc = 0x80B7D5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5E0u)) return;
    // 80B7D5E0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7D5E4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7D5E4:
    ctx->pc = 0x80B7D5E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D5E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D5E4: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B7D5E8:
    ctx->pc = 0x80B7D5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5E8u)) return;
    // 80B7D5E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D5ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D5EC:
    ctx->pc = 0x80B7D5ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D5ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D5EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D5F0:
    ctx->pc = 0x80B7D5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5F0u)) return;
    // 80B7D5F0: bl      0x8045F220
    {
            ctx->lr = 0x80B7D5F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D5F4:
    ctx->pc = 0x80B7D5F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D5F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7D5F4: lis     r4, -27543
    ctx->gpr[4] = ((u32)(s32)(-27543) << 16);

label_80B7D5F8:
    ctx->pc = 0x80B7D5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5F8u)) return;
    // 80B7D5F8: addi    r4, r4, 13556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13556);

label_80B7D5FC:
    ctx->pc = 0x80B7D5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D5FCu)) return;
    // 80B7D5FC: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7D600:
    ctx->pc = 0x80B7D600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D600u)) return;
    // 80B7D600: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7D604:
    ctx->pc = 0x80B7D604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D604u)) return;
    // 80B7D604: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7D608:
    ctx->pc = 0x80B7D608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D608u)) return;
    // 80B7D608: addi    r6, r6, 10136
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10136);

label_80B7D60C:
    ctx->pc = 0x80B7D60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D60Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7D60C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7D60Cu)) return;
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
label_80B7D610:
    ctx->pc = 0x80B7D610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D610u)) return;
    // 80B7D610: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7D614:
    ctx->pc = 0x80B7D614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D614u)) return;
    // 80B7D614: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7D618:
    ctx->pc = 0x80B7D618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D618u)) return;
    // 80B7D618: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7D61Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7D61C:
    ctx->pc = 0x80B7D61Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D61Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7D61C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D620:
    ctx->pc = 0x80B7D620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D620u)) return;
    // 80B7D620: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D624:
    ctx->pc = 0x80B7D624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D624u)) return;
    // 80B7D624: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D628:
    ctx->pc = 0x80B7D628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D628u)) return;
    // 80B7D628: addi    r5, r5, 10140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10140);

label_80B7D62C:
    ctx->pc = 0x80B7D62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D62C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D62Cu)) return;
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
label_80B7D630:
    ctx->pc = 0x80B7D630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D630u)) return;
    // 80B7D630: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D634:
    ctx->pc = 0x80B7D634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D634u)) return;
    // 80B7D634: addi    r5, r5, 10144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10144);

label_80B7D638:
    ctx->pc = 0x80B7D638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D638: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D638u)) return;
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
label_80B7D63C:
    ctx->pc = 0x80B7D63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D63Cu)) return;
    // 80B7D63C: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D640:
    ctx->pc = 0x80B7D640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D640u)) return;
    // 80B7D640: addi    r5, r5, 10148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10148);

label_80B7D644:
    ctx->pc = 0x80B7D644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D644: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D644u)) return;
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
label_80B7D648:
    ctx->pc = 0x80B7D648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D648u)) return;
    // 80B7D648: bl      0x8045C750
    {
            ctx->lr = 0x80B7D64Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7D64C:
    ctx->pc = 0x80B7D64Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D64Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D64C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D650:
    ctx->pc = 0x80B7D650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D650u)) return;
    // 80B7D650: bl      0x8045F220
    {
            ctx->lr = 0x80B7D654u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D654:
    ctx->pc = 0x80B7D654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7D654: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7D658:
    ctx->pc = 0x80B7D658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D658u)) return;
    // 80B7D658: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D65C:
    ctx->pc = 0x80B7D65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D65Cu)) return;
    // 80B7D65C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D660:
    ctx->pc = 0x80B7D660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D660u)) return;
    // 80B7D660: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7D664:
    ctx->pc = 0x80B7D664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D664u)) return;
    // 80B7D664: addi    r6, r6, 10048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10048);

label_80B7D668:
    ctx->pc = 0x80B7D668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D668: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7D668u)) return;
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
label_80B7D66C:
    ctx->pc = 0x80B7D66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D66Cu)) return;
    // 80B7D66C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7D66Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80B7D670:
    ctx->pc = 0x80B7D670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D670u)) return;
    // 80B7D670: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7D670u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B7D674:
    ctx->pc = 0x80B7D674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D674u)) return;
    // 80B7D674: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7D678:
    ctx->pc = 0x80B7D678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D678u)) return;
    // 80B7D678: bl      0x8045C3C0
    {
            ctx->lr = 0x80B7D67Cu;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B7D67C:
    ctx->pc = 0x80B7D67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D67C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80B7D680:
    ctx->pc = 0x80B7D680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D680u)) return;
    // 80B7D680: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D684u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D684:
    ctx->pc = 0x80B7D684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D684: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D688:
    ctx->pc = 0x80B7D688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D688u)) return;
    // 80B7D688: bl      0x8045F220
    {
            ctx->lr = 0x80B7D68Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D68C:
    ctx->pc = 0x80B7D68Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D68Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B7D68C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7D690:
    ctx->pc = 0x80B7D690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D690u)) return;
    // 80B7D690: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D694:
    ctx->pc = 0x80B7D694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D694u)) return;
    // 80B7D694: li      r4, 45
    ctx->gpr[4] = (u32)(s32)(45);

label_80B7D698:
    ctx->pc = 0x80B7D698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D698u)) return;
    // 80B7D698: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7D69C:
    ctx->pc = 0x80B7D69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D69Cu)) return;
    // 80B7D69C: addi    r6, r6, 10048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10048);

label_80B7D6A0:
    ctx->pc = 0x80B7D6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D6A0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7D6A0u)) return;
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
label_80B7D6A4:
    ctx->pc = 0x80B7D6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6A4u)) return;
    // 80B7D6A4: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7D6A8:
    ctx->pc = 0x80B7D6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6A8u)) return;
    // 80B7D6A8: addi    r6, r6, 10152
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10152);

label_80B7D6AC:
    ctx->pc = 0x80B7D6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D6AC: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7D6ACu)) return;
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
label_80B7D6B0:
    ctx->pc = 0x80B7D6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6B0u)) return;
    // 80B7D6B0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7D6B0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B7D6B4:
    ctx->pc = 0x80B7D6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6B4u)) return;
    // 80B7D6B4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7D6B8:
    ctx->pc = 0x80B7D6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6B8u)) return;
    // 80B7D6B8: addi    r6, r6, -1280
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1280);

label_80B7D6BC:
    ctx->pc = 0x80B7D6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6BCu)) return;
    // 80B7D6BC: bl      0x8045C3C0
    {
            ctx->lr = 0x80B7D6C0u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B7D6C0:
    ctx->pc = 0x80B7D6C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D6C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D6C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D6C4:
    ctx->pc = 0x80B7D6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6C4u)) return;
    // 80B7D6C4: bl      0x8045F220
    {
            ctx->lr = 0x80B7D6C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D6C8:
    ctx->pc = 0x80B7D6C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D6C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B7D6C8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D6CC:
    ctx->pc = 0x80B7D6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6CCu)) return;
    // 80B7D6CC: addi    r4, r4, 10156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10156);

label_80B7D6D0:
    ctx->pc = 0x80B7D6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7D6D0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D6D0u)) return;
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
label_80B7D6D4:
    ctx->pc = 0x80B7D6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6D4u)) return;
    // 80B7D6D4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D6D8:
    ctx->pc = 0x80B7D6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6D8u)) return;
    // 80B7D6D8: addi    r4, r4, 10160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10160);

label_80B7D6DC:
    ctx->pc = 0x80B7D6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7D6DC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D6DCu)) return;
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
label_80B7D6E0:
    ctx->pc = 0x80B7D6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6E0u)) return;
    // 80B7D6E0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D6E4:
    ctx->pc = 0x80B7D6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6E4u)) return;
    // 80B7D6E4: addi    r4, r4, 10164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10164);

label_80B7D6E8:
    ctx->pc = 0x80B7D6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D6E8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D6E8u)) return;
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
label_80B7D6EC:
    ctx->pc = 0x80B7D6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6ECu)) return;
    // 80B7D6EC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D6F0:
    ctx->pc = 0x80B7D6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6F0u)) return;
    // 80B7D6F0: addi    r4, r4, 10168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10168);

label_80B7D6F4:
    ctx->pc = 0x80B7D6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D6F4: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D6F4u)) return;
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
label_80B7D6F8:
    ctx->pc = 0x80B7D6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6F8u)) return;
    // 80B7D6F8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D6FC:
    ctx->pc = 0x80B7D6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D6FCu)) return;
    // 80B7D6FC: addi    r4, r4, 10172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10172);

label_80B7D700:
    ctx->pc = 0x80B7D700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D700: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D700u)) return;
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
label_80B7D704:
    ctx->pc = 0x80B7D704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D704u)) return;
    // 80B7D704: bl      0x8045E570
    {
            ctx->lr = 0x80B7D708u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B7D708:
    ctx->pc = 0x80B7D708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D708: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B7D70C:
    ctx->pc = 0x80B7D70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D70Cu)) return;
    // 80B7D70C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D710u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D710:
    ctx->pc = 0x80B7D710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7D710: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D714:
    ctx->pc = 0x80B7D714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D714u)) return;
    // 80B7D714: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D718:
    ctx->pc = 0x80B7D718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D718u)) return;
    // 80B7D718: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D71C:
    ctx->pc = 0x80B7D71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D71Cu)) return;
    // 80B7D71C: addi    r5, r5, 10176
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10176);

label_80B7D720:
    ctx->pc = 0x80B7D720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D720: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D720u)) return;
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
label_80B7D724:
    ctx->pc = 0x80B7D724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D724u)) return;
    // 80B7D724: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D728:
    ctx->pc = 0x80B7D728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D728u)) return;
    // 80B7D728: addi    r5, r5, 10180
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10180);

label_80B7D72C:
    ctx->pc = 0x80B7D72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D72Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D72C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D72Cu)) return;
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
label_80B7D730:
    ctx->pc = 0x80B7D730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D730u)) return;
    // 80B7D730: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D734:
    ctx->pc = 0x80B7D734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D734u)) return;
    // 80B7D734: addi    r5, r5, 10184
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10184);

label_80B7D738:
    ctx->pc = 0x80B7D738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D738: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D738u)) return;
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
label_80B7D73C:
    ctx->pc = 0x80B7D73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D73Cu)) return;
    // 80B7D73C: bl      0x8045C750
    {
            ctx->lr = 0x80B7D740u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7D740:
    ctx->pc = 0x80B7D740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7D740: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D744:
    ctx->pc = 0x80B7D744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D744u)) return;
    // 80B7D744: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D748:
    ctx->pc = 0x80B7D748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D748u)) return;
    // 80B7D748: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7D74C:
    ctx->pc = 0x80B7D74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D74Cu)) return;
    // 80B7D74C: addi    r5, r5, -1873
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1873);

label_80B7D750:
    ctx->pc = 0x80B7D750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D750u)) return;
    // 80B7D750: li      r6, 28823
    ctx->gpr[6] = (u32)(s32)(28823);

label_80B7D754:
    ctx->pc = 0x80B7D754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D754u)) return;
    // 80B7D754: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7D758:
    ctx->pc = 0x80B7D758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D758u)) return;
    // 80B7D758: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7D75Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7D75C:
    ctx->pc = 0x80B7D75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7D75C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D760:
    ctx->pc = 0x80B7D760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D760u)) return;
    // 80B7D760: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80B7D764:
    ctx->pc = 0x80B7D764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D764u)) return;
    // 80B7D764: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D768:
    ctx->pc = 0x80B7D768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D768u)) return;
    // 80B7D768: addi    r5, r5, 10176
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10176);

label_80B7D76C:
    ctx->pc = 0x80B7D76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D76Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D76C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D76Cu)) return;
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
label_80B7D770:
    ctx->pc = 0x80B7D770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D770u)) return;
    // 80B7D770: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D774:
    ctx->pc = 0x80B7D774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D774u)) return;
    // 80B7D774: addi    r5, r5, 10188
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10188);

label_80B7D778:
    ctx->pc = 0x80B7D778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D778: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D778u)) return;
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
label_80B7D77C:
    ctx->pc = 0x80B7D77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D77Cu)) return;
    // 80B7D77C: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D780:
    ctx->pc = 0x80B7D780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D780u)) return;
    // 80B7D780: addi    r5, r5, 10192
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10192);

label_80B7D784:
    ctx->pc = 0x80B7D784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D784: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D784u)) return;
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
label_80B7D788:
    ctx->pc = 0x80B7D788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D788u)) return;
    // 80B7D788: bl      0x8045C750
    {
            ctx->lr = 0x80B7D78Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7D78C:
    ctx->pc = 0x80B7D78Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D78Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7D78C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D790:
    ctx->pc = 0x80B7D790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D790u)) return;
    // 80B7D790: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80B7D794:
    ctx->pc = 0x80B7D794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D794u)) return;
    // 80B7D794: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7D798:
    ctx->pc = 0x80B7D798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D798u)) return;
    // 80B7D798: addi    r5, r5, -1873
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1873);

label_80B7D79C:
    ctx->pc = 0x80B7D79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D79Cu)) return;
    // 80B7D79C: li      r6, 29591
    ctx->gpr[6] = (u32)(s32)(29591);

label_80B7D7A0:
    ctx->pc = 0x80B7D7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7A0u)) return;
    // 80B7D7A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7D7A4:
    ctx->pc = 0x80B7D7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7A4u)) return;
    // 80B7D7A4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7D7A8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7D7A8:
    ctx->pc = 0x80B7D7A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D7A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D7A8: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D7AC:
    ctx->pc = 0x80B7D7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7ACu)) return;
    // 80B7D7AC: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7D7B0:
    ctx->pc = 0x80B7D7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D7B0: lwz     r3, 0(r3)
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
label_80B7D7B4:
    ctx->pc = 0x80B7D7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7B4u)) return;
    // 80B7D7B4: cmplwi  r3, 0x0000
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

label_80B7D7B8:
    ctx->pc = 0x80B7D7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7B8u)) return;
    // 80B7D7B8: bc    12, 2, 0x80B7D7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7D7CC;
        }
    }

label_80B7D7BC:
    ctx->pc = 0x80B7D7BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D7BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D7BC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D7C0:
    ctx->pc = 0x80B7D7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7C0u)) return;
    // 80B7D7C0: addi    r4, r4, 10196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10196);

label_80B7D7C4:
    ctx->pc = 0x80B7D7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D7C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D7C4u)) return;
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
label_80B7D7C8:
    ctx->pc = 0x80B7D7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7C8u)) return;
    // 80B7D7C8: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7D7CCu;
            goto label_80B7EA50;
    }

label_80B7D7CC:
    ctx->pc = 0x80B7D7CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D7CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D7CC: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B7D7D0:
    ctx->pc = 0x80B7D7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7D0u)) return;
    // 80B7D7D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D7D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D7D4:
    ctx->pc = 0x80B7D7D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D7D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D7D4: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D7D8:
    ctx->pc = 0x80B7D7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7D8u)) return;
    // 80B7D7D8: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7D7DC:
    ctx->pc = 0x80B7D7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D7DC: lwz     r3, 0(r3)
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
label_80B7D7E0:
    ctx->pc = 0x80B7D7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7E0u)) return;
    // 80B7D7E0: cmplwi  r3, 0x0000
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

label_80B7D7E4:
    ctx->pc = 0x80B7D7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7E4u)) return;
    // 80B7D7E4: bc    12, 2, 0x80B7D7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7D7F8;
        }
    }

label_80B7D7E8:
    ctx->pc = 0x80B7D7E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D7E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D7E8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D7EC:
    ctx->pc = 0x80B7D7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7ECu)) return;
    // 80B7D7EC: addi    r4, r4, 10200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10200);

label_80B7D7F0:
    ctx->pc = 0x80B7D7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D7F0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D7F0u)) return;
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
label_80B7D7F4:
    ctx->pc = 0x80B7D7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7F4u)) return;
    // 80B7D7F4: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7D7F8u;
            goto label_80B7EA50;
    }

label_80B7D7F8:
    ctx->pc = 0x80B7D7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D7F8: li      r3, 65
    ctx->gpr[3] = (u32)(s32)(65);

label_80B7D7FC:
    ctx->pc = 0x80B7D7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D7FCu)) return;
    // 80B7D7FC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D800u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D800:
    ctx->pc = 0x80B7D800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D800: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D804:
    ctx->pc = 0x80B7D804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D804u)) return;
    // 80B7D804: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7D808:
    ctx->pc = 0x80B7D808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D808: lwz     r3, 0(r3)
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
label_80B7D80C:
    ctx->pc = 0x80B7D80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D80Cu)) return;
    // 80B7D80C: cmplwi  r3, 0x0000
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

label_80B7D810:
    ctx->pc = 0x80B7D810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D810u)) return;
    // 80B7D810: bc    12, 2, 0x80B7D824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7D824;
        }
    }

label_80B7D814:
    ctx->pc = 0x80B7D814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D814: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D818:
    ctx->pc = 0x80B7D818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D818u)) return;
    // 80B7D818: addi    r4, r4, 10204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10204);

label_80B7D81C:
    ctx->pc = 0x80B7D81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D81C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D81Cu)) return;
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
label_80B7D820:
    ctx->pc = 0x80B7D820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D820u)) return;
    // 80B7D820: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7D824u;
            goto label_80B7EA50;
    }

label_80B7D824:
    ctx->pc = 0x80B7D824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D824: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B7D828:
    ctx->pc = 0x80B7D828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D828u)) return;
    // 80B7D828: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D82Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D82C:
    ctx->pc = 0x80B7D82Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D82Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D82C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D830:
    ctx->pc = 0x80B7D830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D830u)) return;
    // 80B7D830: bl      0x8045F220
    {
            ctx->lr = 0x80B7D834u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D834:
    ctx->pc = 0x80B7D834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7D834: bl      0x8045E6B8
    {
            ctx->lr = 0x80B7D838u;
            ctx->pc = 0x8045E6B8u;
            return;
    }

label_80B7D838:
    ctx->pc = 0x80B7D838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7D838: bl      0x8045C4A4
    {
            ctx->lr = 0x80B7D83Cu;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80B7D83C:
    ctx->pc = 0x80B7D83Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D83Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D83C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D840:
    ctx->pc = 0x80B7D840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D840u)) return;
    // 80B7D840: bl      0x8045F220
    {
            ctx->lr = 0x80B7D844u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D844:
    ctx->pc = 0x80B7D844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7D844: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D848:
    ctx->pc = 0x80B7D848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D848u)) return;
    // 80B7D848: addi    r4, r4, 10208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10208);

label_80B7D84C:
    ctx->pc = 0x80B7D84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D84C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D84Cu)) return;
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
label_80B7D850:
    ctx->pc = 0x80B7D850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D850u)) return;
    // 80B7D850: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D854:
    ctx->pc = 0x80B7D854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D854u)) return;
    // 80B7D854: addi    r4, r4, 10212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10212);

label_80B7D858:
    ctx->pc = 0x80B7D858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D858: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D858u)) return;
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
label_80B7D85C:
    ctx->pc = 0x80B7D85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D85Cu)) return;
    // 80B7D85C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D860:
    ctx->pc = 0x80B7D860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D860u)) return;
    // 80B7D860: addi    r4, r4, 10216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10216);

label_80B7D864:
    ctx->pc = 0x80B7D864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D864: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D864u)) return;
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
label_80B7D868:
    ctx->pc = 0x80B7D868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D868u)) return;
    // 80B7D868: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7D86Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7D86C:
    ctx->pc = 0x80B7D86Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D86Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D86C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D870:
    ctx->pc = 0x80B7D870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D870u)) return;
    // 80B7D870: bl      0x8045F220
    {
            ctx->lr = 0x80B7D874u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D874:
    ctx->pc = 0x80B7D874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D874: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7D878:
    ctx->pc = 0x80B7D878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D878u)) return;
    // 80B7D878: addi    r4, r6, -768
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-768);

label_80B7D87C:
    ctx->pc = 0x80B7D87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D87Cu)) return;
    // 80B7D87C: li      r5, 4616
    ctx->gpr[5] = (u32)(s32)(4616);

label_80B7D880:
    ctx->pc = 0x80B7D880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D880u)) return;
    // 80B7D880: addi    r6, r6, -1024
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1024);

label_80B7D884:
    ctx->pc = 0x80B7D884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D884u)) return;
    // 80B7D884: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7D888u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7D888:
    ctx->pc = 0x80B7D888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D888: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7D88C:
    ctx->pc = 0x80B7D88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D88Cu)) return;
    // 80B7D88C: bl      0x8045F220
    {
            ctx->lr = 0x80B7D890u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D890:
    ctx->pc = 0x80B7D890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7D890: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D894:
    ctx->pc = 0x80B7D894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D894u)) return;
    // 80B7D894: addi    r4, r4, 10220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10220);

label_80B7D898:
    ctx->pc = 0x80B7D898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D898: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D898u)) return;
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
label_80B7D89C:
    ctx->pc = 0x80B7D89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D89Cu)) return;
    // 80B7D89C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D8A0:
    ctx->pc = 0x80B7D8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8A0u)) return;
    // 80B7D8A0: addi    r4, r4, 10224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10224);

label_80B7D8A4:
    ctx->pc = 0x80B7D8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D8A4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D8A4u)) return;
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
label_80B7D8A8:
    ctx->pc = 0x80B7D8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8A8u)) return;
    // 80B7D8A8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D8AC:
    ctx->pc = 0x80B7D8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8ACu)) return;
    // 80B7D8AC: addi    r4, r4, 10228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10228);

label_80B7D8B0:
    ctx->pc = 0x80B7D8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D8B0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D8B0u)) return;
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
label_80B7D8B4:
    ctx->pc = 0x80B7D8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8B4u)) return;
    // 80B7D8B4: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7D8B8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7D8B8:
    ctx->pc = 0x80B7D8B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D8B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D8B8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7D8BC:
    ctx->pc = 0x80B7D8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8BCu)) return;
    // 80B7D8BC: bl      0x8045F220
    {
            ctx->lr = 0x80B7D8C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D8C0:
    ctx->pc = 0x80B7D8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D8C0: li      r4, 2816
    ctx->gpr[4] = (u32)(s32)(2816);

label_80B7D8C4:
    ctx->pc = 0x80B7D8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8C4u)) return;
    // 80B7D8C4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7D8C8:
    ctx->pc = 0x80B7D8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8C8u)) return;
    // 80B7D8C8: addi    r5, r5, -5632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5632);

label_80B7D8CC:
    ctx->pc = 0x80B7D8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8CCu)) return;
    // 80B7D8CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7D8D0:
    ctx->pc = 0x80B7D8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8D0u)) return;
    // 80B7D8D0: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7D8D4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7D8D4:
    ctx->pc = 0x80B7D8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7D8D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D8D8:
    ctx->pc = 0x80B7D8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8D8u)) return;
    // 80B7D8D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D8DC:
    ctx->pc = 0x80B7D8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8DCu)) return;
    // 80B7D8DC: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D8E0:
    ctx->pc = 0x80B7D8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8E0u)) return;
    // 80B7D8E0: addi    r5, r5, 10232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10232);

label_80B7D8E4:
    ctx->pc = 0x80B7D8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D8E4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D8E4u)) return;
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
label_80B7D8E8:
    ctx->pc = 0x80B7D8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8E8u)) return;
    // 80B7D8E8: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D8EC:
    ctx->pc = 0x80B7D8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8ECu)) return;
    // 80B7D8EC: addi    r5, r5, 10236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10236);

label_80B7D8F0:
    ctx->pc = 0x80B7D8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D8F0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D8F0u)) return;
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
label_80B7D8F4:
    ctx->pc = 0x80B7D8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8F4u)) return;
    // 80B7D8F4: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D8F8:
    ctx->pc = 0x80B7D8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8F8u)) return;
    // 80B7D8F8: addi    r5, r5, 10240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10240);

label_80B7D8FC:
    ctx->pc = 0x80B7D8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D8FC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D8FCu)) return;
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
label_80B7D900:
    ctx->pc = 0x80B7D900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D900u)) return;
    // 80B7D900: bl      0x8045C750
    {
            ctx->lr = 0x80B7D904u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7D904:
    ctx->pc = 0x80B7D904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7D904: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D908:
    ctx->pc = 0x80B7D908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D908u)) return;
    // 80B7D908: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7D90C:
    ctx->pc = 0x80B7D90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D90Cu)) return;
    // 80B7D90C: li      r5, 1199
    ctx->gpr[5] = (u32)(s32)(1199);

label_80B7D910:
    ctx->pc = 0x80B7D910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D910u)) return;
    // 80B7D910: li      r6, 2455
    ctx->gpr[6] = (u32)(s32)(2455);

label_80B7D914:
    ctx->pc = 0x80B7D914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D914u)) return;
    // 80B7D914: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7D918:
    ctx->pc = 0x80B7D918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D918u)) return;
    // 80B7D918: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7D91Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7D91C:
    ctx->pc = 0x80B7D91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7D91C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D920:
    ctx->pc = 0x80B7D920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D920u)) return;
    // 80B7D920: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B7D924:
    ctx->pc = 0x80B7D924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D924u)) return;
    // 80B7D924: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D928:
    ctx->pc = 0x80B7D928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D928u)) return;
    // 80B7D928: addi    r5, r5, 10244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10244);

label_80B7D92C:
    ctx->pc = 0x80B7D92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D92Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7D92C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D92Cu)) return;
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
label_80B7D930:
    ctx->pc = 0x80B7D930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D930u)) return;
    // 80B7D930: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D934:
    ctx->pc = 0x80B7D934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D934u)) return;
    // 80B7D934: addi    r5, r5, 10248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10248);

label_80B7D938:
    ctx->pc = 0x80B7D938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7D938: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D938u)) return;
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
label_80B7D93C:
    ctx->pc = 0x80B7D93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D93Cu)) return;
    // 80B7D93C: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7D940:
    ctx->pc = 0x80B7D940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D940u)) return;
    // 80B7D940: addi    r5, r5, 10252
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10252);

label_80B7D944:
    ctx->pc = 0x80B7D944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D944: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7D944u)) return;
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
label_80B7D948:
    ctx->pc = 0x80B7D948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D948u)) return;
    // 80B7D948: bl      0x8045C750
    {
            ctx->lr = 0x80B7D94Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7D94C:
    ctx->pc = 0x80B7D94Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D94Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7D94C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7D950:
    ctx->pc = 0x80B7D950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D950u)) return;
    // 80B7D950: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B7D954:
    ctx->pc = 0x80B7D954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D954u)) return;
    // 80B7D954: li      r5, 1199
    ctx->gpr[5] = (u32)(s32)(1199);

label_80B7D958:
    ctx->pc = 0x80B7D958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D958u)) return;
    // 80B7D958: li      r6, 2199
    ctx->gpr[6] = (u32)(s32)(2199);

label_80B7D95C:
    ctx->pc = 0x80B7D95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D95Cu)) return;
    // 80B7D95C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7D960:
    ctx->pc = 0x80B7D960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D960u)) return;
    // 80B7D960: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7D964u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7D964:
    ctx->pc = 0x80B7D964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D964: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7D968:
    ctx->pc = 0x80B7D968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D968u)) return;
    // 80B7D968: bl      0x8045F220
    {
            ctx->lr = 0x80B7D96Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7D96C:
    ctx->pc = 0x80B7D96Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D96Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80B7D96C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D970:
    ctx->pc = 0x80B7D970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D970u)) return;
    // 80B7D970: addi    r4, r4, 10256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10256);

label_80B7D974:
    ctx->pc = 0x80B7D974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7D974: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D974u)) return;
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
label_80B7D978:
    ctx->pc = 0x80B7D978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D978u)) return;
    // 80B7D978: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D97C:
    ctx->pc = 0x80B7D97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D97Cu)) return;
    // 80B7D97C: addi    r4, r4, 10260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10260);

label_80B7D980:
    ctx->pc = 0x80B7D980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7D980: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D980u)) return;
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
label_80B7D984:
    ctx->pc = 0x80B7D984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D984u)) return;
    // 80B7D984: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D988:
    ctx->pc = 0x80B7D988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D988u)) return;
    // 80B7D988: addi    r4, r4, 10264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10264);

label_80B7D98C:
    ctx->pc = 0x80B7D98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7D98C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D98Cu)) return;
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
label_80B7D990:
    ctx->pc = 0x80B7D990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D990u)) return;
    // 80B7D990: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D994:
    ctx->pc = 0x80B7D994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D994u)) return;
    // 80B7D994: addi    r4, r4, 10268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10268);

label_80B7D998:
    ctx->pc = 0x80B7D998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D998: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D998u)) return;
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
label_80B7D99C:
    ctx->pc = 0x80B7D99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D99Cu)) return;
    // 80B7D99C: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x80B7D99Cu)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_80B7D9A0:
    ctx->pc = 0x80B7D9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9A0u)) return;
    // 80B7D9A0: bl      0x8045E570
    {
            ctx->lr = 0x80B7D9A4u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B7D9A4:
    ctx->pc = 0x80B7D9A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D9A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D9A4: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D9A8:
    ctx->pc = 0x80B7D9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9A8u)) return;
    // 80B7D9A8: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7D9AC:
    ctx->pc = 0x80B7D9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D9AC: lwz     r3, 0(r3)
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
label_80B7D9B0:
    ctx->pc = 0x80B7D9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9B0u)) return;
    // 80B7D9B0: cmplwi  r3, 0x0000
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

label_80B7D9B4:
    ctx->pc = 0x80B7D9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9B4u)) return;
    // 80B7D9B4: bc    12, 2, 0x80B7D9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7D9C8;
        }
    }

label_80B7D9B8:
    ctx->pc = 0x80B7D9B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D9B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D9B8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D9BC:
    ctx->pc = 0x80B7D9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9BCu)) return;
    // 80B7D9BC: addi    r4, r4, 10272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10272);

label_80B7D9C0:
    ctx->pc = 0x80B7D9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D9C0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D9C0u)) return;
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
label_80B7D9C4:
    ctx->pc = 0x80B7D9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9C4u)) return;
    // 80B7D9C4: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7D9C8u;
            goto label_80B7EA50;
    }

label_80B7D9C8:
    ctx->pc = 0x80B7D9C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D9C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D9C8: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B7D9CC:
    ctx->pc = 0x80B7D9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9CCu)) return;
    // 80B7D9CC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D9D0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D9D0:
    ctx->pc = 0x80B7D9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D9D0: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7D9D4:
    ctx->pc = 0x80B7D9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9D4u)) return;
    // 80B7D9D4: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7D9D8:
    ctx->pc = 0x80B7D9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7D9D8: lwz     r3, 0(r3)
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
label_80B7D9DC:
    ctx->pc = 0x80B7D9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9DCu)) return;
    // 80B7D9DC: cmplwi  r3, 0x0000
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

label_80B7D9E0:
    ctx->pc = 0x80B7D9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9E0u)) return;
    // 80B7D9E0: bc    12, 2, 0x80B7D9F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7D9F4;
        }
    }

label_80B7D9E4:
    ctx->pc = 0x80B7D9E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D9E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7D9E4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7D9E8:
    ctx->pc = 0x80B7D9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9E8u)) return;
    // 80B7D9E8: addi    r4, r4, 10200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10200);

label_80B7D9EC:
    ctx->pc = 0x80B7D9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7D9EC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7D9ECu)) return;
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
label_80B7D9F0:
    ctx->pc = 0x80B7D9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9F0u)) return;
    // 80B7D9F0: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7D9F4u;
            goto label_80B7EA50;
    }

label_80B7D9F4:
    ctx->pc = 0x80B7D9F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D9F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7D9F4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B7D9F8:
    ctx->pc = 0x80B7D9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7D9F8u)) return;
    // 80B7D9F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7D9FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7D9FC:
    ctx->pc = 0x80B7D9FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7D9FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7D9FC: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7DA00:
    ctx->pc = 0x80B7DA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA00u)) return;
    // 80B7DA00: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7DA04:
    ctx->pc = 0x80B7DA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7DA04: lwz     r3, 0(r3)
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
label_80B7DA08:
    ctx->pc = 0x80B7DA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA08u)) return;
    // 80B7DA08: cmplwi  r3, 0x0000
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

label_80B7DA0C:
    ctx->pc = 0x80B7DA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA0Cu)) return;
    // 80B7DA0C: bc    12, 2, 0x80B7DA20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7DA20;
        }
    }

label_80B7DA10:
    ctx->pc = 0x80B7DA10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7DA10: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DA14:
    ctx->pc = 0x80B7DA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA14u)) return;
    // 80B7DA14: addi    r4, r4, 10204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10204);

label_80B7DA18:
    ctx->pc = 0x80B7DA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DA18: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DA18u)) return;
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
label_80B7DA1C:
    ctx->pc = 0x80B7DA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA1Cu)) return;
    // 80B7DA1C: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7DA20u;
            goto label_80B7EA50;
    }

label_80B7DA20:
    ctx->pc = 0x80B7DA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DA20: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_80B7DA24:
    ctx->pc = 0x80B7DA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA24u)) return;
    // 80B7DA24: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DA28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DA28:
    ctx->pc = 0x80B7DA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DA28: li      r3, 35
    ctx->gpr[3] = (u32)(s32)(35);

label_80B7DA2C:
    ctx->pc = 0x80B7DA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA2Cu)) return;
    // 80B7DA2C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DA30u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DA30:
    ctx->pc = 0x80B7DA30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DA30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DA34:
    ctx->pc = 0x80B7DA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA34u)) return;
    // 80B7DA34: bl      0x8045F220
    {
            ctx->lr = 0x80B7DA38u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DA38:
    ctx->pc = 0x80B7DA38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7DA38: lis     r4, -27543
    ctx->gpr[4] = ((u32)(s32)(-27543) << 16);

label_80B7DA3C:
    ctx->pc = 0x80B7DA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA3Cu)) return;
    // 80B7DA3C: addi    r4, r4, 21848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21848);

label_80B7DA40:
    ctx->pc = 0x80B7DA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA40u)) return;
    // 80B7DA40: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7DA44:
    ctx->pc = 0x80B7DA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA44u)) return;
    // 80B7DA44: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7DA48:
    ctx->pc = 0x80B7DA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA48u)) return;
    // 80B7DA48: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7DA4C:
    ctx->pc = 0x80B7DA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA4Cu)) return;
    // 80B7DA4C: addi    r6, r6, 10136
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10136);

label_80B7DA50:
    ctx->pc = 0x80B7DA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7DA50: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7DA50u)) return;
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
label_80B7DA54:
    ctx->pc = 0x80B7DA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA54u)) return;
    // 80B7DA54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7DA58:
    ctx->pc = 0x80B7DA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA58u)) return;
    // 80B7DA58: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B7DA5C:
    ctx->pc = 0x80B7DA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA5Cu)) return;
    // 80B7DA5C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7DA60u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7DA60:
    ctx->pc = 0x80B7DA60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DA60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DA64:
    ctx->pc = 0x80B7DA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA64u)) return;
    // 80B7DA64: bl      0x8045F220
    {
            ctx->lr = 0x80B7DA68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DA68:
    ctx->pc = 0x80B7DA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7DA68: lis     r4, -27543
    ctx->gpr[4] = ((u32)(s32)(-27543) << 16);

label_80B7DA6C:
    ctx->pc = 0x80B7DA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA6Cu)) return;
    // 80B7DA6C: addi    r4, r4, 23980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23980);

label_80B7DA70:
    ctx->pc = 0x80B7DA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA70u)) return;
    // 80B7DA70: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7DA74:
    ctx->pc = 0x80B7DA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA74u)) return;
    // 80B7DA74: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7DA78:
    ctx->pc = 0x80B7DA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA78u)) return;
    // 80B7DA78: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7DA7C:
    ctx->pc = 0x80B7DA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA7Cu)) return;
    // 80B7DA7C: addi    r6, r6, 10136
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10136);

label_80B7DA80:
    ctx->pc = 0x80B7DA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7DA80: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7DA80u)) return;
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
label_80B7DA84:
    ctx->pc = 0x80B7DA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA84u)) return;
    // 80B7DA84: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7DA88:
    ctx->pc = 0x80B7DA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA88u)) return;
    // 80B7DA88: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7DA8C:
    ctx->pc = 0x80B7DA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA8Cu)) return;
    // 80B7DA8C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7DA90u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7DA90:
    ctx->pc = 0x80B7DA90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DA90: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B7DA94:
    ctx->pc = 0x80B7DA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA94u)) return;
    // 80B7DA94: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DA98u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DA98:
    ctx->pc = 0x80B7DA98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DA98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7DA98: li      r3, 738
    ctx->gpr[3] = (u32)(s32)(738);

label_80B7DA9C:
    ctx->pc = 0x80B7DA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DA9Cu)) return;
    // 80B7DA9C: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80B7DAA0:
    ctx->pc = 0x80B7DAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAA0u)) return;
    // 80B7DAA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B7DAA4:
    ctx->pc = 0x80B7DAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAA4u)) return;
    // 80B7DAA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7DAA8:
    ctx->pc = 0x80B7DAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAA8u)) return;
    // 80B7DAA8: bl      0x80B7F02C
    {
            ctx->lr = 0x80B7DAACu;
            goto label_80B7F02C;
    }

label_80B7DAAC:
    ctx->pc = 0x80B7DAACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DAACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DAAC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7DAB0:
    ctx->pc = 0x80B7DAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAB0u)) return;
    // 80B7DAB0: bl      0x8045F220
    {
            ctx->lr = 0x80B7DAB4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DAB4:
    ctx->pc = 0x80B7DAB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DAB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B7DAB4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DAB8:
    ctx->pc = 0x80B7DAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAB8u)) return;
    // 80B7DAB8: addi    r4, r4, 10276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10276);

label_80B7DABC:
    ctx->pc = 0x80B7DABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7DABC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DABCu)) return;
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
label_80B7DAC0:
    ctx->pc = 0x80B7DAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAC0u)) return;
    // 80B7DAC0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DAC4:
    ctx->pc = 0x80B7DAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAC4u)) return;
    // 80B7DAC4: addi    r4, r4, 10280
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10280);

label_80B7DAC8:
    ctx->pc = 0x80B7DAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7DAC8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DAC8u)) return;
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
label_80B7DACC:
    ctx->pc = 0x80B7DACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DACCu)) return;
    // 80B7DACC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DAD0:
    ctx->pc = 0x80B7DAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAD0u)) return;
    // 80B7DAD0: addi    r4, r4, 10284
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10284);

label_80B7DAD4:
    ctx->pc = 0x80B7DAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DAD4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DAD4u)) return;
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
label_80B7DAD8:
    ctx->pc = 0x80B7DAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAD8u)) return;
    // 80B7DAD8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DADC:
    ctx->pc = 0x80B7DADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DADCu)) return;
    // 80B7DADC: addi    r4, r4, 10288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10288);

label_80B7DAE0:
    ctx->pc = 0x80B7DAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DAE0: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DAE0u)) return;
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
label_80B7DAE4:
    ctx->pc = 0x80B7DAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAE4u)) return;
    // 80B7DAE4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DAE8:
    ctx->pc = 0x80B7DAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAE8u)) return;
    // 80B7DAE8: addi    r4, r4, 10088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10088);

label_80B7DAEC:
    ctx->pc = 0x80B7DAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DAEC: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DAECu)) return;
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
label_80B7DAF0:
    ctx->pc = 0x80B7DAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAF0u)) return;
    // 80B7DAF0: bl      0x8045E570
    {
            ctx->lr = 0x80B7DAF4u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B7DAF4:
    ctx->pc = 0x80B7DAF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DAF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DAF4: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B7DAF8:
    ctx->pc = 0x80B7DAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DAF8u)) return;
    // 80B7DAF8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DAFCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DAFC:
    ctx->pc = 0x80B7DAFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DAFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DAFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DB00:
    ctx->pc = 0x80B7DB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB00u)) return;
    // 80B7DB00: bl      0x8045F220
    {
            ctx->lr = 0x80B7DB04u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DB04:
    ctx->pc = 0x80B7DB04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7DB04: bl      0x8045C034
    {
            ctx->lr = 0x80B7DB08u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7DB08:
    ctx->pc = 0x80B7DB08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DB08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DB0C:
    ctx->pc = 0x80B7DB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB0Cu)) return;
    // 80B7DB0C: bl      0x8045F220
    {
            ctx->lr = 0x80B7DB10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DB10:
    ctx->pc = 0x80B7DB10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7DB10: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DB14:
    ctx->pc = 0x80B7DB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB14u)) return;
    // 80B7DB14: addi    r4, r4, 14048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14048);

label_80B7DB18:
    ctx->pc = 0x80B7DB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB18u)) return;
    // 80B7DB18: bl      0x8045C060
    {
            ctx->lr = 0x80B7DB1Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7DB1C:
    ctx->pc = 0x80B7DB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DB1C: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B7DB20:
    ctx->pc = 0x80B7DB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB20u)) return;
    // 80B7DB20: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DB24u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DB24:
    ctx->pc = 0x80B7DB24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DB24: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B7DB28:
    ctx->pc = 0x80B7DB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB28u)) return;
    // 80B7DB28: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DB2Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DB2C:
    ctx->pc = 0x80B7DB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DB2C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7DB30:
    ctx->pc = 0x80B7DB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB30u)) return;
    // 80B7DB30: bl      0x8045F220
    {
            ctx->lr = 0x80B7DB34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DB34:
    ctx->pc = 0x80B7DB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7DB34: bl      0x8045E6B8
    {
            ctx->lr = 0x80B7DB38u;
            ctx->pc = 0x8045E6B8u;
            return;
    }

label_80B7DB38:
    ctx->pc = 0x80B7DB38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DB38: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7DB3C:
    ctx->pc = 0x80B7DB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB3Cu)) return;
    // 80B7DB3C: bl      0x8045F220
    {
            ctx->lr = 0x80B7DB40u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DB40:
    ctx->pc = 0x80B7DB40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7DB40: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DB44:
    ctx->pc = 0x80B7DB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB44u)) return;
    // 80B7DB44: addi    r4, r4, 10292
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10292);

label_80B7DB48:
    ctx->pc = 0x80B7DB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DB48: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DB48u)) return;
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
label_80B7DB4C:
    ctx->pc = 0x80B7DB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB4Cu)) return;
    // 80B7DB4C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DB50:
    ctx->pc = 0x80B7DB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB50u)) return;
    // 80B7DB50: addi    r4, r4, 10296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10296);

label_80B7DB54:
    ctx->pc = 0x80B7DB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DB54: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DB54u)) return;
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
label_80B7DB58:
    ctx->pc = 0x80B7DB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB58u)) return;
    // 80B7DB58: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DB5C:
    ctx->pc = 0x80B7DB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB5Cu)) return;
    // 80B7DB5C: addi    r4, r4, 10300
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10300);

label_80B7DB60:
    ctx->pc = 0x80B7DB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DB60: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DB60u)) return;
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
label_80B7DB64:
    ctx->pc = 0x80B7DB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB64u)) return;
    // 80B7DB64: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7DB68u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7DB68:
    ctx->pc = 0x80B7DB68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DB68: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7DB6C:
    ctx->pc = 0x80B7DB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB6Cu)) return;
    // 80B7DB6C: bl      0x8045F220
    {
            ctx->lr = 0x80B7DB70u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DB70:
    ctx->pc = 0x80B7DB70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7DB70: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7DB74:
    ctx->pc = 0x80B7DB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB74u)) return;
    // 80B7DB74: addi    r4, r5, -1280
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-1280);

label_80B7DB78:
    ctx->pc = 0x80B7DB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB78u)) return;
    // 80B7DB78: addi    r5, r5, -13824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13824);

label_80B7DB7C:
    ctx->pc = 0x80B7DB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB7Cu)) return;
    // 80B7DB7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7DB80:
    ctx->pc = 0x80B7DB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB80u)) return;
    // 80B7DB80: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7DB84u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7DB84:
    ctx->pc = 0x80B7DB84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DB84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DB88:
    ctx->pc = 0x80B7DB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB88u)) return;
    // 80B7DB88: bl      0x8045F220
    {
            ctx->lr = 0x80B7DB8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DB8C:
    ctx->pc = 0x80B7DB8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7DB8C: bl      0x8045C034
    {
            ctx->lr = 0x80B7DB90u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7DB90:
    ctx->pc = 0x80B7DB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7DB90: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DB94:
    ctx->pc = 0x80B7DB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB94u)) return;
    // 80B7DB94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7DB98:
    ctx->pc = 0x80B7DB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB98u)) return;
    // 80B7DB98: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DB9C:
    ctx->pc = 0x80B7DB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DB9Cu)) return;
    // 80B7DB9C: addi    r5, r5, 10304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10304);

label_80B7DBA0:
    ctx->pc = 0x80B7DBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DBA0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DBA0u)) return;
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
label_80B7DBA4:
    ctx->pc = 0x80B7DBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBA4u)) return;
    // 80B7DBA4: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DBA8:
    ctx->pc = 0x80B7DBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBA8u)) return;
    // 80B7DBA8: addi    r5, r5, 10236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10236);

label_80B7DBAC:
    ctx->pc = 0x80B7DBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DBAC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DBACu)) return;
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
label_80B7DBB0:
    ctx->pc = 0x80B7DBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBB0u)) return;
    // 80B7DBB0: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DBB4:
    ctx->pc = 0x80B7DBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBB4u)) return;
    // 80B7DBB4: addi    r5, r5, 10308
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10308);

label_80B7DBB8:
    ctx->pc = 0x80B7DBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DBB8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DBB8u)) return;
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
label_80B7DBBC:
    ctx->pc = 0x80B7DBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBBCu)) return;
    // 80B7DBBC: bl      0x8045C750
    {
            ctx->lr = 0x80B7DBC0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7DBC0:
    ctx->pc = 0x80B7DBC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DBC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7DBC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DBC4:
    ctx->pc = 0x80B7DBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBC4u)) return;
    // 80B7DBC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7DBC8:
    ctx->pc = 0x80B7DBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBC8u)) return;
    // 80B7DBC8: li      r5, 1694
    ctx->gpr[5] = (u32)(s32)(1694);

label_80B7DBCC:
    ctx->pc = 0x80B7DBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBCCu)) return;
    // 80B7DBCC: li      r6, 11266
    ctx->gpr[6] = (u32)(s32)(11266);

label_80B7DBD0:
    ctx->pc = 0x80B7DBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBD0u)) return;
    // 80B7DBD0: li      r7, 1536
    ctx->gpr[7] = (u32)(s32)(1536);

label_80B7DBD4:
    ctx->pc = 0x80B7DBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBD4u)) return;
    // 80B7DBD4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7DBD8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7DBD8:
    ctx->pc = 0x80B7DBD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DBD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7DBD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DBDC:
    ctx->pc = 0x80B7DBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBDCu)) return;
    // 80B7DBDC: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B7DBE0:
    ctx->pc = 0x80B7DBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBE0u)) return;
    // 80B7DBE0: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DBE4:
    ctx->pc = 0x80B7DBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBE4u)) return;
    // 80B7DBE4: addi    r5, r5, 10312
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10312);

label_80B7DBE8:
    ctx->pc = 0x80B7DBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DBE8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DBE8u)) return;
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
label_80B7DBEC:
    ctx->pc = 0x80B7DBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBECu)) return;
    // 80B7DBEC: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DBF0:
    ctx->pc = 0x80B7DBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBF0u)) return;
    // 80B7DBF0: addi    r5, r5, 10316
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10316);

label_80B7DBF4:
    ctx->pc = 0x80B7DBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DBF4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DBF4u)) return;
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
label_80B7DBF8:
    ctx->pc = 0x80B7DBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBF8u)) return;
    // 80B7DBF8: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DBFC:
    ctx->pc = 0x80B7DBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DBFCu)) return;
    // 80B7DBFC: addi    r5, r5, 10320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10320);

label_80B7DC00:
    ctx->pc = 0x80B7DC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DC00: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DC00u)) return;
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
label_80B7DC04:
    ctx->pc = 0x80B7DC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC04u)) return;
    // 80B7DC04: bl      0x8045C750
    {
            ctx->lr = 0x80B7DC08u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7DC08:
    ctx->pc = 0x80B7DC08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DC08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7DC08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DC0C:
    ctx->pc = 0x80B7DC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC0Cu)) return;
    // 80B7DC0C: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B7DC10:
    ctx->pc = 0x80B7DC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC10u)) return;
    // 80B7DC10: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7DC14:
    ctx->pc = 0x80B7DC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC14u)) return;
    // 80B7DC14: addi    r5, r5, -3170
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3170);

label_80B7DC18:
    ctx->pc = 0x80B7DC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC18u)) return;
    // 80B7DC18: li      r6, 7426
    ctx->gpr[6] = (u32)(s32)(7426);

label_80B7DC1C:
    ctx->pc = 0x80B7DC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC1Cu)) return;
    // 80B7DC1C: li      r7, 1536
    ctx->gpr[7] = (u32)(s32)(1536);

label_80B7DC20:
    ctx->pc = 0x80B7DC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC20u)) return;
    // 80B7DC20: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7DC24u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7DC24:
    ctx->pc = 0x80B7DC24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DC24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DC24: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80B7DC28:
    ctx->pc = 0x80B7DC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC28u)) return;
    // 80B7DC28: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DC2Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DC2C:
    ctx->pc = 0x80B7DC2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DC2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DC2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DC30:
    ctx->pc = 0x80B7DC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC30u)) return;
    // 80B7DC30: bl      0x8045F220
    {
            ctx->lr = 0x80B7DC34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DC34:
    ctx->pc = 0x80B7DC34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DC34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7DC34: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7DC38:
    ctx->pc = 0x80B7DC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC38u)) return;
    // 80B7DC38: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7DC3C:
    ctx->pc = 0x80B7DC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC3Cu)) return;
    // 80B7DC3C: addi    r5, r5, -4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4096);

label_80B7DC40:
    ctx->pc = 0x80B7DC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC40u)) return;
    // 80B7DC40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7DC44:
    ctx->pc = 0x80B7DC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC44u)) return;
    // 80B7DC44: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7DC48u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7DC48:
    ctx->pc = 0x80B7DC48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DC48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DC48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DC4C:
    ctx->pc = 0x80B7DC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC4Cu)) return;
    // 80B7DC4C: bl      0x8045F220
    {
            ctx->lr = 0x80B7DC50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DC50:
    ctx->pc = 0x80B7DC50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DC50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7DC50: lis     r4, -28601
    ctx->gpr[4] = ((u32)(s32)(-28601) << 16);

label_80B7DC54:
    ctx->pc = 0x80B7DC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC54u)) return;
    // 80B7DC54: addi    r4, r4, -1396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1396);

label_80B7DC58:
    ctx->pc = 0x80B7DC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC58u)) return;
    // 80B7DC58: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7DC5C:
    ctx->pc = 0x80B7DC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC5Cu)) return;
    // 80B7DC5C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7DC60:
    ctx->pc = 0x80B7DC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC60u)) return;
    // 80B7DC60: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7DC64:
    ctx->pc = 0x80B7DC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC64u)) return;
    // 80B7DC64: addi    r6, r6, 10324
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10324);

label_80B7DC68:
    ctx->pc = 0x80B7DC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7DC68: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7DC68u)) return;
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
label_80B7DC6C:
    ctx->pc = 0x80B7DC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC6Cu)) return;
    // 80B7DC6C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7DC70:
    ctx->pc = 0x80B7DC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC70u)) return;
    // 80B7DC70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7DC74:
    ctx->pc = 0x80B7DC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC74u)) return;
    // 80B7DC74: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7DC78u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7DC78:
    ctx->pc = 0x80B7DC78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DC78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7DC78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DC7C:
    ctx->pc = 0x80B7DC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC7Cu)) return;
    // 80B7DC7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7DC80:
    ctx->pc = 0x80B7DC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC80u)) return;
    // 80B7DC80: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DC84:
    ctx->pc = 0x80B7DC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC84u)) return;
    // 80B7DC84: addi    r5, r5, 10328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10328);

label_80B7DC88:
    ctx->pc = 0x80B7DC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DC88: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DC88u)) return;
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
label_80B7DC8C:
    ctx->pc = 0x80B7DC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC8Cu)) return;
    // 80B7DC8C: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DC90:
    ctx->pc = 0x80B7DC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC90u)) return;
    // 80B7DC90: addi    r5, r5, 10332
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10332);

label_80B7DC94:
    ctx->pc = 0x80B7DC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DC94: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DC94u)) return;
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
label_80B7DC98:
    ctx->pc = 0x80B7DC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC98u)) return;
    // 80B7DC98: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DC9C:
    ctx->pc = 0x80B7DC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DC9Cu)) return;
    // 80B7DC9C: addi    r5, r5, 10336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10336);

label_80B7DCA0:
    ctx->pc = 0x80B7DCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DCA0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DCA0u)) return;
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
label_80B7DCA4:
    ctx->pc = 0x80B7DCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCA4u)) return;
    // 80B7DCA4: bl      0x8045C750
    {
            ctx->lr = 0x80B7DCA8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7DCA8:
    ctx->pc = 0x80B7DCA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DCA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7DCA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DCAC:
    ctx->pc = 0x80B7DCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCACu)) return;
    // 80B7DCAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7DCB0:
    ctx->pc = 0x80B7DCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCB0u)) return;
    // 80B7DCB0: li      r5, 2974
    ctx->gpr[5] = (u32)(s32)(2974);

label_80B7DCB4:
    ctx->pc = 0x80B7DCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCB4u)) return;
    // 80B7DCB4: li      r6, 23554
    ctx->gpr[6] = (u32)(s32)(23554);

label_80B7DCB8:
    ctx->pc = 0x80B7DCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCB8u)) return;
    // 80B7DCB8: li      r7, 1024
    ctx->gpr[7] = (u32)(s32)(1024);

label_80B7DCBC:
    ctx->pc = 0x80B7DCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCBCu)) return;
    // 80B7DCBC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7DCC0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7DCC0:
    ctx->pc = 0x80B7DCC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DCC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7DCC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DCC4:
    ctx->pc = 0x80B7DCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCC4u)) return;
    // 80B7DCC4: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B7DCC8:
    ctx->pc = 0x80B7DCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCC8u)) return;
    // 80B7DCC8: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DCCC:
    ctx->pc = 0x80B7DCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCCCu)) return;
    // 80B7DCCC: addi    r5, r5, 10340
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10340);

label_80B7DCD0:
    ctx->pc = 0x80B7DCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DCD0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DCD0u)) return;
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
label_80B7DCD4:
    ctx->pc = 0x80B7DCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCD4u)) return;
    // 80B7DCD4: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DCD8:
    ctx->pc = 0x80B7DCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCD8u)) return;
    // 80B7DCD8: addi    r5, r5, 10128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10128);

label_80B7DCDC:
    ctx->pc = 0x80B7DCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DCDC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DCDCu)) return;
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
label_80B7DCE0:
    ctx->pc = 0x80B7DCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCE0u)) return;
    // 80B7DCE0: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DCE4:
    ctx->pc = 0x80B7DCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCE4u)) return;
    // 80B7DCE4: addi    r5, r5, 10344
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10344);

label_80B7DCE8:
    ctx->pc = 0x80B7DCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DCE8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DCE8u)) return;
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
label_80B7DCEC:
    ctx->pc = 0x80B7DCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCECu)) return;
    // 80B7DCEC: bl      0x8045C750
    {
            ctx->lr = 0x80B7DCF0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7DCF0:
    ctx->pc = 0x80B7DCF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DCF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7DCF0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DCF4:
    ctx->pc = 0x80B7DCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCF4u)) return;
    // 80B7DCF4: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B7DCF8:
    ctx->pc = 0x80B7DCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCF8u)) return;
    // 80B7DCF8: li      r5, 2974
    ctx->gpr[5] = (u32)(s32)(2974);

label_80B7DCFC:
    ctx->pc = 0x80B7DCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DCFCu)) return;
    // 80B7DCFC: li      r6, 23554
    ctx->gpr[6] = (u32)(s32)(23554);

label_80B7DD00:
    ctx->pc = 0x80B7DD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD00u)) return;
    // 80B7DD00: li      r7, 1024
    ctx->gpr[7] = (u32)(s32)(1024);

label_80B7DD04:
    ctx->pc = 0x80B7DD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD04u)) return;
    // 80B7DD04: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7DD08u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7DD08:
    ctx->pc = 0x80B7DD08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DD08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DD08: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7DD0C:
    ctx->pc = 0x80B7DD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD0Cu)) return;
    // 80B7DD0C: bl      0x8045F220
    {
            ctx->lr = 0x80B7DD10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DD10:
    ctx->pc = 0x80B7DD10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DD10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B7DD10: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DD14:
    ctx->pc = 0x80B7DD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD14u)) return;
    // 80B7DD14: addi    r4, r4, 10348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10348);

label_80B7DD18:
    ctx->pc = 0x80B7DD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7DD18: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DD18u)) return;
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
label_80B7DD1C:
    ctx->pc = 0x80B7DD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD1Cu)) return;
    // 80B7DD1C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DD20:
    ctx->pc = 0x80B7DD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD20u)) return;
    // 80B7DD20: addi    r4, r4, 10352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10352);

label_80B7DD24:
    ctx->pc = 0x80B7DD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7DD24: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DD24u)) return;
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
label_80B7DD28:
    ctx->pc = 0x80B7DD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD28u)) return;
    // 80B7DD28: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DD2C:
    ctx->pc = 0x80B7DD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD2Cu)) return;
    // 80B7DD2C: addi    r4, r4, 10356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10356);

label_80B7DD30:
    ctx->pc = 0x80B7DD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DD30: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DD30u)) return;
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
label_80B7DD34:
    ctx->pc = 0x80B7DD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD34u)) return;
    // 80B7DD34: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DD38:
    ctx->pc = 0x80B7DD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD38u)) return;
    // 80B7DD38: addi    r4, r4, 10288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10288);

label_80B7DD3C:
    ctx->pc = 0x80B7DD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DD3C: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DD3Cu)) return;
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
label_80B7DD40:
    ctx->pc = 0x80B7DD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD40u)) return;
    // 80B7DD40: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DD44:
    ctx->pc = 0x80B7DD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD44u)) return;
    // 80B7DD44: addi    r4, r4, 10360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10360);

label_80B7DD48:
    ctx->pc = 0x80B7DD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DD48: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DD48u)) return;
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
label_80B7DD4C:
    ctx->pc = 0x80B7DD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD4Cu)) return;
    // 80B7DD4C: bl      0x8045E570
    {
            ctx->lr = 0x80B7DD50u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B7DD50:
    ctx->pc = 0x80B7DD50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DD50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7DD50: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7DD54:
    ctx->pc = 0x80B7DD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD54u)) return;
    // 80B7DD54: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7DD58:
    ctx->pc = 0x80B7DD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7DD58: lwz     r3, 0(r3)
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
label_80B7DD5C:
    ctx->pc = 0x80B7DD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD5Cu)) return;
    // 80B7DD5C: cmplwi  r3, 0x0000
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

label_80B7DD60:
    ctx->pc = 0x80B7DD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD60u)) return;
    // 80B7DD60: bc    12, 2, 0x80B7DD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7DD74;
        }
    }

label_80B7DD64:
    ctx->pc = 0x80B7DD64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DD64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7DD64: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DD68:
    ctx->pc = 0x80B7DD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD68u)) return;
    // 80B7DD68: addi    r4, r4, 10364
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10364);

label_80B7DD6C:
    ctx->pc = 0x80B7DD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DD6C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DD6Cu)) return;
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
label_80B7DD70:
    ctx->pc = 0x80B7DD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD70u)) return;
    // 80B7DD70: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7DD74u;
            goto label_80B7EA50;
    }

label_80B7DD74:
    ctx->pc = 0x80B7DD74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DD74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DD74: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B7DD78:
    ctx->pc = 0x80B7DD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD78u)) return;
    // 80B7DD78: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DD7Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DD7C:
    ctx->pc = 0x80B7DD7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DD7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7DD7C: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7DD80:
    ctx->pc = 0x80B7DD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD80u)) return;
    // 80B7DD80: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7DD84:
    ctx->pc = 0x80B7DD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7DD84: lwz     r3, 0(r3)
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
label_80B7DD88:
    ctx->pc = 0x80B7DD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD88u)) return;
    // 80B7DD88: cmplwi  r3, 0x0000
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

label_80B7DD8C:
    ctx->pc = 0x80B7DD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD8Cu)) return;
    // 80B7DD8C: bc    12, 2, 0x80B7DDA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7DDA0;
        }
    }

label_80B7DD90:
    ctx->pc = 0x80B7DD90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DD90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7DD90: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DD94:
    ctx->pc = 0x80B7DD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD94u)) return;
    // 80B7DD94: addi    r4, r4, 10368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10368);

label_80B7DD98:
    ctx->pc = 0x80B7DD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DD98: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DD98u)) return;
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
label_80B7DD9C:
    ctx->pc = 0x80B7DD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DD9Cu)) return;
    // 80B7DD9C: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7DDA0u;
            goto label_80B7EA50;
    }

label_80B7DDA0:
    ctx->pc = 0x80B7DDA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DDA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DDA0: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B7DDA4:
    ctx->pc = 0x80B7DDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDA4u)) return;
    // 80B7DDA4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DDA8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DDA8:
    ctx->pc = 0x80B7DDA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DDA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7DDA8: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7DDAC:
    ctx->pc = 0x80B7DDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDACu)) return;
    // 80B7DDAC: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7DDB0:
    ctx->pc = 0x80B7DDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7DDB0: lwz     r3, 0(r3)
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
label_80B7DDB4:
    ctx->pc = 0x80B7DDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDB4u)) return;
    // 80B7DDB4: cmplwi  r3, 0x0000
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

label_80B7DDB8:
    ctx->pc = 0x80B7DDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDB8u)) return;
    // 80B7DDB8: bc    12, 2, 0x80B7DDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7DDCC;
        }
    }

label_80B7DDBC:
    ctx->pc = 0x80B7DDBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DDBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7DDBC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DDC0:
    ctx->pc = 0x80B7DDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDC0u)) return;
    // 80B7DDC0: addi    r4, r4, 10204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10204);

label_80B7DDC4:
    ctx->pc = 0x80B7DDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DDC4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DDC4u)) return;
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
label_80B7DDC8:
    ctx->pc = 0x80B7DDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDC8u)) return;
    // 80B7DDC8: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7DDCCu;
            goto label_80B7EA50;
    }

label_80B7DDCC:
    ctx->pc = 0x80B7DDCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DDCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DDCC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7DDD0:
    ctx->pc = 0x80B7DDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDD0u)) return;
    // 80B7DDD0: bl      0x8045F220
    {
            ctx->lr = 0x80B7DDD4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DDD4:
    ctx->pc = 0x80B7DDD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DDD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7DDD4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DDD8:
    ctx->pc = 0x80B7DDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDD8u)) return;
    // 80B7DDD8: addi    r4, r4, 10220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10220);

label_80B7DDDC:
    ctx->pc = 0x80B7DDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DDDC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DDDCu)) return;
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
label_80B7DDE0:
    ctx->pc = 0x80B7DDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDE0u)) return;
    // 80B7DDE0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DDE4:
    ctx->pc = 0x80B7DDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDE4u)) return;
    // 80B7DDE4: addi    r4, r4, 10224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10224);

label_80B7DDE8:
    ctx->pc = 0x80B7DDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DDE8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DDE8u)) return;
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
label_80B7DDEC:
    ctx->pc = 0x80B7DDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDECu)) return;
    // 80B7DDEC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DDF0:
    ctx->pc = 0x80B7DDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDF0u)) return;
    // 80B7DDF0: addi    r4, r4, 10228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10228);

label_80B7DDF4:
    ctx->pc = 0x80B7DDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DDF4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DDF4u)) return;
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
label_80B7DDF8:
    ctx->pc = 0x80B7DDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DDF8u)) return;
    // 80B7DDF8: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7DDFCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7DDFC:
    ctx->pc = 0x80B7DDFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DDFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DDFC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7DE00:
    ctx->pc = 0x80B7DE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE00u)) return;
    // 80B7DE00: bl      0x8045F220
    {
            ctx->lr = 0x80B7DE04u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DE04:
    ctx->pc = 0x80B7DE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7DE04: li      r4, 2816
    ctx->gpr[4] = (u32)(s32)(2816);

label_80B7DE08:
    ctx->pc = 0x80B7DE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE08u)) return;
    // 80B7DE08: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7DE0C:
    ctx->pc = 0x80B7DE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE0Cu)) return;
    // 80B7DE0C: addi    r5, r5, -5632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5632);

label_80B7DE10:
    ctx->pc = 0x80B7DE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE10u)) return;
    // 80B7DE10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7DE14:
    ctx->pc = 0x80B7DE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE14u)) return;
    // 80B7DE14: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7DE18u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7DE18:
    ctx->pc = 0x80B7DE18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DE18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7DE18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DE1C:
    ctx->pc = 0x80B7DE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE1Cu)) return;
    // 80B7DE1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7DE20:
    ctx->pc = 0x80B7DE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE20u)) return;
    // 80B7DE20: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DE24:
    ctx->pc = 0x80B7DE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE24u)) return;
    // 80B7DE24: addi    r5, r5, 10372
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10372);

label_80B7DE28:
    ctx->pc = 0x80B7DE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DE28: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DE28u)) return;
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
label_80B7DE2C:
    ctx->pc = 0x80B7DE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE2Cu)) return;
    // 80B7DE2C: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DE30:
    ctx->pc = 0x80B7DE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE30u)) return;
    // 80B7DE30: addi    r5, r5, 10376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10376);

label_80B7DE34:
    ctx->pc = 0x80B7DE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DE34: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DE34u)) return;
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
label_80B7DE38:
    ctx->pc = 0x80B7DE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE38u)) return;
    // 80B7DE38: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DE3C:
    ctx->pc = 0x80B7DE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE3Cu)) return;
    // 80B7DE3C: addi    r5, r5, 10380
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10380);

label_80B7DE40:
    ctx->pc = 0x80B7DE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DE40: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DE40u)) return;
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
label_80B7DE44:
    ctx->pc = 0x80B7DE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE44u)) return;
    // 80B7DE44: bl      0x8045C750
    {
            ctx->lr = 0x80B7DE48u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7DE48:
    ctx->pc = 0x80B7DE48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DE48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7DE48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DE4C:
    ctx->pc = 0x80B7DE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE4Cu)) return;
    // 80B7DE4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7DE50:
    ctx->pc = 0x80B7DE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE50u)) return;
    // 80B7DE50: li      r5, 2718
    ctx->gpr[5] = (u32)(s32)(2718);

label_80B7DE54:
    ctx->pc = 0x80B7DE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE54u)) return;
    // 80B7DE54: li      r6, 2306
    ctx->gpr[6] = (u32)(s32)(2306);

label_80B7DE58:
    ctx->pc = 0x80B7DE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE58u)) return;
    // 80B7DE58: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80B7DE5C:
    ctx->pc = 0x80B7DE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE5Cu)) return;
    // 80B7DE5C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7DE60u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7DE60:
    ctx->pc = 0x80B7DE60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DE60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7DE60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DE64:
    ctx->pc = 0x80B7DE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE64u)) return;
    // 80B7DE64: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B7DE68:
    ctx->pc = 0x80B7DE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE68u)) return;
    // 80B7DE68: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DE6C:
    ctx->pc = 0x80B7DE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE6Cu)) return;
    // 80B7DE6C: addi    r5, r5, 10384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10384);

label_80B7DE70:
    ctx->pc = 0x80B7DE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DE70: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DE70u)) return;
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
label_80B7DE74:
    ctx->pc = 0x80B7DE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE74u)) return;
    // 80B7DE74: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DE78:
    ctx->pc = 0x80B7DE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE78u)) return;
    // 80B7DE78: addi    r5, r5, 10388
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10388);

label_80B7DE7C:
    ctx->pc = 0x80B7DE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DE7C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DE7Cu)) return;
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
label_80B7DE80:
    ctx->pc = 0x80B7DE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE80u)) return;
    // 80B7DE80: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DE84:
    ctx->pc = 0x80B7DE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE84u)) return;
    // 80B7DE84: addi    r5, r5, 10392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10392);

label_80B7DE88:
    ctx->pc = 0x80B7DE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DE88: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DE88u)) return;
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
label_80B7DE8C:
    ctx->pc = 0x80B7DE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE8Cu)) return;
    // 80B7DE8C: bl      0x8045C750
    {
            ctx->lr = 0x80B7DE90u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7DE90:
    ctx->pc = 0x80B7DE90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DE90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DE90: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B7DE94:
    ctx->pc = 0x80B7DE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE94u)) return;
    // 80B7DE94: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DE98u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DE98:
    ctx->pc = 0x80B7DE98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DE98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DE98: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B7DE9C:
    ctx->pc = 0x80B7DE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DE9Cu)) return;
    // 80B7DE9C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DEA0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DEA0:
    ctx->pc = 0x80B7DEA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DEA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7DEA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DEA4:
    ctx->pc = 0x80B7DEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEA4u)) return;
    // 80B7DEA4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80B7DEA8:
    ctx->pc = 0x80B7DEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEA8u)) return;
    // 80B7DEA8: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DEAC:
    ctx->pc = 0x80B7DEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEACu)) return;
    // 80B7DEAC: addi    r5, r5, 10396
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10396);

label_80B7DEB0:
    ctx->pc = 0x80B7DEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DEB0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DEB0u)) return;
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
label_80B7DEB4:
    ctx->pc = 0x80B7DEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEB4u)) return;
    // 80B7DEB4: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DEB8:
    ctx->pc = 0x80B7DEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEB8u)) return;
    // 80B7DEB8: addi    r5, r5, 10400
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10400);

label_80B7DEBC:
    ctx->pc = 0x80B7DEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DEBC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DEBCu)) return;
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
label_80B7DEC0:
    ctx->pc = 0x80B7DEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEC0u)) return;
    // 80B7DEC0: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7DEC4:
    ctx->pc = 0x80B7DEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEC4u)) return;
    // 80B7DEC4: addi    r5, r5, 10404
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10404);

label_80B7DEC8:
    ctx->pc = 0x80B7DEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DEC8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7DEC8u)) return;
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
label_80B7DECC:
    ctx->pc = 0x80B7DECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DECCu)) return;
    // 80B7DECC: bl      0x8045C750
    {
            ctx->lr = 0x80B7DED0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7DED0:
    ctx->pc = 0x80B7DED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7DED0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DED4:
    ctx->pc = 0x80B7DED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DED4u)) return;
    // 80B7DED4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80B7DED8:
    ctx->pc = 0x80B7DED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DED8u)) return;
    // 80B7DED8: li      r5, 2462
    ctx->gpr[5] = (u32)(s32)(2462);

label_80B7DEDC:
    ctx->pc = 0x80B7DEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEDCu)) return;
    // 80B7DEDC: li      r6, 24066
    ctx->gpr[6] = (u32)(s32)(24066);

label_80B7DEE0:
    ctx->pc = 0x80B7DEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEE0u)) return;
    // 80B7DEE0: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80B7DEE4:
    ctx->pc = 0x80B7DEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEE4u)) return;
    // 80B7DEE4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7DEE8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7DEE8:
    ctx->pc = 0x80B7DEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DEE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DEEC:
    ctx->pc = 0x80B7DEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEECu)) return;
    // 80B7DEEC: bl      0x8045F220
    {
            ctx->lr = 0x80B7DEF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DEF0:
    ctx->pc = 0x80B7DEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7DEF0: bl      0x8045EB8C
    {
            ctx->lr = 0x80B7DEF4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B7DEF4:
    ctx->pc = 0x80B7DEF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DEF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DEF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DEF8:
    ctx->pc = 0x80B7DEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DEF8u)) return;
    // 80B7DEF8: bl      0x8045F220
    {
            ctx->lr = 0x80B7DEFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DEFC:
    ctx->pc = 0x80B7DEFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DEFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B7DEFC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DF00:
    ctx->pc = 0x80B7DF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF00u)) return;
    // 80B7DF00: addi    r4, r4, 10408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10408);

label_80B7DF04:
    ctx->pc = 0x80B7DF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7DF04: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DF04u)) return;
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
label_80B7DF08:
    ctx->pc = 0x80B7DF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF08u)) return;
    // 80B7DF08: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DF0C:
    ctx->pc = 0x80B7DF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF0Cu)) return;
    // 80B7DF0C: addi    r4, r4, 10412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10412);

label_80B7DF10:
    ctx->pc = 0x80B7DF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7DF10: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DF10u)) return;
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
label_80B7DF14:
    ctx->pc = 0x80B7DF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF14u)) return;
    // 80B7DF14: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DF18:
    ctx->pc = 0x80B7DF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF18u)) return;
    // 80B7DF18: addi    r4, r4, 10416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10416);

label_80B7DF1C:
    ctx->pc = 0x80B7DF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DF1C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DF1Cu)) return;
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
label_80B7DF20:
    ctx->pc = 0x80B7DF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF20u)) return;
    // 80B7DF20: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DF24:
    ctx->pc = 0x80B7DF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF24u)) return;
    // 80B7DF24: addi    r4, r4, 10136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10136);

label_80B7DF28:
    ctx->pc = 0x80B7DF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DF28: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DF28u)) return;
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
label_80B7DF2C:
    ctx->pc = 0x80B7DF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF2Cu)) return;
    // 80B7DF2C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DF30:
    ctx->pc = 0x80B7DF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF30u)) return;
    // 80B7DF30: addi    r4, r4, 10420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10420);

label_80B7DF34:
    ctx->pc = 0x80B7DF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DF34: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DF34u)) return;
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
label_80B7DF38:
    ctx->pc = 0x80B7DF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF38u)) return;
    // 80B7DF38: bl      0x8045E570
    {
            ctx->lr = 0x80B7DF3Cu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B7DF3C:
    ctx->pc = 0x80B7DF3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DF3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DF3C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B7DF40:
    ctx->pc = 0x80B7DF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF40u)) return;
    // 80B7DF40: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DF44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DF44:
    ctx->pc = 0x80B7DF44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DF44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DF44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DF48:
    ctx->pc = 0x80B7DF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF48u)) return;
    // 80B7DF48: bl      0x8045F220
    {
            ctx->lr = 0x80B7DF4Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DF4C:
    ctx->pc = 0x80B7DF4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DF4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7DF4C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7DF50:
    ctx->pc = 0x80B7DF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF50u)) return;
    // 80B7DF50: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7DF54:
    ctx->pc = 0x80B7DF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF54u)) return;
    // 80B7DF54: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80B7DF58:
    ctx->pc = 0x80B7DF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF58u)) return;
    // 80B7DF58: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7DF5C:
    ctx->pc = 0x80B7DF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF5Cu)) return;
    // 80B7DF5C: addi    r6, r6, 10048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10048);

label_80B7DF60:
    ctx->pc = 0x80B7DF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7DF60: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7DF60u)) return;
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
label_80B7DF64:
    ctx->pc = 0x80B7DF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF64u)) return;
    // 80B7DF64: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7DF68:
    ctx->pc = 0x80B7DF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF68u)) return;
    // 80B7DF68: addi    r6, r6, 10424
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10424);

label_80B7DF6C:
    ctx->pc = 0x80B7DF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7DF6C: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7DF6Cu)) return;
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
label_80B7DF70:
    ctx->pc = 0x80B7DF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF70u)) return;
    // 80B7DF70: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7DF70u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B7DF74:
    ctx->pc = 0x80B7DF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF74u)) return;
    // 80B7DF74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7DF78:
    ctx->pc = 0x80B7DF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF78u)) return;
    // 80B7DF78: bl      0x8045C3C0
    {
            ctx->lr = 0x80B7DF7Cu;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B7DF7C:
    ctx->pc = 0x80B7DF7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DF7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DF7C: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B7DF80:
    ctx->pc = 0x80B7DF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF80u)) return;
    // 80B7DF80: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7DF84u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7DF84:
    ctx->pc = 0x80B7DF84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DF84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DF84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DF88:
    ctx->pc = 0x80B7DF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF88u)) return;
    // 80B7DF88: bl      0x8045F220
    {
            ctx->lr = 0x80B7DF8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DF8C:
    ctx->pc = 0x80B7DF8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DF8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7DF8C: bl      0x8045E6B8
    {
            ctx->lr = 0x80B7DF90u;
            ctx->pc = 0x8045E6B8u;
            return;
    }

label_80B7DF90:
    ctx->pc = 0x80B7DF90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DF90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DF90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DF94:
    ctx->pc = 0x80B7DF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF94u)) return;
    // 80B7DF94: bl      0x8045F220
    {
            ctx->lr = 0x80B7DF98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DF98:
    ctx->pc = 0x80B7DF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7DF98: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DF9C:
    ctx->pc = 0x80B7DF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DF9Cu)) return;
    // 80B7DF9C: addi    r4, r4, 10428
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10428);

label_80B7DFA0:
    ctx->pc = 0x80B7DFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DFA0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DFA0u)) return;
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
label_80B7DFA4:
    ctx->pc = 0x80B7DFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFA4u)) return;
    // 80B7DFA4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DFA8:
    ctx->pc = 0x80B7DFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFA8u)) return;
    // 80B7DFA8: addi    r4, r4, 10432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10432);

label_80B7DFAC:
    ctx->pc = 0x80B7DFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DFAC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DFACu)) return;
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
label_80B7DFB0:
    ctx->pc = 0x80B7DFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFB0u)) return;
    // 80B7DFB0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DFB4:
    ctx->pc = 0x80B7DFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFB4u)) return;
    // 80B7DFB4: addi    r4, r4, 10436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10436);

label_80B7DFB8:
    ctx->pc = 0x80B7DFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7DFB8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DFB8u)) return;
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
label_80B7DFBC:
    ctx->pc = 0x80B7DFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFBCu)) return;
    // 80B7DFBC: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7DFC0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7DFC0:
    ctx->pc = 0x80B7DFC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DFC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DFC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7DFC4:
    ctx->pc = 0x80B7DFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFC4u)) return;
    // 80B7DFC4: bl      0x8045F220
    {
            ctx->lr = 0x80B7DFC8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DFC8:
    ctx->pc = 0x80B7DFC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DFC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7DFC8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7DFCC:
    ctx->pc = 0x80B7DFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFCCu)) return;
    // 80B7DFCC: addi    r4, r5, -1280
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-1280);

label_80B7DFD0:
    ctx->pc = 0x80B7DFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFD0u)) return;
    // 80B7DFD0: addi    r5, r5, -9728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9728);

label_80B7DFD4:
    ctx->pc = 0x80B7DFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFD4u)) return;
    // 80B7DFD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7DFD8:
    ctx->pc = 0x80B7DFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFD8u)) return;
    // 80B7DFD8: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7DFDCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7DFDC:
    ctx->pc = 0x80B7DFDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DFDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7DFDC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7DFE0:
    ctx->pc = 0x80B7DFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFE0u)) return;
    // 80B7DFE0: bl      0x8045F220
    {
            ctx->lr = 0x80B7DFE4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7DFE4:
    ctx->pc = 0x80B7DFE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7DFE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7DFE4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DFE8:
    ctx->pc = 0x80B7DFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFE8u)) return;
    // 80B7DFE8: addi    r4, r4, 10440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10440);

label_80B7DFEC:
    ctx->pc = 0x80B7DFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7DFEC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DFECu)) return;
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
label_80B7DFF0:
    ctx->pc = 0x80B7DFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFF0u)) return;
    // 80B7DFF0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7DFF4:
    ctx->pc = 0x80B7DFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFF4u)) return;
    // 80B7DFF4: addi    r4, r4, 10444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10444);

label_80B7DFF8:
    ctx->pc = 0x80B7DFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7DFF8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7DFF8u)) return;
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
label_80B7DFFC:
    ctx->pc = 0x80B7DFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7DFFCu)) return;
    // 80B7DFFC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E000:
    ctx->pc = 0x80B7E000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E000u)) return;
    // 80B7E000: addi    r4, r4, 10448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10448);

label_80B7E004:
    ctx->pc = 0x80B7E004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E004: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E004u)) return;
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
label_80B7E008:
    ctx->pc = 0x80B7E008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E008u)) return;
    // 80B7E008: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7E00Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7E00C:
    ctx->pc = 0x80B7E00Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E00Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E00C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E010:
    ctx->pc = 0x80B7E010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E010u)) return;
    // 80B7E010: bl      0x8045F220
    {
            ctx->lr = 0x80B7E014u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E014:
    ctx->pc = 0x80B7E014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E014: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7E018:
    ctx->pc = 0x80B7E018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E018u)) return;
    // 80B7E018: addi    r4, r5, -1280
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-1280);

label_80B7E01C:
    ctx->pc = 0x80B7E01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E01Cu)) return;
    // 80B7E01C: addi    r5, r5, -8192
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8192);

label_80B7E020:
    ctx->pc = 0x80B7E020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E020u)) return;
    // 80B7E020: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7E024:
    ctx->pc = 0x80B7E024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E024u)) return;
    // 80B7E024: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7E028u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7E028:
    ctx->pc = 0x80B7E028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E028: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E02C:
    ctx->pc = 0x80B7E02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E02Cu)) return;
    // 80B7E02C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E030u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E030:
    ctx->pc = 0x80B7E030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7E030: lis     r4, -28586
    ctx->gpr[4] = ((u32)(s32)(-28586) << 16);

label_80B7E034:
    ctx->pc = 0x80B7E034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E034u)) return;
    // 80B7E034: addi    r4, r4, -5912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5912);

label_80B7E038:
    ctx->pc = 0x80B7E038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E038u)) return;
    // 80B7E038: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B7E03C:
    ctx->pc = 0x80B7E03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E03Cu)) return;
    // 80B7E03C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B7E040:
    ctx->pc = 0x80B7E040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E040u)) return;
    // 80B7E040: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E044:
    ctx->pc = 0x80B7E044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E044u)) return;
    // 80B7E044: addi    r6, r6, 10452
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10452);

label_80B7E048:
    ctx->pc = 0x80B7E048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E048: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E048u)) return;
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
label_80B7E04C:
    ctx->pc = 0x80B7E04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E04Cu)) return;
    // 80B7E04C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7E050:
    ctx->pc = 0x80B7E050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E050u)) return;
    // 80B7E050: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7E054:
    ctx->pc = 0x80B7E054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E054u)) return;
    // 80B7E054: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7E058u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7E058:
    ctx->pc = 0x80B7E058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E058: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E05C:
    ctx->pc = 0x80B7E05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E05Cu)) return;
    // 80B7E05C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E060u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E060:
    ctx->pc = 0x80B7E060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7E060: lis     r4, -28604
    ctx->gpr[4] = ((u32)(s32)(-28604) << 16);

label_80B7E064:
    ctx->pc = 0x80B7E064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E064u)) return;
    // 80B7E064: addi    r4, r4, 16948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16948);

label_80B7E068:
    ctx->pc = 0x80B7E068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E068u)) return;
    // 80B7E068: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7E06C:
    ctx->pc = 0x80B7E06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E06Cu)) return;
    // 80B7E06C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7E070:
    ctx->pc = 0x80B7E070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E070u)) return;
    // 80B7E070: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E074:
    ctx->pc = 0x80B7E074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E074u)) return;
    // 80B7E074: addi    r6, r6, 10456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10456);

label_80B7E078:
    ctx->pc = 0x80B7E078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E078: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E078u)) return;
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
label_80B7E07C:
    ctx->pc = 0x80B7E07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E07Cu)) return;
    // 80B7E07C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7E080:
    ctx->pc = 0x80B7E080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E080u)) return;
    // 80B7E080: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7E084:
    ctx->pc = 0x80B7E084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E084u)) return;
    // 80B7E084: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7E088u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7E088:
    ctx->pc = 0x80B7E088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E088: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E08C:
    ctx->pc = 0x80B7E08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E08Cu)) return;
    // 80B7E08C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E090u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E090:
    ctx->pc = 0x80B7E090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7E090: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7E094:
    ctx->pc = 0x80B7E094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E094u)) return;
    // 80B7E094: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E098:
    ctx->pc = 0x80B7E098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E098u)) return;
    // 80B7E098: bl      0x8045F220
    {
            ctx->lr = 0x80B7E09Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E09C:
    ctx->pc = 0x80B7E09Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E09Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7E09C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B7E0A0:
    ctx->pc = 0x80B7E0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0A0u)) return;
    // 80B7E0A0: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E0A4:
    ctx->pc = 0x80B7E0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0A4u)) return;
    // 80B7E0A4: addi    r5, r5, 10048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10048);

label_80B7E0A8:
    ctx->pc = 0x80B7E0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7E0A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E0A8u)) return;
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
label_80B7E0AC:
    ctx->pc = 0x80B7E0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0ACu)) return;
    // 80B7E0AC: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E0B0:
    ctx->pc = 0x80B7E0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0B0u)) return;
    // 80B7E0B0: addi    r5, r5, 10460
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10460);

label_80B7E0B4:
    ctx->pc = 0x80B7E0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E0B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E0B4u)) return;
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
label_80B7E0B8:
    ctx->pc = 0x80B7E0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0B8u)) return;
    // 80B7E0B8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E0B8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B7E0BC:
    ctx->pc = 0x80B7E0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0BCu)) return;
    // 80B7E0BC: bl      0x8045E734
    {
            ctx->lr = 0x80B7E0C0u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80B7E0C0:
    ctx->pc = 0x80B7E0C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E0C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E0C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E0C4:
    ctx->pc = 0x80B7E0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0C4u)) return;
    // 80B7E0C4: bl      0x8045F220
    {
            ctx->lr = 0x80B7E0C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E0C8:
    ctx->pc = 0x80B7E0C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E0C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7E0C8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E0CC:
    ctx->pc = 0x80B7E0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0CCu)) return;
    // 80B7E0CC: addi    r4, r4, 10464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10464);

label_80B7E0D0:
    ctx->pc = 0x80B7E0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E0D0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E0D0u)) return;
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
label_80B7E0D4:
    ctx->pc = 0x80B7E0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0D4u)) return;
    // 80B7E0D4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E0D8:
    ctx->pc = 0x80B7E0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0D8u)) return;
    // 80B7E0D8: addi    r4, r4, 10468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10468);

label_80B7E0DC:
    ctx->pc = 0x80B7E0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E0DC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E0DCu)) return;
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
label_80B7E0E0:
    ctx->pc = 0x80B7E0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0E0u)) return;
    // 80B7E0E0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E0E4:
    ctx->pc = 0x80B7E0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0E4u)) return;
    // 80B7E0E4: addi    r4, r4, 10472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10472);

label_80B7E0E8:
    ctx->pc = 0x80B7E0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E0E8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E0E8u)) return;
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
label_80B7E0EC:
    ctx->pc = 0x80B7E0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0ECu)) return;
    // 80B7E0EC: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7E0F0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7E0F0:
    ctx->pc = 0x80B7E0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E0F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E0F4:
    ctx->pc = 0x80B7E0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0F4u)) return;
    // 80B7E0F4: bl      0x8045F220
    {
            ctx->lr = 0x80B7E0F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E0F8:
    ctx->pc = 0x80B7E0F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E0F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E0F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E0FC:
    ctx->pc = 0x80B7E0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E0FCu)) return;
    // 80B7E0FC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B7E100:
    ctx->pc = 0x80B7E100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E100u)) return;
    // 80B7E100: addi    r5, r5, -28672
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28672);

label_80B7E104:
    ctx->pc = 0x80B7E104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E104u)) return;
    // 80B7E104: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7E108:
    ctx->pc = 0x80B7E108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E108u)) return;
    // 80B7E108: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7E10Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7E10C:
    ctx->pc = 0x80B7E10Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E10Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E10C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E110:
    ctx->pc = 0x80B7E110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E110u)) return;
    // 80B7E110: bl      0x8045F220
    {
            ctx->lr = 0x80B7E114u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E114:
    ctx->pc = 0x80B7E114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7E114: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E118:
    ctx->pc = 0x80B7E118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E118u)) return;
    // 80B7E118: addi    r4, r4, 14032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14032);

label_80B7E11C:
    ctx->pc = 0x80B7E11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E11Cu)) return;
    // 80B7E11C: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E120:
    ctx->pc = 0x80B7E120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E120u)) return;
    // 80B7E120: addi    r5, r5, 10060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10060);

label_80B7E124:
    ctx->pc = 0x80B7E124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E124: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E124u)) return;
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
label_80B7E128:
    ctx->pc = 0x80B7E128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E128u)) return;
    // 80B7E128: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B7E12C:
    ctx->pc = 0x80B7E12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E12Cu)) return;
    // 80B7E12C: bl      0x8045EB14
    {
            ctx->lr = 0x80B7E130u;
            ctx->pc = 0x8045EB14u;
            return;
    }

label_80B7E130:
    ctx->pc = 0x80B7E130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E130: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80B7E134:
    ctx->pc = 0x80B7E134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E134u)) return;
    // 80B7E134: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7E138u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7E138:
    ctx->pc = 0x80B7E138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E138: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E13C:
    ctx->pc = 0x80B7E13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E13Cu)) return;
    // 80B7E13C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E140u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E140:
    ctx->pc = 0x80B7E140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7E140: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E144:
    ctx->pc = 0x80B7E144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E144u)) return;
    // 80B7E144: addi    r4, r4, 14032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14032);

label_80B7E148:
    ctx->pc = 0x80B7E148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E148u)) return;
    // 80B7E148: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E14C:
    ctx->pc = 0x80B7E14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E14Cu)) return;
    // 80B7E14C: addi    r5, r5, 10060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10060);

label_80B7E150:
    ctx->pc = 0x80B7E150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E150: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E150u)) return;
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
label_80B7E154:
    ctx->pc = 0x80B7E154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E154u)) return;
    // 80B7E154: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B7E158:
    ctx->pc = 0x80B7E158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E158u)) return;
    // 80B7E158: bl      0x8045EB14
    {
            ctx->lr = 0x80B7E15Cu;
            ctx->pc = 0x8045EB14u;
            return;
    }

label_80B7E15C:
    ctx->pc = 0x80B7E15Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E15Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E15C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E160:
    ctx->pc = 0x80B7E160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E160u)) return;
    // 80B7E160: bl      0x8045F220
    {
            ctx->lr = 0x80B7E164u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E164:
    ctx->pc = 0x80B7E164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E164: bl      0x8045E760
    {
            ctx->lr = 0x80B7E168u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80B7E168:
    ctx->pc = 0x80B7E168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E168: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E16C:
    ctx->pc = 0x80B7E16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E16Cu)) return;
    // 80B7E16C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E170u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E170:
    ctx->pc = 0x80B7E170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E170: lwz     r3, 32(r3)
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
label_80B7E174:
    ctx->pc = 0x80B7E174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E174: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E174u)) return;
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
label_80B7E178:
    ctx->pc = 0x80B7E178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E178u)) return;
    // 80B7E178: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E17C:
    ctx->pc = 0x80B7E17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E17Cu)) return;
    // 80B7E17C: addi    r3, r3, 10480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10480);

label_80B7E180:
    ctx->pc = 0x80B7E180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E180: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E180u)) return;
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
label_80B7E184:
    ctx->pc = 0x80B7E184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E184u)) return;
    // 80B7E184: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E184u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80B7E188:
    ctx->pc = 0x80B7E188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E188u)) return;
    // 80B7E188: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E18C:
    ctx->pc = 0x80B7E18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E18Cu)) return;
    // 80B7E18C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E190u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E190:
    ctx->pc = 0x80B7E190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E190: lwz     r3, 32(r3)
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
label_80B7E194:
    ctx->pc = 0x80B7E194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E194: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E194u)) return;
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
label_80B7E198:
    ctx->pc = 0x80B7E198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E198u)) return;
    // 80B7E198: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E19C:
    ctx->pc = 0x80B7E19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E19Cu)) return;
    // 80B7E19C: addi    r3, r3, 10476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10476);

label_80B7E1A0:
    ctx->pc = 0x80B7E1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E1A0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E1A0u)) return;
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
label_80B7E1A4:
    ctx->pc = 0x80B7E1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1A4u)) return;
    // 80B7E1A4: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E1A4u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80B7E1A8:
    ctx->pc = 0x80B7E1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1A8u)) return;
    // 80B7E1A8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E1AC:
    ctx->pc = 0x80B7E1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1ACu)) return;
    // 80B7E1AC: bl      0x8045F220
    {
            ctx->lr = 0x80B7E1B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E1B0:
    ctx->pc = 0x80B7E1B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E1B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E1B0: lwz     r3, 32(r3)
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
label_80B7E1B4:
    ctx->pc = 0x80B7E1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7E1B4: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E1B4u)) return;
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
label_80B7E1B8:
    ctx->pc = 0x80B7E1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1B8u)) return;
    // 80B7E1B8: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E1BC:
    ctx->pc = 0x80B7E1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1BCu)) return;
    // 80B7E1BC: addi    r3, r3, 10460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10460);

label_80B7E1C0:
    ctx->pc = 0x80B7E1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E1C0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E1C0u)) return;
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
label_80B7E1C4:
    ctx->pc = 0x80B7E1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1C4u)) return;
    // 80B7E1C4: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E1C4u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80B7E1C8:
    ctx->pc = 0x80B7E1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1C8u)) return;
    // 80B7E1C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E1CC:
    ctx->pc = 0x80B7E1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1CCu)) return;
    // 80B7E1CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E1D0:
    ctx->pc = 0x80B7E1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1D0u)) return;
    // 80B7E1D0: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80B7E1D0u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80B7E1D4:
    ctx->pc = 0x80B7E1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1D4u)) return;
    // 80B7E1D4: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80B7E1D4u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80B7E1D8:
    ctx->pc = 0x80B7E1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1D8u)) return;
    // 80B7E1D8: bl      0x8045C750
    {
            ctx->lr = 0x80B7E1DCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7E1DC:
    ctx->pc = 0x80B7E1DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E1DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E1DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E1E0:
    ctx->pc = 0x80B7E1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1E0u)) return;
    // 80B7E1E0: bl      0x8045F220
    {
            ctx->lr = 0x80B7E1E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E1E4:
    ctx->pc = 0x80B7E1E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E1E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E1E4: bl      0x8045C360
    {
            ctx->lr = 0x80B7E1E8u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80B7E1E8:
    ctx->pc = 0x80B7E1E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E1E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E1E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E1EC:
    ctx->pc = 0x80B7E1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1ECu)) return;
    // 80B7E1EC: bl      0x8045F220
    {
            ctx->lr = 0x80B7E1F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E1F0:
    ctx->pc = 0x80B7E1F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E1F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7E1F0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7E1F4:
    ctx->pc = 0x80B7E1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1F4u)) return;
    // 80B7E1F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E1F8:
    ctx->pc = 0x80B7E1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1F8u)) return;
    // 80B7E1F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E1FC:
    ctx->pc = 0x80B7E1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E1FCu)) return;
    // 80B7E1FC: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E200:
    ctx->pc = 0x80B7E200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E200u)) return;
    // 80B7E200: addi    r6, r6, 10048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10048);

label_80B7E204:
    ctx->pc = 0x80B7E204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E204: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E204u)) return;
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
label_80B7E208:
    ctx->pc = 0x80B7E208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E208u)) return;
    // 80B7E208: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E20C:
    ctx->pc = 0x80B7E20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E20Cu)) return;
    // 80B7E20C: addi    r6, r6, 10460
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10460);

label_80B7E210:
    ctx->pc = 0x80B7E210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E210: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E210u)) return;
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
label_80B7E214:
    ctx->pc = 0x80B7E214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E214u)) return;
    // 80B7E214: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E214u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B7E218:
    ctx->pc = 0x80B7E218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E218u)) return;
    // 80B7E218: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7E21C:
    ctx->pc = 0x80B7E21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E21Cu)) return;
    // 80B7E21C: bl      0x8045C3C0
    {
            ctx->lr = 0x80B7E220u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B7E220:
    ctx->pc = 0x80B7E220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E220: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B7E224:
    ctx->pc = 0x80B7E224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E224u)) return;
    // 80B7E224: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7E228u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7E228:
    ctx->pc = 0x80B7E228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E228: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E22C:
    ctx->pc = 0x80B7E22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E22Cu)) return;
    // 80B7E22C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E230u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E230:
    ctx->pc = 0x80B7E230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E230: lwz     r3, 32(r3)
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
label_80B7E234:
    ctx->pc = 0x80B7E234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E234: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E234u)) return;
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
label_80B7E238:
    ctx->pc = 0x80B7E238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E238u)) return;
    // 80B7E238: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E23C:
    ctx->pc = 0x80B7E23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E23Cu)) return;
    // 80B7E23C: addi    r3, r3, 10488
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10488);

label_80B7E240:
    ctx->pc = 0x80B7E240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E240: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E240u)) return;
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
label_80B7E244:
    ctx->pc = 0x80B7E244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E244u)) return;
    // 80B7E244: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E244u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80B7E248:
    ctx->pc = 0x80B7E248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E248u)) return;
    // 80B7E248: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E24C:
    ctx->pc = 0x80B7E24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E24Cu)) return;
    // 80B7E24C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E250u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E250:
    ctx->pc = 0x80B7E250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E250: lwz     r3, 32(r3)
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
label_80B7E254:
    ctx->pc = 0x80B7E254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E254: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E254u)) return;
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
label_80B7E258:
    ctx->pc = 0x80B7E258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E258u)) return;
    // 80B7E258: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E25C:
    ctx->pc = 0x80B7E25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E25Cu)) return;
    // 80B7E25C: addi    r3, r3, 10288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10288);

label_80B7E260:
    ctx->pc = 0x80B7E260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E260: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E260u)) return;
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
label_80B7E264:
    ctx->pc = 0x80B7E264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E264u)) return;
    // 80B7E264: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E264u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80B7E268:
    ctx->pc = 0x80B7E268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E268u)) return;
    // 80B7E268: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E26C:
    ctx->pc = 0x80B7E26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E26Cu)) return;
    // 80B7E26C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E270u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E270:
    ctx->pc = 0x80B7E270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E270: lwz     r3, 32(r3)
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
label_80B7E274:
    ctx->pc = 0x80B7E274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7E274: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E274u)) return;
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
label_80B7E278:
    ctx->pc = 0x80B7E278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E278u)) return;
    // 80B7E278: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E27C:
    ctx->pc = 0x80B7E27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E27Cu)) return;
    // 80B7E27C: addi    r3, r3, 10484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10484);

label_80B7E280:
    ctx->pc = 0x80B7E280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E280: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E280u)) return;
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
label_80B7E284:
    ctx->pc = 0x80B7E284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E284u)) return;
    // 80B7E284: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E284u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80B7E288:
    ctx->pc = 0x80B7E288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E288u)) return;
    // 80B7E288: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E28C:
    ctx->pc = 0x80B7E28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E28Cu)) return;
    // 80B7E28C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E290:
    ctx->pc = 0x80B7E290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E290u)) return;
    // 80B7E290: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80B7E290u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80B7E294:
    ctx->pc = 0x80B7E294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E294u)) return;
    // 80B7E294: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80B7E294u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80B7E298:
    ctx->pc = 0x80B7E298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E298u)) return;
    // 80B7E298: bl      0x8045C750
    {
            ctx->lr = 0x80B7E29Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7E29C:
    ctx->pc = 0x80B7E29Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E29Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E29C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E2A0:
    ctx->pc = 0x80B7E2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2A0u)) return;
    // 80B7E2A0: bl      0x8045F220
    {
            ctx->lr = 0x80B7E2A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E2A4:
    ctx->pc = 0x80B7E2A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E2A4: bl      0x8045C360
    {
            ctx->lr = 0x80B7E2A8u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80B7E2A8:
    ctx->pc = 0x80B7E2A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E2A8: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E2AC:
    ctx->pc = 0x80B7E2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2ACu)) return;
    // 80B7E2AC: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7E2B0:
    ctx->pc = 0x80B7E2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E2B0: lwz     r3, 0(r3)
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
label_80B7E2B4:
    ctx->pc = 0x80B7E2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2B4u)) return;
    // 80B7E2B4: cmplwi  r3, 0x0000
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

label_80B7E2B8:
    ctx->pc = 0x80B7E2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2B8u)) return;
    // 80B7E2B8: bc    12, 2, 0x80B7E2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E2CC;
        }
    }

label_80B7E2BC:
    ctx->pc = 0x80B7E2BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7E2BC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E2C0:
    ctx->pc = 0x80B7E2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2C0u)) return;
    // 80B7E2C0: addi    r4, r4, 10492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10492);

label_80B7E2C4:
    ctx->pc = 0x80B7E2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E2C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E2C4u)) return;
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
label_80B7E2C8:
    ctx->pc = 0x80B7E2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2C8u)) return;
    // 80B7E2C8: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7E2CCu;
            goto label_80B7EA50;
    }

label_80B7E2CC:
    ctx->pc = 0x80B7E2CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E2CC: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B7E2D0:
    ctx->pc = 0x80B7E2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2D0u)) return;
    // 80B7E2D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7E2D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7E2D4:
    ctx->pc = 0x80B7E2D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E2D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E2D8:
    ctx->pc = 0x80B7E2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2D8u)) return;
    // 80B7E2D8: bl      0x8045F220
    {
            ctx->lr = 0x80B7E2DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E2DC:
    ctx->pc = 0x80B7E2DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E2DC: bl      0x8045C034
    {
            ctx->lr = 0x80B7E2E0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7E2E0:
    ctx->pc = 0x80B7E2E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E2E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E2E4:
    ctx->pc = 0x80B7E2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2E4u)) return;
    // 80B7E2E4: bl      0x8045F220
    {
            ctx->lr = 0x80B7E2E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E2E8:
    ctx->pc = 0x80B7E2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7E2E8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E2EC:
    ctx->pc = 0x80B7E2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2ECu)) return;
    // 80B7E2EC: addi    r4, r4, 14052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14052);

label_80B7E2F0:
    ctx->pc = 0x80B7E2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2F0u)) return;
    // 80B7E2F0: bl      0x8045C060
    {
            ctx->lr = 0x80B7E2F4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7E2F4:
    ctx->pc = 0x80B7E2F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E2F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E2F8:
    ctx->pc = 0x80B7E2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E2F8u)) return;
    // 80B7E2F8: bl      0x8045F220
    {
            ctx->lr = 0x80B7E2FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E2FC:
    ctx->pc = 0x80B7E2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E2FC: lwz     r3, 32(r3)
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
label_80B7E300:
    ctx->pc = 0x80B7E300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E300: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E300u)) return;
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
label_80B7E304:
    ctx->pc = 0x80B7E304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E304u)) return;
    // 80B7E304: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E308:
    ctx->pc = 0x80B7E308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E308u)) return;
    // 80B7E308: addi    r3, r3, 10488
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10488);

label_80B7E30C:
    ctx->pc = 0x80B7E30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E30Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E30C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E30Cu)) return;
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
label_80B7E310:
    ctx->pc = 0x80B7E310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E310u)) return;
    // 80B7E310: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E310u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80B7E314:
    ctx->pc = 0x80B7E314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E314u)) return;
    // 80B7E314: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E318:
    ctx->pc = 0x80B7E318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E318u)) return;
    // 80B7E318: bl      0x8045F220
    {
            ctx->lr = 0x80B7E31Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E31C:
    ctx->pc = 0x80B7E31Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E31Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E31C: lwz     r3, 32(r3)
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
label_80B7E320:
    ctx->pc = 0x80B7E320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E320: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E320u)) return;
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
label_80B7E324:
    ctx->pc = 0x80B7E324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E324u)) return;
    // 80B7E324: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E328:
    ctx->pc = 0x80B7E328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E328u)) return;
    // 80B7E328: addi    r3, r3, 10496
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10496);

label_80B7E32C:
    ctx->pc = 0x80B7E32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E32C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E32Cu)) return;
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
label_80B7E330:
    ctx->pc = 0x80B7E330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E330u)) return;
    // 80B7E330: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E330u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80B7E334:
    ctx->pc = 0x80B7E334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E334u)) return;
    // 80B7E334: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E338:
    ctx->pc = 0x80B7E338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E338u)) return;
    // 80B7E338: bl      0x8045F220
    {
            ctx->lr = 0x80B7E33Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E33C:
    ctx->pc = 0x80B7E33Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E33Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E33C: lwz     r3, 32(r3)
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
label_80B7E340:
    ctx->pc = 0x80B7E340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7E340: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E340u)) return;
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
label_80B7E344:
    ctx->pc = 0x80B7E344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E344u)) return;
    // 80B7E344: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E348:
    ctx->pc = 0x80B7E348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E348u)) return;
    // 80B7E348: addi    r3, r3, 10136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10136);

label_80B7E34C:
    ctx->pc = 0x80B7E34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E34C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E34Cu)) return;
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
label_80B7E350:
    ctx->pc = 0x80B7E350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E350u)) return;
    // 80B7E350: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E350u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80B7E354:
    ctx->pc = 0x80B7E354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E354u)) return;
    // 80B7E354: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E358:
    ctx->pc = 0x80B7E358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E358u)) return;
    // 80B7E358: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E35C:
    ctx->pc = 0x80B7E35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E35Cu)) return;
    // 80B7E35C: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80B7E35Cu)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80B7E360:
    ctx->pc = 0x80B7E360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E360u)) return;
    // 80B7E360: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80B7E360u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80B7E364:
    ctx->pc = 0x80B7E364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E364u)) return;
    // 80B7E364: bl      0x8045C750
    {
            ctx->lr = 0x80B7E368u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7E368:
    ctx->pc = 0x80B7E368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E368: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E36C:
    ctx->pc = 0x80B7E36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E36Cu)) return;
    // 80B7E36C: bl      0x8045F220
    {
            ctx->lr = 0x80B7E370u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E370:
    ctx->pc = 0x80B7E370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E370: bl      0x8045C360
    {
            ctx->lr = 0x80B7E374u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80B7E374:
    ctx->pc = 0x80B7E374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E378:
    ctx->pc = 0x80B7E378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E378u)) return;
    // 80B7E378: bl      0x8045F220
    {
            ctx->lr = 0x80B7E37Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E37C:
    ctx->pc = 0x80B7E37Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E37Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80B7E37C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7E380:
    ctx->pc = 0x80B7E380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E380u)) return;
    // 80B7E380: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E384:
    ctx->pc = 0x80B7E384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E384u)) return;
    // 80B7E384: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E388:
    ctx->pc = 0x80B7E388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E388u)) return;
    // 80B7E388: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E38C:
    ctx->pc = 0x80B7E38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E38Cu)) return;
    // 80B7E38C: addi    r6, r6, 10500
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10500);

label_80B7E390:
    ctx->pc = 0x80B7E390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7E390: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E390u)) return;
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
label_80B7E394:
    ctx->pc = 0x80B7E394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E394u)) return;
    // 80B7E394: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E398:
    ctx->pc = 0x80B7E398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E398u)) return;
    // 80B7E398: addi    r6, r6, 10460
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10460);

label_80B7E39C:
    ctx->pc = 0x80B7E39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7E39C: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E39Cu)) return;
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
label_80B7E3A0:
    ctx->pc = 0x80B7E3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3A0u)) return;
    // 80B7E3A0: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E3A4:
    ctx->pc = 0x80B7E3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3A4u)) return;
    // 80B7E3A4: addi    r6, r6, 10504
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10504);

label_80B7E3A8:
    ctx->pc = 0x80B7E3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E3A8: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E3A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80B7E3AC:
    ctx->pc = 0x80B7E3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3ACu)) return;
    // 80B7E3AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7E3B0:
    ctx->pc = 0x80B7E3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3B0u)) return;
    // 80B7E3B0: bl      0x8045C3C0
    {
            ctx->lr = 0x80B7E3B4u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B7E3B4:
    ctx->pc = 0x80B7E3B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E3B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E3B4: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B7E3B8:
    ctx->pc = 0x80B7E3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3B8u)) return;
    // 80B7E3B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7E3BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7E3BC:
    ctx->pc = 0x80B7E3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E3BC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E3C0:
    ctx->pc = 0x80B7E3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3C0u)) return;
    // 80B7E3C0: bl      0x8045F220
    {
            ctx->lr = 0x80B7E3C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E3C4:
    ctx->pc = 0x80B7E3C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E3C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E3C4: lwz     r3, 32(r3)
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
label_80B7E3C8:
    ctx->pc = 0x80B7E3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E3C8: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E3C8u)) return;
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
label_80B7E3CC:
    ctx->pc = 0x80B7E3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3CCu)) return;
    // 80B7E3CC: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E3D0:
    ctx->pc = 0x80B7E3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3D0u)) return;
    // 80B7E3D0: addi    r3, r3, 10288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10288);

label_80B7E3D4:
    ctx->pc = 0x80B7E3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E3D4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E3D4u)) return;
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
label_80B7E3D8:
    ctx->pc = 0x80B7E3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3D8u)) return;
    // 80B7E3D8: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E3D8u)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_80B7E3DC:
    ctx->pc = 0x80B7E3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3DCu)) return;
    // 80B7E3DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E3E0:
    ctx->pc = 0x80B7E3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3E0u)) return;
    // 80B7E3E0: bl      0x8045F220
    {
            ctx->lr = 0x80B7E3E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E3E4:
    ctx->pc = 0x80B7E3E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E3E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E3E4: lwz     r3, 32(r3)
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
label_80B7E3E8:
    ctx->pc = 0x80B7E3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E3E8: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E3E8u)) return;
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
label_80B7E3EC:
    ctx->pc = 0x80B7E3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3ECu)) return;
    // 80B7E3EC: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E3F0:
    ctx->pc = 0x80B7E3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3F0u)) return;
    // 80B7E3F0: addi    r3, r3, 10460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10460);

label_80B7E3F4:
    ctx->pc = 0x80B7E3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E3F4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E3F4u)) return;
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
label_80B7E3F8:
    ctx->pc = 0x80B7E3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3F8u)) return;
    // 80B7E3F8: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E3F8u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80B7E3FC:
    ctx->pc = 0x80B7E3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E3FCu)) return;
    // 80B7E3FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E400:
    ctx->pc = 0x80B7E400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E400u)) return;
    // 80B7E400: bl      0x8045F220
    {
            ctx->lr = 0x80B7E404u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E404:
    ctx->pc = 0x80B7E404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E404: lwz     r3, 32(r3)
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
label_80B7E408:
    ctx->pc = 0x80B7E408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7E408: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E408u)) return;
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
label_80B7E40C:
    ctx->pc = 0x80B7E40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E40Cu)) return;
    // 80B7E40C: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E410:
    ctx->pc = 0x80B7E410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E410u)) return;
    // 80B7E410: addi    r3, r3, 10088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10088);

label_80B7E414:
    ctx->pc = 0x80B7E414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E414: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E414u)) return;
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
label_80B7E418:
    ctx->pc = 0x80B7E418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E418u)) return;
    // 80B7E418: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E418u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80B7E41C:
    ctx->pc = 0x80B7E41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E41Cu)) return;
    // 80B7E41C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E420:
    ctx->pc = 0x80B7E420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E420u)) return;
    // 80B7E420: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E424:
    ctx->pc = 0x80B7E424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E424u)) return;
    // 80B7E424: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80B7E424u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80B7E428:
    ctx->pc = 0x80B7E428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E428u)) return;
    // 80B7E428: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80B7E428u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80B7E42C:
    ctx->pc = 0x80B7E42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E42Cu)) return;
    // 80B7E42C: bl      0x8045C750
    {
            ctx->lr = 0x80B7E430u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7E430:
    ctx->pc = 0x80B7E430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E430: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E434:
    ctx->pc = 0x80B7E434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E434u)) return;
    // 80B7E434: bl      0x8045F220
    {
            ctx->lr = 0x80B7E438u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E438:
    ctx->pc = 0x80B7E438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E438: bl      0x8045C360
    {
            ctx->lr = 0x80B7E43Cu;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80B7E43C:
    ctx->pc = 0x80B7E43Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E43Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E43C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E440:
    ctx->pc = 0x80B7E440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E440u)) return;
    // 80B7E440: bl      0x8045F220
    {
            ctx->lr = 0x80B7E444u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E444:
    ctx->pc = 0x80B7E444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7E444: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7E448:
    ctx->pc = 0x80B7E448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E448u)) return;
    // 80B7E448: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E44C:
    ctx->pc = 0x80B7E44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E44Cu)) return;
    // 80B7E44C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E450:
    ctx->pc = 0x80B7E450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E450u)) return;
    // 80B7E450: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E454:
    ctx->pc = 0x80B7E454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E454u)) return;
    // 80B7E454: addi    r6, r6, 10048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10048);

label_80B7E458:
    ctx->pc = 0x80B7E458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E458: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E458u)) return;
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
label_80B7E45C:
    ctx->pc = 0x80B7E45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E45Cu)) return;
    // 80B7E45C: lis     r6, -27544
    ctx->gpr[6] = ((u32)(s32)(-27544) << 16);

label_80B7E460:
    ctx->pc = 0x80B7E460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E460u)) return;
    // 80B7E460: addi    r6, r6, 10460
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(10460);

label_80B7E464:
    ctx->pc = 0x80B7E464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E464: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7E464u)) return;
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
label_80B7E468:
    ctx->pc = 0x80B7E468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E468u)) return;
    // 80B7E468: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E468u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B7E46C:
    ctx->pc = 0x80B7E46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E46Cu)) return;
    // 80B7E46C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7E470:
    ctx->pc = 0x80B7E470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E470u)) return;
    // 80B7E470: bl      0x8045C3C0
    {
            ctx->lr = 0x80B7E474u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B7E474:
    ctx->pc = 0x80B7E474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E474: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B7E478:
    ctx->pc = 0x80B7E478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E478u)) return;
    // 80B7E478: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7E47Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7E47C:
    ctx->pc = 0x80B7E47Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E47Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E47C: bl      0x8045C4A4
    {
            ctx->lr = 0x80B7E480u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80B7E480:
    ctx->pc = 0x80B7E480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E480: bl      0x8045C3AC
    {
            ctx->lr = 0x80B7E484u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80B7E484:
    ctx->pc = 0x80B7E484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E484: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E488:
    ctx->pc = 0x80B7E488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E488u)) return;
    // 80B7E488: bl      0x8045F220
    {
            ctx->lr = 0x80B7E48Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E48C:
    ctx->pc = 0x80B7E48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E48C: bl      0x8045EAE8
    {
            ctx->lr = 0x80B7E490u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80B7E490:
    ctx->pc = 0x80B7E490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E490: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E494:
    ctx->pc = 0x80B7E494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E494u)) return;
    // 80B7E494: bl      0x8045F220
    {
            ctx->lr = 0x80B7E498u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E498:
    ctx->pc = 0x80B7E498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7E498: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E49C:
    ctx->pc = 0x80B7E49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E49Cu)) return;
    // 80B7E49C: addi    r4, r4, 10508
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10508);

label_80B7E4A0:
    ctx->pc = 0x80B7E4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E4A0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E4A0u)) return;
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
label_80B7E4A4:
    ctx->pc = 0x80B7E4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4A4u)) return;
    // 80B7E4A4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E4A8:
    ctx->pc = 0x80B7E4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4A8u)) return;
    // 80B7E4A8: addi    r4, r4, 10136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10136);

label_80B7E4AC:
    ctx->pc = 0x80B7E4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E4AC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E4ACu)) return;
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
label_80B7E4B0:
    ctx->pc = 0x80B7E4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4B0u)) return;
    // 80B7E4B0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E4B4:
    ctx->pc = 0x80B7E4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4B4u)) return;
    // 80B7E4B4: addi    r4, r4, 10512
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10512);

label_80B7E4B8:
    ctx->pc = 0x80B7E4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E4B8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E4B8u)) return;
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
label_80B7E4BC:
    ctx->pc = 0x80B7E4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4BCu)) return;
    // 80B7E4BC: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7E4C0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7E4C0:
    ctx->pc = 0x80B7E4C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E4C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E4C0: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E4C4:
    ctx->pc = 0x80B7E4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4C4u)) return;
    // 80B7E4C4: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7E4C8:
    ctx->pc = 0x80B7E4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E4C8: lwz     r3, 0(r3)
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
label_80B7E4CC:
    ctx->pc = 0x80B7E4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4CCu)) return;
    // 80B7E4CC: cmplwi  r3, 0x0000
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

label_80B7E4D0:
    ctx->pc = 0x80B7E4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4D0u)) return;
    // 80B7E4D0: bc    12, 2, 0x80B7E4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E4EC;
        }
    }

label_80B7E4D4:
    ctx->pc = 0x80B7E4D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E4D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7E4D4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E4D8:
    ctx->pc = 0x80B7E4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4D8u)) return;
    // 80B7E4D8: addi    r4, r4, 10136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10136);

label_80B7E4DC:
    ctx->pc = 0x80B7E4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E4DC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E4DCu)) return;
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
label_80B7E4E0:
    ctx->pc = 0x80B7E4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4E0u)) return;
    // 80B7E4E0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E4E0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80B7E4E4:
    ctx->pc = 0x80B7E4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4E4u)) return;
    // 80B7E4E4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E4E4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B7E4E8:
    ctx->pc = 0x80B7E4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4E8u)) return;
    // 80B7E4E8: bl      0x80B7EA68
    {
            ctx->lr = 0x80B7E4ECu;
            goto label_80B7EA68;
    }

label_80B7E4EC:
    ctx->pc = 0x80B7E4ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E4ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E4EC: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E4F0:
    ctx->pc = 0x80B7E4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4F0u)) return;
    // 80B7E4F0: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7E4F4:
    ctx->pc = 0x80B7E4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E4F4: lwz     r3, 0(r3)
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
label_80B7E4F8:
    ctx->pc = 0x80B7E4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4F8u)) return;
    // 80B7E4F8: cmplwi  r3, 0x0000
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

label_80B7E4FC:
    ctx->pc = 0x80B7E4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E4FCu)) return;
    // 80B7E4FC: bc    12, 2, 0x80B7E510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E510;
        }
    }

label_80B7E500:
    ctx->pc = 0x80B7E500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7E500: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E504:
    ctx->pc = 0x80B7E504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E504u)) return;
    // 80B7E504: addi    r4, r4, 10196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10196);

label_80B7E508:
    ctx->pc = 0x80B7E508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E508: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E508u)) return;
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
label_80B7E50C:
    ctx->pc = 0x80B7E50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E50Cu)) return;
    // 80B7E50C: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7E510u;
            goto label_80B7EA50;
    }

label_80B7E510:
    ctx->pc = 0x80B7E510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7E510: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E514:
    ctx->pc = 0x80B7E514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E514u)) return;
    // 80B7E514: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E518:
    ctx->pc = 0x80B7E518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E518u)) return;
    // 80B7E518: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E51C:
    ctx->pc = 0x80B7E51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E51Cu)) return;
    // 80B7E51C: addi    r5, r5, 10516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10516);

label_80B7E520:
    ctx->pc = 0x80B7E520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E520: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E520u)) return;
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
label_80B7E524:
    ctx->pc = 0x80B7E524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E524u)) return;
    // 80B7E524: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E528:
    ctx->pc = 0x80B7E528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E528u)) return;
    // 80B7E528: addi    r5, r5, 10520
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10520);

label_80B7E52C:
    ctx->pc = 0x80B7E52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E52C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E52Cu)) return;
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
label_80B7E530:
    ctx->pc = 0x80B7E530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E530u)) return;
    // 80B7E530: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E534:
    ctx->pc = 0x80B7E534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E534u)) return;
    // 80B7E534: addi    r5, r5, 10524
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10524);

label_80B7E538:
    ctx->pc = 0x80B7E538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E538: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E538u)) return;
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
label_80B7E53C:
    ctx->pc = 0x80B7E53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E53Cu)) return;
    // 80B7E53C: bl      0x8045C750
    {
            ctx->lr = 0x80B7E540u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7E540:
    ctx->pc = 0x80B7E540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7E540: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E544:
    ctx->pc = 0x80B7E544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E544u)) return;
    // 80B7E544: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7E548:
    ctx->pc = 0x80B7E548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E548u)) return;
    // 80B7E548: li      r5, 3529
    ctx->gpr[5] = (u32)(s32)(3529);

label_80B7E54C:
    ctx->pc = 0x80B7E54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E54Cu)) return;
    // 80B7E54C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7E550:
    ctx->pc = 0x80B7E550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E550u)) return;
    // 80B7E550: addi    r6, r6, -10581
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10581);

label_80B7E554:
    ctx->pc = 0x80B7E554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E554u)) return;
    // 80B7E554: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7E558:
    ctx->pc = 0x80B7E558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E558u)) return;
    // 80B7E558: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7E55Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7E55C:
    ctx->pc = 0x80B7E55Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E55Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7E55C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E560:
    ctx->pc = 0x80B7E560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E560u)) return;
    // 80B7E560: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B7E564:
    ctx->pc = 0x80B7E564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E564u)) return;
    // 80B7E564: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E568:
    ctx->pc = 0x80B7E568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E568u)) return;
    // 80B7E568: addi    r5, r5, 10528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10528);

label_80B7E56C:
    ctx->pc = 0x80B7E56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E56C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E56Cu)) return;
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
label_80B7E570:
    ctx->pc = 0x80B7E570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E570u)) return;
    // 80B7E570: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E574:
    ctx->pc = 0x80B7E574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E574u)) return;
    // 80B7E574: addi    r5, r5, 10044
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10044);

label_80B7E578:
    ctx->pc = 0x80B7E578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E578: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E578u)) return;
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
label_80B7E57C:
    ctx->pc = 0x80B7E57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E57Cu)) return;
    // 80B7E57C: lis     r5, -27544
    ctx->gpr[5] = ((u32)(s32)(-27544) << 16);

label_80B7E580:
    ctx->pc = 0x80B7E580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E580u)) return;
    // 80B7E580: addi    r5, r5, 10532
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10532);

label_80B7E584:
    ctx->pc = 0x80B7E584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E584: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E584u)) return;
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
label_80B7E588:
    ctx->pc = 0x80B7E588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E588u)) return;
    // 80B7E588: bl      0x8045C750
    {
            ctx->lr = 0x80B7E58Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7E58C:
    ctx->pc = 0x80B7E58Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E58Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7E58C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E590:
    ctx->pc = 0x80B7E590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E590u)) return;
    // 80B7E590: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B7E594:
    ctx->pc = 0x80B7E594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E594u)) return;
    // 80B7E594: li      r5, 3017
    ctx->gpr[5] = (u32)(s32)(3017);

label_80B7E598:
    ctx->pc = 0x80B7E598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E598u)) return;
    // 80B7E598: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B7E59C:
    ctx->pc = 0x80B7E59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E59Cu)) return;
    // 80B7E59C: addi    r6, r7, -9045
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-9045);

label_80B7E5A0:
    ctx->pc = 0x80B7E5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5A0u)) return;
    // 80B7E5A0: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80B7E5A4:
    ctx->pc = 0x80B7E5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5A4u)) return;
    // 80B7E5A4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7E5A8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7E5A8:
    ctx->pc = 0x80B7E5A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E5A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E5A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E5AC:
    ctx->pc = 0x80B7E5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5ACu)) return;
    // 80B7E5AC: bl      0x8045F220
    {
            ctx->lr = 0x80B7E5B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E5B0:
    ctx->pc = 0x80B7E5B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E5B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B7E5B0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E5B4:
    ctx->pc = 0x80B7E5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5B4u)) return;
    // 80B7E5B4: addi    r4, r4, 10536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10536);

label_80B7E5B8:
    ctx->pc = 0x80B7E5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7E5B8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E5B8u)) return;
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
label_80B7E5BC:
    ctx->pc = 0x80B7E5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5BCu)) return;
    // 80B7E5BC: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E5C0:
    ctx->pc = 0x80B7E5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5C0u)) return;
    // 80B7E5C0: addi    r4, r4, 10048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10048);

label_80B7E5C4:
    ctx->pc = 0x80B7E5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E5C4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E5C4u)) return;
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
label_80B7E5C8:
    ctx->pc = 0x80B7E5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5C8u)) return;
    // 80B7E5C8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E5CC:
    ctx->pc = 0x80B7E5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5CCu)) return;
    // 80B7E5CC: addi    r4, r4, 10540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10540);

label_80B7E5D0:
    ctx->pc = 0x80B7E5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E5D0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E5D0u)) return;
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
label_80B7E5D4:
    ctx->pc = 0x80B7E5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5D4u)) return;
    // 80B7E5D4: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E5D8:
    ctx->pc = 0x80B7E5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5D8u)) return;
    // 80B7E5D8: addi    r4, r4, 10544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10544);

label_80B7E5DC:
    ctx->pc = 0x80B7E5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E5DC: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E5DCu)) return;
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
label_80B7E5E0:
    ctx->pc = 0x80B7E5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5E0u)) return;
    // 80B7E5E0: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E5E4:
    ctx->pc = 0x80B7E5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5E4u)) return;
    // 80B7E5E4: addi    r4, r4, 10420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10420);

label_80B7E5E8:
    ctx->pc = 0x80B7E5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E5E8: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E5E8u)) return;
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
label_80B7E5EC:
    ctx->pc = 0x80B7E5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5ECu)) return;
    // 80B7E5EC: bl      0x8045E570
    {
            ctx->lr = 0x80B7E5F0u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B7E5F0:
    ctx->pc = 0x80B7E5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E5F0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E5F4:
    ctx->pc = 0x80B7E5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5F4u)) return;
    // 80B7E5F4: bl      0x8045F220
    {
            ctx->lr = 0x80B7E5F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E5F8:
    ctx->pc = 0x80B7E5F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E5F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B7E5F8: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E5FC:
    ctx->pc = 0x80B7E5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E5FCu)) return;
    // 80B7E5FC: addi    r4, r4, 10548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10548);

label_80B7E600:
    ctx->pc = 0x80B7E600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7E600: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E600u)) return;
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
label_80B7E604:
    ctx->pc = 0x80B7E604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E604u)) return;
    // 80B7E604: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E608:
    ctx->pc = 0x80B7E608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E608u)) return;
    // 80B7E608: addi    r4, r4, 10048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10048);

label_80B7E60C:
    ctx->pc = 0x80B7E60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E60Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E60C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E60Cu)) return;
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
label_80B7E610:
    ctx->pc = 0x80B7E610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E610u)) return;
    // 80B7E610: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E614:
    ctx->pc = 0x80B7E614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E614u)) return;
    // 80B7E614: addi    r4, r4, 10552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10552);

label_80B7E618:
    ctx->pc = 0x80B7E618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E618: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E618u)) return;
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
label_80B7E61C:
    ctx->pc = 0x80B7E61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E61Cu)) return;
    // 80B7E61C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E620:
    ctx->pc = 0x80B7E620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E620u)) return;
    // 80B7E620: addi    r4, r4, 10556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10556);

label_80B7E624:
    ctx->pc = 0x80B7E624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E624: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E624u)) return;
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
label_80B7E628:
    ctx->pc = 0x80B7E628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E628u)) return;
    // 80B7E628: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E62C:
    ctx->pc = 0x80B7E62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E62Cu)) return;
    // 80B7E62C: addi    r4, r4, 10560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10560);

label_80B7E630:
    ctx->pc = 0x80B7E630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E630: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E630u)) return;
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
label_80B7E634:
    ctx->pc = 0x80B7E634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E634u)) return;
    // 80B7E634: bl      0x8045E570
    {
            ctx->lr = 0x80B7E638u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B7E638:
    ctx->pc = 0x80B7E638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E638: li      r3, 190
    ctx->gpr[3] = (u32)(s32)(190);

label_80B7E63C:
    ctx->pc = 0x80B7E63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E63Cu)) return;
    // 80B7E63C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7E640u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7E640:
    ctx->pc = 0x80B7E640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E640: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E644:
    ctx->pc = 0x80B7E644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E644u)) return;
    // 80B7E644: addi    r3, r3, -32636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32636);

label_80B7E648:
    ctx->pc = 0x80B7E648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E648: lwz     r3, 0(r3)
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
label_80B7E64C:
    ctx->pc = 0x80B7E64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E64Cu)) return;
    // 80B7E64C: cmplwi  r3, 0x0000
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

label_80B7E650:
    ctx->pc = 0x80B7E650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E650u)) return;
    // 80B7E650: bc    12, 2, 0x80B7E664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E664;
        }
    }

label_80B7E654:
    ctx->pc = 0x80B7E654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7E654: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E658:
    ctx->pc = 0x80B7E658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E658u)) return;
    // 80B7E658: addi    r4, r4, 10564
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10564);

label_80B7E65C:
    ctx->pc = 0x80B7E65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E65Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E65C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E65Cu)) return;
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
label_80B7E660:
    ctx->pc = 0x80B7E660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E660u)) return;
    // 80B7E660: bl      0x80B7EA50
    {
            ctx->lr = 0x80B7E664u;
            goto label_80B7EA50;
    }

label_80B7E664:
    ctx->pc = 0x80B7E664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E664: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B7E668:
    ctx->pc = 0x80B7E668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E668u)) return;
    // 80B7E668: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7E66Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7E66C:
    ctx->pc = 0x80B7E66Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E66Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7E66C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E670:
    ctx->pc = 0x80B7E670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E670u)) return;
    // 80B7E670: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80B7E674:
    ctx->pc = 0x80B7E674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E674u)) return;
    // 80B7E674: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80B7E678:
    ctx->pc = 0x80B7E678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E678u)) return;
    // 80B7E678: bl      0x8045C0F8
    {
            ctx->lr = 0x80B7E67Cu;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80B7E67C:
    ctx->pc = 0x80B7E67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E67C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E680:
    ctx->pc = 0x80B7E680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E680u)) return;
    // 80B7E680: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7E684u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7E684:
    ctx->pc = 0x80B7E684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E684: b       0x80B7E748
    {
            goto label_80B7E748;
    }

label_80B7E688:
    ctx->pc = 0x80B7E688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E688: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E68C:
    ctx->pc = 0x80B7E68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E68Cu)) return;
    // 80B7E68C: addi    r3, r3, -32628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32628);

label_80B7E690:
    ctx->pc = 0x80B7E690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E690: lwz     r0, 0(r3)
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
label_80B7E694:
    ctx->pc = 0x80B7E694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E694u)) return;
    // 80B7E694: cmpwi   r0, 0
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

label_80B7E698:
    ctx->pc = 0x80B7E698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E698u)) return;
    // 80B7E698: bc    12, 2, 0x80B7E6C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E6C4;
        }
    }

label_80B7E69C:
    ctx->pc = 0x80B7E69Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E69Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E69C: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E6A0:
    ctx->pc = 0x80B7E6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6A0u)) return;
    // 80B7E6A0: addi    r3, r3, -32632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32632);

label_80B7E6A4:
    ctx->pc = 0x80B7E6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E6A4: lha     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[31] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E6A8:
    ctx->pc = 0x80B7E6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6A8u)) return;
    // 80B7E6A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E6AC:
    ctx->pc = 0x80B7E6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6ACu)) return;
    // 80B7E6AC: bl      0x804C9040
    {
            ctx->lr = 0x80B7E6B0u;
            ctx->pc = 0x804C9040u;
            return;
    }

label_80B7E6B0:
    ctx->pc = 0x80B7E6B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E6B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E6B0: sth     r31, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E6B4:
    ctx->pc = 0x80B7E6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6B4u)) return;
    // 80B7E6B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B7E6B8:
    ctx->pc = 0x80B7E6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6B8u)) return;
    // 80B7E6B8: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E6BC:
    ctx->pc = 0x80B7E6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6BCu)) return;
    // 80B7E6BC: addi    r3, r3, -32628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32628);

label_80B7E6C0:
    ctx->pc = 0x80B7E6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7E6C0: stw     r0, 0(r3)
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
label_80B7E6C4:
    ctx->pc = 0x80B7E6C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E6C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E6C4: bl      0x8045DE34
    {
            ctx->lr = 0x80B7E6C8u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80B7E6C8:
    ctx->pc = 0x80B7E6C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E6C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E6C8: bl      0x80460A80
    {
            ctx->lr = 0x80B7E6CCu;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80B7E6CC:
    ctx->pc = 0x80B7E6CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E6CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E6CC: bl      0x80406038
    {
            ctx->lr = 0x80B7E6D0u;
            ctx->pc = 0x80406038u;
            return;
    }

label_80B7E6D0:
    ctx->pc = 0x80B7E6D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E6D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E6D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E6D4:
    ctx->pc = 0x80B7E6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6D4u)) return;
    // 80B7E6D4: bl      0x8045EC10
    {
            ctx->lr = 0x80B7E6D8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B7E6D8:
    ctx->pc = 0x80B7E6D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E6D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E6D8: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E6DC:
    ctx->pc = 0x80B7E6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6DCu)) return;
    // 80B7E6DC: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7E6E0:
    ctx->pc = 0x80B7E6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E6E0: lwz     r3, 0(r3)
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
label_80B7E6E4:
    ctx->pc = 0x80B7E6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6E4u)) return;
    // 80B7E6E4: cmplwi  r3, 0x0000
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

label_80B7E6E8:
    ctx->pc = 0x80B7E6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6E8u)) return;
    // 80B7E6E8: bc    12, 2, 0x80B7E700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E700;
        }
    }

label_80B7E6EC:
    ctx->pc = 0x80B7E6ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E6ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E6EC: bl      0x8050F9E0
    {
            ctx->lr = 0x80B7E6F0u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B7E6F0:
    ctx->pc = 0x80B7E6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7E6F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B7E6F4:
    ctx->pc = 0x80B7E6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6F4u)) return;
    // 80B7E6F4: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E6F8:
    ctx->pc = 0x80B7E6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6F8u)) return;
    // 80B7E6F8: addi    r3, r3, -32640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32640);

label_80B7E6FC:
    ctx->pc = 0x80B7E6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7E6FC: stw     r0, 0(r3)
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
label_80B7E700:
    ctx->pc = 0x80B7E700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E700: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E704:
    ctx->pc = 0x80B7E704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E704u)) return;
    // 80B7E704: addi    r3, r3, -32636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32636);

label_80B7E708:
    ctx->pc = 0x80B7E708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E708: lwz     r3, 0(r3)
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
label_80B7E70C:
    ctx->pc = 0x80B7E70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E70Cu)) return;
    // 80B7E70C: cmplwi  r3, 0x0000
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

label_80B7E710:
    ctx->pc = 0x80B7E710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E710u)) return;
    // 80B7E710: bc    12, 2, 0x80B7E728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E728;
        }
    }

label_80B7E714:
    ctx->pc = 0x80B7E714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E714: bl      0x8050F9E0
    {
            ctx->lr = 0x80B7E718u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B7E718:
    ctx->pc = 0x80B7E718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7E718: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B7E71C:
    ctx->pc = 0x80B7E71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E71Cu)) return;
    // 80B7E71C: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7E720:
    ctx->pc = 0x80B7E720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E720u)) return;
    // 80B7E720: addi    r3, r3, -32636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32636);

label_80B7E724:
    ctx->pc = 0x80B7E724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7E724: stw     r0, 0(r3)
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
label_80B7E728:
    ctx->pc = 0x80B7E728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E728: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E72C:
    ctx->pc = 0x80B7E72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E72Cu)) return;
    // 80B7E72C: bl      0x8045ED54
    {
            ctx->lr = 0x80B7E730u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80B7E730:
    ctx->pc = 0x80B7E730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E730: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E734:
    ctx->pc = 0x80B7E734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E734u)) return;
    // 80B7E734: bl      0x8045F220
    {
            ctx->lr = 0x80B7E738u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E738:
    ctx->pc = 0x80B7E738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E738: bl      0x8045EAE8
    {
            ctx->lr = 0x80B7E73Cu;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80B7E73C:
    ctx->pc = 0x80B7E73Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E73Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E73C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E740:
    ctx->pc = 0x80B7E740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E740u)) return;
    // 80B7E740: bl      0x8045F220
    {
            ctx->lr = 0x80B7E744u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7E744:
    ctx->pc = 0x80B7E744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E744: bl      0x8045EAE8
    {
            ctx->lr = 0x80B7E748u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80B7E748:
    ctx->pc = 0x80B7E748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7E748: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7E748u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80B7E748u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E74C:
    ctx->pc = 0x80B7E74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7E74C: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E74Cu)) return;
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
label_80B7E750:
    ctx->pc = 0x80B7E750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E750: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7E750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80B7E750u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E754:
    ctx->pc = 0x80B7E754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E754: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E754u)) return;
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
label_80B7E758:
    ctx->pc = 0x80B7E758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7E758: lwz     r31, 12(r1)
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
label_80B7E75C:
    ctx->pc = 0x80B7E75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E75C: lwz     r0, 52(r1)
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
label_80B7E760:
    ctx->pc = 0x80B7E760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7E760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E760: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E764:
    ctx->pc = 0x80B7E764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E764u)) return;
    // 80B7E764: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80B7E768:
    ctx->pc = 0x80B7E768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E768u)) return;
    // 80B7E768: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7E76C:
    ctx->pc = 0x80B7E76Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E76Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E76C: stwu     r1, -64(r1)
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
label_80B7E770:
    ctx->pc = 0x80B7E770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E770: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E774:
    ctx->pc = 0x80B7E774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E774: stw     r0, 68(r1)
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
label_80B7E778:
    ctx->pc = 0x80B7E778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E778u)) return;
    // 80B7E778: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B7E77C:
    ctx->pc = 0x80B7E77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E77Cu)) return;
    // 80B7E77C: bl      0x80006DD4
    {
            ctx->lr = 0x80B7E780u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80B7E780:
    ctx->pc = 0x80B7E780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80B7E780: lwz     r27, 32(r3)
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
label_80B7E784:
    ctx->pc = 0x80B7E784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E784u)) return;
    // 80B7E784: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E788:
    ctx->pc = 0x80B7E788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E788u)) return;
    // 80B7E788: addi    r3, r3, 10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10568);

label_80B7E78C:
    ctx->pc = 0x80B7E78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80B7E78C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E78Cu)) return;
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
label_80B7E790:
    ctx->pc = 0x80B7E790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B7E790: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B7E790u)) return;
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
label_80B7E794:
    ctx->pc = 0x80B7E794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E794u)) return;
    // 80B7E794: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E794u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B7E798:
    ctx->pc = 0x80B7E798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E798u)) return;
    // 80B7E798: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E798u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B7E79C:
    ctx->pc = 0x80B7E79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E79Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B7E79C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E79Cu)) return;
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
label_80B7E7A0:
    ctx->pc = 0x80B7E7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B7E7A0: lwz     r31, 12(r1)
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
label_80B7E7A4:
    ctx->pc = 0x80B7E7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B7E7A4: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B7E7A4u)) return;
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
label_80B7E7A8:
    ctx->pc = 0x80B7E7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7A8u)) return;
    // 80B7E7A8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E7A8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B7E7AC:
    ctx->pc = 0x80B7E7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7ACu)) return;
    // 80B7E7AC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E7ACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B7E7B0:
    ctx->pc = 0x80B7E7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B7E7B0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E7B0u)) return;
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
label_80B7E7B4:
    ctx->pc = 0x80B7E7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B7E7B4: lwz     r30, 20(r1)
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
label_80B7E7B8:
    ctx->pc = 0x80B7E7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B7E7B8: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B7E7B8u)) return;
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
label_80B7E7BC:
    ctx->pc = 0x80B7E7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7BCu)) return;
    // 80B7E7BC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E7BCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B7E7C0:
    ctx->pc = 0x80B7E7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7C0u)) return;
    // 80B7E7C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E7C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B7E7C4:
    ctx->pc = 0x80B7E7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7E7C4: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E7C4u)) return;
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
label_80B7E7C8:
    ctx->pc = 0x80B7E7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E7C8: lwz     r29, 28(r1)
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
label_80B7E7CC:
    ctx->pc = 0x80B7E7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7E7CC: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B7E7CCu)) return;
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
label_80B7E7D0:
    ctx->pc = 0x80B7E7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7D0u)) return;
    // 80B7E7D0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E7D0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B7E7D4:
    ctx->pc = 0x80B7E7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7D4u)) return;
    // 80B7E7D4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E7D4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B7E7D8:
    ctx->pc = 0x80B7E7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E7D8: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E7D8u)) return;
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
label_80B7E7DC:
    ctx->pc = 0x80B7E7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7E7DC: lwz     r28, 36(r1)
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
label_80B7E7E0:
    ctx->pc = 0x80B7E7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7E0u)) return;
    // 80B7E7E0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7E7E4:
    ctx->pc = 0x80B7E7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7E4u)) return;
    // 80B7E7E4: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80B7E7E8:
    ctx->pc = 0x80B7E7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E7E8: lwz     r0, 0(r3)
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
label_80B7E7EC:
    ctx->pc = 0x80B7E7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7ECu)) return;
    // 80B7E7EC: cmpwi   r0, 0
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

label_80B7E7F0:
    ctx->pc = 0x80B7E7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7F0u)) return;
    // 80B7E7F0: bc    4, 2, 0x80B7E8A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7E8A8;
        }
    }

label_80B7E7F4:
    ctx->pc = 0x80B7E7F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E7F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7E7F4: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B7E7F8:
    ctx->pc = 0x80B7E7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7F8u)) return;
    // 80B7E7F8: cmplwi  r0, 0x0000
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

label_80B7E7FC:
    ctx->pc = 0x80B7E7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E7FCu)) return;
    // 80B7E7FC: bc    12, 2, 0x80B7E8A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7E8A8;
        }
    }

label_80B7E800:
    ctx->pc = 0x80B7E800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7E800: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7E804:
    ctx->pc = 0x80B7E804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E804u)) return;
    // 80B7E804: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80B7E808:
    ctx->pc = 0x80B7E808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E808u)) return;
    // 80B7E808: bl      0x8060F4F8
    {
            ctx->lr = 0x80B7E80Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B7E80C:
    ctx->pc = 0x80B7E80Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E80Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7E80C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7E810:
    ctx->pc = 0x80B7E810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E810u)) return;
    // 80B7E810: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B7E814:
    ctx->pc = 0x80B7E814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E814u)) return;
    // 80B7E814: bl      0x8060F4F8
    {
            ctx->lr = 0x80B7E818u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B7E818:
    ctx->pc = 0x80B7E818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E818: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B7E818u)) return;
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
label_80B7E81C:
    ctx->pc = 0x80B7E81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E81Cu)) return;
    // 80B7E81C: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E820:
    ctx->pc = 0x80B7E820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E820u)) return;
    // 80B7E820: addi    r3, r3, 10576
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10576);

label_80B7E824:
    ctx->pc = 0x80B7E824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E824: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E824u)) return;
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
label_80B7E828:
    ctx->pc = 0x80B7E828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E828u)) return;
    // 80B7E828: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E828u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80B7E82C:
    ctx->pc = 0x80B7E82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E82Cu)) return;
    // 80B7E82C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80B7E830:
    ctx->pc = 0x80B7E830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E830u)) return;
    // 80B7E830: bc    4, 2, 0x80B7E844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7E844;
        }
    }

label_80B7E834:
    ctx->pc = 0x80B7E834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7E834: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E838:
    ctx->pc = 0x80B7E838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E838u)) return;
    // 80B7E838: addi    r3, r3, 10572
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10572);

label_80B7E83C:
    ctx->pc = 0x80B7E83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E83C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E83Cu)) return;
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
label_80B7E840:
    ctx->pc = 0x80B7E840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E840u)) return;
    // 80B7E840: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E840u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80B7E844:
    ctx->pc = 0x80B7E844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7E844: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B7E848:
    ctx->pc = 0x80B7E848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E848u)) return;
    // 80B7E848: cmplwi  r0, 0x00FF
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

label_80B7E84C:
    ctx->pc = 0x80B7E84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E84Cu)) return;
    // 80B7E84C: bc    4, 1, 0x80B7E854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7E854;
        }
    }

label_80B7E850:
    ctx->pc = 0x80B7E850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E850: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80B7E854:
    ctx->pc = 0x80B7E854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80B7E854: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E858:
    ctx->pc = 0x80B7E858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E858u)) return;
    // 80B7E858: addi    r3, r3, 10580
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10580);

label_80B7E85C:
    ctx->pc = 0x80B7E85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B7E85C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E85Cu)) return;
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
label_80B7E860:
    ctx->pc = 0x80B7E860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E860u)) return;
    // 80B7E860: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E860u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80B7E864:
    ctx->pc = 0x80B7E864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E864u)) return;
    // 80B7E864: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E868:
    ctx->pc = 0x80B7E868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E868u)) return;
    // 80B7E868: addi    r3, r3, 10584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10584);

label_80B7E86C:
    ctx->pc = 0x80B7E86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B7E86C: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E86Cu)) return;
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
label_80B7E870:
    ctx->pc = 0x80B7E870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E870u)) return;
    // 80B7E870: lis     r3, -27544
    ctx->gpr[3] = ((u32)(s32)(-27544) << 16);

label_80B7E874:
    ctx->pc = 0x80B7E874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E874u)) return;
    // 80B7E874: addi    r3, r3, 10588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10588);

label_80B7E878:
    ctx->pc = 0x80B7E878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7E878: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7E878u)) return;
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
label_80B7E87C:
    ctx->pc = 0x80B7E87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E87Cu)) return;
    // 80B7E87C: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80B7E880:
    ctx->pc = 0x80B7E880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E880u)) return;
    // 80B7E880: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80B7E884:
    ctx->pc = 0x80B7E884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E884u)) return;
    // 80B7E884: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80B7E888:
    ctx->pc = 0x80B7E888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E888u)) return;
    // 80B7E888: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B7E88C:
    ctx->pc = 0x80B7E88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E88Cu)) return;
    // 80B7E88C: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80B7E890:
    ctx->pc = 0x80B7E890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E890u)) return;
    // 80B7E890: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80B7E894:
    ctx->pc = 0x80B7E894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E894u)) return;
    // 80B7E894: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80B7E898:
    ctx->pc = 0x80B7E898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E898u)) return;
    // 80B7E898: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80B7E89C:
    ctx->pc = 0x80B7E89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E89Cu)) return;
    // 80B7E89C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80B7E8A0:
    ctx->pc = 0x80B7E8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8A0u)) return;
    // 80B7E8A0: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80B7E8A4:
    ctx->pc = 0x80B7E8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8A4u)) return;
    // 80B7E8A4: bl      0x80B7E8C0
    {
            ctx->lr = 0x80B7E8A8u;
            goto label_80B7E8C0;
    }

label_80B7E8A8:
    ctx->pc = 0x80B7E8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E8A8: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B7E8AC:
    ctx->pc = 0x80B7E8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8ACu)) return;
    // 80B7E8AC: bl      0x80006E20
    {
            ctx->lr = 0x80B7E8B0u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80B7E8B0:
    ctx->pc = 0x80B7E8B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E8B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E8B0: lwz     r0, 68(r1)
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
label_80B7E8B4:
    ctx->pc = 0x80B7E8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7E8B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E8B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E8B8:
    ctx->pc = 0x80B7E8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8B8u)) return;
    // 80B7E8B8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80B7E8BC:
    ctx->pc = 0x80B7E8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8BCu)) return;
    // 80B7E8BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7E8C0:
    ctx->pc = 0x80B7E8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E8C0: stwu     r1, -16(r1)
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
label_80B7E8C4:
    ctx->pc = 0x80B7E8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7E8C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E8C8:
    ctx->pc = 0x80B7E8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E8C8: stw     r0, 20(r1)
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
label_80B7E8CC:
    ctx->pc = 0x80B7E8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8CCu)) return;
    // 80B7E8CC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B7E8D0:
    ctx->pc = 0x80B7E8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8D0u)) return;
    // 80B7E8D0: bl      0x80607948
    {
            ctx->lr = 0x80B7E8D4u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80B7E8D4:
    ctx->pc = 0x80B7E8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E8D4: lwz     r0, 20(r1)
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
label_80B7E8D8:
    ctx->pc = 0x80B7E8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7E8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E8D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E8DC:
    ctx->pc = 0x80B7E8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8DCu)) return;
    // 80B7E8DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7E8E0:
    ctx->pc = 0x80B7E8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8E0u)) return;
    // 80B7E8E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7E8E4:
    ctx->pc = 0x80B7E8E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E8E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7E8E4: stwu     r1, -16(r1)
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
label_80B7E8E8:
    ctx->pc = 0x80B7E8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E8E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E8EC:
    ctx->pc = 0x80B7E8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7E8EC: stw     r0, 20(r1)
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
label_80B7E8F0:
    ctx->pc = 0x80B7E8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7E8F0: lwz     r5, 32(r3)
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
label_80B7E8F4:
    ctx->pc = 0x80B7E8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E8F4: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E8F4u)) return;
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
label_80B7E8F8:
    ctx->pc = 0x80B7E8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7E8F8: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E8F8u)) return;
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
label_80B7E8FC:
    ctx->pc = 0x80B7E8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E8FCu)) return;
    // 80B7E8FC: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E8FCu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80B7E900:
    ctx->pc = 0x80B7E900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E900u)) return;
    // 80B7E900: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E904:
    ctx->pc = 0x80B7E904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E904u)) return;
    // 80B7E904: addi    r4, r4, 10592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10592);

label_80B7E908:
    ctx->pc = 0x80B7E908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E908: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E908u)) return;
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
label_80B7E90C:
    ctx->pc = 0x80B7E90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E90Cu)) return;
    // 80B7E90C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E90Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B7E910:
    ctx->pc = 0x80B7E910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E910u)) return;
    // 80B7E910: bc    4, 1, 0x80B7E91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7E91C;
        }
    }

label_80B7E914:
    ctx->pc = 0x80B7E914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7E914: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E914u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B7E918:
    ctx->pc = 0x80B7E918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E918u)) return;
    // 80B7E918: b       0x80B7E934
    {
            goto label_80B7E934;
    }

label_80B7E91C:
    ctx->pc = 0x80B7E91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7E91C: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7E920:
    ctx->pc = 0x80B7E920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E920u)) return;
    // 80B7E920: addi    r4, r4, 10580
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10580);

label_80B7E924:
    ctx->pc = 0x80B7E924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E924: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7E924u)) return;
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
label_80B7E928:
    ctx->pc = 0x80B7E928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E928u)) return;
    // 80B7E928: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E928u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B7E92C:
    ctx->pc = 0x80B7E92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E92Cu)) return;
    // 80B7E92C: bc    4, 0, 0x80B7E934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7E934;
        }
    }

label_80B7E930:
    ctx->pc = 0x80B7E930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E930: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B7E930u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B7E934:
    ctx->pc = 0x80B7E934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E934: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E934u)) return;
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
label_80B7E938:
    ctx->pc = 0x80B7E938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E938u)) return;
    // 80B7E938: bl      0x80B7E76C
    {
            ctx->lr = 0x80B7E93Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B7E76Cu;
                return;
            }
            goto label_80B7E76C;
    }

label_80B7E93C:
    ctx->pc = 0x80B7E93Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E93Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E93C: lwz     r0, 20(r1)
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
label_80B7E940:
    ctx->pc = 0x80B7E940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7E940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E940: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E944:
    ctx->pc = 0x80B7E944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E944u)) return;
    // 80B7E944: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7E948:
    ctx->pc = 0x80B7E948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E948u)) return;
    // 80B7E948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7E94C:
    ctx->pc = 0x80B7E94Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E94Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7E94C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7E950:
    ctx->pc = 0x80B7E950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B7E950: stwu     r1, -16(r1)
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
label_80B7E954:
    ctx->pc = 0x80B7E954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7E954: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E958:
    ctx->pc = 0x80B7E958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E958: stw     r0, 20(r1)
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
label_80B7E95C:
    ctx->pc = 0x80B7E95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E95Cu)) return;
    // 80B7E95C: lis     r4, -32584
    ctx->gpr[4] = ((u32)(s32)(-32584) << 16);

label_80B7E960:
    ctx->pc = 0x80B7E960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E960u)) return;
    // 80B7E960: addi    r0, r4, -5916
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-5916);

label_80B7E964:
    ctx->pc = 0x80B7E964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7E964: stw     r0, 16(r3)
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
label_80B7E968:
    ctx->pc = 0x80B7E968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E968u)) return;
    // 80B7E968: lis     r4, -32584
    ctx->gpr[4] = ((u32)(s32)(-32584) << 16);

label_80B7E96C:
    ctx->pc = 0x80B7E96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E96Cu)) return;
    // 80B7E96C: addi    r0, r4, -6292
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-6292);

label_80B7E970:
    ctx->pc = 0x80B7E970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E970: stw     r0, 20(r3)
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
label_80B7E974:
    ctx->pc = 0x80B7E974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E974u)) return;
    // 80B7E974: lis     r4, -32584
    ctx->gpr[4] = ((u32)(s32)(-32584) << 16);

label_80B7E978:
    ctx->pc = 0x80B7E978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E978u)) return;
    // 80B7E978: addi    r0, r4, -5812
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-5812);

label_80B7E97C:
    ctx->pc = 0x80B7E97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7E97C: stw     r0, 24(r3)
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
label_80B7E980:
    ctx->pc = 0x80B7E980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E980u)) return;
    // 80B7E980: bl      0x80B7E8E4
    {
            ctx->lr = 0x80B7E984u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B7E8E4u;
                return;
            }
            goto label_80B7E8E4;
    }

label_80B7E984:
    ctx->pc = 0x80B7E984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7E984: lwz     r0, 20(r1)
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
label_80B7E988:
    ctx->pc = 0x80B7E988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7E988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7E988: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E98C:
    ctx->pc = 0x80B7E98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E98Cu)) return;
    // 80B7E98C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7E990:
    ctx->pc = 0x80B7E990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E990u)) return;
    // 80B7E990: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7E994:
    ctx->pc = 0x80B7E994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B7E994: stwu     r1, -96(r1)
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
label_80B7E998:
    ctx->pc = 0x80B7E998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B7E998: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E99C:
    ctx->pc = 0x80B7E99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B7E99C: stw     r0, 100(r1)
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
label_80B7E9A0:
    ctx->pc = 0x80B7E9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B7E9A0: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E9A0u)) return;
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
label_80B7E9A4:
    ctx->pc = 0x80B7E9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B7E9A4: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7E9A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80B7E9A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E9A8:
    ctx->pc = 0x80B7E9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B7E9A8: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E9A8u)) return;
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
label_80B7E9AC:
    ctx->pc = 0x80B7E9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B7E9AC: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7E9ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80B7E9ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E9B0:
    ctx->pc = 0x80B7E9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B7E9B0: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E9B0u)) return;
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
label_80B7E9B4:
    ctx->pc = 0x80B7E9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B7E9B4: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7E9B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80B7E9B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E9B8:
    ctx->pc = 0x80B7E9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7E9B8: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E9B8u)) return;
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
label_80B7E9BC:
    ctx->pc = 0x80B7E9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B7E9BC: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7E9BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80B7E9BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E9C0:
    ctx->pc = 0x80B7E9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7E9C0: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7E9C0u)) return;
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
label_80B7E9C4:
    ctx->pc = 0x80B7E9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7E9C4: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7E9C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80B7E9C4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7E9C8:
    ctx->pc = 0x80B7E9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9C8u)) return;
    // 80B7E9C8: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80B7E9C8u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80B7E9CC:
    ctx->pc = 0x80B7E9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9CCu)) return;
    // 80B7E9CC: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80B7E9CCu)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80B7E9D0:
    ctx->pc = 0x80B7E9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9D0u)) return;
    // 80B7E9D0: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80B7E9D0u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80B7E9D4:
    ctx->pc = 0x80B7E9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9D4u)) return;
    // 80B7E9D4: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80B7E9D4u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80B7E9D8:
    ctx->pc = 0x80B7E9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9D8u)) return;
    // 80B7E9D8: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80B7E9D8u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80B7E9DC:
    ctx->pc = 0x80B7E9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9DCu)) return;
    // 80B7E9DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7E9E0:
    ctx->pc = 0x80B7E9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9E0u)) return;
    // 80B7E9E0: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B7E9E4:
    ctx->pc = 0x80B7E9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9E4u)) return;
    // 80B7E9E4: lis     r5, -32584
    ctx->gpr[5] = ((u32)(s32)(-32584) << 16);

label_80B7E9E8:
    ctx->pc = 0x80B7E9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9E8u)) return;
    // 80B7E9E8: addi    r5, r5, -5808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5808);

label_80B7E9EC:
    ctx->pc = 0x80B7E9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9ECu)) return;
    // 80B7E9EC: bl      0x8050FD60
    {
            ctx->lr = 0x80B7E9F0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B7E9F0:
    ctx->pc = 0x80B7E9F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7E9F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B7E9F0: lwz     r5, 32(r3)
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
label_80B7E9F4:
    ctx->pc = 0x80B7E9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80B7E9F4: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E9F4u)) return;
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
label_80B7E9F8:
    ctx->pc = 0x80B7E9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B7E9F8: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E9F8u)) return;
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
label_80B7E9FC:
    ctx->pc = 0x80B7E9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7E9FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B7E9FC: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7E9FCu)) return;
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
label_80B7EA00:
    ctx->pc = 0x80B7EA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B7EA00: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA00u)) return;
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
label_80B7EA04:
    ctx->pc = 0x80B7EA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B7EA04: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA04u)) return;
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
label_80B7EA08:
    ctx->pc = 0x80B7EA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA08u)) return;
    // 80B7EA08: lis     r4, -27544
    ctx->gpr[4] = ((u32)(s32)(-27544) << 16);

label_80B7EA0C:
    ctx->pc = 0x80B7EA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA0Cu)) return;
    // 80B7EA0C: addi    r4, r4, 10576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10576);

label_80B7EA10:
    ctx->pc = 0x80B7EA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B7EA10: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA10u)) return;
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
label_80B7EA14:
    ctx->pc = 0x80B7EA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B7EA14: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA14u)) return;
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
label_80B7EA18:
    ctx->pc = 0x80B7EA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B7EA18: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7EA18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80B7EA18u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EA1C:
    ctx->pc = 0x80B7EA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7EA1C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA1Cu)) return;
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
label_80B7EA20:
    ctx->pc = 0x80B7EA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B7EA20: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7EA20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80B7EA20u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EA24:
    ctx->pc = 0x80B7EA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7EA24: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA24u)) return;
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
label_80B7EA28:
    ctx->pc = 0x80B7EA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7EA28: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7EA28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80B7EA28u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EA2C:
    ctx->pc = 0x80B7EA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7EA2C: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA2Cu)) return;
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
label_80B7EA30:
    ctx->pc = 0x80B7EA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EA30: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7EA30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80B7EA30u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EA34:
    ctx->pc = 0x80B7EA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EA34: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA34u)) return;
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
label_80B7EA38:
    ctx->pc = 0x80B7EA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EA38: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B7EA38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80B7EA38u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EA3C:
    ctx->pc = 0x80B7EA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EA3C: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA3Cu)) return;
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
label_80B7EA40:
    ctx->pc = 0x80B7EA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EA40: lwz     r0, 100(r1)
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
label_80B7EA44:
    ctx->pc = 0x80B7EA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EA44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EA48:
    ctx->pc = 0x80B7EA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA48u)) return;
    // 80B7EA48: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80B7EA4C:
    ctx->pc = 0x80B7EA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA4Cu)) return;
    // 80B7EA4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EA50:
    ctx->pc = 0x80B7EA50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EA50: lwz     r3, 32(r3)
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
label_80B7EA54:
    ctx->pc = 0x80B7EA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EA54: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA54u)) return;
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
label_80B7EA58:
    ctx->pc = 0x80B7EA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA58u)) return;
    // 80B7EA58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EA5C:
    ctx->pc = 0x80B7EA5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EA5C: lwz     r3, 32(r3)
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
label_80B7EA60:
    ctx->pc = 0x80B7EA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EA60: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA60u)) return;
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
label_80B7EA64:
    ctx->pc = 0x80B7EA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA64u)) return;
    // 80B7EA64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EA68:
    ctx->pc = 0x80B7EA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EA68: lwz     r3, 32(r3)
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
label_80B7EA6C:
    ctx->pc = 0x80B7EA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EA6C: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA6Cu)) return;
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
label_80B7EA70:
    ctx->pc = 0x80B7EA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EA70: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA70u)) return;
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
label_80B7EA74:
    ctx->pc = 0x80B7EA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EA74: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA74u)) return;
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
label_80B7EA78:
    ctx->pc = 0x80B7EA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA78u)) return;
    // 80B7EA78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EA7C:
    ctx->pc = 0x80B7EA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EA7C: lwz     r3, 32(r3)
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
label_80B7EA80:
    ctx->pc = 0x80B7EA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EA80: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B7EA80u)) return;
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
label_80B7EA84:
    ctx->pc = 0x80B7EA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA84u)) return;
    // 80B7EA84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EA88:
    ctx->pc = 0x80B7EA88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EA88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EA88: stwu     r1, -16(r1)
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
label_80B7EA8C:
    ctx->pc = 0x80B7EA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EA8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EA90:
    ctx->pc = 0x80B7EA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EA90: stw     r0, 20(r1)
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
label_80B7EA94:
    ctx->pc = 0x80B7EA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EA94: lwz     r3, 32(r3)
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
label_80B7EA98:
    ctx->pc = 0x80B7EA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EA98: lwz     r3, 16(r3)
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
label_80B7EA9C:
    ctx->pc = 0x80B7EA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EA9Cu)) return;
    // 80B7EA9C: bl      0x80509CF0
    {
            ctx->lr = 0x80B7EAA0u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80B7EAA0:
    ctx->pc = 0x80B7EAA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EAA0: lwz     r0, 20(r1)
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
label_80B7EAA4:
    ctx->pc = 0x80B7EAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EAA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EAA8:
    ctx->pc = 0x80B7EAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAA8u)) return;
    // 80B7EAA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7EAAC:
    ctx->pc = 0x80B7EAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAACu)) return;
    // 80B7EAAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EAB0:
    ctx->pc = 0x80B7EAB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EAB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7EAB0: stwu     r1, -32(r1)
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
label_80B7EAB4:
    ctx->pc = 0x80B7EAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7EAB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EAB8:
    ctx->pc = 0x80B7EAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EAB8: stw     r0, 36(r1)
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
label_80B7EABC:
    ctx->pc = 0x80B7EABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EABC: stw     r31, 28(r1)
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
label_80B7EAC0:
    ctx->pc = 0x80B7EAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EAC0: stw     r30, 24(r1)
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
label_80B7EAC4:
    ctx->pc = 0x80B7EAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EAC4: stw     r29, 20(r1)
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
label_80B7EAC8:
    ctx->pc = 0x80B7EAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EAC8: lwz     r31, 32(r3)
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
label_80B7EACC:
    ctx->pc = 0x80B7EACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EACC: lwz     r30, 16(r31)
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
label_80B7EAD0:
    ctx->pc = 0x80B7EAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EAD0: lwz     r5, 28(r31)
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
label_80B7EAD4:
    ctx->pc = 0x80B7EAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAD4u)) return;
    // 80B7EAD4: cmpwi   r5, 0
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

label_80B7EAD8:
    ctx->pc = 0x80B7EAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAD8u)) return;
    // 80B7EAD8: bc    4, 1, 0x80B7EB10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EB10;
        }
    }

label_80B7EADC:
    ctx->pc = 0x80B7EADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B7EADC: lwz     r4, 24(r31)
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
label_80B7EAE0:
    ctx->pc = 0x80B7EAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAE0u)) return;
    // 80B7EAE0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B7EAE4:
    ctx->pc = 0x80B7EAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B7EAE4: lwz     r0, 20(r31)
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
label_80B7EAE8:
    ctx->pc = 0x80B7EAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B7EAE8u)) return;
    // 80B7EAE8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B7EAEC:
    ctx->pc = 0x80B7EAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAECu)) return;
    // 80B7EAEC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B7EAF0:
    ctx->pc = 0x80B7EAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B7EAF0u)) return;
    // 80B7EAF0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B7EAF4:
    ctx->pc = 0x80B7EAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAF4u)) return;
    // 80B7EAF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B7EAF8:
    ctx->pc = 0x80B7EAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAF8u)) return;
    // 80B7EAF8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B7EAFC:
    ctx->pc = 0x80B7EAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EAFCu)) return;
    // 80B7EAFC: bl      0x80509C74
    {
            ctx->lr = 0x80B7EB00u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B7EB00:
    ctx->pc = 0x80B7EB00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EB00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EB00: stw     r29, 20(r31)
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
label_80B7EB04:
    ctx->pc = 0x80B7EB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EB04: lwz     r3, 28(r31)
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
label_80B7EB08:
    ctx->pc = 0x80B7EB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB08u)) return;
    // 80B7EB08: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B7EB0C:
    ctx->pc = 0x80B7EB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7EB0C: stw     r0, 28(r31)
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
label_80B7EB10:
    ctx->pc = 0x80B7EB10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EB10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EB10: lwz     r5, 40(r31)
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
label_80B7EB14:
    ctx->pc = 0x80B7EB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB14u)) return;
    // 80B7EB14: cmpwi   r5, 0
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

label_80B7EB18:
    ctx->pc = 0x80B7EB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB18u)) return;
    // 80B7EB18: bc    4, 1, 0x80B7EB50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EB50;
        }
    }

label_80B7EB1C:
    ctx->pc = 0x80B7EB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B7EB1C: lwz     r4, 36(r31)
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
label_80B7EB20:
    ctx->pc = 0x80B7EB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB20u)) return;
    // 80B7EB20: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B7EB24:
    ctx->pc = 0x80B7EB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B7EB24: lwz     r0, 32(r31)
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
label_80B7EB28:
    ctx->pc = 0x80B7EB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B7EB28u)) return;
    // 80B7EB28: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B7EB2C:
    ctx->pc = 0x80B7EB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB2Cu)) return;
    // 80B7EB2C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B7EB30:
    ctx->pc = 0x80B7EB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B7EB30u)) return;
    // 80B7EB30: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B7EB34:
    ctx->pc = 0x80B7EB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB34u)) return;
    // 80B7EB34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B7EB38:
    ctx->pc = 0x80B7EB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB38u)) return;
    // 80B7EB38: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B7EB3C:
    ctx->pc = 0x80B7EB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB3Cu)) return;
    // 80B7EB3C: bl      0x80509BF8
    {
            ctx->lr = 0x80B7EB40u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B7EB40:
    ctx->pc = 0x80B7EB40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EB40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EB40: stw     r29, 32(r31)
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
label_80B7EB44:
    ctx->pc = 0x80B7EB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EB44: lwz     r3, 40(r31)
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
label_80B7EB48:
    ctx->pc = 0x80B7EB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB48u)) return;
    // 80B7EB48: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B7EB4C:
    ctx->pc = 0x80B7EB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7EB4C: stw     r0, 40(r31)
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
label_80B7EB50:
    ctx->pc = 0x80B7EB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EB50: lwz     r5, 52(r31)
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
label_80B7EB54:
    ctx->pc = 0x80B7EB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB54u)) return;
    // 80B7EB54: cmpwi   r5, 0
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

label_80B7EB58:
    ctx->pc = 0x80B7EB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB58u)) return;
    // 80B7EB58: bc    4, 1, 0x80B7EB90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EB90;
        }
    }

label_80B7EB5C:
    ctx->pc = 0x80B7EB5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EB5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B7EB5C: lwz     r4, 48(r31)
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
label_80B7EB60:
    ctx->pc = 0x80B7EB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB60u)) return;
    // 80B7EB60: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B7EB64:
    ctx->pc = 0x80B7EB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B7EB64: lwz     r0, 44(r31)
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
label_80B7EB68:
    ctx->pc = 0x80B7EB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B7EB68u)) return;
    // 80B7EB68: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B7EB6C:
    ctx->pc = 0x80B7EB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB6Cu)) return;
    // 80B7EB6C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B7EB70:
    ctx->pc = 0x80B7EB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B7EB70u)) return;
    // 80B7EB70: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B7EB74:
    ctx->pc = 0x80B7EB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB74u)) return;
    // 80B7EB74: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B7EB78:
    ctx->pc = 0x80B7EB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB78u)) return;
    // 80B7EB78: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B7EB7C:
    ctx->pc = 0x80B7EB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB7Cu)) return;
    // 80B7EB7C: bl      0x80509B94
    {
            ctx->lr = 0x80B7EB80u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B7EB80:
    ctx->pc = 0x80B7EB80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EB80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EB80: stw     r29, 44(r31)
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
label_80B7EB84:
    ctx->pc = 0x80B7EB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EB84: lwz     r3, 52(r31)
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
label_80B7EB88:
    ctx->pc = 0x80B7EB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB88u)) return;
    // 80B7EB88: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B7EB8C:
    ctx->pc = 0x80B7EB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7EB8C: stw     r0, 52(r31)
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
label_80B7EB90:
    ctx->pc = 0x80B7EB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EB90: lwz     r31, 28(r1)
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
label_80B7EB94:
    ctx->pc = 0x80B7EB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EB94: lwz     r30, 24(r1)
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
label_80B7EB98:
    ctx->pc = 0x80B7EB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EB98: lwz     r29, 20(r1)
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
label_80B7EB9C:
    ctx->pc = 0x80B7EB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EB9C: lwz     r0, 36(r1)
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
label_80B7EBA0:
    ctx->pc = 0x80B7EBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EBA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EBA4:
    ctx->pc = 0x80B7EBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBA4u)) return;
    // 80B7EBA4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B7EBA8:
    ctx->pc = 0x80B7EBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBA8u)) return;
    // 80B7EBA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EBAC:
    ctx->pc = 0x80B7EBACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EBACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7EBAC: stwu     r1, -32(r1)
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
label_80B7EBB0:
    ctx->pc = 0x80B7EBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7EBB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EBB4:
    ctx->pc = 0x80B7EBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7EBB4: stw     r0, 36(r1)
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
label_80B7EBB8:
    ctx->pc = 0x80B7EBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EBB8: stw     r31, 28(r1)
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
label_80B7EBBC:
    ctx->pc = 0x80B7EBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EBBC: stw     r30, 24(r1)
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
label_80B7EBC0:
    ctx->pc = 0x80B7EBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EBC0: stw     r29, 20(r1)
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
label_80B7EBC4:
    ctx->pc = 0x80B7EBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBC4u)) return;
    // 80B7EBC4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7EBC8:
    ctx->pc = 0x80B7EBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBC8u)) return;
    // 80B7EBC8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B7EBCC:
    ctx->pc = 0x80B7EBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBCCu)) return;
    // 80B7EBCC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B7EBD0:
    ctx->pc = 0x80B7EBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBD0u)) return;
    // 80B7EBD0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B7EBD4:
    ctx->pc = 0x80B7EBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBD4u)) return;
    // 80B7EBD4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B7EBD8:
    ctx->pc = 0x80B7EBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBD8u)) return;
    // 80B7EBD8: bl      0x8050FD60
    {
            ctx->lr = 0x80B7EBDCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B7EBDC:
    ctx->pc = 0x80B7EBDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EBDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7EBDC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7EBE0:
    ctx->pc = 0x80B7EBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBE0u)) return;
    // 80B7EBE0: cmplwi  r31, 0x0000
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

label_80B7EBE4:
    ctx->pc = 0x80B7EBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBE4u)) return;
    // 80B7EBE4: bc    12, 2, 0x80B7EC48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7EC48;
        }
    }

label_80B7EBE8:
    ctx->pc = 0x80B7EBE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EBE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7EBE8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B7EBEC:
    ctx->pc = 0x80B7EBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBECu)) return;
    // 80B7EBEC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B7EBF0:
    ctx->pc = 0x80B7EBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBF0u)) return;
    // 80B7EBF0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B7EBF4:
    ctx->pc = 0x80B7EBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBF4u)) return;
    // 80B7EBF4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7EBF8:
    ctx->pc = 0x80B7EBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBF8u)) return;
    // 80B7EBF8: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B7EBFC:
    ctx->pc = 0x80B7EBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EBFCu)) return;
    // 80B7EBFC: bl      0x8050A0D4
    {
            ctx->lr = 0x80B7EC00u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B7EC00:
    ctx->pc = 0x80B7EC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B7EC00: lis     r3, -32584
    ctx->gpr[3] = ((u32)(s32)(-32584) << 16);

label_80B7EC04:
    ctx->pc = 0x80B7EC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC04u)) return;
    // 80B7EC04: addi    r0, r3, -5456
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-5456);

label_80B7EC08:
    ctx->pc = 0x80B7EC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B7EC08: stw     r0, 16(r31)
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
label_80B7EC0C:
    ctx->pc = 0x80B7EC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC0Cu)) return;
    // 80B7EC0C: lis     r3, -32584
    ctx->gpr[3] = ((u32)(s32)(-32584) << 16);

label_80B7EC10:
    ctx->pc = 0x80B7EC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC10u)) return;
    // 80B7EC10: addi    r0, r3, -5496
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-5496);

label_80B7EC14:
    ctx->pc = 0x80B7EC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B7EC14: stw     r0, 24(r31)
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
label_80B7EC18:
    ctx->pc = 0x80B7EC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7EC18: lwz     r3, 32(r31)
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
label_80B7EC1C:
    ctx->pc = 0x80B7EC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7EC1C: stw     r31, 16(r3)
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
label_80B7EC20:
    ctx->pc = 0x80B7EC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC20u)) return;
    // 80B7EC20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B7EC24:
    ctx->pc = 0x80B7EC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EC24: stw     r0, 20(r3)
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
label_80B7EC28:
    ctx->pc = 0x80B7EC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EC28: stw     r0, 24(r3)
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
label_80B7EC2C:
    ctx->pc = 0x80B7EC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EC2C: stw     r0, 28(r3)
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
label_80B7EC30:
    ctx->pc = 0x80B7EC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EC30: stw     r0, 32(r3)
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
label_80B7EC34:
    ctx->pc = 0x80B7EC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EC34: stw     r0, 36(r3)
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
label_80B7EC38:
    ctx->pc = 0x80B7EC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EC38: stw     r0, 40(r3)
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
label_80B7EC3C:
    ctx->pc = 0x80B7EC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EC3C: stw     r0, 44(r3)
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
label_80B7EC40:
    ctx->pc = 0x80B7EC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EC40: stw     r0, 48(r3)
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
label_80B7EC44:
    ctx->pc = 0x80B7EC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7EC44: stw     r0, 52(r3)
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
label_80B7EC48:
    ctx->pc = 0x80B7EC48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EC48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7EC48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B7EC4C:
    ctx->pc = 0x80B7EC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EC4C: lwz     r31, 28(r1)
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
label_80B7EC50:
    ctx->pc = 0x80B7EC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EC50: lwz     r30, 24(r1)
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
label_80B7EC54:
    ctx->pc = 0x80B7EC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EC54: lwz     r29, 20(r1)
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
label_80B7EC58:
    ctx->pc = 0x80B7EC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EC58: lwz     r0, 36(r1)
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
label_80B7EC5C:
    ctx->pc = 0x80B7EC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EC5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EC5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EC60:
    ctx->pc = 0x80B7EC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC60u)) return;
    // 80B7EC60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B7EC64:
    ctx->pc = 0x80B7EC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC64u)) return;
    // 80B7EC64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EC68:
    ctx->pc = 0x80B7EC68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EC68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7EC68: stwu     r1, -16(r1)
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
label_80B7EC6C:
    ctx->pc = 0x80B7EC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7EC6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EC70:
    ctx->pc = 0x80B7EC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EC70: stw     r0, 20(r1)
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
label_80B7EC74:
    ctx->pc = 0x80B7EC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EC74: stw     r31, 12(r1)
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
label_80B7EC78:
    ctx->pc = 0x80B7EC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EC78: stw     r30, 8(r1)
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
label_80B7EC7C:
    ctx->pc = 0x80B7EC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC7Cu)) return;
    // 80B7EC7C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B7EC80:
    ctx->pc = 0x80B7EC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EC80: lwz     r31, 32(r3)
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
label_80B7EC84:
    ctx->pc = 0x80B7EC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EC84: stw     r30, 24(r31)
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
label_80B7EC88:
    ctx->pc = 0x80B7EC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EC88: stw     r5, 28(r31)
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
label_80B7EC8C:
    ctx->pc = 0x80B7EC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC8Cu)) return;
    // 80B7EC8C: cmpwi   r5, 0
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

label_80B7EC90:
    ctx->pc = 0x80B7EC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC90u)) return;
    // 80B7EC90: bc    12, 1, 0x80B7ECA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7ECA0;
        }
    }

label_80B7EC94:
    ctx->pc = 0x80B7EC94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EC94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EC94: lwz     r3, 16(r31)
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
label_80B7EC98:
    ctx->pc = 0x80B7EC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EC98u)) return;
    // 80B7EC98: bl      0x80509C74
    {
            ctx->lr = 0x80B7EC9Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B7EC9C:
    ctx->pc = 0x80B7EC9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EC9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7EC9C: stw     r30, 20(r31)
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
label_80B7ECA0:
    ctx->pc = 0x80B7ECA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ECA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7ECA0: lwz     r31, 12(r1)
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
label_80B7ECA4:
    ctx->pc = 0x80B7ECA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7ECA4: lwz     r30, 8(r1)
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
label_80B7ECA8:
    ctx->pc = 0x80B7ECA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7ECA8: lwz     r0, 20(r1)
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
label_80B7ECAC:
    ctx->pc = 0x80B7ECACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7ECACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7ECAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7ECB0:
    ctx->pc = 0x80B7ECB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECB0u)) return;
    // 80B7ECB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7ECB4:
    ctx->pc = 0x80B7ECB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECB4u)) return;
    // 80B7ECB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7ECB8:
    ctx->pc = 0x80B7ECB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ECB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7ECB8: stwu     r1, -16(r1)
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
label_80B7ECBC:
    ctx->pc = 0x80B7ECBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7ECBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7ECC0:
    ctx->pc = 0x80B7ECC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7ECC0: stw     r0, 20(r1)
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
label_80B7ECC4:
    ctx->pc = 0x80B7ECC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7ECC4: stw     r31, 12(r1)
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
label_80B7ECC8:
    ctx->pc = 0x80B7ECC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7ECC8: stw     r30, 8(r1)
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
label_80B7ECCC:
    ctx->pc = 0x80B7ECCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECCCu)) return;
    // 80B7ECCC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B7ECD0:
    ctx->pc = 0x80B7ECD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7ECD0: lwz     r31, 32(r3)
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
label_80B7ECD4:
    ctx->pc = 0x80B7ECD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7ECD4: stw     r30, 36(r31)
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
label_80B7ECD8:
    ctx->pc = 0x80B7ECD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7ECD8: stw     r5, 40(r31)
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
label_80B7ECDC:
    ctx->pc = 0x80B7ECDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECDCu)) return;
    // 80B7ECDC: cmpwi   r5, 0
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

label_80B7ECE0:
    ctx->pc = 0x80B7ECE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECE0u)) return;
    // 80B7ECE0: bc    12, 1, 0x80B7ECF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7ECF0;
        }
    }

label_80B7ECE4:
    ctx->pc = 0x80B7ECE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ECE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7ECE4: lwz     r3, 16(r31)
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
label_80B7ECE8:
    ctx->pc = 0x80B7ECE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECE8u)) return;
    // 80B7ECE8: bl      0x80509BF8
    {
            ctx->lr = 0x80B7ECECu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B7ECEC:
    ctx->pc = 0x80B7ECECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ECECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7ECEC: stw     r30, 32(r31)
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
label_80B7ECF0:
    ctx->pc = 0x80B7ECF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ECF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7ECF0: lwz     r31, 12(r1)
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
label_80B7ECF4:
    ctx->pc = 0x80B7ECF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7ECF4: lwz     r30, 8(r1)
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
label_80B7ECF8:
    ctx->pc = 0x80B7ECF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ECF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7ECF8: lwz     r0, 20(r1)
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
label_80B7ECFC:
    ctx->pc = 0x80B7ECFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7ECFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7ECFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7ED00:
    ctx->pc = 0x80B7ED00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED00u)) return;
    // 80B7ED00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7ED04:
    ctx->pc = 0x80B7ED04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED04u)) return;
    // 80B7ED04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7ED08:
    ctx->pc = 0x80B7ED08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ED08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7ED08: stwu     r1, -16(r1)
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
label_80B7ED0C:
    ctx->pc = 0x80B7ED0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7ED0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7ED10:
    ctx->pc = 0x80B7ED10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7ED10: stw     r0, 20(r1)
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
label_80B7ED14:
    ctx->pc = 0x80B7ED14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7ED14: stw     r31, 12(r1)
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
label_80B7ED18:
    ctx->pc = 0x80B7ED18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7ED18: stw     r30, 8(r1)
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
label_80B7ED1C:
    ctx->pc = 0x80B7ED1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED1Cu)) return;
    // 80B7ED1C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B7ED20:
    ctx->pc = 0x80B7ED20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7ED20: lwz     r31, 32(r3)
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
label_80B7ED24:
    ctx->pc = 0x80B7ED24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7ED24: stw     r30, 48(r31)
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
label_80B7ED28:
    ctx->pc = 0x80B7ED28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7ED28: stw     r5, 52(r31)
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
label_80B7ED2C:
    ctx->pc = 0x80B7ED2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED2Cu)) return;
    // 80B7ED2C: cmpwi   r5, 0
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

label_80B7ED30:
    ctx->pc = 0x80B7ED30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED30u)) return;
    // 80B7ED30: bc    12, 1, 0x80B7ED40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7ED40;
        }
    }

label_80B7ED34:
    ctx->pc = 0x80B7ED34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ED34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7ED34: lwz     r3, 16(r31)
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
label_80B7ED38:
    ctx->pc = 0x80B7ED38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED38u)) return;
    // 80B7ED38: bl      0x80509B94
    {
            ctx->lr = 0x80B7ED3Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B7ED3C:
    ctx->pc = 0x80B7ED3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ED3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7ED3C: stw     r30, 44(r31)
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
label_80B7ED40:
    ctx->pc = 0x80B7ED40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ED40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7ED40: lwz     r31, 12(r1)
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
label_80B7ED44:
    ctx->pc = 0x80B7ED44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7ED44: lwz     r30, 8(r1)
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
label_80B7ED48:
    ctx->pc = 0x80B7ED48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7ED48: lwz     r0, 20(r1)
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
label_80B7ED4C:
    ctx->pc = 0x80B7ED4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7ED4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7ED4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7ED50:
    ctx->pc = 0x80B7ED50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED50u)) return;
    // 80B7ED50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7ED54:
    ctx->pc = 0x80B7ED54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED54u)) return;
    // 80B7ED54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7ED58:
    ctx->pc = 0x80B7ED58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ED58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7ED58: stwu     r1, -16(r1)
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
label_80B7ED5C:
    ctx->pc = 0x80B7ED5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7ED5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7ED60:
    ctx->pc = 0x80B7ED60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7ED60: stw     r0, 20(r1)
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
label_80B7ED64:
    ctx->pc = 0x80B7ED64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7ED64: stw     r31, 12(r1)
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
label_80B7ED68:
    ctx->pc = 0x80B7ED68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED68u)) return;
    // 80B7ED68: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7ED6C:
    ctx->pc = 0x80B7ED6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED6Cu)) return;
    // 80B7ED6C: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7ED70:
    ctx->pc = 0x80B7ED70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED70u)) return;
    // 80B7ED70: addi    r4, r4, -32620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32620);

label_80B7ED74:
    ctx->pc = 0x80B7ED74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7ED74: lwz     r0, 0(r4)
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
label_80B7ED78:
    ctx->pc = 0x80B7ED78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED78u)) return;
    // 80B7ED78: cmplwi  r0, 0x0000
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

label_80B7ED7C:
    ctx->pc = 0x80B7ED7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED7Cu)) return;
    // 80B7ED7C: bc    4, 2, 0x80B7EDA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EDA0;
        }
    }

label_80B7ED80:
    ctx->pc = 0x80B7ED80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ED80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7ED80: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B7ED84:
    ctx->pc = 0x80B7ED84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED84u)) return;
    // 80B7ED84: bl      0x8050EEC0
    {
            ctx->lr = 0x80B7ED88u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80B7ED88:
    ctx->pc = 0x80B7ED88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7ED88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7ED88: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7ED8C:
    ctx->pc = 0x80B7ED8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED8Cu)) return;
    // 80B7ED8C: addi    r4, r4, -32620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32620);

label_80B7ED90:
    ctx->pc = 0x80B7ED90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7ED90: stw     r3, 0(r4)
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
label_80B7ED94:
    ctx->pc = 0x80B7ED94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED94u)) return;
    // 80B7ED94: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7ED98:
    ctx->pc = 0x80B7ED98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED98u)) return;
    // 80B7ED98: addi    r3, r3, -32624
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32624);

label_80B7ED9C:
    ctx->pc = 0x80B7ED9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7ED9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7ED9C: stw     r31, 0(r3)
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
label_80B7EDA0:
    ctx->pc = 0x80B7EDA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EDA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EDA0: lwz     r31, 12(r1)
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
label_80B7EDA4:
    ctx->pc = 0x80B7EDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EDA4: lwz     r0, 20(r1)
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
label_80B7EDA8:
    ctx->pc = 0x80B7EDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EDA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EDAC:
    ctx->pc = 0x80B7EDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDACu)) return;
    // 80B7EDAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7EDB0:
    ctx->pc = 0x80B7EDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDB0u)) return;
    // 80B7EDB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EDB4:
    ctx->pc = 0x80B7EDB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EDB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7EDB4: stwu     r1, -32(r1)
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
label_80B7EDB8:
    ctx->pc = 0x80B7EDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7EDB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EDBC:
    ctx->pc = 0x80B7EDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7EDBC: stw     r0, 36(r1)
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
label_80B7EDC0:
    ctx->pc = 0x80B7EDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EDC0: stw     r31, 28(r1)
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
label_80B7EDC4:
    ctx->pc = 0x80B7EDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EDC4: stw     r30, 24(r1)
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
label_80B7EDC8:
    ctx->pc = 0x80B7EDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EDC8: stw     r29, 20(r1)
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
label_80B7EDCC:
    ctx->pc = 0x80B7EDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EDCC: stw     r28, 16(r1)
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
label_80B7EDD0:
    ctx->pc = 0x80B7EDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDD0u)) return;
    // 80B7EDD0: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7EDD4:
    ctx->pc = 0x80B7EDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDD4u)) return;
    // 80B7EDD4: addi    r30, r3, -32620
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-32620);

label_80B7EDD8:
    ctx->pc = 0x80B7EDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EDD8: lwz     r0, 0(r30)
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
label_80B7EDDC:
    ctx->pc = 0x80B7EDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDDCu)) return;
    // 80B7EDDC: cmplwi  r0, 0x0000
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

label_80B7EDE0:
    ctx->pc = 0x80B7EDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDE0u)) return;
    // 80B7EDE0: bc    12, 2, 0x80B7EE40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7EE40;
        }
    }

label_80B7EDE4:
    ctx->pc = 0x80B7EDE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EDE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7EDE4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80B7EDE8:
    ctx->pc = 0x80B7EDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDE8u)) return;
    // 80B7EDE8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80B7EDEC:
    ctx->pc = 0x80B7EDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDECu)) return;
    // 80B7EDEC: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7EDF0:
    ctx->pc = 0x80B7EDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDF0u)) return;
    // 80B7EDF0: addi    r31, r3, -32624
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-32624);

label_80B7EDF4:
    ctx->pc = 0x80B7EDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDF4u)) return;
    // 80B7EDF4: b       0x80B7EE14
    {
            goto label_80B7EE14;
    }

label_80B7EDF8:
    ctx->pc = 0x80B7EDF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EDF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7EDF8: lwz     r3, 0(r30)
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
label_80B7EDFC:
    ctx->pc = 0x80B7EDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EDFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EDFC: lwzx    r3, r3, r29
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
label_80B7EE00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE00u)) return;
    // 80B7EE00: cmplwi  r3, 0x0000
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

label_80B7EE04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE04u)) return;
    // 80B7EE04: bc    12, 2, 0x80B7EE0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7EE0C;
        }
    }

label_80B7EE08:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EE08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7EE08: bl      0x8050F9E0
    {
            ctx->lr = 0x80B7EE0Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B7EE0C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EE0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7EE0C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80B7EE10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE10u)) return;
    // 80B7EE10: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80B7EE14:
    ctx->pc = 0x80B7EE14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EE14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EE14: lwz     r0, 0(r31)
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
label_80B7EE18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE18u)) return;
    // 80B7EE18: cmpw    r28, r0
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

label_80B7EE1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE1Cu)) return;
    // 80B7EE1C: bc    12, 0, 0x80B7EDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B7EDF8u;
                return;
            }
            goto label_80B7EDF8;
        }
    }

label_80B7EE20:
    ctx->pc = 0x80B7EE20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EE20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7EE20: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7EE24:
    ctx->pc = 0x80B7EE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE24u)) return;
    // 80B7EE24: addi    r3, r3, -32620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32620);

label_80B7EE28:
    ctx->pc = 0x80B7EE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EE28: lwz     r3, 0(r3)
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
label_80B7EE2C:
    ctx->pc = 0x80B7EE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE2Cu)) return;
    // 80B7EE2C: bl      0x8050ED40
    {
            ctx->lr = 0x80B7EE30u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80B7EE30:
    ctx->pc = 0x80B7EE30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EE30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7EE30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B7EE34:
    ctx->pc = 0x80B7EE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE34u)) return;
    // 80B7EE34: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7EE38:
    ctx->pc = 0x80B7EE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE38u)) return;
    // 80B7EE38: addi    r3, r3, -32620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32620);

label_80B7EE3C:
    ctx->pc = 0x80B7EE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7EE3C: stw     r0, 0(r3)
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
label_80B7EE40:
    ctx->pc = 0x80B7EE40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EE40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EE40: lwz     r31, 28(r1)
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
label_80B7EE44:
    ctx->pc = 0x80B7EE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EE44: lwz     r30, 24(r1)
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
label_80B7EE48:
    ctx->pc = 0x80B7EE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EE48: lwz     r29, 20(r1)
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
label_80B7EE4C:
    ctx->pc = 0x80B7EE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EE4C: lwz     r28, 16(r1)
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
label_80B7EE50:
    ctx->pc = 0x80B7EE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EE50: lwz     r0, 36(r1)
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
label_80B7EE54:
    ctx->pc = 0x80B7EE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EE54: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EE58:
    ctx->pc = 0x80B7EE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE58u)) return;
    // 80B7EE58: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B7EE5C:
    ctx->pc = 0x80B7EE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE5Cu)) return;
    // 80B7EE5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EE60:
    ctx->pc = 0x80B7EE60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EE60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EE60: stwu     r1, -16(r1)
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
label_80B7EE64:
    ctx->pc = 0x80B7EE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EE64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EE68:
    ctx->pc = 0x80B7EE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EE68: stw     r0, 20(r1)
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
label_80B7EE6C:
    ctx->pc = 0x80B7EE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EE6C: stw     r31, 12(r1)
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
label_80B7EE70:
    ctx->pc = 0x80B7EE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE70u)) return;
    // 80B7EE70: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7EE74:
    ctx->pc = 0x80B7EE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE74u)) return;
    // 80B7EE74: addi    r6, r6, -32624
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32624);

label_80B7EE78:
    ctx->pc = 0x80B7EE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EE78: lwz     r0, 0(r6)
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
label_80B7EE7C:
    ctx->pc = 0x80B7EE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE7Cu)) return;
    // 80B7EE7C: cmpw    r3, r0
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

label_80B7EE80:
    ctx->pc = 0x80B7EE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE80u)) return;
    // 80B7EE80: bc    4, 0, 0x80B7EEBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EEBC;
        }
    }

label_80B7EE84:
    ctx->pc = 0x80B7EE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7EE84: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7EE88:
    ctx->pc = 0x80B7EE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE88u)) return;
    // 80B7EE88: addi    r6, r6, -32620
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32620);

label_80B7EE8C:
    ctx->pc = 0x80B7EE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EE8C: lwz     r6, 0(r6)
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
label_80B7EE90:
    ctx->pc = 0x80B7EE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE90u)) return;
    // 80B7EE90: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B7EE94:
    ctx->pc = 0x80B7EE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EE94: lwzx    r0, r6, r31
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
label_80B7EE98:
    ctx->pc = 0x80B7EE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE98u)) return;
    // 80B7EE98: cmplwi  r0, 0x0000
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

label_80B7EE9C:
    ctx->pc = 0x80B7EE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EE9Cu)) return;
    // 80B7EE9C: bc    4, 2, 0x80B7EEBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EEBC;
        }
    }

label_80B7EEA0:
    ctx->pc = 0x80B7EEA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EEA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7EEA0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B7EEA4:
    ctx->pc = 0x80B7EEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEA4u)) return;
    // 80B7EEA4: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B7EEA8:
    ctx->pc = 0x80B7EEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEA8u)) return;
    // 80B7EEA8: bl      0x80B7EBAC
    {
            ctx->lr = 0x80B7EEACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B7EBACu;
                return;
            }
            goto label_80B7EBAC;
    }

label_80B7EEAC:
    ctx->pc = 0x80B7EEACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EEACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7EEAC: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7EEB0:
    ctx->pc = 0x80B7EEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEB0u)) return;
    // 80B7EEB0: addi    r4, r4, -32620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32620);

label_80B7EEB4:
    ctx->pc = 0x80B7EEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EEB4: lwz     r4, 0(r4)
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
label_80B7EEB8:
    ctx->pc = 0x80B7EEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7EEB8: stwx    r3, r4, r31
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
label_80B7EEBC:
    ctx->pc = 0x80B7EEBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EEBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EEBC: lwz     r31, 12(r1)
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
label_80B7EEC0:
    ctx->pc = 0x80B7EEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EEC0: lwz     r0, 20(r1)
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
label_80B7EEC4:
    ctx->pc = 0x80B7EEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EEC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EEC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EEC8:
    ctx->pc = 0x80B7EEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEC8u)) return;
    // 80B7EEC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7EECC:
    ctx->pc = 0x80B7EECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EECCu)) return;
    // 80B7EECC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EED0:
    ctx->pc = 0x80B7EED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7EED0: stwu     r1, -16(r1)
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
label_80B7EED4:
    ctx->pc = 0x80B7EED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EED4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EED8:
    ctx->pc = 0x80B7EED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EED8: stw     r0, 20(r1)
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
label_80B7EEDC:
    ctx->pc = 0x80B7EEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EEDC: stw     r31, 12(r1)
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
label_80B7EEE0:
    ctx->pc = 0x80B7EEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEE0u)) return;
    // 80B7EEE0: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7EEE4:
    ctx->pc = 0x80B7EEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEE4u)) return;
    // 80B7EEE4: addi    r4, r4, -32624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32624);

label_80B7EEE8:
    ctx->pc = 0x80B7EEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EEE8: lwz     r0, 0(r4)
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
label_80B7EEEC:
    ctx->pc = 0x80B7EEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEECu)) return;
    // 80B7EEEC: cmpw    r3, r0
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

label_80B7EEF0:
    ctx->pc = 0x80B7EEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEF0u)) return;
    // 80B7EEF0: bc    4, 0, 0x80B7EF28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EF28;
        }
    }

label_80B7EEF4:
    ctx->pc = 0x80B7EEF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EEF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7EEF4: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7EEF8:
    ctx->pc = 0x80B7EEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEF8u)) return;
    // 80B7EEF8: addi    r4, r4, -32620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32620);

label_80B7EEFC:
    ctx->pc = 0x80B7EEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EEFC: lwz     r4, 0(r4)
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
label_80B7EF00:
    ctx->pc = 0x80B7EF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF00u)) return;
    // 80B7EF00: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B7EF04:
    ctx->pc = 0x80B7EF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EF04: lwzx    r3, r4, r31
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
label_80B7EF08:
    ctx->pc = 0x80B7EF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF08u)) return;
    // 80B7EF08: cmplwi  r3, 0x0000
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

label_80B7EF0C:
    ctx->pc = 0x80B7EF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF0Cu)) return;
    // 80B7EF0C: bc    12, 2, 0x80B7EF28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7EF28;
        }
    }

label_80B7EF10:
    ctx->pc = 0x80B7EF10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EF10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7EF10: bl      0x8050F9E0
    {
            ctx->lr = 0x80B7EF14u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B7EF14:
    ctx->pc = 0x80B7EF14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EF14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B7EF14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B7EF18:
    ctx->pc = 0x80B7EF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF18u)) return;
    // 80B7EF18: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7EF1C:
    ctx->pc = 0x80B7EF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF1Cu)) return;
    // 80B7EF1C: addi    r3, r3, -32620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32620);

label_80B7EF20:
    ctx->pc = 0x80B7EF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7EF20: lwz     r3, 0(r3)
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
label_80B7EF24:
    ctx->pc = 0x80B7EF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B7EF24: stwx    r0, r3, r31
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
label_80B7EF28:
    ctx->pc = 0x80B7EF28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EF28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EF28: lwz     r31, 12(r1)
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
label_80B7EF2C:
    ctx->pc = 0x80B7EF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EF2C: lwz     r0, 20(r1)
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
label_80B7EF30:
    ctx->pc = 0x80B7EF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EF30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EF30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EF34:
    ctx->pc = 0x80B7EF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF34u)) return;
    // 80B7EF34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7EF38:
    ctx->pc = 0x80B7EF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF38u)) return;
    // 80B7EF38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EF3C:
    ctx->pc = 0x80B7EF3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EF3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EF3C: stwu     r1, -16(r1)
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
label_80B7EF40:
    ctx->pc = 0x80B7EF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EF40: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EF44:
    ctx->pc = 0x80B7EF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EF44: stw     r0, 20(r1)
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
label_80B7EF48:
    ctx->pc = 0x80B7EF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF48u)) return;
    // 80B7EF48: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7EF4C:
    ctx->pc = 0x80B7EF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF4Cu)) return;
    // 80B7EF4C: addi    r6, r6, -32624
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32624);

label_80B7EF50:
    ctx->pc = 0x80B7EF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EF50: lwz     r0, 0(r6)
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
label_80B7EF54:
    ctx->pc = 0x80B7EF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF54u)) return;
    // 80B7EF54: cmpw    r3, r0
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

label_80B7EF58:
    ctx->pc = 0x80B7EF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF58u)) return;
    // 80B7EF58: bc    4, 0, 0x80B7EF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EF7C;
        }
    }

label_80B7EF5C:
    ctx->pc = 0x80B7EF5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EF5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7EF5C: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7EF60:
    ctx->pc = 0x80B7EF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF60u)) return;
    // 80B7EF60: addi    r6, r6, -32620
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32620);

label_80B7EF64:
    ctx->pc = 0x80B7EF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EF64: lwz     r6, 0(r6)
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
label_80B7EF68:
    ctx->pc = 0x80B7EF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF68u)) return;
    // 80B7EF68: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B7EF6C:
    ctx->pc = 0x80B7EF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EF6C: lwzx    r3, r6, r0
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
label_80B7EF70:
    ctx->pc = 0x80B7EF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF70u)) return;
    // 80B7EF70: cmplwi  r3, 0x0000
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

label_80B7EF74:
    ctx->pc = 0x80B7EF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF74u)) return;
    // 80B7EF74: bc    12, 2, 0x80B7EF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7EF7C;
        }
    }

label_80B7EF78:
    ctx->pc = 0x80B7EF78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EF78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7EF78: bl      0x80B7EC68
    {
            ctx->lr = 0x80B7EF7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B7EC68u;
                return;
            }
            goto label_80B7EC68;
    }

label_80B7EF7C:
    ctx->pc = 0x80B7EF7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EF7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EF7C: lwz     r0, 20(r1)
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
label_80B7EF80:
    ctx->pc = 0x80B7EF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EF80: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EF84:
    ctx->pc = 0x80B7EF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF84u)) return;
    // 80B7EF84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7EF88:
    ctx->pc = 0x80B7EF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF88u)) return;
    // 80B7EF88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EF8C:
    ctx->pc = 0x80B7EF8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EF8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EF8C: stwu     r1, -16(r1)
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
label_80B7EF90:
    ctx->pc = 0x80B7EF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EF90: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EF94:
    ctx->pc = 0x80B7EF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EF94: stw     r0, 20(r1)
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
label_80B7EF98:
    ctx->pc = 0x80B7EF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF98u)) return;
    // 80B7EF98: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7EF9C:
    ctx->pc = 0x80B7EF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EF9Cu)) return;
    // 80B7EF9C: addi    r6, r6, -32624
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32624);

label_80B7EFA0:
    ctx->pc = 0x80B7EFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EFA0: lwz     r0, 0(r6)
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
label_80B7EFA4:
    ctx->pc = 0x80B7EFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFA4u)) return;
    // 80B7EFA4: cmpw    r3, r0
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

label_80B7EFA8:
    ctx->pc = 0x80B7EFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFA8u)) return;
    // 80B7EFA8: bc    4, 0, 0x80B7EFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7EFCC;
        }
    }

label_80B7EFAC:
    ctx->pc = 0x80B7EFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7EFAC: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7EFB0:
    ctx->pc = 0x80B7EFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFB0u)) return;
    // 80B7EFB0: addi    r6, r6, -32620
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32620);

label_80B7EFB4:
    ctx->pc = 0x80B7EFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EFB4: lwz     r6, 0(r6)
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
label_80B7EFB8:
    ctx->pc = 0x80B7EFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFB8u)) return;
    // 80B7EFB8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B7EFBC:
    ctx->pc = 0x80B7EFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EFBC: lwzx    r3, r6, r0
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
label_80B7EFC0:
    ctx->pc = 0x80B7EFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFC0u)) return;
    // 80B7EFC0: cmplwi  r3, 0x0000
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

label_80B7EFC4:
    ctx->pc = 0x80B7EFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFC4u)) return;
    // 80B7EFC4: bc    12, 2, 0x80B7EFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7EFCC;
        }
    }

label_80B7EFC8:
    ctx->pc = 0x80B7EFC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EFC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7EFC8: bl      0x80B7ECB8
    {
            ctx->lr = 0x80B7EFCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B7ECB8u;
                return;
            }
            goto label_80B7ECB8;
    }

label_80B7EFCC:
    ctx->pc = 0x80B7EFCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EFCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7EFCC: lwz     r0, 20(r1)
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
label_80B7EFD0:
    ctx->pc = 0x80B7EFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7EFD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EFD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EFD4:
    ctx->pc = 0x80B7EFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFD4u)) return;
    // 80B7EFD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7EFD8:
    ctx->pc = 0x80B7EFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFD8u)) return;
    // 80B7EFD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7EFDC:
    ctx->pc = 0x80B7EFDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EFDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7EFDC: stwu     r1, -16(r1)
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
label_80B7EFE0:
    ctx->pc = 0x80B7EFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7EFE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7EFE4:
    ctx->pc = 0x80B7EFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7EFE4: stw     r0, 20(r1)
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
label_80B7EFE8:
    ctx->pc = 0x80B7EFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFE8u)) return;
    // 80B7EFE8: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7EFEC:
    ctx->pc = 0x80B7EFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFECu)) return;
    // 80B7EFEC: addi    r6, r6, -32624
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32624);

label_80B7EFF0:
    ctx->pc = 0x80B7EFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7EFF0: lwz     r0, 0(r6)
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
label_80B7EFF4:
    ctx->pc = 0x80B7EFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFF4u)) return;
    // 80B7EFF4: cmpw    r3, r0
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

label_80B7EFF8:
    ctx->pc = 0x80B7EFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7EFF8u)) return;
    // 80B7EFF8: bc    4, 0, 0x80B7F01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7F01C;
        }
    }

label_80B7EFFC:
    ctx->pc = 0x80B7EFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7EFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7EFFC: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F000:
    ctx->pc = 0x80B7F000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F000u)) return;
    // 80B7F000: addi    r6, r6, -32620
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32620);

label_80B7F004:
    ctx->pc = 0x80B7F004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F004: lwz     r6, 0(r6)
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
label_80B7F008:
    ctx->pc = 0x80B7F008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F008u)) return;
    // 80B7F008: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B7F00C:
    ctx->pc = 0x80B7F00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F00Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F00C: lwzx    r3, r6, r0
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
label_80B7F010:
    ctx->pc = 0x80B7F010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F010u)) return;
    // 80B7F010: cmplwi  r3, 0x0000
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

label_80B7F014:
    ctx->pc = 0x80B7F014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F014u)) return;
    // 80B7F014: bc    12, 2, 0x80B7F01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7F01C;
        }
    }

label_80B7F018:
    ctx->pc = 0x80B7F018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F018: bl      0x80B7ED08
    {
            ctx->lr = 0x80B7F01Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B7ED08u;
                return;
            }
            goto label_80B7ED08;
    }

label_80B7F01C:
    ctx->pc = 0x80B7F01Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F01Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F01C: lwz     r0, 20(r1)
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
label_80B7F020:
    ctx->pc = 0x80B7F020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7F020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F020: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F024:
    ctx->pc = 0x80B7F024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F024u)) return;
    // 80B7F024: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7F028:
    ctx->pc = 0x80B7F028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F028u)) return;
    // 80B7F028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

label_80B7F02C:
    ctx->pc = 0x80B7F02Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F02Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B7F02C: stwu     r1, -32(r1)
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
label_80B7F030:
    ctx->pc = 0x80B7F030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7F030: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F034:
    ctx->pc = 0x80B7F034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7F034: stw     r0, 36(r1)
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
label_80B7F038:
    ctx->pc = 0x80B7F038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7F038: stw     r31, 28(r1)
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
label_80B7F03C:
    ctx->pc = 0x80B7F03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F03Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7F03C: stw     r30, 24(r1)
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
label_80B7F040:
    ctx->pc = 0x80B7F040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F040: stw     r29, 20(r1)
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
label_80B7F044:
    ctx->pc = 0x80B7F044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F044: stw     r28, 16(r1)
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
label_80B7F048:
    ctx->pc = 0x80B7F048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F048u)) return;
    // 80B7F048: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B7F04C:
    ctx->pc = 0x80B7F04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F04Cu)) return;
    // 80B7F04C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B7F050:
    ctx->pc = 0x80B7F050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F050u)) return;
    // 80B7F050: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B7F054:
    ctx->pc = 0x80B7F054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F054u)) return;
    // 80B7F054: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80B7F058:
    ctx->pc = 0x80B7F058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F058u)) return;
    // 80B7F058: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F05C:
    ctx->pc = 0x80B7F05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F05Cu)) return;
    // 80B7F05C: bl      0x80401DB0
    {
            ctx->lr = 0x80B7F060u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80B7F060:
    ctx->pc = 0x80B7F060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F060: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F064:
    ctx->pc = 0x80B7F064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F064u)) return;
    // 80B7F064: addi    r4, r4, -32616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32616);

label_80B7F068:
    ctx->pc = 0x80B7F068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F068: lwz     r0, 0(r4)
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
label_80B7F06C:
    ctx->pc = 0x80B7F06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F06Cu)) return;
    // 80B7F06C: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80B7F070:
    ctx->pc = 0x80B7F070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F070u)) return;
    // 80B7F070: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B7F074:
    ctx->pc = 0x80B7F074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F074u)) return;
    // 80B7F074: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B7F078:
    ctx->pc = 0x80B7F078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F078u)) return;
    // 80B7F078: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B7F07C:
    ctx->pc = 0x80B7F07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F07Cu)) return;
    // 80B7F07C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7F080:
    ctx->pc = 0x80B7F080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F080u)) return;
    // 80B7F080: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80B7F084:
    ctx->pc = 0x80B7F084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F084u)) return;
    // 80B7F084: bl      0x8050A0D4
    {
            ctx->lr = 0x80B7F088u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B7F088:
    ctx->pc = 0x80B7F088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F088: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B7F08C:
    ctx->pc = 0x80B7F08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F08Cu)) return;
    // 80B7F08C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80B7F090:
    ctx->pc = 0x80B7F090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F090u)) return;
    // 80B7F090: bl      0x80509C74
    {
            ctx->lr = 0x80B7F094u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B7F094:
    ctx->pc = 0x80B7F094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F094: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B7F098:
    ctx->pc = 0x80B7F098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F098u)) return;
    // 80B7F098: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B7F09C:
    ctx->pc = 0x80B7F09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F09Cu)) return;
    // 80B7F09C: bl      0x80509BF8
    {
            ctx->lr = 0x80B7F0A0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B7F0A0:
    ctx->pc = 0x80B7F0A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F0A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F0A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B7F0A4:
    ctx->pc = 0x80B7F0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0A4u)) return;
    // 80B7F0A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B7F0A8:
    ctx->pc = 0x80B7F0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0A8u)) return;
    // 80B7F0A8: bl      0x80509B94
    {
            ctx->lr = 0x80B7F0ACu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B7F0AC:
    ctx->pc = 0x80B7F0ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B7F0AC: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7F0B0:
    ctx->pc = 0x80B7F0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0B0u)) return;
    // 80B7F0B0: addi    r4, r3, -32616
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-32616);

label_80B7F0B4:
    ctx->pc = 0x80B7F0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B7F0B4: lwz     r3, 0(r4)
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
label_80B7F0B8:
    ctx->pc = 0x80B7F0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0B8u)) return;
    // 80B7F0B8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80B7F0BC:
    ctx->pc = 0x80B7F0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7F0BC: stw     r0, 0(r4)
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
label_80B7F0C0:
    ctx->pc = 0x80B7F0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0C0u)) return;
    // 80B7F0C0: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80B7F0C4:
    ctx->pc = 0x80B7F0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7F0C4: stw     r0, 0(r4)
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
label_80B7F0C8:
    ctx->pc = 0x80B7F0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B7F0C8: lwz     r31, 28(r1)
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
label_80B7F0CC:
    ctx->pc = 0x80B7F0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F0CC: lwz     r30, 24(r1)
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
label_80B7F0D0:
    ctx->pc = 0x80B7F0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F0D0: lwz     r29, 20(r1)
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
label_80B7F0D4:
    ctx->pc = 0x80B7F0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7F0D4: lwz     r28, 16(r1)
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
label_80B7F0D8:
    ctx->pc = 0x80B7F0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F0D8: lwz     r0, 36(r1)
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
label_80B7F0DC:
    ctx->pc = 0x80B7F0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7F0DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F0DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F0E0:
    ctx->pc = 0x80B7F0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0E0u)) return;
    // 80B7F0E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B7F0E4:
    ctx->pc = 0x80B7F0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F0E4u)) return;
    // 80B7F0E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7D2C0;
        }
    }

    ctx->pc = 0x80B7F0E8u;
    return;
return_dispatch_80B7D2C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80B7D30Cu: goto label_80B7D30C;
    case 0x80B7D334u: goto label_80B7D334;
    case 0x80B7D348u: goto label_80B7D348;
    case 0x80B7D34Cu: goto label_80B7D34C;
    case 0x80B7D350u: goto label_80B7D350;
    case 0x80B7D360u: goto label_80B7D360;
    case 0x80B7D368u: goto label_80B7D368;
    case 0x80B7D370u: goto label_80B7D370;
    case 0x80B7D378u: goto label_80B7D378;
    case 0x80B7D39Cu: goto label_80B7D39C;
    case 0x80B7D3C0u: goto label_80B7D3C0;
    case 0x80B7D3F0u: goto label_80B7D3F0;
    case 0x80B7D43Cu: goto label_80B7D43C;
    case 0x80B7D450u: goto label_80B7D450;
    case 0x80B7D478u: goto label_80B7D478;
    case 0x80B7D480u: goto label_80B7D480;
    case 0x80B7D494u: goto label_80B7D494;
    case 0x80B7D4D8u: goto label_80B7D4D8;
    case 0x80B7D4E0u: goto label_80B7D4E0;
    case 0x80B7D4E8u: goto label_80B7D4E8;
    case 0x80B7D510u: goto label_80B7D510;
    case 0x80B7D518u: goto label_80B7D518;
    case 0x80B7D528u: goto label_80B7D528;
    case 0x80B7D54Cu: goto label_80B7D54C;
    case 0x80B7D57Cu: goto label_80B7D57C;
    case 0x80B7D598u: goto label_80B7D598;
    case 0x80B7D5C8u: goto label_80B7D5C8;
    case 0x80B7D5E4u: goto label_80B7D5E4;
    case 0x80B7D5ECu: goto label_80B7D5EC;
    case 0x80B7D5F4u: goto label_80B7D5F4;
    case 0x80B7D61Cu: goto label_80B7D61C;
    case 0x80B7D64Cu: goto label_80B7D64C;
    case 0x80B7D654u: goto label_80B7D654;
    case 0x80B7D67Cu: goto label_80B7D67C;
    case 0x80B7D684u: goto label_80B7D684;
    case 0x80B7D68Cu: goto label_80B7D68C;
    case 0x80B7D6C0u: goto label_80B7D6C0;
    case 0x80B7D6C8u: goto label_80B7D6C8;
    case 0x80B7D708u: goto label_80B7D708;
    case 0x80B7D710u: goto label_80B7D710;
    case 0x80B7D740u: goto label_80B7D740;
    case 0x80B7D75Cu: goto label_80B7D75C;
    case 0x80B7D78Cu: goto label_80B7D78C;
    case 0x80B7D7A8u: goto label_80B7D7A8;
    case 0x80B7D7CCu: goto label_80B7D7CC;
    case 0x80B7D7D4u: goto label_80B7D7D4;
    case 0x80B7D7F8u: goto label_80B7D7F8;
    case 0x80B7D800u: goto label_80B7D800;
    case 0x80B7D824u: goto label_80B7D824;
    case 0x80B7D82Cu: goto label_80B7D82C;
    case 0x80B7D834u: goto label_80B7D834;
    case 0x80B7D838u: goto label_80B7D838;
    case 0x80B7D83Cu: goto label_80B7D83C;
    case 0x80B7D844u: goto label_80B7D844;
    case 0x80B7D86Cu: goto label_80B7D86C;
    case 0x80B7D874u: goto label_80B7D874;
    case 0x80B7D888u: goto label_80B7D888;
    case 0x80B7D890u: goto label_80B7D890;
    case 0x80B7D8B8u: goto label_80B7D8B8;
    case 0x80B7D8C0u: goto label_80B7D8C0;
    case 0x80B7D8D4u: goto label_80B7D8D4;
    case 0x80B7D904u: goto label_80B7D904;
    case 0x80B7D91Cu: goto label_80B7D91C;
    case 0x80B7D94Cu: goto label_80B7D94C;
    case 0x80B7D964u: goto label_80B7D964;
    case 0x80B7D96Cu: goto label_80B7D96C;
    case 0x80B7D9A4u: goto label_80B7D9A4;
    case 0x80B7D9C8u: goto label_80B7D9C8;
    case 0x80B7D9D0u: goto label_80B7D9D0;
    case 0x80B7D9F4u: goto label_80B7D9F4;
    case 0x80B7D9FCu: goto label_80B7D9FC;
    case 0x80B7DA20u: goto label_80B7DA20;
    case 0x80B7DA28u: goto label_80B7DA28;
    case 0x80B7DA30u: goto label_80B7DA30;
    case 0x80B7DA38u: goto label_80B7DA38;
    case 0x80B7DA60u: goto label_80B7DA60;
    case 0x80B7DA68u: goto label_80B7DA68;
    case 0x80B7DA90u: goto label_80B7DA90;
    case 0x80B7DA98u: goto label_80B7DA98;
    case 0x80B7DAACu: goto label_80B7DAAC;
    case 0x80B7DAB4u: goto label_80B7DAB4;
    case 0x80B7DAF4u: goto label_80B7DAF4;
    case 0x80B7DAFCu: goto label_80B7DAFC;
    case 0x80B7DB04u: goto label_80B7DB04;
    case 0x80B7DB08u: goto label_80B7DB08;
    case 0x80B7DB10u: goto label_80B7DB10;
    case 0x80B7DB1Cu: goto label_80B7DB1C;
    case 0x80B7DB24u: goto label_80B7DB24;
    case 0x80B7DB2Cu: goto label_80B7DB2C;
    case 0x80B7DB34u: goto label_80B7DB34;
    case 0x80B7DB38u: goto label_80B7DB38;
    case 0x80B7DB40u: goto label_80B7DB40;
    case 0x80B7DB68u: goto label_80B7DB68;
    case 0x80B7DB70u: goto label_80B7DB70;
    case 0x80B7DB84u: goto label_80B7DB84;
    case 0x80B7DB8Cu: goto label_80B7DB8C;
    case 0x80B7DB90u: goto label_80B7DB90;
    case 0x80B7DBC0u: goto label_80B7DBC0;
    case 0x80B7DBD8u: goto label_80B7DBD8;
    case 0x80B7DC08u: goto label_80B7DC08;
    case 0x80B7DC24u: goto label_80B7DC24;
    case 0x80B7DC2Cu: goto label_80B7DC2C;
    case 0x80B7DC34u: goto label_80B7DC34;
    case 0x80B7DC48u: goto label_80B7DC48;
    case 0x80B7DC50u: goto label_80B7DC50;
    case 0x80B7DC78u: goto label_80B7DC78;
    case 0x80B7DCA8u: goto label_80B7DCA8;
    case 0x80B7DCC0u: goto label_80B7DCC0;
    case 0x80B7DCF0u: goto label_80B7DCF0;
    case 0x80B7DD08u: goto label_80B7DD08;
    case 0x80B7DD10u: goto label_80B7DD10;
    case 0x80B7DD50u: goto label_80B7DD50;
    case 0x80B7DD74u: goto label_80B7DD74;
    case 0x80B7DD7Cu: goto label_80B7DD7C;
    case 0x80B7DDA0u: goto label_80B7DDA0;
    case 0x80B7DDA8u: goto label_80B7DDA8;
    case 0x80B7DDCCu: goto label_80B7DDCC;
    case 0x80B7DDD4u: goto label_80B7DDD4;
    case 0x80B7DDFCu: goto label_80B7DDFC;
    case 0x80B7DE04u: goto label_80B7DE04;
    case 0x80B7DE18u: goto label_80B7DE18;
    case 0x80B7DE48u: goto label_80B7DE48;
    case 0x80B7DE60u: goto label_80B7DE60;
    case 0x80B7DE90u: goto label_80B7DE90;
    case 0x80B7DE98u: goto label_80B7DE98;
    case 0x80B7DEA0u: goto label_80B7DEA0;
    case 0x80B7DED0u: goto label_80B7DED0;
    case 0x80B7DEE8u: goto label_80B7DEE8;
    case 0x80B7DEF0u: goto label_80B7DEF0;
    case 0x80B7DEF4u: goto label_80B7DEF4;
    case 0x80B7DEFCu: goto label_80B7DEFC;
    case 0x80B7DF3Cu: goto label_80B7DF3C;
    case 0x80B7DF44u: goto label_80B7DF44;
    case 0x80B7DF4Cu: goto label_80B7DF4C;
    case 0x80B7DF7Cu: goto label_80B7DF7C;
    case 0x80B7DF84u: goto label_80B7DF84;
    case 0x80B7DF8Cu: goto label_80B7DF8C;
    case 0x80B7DF90u: goto label_80B7DF90;
    case 0x80B7DF98u: goto label_80B7DF98;
    case 0x80B7DFC0u: goto label_80B7DFC0;
    case 0x80B7DFC8u: goto label_80B7DFC8;
    case 0x80B7DFDCu: goto label_80B7DFDC;
    case 0x80B7DFE4u: goto label_80B7DFE4;
    case 0x80B7E00Cu: goto label_80B7E00C;
    case 0x80B7E014u: goto label_80B7E014;
    case 0x80B7E028u: goto label_80B7E028;
    case 0x80B7E030u: goto label_80B7E030;
    case 0x80B7E058u: goto label_80B7E058;
    case 0x80B7E060u: goto label_80B7E060;
    case 0x80B7E088u: goto label_80B7E088;
    case 0x80B7E090u: goto label_80B7E090;
    case 0x80B7E09Cu: goto label_80B7E09C;
    case 0x80B7E0C0u: goto label_80B7E0C0;
    case 0x80B7E0C8u: goto label_80B7E0C8;
    case 0x80B7E0F0u: goto label_80B7E0F0;
    case 0x80B7E0F8u: goto label_80B7E0F8;
    case 0x80B7E10Cu: goto label_80B7E10C;
    case 0x80B7E114u: goto label_80B7E114;
    case 0x80B7E130u: goto label_80B7E130;
    case 0x80B7E138u: goto label_80B7E138;
    case 0x80B7E140u: goto label_80B7E140;
    case 0x80B7E15Cu: goto label_80B7E15C;
    case 0x80B7E164u: goto label_80B7E164;
    case 0x80B7E168u: goto label_80B7E168;
    case 0x80B7E170u: goto label_80B7E170;
    case 0x80B7E190u: goto label_80B7E190;
    case 0x80B7E1B0u: goto label_80B7E1B0;
    case 0x80B7E1DCu: goto label_80B7E1DC;
    case 0x80B7E1E4u: goto label_80B7E1E4;
    case 0x80B7E1E8u: goto label_80B7E1E8;
    case 0x80B7E1F0u: goto label_80B7E1F0;
    case 0x80B7E220u: goto label_80B7E220;
    case 0x80B7E228u: goto label_80B7E228;
    case 0x80B7E230u: goto label_80B7E230;
    case 0x80B7E250u: goto label_80B7E250;
    case 0x80B7E270u: goto label_80B7E270;
    case 0x80B7E29Cu: goto label_80B7E29C;
    case 0x80B7E2A4u: goto label_80B7E2A4;
    case 0x80B7E2A8u: goto label_80B7E2A8;
    case 0x80B7E2CCu: goto label_80B7E2CC;
    case 0x80B7E2D4u: goto label_80B7E2D4;
    case 0x80B7E2DCu: goto label_80B7E2DC;
    case 0x80B7E2E0u: goto label_80B7E2E0;
    case 0x80B7E2E8u: goto label_80B7E2E8;
    case 0x80B7E2F4u: goto label_80B7E2F4;
    case 0x80B7E2FCu: goto label_80B7E2FC;
    case 0x80B7E31Cu: goto label_80B7E31C;
    case 0x80B7E33Cu: goto label_80B7E33C;
    case 0x80B7E368u: goto label_80B7E368;
    case 0x80B7E370u: goto label_80B7E370;
    case 0x80B7E374u: goto label_80B7E374;
    case 0x80B7E37Cu: goto label_80B7E37C;
    case 0x80B7E3B4u: goto label_80B7E3B4;
    case 0x80B7E3BCu: goto label_80B7E3BC;
    case 0x80B7E3C4u: goto label_80B7E3C4;
    case 0x80B7E3E4u: goto label_80B7E3E4;
    case 0x80B7E404u: goto label_80B7E404;
    case 0x80B7E430u: goto label_80B7E430;
    case 0x80B7E438u: goto label_80B7E438;
    case 0x80B7E43Cu: goto label_80B7E43C;
    case 0x80B7E444u: goto label_80B7E444;
    case 0x80B7E474u: goto label_80B7E474;
    case 0x80B7E47Cu: goto label_80B7E47C;
    case 0x80B7E480u: goto label_80B7E480;
    case 0x80B7E484u: goto label_80B7E484;
    case 0x80B7E48Cu: goto label_80B7E48C;
    case 0x80B7E490u: goto label_80B7E490;
    case 0x80B7E498u: goto label_80B7E498;
    case 0x80B7E4C0u: goto label_80B7E4C0;
    case 0x80B7E4ECu: goto label_80B7E4EC;
    case 0x80B7E510u: goto label_80B7E510;
    case 0x80B7E540u: goto label_80B7E540;
    case 0x80B7E55Cu: goto label_80B7E55C;
    case 0x80B7E58Cu: goto label_80B7E58C;
    case 0x80B7E5A8u: goto label_80B7E5A8;
    case 0x80B7E5B0u: goto label_80B7E5B0;
    case 0x80B7E5F0u: goto label_80B7E5F0;
    case 0x80B7E5F8u: goto label_80B7E5F8;
    case 0x80B7E638u: goto label_80B7E638;
    case 0x80B7E640u: goto label_80B7E640;
    case 0x80B7E664u: goto label_80B7E664;
    case 0x80B7E66Cu: goto label_80B7E66C;
    case 0x80B7E67Cu: goto label_80B7E67C;
    case 0x80B7E684u: goto label_80B7E684;
    case 0x80B7E6B0u: goto label_80B7E6B0;
    case 0x80B7E6C8u: goto label_80B7E6C8;
    case 0x80B7E6CCu: goto label_80B7E6CC;
    case 0x80B7E6D0u: goto label_80B7E6D0;
    case 0x80B7E6D8u: goto label_80B7E6D8;
    case 0x80B7E6F0u: goto label_80B7E6F0;
    case 0x80B7E718u: goto label_80B7E718;
    case 0x80B7E730u: goto label_80B7E730;
    case 0x80B7E738u: goto label_80B7E738;
    case 0x80B7E73Cu: goto label_80B7E73C;
    case 0x80B7E744u: goto label_80B7E744;
    case 0x80B7E748u: goto label_80B7E748;
    case 0x80B7E780u: goto label_80B7E780;
    case 0x80B7E80Cu: goto label_80B7E80C;
    case 0x80B7E818u: goto label_80B7E818;
    case 0x80B7E8A8u: goto label_80B7E8A8;
    case 0x80B7E8B0u: goto label_80B7E8B0;
    case 0x80B7E8D4u: goto label_80B7E8D4;
    case 0x80B7E93Cu: goto label_80B7E93C;
    case 0x80B7E984u: goto label_80B7E984;
    case 0x80B7E9F0u: goto label_80B7E9F0;
    case 0x80B7EAA0u: goto label_80B7EAA0;
    case 0x80B7EB00u: goto label_80B7EB00;
    case 0x80B7EB40u: goto label_80B7EB40;
    case 0x80B7EB80u: goto label_80B7EB80;
    case 0x80B7EBDCu: goto label_80B7EBDC;
    case 0x80B7EC00u: goto label_80B7EC00;
    case 0x80B7EC9Cu: goto label_80B7EC9C;
    case 0x80B7ECECu: goto label_80B7ECEC;
    case 0x80B7ED3Cu: goto label_80B7ED3C;
    case 0x80B7ED88u: goto label_80B7ED88;
    case 0x80B7EE0Cu: goto label_80B7EE0C;
    case 0x80B7EE30u: goto label_80B7EE30;
    case 0x80B7EEACu: goto label_80B7EEAC;
    case 0x80B7EF14u: goto label_80B7EF14;
    case 0x80B7EF7Cu: goto label_80B7EF7C;
    case 0x80B7EFCCu: goto label_80B7EFCC;
    case 0x80B7F01Cu: goto label_80B7F01C;
    case 0x80B7F060u: goto label_80B7F060;
    case 0x80B7F088u: goto label_80B7F088;
    case 0x80B7F094u: goto label_80B7F094;
    case 0x80B7F0A0u: goto label_80B7F0A0;
    case 0x80B7F0ACu: goto label_80B7F0AC;
    default: return;
    }
}

