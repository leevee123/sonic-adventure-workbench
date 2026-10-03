// DolRecomp output
#include "../generated.h"

void func_80CD7E20(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CD7E20[1762] = {
        &&label_80CD7E20,
        &&label_80CD7E24,
        &&label_80CD7E28,
        &&label_80CD7E2C,
        &&label_80CD7E30,
        &&label_80CD7E34,
        &&label_80CD7E38,
        &&label_80CD7E3C,
        &&label_80CD7E40,
        &&label_80CD7E44,
        &&label_80CD7E48,
        &&label_80CD7E4C,
        &&label_80CD7E50,
        &&label_80CD7E54,
        &&label_80CD7E58,
        &&label_80CD7E5C,
        &&label_80CD7E60,
        &&label_80CD7E64,
        &&label_80CD7E68,
        &&label_80CD7E6C,
        &&label_80CD7E70,
        &&label_80CD7E74,
        &&label_80CD7E78,
        &&label_80CD7E7C,
        &&label_80CD7E80,
        &&label_80CD7E84,
        &&label_80CD7E88,
        &&label_80CD7E8C,
        &&label_80CD7E90,
        &&label_80CD7E94,
        &&label_80CD7E98,
        &&label_80CD7E9C,
        &&label_80CD7EA0,
        &&label_80CD7EA4,
        &&label_80CD7EA8,
        &&label_80CD7EAC,
        &&label_80CD7EB0,
        &&label_80CD7EB4,
        &&label_80CD7EB8,
        &&label_80CD7EBC,
        &&label_80CD7EC0,
        &&label_80CD7EC4,
        &&label_80CD7EC8,
        &&label_80CD7ECC,
        &&label_80CD7ED0,
        &&label_80CD7ED4,
        &&label_80CD7ED8,
        &&label_80CD7EDC,
        &&label_80CD7EE0,
        &&label_80CD7EE4,
        &&label_80CD7EE8,
        &&label_80CD7EEC,
        &&label_80CD7EF0,
        &&label_80CD7EF4,
        &&label_80CD7EF8,
        &&label_80CD7EFC,
        &&label_80CD7F00,
        &&label_80CD7F04,
        &&label_80CD7F08,
        &&label_80CD7F0C,
        &&label_80CD7F10,
        &&label_80CD7F14,
        &&label_80CD7F18,
        &&label_80CD7F1C,
        &&label_80CD7F20,
        &&label_80CD7F24,
        &&label_80CD7F28,
        &&label_80CD7F2C,
        &&label_80CD7F30,
        &&label_80CD7F34,
        &&label_80CD7F38,
        &&label_80CD7F3C,
        &&label_80CD7F40,
        &&label_80CD7F44,
        &&label_80CD7F48,
        &&label_80CD7F4C,
        &&label_80CD7F50,
        &&label_80CD7F54,
        &&label_80CD7F58,
        &&label_80CD7F5C,
        &&label_80CD7F60,
        &&label_80CD7F64,
        &&label_80CD7F68,
        &&label_80CD7F6C,
        &&label_80CD7F70,
        &&label_80CD7F74,
        &&label_80CD7F78,
        &&label_80CD7F7C,
        &&label_80CD7F80,
        &&label_80CD7F84,
        &&label_80CD7F88,
        &&label_80CD7F8C,
        &&label_80CD7F90,
        &&label_80CD7F94,
        &&label_80CD7F98,
        &&label_80CD7F9C,
        &&label_80CD7FA0,
        &&label_80CD7FA4,
        &&label_80CD7FA8,
        &&label_80CD7FAC,
        &&label_80CD7FB0,
        &&label_80CD7FB4,
        &&label_80CD7FB8,
        &&label_80CD7FBC,
        &&label_80CD7FC0,
        &&label_80CD7FC4,
        &&label_80CD7FC8,
        &&label_80CD7FCC,
        &&label_80CD7FD0,
        &&label_80CD7FD4,
        &&label_80CD7FD8,
        &&label_80CD7FDC,
        &&label_80CD7FE0,
        &&label_80CD7FE4,
        &&label_80CD7FE8,
        &&label_80CD7FEC,
        &&label_80CD7FF0,
        &&label_80CD7FF4,
        &&label_80CD7FF8,
        &&label_80CD7FFC,
        &&label_80CD8000,
        &&label_80CD8004,
        &&label_80CD8008,
        &&label_80CD800C,
        &&label_80CD8010,
        &&label_80CD8014,
        &&label_80CD8018,
        &&label_80CD801C,
        &&label_80CD8020,
        &&label_80CD8024,
        &&label_80CD8028,
        &&label_80CD802C,
        &&label_80CD8030,
        &&label_80CD8034,
        &&label_80CD8038,
        &&label_80CD803C,
        &&label_80CD8040,
        &&label_80CD8044,
        &&label_80CD8048,
        &&label_80CD804C,
        &&label_80CD8050,
        &&label_80CD8054,
        &&label_80CD8058,
        &&label_80CD805C,
        &&label_80CD8060,
        &&label_80CD8064,
        &&label_80CD8068,
        &&label_80CD806C,
        &&label_80CD8070,
        &&label_80CD8074,
        &&label_80CD8078,
        &&label_80CD807C,
        &&label_80CD8080,
        &&label_80CD8084,
        &&label_80CD8088,
        &&label_80CD808C,
        &&label_80CD8090,
        &&label_80CD8094,
        &&label_80CD8098,
        &&label_80CD809C,
        &&label_80CD80A0,
        &&label_80CD80A4,
        &&label_80CD80A8,
        &&label_80CD80AC,
        &&label_80CD80B0,
        &&label_80CD80B4,
        &&label_80CD80B8,
        &&label_80CD80BC,
        &&label_80CD80C0,
        &&label_80CD80C4,
        &&label_80CD80C8,
        &&label_80CD80CC,
        &&label_80CD80D0,
        &&label_80CD80D4,
        &&label_80CD80D8,
        &&label_80CD80DC,
        &&label_80CD80E0,
        &&label_80CD80E4,
        &&label_80CD80E8,
        &&label_80CD80EC,
        &&label_80CD80F0,
        &&label_80CD80F4,
        &&label_80CD80F8,
        &&label_80CD80FC,
        &&label_80CD8100,
        &&label_80CD8104,
        &&label_80CD8108,
        &&label_80CD810C,
        &&label_80CD8110,
        &&label_80CD8114,
        &&label_80CD8118,
        &&label_80CD811C,
        &&label_80CD8120,
        &&label_80CD8124,
        &&label_80CD8128,
        &&label_80CD812C,
        &&label_80CD8130,
        &&label_80CD8134,
        &&label_80CD8138,
        &&label_80CD813C,
        &&label_80CD8140,
        &&label_80CD8144,
        &&label_80CD8148,
        &&label_80CD814C,
        &&label_80CD8150,
        &&label_80CD8154,
        &&label_80CD8158,
        &&label_80CD815C,
        &&label_80CD8160,
        &&label_80CD8164,
        &&label_80CD8168,
        &&label_80CD816C,
        &&label_80CD8170,
        &&label_80CD8174,
        &&label_80CD8178,
        &&label_80CD817C,
        &&label_80CD8180,
        &&label_80CD8184,
        &&label_80CD8188,
        &&label_80CD818C,
        &&label_80CD8190,
        &&label_80CD8194,
        &&label_80CD8198,
        &&label_80CD819C,
        &&label_80CD81A0,
        &&label_80CD81A4,
        &&label_80CD81A8,
        &&label_80CD81AC,
        &&label_80CD81B0,
        &&label_80CD81B4,
        &&label_80CD81B8,
        &&label_80CD81BC,
        &&label_80CD81C0,
        &&label_80CD81C4,
        &&label_80CD81C8,
        &&label_80CD81CC,
        &&label_80CD81D0,
        &&label_80CD81D4,
        &&label_80CD81D8,
        &&label_80CD81DC,
        &&label_80CD81E0,
        &&label_80CD81E4,
        &&label_80CD81E8,
        &&label_80CD81EC,
        &&label_80CD81F0,
        &&label_80CD81F4,
        &&label_80CD81F8,
        &&label_80CD81FC,
        &&label_80CD8200,
        &&label_80CD8204,
        &&label_80CD8208,
        &&label_80CD820C,
        &&label_80CD8210,
        &&label_80CD8214,
        &&label_80CD8218,
        &&label_80CD821C,
        &&label_80CD8220,
        &&label_80CD8224,
        &&label_80CD8228,
        &&label_80CD822C,
        &&label_80CD8230,
        &&label_80CD8234,
        &&label_80CD8238,
        &&label_80CD823C,
        &&label_80CD8240,
        &&label_80CD8244,
        &&label_80CD8248,
        &&label_80CD824C,
        &&label_80CD8250,
        &&label_80CD8254,
        &&label_80CD8258,
        &&label_80CD825C,
        &&label_80CD8260,
        &&label_80CD8264,
        &&label_80CD8268,
        &&label_80CD826C,
        &&label_80CD8270,
        &&label_80CD8274,
        &&label_80CD8278,
        &&label_80CD827C,
        &&label_80CD8280,
        &&label_80CD8284,
        &&label_80CD8288,
        &&label_80CD828C,
        &&label_80CD8290,
        &&label_80CD8294,
        &&label_80CD8298,
        &&label_80CD829C,
        &&label_80CD82A0,
        &&label_80CD82A4,
        &&label_80CD82A8,
        &&label_80CD82AC,
        &&label_80CD82B0,
        &&label_80CD82B4,
        &&label_80CD82B8,
        &&label_80CD82BC,
        &&label_80CD82C0,
        &&label_80CD82C4,
        &&label_80CD82C8,
        &&label_80CD82CC,
        &&label_80CD82D0,
        &&label_80CD82D4,
        &&label_80CD82D8,
        &&label_80CD82DC,
        &&label_80CD82E0,
        &&label_80CD82E4,
        &&label_80CD82E8,
        &&label_80CD82EC,
        &&label_80CD82F0,
        &&label_80CD82F4,
        &&label_80CD82F8,
        &&label_80CD82FC,
        &&label_80CD8300,
        &&label_80CD8304,
        &&label_80CD8308,
        &&label_80CD830C,
        &&label_80CD8310,
        &&label_80CD8314,
        &&label_80CD8318,
        &&label_80CD831C,
        &&label_80CD8320,
        &&label_80CD8324,
        &&label_80CD8328,
        &&label_80CD832C,
        &&label_80CD8330,
        &&label_80CD8334,
        &&label_80CD8338,
        &&label_80CD833C,
        &&label_80CD8340,
        &&label_80CD8344,
        &&label_80CD8348,
        &&label_80CD834C,
        &&label_80CD8350,
        &&label_80CD8354,
        &&label_80CD8358,
        &&label_80CD835C,
        &&label_80CD8360,
        &&label_80CD8364,
        &&label_80CD8368,
        &&label_80CD836C,
        &&label_80CD8370,
        &&label_80CD8374,
        &&label_80CD8378,
        &&label_80CD837C,
        &&label_80CD8380,
        &&label_80CD8384,
        &&label_80CD8388,
        &&label_80CD838C,
        &&label_80CD8390,
        &&label_80CD8394,
        &&label_80CD8398,
        &&label_80CD839C,
        &&label_80CD83A0,
        &&label_80CD83A4,
        &&label_80CD83A8,
        &&label_80CD83AC,
        &&label_80CD83B0,
        &&label_80CD83B4,
        &&label_80CD83B8,
        &&label_80CD83BC,
        &&label_80CD83C0,
        &&label_80CD83C4,
        &&label_80CD83C8,
        &&label_80CD83CC,
        &&label_80CD83D0,
        &&label_80CD83D4,
        &&label_80CD83D8,
        &&label_80CD83DC,
        &&label_80CD83E0,
        &&label_80CD83E4,
        &&label_80CD83E8,
        &&label_80CD83EC,
        &&label_80CD83F0,
        &&label_80CD83F4,
        &&label_80CD83F8,
        &&label_80CD83FC,
        &&label_80CD8400,
        &&label_80CD8404,
        &&label_80CD8408,
        &&label_80CD840C,
        &&label_80CD8410,
        &&label_80CD8414,
        &&label_80CD8418,
        &&label_80CD841C,
        &&label_80CD8420,
        &&label_80CD8424,
        &&label_80CD8428,
        &&label_80CD842C,
        &&label_80CD8430,
        &&label_80CD8434,
        &&label_80CD8438,
        &&label_80CD843C,
        &&label_80CD8440,
        &&label_80CD8444,
        &&label_80CD8448,
        &&label_80CD844C,
        &&label_80CD8450,
        &&label_80CD8454,
        &&label_80CD8458,
        &&label_80CD845C,
        &&label_80CD8460,
        &&label_80CD8464,
        &&label_80CD8468,
        &&label_80CD846C,
        &&label_80CD8470,
        &&label_80CD8474,
        &&label_80CD8478,
        &&label_80CD847C,
        &&label_80CD8480,
        &&label_80CD8484,
        &&label_80CD8488,
        &&label_80CD848C,
        &&label_80CD8490,
        &&label_80CD8494,
        &&label_80CD8498,
        &&label_80CD849C,
        &&label_80CD84A0,
        &&label_80CD84A4,
        &&label_80CD84A8,
        &&label_80CD84AC,
        &&label_80CD84B0,
        &&label_80CD84B4,
        &&label_80CD84B8,
        &&label_80CD84BC,
        &&label_80CD84C0,
        &&label_80CD84C4,
        &&label_80CD84C8,
        &&label_80CD84CC,
        &&label_80CD84D0,
        &&label_80CD84D4,
        &&label_80CD84D8,
        &&label_80CD84DC,
        &&label_80CD84E0,
        &&label_80CD84E4,
        &&label_80CD84E8,
        &&label_80CD84EC,
        &&label_80CD84F0,
        &&label_80CD84F4,
        &&label_80CD84F8,
        &&label_80CD84FC,
        &&label_80CD8500,
        &&label_80CD8504,
        &&label_80CD8508,
        &&label_80CD850C,
        &&label_80CD8510,
        &&label_80CD8514,
        &&label_80CD8518,
        &&label_80CD851C,
        &&label_80CD8520,
        &&label_80CD8524,
        &&label_80CD8528,
        &&label_80CD852C,
        &&label_80CD8530,
        &&label_80CD8534,
        &&label_80CD8538,
        &&label_80CD853C,
        &&label_80CD8540,
        &&label_80CD8544,
        &&label_80CD8548,
        &&label_80CD854C,
        &&label_80CD8550,
        &&label_80CD8554,
        &&label_80CD8558,
        &&label_80CD855C,
        &&label_80CD8560,
        &&label_80CD8564,
        &&label_80CD8568,
        &&label_80CD856C,
        &&label_80CD8570,
        &&label_80CD8574,
        &&label_80CD8578,
        &&label_80CD857C,
        &&label_80CD8580,
        &&label_80CD8584,
        &&label_80CD8588,
        &&label_80CD858C,
        &&label_80CD8590,
        &&label_80CD8594,
        &&label_80CD8598,
        &&label_80CD859C,
        &&label_80CD85A0,
        &&label_80CD85A4,
        &&label_80CD85A8,
        &&label_80CD85AC,
        &&label_80CD85B0,
        &&label_80CD85B4,
        &&label_80CD85B8,
        &&label_80CD85BC,
        &&label_80CD85C0,
        &&label_80CD85C4,
        &&label_80CD85C8,
        &&label_80CD85CC,
        &&label_80CD85D0,
        &&label_80CD85D4,
        &&label_80CD85D8,
        &&label_80CD85DC,
        &&label_80CD85E0,
        &&label_80CD85E4,
        &&label_80CD85E8,
        &&label_80CD85EC,
        &&label_80CD85F0,
        &&label_80CD85F4,
        &&label_80CD85F8,
        &&label_80CD85FC,
        &&label_80CD8600,
        &&label_80CD8604,
        &&label_80CD8608,
        &&label_80CD860C,
        &&label_80CD8610,
        &&label_80CD8614,
        &&label_80CD8618,
        &&label_80CD861C,
        &&label_80CD8620,
        &&label_80CD8624,
        &&label_80CD8628,
        &&label_80CD862C,
        &&label_80CD8630,
        &&label_80CD8634,
        &&label_80CD8638,
        &&label_80CD863C,
        &&label_80CD8640,
        &&label_80CD8644,
        &&label_80CD8648,
        &&label_80CD864C,
        &&label_80CD8650,
        &&label_80CD8654,
        &&label_80CD8658,
        &&label_80CD865C,
        &&label_80CD8660,
        &&label_80CD8664,
        &&label_80CD8668,
        &&label_80CD866C,
        &&label_80CD8670,
        &&label_80CD8674,
        &&label_80CD8678,
        &&label_80CD867C,
        &&label_80CD8680,
        &&label_80CD8684,
        &&label_80CD8688,
        &&label_80CD868C,
        &&label_80CD8690,
        &&label_80CD8694,
        &&label_80CD8698,
        &&label_80CD869C,
        &&label_80CD86A0,
        &&label_80CD86A4,
        &&label_80CD86A8,
        &&label_80CD86AC,
        &&label_80CD86B0,
        &&label_80CD86B4,
        &&label_80CD86B8,
        &&label_80CD86BC,
        &&label_80CD86C0,
        &&label_80CD86C4,
        &&label_80CD86C8,
        &&label_80CD86CC,
        &&label_80CD86D0,
        &&label_80CD86D4,
        &&label_80CD86D8,
        &&label_80CD86DC,
        &&label_80CD86E0,
        &&label_80CD86E4,
        &&label_80CD86E8,
        &&label_80CD86EC,
        &&label_80CD86F0,
        &&label_80CD86F4,
        &&label_80CD86F8,
        &&label_80CD86FC,
        &&label_80CD8700,
        &&label_80CD8704,
        &&label_80CD8708,
        &&label_80CD870C,
        &&label_80CD8710,
        &&label_80CD8714,
        &&label_80CD8718,
        &&label_80CD871C,
        &&label_80CD8720,
        &&label_80CD8724,
        &&label_80CD8728,
        &&label_80CD872C,
        &&label_80CD8730,
        &&label_80CD8734,
        &&label_80CD8738,
        &&label_80CD873C,
        &&label_80CD8740,
        &&label_80CD8744,
        &&label_80CD8748,
        &&label_80CD874C,
        &&label_80CD8750,
        &&label_80CD8754,
        &&label_80CD8758,
        &&label_80CD875C,
        &&label_80CD8760,
        &&label_80CD8764,
        &&label_80CD8768,
        &&label_80CD876C,
        &&label_80CD8770,
        &&label_80CD8774,
        &&label_80CD8778,
        &&label_80CD877C,
        &&label_80CD8780,
        &&label_80CD8784,
        &&label_80CD8788,
        &&label_80CD878C,
        &&label_80CD8790,
        &&label_80CD8794,
        &&label_80CD8798,
        &&label_80CD879C,
        &&label_80CD87A0,
        &&label_80CD87A4,
        &&label_80CD87A8,
        &&label_80CD87AC,
        &&label_80CD87B0,
        &&label_80CD87B4,
        &&label_80CD87B8,
        &&label_80CD87BC,
        &&label_80CD87C0,
        &&label_80CD87C4,
        &&label_80CD87C8,
        &&label_80CD87CC,
        &&label_80CD87D0,
        &&label_80CD87D4,
        &&label_80CD87D8,
        &&label_80CD87DC,
        &&label_80CD87E0,
        &&label_80CD87E4,
        &&label_80CD87E8,
        &&label_80CD87EC,
        &&label_80CD87F0,
        &&label_80CD87F4,
        &&label_80CD87F8,
        &&label_80CD87FC,
        &&label_80CD8800,
        &&label_80CD8804,
        &&label_80CD8808,
        &&label_80CD880C,
        &&label_80CD8810,
        &&label_80CD8814,
        &&label_80CD8818,
        &&label_80CD881C,
        &&label_80CD8820,
        &&label_80CD8824,
        &&label_80CD8828,
        &&label_80CD882C,
        &&label_80CD8830,
        &&label_80CD8834,
        &&label_80CD8838,
        &&label_80CD883C,
        &&label_80CD8840,
        &&label_80CD8844,
        &&label_80CD8848,
        &&label_80CD884C,
        &&label_80CD8850,
        &&label_80CD8854,
        &&label_80CD8858,
        &&label_80CD885C,
        &&label_80CD8860,
        &&label_80CD8864,
        &&label_80CD8868,
        &&label_80CD886C,
        &&label_80CD8870,
        &&label_80CD8874,
        &&label_80CD8878,
        &&label_80CD887C,
        &&label_80CD8880,
        &&label_80CD8884,
        &&label_80CD8888,
        &&label_80CD888C,
        &&label_80CD8890,
        &&label_80CD8894,
        &&label_80CD8898,
        &&label_80CD889C,
        &&label_80CD88A0,
        &&label_80CD88A4,
        &&label_80CD88A8,
        &&label_80CD88AC,
        &&label_80CD88B0,
        &&label_80CD88B4,
        &&label_80CD88B8,
        &&label_80CD88BC,
        &&label_80CD88C0,
        &&label_80CD88C4,
        &&label_80CD88C8,
        &&label_80CD88CC,
        &&label_80CD88D0,
        &&label_80CD88D4,
        &&label_80CD88D8,
        &&label_80CD88DC,
        &&label_80CD88E0,
        &&label_80CD88E4,
        &&label_80CD88E8,
        &&label_80CD88EC,
        &&label_80CD88F0,
        &&label_80CD88F4,
        &&label_80CD88F8,
        &&label_80CD88FC,
        &&label_80CD8900,
        &&label_80CD8904,
        &&label_80CD8908,
        &&label_80CD890C,
        &&label_80CD8910,
        &&label_80CD8914,
        &&label_80CD8918,
        &&label_80CD891C,
        &&label_80CD8920,
        &&label_80CD8924,
        &&label_80CD8928,
        &&label_80CD892C,
        &&label_80CD8930,
        &&label_80CD8934,
        &&label_80CD8938,
        &&label_80CD893C,
        &&label_80CD8940,
        &&label_80CD8944,
        &&label_80CD8948,
        &&label_80CD894C,
        &&label_80CD8950,
        &&label_80CD8954,
        &&label_80CD8958,
        &&label_80CD895C,
        &&label_80CD8960,
        &&label_80CD8964,
        &&label_80CD8968,
        &&label_80CD896C,
        &&label_80CD8970,
        &&label_80CD8974,
        &&label_80CD8978,
        &&label_80CD897C,
        &&label_80CD8980,
        &&label_80CD8984,
        &&label_80CD8988,
        &&label_80CD898C,
        &&label_80CD8990,
        &&label_80CD8994,
        &&label_80CD8998,
        &&label_80CD899C,
        &&label_80CD89A0,
        &&label_80CD89A4,
        &&label_80CD89A8,
        &&label_80CD89AC,
        &&label_80CD89B0,
        &&label_80CD89B4,
        &&label_80CD89B8,
        &&label_80CD89BC,
        &&label_80CD89C0,
        &&label_80CD89C4,
        &&label_80CD89C8,
        &&label_80CD89CC,
        &&label_80CD89D0,
        &&label_80CD89D4,
        &&label_80CD89D8,
        &&label_80CD89DC,
        &&label_80CD89E0,
        &&label_80CD89E4,
        &&label_80CD89E8,
        &&label_80CD89EC,
        &&label_80CD89F0,
        &&label_80CD89F4,
        &&label_80CD89F8,
        &&label_80CD89FC,
        &&label_80CD8A00,
        &&label_80CD8A04,
        &&label_80CD8A08,
        &&label_80CD8A0C,
        &&label_80CD8A10,
        &&label_80CD8A14,
        &&label_80CD8A18,
        &&label_80CD8A1C,
        &&label_80CD8A20,
        &&label_80CD8A24,
        &&label_80CD8A28,
        &&label_80CD8A2C,
        &&label_80CD8A30,
        &&label_80CD8A34,
        &&label_80CD8A38,
        &&label_80CD8A3C,
        &&label_80CD8A40,
        &&label_80CD8A44,
        &&label_80CD8A48,
        &&label_80CD8A4C,
        &&label_80CD8A50,
        &&label_80CD8A54,
        &&label_80CD8A58,
        &&label_80CD8A5C,
        &&label_80CD8A60,
        &&label_80CD8A64,
        &&label_80CD8A68,
        &&label_80CD8A6C,
        &&label_80CD8A70,
        &&label_80CD8A74,
        &&label_80CD8A78,
        &&label_80CD8A7C,
        &&label_80CD8A80,
        &&label_80CD8A84,
        &&label_80CD8A88,
        &&label_80CD8A8C,
        &&label_80CD8A90,
        &&label_80CD8A94,
        &&label_80CD8A98,
        &&label_80CD8A9C,
        &&label_80CD8AA0,
        &&label_80CD8AA4,
        &&label_80CD8AA8,
        &&label_80CD8AAC,
        &&label_80CD8AB0,
        &&label_80CD8AB4,
        &&label_80CD8AB8,
        &&label_80CD8ABC,
        &&label_80CD8AC0,
        &&label_80CD8AC4,
        &&label_80CD8AC8,
        &&label_80CD8ACC,
        &&label_80CD8AD0,
        &&label_80CD8AD4,
        &&label_80CD8AD8,
        &&label_80CD8ADC,
        &&label_80CD8AE0,
        &&label_80CD8AE4,
        &&label_80CD8AE8,
        &&label_80CD8AEC,
        &&label_80CD8AF0,
        &&label_80CD8AF4,
        &&label_80CD8AF8,
        &&label_80CD8AFC,
        &&label_80CD8B00,
        &&label_80CD8B04,
        &&label_80CD8B08,
        &&label_80CD8B0C,
        &&label_80CD8B10,
        &&label_80CD8B14,
        &&label_80CD8B18,
        &&label_80CD8B1C,
        &&label_80CD8B20,
        &&label_80CD8B24,
        &&label_80CD8B28,
        &&label_80CD8B2C,
        &&label_80CD8B30,
        &&label_80CD8B34,
        &&label_80CD8B38,
        &&label_80CD8B3C,
        &&label_80CD8B40,
        &&label_80CD8B44,
        &&label_80CD8B48,
        &&label_80CD8B4C,
        &&label_80CD8B50,
        &&label_80CD8B54,
        &&label_80CD8B58,
        &&label_80CD8B5C,
        &&label_80CD8B60,
        &&label_80CD8B64,
        &&label_80CD8B68,
        &&label_80CD8B6C,
        &&label_80CD8B70,
        &&label_80CD8B74,
        &&label_80CD8B78,
        &&label_80CD8B7C,
        &&label_80CD8B80,
        &&label_80CD8B84,
        &&label_80CD8B88,
        &&label_80CD8B8C,
        &&label_80CD8B90,
        &&label_80CD8B94,
        &&label_80CD8B98,
        &&label_80CD8B9C,
        &&label_80CD8BA0,
        &&label_80CD8BA4,
        &&label_80CD8BA8,
        &&label_80CD8BAC,
        &&label_80CD8BB0,
        &&label_80CD8BB4,
        &&label_80CD8BB8,
        &&label_80CD8BBC,
        &&label_80CD8BC0,
        &&label_80CD8BC4,
        &&label_80CD8BC8,
        &&label_80CD8BCC,
        &&label_80CD8BD0,
        &&label_80CD8BD4,
        &&label_80CD8BD8,
        &&label_80CD8BDC,
        &&label_80CD8BE0,
        &&label_80CD8BE4,
        &&label_80CD8BE8,
        &&label_80CD8BEC,
        &&label_80CD8BF0,
        &&label_80CD8BF4,
        &&label_80CD8BF8,
        &&label_80CD8BFC,
        &&label_80CD8C00,
        &&label_80CD8C04,
        &&label_80CD8C08,
        &&label_80CD8C0C,
        &&label_80CD8C10,
        &&label_80CD8C14,
        &&label_80CD8C18,
        &&label_80CD8C1C,
        &&label_80CD8C20,
        &&label_80CD8C24,
        &&label_80CD8C28,
        &&label_80CD8C2C,
        &&label_80CD8C30,
        &&label_80CD8C34,
        &&label_80CD8C38,
        &&label_80CD8C3C,
        &&label_80CD8C40,
        &&label_80CD8C44,
        &&label_80CD8C48,
        &&label_80CD8C4C,
        &&label_80CD8C50,
        &&label_80CD8C54,
        &&label_80CD8C58,
        &&label_80CD8C5C,
        &&label_80CD8C60,
        &&label_80CD8C64,
        &&label_80CD8C68,
        &&label_80CD8C6C,
        &&label_80CD8C70,
        &&label_80CD8C74,
        &&label_80CD8C78,
        &&label_80CD8C7C,
        &&label_80CD8C80,
        &&label_80CD8C84,
        &&label_80CD8C88,
        &&label_80CD8C8C,
        &&label_80CD8C90,
        &&label_80CD8C94,
        &&label_80CD8C98,
        &&label_80CD8C9C,
        &&label_80CD8CA0,
        &&label_80CD8CA4,
        &&label_80CD8CA8,
        &&label_80CD8CAC,
        &&label_80CD8CB0,
        &&label_80CD8CB4,
        &&label_80CD8CB8,
        &&label_80CD8CBC,
        &&label_80CD8CC0,
        &&label_80CD8CC4,
        &&label_80CD8CC8,
        &&label_80CD8CCC,
        &&label_80CD8CD0,
        &&label_80CD8CD4,
        &&label_80CD8CD8,
        &&label_80CD8CDC,
        &&label_80CD8CE0,
        &&label_80CD8CE4,
        &&label_80CD8CE8,
        &&label_80CD8CEC,
        &&label_80CD8CF0,
        &&label_80CD8CF4,
        &&label_80CD8CF8,
        &&label_80CD8CFC,
        &&label_80CD8D00,
        &&label_80CD8D04,
        &&label_80CD8D08,
        &&label_80CD8D0C,
        &&label_80CD8D10,
        &&label_80CD8D14,
        &&label_80CD8D18,
        &&label_80CD8D1C,
        &&label_80CD8D20,
        &&label_80CD8D24,
        &&label_80CD8D28,
        &&label_80CD8D2C,
        &&label_80CD8D30,
        &&label_80CD8D34,
        &&label_80CD8D38,
        &&label_80CD8D3C,
        &&label_80CD8D40,
        &&label_80CD8D44,
        &&label_80CD8D48,
        &&label_80CD8D4C,
        &&label_80CD8D50,
        &&label_80CD8D54,
        &&label_80CD8D58,
        &&label_80CD8D5C,
        &&label_80CD8D60,
        &&label_80CD8D64,
        &&label_80CD8D68,
        &&label_80CD8D6C,
        &&label_80CD8D70,
        &&label_80CD8D74,
        &&label_80CD8D78,
        &&label_80CD8D7C,
        &&label_80CD8D80,
        &&label_80CD8D84,
        &&label_80CD8D88,
        &&label_80CD8D8C,
        &&label_80CD8D90,
        &&label_80CD8D94,
        &&label_80CD8D98,
        &&label_80CD8D9C,
        &&label_80CD8DA0,
        &&label_80CD8DA4,
        &&label_80CD8DA8,
        &&label_80CD8DAC,
        &&label_80CD8DB0,
        &&label_80CD8DB4,
        &&label_80CD8DB8,
        &&label_80CD8DBC,
        &&label_80CD8DC0,
        &&label_80CD8DC4,
        &&label_80CD8DC8,
        &&label_80CD8DCC,
        &&label_80CD8DD0,
        &&label_80CD8DD4,
        &&label_80CD8DD8,
        &&label_80CD8DDC,
        &&label_80CD8DE0,
        &&label_80CD8DE4,
        &&label_80CD8DE8,
        &&label_80CD8DEC,
        &&label_80CD8DF0,
        &&label_80CD8DF4,
        &&label_80CD8DF8,
        &&label_80CD8DFC,
        &&label_80CD8E00,
        &&label_80CD8E04,
        &&label_80CD8E08,
        &&label_80CD8E0C,
        &&label_80CD8E10,
        &&label_80CD8E14,
        &&label_80CD8E18,
        &&label_80CD8E1C,
        &&label_80CD8E20,
        &&label_80CD8E24,
        &&label_80CD8E28,
        &&label_80CD8E2C,
        &&label_80CD8E30,
        &&label_80CD8E34,
        &&label_80CD8E38,
        &&label_80CD8E3C,
        &&label_80CD8E40,
        &&label_80CD8E44,
        &&label_80CD8E48,
        &&label_80CD8E4C,
        &&label_80CD8E50,
        &&label_80CD8E54,
        &&label_80CD8E58,
        &&label_80CD8E5C,
        &&label_80CD8E60,
        &&label_80CD8E64,
        &&label_80CD8E68,
        &&label_80CD8E6C,
        &&label_80CD8E70,
        &&label_80CD8E74,
        &&label_80CD8E78,
        &&label_80CD8E7C,
        &&label_80CD8E80,
        &&label_80CD8E84,
        &&label_80CD8E88,
        &&label_80CD8E8C,
        &&label_80CD8E90,
        &&label_80CD8E94,
        &&label_80CD8E98,
        &&label_80CD8E9C,
        &&label_80CD8EA0,
        &&label_80CD8EA4,
        &&label_80CD8EA8,
        &&label_80CD8EAC,
        &&label_80CD8EB0,
        &&label_80CD8EB4,
        &&label_80CD8EB8,
        &&label_80CD8EBC,
        &&label_80CD8EC0,
        &&label_80CD8EC4,
        &&label_80CD8EC8,
        &&label_80CD8ECC,
        &&label_80CD8ED0,
        &&label_80CD8ED4,
        &&label_80CD8ED8,
        &&label_80CD8EDC,
        &&label_80CD8EE0,
        &&label_80CD8EE4,
        &&label_80CD8EE8,
        &&label_80CD8EEC,
        &&label_80CD8EF0,
        &&label_80CD8EF4,
        &&label_80CD8EF8,
        &&label_80CD8EFC,
        &&label_80CD8F00,
        &&label_80CD8F04,
        &&label_80CD8F08,
        &&label_80CD8F0C,
        &&label_80CD8F10,
        &&label_80CD8F14,
        &&label_80CD8F18,
        &&label_80CD8F1C,
        &&label_80CD8F20,
        &&label_80CD8F24,
        &&label_80CD8F28,
        &&label_80CD8F2C,
        &&label_80CD8F30,
        &&label_80CD8F34,
        &&label_80CD8F38,
        &&label_80CD8F3C,
        &&label_80CD8F40,
        &&label_80CD8F44,
        &&label_80CD8F48,
        &&label_80CD8F4C,
        &&label_80CD8F50,
        &&label_80CD8F54,
        &&label_80CD8F58,
        &&label_80CD8F5C,
        &&label_80CD8F60,
        &&label_80CD8F64,
        &&label_80CD8F68,
        &&label_80CD8F6C,
        &&label_80CD8F70,
        &&label_80CD8F74,
        &&label_80CD8F78,
        &&label_80CD8F7C,
        &&label_80CD8F80,
        &&label_80CD8F84,
        &&label_80CD8F88,
        &&label_80CD8F8C,
        &&label_80CD8F90,
        &&label_80CD8F94,
        &&label_80CD8F98,
        &&label_80CD8F9C,
        &&label_80CD8FA0,
        &&label_80CD8FA4,
        &&label_80CD8FA8,
        &&label_80CD8FAC,
        &&label_80CD8FB0,
        &&label_80CD8FB4,
        &&label_80CD8FB8,
        &&label_80CD8FBC,
        &&label_80CD8FC0,
        &&label_80CD8FC4,
        &&label_80CD8FC8,
        &&label_80CD8FCC,
        &&label_80CD8FD0,
        &&label_80CD8FD4,
        &&label_80CD8FD8,
        &&label_80CD8FDC,
        &&label_80CD8FE0,
        &&label_80CD8FE4,
        &&label_80CD8FE8,
        &&label_80CD8FEC,
        &&label_80CD8FF0,
        &&label_80CD8FF4,
        &&label_80CD8FF8,
        &&label_80CD8FFC,
        &&label_80CD9000,
        &&label_80CD9004,
        &&label_80CD9008,
        &&label_80CD900C,
        &&label_80CD9010,
        &&label_80CD9014,
        &&label_80CD9018,
        &&label_80CD901C,
        &&label_80CD9020,
        &&label_80CD9024,
        &&label_80CD9028,
        &&label_80CD902C,
        &&label_80CD9030,
        &&label_80CD9034,
        &&label_80CD9038,
        &&label_80CD903C,
        &&label_80CD9040,
        &&label_80CD9044,
        &&label_80CD9048,
        &&label_80CD904C,
        &&label_80CD9050,
        &&label_80CD9054,
        &&label_80CD9058,
        &&label_80CD905C,
        &&label_80CD9060,
        &&label_80CD9064,
        &&label_80CD9068,
        &&label_80CD906C,
        &&label_80CD9070,
        &&label_80CD9074,
        &&label_80CD9078,
        &&label_80CD907C,
        &&label_80CD9080,
        &&label_80CD9084,
        &&label_80CD9088,
        &&label_80CD908C,
        &&label_80CD9090,
        &&label_80CD9094,
        &&label_80CD9098,
        &&label_80CD909C,
        &&label_80CD90A0,
        &&label_80CD90A4,
        &&label_80CD90A8,
        &&label_80CD90AC,
        &&label_80CD90B0,
        &&label_80CD90B4,
        &&label_80CD90B8,
        &&label_80CD90BC,
        &&label_80CD90C0,
        &&label_80CD90C4,
        &&label_80CD90C8,
        &&label_80CD90CC,
        &&label_80CD90D0,
        &&label_80CD90D4,
        &&label_80CD90D8,
        &&label_80CD90DC,
        &&label_80CD90E0,
        &&label_80CD90E4,
        &&label_80CD90E8,
        &&label_80CD90EC,
        &&label_80CD90F0,
        &&label_80CD90F4,
        &&label_80CD90F8,
        &&label_80CD90FC,
        &&label_80CD9100,
        &&label_80CD9104,
        &&label_80CD9108,
        &&label_80CD910C,
        &&label_80CD9110,
        &&label_80CD9114,
        &&label_80CD9118,
        &&label_80CD911C,
        &&label_80CD9120,
        &&label_80CD9124,
        &&label_80CD9128,
        &&label_80CD912C,
        &&label_80CD9130,
        &&label_80CD9134,
        &&label_80CD9138,
        &&label_80CD913C,
        &&label_80CD9140,
        &&label_80CD9144,
        &&label_80CD9148,
        &&label_80CD914C,
        &&label_80CD9150,
        &&label_80CD9154,
        &&label_80CD9158,
        &&label_80CD915C,
        &&label_80CD9160,
        &&label_80CD9164,
        &&label_80CD9168,
        &&label_80CD916C,
        &&label_80CD9170,
        &&label_80CD9174,
        &&label_80CD9178,
        &&label_80CD917C,
        &&label_80CD9180,
        &&label_80CD9184,
        &&label_80CD9188,
        &&label_80CD918C,
        &&label_80CD9190,
        &&label_80CD9194,
        &&label_80CD9198,
        &&label_80CD919C,
        &&label_80CD91A0,
        &&label_80CD91A4,
        &&label_80CD91A8,
        &&label_80CD91AC,
        &&label_80CD91B0,
        &&label_80CD91B4,
        &&label_80CD91B8,
        &&label_80CD91BC,
        &&label_80CD91C0,
        &&label_80CD91C4,
        &&label_80CD91C8,
        &&label_80CD91CC,
        &&label_80CD91D0,
        &&label_80CD91D4,
        &&label_80CD91D8,
        &&label_80CD91DC,
        &&label_80CD91E0,
        &&label_80CD91E4,
        &&label_80CD91E8,
        &&label_80CD91EC,
        &&label_80CD91F0,
        &&label_80CD91F4,
        &&label_80CD91F8,
        &&label_80CD91FC,
        &&label_80CD9200,
        &&label_80CD9204,
        &&label_80CD9208,
        &&label_80CD920C,
        &&label_80CD9210,
        &&label_80CD9214,
        &&label_80CD9218,
        &&label_80CD921C,
        &&label_80CD9220,
        &&label_80CD9224,
        &&label_80CD9228,
        &&label_80CD922C,
        &&label_80CD9230,
        &&label_80CD9234,
        &&label_80CD9238,
        &&label_80CD923C,
        &&label_80CD9240,
        &&label_80CD9244,
        &&label_80CD9248,
        &&label_80CD924C,
        &&label_80CD9250,
        &&label_80CD9254,
        &&label_80CD9258,
        &&label_80CD925C,
        &&label_80CD9260,
        &&label_80CD9264,
        &&label_80CD9268,
        &&label_80CD926C,
        &&label_80CD9270,
        &&label_80CD9274,
        &&label_80CD9278,
        &&label_80CD927C,
        &&label_80CD9280,
        &&label_80CD9284,
        &&label_80CD9288,
        &&label_80CD928C,
        &&label_80CD9290,
        &&label_80CD9294,
        &&label_80CD9298,
        &&label_80CD929C,
        &&label_80CD92A0,
        &&label_80CD92A4,
        &&label_80CD92A8,
        &&label_80CD92AC,
        &&label_80CD92B0,
        &&label_80CD92B4,
        &&label_80CD92B8,
        &&label_80CD92BC,
        &&label_80CD92C0,
        &&label_80CD92C4,
        &&label_80CD92C8,
        &&label_80CD92CC,
        &&label_80CD92D0,
        &&label_80CD92D4,
        &&label_80CD92D8,
        &&label_80CD92DC,
        &&label_80CD92E0,
        &&label_80CD92E4,
        &&label_80CD92E8,
        &&label_80CD92EC,
        &&label_80CD92F0,
        &&label_80CD92F4,
        &&label_80CD92F8,
        &&label_80CD92FC,
        &&label_80CD9300,
        &&label_80CD9304,
        &&label_80CD9308,
        &&label_80CD930C,
        &&label_80CD9310,
        &&label_80CD9314,
        &&label_80CD9318,
        &&label_80CD931C,
        &&label_80CD9320,
        &&label_80CD9324,
        &&label_80CD9328,
        &&label_80CD932C,
        &&label_80CD9330,
        &&label_80CD9334,
        &&label_80CD9338,
        &&label_80CD933C,
        &&label_80CD9340,
        &&label_80CD9344,
        &&label_80CD9348,
        &&label_80CD934C,
        &&label_80CD9350,
        &&label_80CD9354,
        &&label_80CD9358,
        &&label_80CD935C,
        &&label_80CD9360,
        &&label_80CD9364,
        &&label_80CD9368,
        &&label_80CD936C,
        &&label_80CD9370,
        &&label_80CD9374,
        &&label_80CD9378,
        &&label_80CD937C,
        &&label_80CD9380,
        &&label_80CD9384,
        &&label_80CD9388,
        &&label_80CD938C,
        &&label_80CD9390,
        &&label_80CD9394,
        &&label_80CD9398,
        &&label_80CD939C,
        &&label_80CD93A0,
        &&label_80CD93A4,
        &&label_80CD93A8,
        &&label_80CD93AC,
        &&label_80CD93B0,
        &&label_80CD93B4,
        &&label_80CD93B8,
        &&label_80CD93BC,
        &&label_80CD93C0,
        &&label_80CD93C4,
        &&label_80CD93C8,
        &&label_80CD93CC,
        &&label_80CD93D0,
        &&label_80CD93D4,
        &&label_80CD93D8,
        &&label_80CD93DC,
        &&label_80CD93E0,
        &&label_80CD93E4,
        &&label_80CD93E8,
        &&label_80CD93EC,
        &&label_80CD93F0,
        &&label_80CD93F4,
        &&label_80CD93F8,
        &&label_80CD93FC,
        &&label_80CD9400,
        &&label_80CD9404,
        &&label_80CD9408,
        &&label_80CD940C,
        &&label_80CD9410,
        &&label_80CD9414,
        &&label_80CD9418,
        &&label_80CD941C,
        &&label_80CD9420,
        &&label_80CD9424,
        &&label_80CD9428,
        &&label_80CD942C,
        &&label_80CD9430,
        &&label_80CD9434,
        &&label_80CD9438,
        &&label_80CD943C,
        &&label_80CD9440,
        &&label_80CD9444,
        &&label_80CD9448,
        &&label_80CD944C,
        &&label_80CD9450,
        &&label_80CD9454,
        &&label_80CD9458,
        &&label_80CD945C,
        &&label_80CD9460,
        &&label_80CD9464,
        &&label_80CD9468,
        &&label_80CD946C,
        &&label_80CD9470,
        &&label_80CD9474,
        &&label_80CD9478,
        &&label_80CD947C,
        &&label_80CD9480,
        &&label_80CD9484,
        &&label_80CD9488,
        &&label_80CD948C,
        &&label_80CD9490,
        &&label_80CD9494,
        &&label_80CD9498,
        &&label_80CD949C,
        &&label_80CD94A0,
        &&label_80CD94A4,
        &&label_80CD94A8,
        &&label_80CD94AC,
        &&label_80CD94B0,
        &&label_80CD94B4,
        &&label_80CD94B8,
        &&label_80CD94BC,
        &&label_80CD94C0,
        &&label_80CD94C4,
        &&label_80CD94C8,
        &&label_80CD94CC,
        &&label_80CD94D0,
        &&label_80CD94D4,
        &&label_80CD94D8,
        &&label_80CD94DC,
        &&label_80CD94E0,
        &&label_80CD94E4,
        &&label_80CD94E8,
        &&label_80CD94EC,
        &&label_80CD94F0,
        &&label_80CD94F4,
        &&label_80CD94F8,
        &&label_80CD94FC,
        &&label_80CD9500,
        &&label_80CD9504,
        &&label_80CD9508,
        &&label_80CD950C,
        &&label_80CD9510,
        &&label_80CD9514,
        &&label_80CD9518,
        &&label_80CD951C,
        &&label_80CD9520,
        &&label_80CD9524,
        &&label_80CD9528,
        &&label_80CD952C,
        &&label_80CD9530,
        &&label_80CD9534,
        &&label_80CD9538,
        &&label_80CD953C,
        &&label_80CD9540,
        &&label_80CD9544,
        &&label_80CD9548,
        &&label_80CD954C,
        &&label_80CD9550,
        &&label_80CD9554,
        &&label_80CD9558,
        &&label_80CD955C,
        &&label_80CD9560,
        &&label_80CD9564,
        &&label_80CD9568,
        &&label_80CD956C,
        &&label_80CD9570,
        &&label_80CD9574,
        &&label_80CD9578,
        &&label_80CD957C,
        &&label_80CD9580,
        &&label_80CD9584,
        &&label_80CD9588,
        &&label_80CD958C,
        &&label_80CD9590,
        &&label_80CD9594,
        &&label_80CD9598,
        &&label_80CD959C,
        &&label_80CD95A0,
        &&label_80CD95A4,
        &&label_80CD95A8,
        &&label_80CD95AC,
        &&label_80CD95B0,
        &&label_80CD95B4,
        &&label_80CD95B8,
        &&label_80CD95BC,
        &&label_80CD95C0,
        &&label_80CD95C4,
        &&label_80CD95C8,
        &&label_80CD95CC,
        &&label_80CD95D0,
        &&label_80CD95D4,
        &&label_80CD95D8,
        &&label_80CD95DC,
        &&label_80CD95E0,
        &&label_80CD95E4,
        &&label_80CD95E8,
        &&label_80CD95EC,
        &&label_80CD95F0,
        &&label_80CD95F4,
        &&label_80CD95F8,
        &&label_80CD95FC,
        &&label_80CD9600,
        &&label_80CD9604,
        &&label_80CD9608,
        &&label_80CD960C,
        &&label_80CD9610,
        &&label_80CD9614,
        &&label_80CD9618,
        &&label_80CD961C,
        &&label_80CD9620,
        &&label_80CD9624,
        &&label_80CD9628,
        &&label_80CD962C,
        &&label_80CD9630,
        &&label_80CD9634,
        &&label_80CD9638,
        &&label_80CD963C,
        &&label_80CD9640,
        &&label_80CD9644,
        &&label_80CD9648,
        &&label_80CD964C,
        &&label_80CD9650,
        &&label_80CD9654,
        &&label_80CD9658,
        &&label_80CD965C,
        &&label_80CD9660,
        &&label_80CD9664,
        &&label_80CD9668,
        &&label_80CD966C,
        &&label_80CD9670,
        &&label_80CD9674,
        &&label_80CD9678,
        &&label_80CD967C,
        &&label_80CD9680,
        &&label_80CD9684,
        &&label_80CD9688,
        &&label_80CD968C,
        &&label_80CD9690,
        &&label_80CD9694,
        &&label_80CD9698,
        &&label_80CD969C,
        &&label_80CD96A0,
        &&label_80CD96A4,
        &&label_80CD96A8,
        &&label_80CD96AC,
        &&label_80CD96B0,
        &&label_80CD96B4,
        &&label_80CD96B8,
        &&label_80CD96BC,
        &&label_80CD96C0,
        &&label_80CD96C4,
        &&label_80CD96C8,
        &&label_80CD96CC,
        &&label_80CD96D0,
        &&label_80CD96D4,
        &&label_80CD96D8,
        &&label_80CD96DC,
        &&label_80CD96E0,
        &&label_80CD96E4,
        &&label_80CD96E8,
        &&label_80CD96EC,
        &&label_80CD96F0,
        &&label_80CD96F4,
        &&label_80CD96F8,
        &&label_80CD96FC,
        &&label_80CD9700,
        &&label_80CD9704,
        &&label_80CD9708,
        &&label_80CD970C,
        &&label_80CD9710,
        &&label_80CD9714,
        &&label_80CD9718,
        &&label_80CD971C,
        &&label_80CD9720,
        &&label_80CD9724,
        &&label_80CD9728,
        &&label_80CD972C,
        &&label_80CD9730,
        &&label_80CD9734,
        &&label_80CD9738,
        &&label_80CD973C,
        &&label_80CD9740,
        &&label_80CD9744,
        &&label_80CD9748,
        &&label_80CD974C,
        &&label_80CD9750,
        &&label_80CD9754,
        &&label_80CD9758,
        &&label_80CD975C,
        &&label_80CD9760,
        &&label_80CD9764,
        &&label_80CD9768,
        &&label_80CD976C,
        &&label_80CD9770,
        &&label_80CD9774,
        &&label_80CD9778,
        &&label_80CD977C,
        &&label_80CD9780,
        &&label_80CD9784,
        &&label_80CD9788,
        &&label_80CD978C,
        &&label_80CD9790,
        &&label_80CD9794,
        &&label_80CD9798,
        &&label_80CD979C,
        &&label_80CD97A0,
        &&label_80CD97A4,
        &&label_80CD97A8,
        &&label_80CD97AC,
        &&label_80CD97B0,
        &&label_80CD97B4,
        &&label_80CD97B8,
        &&label_80CD97BC,
        &&label_80CD97C0,
        &&label_80CD97C4,
        &&label_80CD97C8,
        &&label_80CD97CC,
        &&label_80CD97D0,
        &&label_80CD97D4,
        &&label_80CD97D8,
        &&label_80CD97DC,
        &&label_80CD97E0,
        &&label_80CD97E4,
        &&label_80CD97E8,
        &&label_80CD97EC,
        &&label_80CD97F0,
        &&label_80CD97F4,
        &&label_80CD97F8,
        &&label_80CD97FC,
        &&label_80CD9800,
        &&label_80CD9804,
        &&label_80CD9808,
        &&label_80CD980C,
        &&label_80CD9810,
        &&label_80CD9814,
        &&label_80CD9818,
        &&label_80CD981C,
        &&label_80CD9820,
        &&label_80CD9824,
        &&label_80CD9828,
        &&label_80CD982C,
        &&label_80CD9830,
        &&label_80CD9834,
        &&label_80CD9838,
        &&label_80CD983C,
        &&label_80CD9840,
        &&label_80CD9844,
        &&label_80CD9848,
        &&label_80CD984C,
        &&label_80CD9850,
        &&label_80CD9854,
        &&label_80CD9858,
        &&label_80CD985C,
        &&label_80CD9860,
        &&label_80CD9864,
        &&label_80CD9868,
        &&label_80CD986C,
        &&label_80CD9870,
        &&label_80CD9874,
        &&label_80CD9878,
        &&label_80CD987C,
        &&label_80CD9880,
        &&label_80CD9884,
        &&label_80CD9888,
        &&label_80CD988C,
        &&label_80CD9890,
        &&label_80CD9894,
        &&label_80CD9898,
        &&label_80CD989C,
        &&label_80CD98A0,
        &&label_80CD98A4,
        &&label_80CD98A8,
        &&label_80CD98AC,
        &&label_80CD98B0,
        &&label_80CD98B4,
        &&label_80CD98B8,
        &&label_80CD98BC,
        &&label_80CD98C0,
        &&label_80CD98C4,
        &&label_80CD98C8,
        &&label_80CD98CC,
        &&label_80CD98D0,
        &&label_80CD98D4,
        &&label_80CD98D8,
        &&label_80CD98DC,
        &&label_80CD98E0,
        &&label_80CD98E4,
        &&label_80CD98E8,
        &&label_80CD98EC,
        &&label_80CD98F0,
        &&label_80CD98F4,
        &&label_80CD98F8,
        &&label_80CD98FC,
        &&label_80CD9900,
        &&label_80CD9904,
        &&label_80CD9908,
        &&label_80CD990C,
        &&label_80CD9910,
        &&label_80CD9914,
        &&label_80CD9918,
        &&label_80CD991C,
        &&label_80CD9920,
        &&label_80CD9924,
        &&label_80CD9928,
        &&label_80CD992C,
        &&label_80CD9930,
        &&label_80CD9934,
        &&label_80CD9938,
        &&label_80CD993C,
        &&label_80CD9940,
        &&label_80CD9944,
        &&label_80CD9948,
        &&label_80CD994C,
        &&label_80CD9950,
        &&label_80CD9954,
        &&label_80CD9958,
        &&label_80CD995C,
        &&label_80CD9960,
        &&label_80CD9964,
        &&label_80CD9968,
        &&label_80CD996C,
        &&label_80CD9970,
        &&label_80CD9974,
        &&label_80CD9978,
        &&label_80CD997C,
        &&label_80CD9980,
        &&label_80CD9984,
        &&label_80CD9988,
        &&label_80CD998C,
        &&label_80CD9990,
        &&label_80CD9994,
        &&label_80CD9998,
        &&label_80CD999C,
        &&label_80CD99A0,
        &&label_80CD99A4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CD7E20u && pc <= 0x80CD99A4u && ((pc - 0x80CD7E20u) & 3u) == 0u)
            goto *pc_table_80CD7E20[(pc - 0x80CD7E20u) >> 2];
    }
    return;
label_80CD7E20:
    ctx->pc = 0x80CD7E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD7E20: stwu     r1, -48(r1)
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
label_80CD7E24:
    ctx->pc = 0x80CD7E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD7E24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD7E28:
    ctx->pc = 0x80CD7E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD7E28: stw     r0, 52(r1)
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
label_80CD7E2C:
    ctx->pc = 0x80CD7E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD7E2C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD7E2Cu)) return;
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
label_80CD7E30:
    ctx->pc = 0x80CD7E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD7E30: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD7E30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CD7E30u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD7E34:
    ctx->pc = 0x80CD7E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E34u)) return;
    // 80CD7E34: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80CD7E38:
    ctx->pc = 0x80CD7E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E38u)) return;
    // 80CD7E38: bl      0x80006DD4
    {
            ctx->lr = 0x80CD7E3Cu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80CD7E3C:
    ctx->pc = 0x80CD7E3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7E3C: cmpwi   r3, 2
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

label_80CD7E40:
    ctx->pc = 0x80CD7E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E40u)) return;
    // 80CD7E40: bc    12, 2, 0x80CD8794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8794;
        }
    }

label_80CD7E44:
    ctx->pc = 0x80CD7E44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD7E44: bc    4, 0, 0x80CD7E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD7E58;
        }
    }

label_80CD7E48:
    ctx->pc = 0x80CD7E48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7E48: cmpwi   r3, 0
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

label_80CD7E4C:
    ctx->pc = 0x80CD7E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E4Cu)) return;
    // 80CD7E4C: bc    12, 2, 0x80CD87E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD87E4;
        }
    }

label_80CD7E50:
    ctx->pc = 0x80CD7E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD7E50: bc    4, 0, 0x80CD7E60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD7E60;
        }
    }

label_80CD7E54:
    ctx->pc = 0x80CD7E54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD7E54: b       0x80CD87E4
    {
            goto label_80CD87E4;
    }

label_80CD7E58:
    ctx->pc = 0x80CD7E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7E58: cmpwi   r3, 4
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

label_80CD7E5C:
    ctx->pc = 0x80CD7E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E5Cu)) return;
    // 80CD7E5C: b       0x80CD87E4
    {
            goto label_80CD87E4;
    }

label_80CD7E60:
    ctx->pc = 0x80CD7E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD7E60: bl      0x8045DE7C
    {
            ctx->lr = 0x80CD7E64u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80CD7E64:
    ctx->pc = 0x80CD7E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD7E64: bl      0x80460A60
    {
            ctx->lr = 0x80CD7E68u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80CD7E68:
    ctx->pc = 0x80CD7E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD7E68: bl      0x80460A24
    {
            ctx->lr = 0x80CD7E6Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80CD7E6C:
    ctx->pc = 0x80CD7E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7E6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CD7E70:
    ctx->pc = 0x80CD7E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E70u)) return;
    // 80CD7E70: bl      0x8045F7C8
    {
            ctx->lr = 0x80CD7E74u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CD7E74:
    ctx->pc = 0x80CD7E74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7E74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7E78:
    ctx->pc = 0x80CD7E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E78u)) return;
    // 80CD7E78: bl      0x8045EC10
    {
            ctx->lr = 0x80CD7E7Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CD7E7C:
    ctx->pc = 0x80CD7E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7E7C: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80CD7E80:
    ctx->pc = 0x80CD7E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E80u)) return;
    // 80CD7E80: bl      0x80406090
    {
            ctx->lr = 0x80CD7E84u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80CD7E84:
    ctx->pc = 0x80CD7E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7E84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7E88:
    ctx->pc = 0x80CD7E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E88u)) return;
    // 80CD7E88: bl      0x8045F220
    {
            ctx->lr = 0x80CD7E8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7E8C:
    ctx->pc = 0x80CD7E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD7E8C: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD7E90:
    ctx->pc = 0x80CD7E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E90u)) return;
    // 80CD7E90: addi    r4, r4, 9200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9200);

label_80CD7E94:
    ctx->pc = 0x80CD7E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD7E94: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD7E94u)) return;
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
label_80CD7E98:
    ctx->pc = 0x80CD7E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E98u)) return;
    // 80CD7E98: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD7E9C:
    ctx->pc = 0x80CD7E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7E9Cu)) return;
    // 80CD7E9C: addi    r4, r4, 9204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9204);

label_80CD7EA0:
    ctx->pc = 0x80CD7EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD7EA0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD7EA0u)) return;
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
label_80CD7EA4:
    ctx->pc = 0x80CD7EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EA4u)) return;
    // 80CD7EA4: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD7EA8:
    ctx->pc = 0x80CD7EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EA8u)) return;
    // 80CD7EA8: addi    r4, r4, 9208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9208);

label_80CD7EAC:
    ctx->pc = 0x80CD7EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD7EAC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD7EACu)) return;
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
label_80CD7EB0:
    ctx->pc = 0x80CD7EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EB0u)) return;
    // 80CD7EB0: bl      0x8045EF2C
    {
            ctx->lr = 0x80CD7EB4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CD7EB4:
    ctx->pc = 0x80CD7EB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7EB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7EB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7EB8:
    ctx->pc = 0x80CD7EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EB8u)) return;
    // 80CD7EB8: bl      0x8045F220
    {
            ctx->lr = 0x80CD7EBCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7EBC:
    ctx->pc = 0x80CD7EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD7EBC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CD7EC0:
    ctx->pc = 0x80CD7EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EC0u)) return;
    // 80CD7EC0: addi    r4, r5, -813
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-813);

label_80CD7EC4:
    ctx->pc = 0x80CD7EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EC4u)) return;
    // 80CD7EC4: addi    r5, r5, -31085
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31085);

label_80CD7EC8:
    ctx->pc = 0x80CD7EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EC8u)) return;
    // 80CD7EC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CD7ECC:
    ctx->pc = 0x80CD7ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7ECCu)) return;
    // 80CD7ECC: bl      0x8045EEA8
    {
            ctx->lr = 0x80CD7ED0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CD7ED0:
    ctx->pc = 0x80CD7ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7ED0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7ED4:
    ctx->pc = 0x80CD7ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7ED4u)) return;
    // 80CD7ED4: bl      0x8045F220
    {
            ctx->lr = 0x80CD7ED8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7ED8:
    ctx->pc = 0x80CD7ED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7ED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD7ED8: lwz     r27, 32(r3)
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
label_80CD7EDC:
    ctx->pc = 0x80CD7EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EDCu)) return;
    // 80CD7EDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7EE0:
    ctx->pc = 0x80CD7EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EE0u)) return;
    // 80CD7EE0: bl      0x8045F220
    {
            ctx->lr = 0x80CD7EE4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7EE4:
    ctx->pc = 0x80CD7EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD7EE4: lwz     r3, 32(r3)
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
label_80CD7EE8:
    ctx->pc = 0x80CD7EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD7EE8: lwz     r0, 24(r3)
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
label_80CD7EEC:
    ctx->pc = 0x80CD7EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EECu)) return;
    // 80CD7EEC: subfic  r28, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[28] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80CD7EF0:
    ctx->pc = 0x80CD7EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EF0u)) return;
    // 80CD7EF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7EF4:
    ctx->pc = 0x80CD7EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EF4u)) return;
    // 80CD7EF4: bl      0x8045F220
    {
            ctx->lr = 0x80CD7EF8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7EF8:
    ctx->pc = 0x80CD7EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD7EF8: lwz     r29, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD7EFC:
    ctx->pc = 0x80CD7EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7EFCu)) return;
    // 80CD7EFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7F00:
    ctx->pc = 0x80CD7F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F00u)) return;
    // 80CD7F00: bl      0x8045F220
    {
            ctx->lr = 0x80CD7F04u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7F04:
    ctx->pc = 0x80CD7F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD7F04: lwz     r31, 32(r3)
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
label_80CD7F08:
    ctx->pc = 0x80CD7F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F08u)) return;
    // 80CD7F08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7F0C:
    ctx->pc = 0x80CD7F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F0Cu)) return;
    // 80CD7F0C: bl      0x8045F220
    {
            ctx->lr = 0x80CD7F10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7F10:
    ctx->pc = 0x80CD7F10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7F10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD7F10: lwz     r30, 32(r3)
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
label_80CD7F14:
    ctx->pc = 0x80CD7F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F14u)) return;
    // 80CD7F14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7F18:
    ctx->pc = 0x80CD7F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F18u)) return;
    // 80CD7F18: bl      0x8045F220
    {
            ctx->lr = 0x80CD7F1Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7F1C:
    ctx->pc = 0x80CD7F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD7F1C: lwz     r5, 32(r3)
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
label_80CD7F20:
    ctx->pc = 0x80CD7F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F20u)) return;
    // 80CD7F20: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD7F24:
    ctx->pc = 0x80CD7F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F24u)) return;
    // 80CD7F24: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD7F28:
    ctx->pc = 0x80CD7F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F28u)) return;
    // 80CD7F28: lis     r4, -32562
    ctx->gpr[4] = ((u32)(s32)(-32562) << 16);

label_80CD7F2C:
    ctx->pc = 0x80CD7F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F2Cu)) return;
    // 80CD7F2C: addi    r4, r4, -28256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28256);

label_80CD7F30:
    ctx->pc = 0x80CD7F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD7F30: lfs     f1, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD7F30u)) return;
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
label_80CD7F34:
    ctx->pc = 0x80CD7F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD7F34: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD7F34u)) return;
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
label_80CD7F38:
    ctx->pc = 0x80CD7F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD7F38: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CD7F38u)) return;
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
label_80CD7F3C:
    ctx->pc = 0x80CD7F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD7F3C: lwz     r5, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD7F40:
    ctx->pc = 0x80CD7F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F40u)) return;
    // 80CD7F40: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CD7F44:
    ctx->pc = 0x80CD7F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD7F44: lwz     r7, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD7F48:
    ctx->pc = 0x80CD7F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F48u)) return;
    // 80CD7F48: bl      0x8045F0B0
    {
            ctx->lr = 0x80CD7F4Cu;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80CD7F4C:
    ctx->pc = 0x80CD7F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80CD7F4C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD7F50:
    ctx->pc = 0x80CD7F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F50u)) return;
    // 80CD7F50: lis     r4, -32677
    ctx->gpr[4] = ((u32)(s32)(-32677) << 16);

label_80CD7F54:
    ctx->pc = 0x80CD7F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F54u)) return;
    // 80CD7F54: addi    r4, r4, -3644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3644);

label_80CD7F58:
    ctx->pc = 0x80CD7F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F58u)) return;
    // 80CD7F58: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD7F5C:
    ctx->pc = 0x80CD7F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F5Cu)) return;
    // 80CD7F5C: addi    r5, r5, 9212
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9212);

label_80CD7F60:
    ctx->pc = 0x80CD7F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD7F60: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD7F60u)) return;
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
label_80CD7F64:
    ctx->pc = 0x80CD7F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F64u)) return;
    // 80CD7F64: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD7F68:
    ctx->pc = 0x80CD7F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F68u)) return;
    // 80CD7F68: addi    r5, r5, 9216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9216);

label_80CD7F6C:
    ctx->pc = 0x80CD7F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD7F6C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD7F6Cu)) return;
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
label_80CD7F70:
    ctx->pc = 0x80CD7F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F70u)) return;
    // 80CD7F70: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD7F74:
    ctx->pc = 0x80CD7F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F74u)) return;
    // 80CD7F74: addi    r5, r5, 9220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9220);

label_80CD7F78:
    ctx->pc = 0x80CD7F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD7F78: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD7F78u)) return;
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
label_80CD7F7C:
    ctx->pc = 0x80CD7F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F7Cu)) return;
    // 80CD7F7C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80CD7F80:
    ctx->pc = 0x80CD7F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F80u)) return;
    // 80CD7F80: addi    r5, r7, -649
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-649);

label_80CD7F84:
    ctx->pc = 0x80CD7F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F84u)) return;
    // 80CD7F84: addi    r6, r7, -6751
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-6751);

label_80CD7F88:
    ctx->pc = 0x80CD7F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F88u)) return;
    // 80CD7F88: addi    r7, r7, -490
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-490);

label_80CD7F8C:
    ctx->pc = 0x80CD7F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F8Cu)) return;
    // 80CD7F8C: bl      0x8045ED84
    {
            ctx->lr = 0x80CD7F90u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80CD7F90:
    ctx->pc = 0x80CD7F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7F90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80CD7F90: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD7F94:
    ctx->pc = 0x80CD7F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F94u)) return;
    // 80CD7F94: addi    r3, r3, 9224
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9224);

label_80CD7F98:
    ctx->pc = 0x80CD7F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD7F98: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD7F98u)) return;
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
label_80CD7F9C:
    ctx->pc = 0x80CD7F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7F9Cu)) return;
    // 80CD7F9C: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD7FA0:
    ctx->pc = 0x80CD7FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FA0u)) return;
    // 80CD7FA0: addi    r3, r3, 9228
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9228);

label_80CD7FA4:
    ctx->pc = 0x80CD7FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD7FA4: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD7FA4u)) return;
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
label_80CD7FA8:
    ctx->pc = 0x80CD7FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FA8u)) return;
    // 80CD7FA8: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD7FAC:
    ctx->pc = 0x80CD7FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FACu)) return;
    // 80CD7FAC: addi    r3, r3, 9232
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9232);

label_80CD7FB0:
    ctx->pc = 0x80CD7FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD7FB0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD7FB0u)) return;
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
label_80CD7FB4:
    ctx->pc = 0x80CD7FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FB4u)) return;
    // 80CD7FB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7FB8:
    ctx->pc = 0x80CD7FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FB8u)) return;
    // 80CD7FB8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80CD7FBC:
    ctx->pc = 0x80CD7FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FBCu)) return;
    // 80CD7FBC: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_80CD7FC0:
    ctx->pc = 0x80CD7FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FC0u)) return;
    // 80CD7FC0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CD7FC4:
    ctx->pc = 0x80CD7FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FC4u)) return;
    // 80CD7FC4: li      r6, 910
    ctx->gpr[6] = (u32)(s32)(910);

label_80CD7FC8:
    ctx->pc = 0x80CD7FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FC8u)) return;
    // 80CD7FC8: bl      0x80CD9358
    {
            ctx->lr = 0x80CD7FCCu;
            goto label_80CD9358;
    }

label_80CD7FCC:
    ctx->pc = 0x80CD7FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7FCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CD7FD0:
    ctx->pc = 0x80CD7FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FD0u)) return;
    // 80CD7FD0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CD7FD4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CD7FD4:
    ctx->pc = 0x80CD7FD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7FD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7FD8:
    ctx->pc = 0x80CD7FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FD8u)) return;
    // 80CD7FD8: bl      0x8045F220
    {
            ctx->lr = 0x80CD7FDCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7FDC:
    ctx->pc = 0x80CD7FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD7FDC: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD7FE0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD7FE0:
    ctx->pc = 0x80CD7FE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7FE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD7FE0: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD7FE4:
    ctx->pc = 0x80CD7FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FE4u)) return;
    // 80CD7FE4: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD7FE8:
    ctx->pc = 0x80CD7FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD7FE8: lwz     r3, 0(r3)
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
label_80CD7FEC:
    ctx->pc = 0x80CD7FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FECu)) return;
    // 80CD7FEC: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD7FF0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD7FF0:
    ctx->pc = 0x80CD7FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD7FF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD7FF4:
    ctx->pc = 0x80CD7FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FF4u)) return;
    // 80CD7FF4: bl      0x8045F220
    {
            ctx->lr = 0x80CD7FF8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD7FF8:
    ctx->pc = 0x80CD7FF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD7FF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD7FF8: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD7FFC:
    ctx->pc = 0x80CD7FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD7FFCu)) return;
    // 80CD7FFC: addi    r4, r4, 26032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26032);

label_80CD8000:
    ctx->pc = 0x80CD8000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8000u)) return;
    // 80CD8000: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CD8004:
    ctx->pc = 0x80CD8004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8004u)) return;
    // 80CD8004: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CD8008:
    ctx->pc = 0x80CD8008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8008u)) return;
    // 80CD8008: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD800C:
    ctx->pc = 0x80CD800Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD800Cu)) return;
    // 80CD800C: addi    r6, r6, 9236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9236);

label_80CD8010:
    ctx->pc = 0x80CD8010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8010: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD8010u)) return;
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
label_80CD8014:
    ctx->pc = 0x80CD8014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8014u)) return;
    // 80CD8014: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CD8018:
    ctx->pc = 0x80CD8018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8018u)) return;
    // 80CD8018: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CD801C:
    ctx->pc = 0x80CD801Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD801Cu)) return;
    // 80CD801C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD8020u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD8020:
    ctx->pc = 0x80CD8020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80CD8020: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8024:
    ctx->pc = 0x80CD8024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8024u)) return;
    // 80CD8024: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD8028:
    ctx->pc = 0x80CD8028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8028: lwz     r3, 0(r3)
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
label_80CD802C:
    ctx->pc = 0x80CD802Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD802Cu)) return;
    // 80CD802C: lis     r4, -27370
    ctx->gpr[4] = ((u32)(s32)(-27370) << 16);

label_80CD8030:
    ctx->pc = 0x80CD8030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8030u)) return;
    // 80CD8030: addi    r4, r4, 7148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7148);

label_80CD8034:
    ctx->pc = 0x80CD8034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8034u)) return;
    // 80CD8034: lis     r5, -27370
    ctx->gpr[5] = ((u32)(s32)(-27370) << 16);

label_80CD8038:
    ctx->pc = 0x80CD8038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8038u)) return;
    // 80CD8038: addi    r5, r5, -17600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17600);

label_80CD803C:
    ctx->pc = 0x80CD803Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD803Cu)) return;
    // 80CD803C: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD8040:
    ctx->pc = 0x80CD8040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8040u)) return;
    // 80CD8040: addi    r6, r6, 9236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9236);

label_80CD8044:
    ctx->pc = 0x80CD8044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8044: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD8044u)) return;
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
label_80CD8048:
    ctx->pc = 0x80CD8048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8048u)) return;
    // 80CD8048: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CD804C:
    ctx->pc = 0x80CD804Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD804Cu)) return;
    // 80CD804C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CD8050:
    ctx->pc = 0x80CD8050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8050u)) return;
    // 80CD8050: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD8054u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD8054:
    ctx->pc = 0x80CD8054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8054: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD8058:
    ctx->pc = 0x80CD8058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8058u)) return;
    // 80CD8058: bl      0x8045F220
    {
            ctx->lr = 0x80CD805Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD805C:
    ctx->pc = 0x80CD805Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD805Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD805C: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD8060u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD8060:
    ctx->pc = 0x80CD8060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8060: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD8064:
    ctx->pc = 0x80CD8064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8064u)) return;
    // 80CD8064: bl      0x8045F220
    {
            ctx->lr = 0x80CD8068u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD8068:
    ctx->pc = 0x80CD8068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD8068: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD806C:
    ctx->pc = 0x80CD806Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD806Cu)) return;
    // 80CD806C: addi    r4, r4, -24756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24756);

label_80CD8070:
    ctx->pc = 0x80CD8070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8070u)) return;
    // 80CD8070: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CD8074:
    ctx->pc = 0x80CD8074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8074u)) return;
    // 80CD8074: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CD8078:
    ctx->pc = 0x80CD8078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8078u)) return;
    // 80CD8078: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD807C:
    ctx->pc = 0x80CD807Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD807Cu)) return;
    // 80CD807C: addi    r6, r6, 9240
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9240);

label_80CD8080:
    ctx->pc = 0x80CD8080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8080: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD8080u)) return;
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
label_80CD8084:
    ctx->pc = 0x80CD8084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8084u)) return;
    // 80CD8084: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CD8088:
    ctx->pc = 0x80CD8088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8088u)) return;
    // 80CD8088: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CD808C:
    ctx->pc = 0x80CD808Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD808Cu)) return;
    // 80CD808C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD8090u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD8090:
    ctx->pc = 0x80CD8090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD8090: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8094:
    ctx->pc = 0x80CD8094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8094u)) return;
    // 80CD8094: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD8098:
    ctx->pc = 0x80CD8098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8098: lwz     r3, 0(r3)
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
label_80CD809C:
    ctx->pc = 0x80CD809Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD809Cu)) return;
    // 80CD809C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CD80A0:
    ctx->pc = 0x80CD80A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80A0u)) return;
    // 80CD80A0: bl      0x8045EE90
    {
            ctx->lr = 0x80CD80A4u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80CD80A4:
    ctx->pc = 0x80CD80A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD80A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD80A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD80A8:
    ctx->pc = 0x80CD80A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80A8u)) return;
    // 80CD80A8: bl      0x80CD9234
    {
            ctx->lr = 0x80CD80ACu;
            goto label_80CD9234;
    }

label_80CD80AC:
    ctx->pc = 0x80CD80ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD80ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD80AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CD80B0:
    ctx->pc = 0x80CD80B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80B0u)) return;
    // 80CD80B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CD80B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CD80B4:
    ctx->pc = 0x80CD80B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD80B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD80B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD80B8:
    ctx->pc = 0x80CD80B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80B8u)) return;
    // 80CD80B8: bl      0x8045F220
    {
            ctx->lr = 0x80CD80BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD80BC:
    ctx->pc = 0x80CD80BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD80BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD80BC: lwz     r30, 32(r3)
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
label_80CD80C0:
    ctx->pc = 0x80CD80C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80C0u)) return;
    // 80CD80C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD80C4:
    ctx->pc = 0x80CD80C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80C4u)) return;
    // 80CD80C4: bl      0x8045F220
    {
            ctx->lr = 0x80CD80C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD80C8:
    ctx->pc = 0x80CD80C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD80C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD80C8: lwz     r3, 32(r3)
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
label_80CD80CC:
    ctx->pc = 0x80CD80CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD80CC: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD80CCu)) return;
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
label_80CD80D0:
    ctx->pc = 0x80CD80D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80D0u)) return;
    // 80CD80D0: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD80D4:
    ctx->pc = 0x80CD80D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80D4u)) return;
    // 80CD80D4: addi    r3, r3, 9240
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9240);

label_80CD80D8:
    ctx->pc = 0x80CD80D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD80D8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD80D8u)) return;
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
label_80CD80DC:
    ctx->pc = 0x80CD80DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80DCu)) return;
    // 80CD80DC: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD80DCu)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80CD80E0:
    ctx->pc = 0x80CD80E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80E0u)) return;
    // 80CD80E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD80E4:
    ctx->pc = 0x80CD80E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80E4u)) return;
    // 80CD80E4: bl      0x8045F220
    {
            ctx->lr = 0x80CD80E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD80E8:
    ctx->pc = 0x80CD80E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD80E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD80E8: lwz     r4, 32(r3)
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
label_80CD80EC:
    ctx->pc = 0x80CD80ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80ECu)) return;
    // 80CD80EC: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD80F0:
    ctx->pc = 0x80CD80F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80F0u)) return;
    // 80CD80F0: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD80F4:
    ctx->pc = 0x80CD80F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD80F4: lwz     r3, 0(r3)
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
label_80CD80F8:
    ctx->pc = 0x80CD80F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD80F8: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD80F8u)) return;
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
label_80CD80FC:
    ctx->pc = 0x80CD80FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD80FCu)) return;
    // 80CD80FC: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80CD80FCu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80CD8100:
    ctx->pc = 0x80CD8100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8100: lfs     f3, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD8100u)) return;
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
label_80CD8104:
    ctx->pc = 0x80CD8104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8104u)) return;
    // 80CD8104: bl      0x8045EF2C
    {
            ctx->lr = 0x80CD8108u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CD8108:
    ctx->pc = 0x80CD8108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8108: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD810C:
    ctx->pc = 0x80CD810Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD810Cu)) return;
    // 80CD810C: bl      0x8045F220
    {
            ctx->lr = 0x80CD8110u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD8110:
    ctx->pc = 0x80CD8110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8110: lwz     r30, 32(r3)
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
label_80CD8114:
    ctx->pc = 0x80CD8114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8114u)) return;
    // 80CD8114: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8118:
    ctx->pc = 0x80CD8118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8118u)) return;
    // 80CD8118: bl      0x8045F220
    {
            ctx->lr = 0x80CD811Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD811C:
    ctx->pc = 0x80CD811Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD811Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD811C: lwz     r3, 32(r3)
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
label_80CD8120:
    ctx->pc = 0x80CD8120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8120: lwz     r0, 24(r3)
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
label_80CD8124:
    ctx->pc = 0x80CD8124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8124u)) return;
    // 80CD8124: subfic  r31, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[31] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80CD8128:
    ctx->pc = 0x80CD8128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8128u)) return;
    // 80CD8128: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD812C:
    ctx->pc = 0x80CD812Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD812Cu)) return;
    // 80CD812C: bl      0x8045F220
    {
            ctx->lr = 0x80CD8130u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD8130:
    ctx->pc = 0x80CD8130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8130: lwz     r4, 32(r3)
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
label_80CD8134:
    ctx->pc = 0x80CD8134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8134u)) return;
    // 80CD8134: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8138:
    ctx->pc = 0x80CD8138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8138u)) return;
    // 80CD8138: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD813C:
    ctx->pc = 0x80CD813Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD813Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD813C: lwz     r3, 0(r3)
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
label_80CD8140:
    ctx->pc = 0x80CD8140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8140: lwz     r4, 20(r4)
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
label_80CD8144:
    ctx->pc = 0x80CD8144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8144u)) return;
    // 80CD8144: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CD8148:
    ctx->pc = 0x80CD8148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8148: lwz     r6, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD814C:
    ctx->pc = 0x80CD814Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD814Cu)) return;
    // 80CD814C: bl      0x8045EEA8
    {
            ctx->lr = 0x80CD8150u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CD8150:
    ctx->pc = 0x80CD8150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD8150: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8154:
    ctx->pc = 0x80CD8154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8154u)) return;
    // 80CD8154: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80CD8158:
    ctx->pc = 0x80CD8158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8158u)) return;
    // 80CD8158: li      r5, 7282
    ctx->gpr[5] = (u32)(s32)(7282);

label_80CD815C:
    ctx->pc = 0x80CD815Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD815Cu)) return;
    // 80CD815C: bl      0x8045C0F8
    {
            ctx->lr = 0x80CD8160u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80CD8160:
    ctx->pc = 0x80CD8160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CD8160: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8164:
    ctx->pc = 0x80CD8164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8164u)) return;
    // 80CD8164: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CD8168:
    ctx->pc = 0x80CD8168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8168u)) return;
    // 80CD8168: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD816C:
    ctx->pc = 0x80CD816Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD816Cu)) return;
    // 80CD816C: addi    r5, r5, 9244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9244);

label_80CD8170:
    ctx->pc = 0x80CD8170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8170: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8170u)) return;
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
label_80CD8174:
    ctx->pc = 0x80CD8174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8174u)) return;
    // 80CD8174: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD8178:
    ctx->pc = 0x80CD8178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8178u)) return;
    // 80CD8178: addi    r5, r5, 9248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9248);

label_80CD817C:
    ctx->pc = 0x80CD817Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD817Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD817C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD817Cu)) return;
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
label_80CD8180:
    ctx->pc = 0x80CD8180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8180u)) return;
    // 80CD8180: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD8184:
    ctx->pc = 0x80CD8184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8184u)) return;
    // 80CD8184: addi    r5, r5, 9252
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9252);

label_80CD8188:
    ctx->pc = 0x80CD8188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8188: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8188u)) return;
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
label_80CD818C:
    ctx->pc = 0x80CD818Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD818Cu)) return;
    // 80CD818C: bl      0x8045C750
    {
            ctx->lr = 0x80CD8190u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CD8190:
    ctx->pc = 0x80CD8190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CD8190: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8194:
    ctx->pc = 0x80CD8194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8194u)) return;
    // 80CD8194: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CD8198:
    ctx->pc = 0x80CD8198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8198u)) return;
    // 80CD8198: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CD819C:
    ctx->pc = 0x80CD819Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD819Cu)) return;
    // 80CD819C: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80CD81A0:
    ctx->pc = 0x80CD81A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81A0u)) return;
    // 80CD81A0: addi    r6, r6, -30720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30720);

label_80CD81A4:
    ctx->pc = 0x80CD81A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81A4u)) return;
    // 80CD81A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CD81A8:
    ctx->pc = 0x80CD81A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81A8u)) return;
    // 80CD81A8: bl      0x8045C7B4
    {
            ctx->lr = 0x80CD81ACu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CD81AC:
    ctx->pc = 0x80CD81ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD81ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD81AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD81B0:
    ctx->pc = 0x80CD81B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81B0u)) return;
    // 80CD81B0: bl      0x8045F220
    {
            ctx->lr = 0x80CD81B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD81B4:
    ctx->pc = 0x80CD81B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD81B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD81B4: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD81B8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD81B8:
    ctx->pc = 0x80CD81B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD81B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD81B8: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD81BC:
    ctx->pc = 0x80CD81BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81BCu)) return;
    // 80CD81BC: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD81C0:
    ctx->pc = 0x80CD81C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD81C0: lwz     r3, 0(r3)
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
label_80CD81C4:
    ctx->pc = 0x80CD81C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81C4u)) return;
    // 80CD81C4: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD81C8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD81C8:
    ctx->pc = 0x80CD81C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD81C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD81C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD81CC:
    ctx->pc = 0x80CD81CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81CCu)) return;
    // 80CD81CC: bl      0x8045F220
    {
            ctx->lr = 0x80CD81D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD81D0:
    ctx->pc = 0x80CD81D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD81D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD81D0: lis     r4, -27370
    ctx->gpr[4] = ((u32)(s32)(-27370) << 16);

label_80CD81D4:
    ctx->pc = 0x80CD81D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81D4u)) return;
    // 80CD81D4: addi    r4, r4, -24044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24044);

label_80CD81D8:
    ctx->pc = 0x80CD81D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81D8u)) return;
    // 80CD81D8: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CD81DC:
    ctx->pc = 0x80CD81DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81DCu)) return;
    // 80CD81DC: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CD81E0:
    ctx->pc = 0x80CD81E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81E0u)) return;
    // 80CD81E0: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD81E4:
    ctx->pc = 0x80CD81E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81E4u)) return;
    // 80CD81E4: addi    r6, r6, 9236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9236);

label_80CD81E8:
    ctx->pc = 0x80CD81E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD81E8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD81E8u)) return;
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
label_80CD81EC:
    ctx->pc = 0x80CD81ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81ECu)) return;
    // 80CD81EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CD81F0:
    ctx->pc = 0x80CD81F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81F0u)) return;
    // 80CD81F0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CD81F4:
    ctx->pc = 0x80CD81F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81F4u)) return;
    // 80CD81F4: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD81F8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD81F8:
    ctx->pc = 0x80CD81F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD81F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD81F8: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD81FC:
    ctx->pc = 0x80CD81FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD81FCu)) return;
    // 80CD81FC: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD8200:
    ctx->pc = 0x80CD8200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD8200: lwz     r3, 0(r3)
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
label_80CD8204:
    ctx->pc = 0x80CD8204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8204u)) return;
    // 80CD8204: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD8208:
    ctx->pc = 0x80CD8208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8208u)) return;
    // 80CD8208: addi    r4, r4, -16452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16452);

label_80CD820C:
    ctx->pc = 0x80CD820Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD820Cu)) return;
    // 80CD820C: lis     r5, -27370
    ctx->gpr[5] = ((u32)(s32)(-27370) << 16);

label_80CD8210:
    ctx->pc = 0x80CD8210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8210u)) return;
    // 80CD8210: addi    r31, r5, 19088
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(19088);

label_80CD8214:
    ctx->pc = 0x80CD8214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD8214: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8218:
    ctx->pc = 0x80CD8218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8218u)) return;
    // 80CD8218: lis     r6, -27369
    ctx->gpr[6] = ((u32)(s32)(-27369) << 16);

label_80CD821C:
    ctx->pc = 0x80CD821Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD821Cu)) return;
    // 80CD821C: addi    r6, r6, -24328
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24328);

label_80CD8220:
    ctx->pc = 0x80CD8220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8220u)) return;
    // 80CD8220: lis     r7, -27371
    ctx->gpr[7] = ((u32)(s32)(-27371) << 16);

label_80CD8224:
    ctx->pc = 0x80CD8224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8224u)) return;
    // 80CD8224: addi    r7, r7, 9236
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9236);

label_80CD8228:
    ctx->pc = 0x80CD8228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8228: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CD8228u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD822C:
    ctx->pc = 0x80CD822Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD822Cu)) return;
    // 80CD822C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CD8230:
    ctx->pc = 0x80CD8230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8230u)) return;
    // 80CD8230: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_80CD8234:
    ctx->pc = 0x80CD8234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8234u)) return;
    // 80CD8234: bl      0x8045EBB8
    {
            ctx->lr = 0x80CD8238u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80CD8238:
    ctx->pc = 0x80CD8238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80CD8238: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD823C:
    ctx->pc = 0x80CD823Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD823Cu)) return;
    // 80CD823C: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD8240:
    ctx->pc = 0x80CD8240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8240: lwz     r3, 0(r3)
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
label_80CD8244:
    ctx->pc = 0x80CD8244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8244u)) return;
    // 80CD8244: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD8248:
    ctx->pc = 0x80CD8248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8248u)) return;
    // 80CD8248: addi    r4, r4, -16452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16452);

label_80CD824C:
    ctx->pc = 0x80CD824Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD824Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD824C: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8250:
    ctx->pc = 0x80CD8250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8250u)) return;
    // 80CD8250: lis     r6, -27369
    ctx->gpr[6] = ((u32)(s32)(-27369) << 16);

label_80CD8254:
    ctx->pc = 0x80CD8254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8254u)) return;
    // 80CD8254: addi    r6, r6, -24328
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24328);

label_80CD8258:
    ctx->pc = 0x80CD8258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8258u)) return;
    // 80CD8258: lis     r7, -27371
    ctx->gpr[7] = ((u32)(s32)(-27371) << 16);

label_80CD825C:
    ctx->pc = 0x80CD825Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD825Cu)) return;
    // 80CD825C: addi    r7, r7, 9236
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9236);

label_80CD8260:
    ctx->pc = 0x80CD8260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8260: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CD8260u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8264:
    ctx->pc = 0x80CD8264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8264u)) return;
    // 80CD8264: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CD8268:
    ctx->pc = 0x80CD8268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8268u)) return;
    // 80CD8268: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_80CD826C:
    ctx->pc = 0x80CD826Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD826Cu)) return;
    // 80CD826C: bl      0x8045EBB8
    {
            ctx->lr = 0x80CD8270u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80CD8270:
    ctx->pc = 0x80CD8270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8270: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8274:
    ctx->pc = 0x80CD8274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8274u)) return;
    // 80CD8274: bl      0x8045F220
    {
            ctx->lr = 0x80CD8278u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD8278:
    ctx->pc = 0x80CD8278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD8278: lis     r4, -27370
    ctx->gpr[4] = ((u32)(s32)(-27370) << 16);

label_80CD827C:
    ctx->pc = 0x80CD827Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD827Cu)) return;
    // 80CD827C: addi    r4, r4, -17768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17768);

label_80CD8280:
    ctx->pc = 0x80CD8280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8280u)) return;
    // 80CD8280: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CD8284:
    ctx->pc = 0x80CD8284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8284u)) return;
    // 80CD8284: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CD8288:
    ctx->pc = 0x80CD8288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8288u)) return;
    // 80CD8288: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD828C:
    ctx->pc = 0x80CD828Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD828Cu)) return;
    // 80CD828C: addi    r6, r6, 9236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9236);

label_80CD8290:
    ctx->pc = 0x80CD8290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8290: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD8290u)) return;
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
label_80CD8294:
    ctx->pc = 0x80CD8294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8294u)) return;
    // 80CD8294: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CD8298:
    ctx->pc = 0x80CD8298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8298u)) return;
    // 80CD8298: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80CD829C:
    ctx->pc = 0x80CD829Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD829Cu)) return;
    // 80CD829C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD82A0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD82A0:
    ctx->pc = 0x80CD82A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD82A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD82A0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CD82A4:
    ctx->pc = 0x80CD82A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82A4u)) return;
    // 80CD82A4: addi    r3, r3, -5400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5400);

label_80CD82A8:
    ctx->pc = 0x80CD82A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD82A8: lwz     r0, 0(r3)
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
label_80CD82AC:
    ctx->pc = 0x80CD82ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82ACu)) return;
    // 80CD82AC: cmpwi   r0, 0
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

label_80CD82B0:
    ctx->pc = 0x80CD82B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82B0u)) return;
    // 80CD82B0: bc    4, 2, 0x80CD82F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD82F4;
        }
    }

label_80CD82B4:
    ctx->pc = 0x80CD82B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD82B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD82B4: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD82B8:
    ctx->pc = 0x80CD82B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82B8u)) return;
    // 80CD82B8: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD82BC:
    ctx->pc = 0x80CD82BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD82BC: lwz     r3, 0(r3)
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
label_80CD82C0:
    ctx->pc = 0x80CD82C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82C0u)) return;
    // 80CD82C0: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD82C4:
    ctx->pc = 0x80CD82C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82C4u)) return;
    // 80CD82C4: addi    r4, r4, -16452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16452);

label_80CD82C8:
    ctx->pc = 0x80CD82C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82C8u)) return;
    // 80CD82C8: lis     r5, -27370
    ctx->gpr[5] = ((u32)(s32)(-27370) << 16);

label_80CD82CC:
    ctx->pc = 0x80CD82CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82CCu)) return;
    // 80CD82CC: addi    r5, r5, 25060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25060);

label_80CD82D0:
    ctx->pc = 0x80CD82D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD82D0: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD82D4:
    ctx->pc = 0x80CD82D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82D4u)) return;
    // 80CD82D4: lis     r6, -27369
    ctx->gpr[6] = ((u32)(s32)(-27369) << 16);

label_80CD82D8:
    ctx->pc = 0x80CD82D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82D8u)) return;
    // 80CD82D8: addi    r6, r6, -24328
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24328);

label_80CD82DC:
    ctx->pc = 0x80CD82DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82DCu)) return;
    // 80CD82DC: lis     r7, -27371
    ctx->gpr[7] = ((u32)(s32)(-27371) << 16);

label_80CD82E0:
    ctx->pc = 0x80CD82E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82E0u)) return;
    // 80CD82E0: addi    r7, r7, 9236
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9236);

label_80CD82E4:
    ctx->pc = 0x80CD82E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD82E4: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CD82E4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD82E8:
    ctx->pc = 0x80CD82E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82E8u)) return;
    // 80CD82E8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80CD82EC:
    ctx->pc = 0x80CD82ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82ECu)) return;
    // 80CD82EC: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_80CD82F0:
    ctx->pc = 0x80CD82F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82F0u)) return;
    // 80CD82F0: bl      0x8045EBB8
    {
            ctx->lr = 0x80CD82F4u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80CD82F4:
    ctx->pc = 0x80CD82F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD82F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD82F4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CD82F8:
    ctx->pc = 0x80CD82F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82F8u)) return;
    // 80CD82F8: addi    r3, r3, -5400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5400);

label_80CD82FC:
    ctx->pc = 0x80CD82FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD82FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD82FC: lwz     r0, 0(r3)
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
label_80CD8300:
    ctx->pc = 0x80CD8300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8300u)) return;
    // 80CD8300: cmpwi   r0, 1
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

label_80CD8304:
    ctx->pc = 0x80CD8304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8304u)) return;
    // 80CD8304: bc    4, 2, 0x80CD8348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8348;
        }
    }

label_80CD8308:
    ctx->pc = 0x80CD8308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD8308: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD830C:
    ctx->pc = 0x80CD830Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD830Cu)) return;
    // 80CD830C: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD8310:
    ctx->pc = 0x80CD8310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD8310: lwz     r3, 0(r3)
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
label_80CD8314:
    ctx->pc = 0x80CD8314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8314u)) return;
    // 80CD8314: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD8318:
    ctx->pc = 0x80CD8318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8318u)) return;
    // 80CD8318: addi    r4, r4, -16452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16452);

label_80CD831C:
    ctx->pc = 0x80CD831Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD831Cu)) return;
    // 80CD831C: lis     r5, -27370
    ctx->gpr[5] = ((u32)(s32)(-27370) << 16);

label_80CD8320:
    ctx->pc = 0x80CD8320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8320u)) return;
    // 80CD8320: addi    r5, r5, 25060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25060);

label_80CD8324:
    ctx->pc = 0x80CD8324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD8324: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8328:
    ctx->pc = 0x80CD8328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8328u)) return;
    // 80CD8328: lis     r6, -27369
    ctx->gpr[6] = ((u32)(s32)(-27369) << 16);

label_80CD832C:
    ctx->pc = 0x80CD832Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD832Cu)) return;
    // 80CD832C: addi    r6, r6, -24328
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24328);

label_80CD8330:
    ctx->pc = 0x80CD8330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8330u)) return;
    // 80CD8330: lis     r7, -27371
    ctx->gpr[7] = ((u32)(s32)(-27371) << 16);

label_80CD8334:
    ctx->pc = 0x80CD8334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8334u)) return;
    // 80CD8334: addi    r7, r7, 9236
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9236);

label_80CD8338:
    ctx->pc = 0x80CD8338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8338: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CD8338u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD833C:
    ctx->pc = 0x80CD833Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD833Cu)) return;
    // 80CD833C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80CD8340:
    ctx->pc = 0x80CD8340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8340u)) return;
    // 80CD8340: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80CD8344:
    ctx->pc = 0x80CD8344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8344u)) return;
    // 80CD8344: bl      0x8045EBB8
    {
            ctx->lr = 0x80CD8348u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80CD8348:
    ctx->pc = 0x80CD8348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8348: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CD834C:
    ctx->pc = 0x80CD834Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD834Cu)) return;
    // 80CD834C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CD8350u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CD8350:
    ctx->pc = 0x80CD8350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8350: li      r3, 1383
    ctx->gpr[3] = (u32)(s32)(1383);

label_80CD8354:
    ctx->pc = 0x80CD8354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8354u)) return;
    // 80CD8354: bl      0x8045BFA0
    {
            ctx->lr = 0x80CD8358u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CD8358:
    ctx->pc = 0x80CD8358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD8358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD835C:
    ctx->pc = 0x80CD835Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD835Cu)) return;
    // 80CD835C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CD8360:
    ctx->pc = 0x80CD8360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8360u)) return;
    // 80CD8360: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CD8364:
    ctx->pc = 0x80CD8364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8364: lwz     r0, 0(r4)
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
label_80CD8368:
    ctx->pc = 0x80CD8368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8368u)) return;
    // 80CD8368: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD836C:
    ctx->pc = 0x80CD836Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD836Cu)) return;
    // 80CD836C: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8370:
    ctx->pc = 0x80CD8370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8370u)) return;
    // 80CD8370: addi    r4, r4, 10420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10420);

label_80CD8374:
    ctx->pc = 0x80CD8374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8374: lwzx    r4, r4, r0
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
label_80CD8378:
    ctx->pc = 0x80CD8378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8378: lwz     r4, 0(r4)
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
label_80CD837C:
    ctx->pc = 0x80CD837Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD837Cu)) return;
    // 80CD837C: bl      0x8045F608
    {
            ctx->lr = 0x80CD8380u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CD8380:
    ctx->pc = 0x80CD8380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD8380: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8384:
    ctx->pc = 0x80CD8384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8384u)) return;
    // 80CD8384: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80CD8388:
    ctx->pc = 0x80CD8388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8388u)) return;
    // 80CD8388: li      r5, 9102
    ctx->gpr[5] = (u32)(s32)(9102);

label_80CD838C:
    ctx->pc = 0x80CD838Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD838Cu)) return;
    // 80CD838C: bl      0x8045C0F8
    {
            ctx->lr = 0x80CD8390u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80CD8390:
    ctx->pc = 0x80CD8390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8390: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CD8394:
    ctx->pc = 0x80CD8394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8394u)) return;
    // 80CD8394: bl      0x8045F7C8
    {
            ctx->lr = 0x80CD8398u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CD8398:
    ctx->pc = 0x80CD8398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8398: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD839C:
    ctx->pc = 0x80CD839Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD839Cu)) return;
    // 80CD839C: bl      0x8045F220
    {
            ctx->lr = 0x80CD83A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD83A0:
    ctx->pc = 0x80CD83A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD83A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD83A0: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD83A4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD83A4:
    ctx->pc = 0x80CD83A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD83A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD83A4: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD83A8:
    ctx->pc = 0x80CD83A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83A8u)) return;
    // 80CD83A8: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD83AC:
    ctx->pc = 0x80CD83ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD83AC: lwz     r3, 0(r3)
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
label_80CD83B0:
    ctx->pc = 0x80CD83B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83B0u)) return;
    // 80CD83B0: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD83B4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD83B4:
    ctx->pc = 0x80CD83B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD83B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD83B4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CD83B8:
    ctx->pc = 0x80CD83B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83B8u)) return;
    // 80CD83B8: addi    r3, r3, -5400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5400);

label_80CD83BC:
    ctx->pc = 0x80CD83BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD83BC: lwz     r0, 0(r3)
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
label_80CD83C0:
    ctx->pc = 0x80CD83C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83C0u)) return;
    // 80CD83C0: cmpwi   r0, 1
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

label_80CD83C4:
    ctx->pc = 0x80CD83C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83C4u)) return;
    // 80CD83C4: bc    4, 2, 0x80CD8408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8408;
        }
    }

label_80CD83C8:
    ctx->pc = 0x80CD83C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD83C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD83C8: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD83CC:
    ctx->pc = 0x80CD83CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83CCu)) return;
    // 80CD83CC: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD83D0:
    ctx->pc = 0x80CD83D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD83D0: lwz     r3, 0(r3)
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
label_80CD83D4:
    ctx->pc = 0x80CD83D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83D4u)) return;
    // 80CD83D4: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD83D8:
    ctx->pc = 0x80CD83D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83D8u)) return;
    // 80CD83D8: addi    r4, r4, -16452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16452);

label_80CD83DC:
    ctx->pc = 0x80CD83DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83DCu)) return;
    // 80CD83DC: lis     r5, -27370
    ctx->gpr[5] = ((u32)(s32)(-27370) << 16);

label_80CD83E0:
    ctx->pc = 0x80CD83E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83E0u)) return;
    // 80CD83E0: addi    r5, r5, -24
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24);

label_80CD83E4:
    ctx->pc = 0x80CD83E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD83E4: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD83E8:
    ctx->pc = 0x80CD83E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83E8u)) return;
    // 80CD83E8: lis     r6, -27369
    ctx->gpr[6] = ((u32)(s32)(-27369) << 16);

label_80CD83EC:
    ctx->pc = 0x80CD83ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83ECu)) return;
    // 80CD83EC: addi    r6, r6, -24328
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24328);

label_80CD83F0:
    ctx->pc = 0x80CD83F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83F0u)) return;
    // 80CD83F0: lis     r7, -27371
    ctx->gpr[7] = ((u32)(s32)(-27371) << 16);

label_80CD83F4:
    ctx->pc = 0x80CD83F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83F4u)) return;
    // 80CD83F4: addi    r7, r7, 9256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9256);

label_80CD83F8:
    ctx->pc = 0x80CD83F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD83F8: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CD83F8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD83FC:
    ctx->pc = 0x80CD83FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD83FCu)) return;
    // 80CD83FC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80CD8400:
    ctx->pc = 0x80CD8400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8400u)) return;
    // 80CD8400: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_80CD8404:
    ctx->pc = 0x80CD8404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8404u)) return;
    // 80CD8404: bl      0x8045EBB8
    {
            ctx->lr = 0x80CD8408u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80CD8408:
    ctx->pc = 0x80CD8408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD840C:
    ctx->pc = 0x80CD840Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD840Cu)) return;
    // 80CD840C: bl      0x8045F220
    {
            ctx->lr = 0x80CD8410u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD8410:
    ctx->pc = 0x80CD8410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD8410: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8414:
    ctx->pc = 0x80CD8414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8414u)) return;
    // 80CD8414: addi    r4, r4, 19436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19436);

label_80CD8418:
    ctx->pc = 0x80CD8418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8418u)) return;
    // 80CD8418: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CD841C:
    ctx->pc = 0x80CD841Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD841Cu)) return;
    // 80CD841C: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CD8420:
    ctx->pc = 0x80CD8420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8420u)) return;
    // 80CD8420: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD8424:
    ctx->pc = 0x80CD8424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8424u)) return;
    // 80CD8424: addi    r6, r6, 9236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9236);

label_80CD8428:
    ctx->pc = 0x80CD8428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8428: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD8428u)) return;
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
label_80CD842C:
    ctx->pc = 0x80CD842Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD842Cu)) return;
    // 80CD842C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CD8430:
    ctx->pc = 0x80CD8430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8430u)) return;
    // 80CD8430: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CD8434:
    ctx->pc = 0x80CD8434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8434u)) return;
    // 80CD8434: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD8438u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD8438:
    ctx->pc = 0x80CD8438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD8438: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CD843C:
    ctx->pc = 0x80CD843Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD843Cu)) return;
    // 80CD843C: addi    r3, r3, -5400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5400);

label_80CD8440:
    ctx->pc = 0x80CD8440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8440: lwz     r0, 0(r3)
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
label_80CD8444:
    ctx->pc = 0x80CD8444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8444u)) return;
    // 80CD8444: cmpwi   r0, 0
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

label_80CD8448:
    ctx->pc = 0x80CD8448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8448u)) return;
    // 80CD8448: bc    4, 2, 0x80CD848C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD848C;
        }
    }

label_80CD844C:
    ctx->pc = 0x80CD844Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD844Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD844C: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8450:
    ctx->pc = 0x80CD8450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8450u)) return;
    // 80CD8450: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD8454:
    ctx->pc = 0x80CD8454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD8454: lwz     r3, 0(r3)
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
label_80CD8458:
    ctx->pc = 0x80CD8458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8458u)) return;
    // 80CD8458: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD845C:
    ctx->pc = 0x80CD845Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD845Cu)) return;
    // 80CD845C: addi    r4, r4, -16452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16452);

label_80CD8460:
    ctx->pc = 0x80CD8460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8460u)) return;
    // 80CD8460: lis     r5, -27370
    ctx->gpr[5] = ((u32)(s32)(-27370) << 16);

label_80CD8464:
    ctx->pc = 0x80CD8464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8464u)) return;
    // 80CD8464: addi    r5, r5, -24
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24);

label_80CD8468:
    ctx->pc = 0x80CD8468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD8468: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD846C:
    ctx->pc = 0x80CD846Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD846Cu)) return;
    // 80CD846C: lis     r6, -27369
    ctx->gpr[6] = ((u32)(s32)(-27369) << 16);

label_80CD8470:
    ctx->pc = 0x80CD8470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8470u)) return;
    // 80CD8470: addi    r6, r6, -24328
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24328);

label_80CD8474:
    ctx->pc = 0x80CD8474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8474u)) return;
    // 80CD8474: lis     r7, -27371
    ctx->gpr[7] = ((u32)(s32)(-27371) << 16);

label_80CD8478:
    ctx->pc = 0x80CD8478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8478u)) return;
    // 80CD8478: addi    r7, r7, 9236
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9236);

label_80CD847C:
    ctx->pc = 0x80CD847Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD847Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD847C: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CD847Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8480:
    ctx->pc = 0x80CD8480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8480u)) return;
    // 80CD8480: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80CD8484:
    ctx->pc = 0x80CD8484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8484u)) return;
    // 80CD8484: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_80CD8488:
    ctx->pc = 0x80CD8488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8488u)) return;
    // 80CD8488: bl      0x8045EBB8
    {
            ctx->lr = 0x80CD848Cu;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80CD848C:
    ctx->pc = 0x80CD848Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD848Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD848C: li      r3, 1384
    ctx->gpr[3] = (u32)(s32)(1384);

label_80CD8490:
    ctx->pc = 0x80CD8490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8490u)) return;
    // 80CD8490: bl      0x8045BFA0
    {
            ctx->lr = 0x80CD8494u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CD8494:
    ctx->pc = 0x80CD8494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD8494: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8498:
    ctx->pc = 0x80CD8498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8498u)) return;
    // 80CD8498: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CD849C:
    ctx->pc = 0x80CD849Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD849Cu)) return;
    // 80CD849C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CD84A0:
    ctx->pc = 0x80CD84A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD84A0: lwz     r0, 0(r4)
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
label_80CD84A4:
    ctx->pc = 0x80CD84A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84A4u)) return;
    // 80CD84A4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD84A8:
    ctx->pc = 0x80CD84A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84A8u)) return;
    // 80CD84A8: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD84AC:
    ctx->pc = 0x80CD84ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84ACu)) return;
    // 80CD84AC: addi    r4, r4, 10420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10420);

label_80CD84B0:
    ctx->pc = 0x80CD84B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD84B0: lwzx    r4, r4, r0
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
label_80CD84B4:
    ctx->pc = 0x80CD84B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD84B4: lwz     r4, 4(r4)
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
label_80CD84B8:
    ctx->pc = 0x80CD84B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84B8u)) return;
    // 80CD84B8: bl      0x8045F608
    {
            ctx->lr = 0x80CD84BCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CD84BC:
    ctx->pc = 0x80CD84BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD84BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD84BC: bl      0x8045BFF4
    {
            ctx->lr = 0x80CD84C0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CD84C0:
    ctx->pc = 0x80CD84C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD84C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD84C0: bl      0x8045F32C
    {
            ctx->lr = 0x80CD84C4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CD84C4:
    ctx->pc = 0x80CD84C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD84C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD84C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD84C8:
    ctx->pc = 0x80CD84C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84C8u)) return;
    // 80CD84C8: bl      0x8045F220
    {
            ctx->lr = 0x80CD84CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD84CC:
    ctx->pc = 0x80CD84CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD84CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD84CC: lis     r4, -27370
    ctx->gpr[4] = ((u32)(s32)(-27370) << 16);

label_80CD84D0:
    ctx->pc = 0x80CD84D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84D0u)) return;
    // 80CD84D0: addi    r4, r4, 32664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32664);

label_80CD84D4:
    ctx->pc = 0x80CD84D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84D4u)) return;
    // 80CD84D4: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CD84D8:
    ctx->pc = 0x80CD84D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84D8u)) return;
    // 80CD84D8: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CD84DC:
    ctx->pc = 0x80CD84DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84DCu)) return;
    // 80CD84DC: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD84E0:
    ctx->pc = 0x80CD84E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84E0u)) return;
    // 80CD84E0: addi    r6, r6, 9260
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9260);

label_80CD84E4:
    ctx->pc = 0x80CD84E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD84E4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD84E4u)) return;
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
label_80CD84E8:
    ctx->pc = 0x80CD84E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84E8u)) return;
    // 80CD84E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CD84EC:
    ctx->pc = 0x80CD84ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84ECu)) return;
    // 80CD84EC: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80CD84F0:
    ctx->pc = 0x80CD84F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84F0u)) return;
    // 80CD84F0: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD84F4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD84F4:
    ctx->pc = 0x80CD84F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD84F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD84F4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD84F8:
    ctx->pc = 0x80CD84F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD84F8u)) return;
    // 80CD84F8: bl      0x8045F220
    {
            ctx->lr = 0x80CD84FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD84FC:
    ctx->pc = 0x80CD84FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD84FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD84FC: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD8500:
    ctx->pc = 0x80CD8500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8500u)) return;
    // 80CD8500: addi    r4, r4, -24756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24756);

label_80CD8504:
    ctx->pc = 0x80CD8504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8504u)) return;
    // 80CD8504: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CD8508:
    ctx->pc = 0x80CD8508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8508u)) return;
    // 80CD8508: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CD850C:
    ctx->pc = 0x80CD850Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD850Cu)) return;
    // 80CD850C: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD8510:
    ctx->pc = 0x80CD8510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8510u)) return;
    // 80CD8510: addi    r6, r6, 9240
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9240);

label_80CD8514:
    ctx->pc = 0x80CD8514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8514: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD8514u)) return;
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
label_80CD8518:
    ctx->pc = 0x80CD8518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8518u)) return;
    // 80CD8518: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CD851C:
    ctx->pc = 0x80CD851Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD851Cu)) return;
    // 80CD851C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CD8520:
    ctx->pc = 0x80CD8520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8520u)) return;
    // 80CD8520: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD8524u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD8524:
    ctx->pc = 0x80CD8524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8524: bl      0x8045BFF4
    {
            ctx->lr = 0x80CD8528u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CD8528:
    ctx->pc = 0x80CD8528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CD8528: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD852C:
    ctx->pc = 0x80CD852Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD852Cu)) return;
    // 80CD852C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CD8530:
    ctx->pc = 0x80CD8530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8530u)) return;
    // 80CD8530: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD8534:
    ctx->pc = 0x80CD8534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8534u)) return;
    // 80CD8534: addi    r5, r5, 9264
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9264);

label_80CD8538:
    ctx->pc = 0x80CD8538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8538: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8538u)) return;
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
label_80CD853C:
    ctx->pc = 0x80CD853Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD853Cu)) return;
    // 80CD853C: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD8540:
    ctx->pc = 0x80CD8540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8540u)) return;
    // 80CD8540: addi    r5, r5, 9268
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9268);

label_80CD8544:
    ctx->pc = 0x80CD8544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8544: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8544u)) return;
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
label_80CD8548:
    ctx->pc = 0x80CD8548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8548u)) return;
    // 80CD8548: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD854C:
    ctx->pc = 0x80CD854Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD854Cu)) return;
    // 80CD854C: addi    r5, r5, 9272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9272);

label_80CD8550:
    ctx->pc = 0x80CD8550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8550: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8550u)) return;
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
label_80CD8554:
    ctx->pc = 0x80CD8554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8554u)) return;
    // 80CD8554: bl      0x8045C750
    {
            ctx->lr = 0x80CD8558u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CD8558:
    ctx->pc = 0x80CD8558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CD8558: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD855C:
    ctx->pc = 0x80CD855Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD855Cu)) return;
    // 80CD855C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CD8560:
    ctx->pc = 0x80CD8560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8560u)) return;
    // 80CD8560: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CD8564:
    ctx->pc = 0x80CD8564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8564u)) return;
    // 80CD8564: li      r6, 7680
    ctx->gpr[6] = (u32)(s32)(7680);

label_80CD8568:
    ctx->pc = 0x80CD8568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8568u)) return;
    // 80CD8568: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CD856C:
    ctx->pc = 0x80CD856Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD856Cu)) return;
    // 80CD856C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CD8570u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CD8570:
    ctx->pc = 0x80CD8570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8570: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD8574:
    ctx->pc = 0x80CD8574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8574u)) return;
    // 80CD8574: bl      0x8045F220
    {
            ctx->lr = 0x80CD8578u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD8578:
    ctx->pc = 0x80CD8578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8578: bl      0x8045C034
    {
            ctx->lr = 0x80CD857Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CD857C:
    ctx->pc = 0x80CD857Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD857Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD857C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD8580:
    ctx->pc = 0x80CD8580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8580u)) return;
    // 80CD8580: bl      0x8045F220
    {
            ctx->lr = 0x80CD8584u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD8584:
    ctx->pc = 0x80CD8584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8584: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8588:
    ctx->pc = 0x80CD8588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8588u)) return;
    // 80CD8588: addi    r4, r4, 10484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10484);

label_80CD858C:
    ctx->pc = 0x80CD858Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD858Cu)) return;
    // 80CD858C: bl      0x8045C060
    {
            ctx->lr = 0x80CD8590u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CD8590:
    ctx->pc = 0x80CD8590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8590: li      r3, 1385
    ctx->gpr[3] = (u32)(s32)(1385);

label_80CD8594:
    ctx->pc = 0x80CD8594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8594u)) return;
    // 80CD8594: bl      0x8045BFA0
    {
            ctx->lr = 0x80CD8598u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CD8598:
    ctx->pc = 0x80CD8598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD8598: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CD859C:
    ctx->pc = 0x80CD859Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD859Cu)) return;
    // 80CD859C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CD85A0:
    ctx->pc = 0x80CD85A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85A0u)) return;
    // 80CD85A0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CD85A4:
    ctx->pc = 0x80CD85A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD85A4: lwz     r0, 0(r4)
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
label_80CD85A8:
    ctx->pc = 0x80CD85A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85A8u)) return;
    // 80CD85A8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD85AC:
    ctx->pc = 0x80CD85ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85ACu)) return;
    // 80CD85AC: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD85B0:
    ctx->pc = 0x80CD85B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85B0u)) return;
    // 80CD85B0: addi    r4, r4, 10420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10420);

label_80CD85B4:
    ctx->pc = 0x80CD85B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD85B4: lwzx    r4, r4, r0
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
label_80CD85B8:
    ctx->pc = 0x80CD85B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD85B8: lwz     r4, 8(r4)
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
label_80CD85BC:
    ctx->pc = 0x80CD85BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85BCu)) return;
    // 80CD85BC: bl      0x8045F608
    {
            ctx->lr = 0x80CD85C0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CD85C0:
    ctx->pc = 0x80CD85C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD85C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD85C0: bl      0x8045BFF4
    {
            ctx->lr = 0x80CD85C4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CD85C4:
    ctx->pc = 0x80CD85C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD85C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD85C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD85C8:
    ctx->pc = 0x80CD85C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85C8u)) return;
    // 80CD85C8: bl      0x8045F220
    {
            ctx->lr = 0x80CD85CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD85CC:
    ctx->pc = 0x80CD85CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD85CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD85CC: bl      0x8045C034
    {
            ctx->lr = 0x80CD85D0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CD85D0:
    ctx->pc = 0x80CD85D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD85D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CD85D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD85D4:
    ctx->pc = 0x80CD85D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85D4u)) return;
    // 80CD85D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CD85D8:
    ctx->pc = 0x80CD85D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85D8u)) return;
    // 80CD85D8: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD85DC:
    ctx->pc = 0x80CD85DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85DCu)) return;
    // 80CD85DC: addi    r5, r5, 9276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9276);

label_80CD85E0:
    ctx->pc = 0x80CD85E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD85E0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD85E0u)) return;
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
label_80CD85E4:
    ctx->pc = 0x80CD85E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85E4u)) return;
    // 80CD85E4: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD85E8:
    ctx->pc = 0x80CD85E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85E8u)) return;
    // 80CD85E8: addi    r5, r5, 9280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9280);

label_80CD85EC:
    ctx->pc = 0x80CD85ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD85EC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD85ECu)) return;
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
label_80CD85F0:
    ctx->pc = 0x80CD85F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85F0u)) return;
    // 80CD85F0: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD85F4:
    ctx->pc = 0x80CD85F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85F4u)) return;
    // 80CD85F4: addi    r5, r5, 9284
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9284);

label_80CD85F8:
    ctx->pc = 0x80CD85F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD85F8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD85F8u)) return;
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
label_80CD85FC:
    ctx->pc = 0x80CD85FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD85FCu)) return;
    // 80CD85FC: bl      0x8045C750
    {
            ctx->lr = 0x80CD8600u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CD8600:
    ctx->pc = 0x80CD8600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CD8600: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8604:
    ctx->pc = 0x80CD8604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8604u)) return;
    // 80CD8604: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CD8608:
    ctx->pc = 0x80CD8608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8608u)) return;
    // 80CD8608: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CD860C:
    ctx->pc = 0x80CD860Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD860Cu)) return;
    // 80CD860C: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80CD8610:
    ctx->pc = 0x80CD8610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8610u)) return;
    // 80CD8610: addi    r6, r6, -23808
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23808);

label_80CD8614:
    ctx->pc = 0x80CD8614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8614u)) return;
    // 80CD8614: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CD8618:
    ctx->pc = 0x80CD8618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8618u)) return;
    // 80CD8618: bl      0x8045C7B4
    {
            ctx->lr = 0x80CD861Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CD861C:
    ctx->pc = 0x80CD861Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD861Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CD861C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8620:
    ctx->pc = 0x80CD8620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8620u)) return;
    // 80CD8620: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80CD8624:
    ctx->pc = 0x80CD8624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8624u)) return;
    // 80CD8624: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD8628:
    ctx->pc = 0x80CD8628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8628u)) return;
    // 80CD8628: addi    r5, r5, 9288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9288);

label_80CD862C:
    ctx->pc = 0x80CD862Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD862Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD862C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD862Cu)) return;
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
label_80CD8630:
    ctx->pc = 0x80CD8630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8630u)) return;
    // 80CD8630: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD8634:
    ctx->pc = 0x80CD8634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8634u)) return;
    // 80CD8634: addi    r5, r5, 9292
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9292);

label_80CD8638:
    ctx->pc = 0x80CD8638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8638: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8638u)) return;
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
label_80CD863C:
    ctx->pc = 0x80CD863Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD863Cu)) return;
    // 80CD863C: lis     r5, -27371
    ctx->gpr[5] = ((u32)(s32)(-27371) << 16);

label_80CD8640:
    ctx->pc = 0x80CD8640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8640u)) return;
    // 80CD8640: addi    r5, r5, 9296
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9296);

label_80CD8644:
    ctx->pc = 0x80CD8644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8644: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8644u)) return;
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
label_80CD8648:
    ctx->pc = 0x80CD8648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8648u)) return;
    // 80CD8648: bl      0x8045C750
    {
            ctx->lr = 0x80CD864Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CD864C:
    ctx->pc = 0x80CD864Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD864Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD864C: li      r3, 1386
    ctx->gpr[3] = (u32)(s32)(1386);

label_80CD8650:
    ctx->pc = 0x80CD8650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8650u)) return;
    // 80CD8650: bl      0x8045BFA0
    {
            ctx->lr = 0x80CD8654u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CD8654:
    ctx->pc = 0x80CD8654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD8654: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CD8658:
    ctx->pc = 0x80CD8658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8658u)) return;
    // 80CD8658: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CD865C:
    ctx->pc = 0x80CD865Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD865Cu)) return;
    // 80CD865C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CD8660:
    ctx->pc = 0x80CD8660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8660: lwz     r0, 0(r4)
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
label_80CD8664:
    ctx->pc = 0x80CD8664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8664u)) return;
    // 80CD8664: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD8668:
    ctx->pc = 0x80CD8668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8668u)) return;
    // 80CD8668: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD866C:
    ctx->pc = 0x80CD866Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD866Cu)) return;
    // 80CD866C: addi    r4, r4, 10420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10420);

label_80CD8670:
    ctx->pc = 0x80CD8670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8670: lwzx    r4, r4, r0
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
label_80CD8674:
    ctx->pc = 0x80CD8674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8674: lwz     r4, 12(r4)
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
label_80CD8678:
    ctx->pc = 0x80CD8678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8678u)) return;
    // 80CD8678: bl      0x8045F608
    {
            ctx->lr = 0x80CD867Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CD867C:
    ctx->pc = 0x80CD867Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD867Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD867C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CD8680:
    ctx->pc = 0x80CD8680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8680u)) return;
    // 80CD8680: bl      0x8045F7C8
    {
            ctx->lr = 0x80CD8684u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CD8684:
    ctx->pc = 0x80CD8684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8684: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8688:
    ctx->pc = 0x80CD8688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8688u)) return;
    // 80CD8688: bl      0x8045F220
    {
            ctx->lr = 0x80CD868Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD868C:
    ctx->pc = 0x80CD868Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD868Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD868C: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD8690u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD8690:
    ctx->pc = 0x80CD8690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD8690: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8694:
    ctx->pc = 0x80CD8694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8694u)) return;
    // 80CD8694: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD8698:
    ctx->pc = 0x80CD8698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8698: lwz     r3, 0(r3)
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
label_80CD869C:
    ctx->pc = 0x80CD869Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD869Cu)) return;
    // 80CD869C: bl      0x8045EB8C
    {
            ctx->lr = 0x80CD86A0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CD86A0:
    ctx->pc = 0x80CD86A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD86A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD86A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD86A4:
    ctx->pc = 0x80CD86A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86A4u)) return;
    // 80CD86A4: bl      0x8045F220
    {
            ctx->lr = 0x80CD86A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CD86A8:
    ctx->pc = 0x80CD86A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD86A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD86A8: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD86AC:
    ctx->pc = 0x80CD86ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86ACu)) return;
    // 80CD86AC: addi    r4, r4, 26032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26032);

label_80CD86B0:
    ctx->pc = 0x80CD86B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86B0u)) return;
    // 80CD86B0: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CD86B4:
    ctx->pc = 0x80CD86B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86B4u)) return;
    // 80CD86B4: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CD86B8:
    ctx->pc = 0x80CD86B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86B8u)) return;
    // 80CD86B8: lis     r6, -27371
    ctx->gpr[6] = ((u32)(s32)(-27371) << 16);

label_80CD86BC:
    ctx->pc = 0x80CD86BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86BCu)) return;
    // 80CD86BC: addi    r6, r6, 9236
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9236);

label_80CD86C0:
    ctx->pc = 0x80CD86C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD86C0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD86C0u)) return;
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
label_80CD86C4:
    ctx->pc = 0x80CD86C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86C4u)) return;
    // 80CD86C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CD86C8:
    ctx->pc = 0x80CD86C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86C8u)) return;
    // 80CD86C8: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CD86CC:
    ctx->pc = 0x80CD86CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86CCu)) return;
    // 80CD86CC: bl      0x8045EBE4
    {
            ctx->lr = 0x80CD86D0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CD86D0:
    ctx->pc = 0x80CD86D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD86D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD86D0: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD86D4:
    ctx->pc = 0x80CD86D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86D4u)) return;
    // 80CD86D4: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD86D8:
    ctx->pc = 0x80CD86D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD86D8: lwz     r3, 0(r3)
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
label_80CD86DC:
    ctx->pc = 0x80CD86DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86DCu)) return;
    // 80CD86DC: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD86E0:
    ctx->pc = 0x80CD86E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86E0u)) return;
    // 80CD86E0: addi    r4, r4, -16452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16452);

label_80CD86E4:
    ctx->pc = 0x80CD86E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86E4u)) return;
    // 80CD86E4: lis     r5, -27370
    ctx->gpr[5] = ((u32)(s32)(-27370) << 16);

label_80CD86E8:
    ctx->pc = 0x80CD86E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86E8u)) return;
    // 80CD86E8: addi    r5, r5, 7148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7148);

label_80CD86EC:
    ctx->pc = 0x80CD86ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD86EC: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD86F0:
    ctx->pc = 0x80CD86F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86F0u)) return;
    // 80CD86F0: lis     r6, -27369
    ctx->gpr[6] = ((u32)(s32)(-27369) << 16);

label_80CD86F4:
    ctx->pc = 0x80CD86F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86F4u)) return;
    // 80CD86F4: addi    r6, r6, -24328
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24328);

label_80CD86F8:
    ctx->pc = 0x80CD86F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86F8u)) return;
    // 80CD86F8: lis     r7, -27371
    ctx->gpr[7] = ((u32)(s32)(-27371) << 16);

label_80CD86FC:
    ctx->pc = 0x80CD86FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD86FCu)) return;
    // 80CD86FC: addi    r7, r7, 9236
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9236);

label_80CD8700:
    ctx->pc = 0x80CD8700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8700: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CD8700u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8704:
    ctx->pc = 0x80CD8704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8704u)) return;
    // 80CD8704: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80CD8708:
    ctx->pc = 0x80CD8708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8708u)) return;
    // 80CD8708: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_80CD870C:
    ctx->pc = 0x80CD870Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD870Cu)) return;
    // 80CD870C: bl      0x8045EBB8
    {
            ctx->lr = 0x80CD8710u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80CD8710:
    ctx->pc = 0x80CD8710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8710: li      r3, 1387
    ctx->gpr[3] = (u32)(s32)(1387);

label_80CD8714:
    ctx->pc = 0x80CD8714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8714u)) return;
    // 80CD8714: bl      0x8045BFA0
    {
            ctx->lr = 0x80CD8718u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CD8718:
    ctx->pc = 0x80CD8718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CD8718: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CD871C:
    ctx->pc = 0x80CD871Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD871Cu)) return;
    // 80CD871C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CD8720:
    ctx->pc = 0x80CD8720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8720u)) return;
    // 80CD8720: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CD8724:
    ctx->pc = 0x80CD8724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8724: lwz     r0, 0(r4)
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
label_80CD8728:
    ctx->pc = 0x80CD8728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8728u)) return;
    // 80CD8728: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD872C:
    ctx->pc = 0x80CD872Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD872Cu)) return;
    // 80CD872C: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8730:
    ctx->pc = 0x80CD8730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8730u)) return;
    // 80CD8730: addi    r4, r4, 10420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10420);

label_80CD8734:
    ctx->pc = 0x80CD8734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8734: lwzx    r4, r4, r0
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
label_80CD8738:
    ctx->pc = 0x80CD8738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8738: lwz     r4, 16(r4)
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
label_80CD873C:
    ctx->pc = 0x80CD873Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD873Cu)) return;
    // 80CD873C: bl      0x8045F608
    {
            ctx->lr = 0x80CD8740u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CD8740:
    ctx->pc = 0x80CD8740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8740: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CD8744:
    ctx->pc = 0x80CD8744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8744u)) return;
    // 80CD8744: bl      0x8045F7C8
    {
            ctx->lr = 0x80CD8748u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CD8748:
    ctx->pc = 0x80CD8748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8748: bl      0x8045F32C
    {
            ctx->lr = 0x80CD874Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CD874C:
    ctx->pc = 0x80CD874Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD874Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CD874C: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8750:
    ctx->pc = 0x80CD8750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8750u)) return;
    // 80CD8750: addi    r3, r3, 9300
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9300);

label_80CD8754:
    ctx->pc = 0x80CD8754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD8754: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8754u)) return;
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
label_80CD8758:
    ctx->pc = 0x80CD8758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8758u)) return;
    // 80CD8758: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD875C:
    ctx->pc = 0x80CD875Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD875Cu)) return;
    // 80CD875C: addi    r3, r3, 9304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9304);

label_80CD8760:
    ctx->pc = 0x80CD8760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8760: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8760u)) return;
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
label_80CD8764:
    ctx->pc = 0x80CD8764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8764u)) return;
    // 80CD8764: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8768:
    ctx->pc = 0x80CD8768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8768u)) return;
    // 80CD8768: addi    r3, r3, 9308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9308);

label_80CD876C:
    ctx->pc = 0x80CD876Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD876Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD876C: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD876Cu)) return;
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
label_80CD8770:
    ctx->pc = 0x80CD8770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8770u)) return;
    // 80CD8770: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80CD8770u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80CD8774:
    ctx->pc = 0x80CD8774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8774u)) return;
    // 80CD8774: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80CD8774u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80CD8778:
    ctx->pc = 0x80CD8778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8778u)) return;
    // 80CD8778: bl      0x80CD8A08
    {
            ctx->lr = 0x80CD877Cu;
            goto label_80CD8A08;
    }

label_80CD877C:
    ctx->pc = 0x80CD877Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD877Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD877C: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD8780:
    ctx->pc = 0x80CD8780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8780u)) return;
    // 80CD8780: addi    r4, r4, -5500
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5500);

label_80CD8784:
    ctx->pc = 0x80CD8784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8784: stw     r3, 0(r4)
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
label_80CD8788:
    ctx->pc = 0x80CD8788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8788u)) return;
    // 80CD8788: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80CD878C:
    ctx->pc = 0x80CD878Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD878Cu)) return;
    // 80CD878C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CD8790u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CD8790:
    ctx->pc = 0x80CD8790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8790: b       0x80CD87E4
    {
            goto label_80CD87E4;
    }

label_80CD8794:
    ctx->pc = 0x80CD8794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD8794: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8798:
    ctx->pc = 0x80CD8798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8798u)) return;
    // 80CD8798: addi    r3, r3, -5500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5500);

label_80CD879C:
    ctx->pc = 0x80CD879Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD879Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD879C: lwz     r3, 0(r3)
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
label_80CD87A0:
    ctx->pc = 0x80CD87A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87A0u)) return;
    // 80CD87A0: cmplwi  r3, 0x0000
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

label_80CD87A4:
    ctx->pc = 0x80CD87A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87A4u)) return;
    // 80CD87A4: bc    12, 2, 0x80CD87BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD87BC;
        }
    }

label_80CD87A8:
    ctx->pc = 0x80CD87A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD87A8: bl      0x8050F9E0
    {
            ctx->lr = 0x80CD87ACu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CD87AC:
    ctx->pc = 0x80CD87ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD87AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD87B0:
    ctx->pc = 0x80CD87B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87B0u)) return;
    // 80CD87B0: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD87B4:
    ctx->pc = 0x80CD87B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87B4u)) return;
    // 80CD87B4: addi    r3, r3, -5500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5500);

label_80CD87B8:
    ctx->pc = 0x80CD87B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD87B8: stw     r0, 0(r3)
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
label_80CD87BC:
    ctx->pc = 0x80CD87BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD87BC: bl      0x80CD94C0
    {
            ctx->lr = 0x80CD87C0u;
            goto label_80CD94C0;
    }

label_80CD87C0:
    ctx->pc = 0x80CD87C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD87C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD87C4:
    ctx->pc = 0x80CD87C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87C4u)) return;
    // 80CD87C4: bl      0x8045EC10
    {
            ctx->lr = 0x80CD87C8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CD87C8:
    ctx->pc = 0x80CD87C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD87C8: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD87CC:
    ctx->pc = 0x80CD87CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87CCu)) return;
    // 80CD87CC: addi    r3, r3, -5504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5504);

label_80CD87D0:
    ctx->pc = 0x80CD87D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87D0u)) return;
    // 80CD87D0: bl      0x8045F070
    {
            ctx->lr = 0x80CD87D4u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80CD87D4:
    ctx->pc = 0x80CD87D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD87D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD87D8:
    ctx->pc = 0x80CD87D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87D8u)) return;
    // 80CD87D8: bl      0x8045ED54
    {
            ctx->lr = 0x80CD87DCu;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80CD87DC:
    ctx->pc = 0x80CD87DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD87DC: bl      0x8045DE34
    {
            ctx->lr = 0x80CD87E0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80CD87E0:
    ctx->pc = 0x80CD87E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD87E0: bl      0x80460A80
    {
            ctx->lr = 0x80CD87E4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80CD87E4:
    ctx->pc = 0x80CD87E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD87E4: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD87E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CD87E4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD87E8:
    ctx->pc = 0x80CD87E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD87E8: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD87E8u)) return;
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
label_80CD87EC:
    ctx->pc = 0x80CD87ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87ECu)) return;
    // 80CD87EC: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80CD87F0:
    ctx->pc = 0x80CD87F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87F0u)) return;
    // 80CD87F0: bl      0x80006E20
    {
            ctx->lr = 0x80CD87F4u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80CD87F4:
    ctx->pc = 0x80CD87F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD87F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD87F4: lwz     r0, 52(r1)
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
label_80CD87F8:
    ctx->pc = 0x80CD87F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD87F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD87F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD87FC:
    ctx->pc = 0x80CD87FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD87FCu)) return;
    // 80CD87FC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80CD8800:
    ctx->pc = 0x80CD8800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8800u)) return;
    // 80CD8800: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8804:
    ctx->pc = 0x80CD8804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8804: stwu     r1, -64(r1)
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
label_80CD8808:
    ctx->pc = 0x80CD8808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8808: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD880C:
    ctx->pc = 0x80CD880Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD880Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD880C: stw     r0, 68(r1)
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
label_80CD8810:
    ctx->pc = 0x80CD8810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8810u)) return;
    // 80CD8810: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80CD8814:
    ctx->pc = 0x80CD8814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8814u)) return;
    // 80CD8814: bl      0x80006DD4
    {
            ctx->lr = 0x80CD8818u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80CD8818:
    ctx->pc = 0x80CD8818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CD8818: lwz     r27, 32(r3)
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
label_80CD881C:
    ctx->pc = 0x80CD881Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD881Cu)) return;
    // 80CD881C: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8820:
    ctx->pc = 0x80CD8820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8820u)) return;
    // 80CD8820: addi    r3, r3, 9312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9312);

label_80CD8824:
    ctx->pc = 0x80CD8824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CD8824: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8824u)) return;
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
label_80CD8828:
    ctx->pc = 0x80CD8828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CD8828: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CD8828u)) return;
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
label_80CD882C:
    ctx->pc = 0x80CD882Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD882Cu)) return;
    // 80CD882C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD882Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CD8830:
    ctx->pc = 0x80CD8830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8830u)) return;
    // 80CD8830: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8830u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CD8834:
    ctx->pc = 0x80CD8834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CD8834: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8834u)) return;
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
label_80CD8838:
    ctx->pc = 0x80CD8838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CD8838: lwz     r31, 12(r1)
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
label_80CD883C:
    ctx->pc = 0x80CD883Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD883Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CD883C: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CD883Cu)) return;
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
label_80CD8840:
    ctx->pc = 0x80CD8840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8840u)) return;
    // 80CD8840: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8840u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CD8844:
    ctx->pc = 0x80CD8844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8844u)) return;
    // 80CD8844: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8844u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CD8848:
    ctx->pc = 0x80CD8848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD8848: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8848u)) return;
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
label_80CD884C:
    ctx->pc = 0x80CD884Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD884Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CD884C: lwz     r30, 20(r1)
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
label_80CD8850:
    ctx->pc = 0x80CD8850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD8850: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CD8850u)) return;
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
label_80CD8854:
    ctx->pc = 0x80CD8854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8854u)) return;
    // 80CD8854: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8854u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CD8858:
    ctx->pc = 0x80CD8858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8858u)) return;
    // 80CD8858: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8858u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CD885C:
    ctx->pc = 0x80CD885Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD885Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD885C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD885Cu)) return;
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
label_80CD8860:
    ctx->pc = 0x80CD8860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8860: lwz     r29, 28(r1)
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
label_80CD8864:
    ctx->pc = 0x80CD8864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD8864: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CD8864u)) return;
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
label_80CD8868:
    ctx->pc = 0x80CD8868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8868u)) return;
    // 80CD8868: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8868u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CD886C:
    ctx->pc = 0x80CD886Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD886Cu)) return;
    // 80CD886C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD886Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CD8870:
    ctx->pc = 0x80CD8870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8870: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8870u)) return;
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
label_80CD8874:
    ctx->pc = 0x80CD8874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8874: lwz     r28, 36(r1)
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
label_80CD8878:
    ctx->pc = 0x80CD8878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8878u)) return;
    // 80CD8878: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CD887C:
    ctx->pc = 0x80CD887Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD887Cu)) return;
    // 80CD887C: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80CD8880:
    ctx->pc = 0x80CD8880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8880: lwz     r0, 0(r3)
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
label_80CD8884:
    ctx->pc = 0x80CD8884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8884u)) return;
    // 80CD8884: cmpwi   r0, 0
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

label_80CD8888:
    ctx->pc = 0x80CD8888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8888u)) return;
    // 80CD8888: bc    4, 2, 0x80CD8940
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8940;
        }
    }

label_80CD888C:
    ctx->pc = 0x80CD888Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD888Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD888C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CD8890:
    ctx->pc = 0x80CD8890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8890u)) return;
    // 80CD8890: cmplwi  r0, 0x0000
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

label_80CD8894:
    ctx->pc = 0x80CD8894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8894u)) return;
    // 80CD8894: bc    12, 2, 0x80CD8940
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8940;
        }
    }

label_80CD8898:
    ctx->pc = 0x80CD8898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8898: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD889C:
    ctx->pc = 0x80CD889Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD889Cu)) return;
    // 80CD889C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80CD88A0:
    ctx->pc = 0x80CD88A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88A0u)) return;
    // 80CD88A0: bl      0x8060F4F8
    {
            ctx->lr = 0x80CD88A4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CD88A4:
    ctx->pc = 0x80CD88A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD88A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD88A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CD88A8:
    ctx->pc = 0x80CD88A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88A8u)) return;
    // 80CD88A8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80CD88AC:
    ctx->pc = 0x80CD88ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88ACu)) return;
    // 80CD88AC: bl      0x8060F4F8
    {
            ctx->lr = 0x80CD88B0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CD88B0:
    ctx->pc = 0x80CD88B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD88B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD88B0: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CD88B0u)) return;
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
label_80CD88B4:
    ctx->pc = 0x80CD88B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88B4u)) return;
    // 80CD88B4: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD88B8:
    ctx->pc = 0x80CD88B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88B8u)) return;
    // 80CD88B8: addi    r3, r3, 9320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9320);

label_80CD88BC:
    ctx->pc = 0x80CD88BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD88BC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD88BCu)) return;
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
label_80CD88C0:
    ctx->pc = 0x80CD88C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88C0u)) return;
    // 80CD88C0: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD88C0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80CD88C4:
    ctx->pc = 0x80CD88C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88C4u)) return;
    // 80CD88C4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CD88C8:
    ctx->pc = 0x80CD88C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88C8u)) return;
    // 80CD88C8: bc    4, 2, 0x80CD88DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD88DC;
        }
    }

label_80CD88CC:
    ctx->pc = 0x80CD88CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD88CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD88CC: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD88D0:
    ctx->pc = 0x80CD88D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88D0u)) return;
    // 80CD88D0: addi    r3, r3, 9316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9316);

label_80CD88D4:
    ctx->pc = 0x80CD88D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD88D4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD88D4u)) return;
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
label_80CD88D8:
    ctx->pc = 0x80CD88D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88D8u)) return;
    // 80CD88D8: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD88D8u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80CD88DC:
    ctx->pc = 0x80CD88DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD88DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD88DC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CD88E0:
    ctx->pc = 0x80CD88E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88E0u)) return;
    // 80CD88E0: cmplwi  r0, 0x00FF
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

label_80CD88E4:
    ctx->pc = 0x80CD88E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88E4u)) return;
    // 80CD88E4: bc    4, 1, 0x80CD88EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD88EC;
        }
    }

label_80CD88E8:
    ctx->pc = 0x80CD88E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD88E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD88E8: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80CD88EC:
    ctx->pc = 0x80CD88ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD88ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80CD88EC: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD88F0:
    ctx->pc = 0x80CD88F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88F0u)) return;
    // 80CD88F0: addi    r3, r3, 9324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9324);

label_80CD88F4:
    ctx->pc = 0x80CD88F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CD88F4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD88F4u)) return;
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
label_80CD88F8:
    ctx->pc = 0x80CD88F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88F8u)) return;
    // 80CD88F8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CD88F8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CD88FC:
    ctx->pc = 0x80CD88FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD88FCu)) return;
    // 80CD88FC: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8900:
    ctx->pc = 0x80CD8900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8900u)) return;
    // 80CD8900: addi    r3, r3, 9328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9328);

label_80CD8904:
    ctx->pc = 0x80CD8904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD8904: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8904u)) return;
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
label_80CD8908:
    ctx->pc = 0x80CD8908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8908u)) return;
    // 80CD8908: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD890C:
    ctx->pc = 0x80CD890Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD890Cu)) return;
    // 80CD890C: addi    r3, r3, 9332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9332);

label_80CD8910:
    ctx->pc = 0x80CD8910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8910: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8910u)) return;
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
label_80CD8914:
    ctx->pc = 0x80CD8914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8914u)) return;
    // 80CD8914: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80CD8918:
    ctx->pc = 0x80CD8918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8918u)) return;
    // 80CD8918: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80CD891C:
    ctx->pc = 0x80CD891Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD891Cu)) return;
    // 80CD891C: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80CD8920:
    ctx->pc = 0x80CD8920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8920u)) return;
    // 80CD8920: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CD8924:
    ctx->pc = 0x80CD8924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8924u)) return;
    // 80CD8924: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80CD8928:
    ctx->pc = 0x80CD8928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8928u)) return;
    // 80CD8928: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80CD892C:
    ctx->pc = 0x80CD892Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD892Cu)) return;
    // 80CD892C: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80CD8930:
    ctx->pc = 0x80CD8930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8930u)) return;
    // 80CD8930: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80CD8934:
    ctx->pc = 0x80CD8934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8934u)) return;
    // 80CD8934: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80CD8938:
    ctx->pc = 0x80CD8938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8938u)) return;
    // 80CD8938: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80CD893C:
    ctx->pc = 0x80CD893Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD893Cu)) return;
    // 80CD893C: bl      0x80CD8AFC
    {
            ctx->lr = 0x80CD8940u;
            goto label_80CD8AFC;
    }

label_80CD8940:
    ctx->pc = 0x80CD8940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8940: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80CD8944:
    ctx->pc = 0x80CD8944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8944u)) return;
    // 80CD8944: bl      0x80006E20
    {
            ctx->lr = 0x80CD8948u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80CD8948:
    ctx->pc = 0x80CD8948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8948: lwz     r0, 68(r1)
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
label_80CD894C:
    ctx->pc = 0x80CD894Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD894Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD894C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8950:
    ctx->pc = 0x80CD8950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8950u)) return;
    // 80CD8950: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80CD8954:
    ctx->pc = 0x80CD8954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8954u)) return;
    // 80CD8954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8958:
    ctx->pc = 0x80CD8958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8958: stwu     r1, -16(r1)
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
label_80CD895C:
    ctx->pc = 0x80CD895Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD895Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD895C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8960:
    ctx->pc = 0x80CD8960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD8960: stw     r0, 20(r1)
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
label_80CD8964:
    ctx->pc = 0x80CD8964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD8964: lwz     r5, 32(r3)
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
label_80CD8968:
    ctx->pc = 0x80CD8968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8968: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8968u)) return;
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
label_80CD896C:
    ctx->pc = 0x80CD896Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD896Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD896C: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD896Cu)) return;
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
label_80CD8970:
    ctx->pc = 0x80CD8970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8970u)) return;
    // 80CD8970: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8970u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80CD8974:
    ctx->pc = 0x80CD8974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8974u)) return;
    // 80CD8974: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8978:
    ctx->pc = 0x80CD8978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8978u)) return;
    // 80CD8978: addi    r4, r4, 9336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9336);

label_80CD897C:
    ctx->pc = 0x80CD897Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD897Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD897C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD897Cu)) return;
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
label_80CD8980:
    ctx->pc = 0x80CD8980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8980u)) return;
    // 80CD8980: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8980u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CD8984:
    ctx->pc = 0x80CD8984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8984u)) return;
    // 80CD8984: bc    4, 1, 0x80CD8990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8990;
        }
    }

label_80CD8988:
    ctx->pc = 0x80CD8988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8988: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8988u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80CD898C:
    ctx->pc = 0x80CD898Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD898Cu)) return;
    // 80CD898C: b       0x80CD89A8
    {
            goto label_80CD89A8;
    }

label_80CD8990:
    ctx->pc = 0x80CD8990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD8990: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8994:
    ctx->pc = 0x80CD8994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8994u)) return;
    // 80CD8994: addi    r4, r4, 9324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9324);

label_80CD8998:
    ctx->pc = 0x80CD8998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8998: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD8998u)) return;
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
label_80CD899C:
    ctx->pc = 0x80CD899Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD899Cu)) return;
    // 80CD899C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD899Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CD89A0:
    ctx->pc = 0x80CD89A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89A0u)) return;
    // 80CD89A0: bc    4, 0, 0x80CD89A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD89A8;
        }
    }

label_80CD89A4:
    ctx->pc = 0x80CD89A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD89A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD89A4: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD89A4u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80CD89A8:
    ctx->pc = 0x80CD89A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD89A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD89A8: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD89A8u)) return;
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
label_80CD89AC:
    ctx->pc = 0x80CD89ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89ACu)) return;
    // 80CD89AC: bl      0x80CD8804
    {
            ctx->lr = 0x80CD89B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CD8804u;
                return;
            }
            goto label_80CD8804;
    }

label_80CD89B0:
    ctx->pc = 0x80CD89B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD89B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD89B0: lwz     r0, 20(r1)
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
label_80CD89B4:
    ctx->pc = 0x80CD89B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD89B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD89B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD89B8:
    ctx->pc = 0x80CD89B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89B8u)) return;
    // 80CD89B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD89BC:
    ctx->pc = 0x80CD89BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89BCu)) return;
    // 80CD89BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD89C0:
    ctx->pc = 0x80CD89C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD89C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD89C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD89C4:
    ctx->pc = 0x80CD89C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD89C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD89C4: stwu     r1, -16(r1)
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
label_80CD89C8:
    ctx->pc = 0x80CD89C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD89C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD89CC:
    ctx->pc = 0x80CD89CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD89CC: stw     r0, 20(r1)
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
label_80CD89D0:
    ctx->pc = 0x80CD89D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89D0u)) return;
    // 80CD89D0: lis     r4, -32562
    ctx->gpr[4] = ((u32)(s32)(-32562) << 16);

label_80CD89D4:
    ctx->pc = 0x80CD89D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89D4u)) return;
    // 80CD89D4: addi    r0, r4, -30376
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-30376);

label_80CD89D8:
    ctx->pc = 0x80CD89D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD89D8: stw     r0, 16(r3)
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
label_80CD89DC:
    ctx->pc = 0x80CD89DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89DCu)) return;
    // 80CD89DC: lis     r4, -32562
    ctx->gpr[4] = ((u32)(s32)(-32562) << 16);

label_80CD89E0:
    ctx->pc = 0x80CD89E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89E0u)) return;
    // 80CD89E0: addi    r0, r4, -30716
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-30716);

label_80CD89E4:
    ctx->pc = 0x80CD89E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD89E4: stw     r0, 20(r3)
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
label_80CD89E8:
    ctx->pc = 0x80CD89E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89E8u)) return;
    // 80CD89E8: lis     r4, -32562
    ctx->gpr[4] = ((u32)(s32)(-32562) << 16);

label_80CD89EC:
    ctx->pc = 0x80CD89ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89ECu)) return;
    // 80CD89EC: addi    r0, r4, -30272
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-30272);

label_80CD89F0:
    ctx->pc = 0x80CD89F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD89F0: stw     r0, 24(r3)
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
label_80CD89F4:
    ctx->pc = 0x80CD89F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD89F4u)) return;
    // 80CD89F4: bl      0x80CD8958
    {
            ctx->lr = 0x80CD89F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CD8958u;
                return;
            }
            goto label_80CD8958;
    }

label_80CD89F8:
    ctx->pc = 0x80CD89F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD89F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD89F8: lwz     r0, 20(r1)
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
label_80CD89FC:
    ctx->pc = 0x80CD89FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD89FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD89FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A00:
    ctx->pc = 0x80CD8A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A00u)) return;
    // 80CD8A00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD8A04:
    ctx->pc = 0x80CD8A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A04u)) return;
    // 80CD8A04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8A08:
    ctx->pc = 0x80CD8A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CD8A08: stwu     r1, -96(r1)
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
label_80CD8A0C:
    ctx->pc = 0x80CD8A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CD8A0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A10:
    ctx->pc = 0x80CD8A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CD8A10: stw     r0, 100(r1)
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
label_80CD8A14:
    ctx->pc = 0x80CD8A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CD8A14: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A14u)) return;
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
label_80CD8A18:
    ctx->pc = 0x80CD8A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CD8A18: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8A18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CD8A18u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A1C:
    ctx->pc = 0x80CD8A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CD8A1C: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A1Cu)) return;
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
label_80CD8A20:
    ctx->pc = 0x80CD8A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD8A20: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CD8A20u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A24:
    ctx->pc = 0x80CD8A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CD8A24: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A24u)) return;
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
label_80CD8A28:
    ctx->pc = 0x80CD8A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD8A28: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80CD8A28u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A2C:
    ctx->pc = 0x80CD8A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD8A2C: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A2Cu)) return;
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
label_80CD8A30:
    ctx->pc = 0x80CD8A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD8A30: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80CD8A30u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A34:
    ctx->pc = 0x80CD8A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8A34: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A34u)) return;
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
label_80CD8A38:
    ctx->pc = 0x80CD8A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8A38: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8A38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80CD8A38u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A3C:
    ctx->pc = 0x80CD8A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A3Cu)) return;
    // 80CD8A3C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80CD8A3Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80CD8A40:
    ctx->pc = 0x80CD8A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A40u)) return;
    // 80CD8A40: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80CD8A40u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80CD8A44:
    ctx->pc = 0x80CD8A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A44u)) return;
    // 80CD8A44: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80CD8A44u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80CD8A48:
    ctx->pc = 0x80CD8A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A48u)) return;
    // 80CD8A48: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80CD8A48u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80CD8A4C:
    ctx->pc = 0x80CD8A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A4Cu)) return;
    // 80CD8A4C: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80CD8A4Cu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80CD8A50:
    ctx->pc = 0x80CD8A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A50u)) return;
    // 80CD8A50: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD8A54:
    ctx->pc = 0x80CD8A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A54u)) return;
    // 80CD8A54: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80CD8A58:
    ctx->pc = 0x80CD8A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A58u)) return;
    // 80CD8A58: lis     r5, -32562
    ctx->gpr[5] = ((u32)(s32)(-32562) << 16);

label_80CD8A5C:
    ctx->pc = 0x80CD8A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A5Cu)) return;
    // 80CD8A5C: addi    r5, r5, -30268
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30268);

label_80CD8A60:
    ctx->pc = 0x80CD8A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A60u)) return;
    // 80CD8A60: bl      0x8050FD60
    {
            ctx->lr = 0x80CD8A64u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CD8A64:
    ctx->pc = 0x80CD8A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CD8A64: lwz     r5, 32(r3)
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
label_80CD8A68:
    ctx->pc = 0x80CD8A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CD8A68: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A68u)) return;
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
label_80CD8A6C:
    ctx->pc = 0x80CD8A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CD8A6C: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A6Cu)) return;
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
label_80CD8A70:
    ctx->pc = 0x80CD8A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CD8A70: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A70u)) return;
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
label_80CD8A74:
    ctx->pc = 0x80CD8A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CD8A74: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A74u)) return;
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
label_80CD8A78:
    ctx->pc = 0x80CD8A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CD8A78: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A78u)) return;
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
label_80CD8A7C:
    ctx->pc = 0x80CD8A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A7Cu)) return;
    // 80CD8A7C: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8A80:
    ctx->pc = 0x80CD8A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A80u)) return;
    // 80CD8A80: addi    r4, r4, 9320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9320);

label_80CD8A84:
    ctx->pc = 0x80CD8A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD8A84: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A84u)) return;
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
label_80CD8A88:
    ctx->pc = 0x80CD8A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CD8A88: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A88u)) return;
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
label_80CD8A8C:
    ctx->pc = 0x80CD8A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD8A8C: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CD8A8Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A90:
    ctx->pc = 0x80CD8A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD8A90: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A90u)) return;
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
label_80CD8A94:
    ctx->pc = 0x80CD8A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD8A94: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CD8A94u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8A98:
    ctx->pc = 0x80CD8A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8A98: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8A98u)) return;
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
label_80CD8A9C:
    ctx->pc = 0x80CD8A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8A9C: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8A9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80CD8A9Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8AA0:
    ctx->pc = 0x80CD8AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD8AA0: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AA0u)) return;
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
label_80CD8AA4:
    ctx->pc = 0x80CD8AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD8AA4: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8AA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80CD8AA4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8AA8:
    ctx->pc = 0x80CD8AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8AA8: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AA8u)) return;
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
label_80CD8AAC:
    ctx->pc = 0x80CD8AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8AAC: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8AACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80CD8AACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8AB0:
    ctx->pc = 0x80CD8AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8AB0: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AB0u)) return;
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
label_80CD8AB4:
    ctx->pc = 0x80CD8AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8AB4: lwz     r0, 100(r1)
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
label_80CD8AB8:
    ctx->pc = 0x80CD8AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD8AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8AB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8ABC:
    ctx->pc = 0x80CD8ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8ABCu)) return;
    // 80CD8ABC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80CD8AC0:
    ctx->pc = 0x80CD8AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AC0u)) return;
    // 80CD8AC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8AC4:
    ctx->pc = 0x80CD8AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8AC4: lwz     r3, 32(r3)
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
label_80CD8AC8:
    ctx->pc = 0x80CD8AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8AC8: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AC8u)) return;
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
label_80CD8ACC:
    ctx->pc = 0x80CD8ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8ACCu)) return;
    // 80CD8ACC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8AD0:
    ctx->pc = 0x80CD8AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8AD0: lwz     r3, 32(r3)
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
label_80CD8AD4:
    ctx->pc = 0x80CD8AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8AD4: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AD4u)) return;
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
label_80CD8AD8:
    ctx->pc = 0x80CD8AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AD8u)) return;
    // 80CD8AD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8ADC:
    ctx->pc = 0x80CD8ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8ADC: lwz     r3, 32(r3)
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
label_80CD8AE0:
    ctx->pc = 0x80CD8AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8AE0: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AE0u)) return;
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
label_80CD8AE4:
    ctx->pc = 0x80CD8AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8AE4: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AE4u)) return;
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
label_80CD8AE8:
    ctx->pc = 0x80CD8AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8AE8: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AE8u)) return;
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
label_80CD8AEC:
    ctx->pc = 0x80CD8AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AECu)) return;
    // 80CD8AEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8AF0:
    ctx->pc = 0x80CD8AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8AF0: lwz     r3, 32(r3)
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
label_80CD8AF4:
    ctx->pc = 0x80CD8AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8AF4: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8AF4u)) return;
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
label_80CD8AF8:
    ctx->pc = 0x80CD8AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8AF8u)) return;
    // 80CD8AF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8AFC:
    ctx->pc = 0x80CD8AFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8AFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8AFC: stwu     r1, -16(r1)
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
label_80CD8B00:
    ctx->pc = 0x80CD8B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8B00: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8B04:
    ctx->pc = 0x80CD8B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8B04: stw     r0, 20(r1)
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
label_80CD8B08:
    ctx->pc = 0x80CD8B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B08u)) return;
    // 80CD8B08: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CD8B0C:
    ctx->pc = 0x80CD8B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B0Cu)) return;
    // 80CD8B0C: bl      0x80607948
    {
            ctx->lr = 0x80CD8B10u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80CD8B10:
    ctx->pc = 0x80CD8B10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8B10: lwz     r0, 20(r1)
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
label_80CD8B14:
    ctx->pc = 0x80CD8B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD8B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8B14: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8B18:
    ctx->pc = 0x80CD8B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B18u)) return;
    // 80CD8B18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD8B1C:
    ctx->pc = 0x80CD8B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B1Cu)) return;
    // 80CD8B1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8B20:
    ctx->pc = 0x80CD8B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8B20: stwu     r1, -16(r1)
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
label_80CD8B24:
    ctx->pc = 0x80CD8B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8B24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8B28:
    ctx->pc = 0x80CD8B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8B28: stw     r0, 20(r1)
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
label_80CD8B2C:
    ctx->pc = 0x80CD8B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8B2C: stw     r31, 12(r1)
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
label_80CD8B30:
    ctx->pc = 0x80CD8B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8B30: lwz     r31, 32(r3)
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
label_80CD8B34:
    ctx->pc = 0x80CD8B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B34u)) return;
    // 80CD8B34: bl      0x80CD92B0
    {
            ctx->lr = 0x80CD8B38u;
            goto label_80CD92B0;
    }

label_80CD8B38:
    ctx->pc = 0x80CD8B38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8B38: lwz     r3, 8(r31)
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
label_80CD8B3C:
    ctx->pc = 0x80CD8B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B3Cu)) return;
    // 80CD8B3C: cmplwi  r3, 0x0000
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

label_80CD8B40:
    ctx->pc = 0x80CD8B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B40u)) return;
    // 80CD8B40: bc    12, 2, 0x80CD8B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8B50;
        }
    }

label_80CD8B44:
    ctx->pc = 0x80CD8B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8B44: bl      0x8050ED40
    {
            ctx->lr = 0x80CD8B48u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CD8B48:
    ctx->pc = 0x80CD8B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8B48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD8B4C:
    ctx->pc = 0x80CD8B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD8B4C: stw     r0, 8(r31)
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
label_80CD8B50:
    ctx->pc = 0x80CD8B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8B50: lwz     r31, 12(r1)
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
label_80CD8B54:
    ctx->pc = 0x80CD8B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8B54: lwz     r0, 20(r1)
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
label_80CD8B58:
    ctx->pc = 0x80CD8B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD8B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8B58: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8B5C:
    ctx->pc = 0x80CD8B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B5Cu)) return;
    // 80CD8B5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD8B60:
    ctx->pc = 0x80CD8B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B60u)) return;
    // 80CD8B60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8B64:
    ctx->pc = 0x80CD8B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8B64: stwu     r1, -32(r1)
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
label_80CD8B68:
    ctx->pc = 0x80CD8B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD8B68: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8B6C:
    ctx->pc = 0x80CD8B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD8B6C: stw     r0, 36(r1)
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
label_80CD8B70:
    ctx->pc = 0x80CD8B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8B70: stw     r31, 28(r1)
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
label_80CD8B74:
    ctx->pc = 0x80CD8B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8B74: stw     r30, 24(r1)
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
label_80CD8B78:
    ctx->pc = 0x80CD8B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8B78: stw     r29, 20(r1)
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
label_80CD8B7C:
    ctx->pc = 0x80CD8B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8B7C: lwz     r31, 32(r3)
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
label_80CD8B80:
    ctx->pc = 0x80CD8B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8B80: lwz     r30, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8B84:
    ctx->pc = 0x80CD8B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8B84: lwz     r29, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8B88:
    ctx->pc = 0x80CD8B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B88u)) return;
    // 80CD8B88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8B8C:
    ctx->pc = 0x80CD8B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B8Cu)) return;
    // 80CD8B8C: bl      0x8004B49C
    {
            ctx->lr = 0x80CD8B90u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80CD8B90:
    ctx->pc = 0x80CD8B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8B90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8B94:
    ctx->pc = 0x80CD8B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B94u)) return;
    // 80CD8B94: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80CD8B98:
    ctx->pc = 0x80CD8B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8B98u)) return;
    // 80CD8B98: bl      0x8004AA9C
    {
            ctx->lr = 0x80CD8B9Cu;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80CD8B9C:
    ctx->pc = 0x80CD8B9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8B9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8B9C: lwz     r0, 28(r31)
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
label_80CD8BA0:
    ctx->pc = 0x80CD8BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BA0u)) return;
    // 80CD8BA0: cmpwi   r0, 0
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

label_80CD8BA4:
    ctx->pc = 0x80CD8BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BA4u)) return;
    // 80CD8BA4: bc    12, 2, 0x80CD8BB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8BB4;
        }
    }

label_80CD8BA8:
    ctx->pc = 0x80CD8BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8BA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8BAC:
    ctx->pc = 0x80CD8BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BACu)) return;
    // 80CD8BAC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80CD8BB0:
    ctx->pc = 0x80CD8BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BB0u)) return;
    // 80CD8BB0: bl      0x8004AFDC
    {
            ctx->lr = 0x80CD8BB4u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80CD8BB4:
    ctx->pc = 0x80CD8BB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8BB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8BB4: lwz     r0, 20(r31)
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
label_80CD8BB8:
    ctx->pc = 0x80CD8BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BB8u)) return;
    // 80CD8BB8: cmpwi   r0, 0
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

label_80CD8BBC:
    ctx->pc = 0x80CD8BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BBCu)) return;
    // 80CD8BBC: bc    12, 2, 0x80CD8BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8BCC;
        }
    }

label_80CD8BC0:
    ctx->pc = 0x80CD8BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8BC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8BC4:
    ctx->pc = 0x80CD8BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BC4u)) return;
    // 80CD8BC4: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80CD8BC8:
    ctx->pc = 0x80CD8BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BC8u)) return;
    // 80CD8BC8: bl      0x8004B3E0
    {
            ctx->lr = 0x80CD8BCCu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80CD8BCC:
    ctx->pc = 0x80CD8BCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8BCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8BCC: lwz     r4, 24(r31)
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
label_80CD8BD0:
    ctx->pc = 0x80CD8BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BD0u)) return;
    // 80CD8BD0: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_80CD8BD4:
    ctx->pc = 0x80CD8BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BD4u)) return;
    // 80CD8BD4: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_80CD8BD8:
    ctx->pc = 0x80CD8BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BD8u)) return;
    // 80CD8BD8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80CD8BDC:
    ctx->pc = 0x80CD8BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BDCu)) return;
    // 80CD8BDC: cmpwi   r0, 0
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

label_80CD8BE0:
    ctx->pc = 0x80CD8BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BE0u)) return;
    // 80CD8BE0: bc    12, 2, 0x80CD8BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8BF0;
        }
    }

label_80CD8BE4:
    ctx->pc = 0x80CD8BE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8BE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8BE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8BE8:
    ctx->pc = 0x80CD8BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BE8u)) return;
    // 80CD8BE8: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80CD8BEC:
    ctx->pc = 0x80CD8BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BECu)) return;
    // 80CD8BEC: bl      0x8004AF5C
    {
            ctx->lr = 0x80CD8BF0u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80CD8BF0:
    ctx->pc = 0x80CD8BF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8BF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8BF0: lwz     r3, 60(r31)
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
label_80CD8BF4:
    ctx->pc = 0x80CD8BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8BF4: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8BF8:
    ctx->pc = 0x80CD8BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BF8u)) return;
    // 80CD8BF8: cmplwi  r0, 0x0000
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

label_80CD8BFC:
    ctx->pc = 0x80CD8BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8BFCu)) return;
    // 80CD8BFC: bc    12, 2, 0x80CD8C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8C30;
        }
    }

label_80CD8C00:
    ctx->pc = 0x80CD8C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CD8C00: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8C04:
    ctx->pc = 0x80CD8C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C04u)) return;
    // 80CD8C04: addi    r0, r3, -8528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8528);

label_80CD8C08:
    ctx->pc = 0x80CD8C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8C08: stw     r0, 4(r29)
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
label_80CD8C0C:
    ctx->pc = 0x80CD8C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8C0C: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8C10:
    ctx->pc = 0x80CD8C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8C10: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8C14:
    ctx->pc = 0x80CD8C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8C14: lfs     f1, 60(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD8C14u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8C18:
    ctx->pc = 0x80CD8C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C18u)) return;
    // 80CD8C18: lis     r5, -27369
    ctx->gpr[5] = ((u32)(s32)(-27369) << 16);

label_80CD8C1C:
    ctx->pc = 0x80CD8C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C1Cu)) return;
    // 80CD8C1C: addi    r5, r5, -24556
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24556);

label_80CD8C20:
    ctx->pc = 0x80CD8C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C20u)) return;
    // 80CD8C20: bl      0x8048BE20
    {
            ctx->lr = 0x80CD8C24u;
            ctx->pc = 0x8048BE20u;
            return;
    }

label_80CD8C24:
    ctx->pc = 0x80CD8C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8C24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CD8C28:
    ctx->pc = 0x80CD8C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C28u)) return;
    // 80CD8C28: bl      0x80461ED8
    {
            ctx->lr = 0x80CD8C2Cu;
            ctx->pc = 0x80461ED8u;
            return;
    }

label_80CD8C2C:
    ctx->pc = 0x80CD8C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8C2C: b       0x80CD8C64
    {
            goto label_80CD8C64;
    }

label_80CD8C30:
    ctx->pc = 0x80CD8C30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8C30: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8C34:
    ctx->pc = 0x80CD8C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C34u)) return;
    // 80CD8C34: addi    r3, r3, -24328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24328);

label_80CD8C38:
    ctx->pc = 0x80CD8C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C38u)) return;
    // 80CD8C38: bl      0x8060F594
    {
            ctx->lr = 0x80CD8C3Cu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80CD8C3C:
    ctx->pc = 0x80CD8C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8C3C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD8C40:
    ctx->pc = 0x80CD8C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C40u)) return;
    // 80CD8C40: bl      0x80612BEC
    {
            ctx->lr = 0x80CD8C44u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80CD8C44:
    ctx->pc = 0x80CD8C44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CD8C44: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8C48:
    ctx->pc = 0x80CD8C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C48u)) return;
    // 80CD8C48: addi    r3, r3, -8528
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8528);

label_80CD8C4C:
    ctx->pc = 0x80CD8C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C4Cu)) return;
    // 80CD8C4C: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8C50:
    ctx->pc = 0x80CD8C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C50u)) return;
    // 80CD8C50: addi    r4, r4, 9344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9344);

label_80CD8C54:
    ctx->pc = 0x80CD8C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8C54: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD8C54u)) return;
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
label_80CD8C58:
    ctx->pc = 0x80CD8C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C58u)) return;
    // 80CD8C58: bl      0x8060DB00
    {
            ctx->lr = 0x80CD8C5Cu;
            ctx->pc = 0x8060DB00u;
            return;
    }

label_80CD8C5C:
    ctx->pc = 0x80CD8C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8C5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CD8C60:
    ctx->pc = 0x80CD8C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C60u)) return;
    // 80CD8C60: bl      0x80612BEC
    {
            ctx->lr = 0x80CD8C64u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80CD8C64:
    ctx->pc = 0x80CD8C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8C64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CD8C68:
    ctx->pc = 0x80CD8C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C68u)) return;
    // 80CD8C68: bl      0x8004B504
    {
            ctx->lr = 0x80CD8C6Cu;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80CD8C6C:
    ctx->pc = 0x80CD8C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8C6C: lwz     r31, 28(r1)
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
label_80CD8C70:
    ctx->pc = 0x80CD8C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8C70: lwz     r30, 24(r1)
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
label_80CD8C74:
    ctx->pc = 0x80CD8C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8C74: lwz     r29, 20(r1)
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
label_80CD8C78:
    ctx->pc = 0x80CD8C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8C78: lwz     r0, 36(r1)
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
label_80CD8C7C:
    ctx->pc = 0x80CD8C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD8C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8C7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8C80:
    ctx->pc = 0x80CD8C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C80u)) return;
    // 80CD8C80: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CD8C84:
    ctx->pc = 0x80CD8C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C84u)) return;
    // 80CD8C84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8C88:
    ctx->pc = 0x80CD8C88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8C88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CD8C88: stwu     r1, -16(r1)
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
label_80CD8C8C:
    ctx->pc = 0x80CD8C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CD8C8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8C90:
    ctx->pc = 0x80CD8C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CD8C90: stw     r0, 20(r1)
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
label_80CD8C94:
    ctx->pc = 0x80CD8C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CD8C94: lwz     r4, 32(r4)
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
label_80CD8C98:
    ctx->pc = 0x80CD8C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CD8C98: lwz     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8C9C:
    ctx->pc = 0x80CD8C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CD8C9C: lbz     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8CA0:
    ctx->pc = 0x80CD8CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CA0u)) return;
    // 80CD8CA0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8CA4:
    ctx->pc = 0x80CD8CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CA4u)) return;
    // 80CD8CA4: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_80CD8CA8:
    ctx->pc = 0x80CD8CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CA8u)) return;
    // 80CD8CA8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80CD8CAC:
    ctx->pc = 0x80CD8CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD8CAC: lbz     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8CB0:
    ctx->pc = 0x80CD8CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CB0u)) return;
    // 80CD8CB0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8CB4:
    ctx->pc = 0x80CD8CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CB4u)) return;
    // 80CD8CB4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD8CB8:
    ctx->pc = 0x80CD8CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CB8u)) return;
    // 80CD8CB8: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8CBC:
    ctx->pc = 0x80CD8CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CBCu)) return;
    // 80CD8CBC: addi    r3, r3, -24628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24628);

label_80CD8CC0:
    ctx->pc = 0x80CD8CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8CC0: lwzx    r6, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8CC4:
    ctx->pc = 0x80CD8CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8CC4: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8CC8:
    ctx->pc = 0x80CD8CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CC8u)) return;
    // 80CD8CC8: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD8CCC:
    ctx->pc = 0x80CD8CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CCCu)) return;
    // 80CD8CCC: addi    r4, r4, -24656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24656);

label_80CD8CD0:
    ctx->pc = 0x80CD8CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8CD0: lwzx    r4, r4, r0
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
label_80CD8CD4:
    ctx->pc = 0x80CD8CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CD4u)) return;
    // 80CD8CD4: lis     r5, -27369
    ctx->gpr[5] = ((u32)(s32)(-27369) << 16);

label_80CD8CD8:
    ctx->pc = 0x80CD8CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CD8u)) return;
    // 80CD8CD8: addi    r5, r5, -24600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24600);

label_80CD8CDC:
    ctx->pc = 0x80CD8CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8CDC: lwzx    r5, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8CE0:
    ctx->pc = 0x80CD8CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8CE0: lwz     r5, 0(r5)
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
label_80CD8CE4:
    ctx->pc = 0x80CD8CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8CE4: lfs     f1, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CD8CE4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8CE8:
    ctx->pc = 0x80CD8CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8CE8: lwz     r6, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8CEC:
    ctx->pc = 0x80CD8CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CECu)) return;
    // 80CD8CEC: bl      0x8048E6BC
    {
            ctx->lr = 0x80CD8CF0u;
            ctx->pc = 0x8048E6BCu;
            return;
    }

label_80CD8CF0:
    ctx->pc = 0x80CD8CF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8CF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8CF0: lwz     r0, 20(r1)
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
label_80CD8CF4:
    ctx->pc = 0x80CD8CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD8CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8CF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8CF8:
    ctx->pc = 0x80CD8CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CF8u)) return;
    // 80CD8CF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD8CFC:
    ctx->pc = 0x80CD8CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8CFCu)) return;
    // 80CD8CFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD8D00:
    ctx->pc = 0x80CD8D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CD8D00: stwu     r1, -96(r1)
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
label_80CD8D04:
    ctx->pc = 0x80CD8D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CD8D04: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D08:
    ctx->pc = 0x80CD8D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD8D08: stw     r0, 100(r1)
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
label_80CD8D0C:
    ctx->pc = 0x80CD8D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CD8D0C: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8D0Cu)) return;
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
label_80CD8D10:
    ctx->pc = 0x80CD8D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD8D10: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8D10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CD8D10u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D14:
    ctx->pc = 0x80CD8D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD8D14: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8D14u)) return;
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
label_80CD8D18:
    ctx->pc = 0x80CD8D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD8D18: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD8D18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CD8D18u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D1C:
    ctx->pc = 0x80CD8D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8D1C: stw     r31, 60(r1)
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
label_80CD8D20:
    ctx->pc = 0x80CD8D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8D20: stw     r30, 56(r1)
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
label_80CD8D24:
    ctx->pc = 0x80CD8D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD8D24: stw     r29, 52(r1)
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
label_80CD8D28:
    ctx->pc = 0x80CD8D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD8D28: stw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D2C:
    ctx->pc = 0x80CD8D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D2Cu)) return;
    // 80CD8D2C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CD8D30:
    ctx->pc = 0x80CD8D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8D30: lwz     r31, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D34:
    ctx->pc = 0x80CD8D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8D34: lwz     r30, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D38:
    ctx->pc = 0x80CD8D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8D38: lwz     r29, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D3C:
    ctx->pc = 0x80CD8D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8D3C: lbz     r0, 0(r29)
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
label_80CD8D40:
    ctx->pc = 0x80CD8D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D40u)) return;
    // 80CD8D40: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8D44:
    ctx->pc = 0x80CD8D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D44u)) return;
    // 80CD8D44: cmpwi   r0, 3
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

label_80CD8D48:
    ctx->pc = 0x80CD8D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D48u)) return;
    // 80CD8D48: bc    12, 2, 0x80CD8E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8E8C;
        }
    }

label_80CD8D4C:
    ctx->pc = 0x80CD8D4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8D4C: bc    4, 0, 0x80CD8D64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8D64;
        }
    }

label_80CD8D50:
    ctx->pc = 0x80CD8D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8D50: cmpwi   r0, 1
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

label_80CD8D54:
    ctx->pc = 0x80CD8D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D54u)) return;
    // 80CD8D54: bc    12, 2, 0x80CD8D74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8D74;
        }
    }

label_80CD8D58:
    ctx->pc = 0x80CD8D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8D58: bc    4, 0, 0x80CD8E08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8E08;
        }
    }

label_80CD8D5C:
    ctx->pc = 0x80CD8D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8D5C: cmpwi   r0, 0
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

label_80CD8D60:
    ctx->pc = 0x80CD8D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D60u)) return;
    // 80CD8D60: b       0x80CD8FD4
    {
            goto label_80CD8FD4;
    }

label_80CD8D64:
    ctx->pc = 0x80CD8D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8D64: cmpwi   r0, 5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD8D68:
    ctx->pc = 0x80CD8D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D68u)) return;
    // 80CD8D68: bc    12, 2, 0x80CD8FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8FC8;
        }
    }

label_80CD8D6C:
    ctx->pc = 0x80CD8D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8D6C: bc    4, 0, 0x80CD8FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8FD4;
        }
    }

label_80CD8D70:
    ctx->pc = 0x80CD8D70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8D70: b       0x80CD8F20
    {
            goto label_80CD8F20;
    }

label_80CD8D74:
    ctx->pc = 0x80CD8D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD8D74: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D78:
    ctx->pc = 0x80CD8D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D78u)) return;
    // 80CD8D78: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8D7C:
    ctx->pc = 0x80CD8D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D7Cu)) return;
    // 80CD8D7C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD8D80:
    ctx->pc = 0x80CD8D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D80u)) return;
    // 80CD8D80: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8D84:
    ctx->pc = 0x80CD8D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D84u)) return;
    // 80CD8D84: addi    r3, r3, -24684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24684);

label_80CD8D88:
    ctx->pc = 0x80CD8D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8D88: lwzx    r3, r3, r0
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
label_80CD8D8C:
    ctx->pc = 0x80CD8D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8D8C: lbz     r0, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D90:
    ctx->pc = 0x80CD8D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D90u)) return;
    // 80CD8D90: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8D94:
    ctx->pc = 0x80CD8D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D94u)) return;
    // 80CD8D94: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_80CD8D98:
    ctx->pc = 0x80CD8D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8D98: lbzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8D9C:
    ctx->pc = 0x80CD8D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8D9Cu)) return;
    // 80CD8D9C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8DA0:
    ctx->pc = 0x80CD8DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DA0u)) return;
    // 80CD8DA0: cmpwi   r0, 0
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

label_80CD8DA4:
    ctx->pc = 0x80CD8DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DA4u)) return;
    // 80CD8DA4: bc    4, 2, 0x80CD8DB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8DB4;
        }
    }

label_80CD8DA8:
    ctx->pc = 0x80CD8DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8DA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD8DAC:
    ctx->pc = 0x80CD8DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8DAC: stb     r0, 0(r29)
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
label_80CD8DB0:
    ctx->pc = 0x80CD8DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DB0u)) return;
    // 80CD8DB0: b       0x80CD8FD4
    {
            goto label_80CD8FD4;
    }

label_80CD8DB4:
    ctx->pc = 0x80CD8DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 37u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 37u : 1u;
    // 80CD8DB4: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8DB8:
    ctx->pc = 0x80CD8DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DB8u)) return;
    // 80CD8DB8: addi    r3, r3, 9344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9344);

label_80CD8DBC:
    ctx->pc = 0x80CD8DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CD8DBC: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8DBCu)) return;
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
label_80CD8DC0:
    ctx->pc = 0x80CD8DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DC0u)) return;
    // 80CD8DC0: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8DC4:
    ctx->pc = 0x80CD8DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DC4u)) return;
    // 80CD8DC4: addi    r3, r3, 9360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9360);

label_80CD8DC8:
    ctx->pc = 0x80CD8DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80CD8DC8: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8DC8u)) return;
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
label_80CD8DCC:
    ctx->pc = 0x80CD8DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DCCu)) return;
    // 80CD8DCC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80CD8DD0:
    ctx->pc = 0x80CD8DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CD8DD0: stw     r0, 36(r1)
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
label_80CD8DD4:
    ctx->pc = 0x80CD8DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DD4u)) return;
    // 80CD8DD4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CD8DD8:
    ctx->pc = 0x80CD8DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CD8DD8: stw     r0, 32(r1)
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
label_80CD8DDC:
    ctx->pc = 0x80CD8DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80CD8DDC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8DDCu)) return;
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
label_80CD8DE0:
    ctx->pc = 0x80CD8DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DE0u)) return;
    // 80CD8DE0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CD8DE0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CD8DE4:
    ctx->pc = 0x80CD8DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CD8DE4u)) return;
    // 80CD8DE4: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8DE4u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CD8DE8:
    ctx->pc = 0x80CD8DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8DE8: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8DE8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8DEC:
    ctx->pc = 0x80CD8DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DECu)) return;
    // 80CD8DEC: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8DF0:
    ctx->pc = 0x80CD8DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DF0u)) return;
    // 80CD8DF0: addi    r3, r3, 9348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9348);

label_80CD8DF4:
    ctx->pc = 0x80CD8DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8DF4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8DF4u)) return;
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
label_80CD8DF8:
    ctx->pc = 0x80CD8DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8DF8: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8DF8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8DFC:
    ctx->pc = 0x80CD8DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8DFCu)) return;
    // 80CD8DFC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80CD8E00:
    ctx->pc = 0x80CD8E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8E00: stb     r0, 0(r29)
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
label_80CD8E04:
    ctx->pc = 0x80CD8E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E04u)) return;
    // 80CD8E04: b       0x80CD8FD4
    {
            goto label_80CD8FD4;
    }

label_80CD8E08:
    ctx->pc = 0x80CD8E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD8E08: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E0C:
    ctx->pc = 0x80CD8E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E0Cu)) return;
    // 80CD8E0C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8E10:
    ctx->pc = 0x80CD8E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E10u)) return;
    // 80CD8E10: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD8E14:
    ctx->pc = 0x80CD8E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E14u)) return;
    // 80CD8E14: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8E18:
    ctx->pc = 0x80CD8E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E18u)) return;
    // 80CD8E18: addi    r3, r3, -24684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24684);

label_80CD8E1C:
    ctx->pc = 0x80CD8E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8E1C: lwzx    r3, r3, r0
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
label_80CD8E20:
    ctx->pc = 0x80CD8E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8E20: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8E20u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E24:
    ctx->pc = 0x80CD8E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD8E24: lfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8E24u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
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
label_80CD8E28:
    ctx->pc = 0x80CD8E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E28u)) return;
    // 80CD8E28: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8E28u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CD8E2C:
    ctx->pc = 0x80CD8E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8E2C: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8E2Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E30:
    ctx->pc = 0x80CD8E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8E30: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8E30u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E34:
    ctx->pc = 0x80CD8E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E34u)) return;
    // 80CD8E34: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8E38:
    ctx->pc = 0x80CD8E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E38u)) return;
    // 80CD8E38: addi    r4, r4, 9344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9344);

label_80CD8E3C:
    ctx->pc = 0x80CD8E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8E3C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD8E3Cu)) return;
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
label_80CD8E40:
    ctx->pc = 0x80CD8E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E40u)) return;
    // 80CD8E40: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8E40u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CD8E44:
    ctx->pc = 0x80CD8E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E44u)) return;
    // 80CD8E44: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CD8E48:
    ctx->pc = 0x80CD8E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E48u)) return;
    // 80CD8E48: bc    4, 2, 0x80CD8E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8E50;
        }
    }

label_80CD8E4C:
    ctx->pc = 0x80CD8E4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8E4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD8E4C: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8E4Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E50:
    ctx->pc = 0x80CD8E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8E50: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CD8E54:
    ctx->pc = 0x80CD8E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E54u)) return;
    // 80CD8E54: bl      0x80CD8C88
    {
            ctx->lr = 0x80CD8E58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CD8C88u;
                return;
            }
            goto label_80CD8C88;
    }

label_80CD8E58:
    ctx->pc = 0x80CD8E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8E58: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8E58u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E5C:
    ctx->pc = 0x80CD8E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E5Cu)) return;
    // 80CD8E5C: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8E60:
    ctx->pc = 0x80CD8E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E60u)) return;
    // 80CD8E60: addi    r3, r3, 9344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9344);

label_80CD8E64:
    ctx->pc = 0x80CD8E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8E64: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8E64u)) return;
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
label_80CD8E68:
    ctx->pc = 0x80CD8E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E68u)) return;
    // 80CD8E68: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8E68u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CD8E6C:
    ctx->pc = 0x80CD8E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E6Cu)) return;
    // 80CD8E6C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CD8E70:
    ctx->pc = 0x80CD8E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E70u)) return;
    // 80CD8E70: bc    4, 2, 0x80CD8FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8FD4;
        }
    }

label_80CD8E74:
    ctx->pc = 0x80CD8E74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8E74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CD8E74: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CD8E78:
    ctx->pc = 0x80CD8E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8E78: stb     r0, 0(r29)
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
label_80CD8E7C:
    ctx->pc = 0x80CD8E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8E7C: lbz     r3, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E80:
    ctx->pc = 0x80CD8E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E80u)) return;
    // 80CD8E80: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80CD8E84:
    ctx->pc = 0x80CD8E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8E84: stb     r0, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E88:
    ctx->pc = 0x80CD8E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E88u)) return;
    // 80CD8E88: b       0x80CD8FD4
    {
            goto label_80CD8FD4;
    }

label_80CD8E8C:
    ctx->pc = 0x80CD8E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD8E8C: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8E90:
    ctx->pc = 0x80CD8E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E90u)) return;
    // 80CD8E90: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8E94:
    ctx->pc = 0x80CD8E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E94u)) return;
    // 80CD8E94: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD8E98:
    ctx->pc = 0x80CD8E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E98u)) return;
    // 80CD8E98: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8E9C:
    ctx->pc = 0x80CD8E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8E9Cu)) return;
    // 80CD8E9C: addi    r3, r3, -24684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24684);

label_80CD8EA0:
    ctx->pc = 0x80CD8EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8EA0: lwzx    r3, r3, r0
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
label_80CD8EA4:
    ctx->pc = 0x80CD8EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8EA4: lbz     r0, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8EA8:
    ctx->pc = 0x80CD8EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EA8u)) return;
    // 80CD8EA8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8EAC:
    ctx->pc = 0x80CD8EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EACu)) return;
    // 80CD8EAC: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_80CD8EB0:
    ctx->pc = 0x80CD8EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8EB0: lbzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8EB4:
    ctx->pc = 0x80CD8EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EB4u)) return;
    // 80CD8EB4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8EB8:
    ctx->pc = 0x80CD8EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EB8u)) return;
    // 80CD8EB8: cmpwi   r0, 0
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

label_80CD8EBC:
    ctx->pc = 0x80CD8EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EBCu)) return;
    // 80CD8EBC: bc    4, 2, 0x80CD8ECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8ECC;
        }
    }

label_80CD8EC0:
    ctx->pc = 0x80CD8EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD8EC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD8EC4:
    ctx->pc = 0x80CD8EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8EC4: stb     r0, 0(r29)
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
label_80CD8EC8:
    ctx->pc = 0x80CD8EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EC8u)) return;
    // 80CD8EC8: b       0x80CD8FD4
    {
            goto label_80CD8FD4;
    }

label_80CD8ECC:
    ctx->pc = 0x80CD8ECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 37u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8ECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 37u : 1u;
    // 80CD8ECC: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8ED0:
    ctx->pc = 0x80CD8ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8ED0u)) return;
    // 80CD8ED0: addi    r3, r3, 9344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9344);

label_80CD8ED4:
    ctx->pc = 0x80CD8ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CD8ED4: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8ED4u)) return;
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
label_80CD8ED8:
    ctx->pc = 0x80CD8ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8ED8u)) return;
    // 80CD8ED8: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8EDC:
    ctx->pc = 0x80CD8EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EDCu)) return;
    // 80CD8EDC: addi    r3, r3, 9360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9360);

label_80CD8EE0:
    ctx->pc = 0x80CD8EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80CD8EE0: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8EE0u)) return;
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
label_80CD8EE4:
    ctx->pc = 0x80CD8EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EE4u)) return;
    // 80CD8EE4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80CD8EE8:
    ctx->pc = 0x80CD8EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CD8EE8: stw     r0, 36(r1)
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
label_80CD8EEC:
    ctx->pc = 0x80CD8EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EECu)) return;
    // 80CD8EEC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CD8EF0:
    ctx->pc = 0x80CD8EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CD8EF0: stw     r0, 32(r1)
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
label_80CD8EF4:
    ctx->pc = 0x80CD8EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80CD8EF4: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD8EF4u)) return;
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
label_80CD8EF8:
    ctx->pc = 0x80CD8EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8EF8u)) return;
    // 80CD8EF8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CD8EF8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CD8EFC:
    ctx->pc = 0x80CD8EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CD8EFCu)) return;
    // 80CD8EFC: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8EFCu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CD8F00:
    ctx->pc = 0x80CD8F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8F00: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F00u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F04:
    ctx->pc = 0x80CD8F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F04u)) return;
    // 80CD8F04: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8F08:
    ctx->pc = 0x80CD8F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F08u)) return;
    // 80CD8F08: addi    r3, r3, 9348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9348);

label_80CD8F0C:
    ctx->pc = 0x80CD8F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8F0C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F0Cu)) return;
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
label_80CD8F10:
    ctx->pc = 0x80CD8F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8F10: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F10u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F14:
    ctx->pc = 0x80CD8F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F14u)) return;
    // 80CD8F14: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80CD8F18:
    ctx->pc = 0x80CD8F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8F18: stb     r0, 0(r29)
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
label_80CD8F1C:
    ctx->pc = 0x80CD8F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F1Cu)) return;
    // 80CD8F1C: b       0x80CD8FD4
    {
            goto label_80CD8FD4;
    }

label_80CD8F20:
    ctx->pc = 0x80CD8F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD8F20: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F24:
    ctx->pc = 0x80CD8F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F24u)) return;
    // 80CD8F24: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8F28:
    ctx->pc = 0x80CD8F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F28u)) return;
    // 80CD8F28: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD8F2C:
    ctx->pc = 0x80CD8F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F2Cu)) return;
    // 80CD8F2C: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8F30:
    ctx->pc = 0x80CD8F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F30u)) return;
    // 80CD8F30: addi    r3, r3, -24684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24684);

label_80CD8F34:
    ctx->pc = 0x80CD8F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD8F34: lwzx    r3, r3, r0
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
label_80CD8F38:
    ctx->pc = 0x80CD8F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD8F38: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F38u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F3C:
    ctx->pc = 0x80CD8F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD8F3C: lfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F3Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
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
label_80CD8F40:
    ctx->pc = 0x80CD8F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F40u)) return;
    // 80CD8F40: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8F40u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CD8F44:
    ctx->pc = 0x80CD8F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD8F44: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F44u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F48:
    ctx->pc = 0x80CD8F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8F48: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F48u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F4C:
    ctx->pc = 0x80CD8F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F4Cu)) return;
    // 80CD8F4C: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD8F50:
    ctx->pc = 0x80CD8F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F50u)) return;
    // 80CD8F50: addi    r4, r4, 9344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9344);

label_80CD8F54:
    ctx->pc = 0x80CD8F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8F54: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F54u)) return;
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
label_80CD8F58:
    ctx->pc = 0x80CD8F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F58u)) return;
    // 80CD8F58: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8F58u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CD8F5C:
    ctx->pc = 0x80CD8F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F5Cu)) return;
    // 80CD8F5C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CD8F60:
    ctx->pc = 0x80CD8F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F60u)) return;
    // 80CD8F60: bc    4, 2, 0x80CD8F68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8F68;
        }
    }

label_80CD8F64:
    ctx->pc = 0x80CD8F64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8F64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD8F64: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F64u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F68:
    ctx->pc = 0x80CD8F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8F68: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CD8F6C:
    ctx->pc = 0x80CD8F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F6Cu)) return;
    // 80CD8F6C: bl      0x80CD8C88
    {
            ctx->lr = 0x80CD8F70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CD8C88u;
                return;
            }
            goto label_80CD8C88;
    }

label_80CD8F70:
    ctx->pc = 0x80CD8F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CD8F70: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD8F74:
    ctx->pc = 0x80CD8F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F74u)) return;
    // 80CD8F74: addi    r3, r3, -24684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24684);

label_80CD8F78:
    ctx->pc = 0x80CD8F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8F78: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F7C:
    ctx->pc = 0x80CD8F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F7Cu)) return;
    // 80CD8F7C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD8F80:
    ctx->pc = 0x80CD8F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F80u)) return;
    // 80CD8F80: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CD8F84:
    ctx->pc = 0x80CD8F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F84u)) return;
    // 80CD8F84: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80CD8F88:
    ctx->pc = 0x80CD8F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8F88: lwz     r3, 4(r3)
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
label_80CD8F8C:
    ctx->pc = 0x80CD8F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F8Cu)) return;
    // 80CD8F8C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CD8F90:
    ctx->pc = 0x80CD8F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F90u)) return;
    // 80CD8F90: bl      0x80CD8C88
    {
            ctx->lr = 0x80CD8F94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CD8C88u;
                return;
            }
            goto label_80CD8C88;
    }

label_80CD8F94:
    ctx->pc = 0x80CD8F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8F94: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CD8F94u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8F98:
    ctx->pc = 0x80CD8F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F98u)) return;
    // 80CD8F98: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD8F9C:
    ctx->pc = 0x80CD8F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8F9Cu)) return;
    // 80CD8F9C: addi    r3, r3, 9344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9344);

label_80CD8FA0:
    ctx->pc = 0x80CD8FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8FA0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD8FA0u)) return;
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
label_80CD8FA4:
    ctx->pc = 0x80CD8FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FA4u)) return;
    // 80CD8FA4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD8FA4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CD8FA8:
    ctx->pc = 0x80CD8FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FA8u)) return;
    // 80CD8FA8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CD8FAC:
    ctx->pc = 0x80CD8FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FACu)) return;
    // 80CD8FAC: bc    4, 2, 0x80CD8FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD8FD4;
        }
    }

label_80CD8FB0:
    ctx->pc = 0x80CD8FB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8FB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CD8FB0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80CD8FB4:
    ctx->pc = 0x80CD8FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD8FB4: stb     r0, 0(r29)
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
label_80CD8FB8:
    ctx->pc = 0x80CD8FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8FB8: lbz     r3, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8FBC:
    ctx->pc = 0x80CD8FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FBCu)) return;
    // 80CD8FBC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80CD8FC0:
    ctx->pc = 0x80CD8FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD8FC0: stb     r0, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8FC4:
    ctx->pc = 0x80CD8FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FC4u)) return;
    // 80CD8FC4: b       0x80CD8FD4
    {
            goto label_80CD8FD4;
    }

label_80CD8FC8:
    ctx->pc = 0x80CD8FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD8FC8: bl      0x80CD92B0
    {
            ctx->lr = 0x80CD8FCCu;
            goto label_80CD92B0;
    }

label_80CD8FCC:
    ctx->pc = 0x80CD8FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8FCC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD8FD0:
    ctx->pc = 0x80CD8FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD8FD0: stb     r0, 0(r29)
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
label_80CD8FD4:
    ctx->pc = 0x80CD8FD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8FD4: lwz     r3, 60(r31)
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
label_80CD8FD8:
    ctx->pc = 0x80CD8FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD8FD8: lwz     r0, 76(r3)
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
label_80CD8FDC:
    ctx->pc = 0x80CD8FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FDCu)) return;
    // 80CD8FDC: cmplwi  r0, 0x0000
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

label_80CD8FE0:
    ctx->pc = 0x80CD8FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FE0u)) return;
    // 80CD8FE0: bc    12, 2, 0x80CD8FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD8FEC;
        }
    }

label_80CD8FE4:
    ctx->pc = 0x80CD8FE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8FE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD8FE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CD8FE8:
    ctx->pc = 0x80CD8FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FE8u)) return;
    // 80CD8FE8: bl      0x80461320
    {
            ctx->lr = 0x80CD8FECu;
            ctx->pc = 0x80461320u;
            return;
    }

label_80CD8FEC:
    ctx->pc = 0x80CD8FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD8FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD8FEC: lfs     f31, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CD8FECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8FF0:
    ctx->pc = 0x80CD8FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD8FF0: lfs     f30, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CD8FF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD8FF4:
    ctx->pc = 0x80CD8FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FF4u)) return;
    // 80CD8FF4: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80CD8FF4u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80CD8FF8:
    ctx->pc = 0x80CD8FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD8FF8: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CD8FF8u)) return;
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
label_80CD8FFC:
    ctx->pc = 0x80CD8FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD8FFCu)) return;
    // 80CD8FFC: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80CD8FFCu)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80CD9000:
    ctx->pc = 0x80CD9000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9000u)) return;
    // 80CD9000: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80CD9004:
    ctx->pc = 0x80CD9004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9004u)) return;
    // 80CD9004: bl      0x80401580
    {
            ctx->lr = 0x80CD9008u;
            ctx->pc = 0x80401580u;
            return;
    }

label_80CD9008:
    ctx->pc = 0x80CD9008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9008: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9008u)) return;
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
label_80CD900C:
    ctx->pc = 0x80CD900Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD900Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD900C: lbz     r0, 0(r30)
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
label_80CD9010:
    ctx->pc = 0x80CD9010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9010u)) return;
    // 80CD9010: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_80CD9014:
    ctx->pc = 0x80CD9014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9014u)) return;
    // 80CD9014: cmpwi   r0, 0
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

label_80CD9018:
    ctx->pc = 0x80CD9018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9018u)) return;
    // 80CD9018: bc    12, 2, 0x80CD9034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9034;
        }
    }

label_80CD901C:
    ctx->pc = 0x80CD901Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD901Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CD901C: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD9020:
    ctx->pc = 0x80CD9020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9020u)) return;
    // 80CD9020: addi    r3, r3, 9352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9352);

label_80CD9024:
    ctx->pc = 0x80CD9024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9024: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9024u)) return;
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
label_80CD9028:
    ctx->pc = 0x80CD9028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9028u)) return;
    // 80CD9028: frsp    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CD9028u)) return;
    ppc_frsp(ctx, 0, 1);

label_80CD902C:
    ctx->pc = 0x80CD902Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD902Cu)) return;
    // 80CD902C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD902Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80CD9030:
    ctx->pc = 0x80CD9030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD9030: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CD9030u)) return;
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
label_80CD9034:
    ctx->pc = 0x80CD9034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9034: lbz     r0, 0(r30)
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
label_80CD9038:
    ctx->pc = 0x80CD9038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9038u)) return;
    // 80CD9038: rlwinm r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
    }

label_80CD903C:
    ctx->pc = 0x80CD903Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD903Cu)) return;
    // 80CD903C: cmpwi   r0, 0
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

label_80CD9040:
    ctx->pc = 0x80CD9040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9040u)) return;
    // 80CD9040: bc    12, 2, 0x80CD9054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9054;
        }
    }

label_80CD9044:
    ctx->pc = 0x80CD9044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9044: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9048:
    ctx->pc = 0x80CD9048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9048: stw     r0, 20(r31)
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
label_80CD904C:
    ctx->pc = 0x80CD904Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD904Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD904C: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9050:
    ctx->pc = 0x80CD9050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD9050: stw     r0, 28(r31)
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
label_80CD9054:
    ctx->pc = 0x80CD9054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD9054: lfs     f1, 120(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD9054u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9058:
    ctx->pc = 0x80CD9058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9058u)) return;
    // 80CD9058: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD905C:
    ctx->pc = 0x80CD905Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD905Cu)) return;
    // 80CD905C: addi    r3, r3, 9348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9348);

label_80CD9060:
    ctx->pc = 0x80CD9060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9060: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9060u)) return;
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
label_80CD9064:
    ctx->pc = 0x80CD9064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9064u)) return;
    // 80CD9064: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9064u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CD9068:
    ctx->pc = 0x80CD9068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9068u)) return;
    // 80CD9068: bc    4, 1, 0x80CD9098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD9098;
        }
    }

label_80CD906C:
    ctx->pc = 0x80CD906Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD906Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD906C: stfs     f31, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD906Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9070:
    ctx->pc = 0x80CD9070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD9070: lfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9070u)) return;
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
label_80CD9074:
    ctx->pc = 0x80CD9074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9074u)) return;
    // 80CD9074: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD9078:
    ctx->pc = 0x80CD9078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9078u)) return;
    // 80CD9078: addi    r3, r3, 9356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9356);

label_80CD907C:
    ctx->pc = 0x80CD907Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD907Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD907C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD907Cu)) return;
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
label_80CD9080:
    ctx->pc = 0x80CD9080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9080u)) return;
    // 80CD9080: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9080u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80CD9084:
    ctx->pc = 0x80CD9084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9084: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9084u)) return;
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
label_80CD9088:
    ctx->pc = 0x80CD9088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9088: stfs     f30, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD908C:
    ctx->pc = 0x80CD908Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD908Cu)) return;
    // 80CD908C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80CD9090:
    ctx->pc = 0x80CD9090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9090u)) return;
    // 80CD9090: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80CD9094:
    ctx->pc = 0x80CD9094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9094u)) return;
    // 80CD9094: bl      0x80400F3C
    {
            ctx->lr = 0x80CD9098u;
            ctx->pc = 0x80400F3Cu;
            return;
    }

label_80CD9098:
    ctx->pc = 0x80CD9098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD9098: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CD909C:
    ctx->pc = 0x80CD909Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD909Cu)) return;
    // 80CD909C: bl      0x80CD8B64
    {
            ctx->lr = 0x80CD90A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CD8B64u;
                return;
            }
            goto label_80CD8B64;
    }

label_80CD90A0:
    ctx->pc = 0x80CD90A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD90A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD90A0: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD90A4:
    ctx->pc = 0x80CD90A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD90A4: lwz     r3, 12(r3)
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
label_80CD90A8:
    ctx->pc = 0x80CD90A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD90A8: lfs     f1, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD90A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD90AC:
    ctx->pc = 0x80CD90ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90ACu)) return;
    // 80CD90AC: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD90B0:
    ctx->pc = 0x80CD90B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90B0u)) return;
    // 80CD90B0: addi    r3, r3, 9348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9348);

label_80CD90B4:
    ctx->pc = 0x80CD90B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD90B4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD90B4u)) return;
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
label_80CD90B8:
    ctx->pc = 0x80CD90B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90B8u)) return;
    // 80CD90B8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD90B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CD90BC:
    ctx->pc = 0x80CD90BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90BCu)) return;
    // 80CD90BC: bc    4, 1, 0x80CD90C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD90C8;
        }
    }

label_80CD90C0:
    ctx->pc = 0x80CD90C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD90C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD90C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CD90C4:
    ctx->pc = 0x80CD90C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90C4u)) return;
    // 80CD90C4: bl      0x80408384
    {
            ctx->lr = 0x80CD90C8u;
            ctx->pc = 0x80408384u;
            return;
    }

label_80CD90C8:
    ctx->pc = 0x80CD90C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD90C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD90C8: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD90C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CD90C8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD90CC:
    ctx->pc = 0x80CD90CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD90CC: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD90CCu)) return;
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
label_80CD90D0:
    ctx->pc = 0x80CD90D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD90D0: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD90D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CD90D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD90D4:
    ctx->pc = 0x80CD90D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD90D4: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD90D4u)) return;
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
label_80CD90D8:
    ctx->pc = 0x80CD90D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD90D8: lwz     r31, 60(r1)
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
label_80CD90DC:
    ctx->pc = 0x80CD90DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD90DC: lwz     r30, 56(r1)
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
label_80CD90E0:
    ctx->pc = 0x80CD90E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD90E0: lwz     r29, 52(r1)
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
label_80CD90E4:
    ctx->pc = 0x80CD90E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD90E4: lwz     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD90E8:
    ctx->pc = 0x80CD90E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD90E8: lwz     r0, 100(r1)
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
label_80CD90EC:
    ctx->pc = 0x80CD90ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD90ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD90EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD90F0:
    ctx->pc = 0x80CD90F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90F0u)) return;
    // 80CD90F0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80CD90F4:
    ctx->pc = 0x80CD90F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90F4u)) return;
    // 80CD90F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD90F8:
    ctx->pc = 0x80CD90F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD90F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD90F8: stwu     r1, -16(r1)
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
label_80CD90FC:
    ctx->pc = 0x80CD90FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD90FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD90FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9100:
    ctx->pc = 0x80CD9100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9100: stw     r0, 20(r1)
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
label_80CD9104:
    ctx->pc = 0x80CD9104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD9104: stw     r31, 12(r1)
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
label_80CD9108:
    ctx->pc = 0x80CD9108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9108: stw     r30, 8(r1)
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
label_80CD910C:
    ctx->pc = 0x80CD910Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD910Cu)) return;
    // 80CD910C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CD9110:
    ctx->pc = 0x80CD9110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9110: lwz     r31, 32(r30)
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
label_80CD9114:
    ctx->pc = 0x80CD9114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9114u)) return;
    // 80CD9114: li      r3, 28
    ctx->gpr[3] = (u32)(s32)(28);

label_80CD9118:
    ctx->pc = 0x80CD9118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9118u)) return;
    // 80CD9118: bl      0x8050EF60
    {
            ctx->lr = 0x80CD911Cu;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80CD911C:
    ctx->pc = 0x80CD911Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD911Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CD911C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD9120:
    ctx->pc = 0x80CD9120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD9120: stb     r0, 0(r3)
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
label_80CD9124:
    ctx->pc = 0x80CD9124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD9124: stb     r0, 1(r3)
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
label_80CD9128:
    ctx->pc = 0x80CD9128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD9128: stb     r0, 2(r3)
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
label_80CD912C:
    ctx->pc = 0x80CD912Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD912Cu)) return;
    // 80CD912C: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD9130:
    ctx->pc = 0x80CD9130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9130u)) return;
    // 80CD9130: addi    r4, r4, 9348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9348);

label_80CD9134:
    ctx->pc = 0x80CD9134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD9134: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD9134u)) return;
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
label_80CD9138:
    ctx->pc = 0x80CD9138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9138: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9138u)) return;
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
label_80CD913C:
    ctx->pc = 0x80CD913Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD913Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD913C: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD913Cu)) return;
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
label_80CD9140:
    ctx->pc = 0x80CD9140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9140: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9144:
    ctx->pc = 0x80CD9144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9144u)) return;
    // 80CD9144: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CD9148:
    ctx->pc = 0x80CD9148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9148u)) return;
    // 80CD9148: bl      0x80462174
    {
            ctx->lr = 0x80CD914Cu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80CD914C:
    ctx->pc = 0x80CD914Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD914Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CD914C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CD9150:
    ctx->pc = 0x80CD9150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9150u)) return;
    // 80CD9150: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD9154:
    ctx->pc = 0x80CD9154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9154u)) return;
    // 80CD9154: addi    r4, r4, -24540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24540);

label_80CD9158:
    ctx->pc = 0x80CD9158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9158u)) return;
    // 80CD9158: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CD915C:
    ctx->pc = 0x80CD915Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD915Cu)) return;
    // 80CD915C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80CD9160:
    ctx->pc = 0x80CD9160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9160u)) return;
    // 80CD9160: bl      0x8041E63C
    {
            ctx->lr = 0x80CD9164u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80CD9164:
    ctx->pc = 0x80CD9164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD9164: lis     r3, -32562
    ctx->gpr[3] = ((u32)(s32)(-32562) << 16);

label_80CD9168:
    ctx->pc = 0x80CD9168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9168u)) return;
    // 80CD9168: addi    r0, r3, -29440
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29440);

label_80CD916C:
    ctx->pc = 0x80CD916Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD916Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD916C: stw     r0, 16(r30)
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
label_80CD9170:
    ctx->pc = 0x80CD9170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9170u)) return;
    // 80CD9170: lis     r3, -32562
    ctx->gpr[3] = ((u32)(s32)(-32562) << 16);

label_80CD9174:
    ctx->pc = 0x80CD9174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9174u)) return;
    // 80CD9174: addi    r0, r3, -29852
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29852);

label_80CD9178:
    ctx->pc = 0x80CD9178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD9178: stw     r0, 20(r30)
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
label_80CD917C:
    ctx->pc = 0x80CD917Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD917Cu)) return;
    // 80CD917C: lis     r3, -32562
    ctx->gpr[3] = ((u32)(s32)(-32562) << 16);

label_80CD9180:
    ctx->pc = 0x80CD9180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9180u)) return;
    // 80CD9180: addi    r0, r3, -29920
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29920);

label_80CD9184:
    ctx->pc = 0x80CD9184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD9184: stw     r0, 24(r30)
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
label_80CD9188:
    ctx->pc = 0x80CD9188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9188: lwz     r31, 12(r1)
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
label_80CD918C:
    ctx->pc = 0x80CD918Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD918Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD918C: lwz     r30, 8(r1)
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
label_80CD9190:
    ctx->pc = 0x80CD9190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9190: lwz     r0, 20(r1)
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
label_80CD9194:
    ctx->pc = 0x80CD9194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD9194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9194: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9198:
    ctx->pc = 0x80CD9198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9198u)) return;
    // 80CD9198: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD919C:
    ctx->pc = 0x80CD919Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD919Cu)) return;
    // 80CD919C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD91A0:
    ctx->pc = 0x80CD91A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD91A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD91A0: stwu     r1, -16(r1)
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
label_80CD91A4:
    ctx->pc = 0x80CD91A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD91A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD91A8:
    ctx->pc = 0x80CD91A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD91A8: stw     r0, 20(r1)
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
label_80CD91AC:
    ctx->pc = 0x80CD91ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91ACu)) return;
    // 80CD91AC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD91B0:
    ctx->pc = 0x80CD91B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91B0u)) return;
    // 80CD91B0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CD91B4:
    ctx->pc = 0x80CD91B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91B4u)) return;
    // 80CD91B4: lis     r5, -32562
    ctx->gpr[5] = ((u32)(s32)(-32562) << 16);

label_80CD91B8:
    ctx->pc = 0x80CD91B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91B8u)) return;
    // 80CD91B8: addi    r5, r5, -28424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28424);

label_80CD91BC:
    ctx->pc = 0x80CD91BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91BCu)) return;
    // 80CD91BC: bl      0x8050FD60
    {
            ctx->lr = 0x80CD91C0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CD91C0:
    ctx->pc = 0x80CD91C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD91C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD91C0: cmplwi  r3, 0x0000
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

label_80CD91C4:
    ctx->pc = 0x80CD91C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91C4u)) return;
    // 80CD91C4: bc    12, 2, 0x80CD91D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD91D4;
        }
    }

label_80CD91C8:
    ctx->pc = 0x80CD91C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD91C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD91C8: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD91CC:
    ctx->pc = 0x80CD91CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91CCu)) return;
    // 80CD91CC: addi    r4, r4, -5496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5496);

label_80CD91D0:
    ctx->pc = 0x80CD91D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD91D0: stw     r3, 0(r4)
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
label_80CD91D4:
    ctx->pc = 0x80CD91D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD91D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80CD91D4: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD91D8:
    ctx->pc = 0x80CD91D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91D8u)) return;
    // 80CD91D8: addi    r3, r3, -5496
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5496);

label_80CD91DC:
    ctx->pc = 0x80CD91DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD91DC: lwz     r3, 0(r3)
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
label_80CD91E0:
    ctx->pc = 0x80CD91E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD91E0: lwz     r0, 20(r1)
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
label_80CD91E4:
    ctx->pc = 0x80CD91E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD91E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD91E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD91E8:
    ctx->pc = 0x80CD91E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91E8u)) return;
    // 80CD91E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD91EC:
    ctx->pc = 0x80CD91ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91ECu)) return;
    // 80CD91EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD91F0:
    ctx->pc = 0x80CD91F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD91F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD91F0: stwu     r1, -16(r1)
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
label_80CD91F4:
    ctx->pc = 0x80CD91F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD91F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD91F8:
    ctx->pc = 0x80CD91F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD91F8: stw     r0, 20(r1)
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
label_80CD91FC:
    ctx->pc = 0x80CD91FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD91FCu)) return;
    // 80CD91FC: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD9200:
    ctx->pc = 0x80CD9200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9200u)) return;
    // 80CD9200: addi    r3, r3, -5496
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5496);

label_80CD9204:
    ctx->pc = 0x80CD9204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9204: lwz     r3, 0(r3)
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
label_80CD9208:
    ctx->pc = 0x80CD9208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9208u)) return;
    // 80CD9208: cmplwi  r3, 0x0000
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

label_80CD920C:
    ctx->pc = 0x80CD920Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD920Cu)) return;
    // 80CD920C: bc    12, 2, 0x80CD9224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9224;
        }
    }

label_80CD9210:
    ctx->pc = 0x80CD9210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD9210: bl      0x8050F9E0
    {
            ctx->lr = 0x80CD9214u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CD9214:
    ctx->pc = 0x80CD9214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD9214: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD9218:
    ctx->pc = 0x80CD9218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9218u)) return;
    // 80CD9218: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD921C:
    ctx->pc = 0x80CD921Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD921Cu)) return;
    // 80CD921C: addi    r3, r3, -5496
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5496);

label_80CD9220:
    ctx->pc = 0x80CD9220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD9220: stw     r0, 0(r3)
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
label_80CD9224:
    ctx->pc = 0x80CD9224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9224: lwz     r0, 20(r1)
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
label_80CD9228:
    ctx->pc = 0x80CD9228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD9228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9228: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD922C:
    ctx->pc = 0x80CD922Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD922Cu)) return;
    // 80CD922C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD9230:
    ctx->pc = 0x80CD9230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9230u)) return;
    // 80CD9230: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD9234:
    ctx->pc = 0x80CD9234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD9234: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD9238:
    ctx->pc = 0x80CD9238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9238u)) return;
    // 80CD9238: addi    r4, r4, -5496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5496);

label_80CD923C:
    ctx->pc = 0x80CD923Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD923Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD923C: lwz     r4, 0(r4)
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
label_80CD9240:
    ctx->pc = 0x80CD9240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9240u)) return;
    // 80CD9240: cmplwi  r4, 0x0000
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

label_80CD9244:
    ctx->pc = 0x80CD9244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9244u)) return;
    // 80CD9244: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD9248:
    ctx->pc = 0x80CD9248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9248: lwz     r4, 32(r4)
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
label_80CD924C:
    ctx->pc = 0x80CD924Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD924Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD924C: lwz     r4, 8(r4)
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
label_80CD9250:
    ctx->pc = 0x80CD9250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9250u)) return;
    // 80CD9250: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80CD9254:
    ctx->pc = 0x80CD9254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9254u)) return;
    // 80CD9254: cmpwi   r0, 2
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

label_80CD9258:
    ctx->pc = 0x80CD9258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9258u)) return;
    // 80CD9258: bc    12, 2, 0x80CD9264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9264;
        }
    }

label_80CD925C:
    ctx->pc = 0x80CD925Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD925Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD925C: cmpwi   r0, 4
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

label_80CD9260:
    ctx->pc = 0x80CD9260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9260u)) return;
    // 80CD9260: bc    4, 2, 0x80CD9270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD9270;
        }
    }

label_80CD9264:
    ctx->pc = 0x80CD9264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD9264: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80CD9268:
    ctx->pc = 0x80CD9268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD9268: stb     r0, 0(r4)
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
label_80CD926C:
    ctx->pc = 0x80CD926Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD926Cu)) return;
    // 80CD926C: b       0x80CD928C
    {
            goto label_80CD928C;
    }

label_80CD9270:
    ctx->pc = 0x80CD9270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD9270: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD9274:
    ctx->pc = 0x80CD9274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9274u)) return;
    // 80CD9274: bc    4, 2, 0x80CD9284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD9284;
        }
    }

label_80CD9278:
    ctx->pc = 0x80CD9278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD9278: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80CD927C:
    ctx->pc = 0x80CD927Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD927Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD927C: stb     r0, 0(r4)
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
label_80CD9280:
    ctx->pc = 0x80CD9280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9280u)) return;
    // 80CD9280: b       0x80CD928C
    {
            goto label_80CD928C;
    }

label_80CD9284:
    ctx->pc = 0x80CD9284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD9284: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CD9288:
    ctx->pc = 0x80CD9288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD9288: stb     r0, 0(r4)
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
label_80CD928C:
    ctx->pc = 0x80CD928Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD928Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD928C: stb     r3, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9290:
    ctx->pc = 0x80CD9290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9290u)) return;
    // 80CD9290: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD9294:
    ctx->pc = 0x80CD9294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9294: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9298:
    ctx->pc = 0x80CD9298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9298u)) return;
    // 80CD9298: lis     r3, -27371
    ctx->gpr[3] = ((u32)(s32)(-27371) << 16);

label_80CD929C:
    ctx->pc = 0x80CD929Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD929Cu)) return;
    // 80CD929C: addi    r3, r3, 9348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9348);

label_80CD92A0:
    ctx->pc = 0x80CD92A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD92A0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD92A0u)) return;
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
label_80CD92A4:
    ctx->pc = 0x80CD92A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD92A4: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD92A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD92A8:
    ctx->pc = 0x80CD92A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD92A8: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD92A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD92AC:
    ctx->pc = 0x80CD92ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92ACu)) return;
    // 80CD92AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD92B0:
    ctx->pc = 0x80CD92B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD92B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CD92B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80CD92B4:
    ctx->pc = 0x80CD92B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92B4u)) return;
    // 80CD92B4: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD92B8:
    ctx->pc = 0x80CD92B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92B8u)) return;
    // 80CD92B8: addi    r5, r3, -24628
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-24628);

label_80CD92BC:
    ctx->pc = 0x80CD92BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92BCu)) return;
    // 80CD92BC: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD92C0:
    ctx->pc = 0x80CD92C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92C0u)) return;
    // 80CD92C0: addi    r6, r3, -24600
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-24600);

label_80CD92C4:
    ctx->pc = 0x80CD92C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92C4u)) return;
    // 80CD92C4: b       0x80CD9348
    {
            goto label_80CD9348;
    }

label_80CD92C8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD92C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD92C8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80CD92CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92CCu)) return;
    // 80CD92CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CD92D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92D0u)) return;
    // 80CD92D0: b       0x80CD9328
    {
            goto label_80CD9328;
    }

label_80CD92D4:
    ctx->pc = 0x80CD92D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD92D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CD92D4: lwz     r3, 0(r7)
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
label_80CD92D8:
    ctx->pc = 0x80CD92D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CD92D8: lfsx    f0, r3, r4
    if (!ppc_fp_available_inline(ctx, 0x80CD92D8u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
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
label_80CD92DC:
    ctx->pc = 0x80CD92DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CD92DC: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD92E0:
    ctx->pc = 0x80CD92E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CD92E0: lwz     r3, 0(r3)
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
label_80CD92E4:
    ctx->pc = 0x80CD92E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD92E4: stfsx    f0, r3, r4
    if (!ppc_fp_available_inline(ctx, 0x80CD92E4u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD92E8:
    ctx->pc = 0x80CD92E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CD92E8: lwz     r3, 0(r5)
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
label_80CD92EC:
    ctx->pc = 0x80CD92ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD92EC: lwz     r3, 0(r3)
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
label_80CD92F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92F0u)) return;
    // 80CD92F0: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_80CD92F4:
    ctx->pc = 0x80CD92F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD92F4: lfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x80CD92F4u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
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
label_80CD92F8:
    ctx->pc = 0x80CD92F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD92F8: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD92FC:
    ctx->pc = 0x80CD92FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD92FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD92FC: lwz     r3, 0(r3)
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
label_80CD9300:
    ctx->pc = 0x80CD9300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD9300: stfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x80CD9300u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9304:
    ctx->pc = 0x80CD9304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD9304: lwz     r3, 0(r5)
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
label_80CD9308:
    ctx->pc = 0x80CD9308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD9308: lwz     r3, 0(r3)
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
label_80CD930C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD930Cu)) return;
    // 80CD930C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_80CD9310:
    ctx->pc = 0x80CD9310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD9310: lfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x80CD9310u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
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
label_80CD9314:
    ctx->pc = 0x80CD9314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9314: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9318:
    ctx->pc = 0x80CD9318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9318: lwz     r3, 0(r3)
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
label_80CD931C:
    ctx->pc = 0x80CD931Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD931Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD931C: stfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x80CD931Cu)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9320:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9320u)) return;
    // 80CD9320: addi    r4, r4, 12
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12);

label_80CD9324:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9324u)) return;
    // 80CD9324: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_80CD9328:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD9328: extsb r3, r9
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[9];
    }

label_80CD932C:
    ctx->pc = 0x80CD932Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD932Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD932C: lwz     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9330:
    ctx->pc = 0x80CD9330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9330: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9334:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9334u)) return;
    // 80CD9334: cmpw    r3, r0
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

label_80CD9338:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9338u)) return;
    // 80CD9338: bc    12, 0, 0x80CD92D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CD92D4u;
                return;
            }
            goto label_80CD92D4;
        }
    }

label_80CD933C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD933Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD933C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80CD9340:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9340u)) return;
    // 80CD9340: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_80CD9344:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9344u)) return;
    // 80CD9344: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_80CD9348:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD9348: extsb r0, r8
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[8];
    }

label_80CD934C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD934Cu)) return;
    // 80CD934C: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD9350:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9350u)) return;
    // 80CD9350: bc    12, 0, 0x80CD92C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CD92C8u;
                return;
            }
            goto label_80CD92C8;
        }
    }

label_80CD9354:
    ctx->pc = 0x80CD9354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD9354: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD9358:
    ctx->pc = 0x80CD9358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CD9358: stwu     r1, -80(r1)
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
label_80CD935C:
    ctx->pc = 0x80CD935Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD935Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CD935C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9360:
    ctx->pc = 0x80CD9360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CD9360: stw     r0, 84(r1)
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
label_80CD9364:
    ctx->pc = 0x80CD9364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CD9364: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9364u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9368:
    ctx->pc = 0x80CD9368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CD9368: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD9368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CD9368u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD936C:
    ctx->pc = 0x80CD936Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD936Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CD936C: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD936Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9370:
    ctx->pc = 0x80CD9370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CD9370: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD9370u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CD9370u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9374:
    ctx->pc = 0x80CD9374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CD9374: stfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9374u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9378:
    ctx->pc = 0x80CD9378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD9378: psq_st   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD9378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80CD9378u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD937C:
    ctx->pc = 0x80CD937Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD937Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CD937C: stw     r31, 28(r1)
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
label_80CD9380:
    ctx->pc = 0x80CD9380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD9380: stw     r30, 24(r1)
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
label_80CD9384:
    ctx->pc = 0x80CD9384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD9384: stw     r29, 20(r1)
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
label_80CD9388:
    ctx->pc = 0x80CD9388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD9388: stw     r28, 16(r1)
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
label_80CD938C:
    ctx->pc = 0x80CD938Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD938Cu)) return;
    // 80CD938C: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80CD938Cu)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80CD9390:
    ctx->pc = 0x80CD9390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9390u)) return;
    // 80CD9390: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80CD9390u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80CD9394:
    ctx->pc = 0x80CD9394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9394u)) return;
    // 80CD9394: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80CD9394u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80CD9398:
    ctx->pc = 0x80CD9398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9398u)) return;
    // 80CD9398: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CD939C:
    ctx->pc = 0x80CD939Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD939Cu)) return;
    // 80CD939C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CD93A0:
    ctx->pc = 0x80CD93A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93A0u)) return;
    // 80CD93A0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CD93A4:
    ctx->pc = 0x80CD93A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93A4u)) return;
    // 80CD93A4: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80CD93A8:
    ctx->pc = 0x80CD93A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93A8u)) return;
    // 80CD93A8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CD93AC:
    ctx->pc = 0x80CD93ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93ACu)) return;
    // 80CD93AC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CD93B0:
    ctx->pc = 0x80CD93B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93B0u)) return;
    // 80CD93B0: lis     r5, -32562
    ctx->gpr[5] = ((u32)(s32)(-32562) << 16);

label_80CD93B4:
    ctx->pc = 0x80CD93B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93B4u)) return;
    // 80CD93B4: addi    r5, r5, -26832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26832);

label_80CD93B8:
    ctx->pc = 0x80CD93B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93B8u)) return;
    // 80CD93B8: bl      0x8050FD60
    {
            ctx->lr = 0x80CD93BCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CD93BC:
    ctx->pc = 0x80CD93BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD93BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD93BC: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD93C0:
    ctx->pc = 0x80CD93C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93C0u)) return;
    // 80CD93C0: addi    r4, r4, -5488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5488);

label_80CD93C4:
    ctx->pc = 0x80CD93C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD93C4: stw     r3, 0(r4)
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
label_80CD93C8:
    ctx->pc = 0x80CD93C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93C8u)) return;
    // 80CD93C8: li      r3, 48
    ctx->gpr[3] = (u32)(s32)(48);

label_80CD93CC:
    ctx->pc = 0x80CD93CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93CCu)) return;
    // 80CD93CC: bl      0x8050EF60
    {
            ctx->lr = 0x80CD93D0u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80CD93D0:
    ctx->pc = 0x80CD93D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 61u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD93D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 61u : 1u;
    // 80CD93D0: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD93D4:
    ctx->pc = 0x80CD93D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93D4u)) return;
    // 80CD93D4: addi    r4, r4, -5488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5488);

label_80CD93D8:
    ctx->pc = 0x80CD93D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 80CD93D8: lwz     r4, 0(r4)
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
label_80CD93DC:
    ctx->pc = 0x80CD93DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80CD93DC: lwz     r4, 32(r4)
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
label_80CD93E0:
    ctx->pc = 0x80CD93E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 80CD93E0: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD93E4:
    ctx->pc = 0x80CD93E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93E4u)) return;
    // 80CD93E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD93E8:
    ctx->pc = 0x80CD93E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80CD93E8: stb     r0, 0(r4)
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
label_80CD93EC:
    ctx->pc = 0x80CD93ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80CD93EC: stfs     f29, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD93ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD93F0:
    ctx->pc = 0x80CD93F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80CD93F0: stfs     f30, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD93F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD93F4:
    ctx->pc = 0x80CD93F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CD93F4: stfs     f31, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD93F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD93F8:
    ctx->pc = 0x80CD93F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80CD93F8: stw     r28, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD93FC:
    ctx->pc = 0x80CD93FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD93FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CD93FC: stw     r29, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9400:
    ctx->pc = 0x80CD9400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80CD9400: stw     r30, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9404:
    ctx->pc = 0x80CD9404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9404u)) return;
    // 80CD9404: lis     r4, -28644
    ctx->gpr[4] = ((u32)(s32)(-28644) << 16);

label_80CD9408:
    ctx->pc = 0x80CD9408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9408u)) return;
    // 80CD9408: addi    r5, r4, 13788
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13788);

label_80CD940C:
    ctx->pc = 0x80CD940Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD940Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80CD940C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9410:
    ctx->pc = 0x80CD9410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80CD9410: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD9410u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80CD9414:
    ctx->pc = 0x80CD9414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80CD9414: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9414u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9418:
    ctx->pc = 0x80CD9418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80CD9418: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD941C:
    ctx->pc = 0x80CD941Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD941Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80CD941C: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD941Cu)) return;
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
label_80CD9420:
    ctx->pc = 0x80CD9420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80CD9420: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9420u)) return;
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
label_80CD9424:
    ctx->pc = 0x80CD9424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80CD9424: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9428:
    ctx->pc = 0x80CD9428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80CD9428: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD9428u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_80CD942C:
    ctx->pc = 0x80CD942Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD942Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80CD942C: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD942Cu)) return;
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
label_80CD9430:
    ctx->pc = 0x80CD9430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80CD9430: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9434:
    ctx->pc = 0x80CD9434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80CD9434: lwz     r0, 20(r4)
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
label_80CD9438:
    ctx->pc = 0x80CD9438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CD9438: stw     r0, 12(r3)
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
label_80CD943C:
    ctx->pc = 0x80CD943Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD943Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80CD943C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9440:
    ctx->pc = 0x80CD9440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CD9440: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9444:
    ctx->pc = 0x80CD9444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80CD9444: stw     r0, 16(r3)
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
label_80CD9448:
    ctx->pc = 0x80CD9448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CD9448: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD944C:
    ctx->pc = 0x80CD944Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD944Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CD944C: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9450:
    ctx->pc = 0x80CD9450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CD9450: stw     r0, 20(r3)
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
label_80CD9454:
    ctx->pc = 0x80CD9454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CD9454: stw     r31, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9458:
    ctx->pc = 0x80CD9458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80CD9458: lwz     r3, 0(r5)
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
label_80CD945C:
    ctx->pc = 0x80CD945Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD945Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CD945C: stfs     f29, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD945Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9460:
    ctx->pc = 0x80CD9460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CD9460: lwz     r3, 0(r5)
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
label_80CD9464:
    ctx->pc = 0x80CD9464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CD9464: stfs     f30, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9464u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9468:
    ctx->pc = 0x80CD9468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CD9468: lwz     r3, 0(r5)
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
label_80CD946C:
    ctx->pc = 0x80CD946Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD946Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CD946C: stfs     f31, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD946Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9470:
    ctx->pc = 0x80CD9470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CD9470: lwz     r3, 0(r5)
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
label_80CD9474:
    ctx->pc = 0x80CD9474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CD9474: stw     r28, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9478:
    ctx->pc = 0x80CD9478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CD9478: lwz     r3, 0(r5)
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
label_80CD947C:
    ctx->pc = 0x80CD947Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD947Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CD947C: stw     r29, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9480:
    ctx->pc = 0x80CD9480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD9480: lwz     r3, 0(r5)
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
label_80CD9484:
    ctx->pc = 0x80CD9484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CD9484: stw     r30, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9488:
    ctx->pc = 0x80CD9488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD9488: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD9488u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CD9488u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD948C:
    ctx->pc = 0x80CD948Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD948Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD948C: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD948Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9490:
    ctx->pc = 0x80CD9490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD9490: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD9490u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CD9490u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9494:
    ctx->pc = 0x80CD9494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD9494: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9494u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9498:
    ctx->pc = 0x80CD9498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD9498: psq_l   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CD9498u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80CD9498u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD949C:
    ctx->pc = 0x80CD949Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD949Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD949C: lfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD949Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD94A0:
    ctx->pc = 0x80CD94A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD94A0: lwz     r31, 28(r1)
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
label_80CD94A4:
    ctx->pc = 0x80CD94A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD94A4: lwz     r30, 24(r1)
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
label_80CD94A8:
    ctx->pc = 0x80CD94A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD94A8: lwz     r29, 20(r1)
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
label_80CD94AC:
    ctx->pc = 0x80CD94ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD94AC: lwz     r28, 16(r1)
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
label_80CD94B0:
    ctx->pc = 0x80CD94B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD94B0: lwz     r0, 84(r1)
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
label_80CD94B4:
    ctx->pc = 0x80CD94B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD94B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD94B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD94B8:
    ctx->pc = 0x80CD94B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94B8u)) return;
    // 80CD94B8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80CD94BC:
    ctx->pc = 0x80CD94BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94BCu)) return;
    // 80CD94BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD94C0:
    ctx->pc = 0x80CD94C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD94C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD94C0: stwu     r1, -16(r1)
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
label_80CD94C4:
    ctx->pc = 0x80CD94C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD94C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD94C8:
    ctx->pc = 0x80CD94C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD94C8: stw     r0, 20(r1)
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
label_80CD94CC:
    ctx->pc = 0x80CD94CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94CCu)) return;
    // 80CD94CC: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD94D0:
    ctx->pc = 0x80CD94D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94D0u)) return;
    // 80CD94D0: addi    r5, r3, -5488
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5488);

label_80CD94D4:
    ctx->pc = 0x80CD94D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD94D4: lwz     r3, 0(r5)
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
label_80CD94D8:
    ctx->pc = 0x80CD94D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94D8u)) return;
    // 80CD94D8: cmplwi  r3, 0x0000
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

label_80CD94DC:
    ctx->pc = 0x80CD94DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94DCu)) return;
    // 80CD94DC: bc    12, 2, 0x80CD955C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD955C;
        }
    }

label_80CD94E0:
    ctx->pc = 0x80CD94E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD94E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CD94E0: lwz     r3, 32(r3)
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
label_80CD94E4:
    ctx->pc = 0x80CD94E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CD94E4: lwz     r6, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD94E8:
    ctx->pc = 0x80CD94E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CD94E8: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD94E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80CD94EC:
    ctx->pc = 0x80CD94ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94ECu)) return;
    // 80CD94EC: lis     r3, -28644
    ctx->gpr[3] = ((u32)(s32)(-28644) << 16);

label_80CD94F0:
    ctx->pc = 0x80CD94F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94F0u)) return;
    // 80CD94F0: addi    r4, r3, 13788
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13788);

label_80CD94F4:
    ctx->pc = 0x80CD94F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CD94F4: lwz     r3, 0(r4)
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
label_80CD94F8:
    ctx->pc = 0x80CD94F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CD94F8: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD94F8u)) return;
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
label_80CD94FC:
    ctx->pc = 0x80CD94FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD94FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CD94FC: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD94FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
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
label_80CD9500:
    ctx->pc = 0x80CD9500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD9500: lwz     r3, 0(r4)
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
label_80CD9504:
    ctx->pc = 0x80CD9504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CD9504: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9504u)) return;
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
label_80CD9508:
    ctx->pc = 0x80CD9508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CD9508: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CD9508u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
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
label_80CD950C:
    ctx->pc = 0x80CD950Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD950Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD950C: lwz     r3, 0(r4)
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
label_80CD9510:
    ctx->pc = 0x80CD9510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD9510: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9510u)) return;
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
label_80CD9514:
    ctx->pc = 0x80CD9514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD9514: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9518:
    ctx->pc = 0x80CD9518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD9518: lwz     r3, 0(r4)
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
label_80CD951C:
    ctx->pc = 0x80CD951Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD951Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD951C: stw     r0, 20(r3)
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
label_80CD9520:
    ctx->pc = 0x80CD9520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD9520: lwz     r0, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9524:
    ctx->pc = 0x80CD9524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD9524: lwz     r3, 0(r4)
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
label_80CD9528:
    ctx->pc = 0x80CD9528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9528: stw     r0, 24(r3)
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
label_80CD952C:
    ctx->pc = 0x80CD952Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD952Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD952C: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9530:
    ctx->pc = 0x80CD9530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9530: lwz     r3, 0(r4)
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
label_80CD9534:
    ctx->pc = 0x80CD9534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9534: stw     r0, 28(r3)
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
label_80CD9538:
    ctx->pc = 0x80CD9538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9538: lwz     r3, 0(r5)
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
label_80CD953C:
    ctx->pc = 0x80CD953Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD953Cu)) return;
    // 80CD953C: cmplwi  r3, 0x0000
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

label_80CD9540:
    ctx->pc = 0x80CD9540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9540u)) return;
    // 80CD9540: bc    12, 2, 0x80CD9558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9558;
        }
    }

label_80CD9544:
    ctx->pc = 0x80CD9544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD9544: bl      0x8050F9F0
    {
            ctx->lr = 0x80CD9548u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80CD9548:
    ctx->pc = 0x80CD9548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD9548: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD954C:
    ctx->pc = 0x80CD954Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD954Cu)) return;
    // 80CD954C: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD9550:
    ctx->pc = 0x80CD9550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9550u)) return;
    // 80CD9550: addi    r3, r3, -5488
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5488);

label_80CD9554:
    ctx->pc = 0x80CD9554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD9554: stw     r0, 0(r3)
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
label_80CD9558:
    ctx->pc = 0x80CD9558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD9558: bl      0x805C899C
    {
            ctx->lr = 0x80CD955Cu;
            ctx->pc = 0x805C899Cu;
            return;
    }

label_80CD955C:
    ctx->pc = 0x80CD955Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD955Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD955C: lwz     r0, 20(r1)
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
label_80CD9560:
    ctx->pc = 0x80CD9560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD9560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9560: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9564:
    ctx->pc = 0x80CD9564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9564u)) return;
    // 80CD9564: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD9568:
    ctx->pc = 0x80CD9568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9568u)) return;
    // 80CD9568: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD956C:
    ctx->pc = 0x80CD956Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD956Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD956C: stwu     r1, -16(r1)
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
label_80CD9570:
    ctx->pc = 0x80CD9570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9570: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9574:
    ctx->pc = 0x80CD9574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD9574: stw     r0, 20(r1)
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
label_80CD9578:
    ctx->pc = 0x80CD9578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9578u)) return;
    // 80CD9578: bl      0x80A2497C
    {
            ctx->lr = 0x80CD957Cu;
            ctx->pc = 0x80A2497Cu;
            return;
    }

label_80CD957C:
    ctx->pc = 0x80CD957Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD957Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD957C: lwz     r0, 20(r1)
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
label_80CD9580:
    ctx->pc = 0x80CD9580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD9580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9580: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9584:
    ctx->pc = 0x80CD9584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9584u)) return;
    // 80CD9584: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD9588:
    ctx->pc = 0x80CD9588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9588u)) return;
    // 80CD9588: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD958C:
    ctx->pc = 0x80CD958Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD958Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD958C: stwu     r1, -16(r1)
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
label_80CD9590:
    ctx->pc = 0x80CD9590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9590: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9594:
    ctx->pc = 0x80CD9594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD9594: stw     r0, 20(r1)
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
label_80CD9598:
    ctx->pc = 0x80CD9598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9598u)) return;
    // 80CD9598: bl      0x80A24940
    {
            ctx->lr = 0x80CD959Cu;
            ctx->pc = 0x80A24940u;
            return;
    }

label_80CD959C:
    ctx->pc = 0x80CD959Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD959Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD959C: lwz     r0, 20(r1)
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
label_80CD95A0:
    ctx->pc = 0x80CD95A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD95A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD95A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD95A4:
    ctx->pc = 0x80CD95A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95A4u)) return;
    // 80CD95A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD95A8:
    ctx->pc = 0x80CD95A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95A8u)) return;
    // 80CD95A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD95AC:
    ctx->pc = 0x80CD95ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD95ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD95AC: stwu     r1, -16(r1)
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
label_80CD95B0:
    ctx->pc = 0x80CD95B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD95B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD95B4:
    ctx->pc = 0x80CD95B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD95B4: stw     r0, 20(r1)
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
label_80CD95B8:
    ctx->pc = 0x80CD95B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95B8u)) return;
    // 80CD95B8: bl      0x805C4ACC
    {
            ctx->lr = 0x80CD95BCu;
            ctx->pc = 0x805C4ACCu;
            return;
    }

label_80CD95BC:
    ctx->pc = 0x80CD95BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD95BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD95BC: lwz     r0, 20(r1)
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
label_80CD95C0:
    ctx->pc = 0x80CD95C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD95C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD95C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD95C4:
    ctx->pc = 0x80CD95C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95C4u)) return;
    // 80CD95C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD95C8:
    ctx->pc = 0x80CD95C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95C8u)) return;
    // 80CD95C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD95CC:
    ctx->pc = 0x80CD95CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 96u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD95CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 96u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 95u : 0u;
    // 80CD95CC: stwu     r1, -48(r1)
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
label_80CD95D0:
    ctx->pc = 0x80CD95D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 94u : 0u;
    // 80CD95D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD95D4:
    ctx->pc = 0x80CD95D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 93u : 0u;
    // 80CD95D4: stw     r0, 52(r1)
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
label_80CD95D8:
    ctx->pc = 0x80CD95D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 92u : 0u;
    // 80CD95D8: stw     r31, 44(r1)
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
label_80CD95DC:
    ctx->pc = 0x80CD95DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 91u : 0u;
    // 80CD95DC: stw     r30, 40(r1)
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
label_80CD95E0:
    ctx->pc = 0x80CD95E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95E0u)) return;
    // 80CD95E0: lis     r4, -27369
    ctx->gpr[4] = ((u32)(s32)(-27369) << 16);

label_80CD95E4:
    ctx->pc = 0x80CD95E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95E4u)) return;
    // 80CD95E4: addi    r4, r4, -5488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5488);

label_80CD95E8:
    ctx->pc = 0x80CD95E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 88u : 0u;
    // 80CD95E8: lwz     r4, 0(r4)
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
label_80CD95EC:
    ctx->pc = 0x80CD95ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 87u : 0u;
    // 80CD95EC: lwz     r31, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD95F0:
    ctx->pc = 0x80CD95F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 86u : 0u;
    // 80CD95F0: lwz     r30, 16(r31)
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
label_80CD95F4:
    ctx->pc = 0x80CD95F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95F4u)) return;
    // 80CD95F4: lis     r4, -28644
    ctx->gpr[4] = ((u32)(s32)(-28644) << 16);

label_80CD95F8:
    ctx->pc = 0x80CD95F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95F8u)) return;
    // 80CD95F8: addi    r6, r4, 13788
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(13788);

label_80CD95FC:
    ctx->pc = 0x80CD95FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD95FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 80CD95FC: lwz     r4, 0(r6)
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
label_80CD9600:
    ctx->pc = 0x80CD9600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 82u : 0u;
    // 80CD9600: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD9600u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80CD9604:
    ctx->pc = 0x80CD9604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9604u)) return;
    // 80CD9604: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9604u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80CD9608:
    ctx->pc = 0x80CD9608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9608u)) return;
    // 80CD9608: lis     r4, -27371
    ctx->gpr[4] = ((u32)(s32)(-27371) << 16);

label_80CD960C:
    ctx->pc = 0x80CD960Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD960Cu)) return;
    // 80CD960C: addi    r4, r4, 9368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9368);

label_80CD9610:
    ctx->pc = 0x80CD9610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 78u : 0u;
    // 80CD9610: lfd     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD9610u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9614:
    ctx->pc = 0x80CD9614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9614u)) return;
    // 80CD9614: xoris   r5, r3, 0x8000
    ctx->gpr[5] = ctx->gpr[3] ^ (0x8000u << 16);

label_80CD9618:
    ctx->pc = 0x80CD9618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 80CD9618: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD961C:
    ctx->pc = 0x80CD961Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD961Cu)) return;
    // 80CD961C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CD9620:
    ctx->pc = 0x80CD9620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 74u : 0u;
    // 80CD9620: stw     r0, 8(r1)
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
label_80CD9624:
    ctx->pc = 0x80CD9624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 80CD9624: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9624u)) return;
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
label_80CD9628:
    ctx->pc = 0x80CD9628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9628u)) return;
    // 80CD9628: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80CD9628u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80CD962C:
    ctx->pc = 0x80CD962Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CD962Cu)) return;
    // 80CD962C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD962Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80CD9630:
    ctx->pc = 0x80CD9630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80CD9630: stfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD9630u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9634:
    ctx->pc = 0x80CD9634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80CD9634: lwz     r4, 0(r6)
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
label_80CD9638:
    ctx->pc = 0x80CD9638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80CD9638: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD9638u)) return;
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
label_80CD963C:
    ctx->pc = 0x80CD963Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD963Cu)) return;
    // 80CD963C: fsubs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD963Cu)) return;
    ppc_fsubs(ctx, 1, 2, 0);

label_80CD9640:
    ctx->pc = 0x80CD9640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80CD9640: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9644:
    ctx->pc = 0x80CD9644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CD9644: stw     r0, 16(r1)
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
label_80CD9648:
    ctx->pc = 0x80CD9648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80CD9648: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD9648u)) return;
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
label_80CD964C:
    ctx->pc = 0x80CD964Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD964Cu)) return;
    // 80CD964C: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80CD964Cu)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80CD9650:
    ctx->pc = 0x80CD9650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CD9650u)) return;
    // 80CD9650: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9650u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80CD9654:
    ctx->pc = 0x80CD9654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CD9654: stfs     f0, 28(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD9654u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9658:
    ctx->pc = 0x80CD9658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CD9658: lwz     r4, 0(r6)
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
label_80CD965C:
    ctx->pc = 0x80CD965Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD965Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CD965C: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD965Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_80CD9660:
    ctx->pc = 0x80CD9660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9660u)) return;
    // 80CD9660: fsubs   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9660u)) return;
    ppc_fsubs(ctx, 1, 3, 0);

label_80CD9664:
    ctx->pc = 0x80CD9664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CD9664: stw     r5, 28(r1)
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
label_80CD9668:
    ctx->pc = 0x80CD9668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CD9668: stw     r0, 24(r1)
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
label_80CD966C:
    ctx->pc = 0x80CD966Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD966Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CD966C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CD966Cu)) return;
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
label_80CD9670:
    ctx->pc = 0x80CD9670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9670u)) return;
    // 80CD9670: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80CD9670u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80CD9674:
    ctx->pc = 0x80CD9674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CD9674u)) return;
    // 80CD9674: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9674u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80CD9678:
    ctx->pc = 0x80CD9678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9678: stfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD9678u)) return;
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
label_80CD967C:
    ctx->pc = 0x80CD967Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD967Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD967C: stw     r3, 44(r30)
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
label_80CD9680:
    ctx->pc = 0x80CD9680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9680: lfs     f1, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD9680u)) return;
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
label_80CD9684:
    ctx->pc = 0x80CD9684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD9684: lfs     f2, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CD9684u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9688:
    ctx->pc = 0x80CD9688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9688u)) return;
    // 80CD9688: bl      0x80401910
    {
            ctx->lr = 0x80CD968Cu;
            ctx->pc = 0x80401910u;
            return;
    }

label_80CD968C:
    ctx->pc = 0x80CD968Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD968Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD968C: stw     r3, 40(r30)
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
label_80CD9690:
    ctx->pc = 0x80CD9690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9690u)) return;
    // 80CD9690: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80CD9694:
    ctx->pc = 0x80CD9694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD9694: stb     r0, 0(r31)
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
label_80CD9698:
    ctx->pc = 0x80CD9698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9698: lwz     r31, 44(r1)
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
label_80CD969C:
    ctx->pc = 0x80CD969Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD969Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD969C: lwz     r30, 40(r1)
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
label_80CD96A0:
    ctx->pc = 0x80CD96A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD96A0: lwz     r0, 52(r1)
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
label_80CD96A4:
    ctx->pc = 0x80CD96A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD96A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD96A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD96A8:
    ctx->pc = 0x80CD96A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96A8u)) return;
    // 80CD96A8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80CD96AC:
    ctx->pc = 0x80CD96ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96ACu)) return;
    // 80CD96AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD96B0:
    ctx->pc = 0x80CD96B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD96B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD96B0: lis     r3, -27369
    ctx->gpr[3] = ((u32)(s32)(-27369) << 16);

label_80CD96B4:
    ctx->pc = 0x80CD96B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96B4u)) return;
    // 80CD96B4: addi    r3, r3, -5488
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5488);

label_80CD96B8:
    ctx->pc = 0x80CD96B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD96B8: lwz     r3, 0(r3)
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
label_80CD96BC:
    ctx->pc = 0x80CD96BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD96BC: lwz     r3, 32(r3)
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
label_80CD96C0:
    ctx->pc = 0x80CD96C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD96C0: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD96C0u)) return;
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
label_80CD96C4:
    ctx->pc = 0x80CD96C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD96C4: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD96C4u)) return;
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
label_80CD96C8:
    ctx->pc = 0x80CD96C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD96C8: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD96C8u)) return;
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
label_80CD96CC:
    ctx->pc = 0x80CD96CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96CCu)) return;
    // 80CD96CC: lis     r3, -28644
    ctx->gpr[3] = ((u32)(s32)(-28644) << 16);

label_80CD96D0:
    ctx->pc = 0x80CD96D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96D0u)) return;
    // 80CD96D0: addi    r4, r3, 13788
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13788);

label_80CD96D4:
    ctx->pc = 0x80CD96D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD96D4: lwz     r3, 0(r4)
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
label_80CD96D8:
    ctx->pc = 0x80CD96D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD96D8: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD96D8u)) return;
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
label_80CD96DC:
    ctx->pc = 0x80CD96DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD96DC: lwz     r3, 0(r4)
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
label_80CD96E0:
    ctx->pc = 0x80CD96E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD96E0: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD96E0u)) return;
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
label_80CD96E4:
    ctx->pc = 0x80CD96E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD96E4: lwz     r3, 0(r4)
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
label_80CD96E8:
    ctx->pc = 0x80CD96E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD96E8: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD96E8u)) return;
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
label_80CD96EC:
    ctx->pc = 0x80CD96ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96ECu)) return;
    // 80CD96EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD96F0:
    ctx->pc = 0x80CD96F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD96F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CD96F0: lis     r6, -27369
    ctx->gpr[6] = ((u32)(s32)(-27369) << 16);

label_80CD96F4:
    ctx->pc = 0x80CD96F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96F4u)) return;
    // 80CD96F4: addi    r6, r6, -5488
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5488);

label_80CD96F8:
    ctx->pc = 0x80CD96F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD96F8: lwz     r6, 0(r6)
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
label_80CD96FC:
    ctx->pc = 0x80CD96FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD96FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD96FC: lwz     r6, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9700:
    ctx->pc = 0x80CD9700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD9700: stw     r3, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9704:
    ctx->pc = 0x80CD9704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD9704: stw     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9708:
    ctx->pc = 0x80CD9708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD9708: stw     r5, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD970C:
    ctx->pc = 0x80CD970Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD970Cu)) return;
    // 80CD970C: lis     r6, -28644
    ctx->gpr[6] = ((u32)(s32)(-28644) << 16);

label_80CD9710:
    ctx->pc = 0x80CD9710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9710u)) return;
    // 80CD9710: addi    r7, r6, 13788
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(13788);

label_80CD9714:
    ctx->pc = 0x80CD9714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9714: lwz     r6, 0(r7)
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
label_80CD9718:
    ctx->pc = 0x80CD9718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD9718: stw     r3, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD971C:
    ctx->pc = 0x80CD971Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD971Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD971C: lwz     r3, 0(r7)
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
label_80CD9720:
    ctx->pc = 0x80CD9720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9720: stw     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9724:
    ctx->pc = 0x80CD9724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9724: lwz     r3, 0(r7)
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
label_80CD9728:
    ctx->pc = 0x80CD9728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD9728: stw     r5, 28(r3)
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
label_80CD972C:
    ctx->pc = 0x80CD972Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD972Cu)) return;
    // 80CD972C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD9730:
    ctx->pc = 0x80CD9730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CD9730: lis     r4, -32562
    ctx->gpr[4] = ((u32)(s32)(-32562) << 16);

label_80CD9734:
    ctx->pc = 0x80CD9734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9734u)) return;
    // 80CD9734: addi    r0, r4, -26796
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-26796);

label_80CD9738:
    ctx->pc = 0x80CD9738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9738: stw     r0, 16(r3)
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
label_80CD973C:
    ctx->pc = 0x80CD973Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD973Cu)) return;
    // 80CD973C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD9740:
    ctx->pc = 0x80CD9740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9740: stw     r0, 20(r3)
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
label_80CD9744:
    ctx->pc = 0x80CD9744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9744u)) return;
    // 80CD9744: lis     r4, -32562
    ctx->gpr[4] = ((u32)(s32)(-32562) << 16);

label_80CD9748:
    ctx->pc = 0x80CD9748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9748u)) return;
    // 80CD9748: addi    r0, r4, -26248
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-26248);

label_80CD974C:
    ctx->pc = 0x80CD974Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD974Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD974C: stw     r0, 24(r3)
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
label_80CD9750:
    ctx->pc = 0x80CD9750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9750u)) return;
    // 80CD9750: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD9754:
    ctx->pc = 0x80CD9754u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9754u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD9754: lwz     r3, 32(r3)
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
label_80CD9758:
    ctx->pc = 0x80CD9758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9758: lwz     r4, 16(r3)
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
label_80CD975C:
    ctx->pc = 0x80CD975Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD975Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD975C: lbz     r0, 0(r3)
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
label_80CD9760:
    ctx->pc = 0x80CD9760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9760u)) return;
    // 80CD9760: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CD9764:
    ctx->pc = 0x80CD9764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9764u)) return;
    // 80CD9764: cmpwi   r0, 1
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

label_80CD9768:
    ctx->pc = 0x80CD9768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9768u)) return;
    // 80CD9768: bc    12, 2, 0x80CD98F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD98F8;
        }
    }

label_80CD976C:
    ctx->pc = 0x80CD976Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD976Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD976C: bc    4, 0, 0x80CD9778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD9778;
        }
    }

label_80CD9770:
    ctx->pc = 0x80CD9770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD9770: cmpwi   r0, 0
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

label_80CD9774:
    ctx->pc = 0x80CD9774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9774u)) return;
    // 80CD9774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD9778:
    ctx->pc = 0x80CD9778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD9778: cmpwi   r0, 3
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

label_80CD977C:
    ctx->pc = 0x80CD977Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD977Cu)) return;
    // 80CD977C: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD9780:
    ctx->pc = 0x80CD9780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9780: lwz     r6, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9784:
    ctx->pc = 0x80CD9784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9784u)) return;
    // 80CD9784: cmpwi   r6, 0
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

label_80CD9788:
    ctx->pc = 0x80CD9788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9788u)) return;
    // 80CD9788: bc    12, 0, 0x80CD9828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9828;
        }
    }

label_80CD978C:
    ctx->pc = 0x80CD978Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD978Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CD978C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CD9790:
    ctx->pc = 0x80CD9790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9790u)) return;
    // 80CD9790: addi    r0, r5, -32768
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80CD9794:
    ctx->pc = 0x80CD9794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9794u)) return;
    // 80CD9794: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD9798:
    ctx->pc = 0x80CD9798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9798u)) return;
    // 80CD9798: bc    4, 0, 0x80CD9828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CD9828;
        }
    }

label_80CD979C:
    ctx->pc = 0x80CD979Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD979Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD979C: lwz     r7, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD97A0:
    ctx->pc = 0x80CD97A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97A0u)) return;
    // 80CD97A0: addis   r5, r6, 1
    ctx->gpr[5] = ctx->gpr[6] + ((u32)(s32)(1) << 16);

label_80CD97A4:
    ctx->pc = 0x80CD97A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97A4u)) return;
    // 80CD97A4: addi    r0, r5, -32768
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80CD97A8:
    ctx->pc = 0x80CD97A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97A8u)) return;
    // 80CD97A8: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD97AC:
    ctx->pc = 0x80CD97ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97ACu)) return;
    // 80CD97AC: bc    12, 1, 0x80CD97DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD97DC;
        }
    }

label_80CD97B0:
    ctx->pc = 0x80CD97B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD97B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD97B0: cmpw    r7, r6
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD97B4:
    ctx->pc = 0x80CD97B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97B4u)) return;
    // 80CD97B4: bc    12, 0, 0x80CD97DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD97DC;
        }
    }

label_80CD97B8:
    ctx->pc = 0x80CD97B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD97B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD97B8: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD97BC:
    ctx->pc = 0x80CD97BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97BCu)) return;
    // 80CD97BC: subf   r0, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80CD97C0:
    ctx->pc = 0x80CD97C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD97C0: stw     r0, 24(r3)
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
label_80CD97C4:
    ctx->pc = 0x80CD97C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD97C4: lwz     r0, 24(r3)
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
label_80CD97C8:
    ctx->pc = 0x80CD97C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97C8u)) return;
    // 80CD97C8: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80CD97CC:
    ctx->pc = 0x80CD97CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97CCu)) return;
    // 80CD97CC: addi    r5, r5, 13788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13788);

label_80CD97D0:
    ctx->pc = 0x80CD97D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD97D0: lwz     r5, 0(r5)
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
label_80CD97D4:
    ctx->pc = 0x80CD97D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD97D4: stw     r0, 24(r5)
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
label_80CD97D8:
    ctx->pc = 0x80CD97D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97D8u)) return;
    // 80CD97D8: b       0x80CD98A8
    {
            goto label_80CD98A8;
    }

label_80CD97DC:
    ctx->pc = 0x80CD97DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD97DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD97DC: lwz     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD97E0:
    ctx->pc = 0x80CD97E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD97E0: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD97E4:
    ctx->pc = 0x80CD97E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97E4u)) return;
    // 80CD97E4: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CD97E8:
    ctx->pc = 0x80CD97E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD97E8: stw     r0, 24(r3)
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
label_80CD97EC:
    ctx->pc = 0x80CD97ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD97EC: lwz     r0, 24(r3)
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
label_80CD97F0:
    ctx->pc = 0x80CD97F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97F0u)) return;
    // 80CD97F0: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80CD97F4:
    ctx->pc = 0x80CD97F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97F4u)) return;
    // 80CD97F4: addi    r6, r5, 13788
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13788);

label_80CD97F8:
    ctx->pc = 0x80CD97F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD97F8: lwz     r5, 0(r6)
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
label_80CD97FC:
    ctx->pc = 0x80CD97FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD97FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD97FC: stw     r0, 24(r5)
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
label_80CD9800:
    ctx->pc = 0x80CD9800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9800: lwz     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9804:
    ctx->pc = 0x80CD9804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9804u)) return;
    // 80CD9804: lis     r0, 1
    ctx->gpr[0] = ((u32)(s32)(1) << 16);

label_80CD9808:
    ctx->pc = 0x80CD9808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9808u)) return;
    // 80CD9808: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD980C:
    ctx->pc = 0x80CD980Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD980Cu)) return;
    // 80CD980C: bc    12, 0, 0x80CD98A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD98A8;
        }
    }

label_80CD9810:
    ctx->pc = 0x80CD9810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CD9810: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD9814:
    ctx->pc = 0x80CD9814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9814: stw     r0, 24(r3)
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
label_80CD9818:
    ctx->pc = 0x80CD9818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9818: lwz     r0, 24(r3)
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
label_80CD981C:
    ctx->pc = 0x80CD981Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD981Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD981C: lwz     r5, 0(r6)
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
label_80CD9820:
    ctx->pc = 0x80CD9820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD9820: stw     r0, 24(r5)
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
label_80CD9824:
    ctx->pc = 0x80CD9824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9824u)) return;
    // 80CD9824: b       0x80CD98A8
    {
            goto label_80CD98A8;
    }

label_80CD9828:
    ctx->pc = 0x80CD9828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9828: lwz     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD982C:
    ctx->pc = 0x80CD982Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD982Cu)) return;
    // 80CD982C: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_80CD9830:
    ctx->pc = 0x80CD9830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9830u)) return;
    // 80CD9830: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD9834:
    ctx->pc = 0x80CD9834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9834u)) return;
    // 80CD9834: bc    12, 0, 0x80CD9864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9864;
        }
    }

label_80CD9838:
    ctx->pc = 0x80CD9838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CD9838: cmpw    r5, r6
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD983C:
    ctx->pc = 0x80CD983Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD983Cu)) return;
    // 80CD983C: bc    12, 1, 0x80CD9864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9864;
        }
    }

label_80CD9840:
    ctx->pc = 0x80CD9840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD9840: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9844:
    ctx->pc = 0x80CD9844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9844u)) return;
    // 80CD9844: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CD9848:
    ctx->pc = 0x80CD9848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9848: stw     r0, 24(r3)
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
label_80CD984C:
    ctx->pc = 0x80CD984Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD984Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD984C: lwz     r0, 24(r3)
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
label_80CD9850:
    ctx->pc = 0x80CD9850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9850u)) return;
    // 80CD9850: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80CD9854:
    ctx->pc = 0x80CD9854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9854u)) return;
    // 80CD9854: addi    r5, r5, 13788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13788);

label_80CD9858:
    ctx->pc = 0x80CD9858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9858: lwz     r5, 0(r5)
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
label_80CD985C:
    ctx->pc = 0x80CD985Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD985Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD985C: stw     r0, 24(r5)
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
label_80CD9860:
    ctx->pc = 0x80CD9860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9860u)) return;
    // 80CD9860: b       0x80CD98A8
    {
            goto label_80CD98A8;
    }

label_80CD9864:
    ctx->pc = 0x80CD9864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD9864: lwz     r5, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9868:
    ctx->pc = 0x80CD9868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD9868: lwz     r0, 24(r3)
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
label_80CD986C:
    ctx->pc = 0x80CD986Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD986Cu)) return;
    // 80CD986C: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80CD9870:
    ctx->pc = 0x80CD9870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD9870: stw     r0, 24(r3)
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
label_80CD9874:
    ctx->pc = 0x80CD9874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD9874: lwz     r0, 24(r3)
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
label_80CD9878:
    ctx->pc = 0x80CD9878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9878u)) return;
    // 80CD9878: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80CD987C:
    ctx->pc = 0x80CD987Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD987Cu)) return;
    // 80CD987C: addi    r6, r5, 13788
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13788);

label_80CD9880:
    ctx->pc = 0x80CD9880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9880: lwz     r5, 0(r6)
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
label_80CD9884:
    ctx->pc = 0x80CD9884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9884: stw     r0, 24(r5)
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
label_80CD9888:
    ctx->pc = 0x80CD9888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9888: lwz     r0, 24(r3)
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
label_80CD988C:
    ctx->pc = 0x80CD988Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD988Cu)) return;
    // 80CD988C: cmpwi   r0, 0
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

label_80CD9890:
    ctx->pc = 0x80CD9890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9890u)) return;
    // 80CD9890: bc    12, 1, 0x80CD98A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD98A8;
        }
    }

label_80CD9894:
    ctx->pc = 0x80CD9894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CD9894: lis     r0, 1
    ctx->gpr[0] = ((u32)(s32)(1) << 16);

label_80CD9898:
    ctx->pc = 0x80CD9898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9898: stw     r0, 24(r3)
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
label_80CD989C:
    ctx->pc = 0x80CD989Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD989Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD989C: lwz     r0, 24(r3)
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
label_80CD98A0:
    ctx->pc = 0x80CD98A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD98A0: lwz     r5, 0(r6)
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
label_80CD98A4:
    ctx->pc = 0x80CD98A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CD98A4: stw     r0, 24(r5)
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
label_80CD98A8:
    ctx->pc = 0x80CD98A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD98A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD98A8: lwz     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD98AC:
    ctx->pc = 0x80CD98ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD98AC: lwz     r5, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD98B0:
    ctx->pc = 0x80CD98B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD98B0: lwz     r4, 36(r4)
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
label_80CD98B4:
    ctx->pc = 0x80CD98B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98B4u)) return;
    // 80CD98B4: add   r0, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CD98B8:
    ctx->pc = 0x80CD98B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98B8u)) return;
    // 80CD98B8: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD98BC:
    ctx->pc = 0x80CD98BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98BCu)) return;
    // 80CD98BC: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD98C0:
    ctx->pc = 0x80CD98C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD98C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD98C0: subf   r0, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80CD98C4:
    ctx->pc = 0x80CD98C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98C4u)) return;
    // 80CD98C4: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD98C8:
    ctx->pc = 0x80CD98C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98C8u)) return;
    // 80CD98C8: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD98CC:
    ctx->pc = 0x80CD98CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD98CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD98CC: stw     r5, 24(r3)
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
label_80CD98D0:
    ctx->pc = 0x80CD98D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD98D0: lwz     r0, 24(r3)
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
label_80CD98D4:
    ctx->pc = 0x80CD98D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98D4u)) return;
    // 80CD98D4: lis     r4, -28644
    ctx->gpr[4] = ((u32)(s32)(-28644) << 16);

label_80CD98D8:
    ctx->pc = 0x80CD98D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98D8u)) return;
    // 80CD98D8: addi    r4, r4, 13788
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13788);

label_80CD98DC:
    ctx->pc = 0x80CD98DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD98DC: lwz     r4, 0(r4)
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
label_80CD98E0:
    ctx->pc = 0x80CD98E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD98E0: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD98E4:
    ctx->pc = 0x80CD98E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98E4u)) return;
    // 80CD98E4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CD98E8:
    ctx->pc = 0x80CD98E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD98E8: stb     r0, 0(r3)
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
label_80CD98EC:
    ctx->pc = 0x80CD98ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98ECu)) return;
    // 80CD98EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD98F0:
    ctx->pc = 0x80CD98F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD98F0: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD98F4:
    ctx->pc = 0x80CD98F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98F4u)) return;
    // 80CD98F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD98F8:
    ctx->pc = 0x80CD98F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD98F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CD98F8: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD98F8u)) return;
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
label_80CD98FC:
    ctx->pc = 0x80CD98FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD98FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CD98FC: lfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD98FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
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
label_80CD9900:
    ctx->pc = 0x80CD9900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9900u)) return;
    // 80CD9900: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9900u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CD9904:
    ctx->pc = 0x80CD9904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CD9904: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9904u)) return;
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
label_80CD9908:
    ctx->pc = 0x80CD9908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CD9908: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9908u)) return;
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
label_80CD990C:
    ctx->pc = 0x80CD990Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD990Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CD990C: lfs     f0, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD990Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
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
label_80CD9910:
    ctx->pc = 0x80CD9910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9910u)) return;
    // 80CD9910: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9910u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CD9914:
    ctx->pc = 0x80CD9914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CD9914: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9914u)) return;
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
label_80CD9918:
    ctx->pc = 0x80CD9918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CD9918: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9918u)) return;
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
label_80CD991C:
    ctx->pc = 0x80CD991Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD991Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CD991C: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CD991Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80CD9920:
    ctx->pc = 0x80CD9920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9920u)) return;
    // 80CD9920: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CD9920u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CD9924:
    ctx->pc = 0x80CD9924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CD9924: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9924u)) return;
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
label_80CD9928:
    ctx->pc = 0x80CD9928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CD9928: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9928u)) return;
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
label_80CD992C:
    ctx->pc = 0x80CD992Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD992Cu)) return;
    // 80CD992C: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80CD9930:
    ctx->pc = 0x80CD9930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9930u)) return;
    // 80CD9930: addi    r6, r5, 13788
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13788);

label_80CD9934:
    ctx->pc = 0x80CD9934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CD9934: lwz     r5, 0(r6)
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
label_80CD9938:
    ctx->pc = 0x80CD9938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CD9938: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD9938u)) return;
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
label_80CD993C:
    ctx->pc = 0x80CD993Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD993Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CD993C: lfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD993Cu)) return;
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
label_80CD9940:
    ctx->pc = 0x80CD9940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CD9940: lwz     r5, 0(r6)
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
label_80CD9944:
    ctx->pc = 0x80CD9944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CD9944: stfs     f0, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD9944u)) return;
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
label_80CD9948:
    ctx->pc = 0x80CD9948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CD9948: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CD9948u)) return;
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
label_80CD994C:
    ctx->pc = 0x80CD994Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD994Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CD994C: lwz     r5, 0(r6)
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
label_80CD9950:
    ctx->pc = 0x80CD9950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9950: stfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CD9950u)) return;
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
label_80CD9954:
    ctx->pc = 0x80CD9954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD9954: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9958:
    ctx->pc = 0x80CD9958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9958u)) return;
    // 80CD9958: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80CD995C:
    ctx->pc = 0x80CD995Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD995Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD995C: stw     r5, 8(r3)
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
label_80CD9960:
    ctx->pc = 0x80CD9960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9960: lwz     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9964:
    ctx->pc = 0x80CD9964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9964u)) return;
    // 80CD9964: cmplw   r5, r0
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CD9968:
    ctx->pc = 0x80CD9968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9968u)) return;
    // 80CD9968: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD996C:
    ctx->pc = 0x80CD996Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD996Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CD996C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CD9970:
    ctx->pc = 0x80CD9970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CD9970: stb     r0, 0(r3)
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
label_80CD9974:
    ctx->pc = 0x80CD9974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9974u)) return;
    // 80CD9974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

label_80CD9978:
    ctx->pc = 0x80CD9978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CD9978: stwu     r1, -16(r1)
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
label_80CD997C:
    ctx->pc = 0x80CD997Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD997Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CD997C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD9980:
    ctx->pc = 0x80CD9980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9980: stw     r0, 20(r1)
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
label_80CD9984:
    ctx->pc = 0x80CD9984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CD9984: lwz     r3, 32(r3)
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
label_80CD9988:
    ctx->pc = 0x80CD9988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD9988: lwz     r3, 16(r3)
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
label_80CD998C:
    ctx->pc = 0x80CD998Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD998Cu)) return;
    // 80CD998C: cmplwi  r3, 0x0000
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

label_80CD9990:
    ctx->pc = 0x80CD9990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD9990u)) return;
    // 80CD9990: bc    12, 2, 0x80CD9998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CD9998;
        }
    }

label_80CD9994:
    ctx->pc = 0x80CD9994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CD9994: bl      0x8050ED40
    {
            ctx->lr = 0x80CD9998u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CD9998:
    ctx->pc = 0x80CD9998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CD9998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CD9998: lwz     r0, 20(r1)
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
label_80CD999C:
    ctx->pc = 0x80CD999Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CD999Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CD999C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CD99A0:
    ctx->pc = 0x80CD99A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD99A0u)) return;
    // 80CD99A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CD99A4:
    ctx->pc = 0x80CD99A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CD99A4u)) return;
    // 80CD99A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CD7E20;
        }
    }

    ctx->pc = 0x80CD99A8u;
    return;
return_dispatch_80CD7E20:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CD7E3Cu: goto label_80CD7E3C;
    case 0x80CD7E64u: goto label_80CD7E64;
    case 0x80CD7E68u: goto label_80CD7E68;
    case 0x80CD7E6Cu: goto label_80CD7E6C;
    case 0x80CD7E74u: goto label_80CD7E74;
    case 0x80CD7E7Cu: goto label_80CD7E7C;
    case 0x80CD7E84u: goto label_80CD7E84;
    case 0x80CD7E8Cu: goto label_80CD7E8C;
    case 0x80CD7EB4u: goto label_80CD7EB4;
    case 0x80CD7EBCu: goto label_80CD7EBC;
    case 0x80CD7ED0u: goto label_80CD7ED0;
    case 0x80CD7ED8u: goto label_80CD7ED8;
    case 0x80CD7EE4u: goto label_80CD7EE4;
    case 0x80CD7EF8u: goto label_80CD7EF8;
    case 0x80CD7F04u: goto label_80CD7F04;
    case 0x80CD7F10u: goto label_80CD7F10;
    case 0x80CD7F1Cu: goto label_80CD7F1C;
    case 0x80CD7F4Cu: goto label_80CD7F4C;
    case 0x80CD7F90u: goto label_80CD7F90;
    case 0x80CD7FCCu: goto label_80CD7FCC;
    case 0x80CD7FD4u: goto label_80CD7FD4;
    case 0x80CD7FDCu: goto label_80CD7FDC;
    case 0x80CD7FE0u: goto label_80CD7FE0;
    case 0x80CD7FF0u: goto label_80CD7FF0;
    case 0x80CD7FF8u: goto label_80CD7FF8;
    case 0x80CD8020u: goto label_80CD8020;
    case 0x80CD8054u: goto label_80CD8054;
    case 0x80CD805Cu: goto label_80CD805C;
    case 0x80CD8060u: goto label_80CD8060;
    case 0x80CD8068u: goto label_80CD8068;
    case 0x80CD8090u: goto label_80CD8090;
    case 0x80CD80A4u: goto label_80CD80A4;
    case 0x80CD80ACu: goto label_80CD80AC;
    case 0x80CD80B4u: goto label_80CD80B4;
    case 0x80CD80BCu: goto label_80CD80BC;
    case 0x80CD80C8u: goto label_80CD80C8;
    case 0x80CD80E8u: goto label_80CD80E8;
    case 0x80CD8108u: goto label_80CD8108;
    case 0x80CD8110u: goto label_80CD8110;
    case 0x80CD811Cu: goto label_80CD811C;
    case 0x80CD8130u: goto label_80CD8130;
    case 0x80CD8150u: goto label_80CD8150;
    case 0x80CD8160u: goto label_80CD8160;
    case 0x80CD8190u: goto label_80CD8190;
    case 0x80CD81ACu: goto label_80CD81AC;
    case 0x80CD81B4u: goto label_80CD81B4;
    case 0x80CD81B8u: goto label_80CD81B8;
    case 0x80CD81C8u: goto label_80CD81C8;
    case 0x80CD81D0u: goto label_80CD81D0;
    case 0x80CD81F8u: goto label_80CD81F8;
    case 0x80CD8238u: goto label_80CD8238;
    case 0x80CD8270u: goto label_80CD8270;
    case 0x80CD8278u: goto label_80CD8278;
    case 0x80CD82A0u: goto label_80CD82A0;
    case 0x80CD82F4u: goto label_80CD82F4;
    case 0x80CD8348u: goto label_80CD8348;
    case 0x80CD8350u: goto label_80CD8350;
    case 0x80CD8358u: goto label_80CD8358;
    case 0x80CD8380u: goto label_80CD8380;
    case 0x80CD8390u: goto label_80CD8390;
    case 0x80CD8398u: goto label_80CD8398;
    case 0x80CD83A0u: goto label_80CD83A0;
    case 0x80CD83A4u: goto label_80CD83A4;
    case 0x80CD83B4u: goto label_80CD83B4;
    case 0x80CD8408u: goto label_80CD8408;
    case 0x80CD8410u: goto label_80CD8410;
    case 0x80CD8438u: goto label_80CD8438;
    case 0x80CD848Cu: goto label_80CD848C;
    case 0x80CD8494u: goto label_80CD8494;
    case 0x80CD84BCu: goto label_80CD84BC;
    case 0x80CD84C0u: goto label_80CD84C0;
    case 0x80CD84C4u: goto label_80CD84C4;
    case 0x80CD84CCu: goto label_80CD84CC;
    case 0x80CD84F4u: goto label_80CD84F4;
    case 0x80CD84FCu: goto label_80CD84FC;
    case 0x80CD8524u: goto label_80CD8524;
    case 0x80CD8528u: goto label_80CD8528;
    case 0x80CD8558u: goto label_80CD8558;
    case 0x80CD8570u: goto label_80CD8570;
    case 0x80CD8578u: goto label_80CD8578;
    case 0x80CD857Cu: goto label_80CD857C;
    case 0x80CD8584u: goto label_80CD8584;
    case 0x80CD8590u: goto label_80CD8590;
    case 0x80CD8598u: goto label_80CD8598;
    case 0x80CD85C0u: goto label_80CD85C0;
    case 0x80CD85C4u: goto label_80CD85C4;
    case 0x80CD85CCu: goto label_80CD85CC;
    case 0x80CD85D0u: goto label_80CD85D0;
    case 0x80CD8600u: goto label_80CD8600;
    case 0x80CD861Cu: goto label_80CD861C;
    case 0x80CD864Cu: goto label_80CD864C;
    case 0x80CD8654u: goto label_80CD8654;
    case 0x80CD867Cu: goto label_80CD867C;
    case 0x80CD8684u: goto label_80CD8684;
    case 0x80CD868Cu: goto label_80CD868C;
    case 0x80CD8690u: goto label_80CD8690;
    case 0x80CD86A0u: goto label_80CD86A0;
    case 0x80CD86A8u: goto label_80CD86A8;
    case 0x80CD86D0u: goto label_80CD86D0;
    case 0x80CD8710u: goto label_80CD8710;
    case 0x80CD8718u: goto label_80CD8718;
    case 0x80CD8740u: goto label_80CD8740;
    case 0x80CD8748u: goto label_80CD8748;
    case 0x80CD874Cu: goto label_80CD874C;
    case 0x80CD877Cu: goto label_80CD877C;
    case 0x80CD8790u: goto label_80CD8790;
    case 0x80CD87ACu: goto label_80CD87AC;
    case 0x80CD87C0u: goto label_80CD87C0;
    case 0x80CD87C8u: goto label_80CD87C8;
    case 0x80CD87D4u: goto label_80CD87D4;
    case 0x80CD87DCu: goto label_80CD87DC;
    case 0x80CD87E0u: goto label_80CD87E0;
    case 0x80CD87E4u: goto label_80CD87E4;
    case 0x80CD87F4u: goto label_80CD87F4;
    case 0x80CD8818u: goto label_80CD8818;
    case 0x80CD88A4u: goto label_80CD88A4;
    case 0x80CD88B0u: goto label_80CD88B0;
    case 0x80CD8940u: goto label_80CD8940;
    case 0x80CD8948u: goto label_80CD8948;
    case 0x80CD89B0u: goto label_80CD89B0;
    case 0x80CD89F8u: goto label_80CD89F8;
    case 0x80CD8A64u: goto label_80CD8A64;
    case 0x80CD8B10u: goto label_80CD8B10;
    case 0x80CD8B38u: goto label_80CD8B38;
    case 0x80CD8B48u: goto label_80CD8B48;
    case 0x80CD8B90u: goto label_80CD8B90;
    case 0x80CD8B9Cu: goto label_80CD8B9C;
    case 0x80CD8BB4u: goto label_80CD8BB4;
    case 0x80CD8BCCu: goto label_80CD8BCC;
    case 0x80CD8BF0u: goto label_80CD8BF0;
    case 0x80CD8C24u: goto label_80CD8C24;
    case 0x80CD8C2Cu: goto label_80CD8C2C;
    case 0x80CD8C3Cu: goto label_80CD8C3C;
    case 0x80CD8C44u: goto label_80CD8C44;
    case 0x80CD8C5Cu: goto label_80CD8C5C;
    case 0x80CD8C64u: goto label_80CD8C64;
    case 0x80CD8C6Cu: goto label_80CD8C6C;
    case 0x80CD8CF0u: goto label_80CD8CF0;
    case 0x80CD8E58u: goto label_80CD8E58;
    case 0x80CD8F70u: goto label_80CD8F70;
    case 0x80CD8F94u: goto label_80CD8F94;
    case 0x80CD8FCCu: goto label_80CD8FCC;
    case 0x80CD8FECu: goto label_80CD8FEC;
    case 0x80CD9008u: goto label_80CD9008;
    case 0x80CD9098u: goto label_80CD9098;
    case 0x80CD90A0u: goto label_80CD90A0;
    case 0x80CD90C8u: goto label_80CD90C8;
    case 0x80CD911Cu: goto label_80CD911C;
    case 0x80CD914Cu: goto label_80CD914C;
    case 0x80CD9164u: goto label_80CD9164;
    case 0x80CD91C0u: goto label_80CD91C0;
    case 0x80CD9214u: goto label_80CD9214;
    case 0x80CD93BCu: goto label_80CD93BC;
    case 0x80CD93D0u: goto label_80CD93D0;
    case 0x80CD9548u: goto label_80CD9548;
    case 0x80CD955Cu: goto label_80CD955C;
    case 0x80CD957Cu: goto label_80CD957C;
    case 0x80CD959Cu: goto label_80CD959C;
    case 0x80CD95BCu: goto label_80CD95BC;
    case 0x80CD968Cu: goto label_80CD968C;
    case 0x80CD9998u: goto label_80CD9998;
    default: return;
    }
}

