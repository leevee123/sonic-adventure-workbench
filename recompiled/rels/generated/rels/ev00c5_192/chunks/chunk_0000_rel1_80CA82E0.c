// DolRecomp output
#include "../generated.h"

void func_80CA82E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CA82E0[1304] = {
        &&label_80CA82E0,
        &&label_80CA82E4,
        &&label_80CA82E8,
        &&label_80CA82EC,
        &&label_80CA82F0,
        &&label_80CA82F4,
        &&label_80CA82F8,
        &&label_80CA82FC,
        &&label_80CA8300,
        &&label_80CA8304,
        &&label_80CA8308,
        &&label_80CA830C,
        &&label_80CA8310,
        &&label_80CA8314,
        &&label_80CA8318,
        &&label_80CA831C,
        &&label_80CA8320,
        &&label_80CA8324,
        &&label_80CA8328,
        &&label_80CA832C,
        &&label_80CA8330,
        &&label_80CA8334,
        &&label_80CA8338,
        &&label_80CA833C,
        &&label_80CA8340,
        &&label_80CA8344,
        &&label_80CA8348,
        &&label_80CA834C,
        &&label_80CA8350,
        &&label_80CA8354,
        &&label_80CA8358,
        &&label_80CA835C,
        &&label_80CA8360,
        &&label_80CA8364,
        &&label_80CA8368,
        &&label_80CA836C,
        &&label_80CA8370,
        &&label_80CA8374,
        &&label_80CA8378,
        &&label_80CA837C,
        &&label_80CA8380,
        &&label_80CA8384,
        &&label_80CA8388,
        &&label_80CA838C,
        &&label_80CA8390,
        &&label_80CA8394,
        &&label_80CA8398,
        &&label_80CA839C,
        &&label_80CA83A0,
        &&label_80CA83A4,
        &&label_80CA83A8,
        &&label_80CA83AC,
        &&label_80CA83B0,
        &&label_80CA83B4,
        &&label_80CA83B8,
        &&label_80CA83BC,
        &&label_80CA83C0,
        &&label_80CA83C4,
        &&label_80CA83C8,
        &&label_80CA83CC,
        &&label_80CA83D0,
        &&label_80CA83D4,
        &&label_80CA83D8,
        &&label_80CA83DC,
        &&label_80CA83E0,
        &&label_80CA83E4,
        &&label_80CA83E8,
        &&label_80CA83EC,
        &&label_80CA83F0,
        &&label_80CA83F4,
        &&label_80CA83F8,
        &&label_80CA83FC,
        &&label_80CA8400,
        &&label_80CA8404,
        &&label_80CA8408,
        &&label_80CA840C,
        &&label_80CA8410,
        &&label_80CA8414,
        &&label_80CA8418,
        &&label_80CA841C,
        &&label_80CA8420,
        &&label_80CA8424,
        &&label_80CA8428,
        &&label_80CA842C,
        &&label_80CA8430,
        &&label_80CA8434,
        &&label_80CA8438,
        &&label_80CA843C,
        &&label_80CA8440,
        &&label_80CA8444,
        &&label_80CA8448,
        &&label_80CA844C,
        &&label_80CA8450,
        &&label_80CA8454,
        &&label_80CA8458,
        &&label_80CA845C,
        &&label_80CA8460,
        &&label_80CA8464,
        &&label_80CA8468,
        &&label_80CA846C,
        &&label_80CA8470,
        &&label_80CA8474,
        &&label_80CA8478,
        &&label_80CA847C,
        &&label_80CA8480,
        &&label_80CA8484,
        &&label_80CA8488,
        &&label_80CA848C,
        &&label_80CA8490,
        &&label_80CA8494,
        &&label_80CA8498,
        &&label_80CA849C,
        &&label_80CA84A0,
        &&label_80CA84A4,
        &&label_80CA84A8,
        &&label_80CA84AC,
        &&label_80CA84B0,
        &&label_80CA84B4,
        &&label_80CA84B8,
        &&label_80CA84BC,
        &&label_80CA84C0,
        &&label_80CA84C4,
        &&label_80CA84C8,
        &&label_80CA84CC,
        &&label_80CA84D0,
        &&label_80CA84D4,
        &&label_80CA84D8,
        &&label_80CA84DC,
        &&label_80CA84E0,
        &&label_80CA84E4,
        &&label_80CA84E8,
        &&label_80CA84EC,
        &&label_80CA84F0,
        &&label_80CA84F4,
        &&label_80CA84F8,
        &&label_80CA84FC,
        &&label_80CA8500,
        &&label_80CA8504,
        &&label_80CA8508,
        &&label_80CA850C,
        &&label_80CA8510,
        &&label_80CA8514,
        &&label_80CA8518,
        &&label_80CA851C,
        &&label_80CA8520,
        &&label_80CA8524,
        &&label_80CA8528,
        &&label_80CA852C,
        &&label_80CA8530,
        &&label_80CA8534,
        &&label_80CA8538,
        &&label_80CA853C,
        &&label_80CA8540,
        &&label_80CA8544,
        &&label_80CA8548,
        &&label_80CA854C,
        &&label_80CA8550,
        &&label_80CA8554,
        &&label_80CA8558,
        &&label_80CA855C,
        &&label_80CA8560,
        &&label_80CA8564,
        &&label_80CA8568,
        &&label_80CA856C,
        &&label_80CA8570,
        &&label_80CA8574,
        &&label_80CA8578,
        &&label_80CA857C,
        &&label_80CA8580,
        &&label_80CA8584,
        &&label_80CA8588,
        &&label_80CA858C,
        &&label_80CA8590,
        &&label_80CA8594,
        &&label_80CA8598,
        &&label_80CA859C,
        &&label_80CA85A0,
        &&label_80CA85A4,
        &&label_80CA85A8,
        &&label_80CA85AC,
        &&label_80CA85B0,
        &&label_80CA85B4,
        &&label_80CA85B8,
        &&label_80CA85BC,
        &&label_80CA85C0,
        &&label_80CA85C4,
        &&label_80CA85C8,
        &&label_80CA85CC,
        &&label_80CA85D0,
        &&label_80CA85D4,
        &&label_80CA85D8,
        &&label_80CA85DC,
        &&label_80CA85E0,
        &&label_80CA85E4,
        &&label_80CA85E8,
        &&label_80CA85EC,
        &&label_80CA85F0,
        &&label_80CA85F4,
        &&label_80CA85F8,
        &&label_80CA85FC,
        &&label_80CA8600,
        &&label_80CA8604,
        &&label_80CA8608,
        &&label_80CA860C,
        &&label_80CA8610,
        &&label_80CA8614,
        &&label_80CA8618,
        &&label_80CA861C,
        &&label_80CA8620,
        &&label_80CA8624,
        &&label_80CA8628,
        &&label_80CA862C,
        &&label_80CA8630,
        &&label_80CA8634,
        &&label_80CA8638,
        &&label_80CA863C,
        &&label_80CA8640,
        &&label_80CA8644,
        &&label_80CA8648,
        &&label_80CA864C,
        &&label_80CA8650,
        &&label_80CA8654,
        &&label_80CA8658,
        &&label_80CA865C,
        &&label_80CA8660,
        &&label_80CA8664,
        &&label_80CA8668,
        &&label_80CA866C,
        &&label_80CA8670,
        &&label_80CA8674,
        &&label_80CA8678,
        &&label_80CA867C,
        &&label_80CA8680,
        &&label_80CA8684,
        &&label_80CA8688,
        &&label_80CA868C,
        &&label_80CA8690,
        &&label_80CA8694,
        &&label_80CA8698,
        &&label_80CA869C,
        &&label_80CA86A0,
        &&label_80CA86A4,
        &&label_80CA86A8,
        &&label_80CA86AC,
        &&label_80CA86B0,
        &&label_80CA86B4,
        &&label_80CA86B8,
        &&label_80CA86BC,
        &&label_80CA86C0,
        &&label_80CA86C4,
        &&label_80CA86C8,
        &&label_80CA86CC,
        &&label_80CA86D0,
        &&label_80CA86D4,
        &&label_80CA86D8,
        &&label_80CA86DC,
        &&label_80CA86E0,
        &&label_80CA86E4,
        &&label_80CA86E8,
        &&label_80CA86EC,
        &&label_80CA86F0,
        &&label_80CA86F4,
        &&label_80CA86F8,
        &&label_80CA86FC,
        &&label_80CA8700,
        &&label_80CA8704,
        &&label_80CA8708,
        &&label_80CA870C,
        &&label_80CA8710,
        &&label_80CA8714,
        &&label_80CA8718,
        &&label_80CA871C,
        &&label_80CA8720,
        &&label_80CA8724,
        &&label_80CA8728,
        &&label_80CA872C,
        &&label_80CA8730,
        &&label_80CA8734,
        &&label_80CA8738,
        &&label_80CA873C,
        &&label_80CA8740,
        &&label_80CA8744,
        &&label_80CA8748,
        &&label_80CA874C,
        &&label_80CA8750,
        &&label_80CA8754,
        &&label_80CA8758,
        &&label_80CA875C,
        &&label_80CA8760,
        &&label_80CA8764,
        &&label_80CA8768,
        &&label_80CA876C,
        &&label_80CA8770,
        &&label_80CA8774,
        &&label_80CA8778,
        &&label_80CA877C,
        &&label_80CA8780,
        &&label_80CA8784,
        &&label_80CA8788,
        &&label_80CA878C,
        &&label_80CA8790,
        &&label_80CA8794,
        &&label_80CA8798,
        &&label_80CA879C,
        &&label_80CA87A0,
        &&label_80CA87A4,
        &&label_80CA87A8,
        &&label_80CA87AC,
        &&label_80CA87B0,
        &&label_80CA87B4,
        &&label_80CA87B8,
        &&label_80CA87BC,
        &&label_80CA87C0,
        &&label_80CA87C4,
        &&label_80CA87C8,
        &&label_80CA87CC,
        &&label_80CA87D0,
        &&label_80CA87D4,
        &&label_80CA87D8,
        &&label_80CA87DC,
        &&label_80CA87E0,
        &&label_80CA87E4,
        &&label_80CA87E8,
        &&label_80CA87EC,
        &&label_80CA87F0,
        &&label_80CA87F4,
        &&label_80CA87F8,
        &&label_80CA87FC,
        &&label_80CA8800,
        &&label_80CA8804,
        &&label_80CA8808,
        &&label_80CA880C,
        &&label_80CA8810,
        &&label_80CA8814,
        &&label_80CA8818,
        &&label_80CA881C,
        &&label_80CA8820,
        &&label_80CA8824,
        &&label_80CA8828,
        &&label_80CA882C,
        &&label_80CA8830,
        &&label_80CA8834,
        &&label_80CA8838,
        &&label_80CA883C,
        &&label_80CA8840,
        &&label_80CA8844,
        &&label_80CA8848,
        &&label_80CA884C,
        &&label_80CA8850,
        &&label_80CA8854,
        &&label_80CA8858,
        &&label_80CA885C,
        &&label_80CA8860,
        &&label_80CA8864,
        &&label_80CA8868,
        &&label_80CA886C,
        &&label_80CA8870,
        &&label_80CA8874,
        &&label_80CA8878,
        &&label_80CA887C,
        &&label_80CA8880,
        &&label_80CA8884,
        &&label_80CA8888,
        &&label_80CA888C,
        &&label_80CA8890,
        &&label_80CA8894,
        &&label_80CA8898,
        &&label_80CA889C,
        &&label_80CA88A0,
        &&label_80CA88A4,
        &&label_80CA88A8,
        &&label_80CA88AC,
        &&label_80CA88B0,
        &&label_80CA88B4,
        &&label_80CA88B8,
        &&label_80CA88BC,
        &&label_80CA88C0,
        &&label_80CA88C4,
        &&label_80CA88C8,
        &&label_80CA88CC,
        &&label_80CA88D0,
        &&label_80CA88D4,
        &&label_80CA88D8,
        &&label_80CA88DC,
        &&label_80CA88E0,
        &&label_80CA88E4,
        &&label_80CA88E8,
        &&label_80CA88EC,
        &&label_80CA88F0,
        &&label_80CA88F4,
        &&label_80CA88F8,
        &&label_80CA88FC,
        &&label_80CA8900,
        &&label_80CA8904,
        &&label_80CA8908,
        &&label_80CA890C,
        &&label_80CA8910,
        &&label_80CA8914,
        &&label_80CA8918,
        &&label_80CA891C,
        &&label_80CA8920,
        &&label_80CA8924,
        &&label_80CA8928,
        &&label_80CA892C,
        &&label_80CA8930,
        &&label_80CA8934,
        &&label_80CA8938,
        &&label_80CA893C,
        &&label_80CA8940,
        &&label_80CA8944,
        &&label_80CA8948,
        &&label_80CA894C,
        &&label_80CA8950,
        &&label_80CA8954,
        &&label_80CA8958,
        &&label_80CA895C,
        &&label_80CA8960,
        &&label_80CA8964,
        &&label_80CA8968,
        &&label_80CA896C,
        &&label_80CA8970,
        &&label_80CA8974,
        &&label_80CA8978,
        &&label_80CA897C,
        &&label_80CA8980,
        &&label_80CA8984,
        &&label_80CA8988,
        &&label_80CA898C,
        &&label_80CA8990,
        &&label_80CA8994,
        &&label_80CA8998,
        &&label_80CA899C,
        &&label_80CA89A0,
        &&label_80CA89A4,
        &&label_80CA89A8,
        &&label_80CA89AC,
        &&label_80CA89B0,
        &&label_80CA89B4,
        &&label_80CA89B8,
        &&label_80CA89BC,
        &&label_80CA89C0,
        &&label_80CA89C4,
        &&label_80CA89C8,
        &&label_80CA89CC,
        &&label_80CA89D0,
        &&label_80CA89D4,
        &&label_80CA89D8,
        &&label_80CA89DC,
        &&label_80CA89E0,
        &&label_80CA89E4,
        &&label_80CA89E8,
        &&label_80CA89EC,
        &&label_80CA89F0,
        &&label_80CA89F4,
        &&label_80CA89F8,
        &&label_80CA89FC,
        &&label_80CA8A00,
        &&label_80CA8A04,
        &&label_80CA8A08,
        &&label_80CA8A0C,
        &&label_80CA8A10,
        &&label_80CA8A14,
        &&label_80CA8A18,
        &&label_80CA8A1C,
        &&label_80CA8A20,
        &&label_80CA8A24,
        &&label_80CA8A28,
        &&label_80CA8A2C,
        &&label_80CA8A30,
        &&label_80CA8A34,
        &&label_80CA8A38,
        &&label_80CA8A3C,
        &&label_80CA8A40,
        &&label_80CA8A44,
        &&label_80CA8A48,
        &&label_80CA8A4C,
        &&label_80CA8A50,
        &&label_80CA8A54,
        &&label_80CA8A58,
        &&label_80CA8A5C,
        &&label_80CA8A60,
        &&label_80CA8A64,
        &&label_80CA8A68,
        &&label_80CA8A6C,
        &&label_80CA8A70,
        &&label_80CA8A74,
        &&label_80CA8A78,
        &&label_80CA8A7C,
        &&label_80CA8A80,
        &&label_80CA8A84,
        &&label_80CA8A88,
        &&label_80CA8A8C,
        &&label_80CA8A90,
        &&label_80CA8A94,
        &&label_80CA8A98,
        &&label_80CA8A9C,
        &&label_80CA8AA0,
        &&label_80CA8AA4,
        &&label_80CA8AA8,
        &&label_80CA8AAC,
        &&label_80CA8AB0,
        &&label_80CA8AB4,
        &&label_80CA8AB8,
        &&label_80CA8ABC,
        &&label_80CA8AC0,
        &&label_80CA8AC4,
        &&label_80CA8AC8,
        &&label_80CA8ACC,
        &&label_80CA8AD0,
        &&label_80CA8AD4,
        &&label_80CA8AD8,
        &&label_80CA8ADC,
        &&label_80CA8AE0,
        &&label_80CA8AE4,
        &&label_80CA8AE8,
        &&label_80CA8AEC,
        &&label_80CA8AF0,
        &&label_80CA8AF4,
        &&label_80CA8AF8,
        &&label_80CA8AFC,
        &&label_80CA8B00,
        &&label_80CA8B04,
        &&label_80CA8B08,
        &&label_80CA8B0C,
        &&label_80CA8B10,
        &&label_80CA8B14,
        &&label_80CA8B18,
        &&label_80CA8B1C,
        &&label_80CA8B20,
        &&label_80CA8B24,
        &&label_80CA8B28,
        &&label_80CA8B2C,
        &&label_80CA8B30,
        &&label_80CA8B34,
        &&label_80CA8B38,
        &&label_80CA8B3C,
        &&label_80CA8B40,
        &&label_80CA8B44,
        &&label_80CA8B48,
        &&label_80CA8B4C,
        &&label_80CA8B50,
        &&label_80CA8B54,
        &&label_80CA8B58,
        &&label_80CA8B5C,
        &&label_80CA8B60,
        &&label_80CA8B64,
        &&label_80CA8B68,
        &&label_80CA8B6C,
        &&label_80CA8B70,
        &&label_80CA8B74,
        &&label_80CA8B78,
        &&label_80CA8B7C,
        &&label_80CA8B80,
        &&label_80CA8B84,
        &&label_80CA8B88,
        &&label_80CA8B8C,
        &&label_80CA8B90,
        &&label_80CA8B94,
        &&label_80CA8B98,
        &&label_80CA8B9C,
        &&label_80CA8BA0,
        &&label_80CA8BA4,
        &&label_80CA8BA8,
        &&label_80CA8BAC,
        &&label_80CA8BB0,
        &&label_80CA8BB4,
        &&label_80CA8BB8,
        &&label_80CA8BBC,
        &&label_80CA8BC0,
        &&label_80CA8BC4,
        &&label_80CA8BC8,
        &&label_80CA8BCC,
        &&label_80CA8BD0,
        &&label_80CA8BD4,
        &&label_80CA8BD8,
        &&label_80CA8BDC,
        &&label_80CA8BE0,
        &&label_80CA8BE4,
        &&label_80CA8BE8,
        &&label_80CA8BEC,
        &&label_80CA8BF0,
        &&label_80CA8BF4,
        &&label_80CA8BF8,
        &&label_80CA8BFC,
        &&label_80CA8C00,
        &&label_80CA8C04,
        &&label_80CA8C08,
        &&label_80CA8C0C,
        &&label_80CA8C10,
        &&label_80CA8C14,
        &&label_80CA8C18,
        &&label_80CA8C1C,
        &&label_80CA8C20,
        &&label_80CA8C24,
        &&label_80CA8C28,
        &&label_80CA8C2C,
        &&label_80CA8C30,
        &&label_80CA8C34,
        &&label_80CA8C38,
        &&label_80CA8C3C,
        &&label_80CA8C40,
        &&label_80CA8C44,
        &&label_80CA8C48,
        &&label_80CA8C4C,
        &&label_80CA8C50,
        &&label_80CA8C54,
        &&label_80CA8C58,
        &&label_80CA8C5C,
        &&label_80CA8C60,
        &&label_80CA8C64,
        &&label_80CA8C68,
        &&label_80CA8C6C,
        &&label_80CA8C70,
        &&label_80CA8C74,
        &&label_80CA8C78,
        &&label_80CA8C7C,
        &&label_80CA8C80,
        &&label_80CA8C84,
        &&label_80CA8C88,
        &&label_80CA8C8C,
        &&label_80CA8C90,
        &&label_80CA8C94,
        &&label_80CA8C98,
        &&label_80CA8C9C,
        &&label_80CA8CA0,
        &&label_80CA8CA4,
        &&label_80CA8CA8,
        &&label_80CA8CAC,
        &&label_80CA8CB0,
        &&label_80CA8CB4,
        &&label_80CA8CB8,
        &&label_80CA8CBC,
        &&label_80CA8CC0,
        &&label_80CA8CC4,
        &&label_80CA8CC8,
        &&label_80CA8CCC,
        &&label_80CA8CD0,
        &&label_80CA8CD4,
        &&label_80CA8CD8,
        &&label_80CA8CDC,
        &&label_80CA8CE0,
        &&label_80CA8CE4,
        &&label_80CA8CE8,
        &&label_80CA8CEC,
        &&label_80CA8CF0,
        &&label_80CA8CF4,
        &&label_80CA8CF8,
        &&label_80CA8CFC,
        &&label_80CA8D00,
        &&label_80CA8D04,
        &&label_80CA8D08,
        &&label_80CA8D0C,
        &&label_80CA8D10,
        &&label_80CA8D14,
        &&label_80CA8D18,
        &&label_80CA8D1C,
        &&label_80CA8D20,
        &&label_80CA8D24,
        &&label_80CA8D28,
        &&label_80CA8D2C,
        &&label_80CA8D30,
        &&label_80CA8D34,
        &&label_80CA8D38,
        &&label_80CA8D3C,
        &&label_80CA8D40,
        &&label_80CA8D44,
        &&label_80CA8D48,
        &&label_80CA8D4C,
        &&label_80CA8D50,
        &&label_80CA8D54,
        &&label_80CA8D58,
        &&label_80CA8D5C,
        &&label_80CA8D60,
        &&label_80CA8D64,
        &&label_80CA8D68,
        &&label_80CA8D6C,
        &&label_80CA8D70,
        &&label_80CA8D74,
        &&label_80CA8D78,
        &&label_80CA8D7C,
        &&label_80CA8D80,
        &&label_80CA8D84,
        &&label_80CA8D88,
        &&label_80CA8D8C,
        &&label_80CA8D90,
        &&label_80CA8D94,
        &&label_80CA8D98,
        &&label_80CA8D9C,
        &&label_80CA8DA0,
        &&label_80CA8DA4,
        &&label_80CA8DA8,
        &&label_80CA8DAC,
        &&label_80CA8DB0,
        &&label_80CA8DB4,
        &&label_80CA8DB8,
        &&label_80CA8DBC,
        &&label_80CA8DC0,
        &&label_80CA8DC4,
        &&label_80CA8DC8,
        &&label_80CA8DCC,
        &&label_80CA8DD0,
        &&label_80CA8DD4,
        &&label_80CA8DD8,
        &&label_80CA8DDC,
        &&label_80CA8DE0,
        &&label_80CA8DE4,
        &&label_80CA8DE8,
        &&label_80CA8DEC,
        &&label_80CA8DF0,
        &&label_80CA8DF4,
        &&label_80CA8DF8,
        &&label_80CA8DFC,
        &&label_80CA8E00,
        &&label_80CA8E04,
        &&label_80CA8E08,
        &&label_80CA8E0C,
        &&label_80CA8E10,
        &&label_80CA8E14,
        &&label_80CA8E18,
        &&label_80CA8E1C,
        &&label_80CA8E20,
        &&label_80CA8E24,
        &&label_80CA8E28,
        &&label_80CA8E2C,
        &&label_80CA8E30,
        &&label_80CA8E34,
        &&label_80CA8E38,
        &&label_80CA8E3C,
        &&label_80CA8E40,
        &&label_80CA8E44,
        &&label_80CA8E48,
        &&label_80CA8E4C,
        &&label_80CA8E50,
        &&label_80CA8E54,
        &&label_80CA8E58,
        &&label_80CA8E5C,
        &&label_80CA8E60,
        &&label_80CA8E64,
        &&label_80CA8E68,
        &&label_80CA8E6C,
        &&label_80CA8E70,
        &&label_80CA8E74,
        &&label_80CA8E78,
        &&label_80CA8E7C,
        &&label_80CA8E80,
        &&label_80CA8E84,
        &&label_80CA8E88,
        &&label_80CA8E8C,
        &&label_80CA8E90,
        &&label_80CA8E94,
        &&label_80CA8E98,
        &&label_80CA8E9C,
        &&label_80CA8EA0,
        &&label_80CA8EA4,
        &&label_80CA8EA8,
        &&label_80CA8EAC,
        &&label_80CA8EB0,
        &&label_80CA8EB4,
        &&label_80CA8EB8,
        &&label_80CA8EBC,
        &&label_80CA8EC0,
        &&label_80CA8EC4,
        &&label_80CA8EC8,
        &&label_80CA8ECC,
        &&label_80CA8ED0,
        &&label_80CA8ED4,
        &&label_80CA8ED8,
        &&label_80CA8EDC,
        &&label_80CA8EE0,
        &&label_80CA8EE4,
        &&label_80CA8EE8,
        &&label_80CA8EEC,
        &&label_80CA8EF0,
        &&label_80CA8EF4,
        &&label_80CA8EF8,
        &&label_80CA8EFC,
        &&label_80CA8F00,
        &&label_80CA8F04,
        &&label_80CA8F08,
        &&label_80CA8F0C,
        &&label_80CA8F10,
        &&label_80CA8F14,
        &&label_80CA8F18,
        &&label_80CA8F1C,
        &&label_80CA8F20,
        &&label_80CA8F24,
        &&label_80CA8F28,
        &&label_80CA8F2C,
        &&label_80CA8F30,
        &&label_80CA8F34,
        &&label_80CA8F38,
        &&label_80CA8F3C,
        &&label_80CA8F40,
        &&label_80CA8F44,
        &&label_80CA8F48,
        &&label_80CA8F4C,
        &&label_80CA8F50,
        &&label_80CA8F54,
        &&label_80CA8F58,
        &&label_80CA8F5C,
        &&label_80CA8F60,
        &&label_80CA8F64,
        &&label_80CA8F68,
        &&label_80CA8F6C,
        &&label_80CA8F70,
        &&label_80CA8F74,
        &&label_80CA8F78,
        &&label_80CA8F7C,
        &&label_80CA8F80,
        &&label_80CA8F84,
        &&label_80CA8F88,
        &&label_80CA8F8C,
        &&label_80CA8F90,
        &&label_80CA8F94,
        &&label_80CA8F98,
        &&label_80CA8F9C,
        &&label_80CA8FA0,
        &&label_80CA8FA4,
        &&label_80CA8FA8,
        &&label_80CA8FAC,
        &&label_80CA8FB0,
        &&label_80CA8FB4,
        &&label_80CA8FB8,
        &&label_80CA8FBC,
        &&label_80CA8FC0,
        &&label_80CA8FC4,
        &&label_80CA8FC8,
        &&label_80CA8FCC,
        &&label_80CA8FD0,
        &&label_80CA8FD4,
        &&label_80CA8FD8,
        &&label_80CA8FDC,
        &&label_80CA8FE0,
        &&label_80CA8FE4,
        &&label_80CA8FE8,
        &&label_80CA8FEC,
        &&label_80CA8FF0,
        &&label_80CA8FF4,
        &&label_80CA8FF8,
        &&label_80CA8FFC,
        &&label_80CA9000,
        &&label_80CA9004,
        &&label_80CA9008,
        &&label_80CA900C,
        &&label_80CA9010,
        &&label_80CA9014,
        &&label_80CA9018,
        &&label_80CA901C,
        &&label_80CA9020,
        &&label_80CA9024,
        &&label_80CA9028,
        &&label_80CA902C,
        &&label_80CA9030,
        &&label_80CA9034,
        &&label_80CA9038,
        &&label_80CA903C,
        &&label_80CA9040,
        &&label_80CA9044,
        &&label_80CA9048,
        &&label_80CA904C,
        &&label_80CA9050,
        &&label_80CA9054,
        &&label_80CA9058,
        &&label_80CA905C,
        &&label_80CA9060,
        &&label_80CA9064,
        &&label_80CA9068,
        &&label_80CA906C,
        &&label_80CA9070,
        &&label_80CA9074,
        &&label_80CA9078,
        &&label_80CA907C,
        &&label_80CA9080,
        &&label_80CA9084,
        &&label_80CA9088,
        &&label_80CA908C,
        &&label_80CA9090,
        &&label_80CA9094,
        &&label_80CA9098,
        &&label_80CA909C,
        &&label_80CA90A0,
        &&label_80CA90A4,
        &&label_80CA90A8,
        &&label_80CA90AC,
        &&label_80CA90B0,
        &&label_80CA90B4,
        &&label_80CA90B8,
        &&label_80CA90BC,
        &&label_80CA90C0,
        &&label_80CA90C4,
        &&label_80CA90C8,
        &&label_80CA90CC,
        &&label_80CA90D0,
        &&label_80CA90D4,
        &&label_80CA90D8,
        &&label_80CA90DC,
        &&label_80CA90E0,
        &&label_80CA90E4,
        &&label_80CA90E8,
        &&label_80CA90EC,
        &&label_80CA90F0,
        &&label_80CA90F4,
        &&label_80CA90F8,
        &&label_80CA90FC,
        &&label_80CA9100,
        &&label_80CA9104,
        &&label_80CA9108,
        &&label_80CA910C,
        &&label_80CA9110,
        &&label_80CA9114,
        &&label_80CA9118,
        &&label_80CA911C,
        &&label_80CA9120,
        &&label_80CA9124,
        &&label_80CA9128,
        &&label_80CA912C,
        &&label_80CA9130,
        &&label_80CA9134,
        &&label_80CA9138,
        &&label_80CA913C,
        &&label_80CA9140,
        &&label_80CA9144,
        &&label_80CA9148,
        &&label_80CA914C,
        &&label_80CA9150,
        &&label_80CA9154,
        &&label_80CA9158,
        &&label_80CA915C,
        &&label_80CA9160,
        &&label_80CA9164,
        &&label_80CA9168,
        &&label_80CA916C,
        &&label_80CA9170,
        &&label_80CA9174,
        &&label_80CA9178,
        &&label_80CA917C,
        &&label_80CA9180,
        &&label_80CA9184,
        &&label_80CA9188,
        &&label_80CA918C,
        &&label_80CA9190,
        &&label_80CA9194,
        &&label_80CA9198,
        &&label_80CA919C,
        &&label_80CA91A0,
        &&label_80CA91A4,
        &&label_80CA91A8,
        &&label_80CA91AC,
        &&label_80CA91B0,
        &&label_80CA91B4,
        &&label_80CA91B8,
        &&label_80CA91BC,
        &&label_80CA91C0,
        &&label_80CA91C4,
        &&label_80CA91C8,
        &&label_80CA91CC,
        &&label_80CA91D0,
        &&label_80CA91D4,
        &&label_80CA91D8,
        &&label_80CA91DC,
        &&label_80CA91E0,
        &&label_80CA91E4,
        &&label_80CA91E8,
        &&label_80CA91EC,
        &&label_80CA91F0,
        &&label_80CA91F4,
        &&label_80CA91F8,
        &&label_80CA91FC,
        &&label_80CA9200,
        &&label_80CA9204,
        &&label_80CA9208,
        &&label_80CA920C,
        &&label_80CA9210,
        &&label_80CA9214,
        &&label_80CA9218,
        &&label_80CA921C,
        &&label_80CA9220,
        &&label_80CA9224,
        &&label_80CA9228,
        &&label_80CA922C,
        &&label_80CA9230,
        &&label_80CA9234,
        &&label_80CA9238,
        &&label_80CA923C,
        &&label_80CA9240,
        &&label_80CA9244,
        &&label_80CA9248,
        &&label_80CA924C,
        &&label_80CA9250,
        &&label_80CA9254,
        &&label_80CA9258,
        &&label_80CA925C,
        &&label_80CA9260,
        &&label_80CA9264,
        &&label_80CA9268,
        &&label_80CA926C,
        &&label_80CA9270,
        &&label_80CA9274,
        &&label_80CA9278,
        &&label_80CA927C,
        &&label_80CA9280,
        &&label_80CA9284,
        &&label_80CA9288,
        &&label_80CA928C,
        &&label_80CA9290,
        &&label_80CA9294,
        &&label_80CA9298,
        &&label_80CA929C,
        &&label_80CA92A0,
        &&label_80CA92A4,
        &&label_80CA92A8,
        &&label_80CA92AC,
        &&label_80CA92B0,
        &&label_80CA92B4,
        &&label_80CA92B8,
        &&label_80CA92BC,
        &&label_80CA92C0,
        &&label_80CA92C4,
        &&label_80CA92C8,
        &&label_80CA92CC,
        &&label_80CA92D0,
        &&label_80CA92D4,
        &&label_80CA92D8,
        &&label_80CA92DC,
        &&label_80CA92E0,
        &&label_80CA92E4,
        &&label_80CA92E8,
        &&label_80CA92EC,
        &&label_80CA92F0,
        &&label_80CA92F4,
        &&label_80CA92F8,
        &&label_80CA92FC,
        &&label_80CA9300,
        &&label_80CA9304,
        &&label_80CA9308,
        &&label_80CA930C,
        &&label_80CA9310,
        &&label_80CA9314,
        &&label_80CA9318,
        &&label_80CA931C,
        &&label_80CA9320,
        &&label_80CA9324,
        &&label_80CA9328,
        &&label_80CA932C,
        &&label_80CA9330,
        &&label_80CA9334,
        &&label_80CA9338,
        &&label_80CA933C,
        &&label_80CA9340,
        &&label_80CA9344,
        &&label_80CA9348,
        &&label_80CA934C,
        &&label_80CA9350,
        &&label_80CA9354,
        &&label_80CA9358,
        &&label_80CA935C,
        &&label_80CA9360,
        &&label_80CA9364,
        &&label_80CA9368,
        &&label_80CA936C,
        &&label_80CA9370,
        &&label_80CA9374,
        &&label_80CA9378,
        &&label_80CA937C,
        &&label_80CA9380,
        &&label_80CA9384,
        &&label_80CA9388,
        &&label_80CA938C,
        &&label_80CA9390,
        &&label_80CA9394,
        &&label_80CA9398,
        &&label_80CA939C,
        &&label_80CA93A0,
        &&label_80CA93A4,
        &&label_80CA93A8,
        &&label_80CA93AC,
        &&label_80CA93B0,
        &&label_80CA93B4,
        &&label_80CA93B8,
        &&label_80CA93BC,
        &&label_80CA93C0,
        &&label_80CA93C4,
        &&label_80CA93C8,
        &&label_80CA93CC,
        &&label_80CA93D0,
        &&label_80CA93D4,
        &&label_80CA93D8,
        &&label_80CA93DC,
        &&label_80CA93E0,
        &&label_80CA93E4,
        &&label_80CA93E8,
        &&label_80CA93EC,
        &&label_80CA93F0,
        &&label_80CA93F4,
        &&label_80CA93F8,
        &&label_80CA93FC,
        &&label_80CA9400,
        &&label_80CA9404,
        &&label_80CA9408,
        &&label_80CA940C,
        &&label_80CA9410,
        &&label_80CA9414,
        &&label_80CA9418,
        &&label_80CA941C,
        &&label_80CA9420,
        &&label_80CA9424,
        &&label_80CA9428,
        &&label_80CA942C,
        &&label_80CA9430,
        &&label_80CA9434,
        &&label_80CA9438,
        &&label_80CA943C,
        &&label_80CA9440,
        &&label_80CA9444,
        &&label_80CA9448,
        &&label_80CA944C,
        &&label_80CA9450,
        &&label_80CA9454,
        &&label_80CA9458,
        &&label_80CA945C,
        &&label_80CA9460,
        &&label_80CA9464,
        &&label_80CA9468,
        &&label_80CA946C,
        &&label_80CA9470,
        &&label_80CA9474,
        &&label_80CA9478,
        &&label_80CA947C,
        &&label_80CA9480,
        &&label_80CA9484,
        &&label_80CA9488,
        &&label_80CA948C,
        &&label_80CA9490,
        &&label_80CA9494,
        &&label_80CA9498,
        &&label_80CA949C,
        &&label_80CA94A0,
        &&label_80CA94A4,
        &&label_80CA94A8,
        &&label_80CA94AC,
        &&label_80CA94B0,
        &&label_80CA94B4,
        &&label_80CA94B8,
        &&label_80CA94BC,
        &&label_80CA94C0,
        &&label_80CA94C4,
        &&label_80CA94C8,
        &&label_80CA94CC,
        &&label_80CA94D0,
        &&label_80CA94D4,
        &&label_80CA94D8,
        &&label_80CA94DC,
        &&label_80CA94E0,
        &&label_80CA94E4,
        &&label_80CA94E8,
        &&label_80CA94EC,
        &&label_80CA94F0,
        &&label_80CA94F4,
        &&label_80CA94F8,
        &&label_80CA94FC,
        &&label_80CA9500,
        &&label_80CA9504,
        &&label_80CA9508,
        &&label_80CA950C,
        &&label_80CA9510,
        &&label_80CA9514,
        &&label_80CA9518,
        &&label_80CA951C,
        &&label_80CA9520,
        &&label_80CA9524,
        &&label_80CA9528,
        &&label_80CA952C,
        &&label_80CA9530,
        &&label_80CA9534,
        &&label_80CA9538,
        &&label_80CA953C,
        &&label_80CA9540,
        &&label_80CA9544,
        &&label_80CA9548,
        &&label_80CA954C,
        &&label_80CA9550,
        &&label_80CA9554,
        &&label_80CA9558,
        &&label_80CA955C,
        &&label_80CA9560,
        &&label_80CA9564,
        &&label_80CA9568,
        &&label_80CA956C,
        &&label_80CA9570,
        &&label_80CA9574,
        &&label_80CA9578,
        &&label_80CA957C,
        &&label_80CA9580,
        &&label_80CA9584,
        &&label_80CA9588,
        &&label_80CA958C,
        &&label_80CA9590,
        &&label_80CA9594,
        &&label_80CA9598,
        &&label_80CA959C,
        &&label_80CA95A0,
        &&label_80CA95A4,
        &&label_80CA95A8,
        &&label_80CA95AC,
        &&label_80CA95B0,
        &&label_80CA95B4,
        &&label_80CA95B8,
        &&label_80CA95BC,
        &&label_80CA95C0,
        &&label_80CA95C4,
        &&label_80CA95C8,
        &&label_80CA95CC,
        &&label_80CA95D0,
        &&label_80CA95D4,
        &&label_80CA95D8,
        &&label_80CA95DC,
        &&label_80CA95E0,
        &&label_80CA95E4,
        &&label_80CA95E8,
        &&label_80CA95EC,
        &&label_80CA95F0,
        &&label_80CA95F4,
        &&label_80CA95F8,
        &&label_80CA95FC,
        &&label_80CA9600,
        &&label_80CA9604,
        &&label_80CA9608,
        &&label_80CA960C,
        &&label_80CA9610,
        &&label_80CA9614,
        &&label_80CA9618,
        &&label_80CA961C,
        &&label_80CA9620,
        &&label_80CA9624,
        &&label_80CA9628,
        &&label_80CA962C,
        &&label_80CA9630,
        &&label_80CA9634,
        &&label_80CA9638,
        &&label_80CA963C,
        &&label_80CA9640,
        &&label_80CA9644,
        &&label_80CA9648,
        &&label_80CA964C,
        &&label_80CA9650,
        &&label_80CA9654,
        &&label_80CA9658,
        &&label_80CA965C,
        &&label_80CA9660,
        &&label_80CA9664,
        &&label_80CA9668,
        &&label_80CA966C,
        &&label_80CA9670,
        &&label_80CA9674,
        &&label_80CA9678,
        &&label_80CA967C,
        &&label_80CA9680,
        &&label_80CA9684,
        &&label_80CA9688,
        &&label_80CA968C,
        &&label_80CA9690,
        &&label_80CA9694,
        &&label_80CA9698,
        &&label_80CA969C,
        &&label_80CA96A0,
        &&label_80CA96A4,
        &&label_80CA96A8,
        &&label_80CA96AC,
        &&label_80CA96B0,
        &&label_80CA96B4,
        &&label_80CA96B8,
        &&label_80CA96BC,
        &&label_80CA96C0,
        &&label_80CA96C4,
        &&label_80CA96C8,
        &&label_80CA96CC,
        &&label_80CA96D0,
        &&label_80CA96D4,
        &&label_80CA96D8,
        &&label_80CA96DC,
        &&label_80CA96E0,
        &&label_80CA96E4,
        &&label_80CA96E8,
        &&label_80CA96EC,
        &&label_80CA96F0,
        &&label_80CA96F4,
        &&label_80CA96F8,
        &&label_80CA96FC,
        &&label_80CA9700,
        &&label_80CA9704,
        &&label_80CA9708,
        &&label_80CA970C,
        &&label_80CA9710,
        &&label_80CA9714,
        &&label_80CA9718,
        &&label_80CA971C,
        &&label_80CA9720,
        &&label_80CA9724,
        &&label_80CA9728,
        &&label_80CA972C,
        &&label_80CA9730,
        &&label_80CA9734,
        &&label_80CA9738,
        &&label_80CA973C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CA82E0u && pc <= 0x80CA973Cu && ((pc - 0x80CA82E0u) & 3u) == 0u)
            goto *pc_table_80CA82E0[(pc - 0x80CA82E0u) >> 2];
    }
    return;
label_80CA82E0:
    ctx->pc = 0x80CA82E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA82E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA82E0: stwu     r1, -16(r1)
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
label_80CA82E4:
    ctx->pc = 0x80CA82E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA82E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA82E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA82E8:
    ctx->pc = 0x80CA82E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA82E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA82E8: stw     r0, 20(r1)
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
label_80CA82EC:
    ctx->pc = 0x80CA82ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA82ECu)) return;
    // 80CA82EC: cmpwi   r3, 2
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

label_80CA82F0:
    ctx->pc = 0x80CA82F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA82F0u)) return;
    // 80CA82F0: bc    12, 2, 0x80CA8974
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8974;
        }
    }

label_80CA82F4:
    ctx->pc = 0x80CA82F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA82F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA82F4: bc    4, 0, 0x80CA8308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8308;
        }
    }

label_80CA82F8:
    ctx->pc = 0x80CA82F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA82F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA82F8: cmpwi   r3, 0
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

label_80CA82FC:
    ctx->pc = 0x80CA82FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA82FCu)) return;
    // 80CA82FC: bc    12, 2, 0x80CA8A00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8A00;
        }
    }

label_80CA8300:
    ctx->pc = 0x80CA8300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8300: bc    4, 0, 0x80CA8310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8310;
        }
    }

label_80CA8304:
    ctx->pc = 0x80CA8304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8304: b       0x80CA8A00
    {
            goto label_80CA8A00;
    }

label_80CA8308:
    ctx->pc = 0x80CA8308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8308: cmpwi   r3, 4
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

label_80CA830C:
    ctx->pc = 0x80CA830Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA830Cu)) return;
    // 80CA830C: b       0x80CA8A00
    {
            goto label_80CA8A00;
    }

label_80CA8310:
    ctx->pc = 0x80CA8310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8310: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CA8314:
    ctx->pc = 0x80CA8314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8314u)) return;
    // 80CA8314: bl      0x80CA8CE0
    {
            ctx->lr = 0x80CA8318u;
            goto label_80CA8CE0;
    }

label_80CA8318:
    ctx->pc = 0x80CA8318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8318: bl      0x8045DE7C
    {
            ctx->lr = 0x80CA831Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80CA831C:
    ctx->pc = 0x80CA831Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA831Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA831C: bl      0x80460A60
    {
            ctx->lr = 0x80CA8320u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80CA8320:
    ctx->pc = 0x80CA8320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8320: bl      0x80460A24
    {
            ctx->lr = 0x80CA8324u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80CA8324:
    ctx->pc = 0x80CA8324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8324: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8328:
    ctx->pc = 0x80CA8328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8328u)) return;
    // 80CA8328: bl      0x8045EC10
    {
            ctx->lr = 0x80CA832Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CA832C:
    ctx->pc = 0x80CA832Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA832Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA832C: li      r3, 91
    ctx->gpr[3] = (u32)(s32)(91);

label_80CA8330:
    ctx->pc = 0x80CA8330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8330u)) return;
    // 80CA8330: bl      0x80406090
    {
            ctx->lr = 0x80CA8334u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80CA8334:
    ctx->pc = 0x80CA8334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8334: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8338:
    ctx->pc = 0x80CA8338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8338u)) return;
    // 80CA8338: bl      0x8045F220
    {
            ctx->lr = 0x80CA833Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA833C:
    ctx->pc = 0x80CA833Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA833Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA833C: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8340:
    ctx->pc = 0x80CA8340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8340u)) return;
    // 80CA8340: addi    r4, r4, -12112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12112);

label_80CA8344:
    ctx->pc = 0x80CA8344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8344: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA8344u)) return;
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
label_80CA8348:
    ctx->pc = 0x80CA8348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8348u)) return;
    // 80CA8348: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA834C:
    ctx->pc = 0x80CA834Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA834Cu)) return;
    // 80CA834C: addi    r4, r4, -12108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12108);

label_80CA8350:
    ctx->pc = 0x80CA8350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8350: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA8350u)) return;
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
label_80CA8354:
    ctx->pc = 0x80CA8354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8354u)) return;
    // 80CA8354: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8358:
    ctx->pc = 0x80CA8358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8358u)) return;
    // 80CA8358: addi    r4, r4, -12104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12104);

label_80CA835C:
    ctx->pc = 0x80CA835Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA835Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA835C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA835Cu)) return;
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
label_80CA8360:
    ctx->pc = 0x80CA8360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8360u)) return;
    // 80CA8360: bl      0x8045EF2C
    {
            ctx->lr = 0x80CA8364u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CA8364:
    ctx->pc = 0x80CA8364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8364: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8368:
    ctx->pc = 0x80CA8368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8368u)) return;
    // 80CA8368: bl      0x8045F220
    {
            ctx->lr = 0x80CA836Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA836C:
    ctx->pc = 0x80CA836Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA836Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA836C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA8370:
    ctx->pc = 0x80CA8370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8370u)) return;
    // 80CA8370: li      r5, 14383
    ctx->gpr[5] = (u32)(s32)(14383);

label_80CA8374:
    ctx->pc = 0x80CA8374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8374u)) return;
    // 80CA8374: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA8378:
    ctx->pc = 0x80CA8378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8378u)) return;
    // 80CA8378: bl      0x8045EEA8
    {
            ctx->lr = 0x80CA837Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CA837C:
    ctx->pc = 0x80CA837Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA837Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA837C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8380:
    ctx->pc = 0x80CA8380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8380u)) return;
    // 80CA8380: bl      0x8045F220
    {
            ctx->lr = 0x80CA8384u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA8384:
    ctx->pc = 0x80CA8384u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8384u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8384: bl      0x8045EB8C
    {
            ctx->lr = 0x80CA8388u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CA8388:
    ctx->pc = 0x80CA8388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8388: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA838C:
    ctx->pc = 0x80CA838Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA838Cu)) return;
    // 80CA838C: bl      0x8045F220
    {
            ctx->lr = 0x80CA8390u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA8390:
    ctx->pc = 0x80CA8390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA8390: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80CA8394:
    ctx->pc = 0x80CA8394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8394u)) return;
    // 80CA8394: addi    r4, r4, 29640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29640);

label_80CA8398:
    ctx->pc = 0x80CA8398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8398u)) return;
    // 80CA8398: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA839C:
    ctx->pc = 0x80CA839Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA839Cu)) return;
    // 80CA839C: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA83A0:
    ctx->pc = 0x80CA83A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83A0u)) return;
    // 80CA83A0: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA83A4:
    ctx->pc = 0x80CA83A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83A4u)) return;
    // 80CA83A4: addi    r6, r6, -12100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12100);

label_80CA83A8:
    ctx->pc = 0x80CA83A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA83A8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA83A8u)) return;
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
label_80CA83AC:
    ctx->pc = 0x80CA83ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83ACu)) return;
    // 80CA83AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA83B0:
    ctx->pc = 0x80CA83B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83B0u)) return;
    // 80CA83B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA83B4:
    ctx->pc = 0x80CA83B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83B4u)) return;
    // 80CA83B4: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA83B8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA83B8:
    ctx->pc = 0x80CA83B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA83B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA83B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA83BC:
    ctx->pc = 0x80CA83BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83BCu)) return;
    // 80CA83BC: bl      0x8045F220
    {
            ctx->lr = 0x80CA83C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA83C0:
    ctx->pc = 0x80CA83C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA83C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA83C0: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80CA83C4:
    ctx->pc = 0x80CA83C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83C4u)) return;
    // 80CA83C4: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80CA83C8:
    ctx->pc = 0x80CA83C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83C8u)) return;
    // 80CA83C8: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA83CC:
    ctx->pc = 0x80CA83CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83CCu)) return;
    // 80CA83CC: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA83D0:
    ctx->pc = 0x80CA83D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83D0u)) return;
    // 80CA83D0: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA83D4:
    ctx->pc = 0x80CA83D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83D4u)) return;
    // 80CA83D4: addi    r6, r6, -12100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12100);

label_80CA83D8:
    ctx->pc = 0x80CA83D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA83D8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA83D8u)) return;
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
label_80CA83DC:
    ctx->pc = 0x80CA83DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83DCu)) return;
    // 80CA83DC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CA83E0:
    ctx->pc = 0x80CA83E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83E0u)) return;
    // 80CA83E0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CA83E4:
    ctx->pc = 0x80CA83E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83E4u)) return;
    // 80CA83E4: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA83E8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA83E8:
    ctx->pc = 0x80CA83E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA83E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CA83E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA83EC:
    ctx->pc = 0x80CA83ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83ECu)) return;
    // 80CA83EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA83F0:
    ctx->pc = 0x80CA83F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83F0u)) return;
    // 80CA83F0: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA83F4:
    ctx->pc = 0x80CA83F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83F4u)) return;
    // 80CA83F4: addi    r5, r5, -12096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12096);

label_80CA83F8:
    ctx->pc = 0x80CA83F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA83F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA83F8u)) return;
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
label_80CA83FC:
    ctx->pc = 0x80CA83FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA83FCu)) return;
    // 80CA83FC: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA8400:
    ctx->pc = 0x80CA8400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8400u)) return;
    // 80CA8400: addi    r5, r5, -12092
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12092);

label_80CA8404:
    ctx->pc = 0x80CA8404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8404: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8404u)) return;
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
label_80CA8408:
    ctx->pc = 0x80CA8408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8408u)) return;
    // 80CA8408: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA840C:
    ctx->pc = 0x80CA840Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA840Cu)) return;
    // 80CA840C: addi    r5, r5, -12088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12088);

label_80CA8410:
    ctx->pc = 0x80CA8410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8410: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8410u)) return;
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
label_80CA8414:
    ctx->pc = 0x80CA8414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8414u)) return;
    // 80CA8414: bl      0x8045C750
    {
            ctx->lr = 0x80CA8418u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CA8418:
    ctx->pc = 0x80CA8418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA8418: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA841C:
    ctx->pc = 0x80CA841Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA841Cu)) return;
    // 80CA841C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA8420:
    ctx->pc = 0x80CA8420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8420u)) return;
    // 80CA8420: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CA8424:
    ctx->pc = 0x80CA8424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8424u)) return;
    // 80CA8424: addi    r5, r5, -5098
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5098);

label_80CA8428:
    ctx->pc = 0x80CA8428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8428u)) return;
    // 80CA8428: li      r6, 24204
    ctx->gpr[6] = (u32)(s32)(24204);

label_80CA842C:
    ctx->pc = 0x80CA842Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA842Cu)) return;
    // 80CA842C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA8430:
    ctx->pc = 0x80CA8430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8430u)) return;
    // 80CA8430: bl      0x8045C7B4
    {
            ctx->lr = 0x80CA8434u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CA8434:
    ctx->pc = 0x80CA8434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8434: li      r3, 1304
    ctx->gpr[3] = (u32)(s32)(1304);

label_80CA8438:
    ctx->pc = 0x80CA8438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8438u)) return;
    // 80CA8438: bl      0x8045BFA0
    {
            ctx->lr = 0x80CA843Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CA843C:
    ctx->pc = 0x80CA843Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA843Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA843C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8440:
    ctx->pc = 0x80CA8440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8440u)) return;
    // 80CA8440: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CA8444:
    ctx->pc = 0x80CA8444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8444u)) return;
    // 80CA8444: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CA8448:
    ctx->pc = 0x80CA8448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8448: lwz     r0, 0(r4)
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
label_80CA844C:
    ctx->pc = 0x80CA844Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA844Cu)) return;
    // 80CA844C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CA8450:
    ctx->pc = 0x80CA8450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8450u)) return;
    // 80CA8450: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8454:
    ctx->pc = 0x80CA8454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8454u)) return;
    // 80CA8454: addi    r4, r4, -11080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11080);

label_80CA8458:
    ctx->pc = 0x80CA8458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8458: lwzx    r4, r4, r0
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
label_80CA845C:
    ctx->pc = 0x80CA845Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA845Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA845C: lwz     r4, 0(r4)
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
label_80CA8460:
    ctx->pc = 0x80CA8460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8460u)) return;
    // 80CA8460: bl      0x8045F608
    {
            ctx->lr = 0x80CA8464u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CA8464:
    ctx->pc = 0x80CA8464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8464: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CA8468:
    ctx->pc = 0x80CA8468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8468u)) return;
    // 80CA8468: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA846Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA846C:
    ctx->pc = 0x80CA846Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA846Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CA846C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8470:
    ctx->pc = 0x80CA8470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8470u)) return;
    // 80CA8470: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA8474:
    ctx->pc = 0x80CA8474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8474u)) return;
    // 80CA8474: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA8478:
    ctx->pc = 0x80CA8478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8478u)) return;
    // 80CA8478: addi    r5, r5, -12084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12084);

label_80CA847C:
    ctx->pc = 0x80CA847Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA847Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA847C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA847Cu)) return;
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
label_80CA8480:
    ctx->pc = 0x80CA8480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8480u)) return;
    // 80CA8480: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA8484:
    ctx->pc = 0x80CA8484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8484u)) return;
    // 80CA8484: addi    r5, r5, -12080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12080);

label_80CA8488:
    ctx->pc = 0x80CA8488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8488: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8488u)) return;
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
label_80CA848C:
    ctx->pc = 0x80CA848Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA848Cu)) return;
    // 80CA848C: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA8490:
    ctx->pc = 0x80CA8490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8490u)) return;
    // 80CA8490: addi    r5, r5, -12076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12076);

label_80CA8494:
    ctx->pc = 0x80CA8494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8494: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8494u)) return;
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
label_80CA8498:
    ctx->pc = 0x80CA8498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8498u)) return;
    // 80CA8498: bl      0x8045C750
    {
            ctx->lr = 0x80CA849Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CA849C:
    ctx->pc = 0x80CA849Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA849Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA849C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA84A0:
    ctx->pc = 0x80CA84A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84A0u)) return;
    // 80CA84A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA84A4:
    ctx->pc = 0x80CA84A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84A4u)) return;
    // 80CA84A4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CA84A8:
    ctx->pc = 0x80CA84A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84A8u)) return;
    // 80CA84A8: addi    r5, r5, -746
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-746);

label_80CA84AC:
    ctx->pc = 0x80CA84ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84ACu)) return;
    // 80CA84AC: li      r6, 14732
    ctx->gpr[6] = (u32)(s32)(14732);

label_80CA84B0:
    ctx->pc = 0x80CA84B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84B0u)) return;
    // 80CA84B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA84B4:
    ctx->pc = 0x80CA84B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84B4u)) return;
    // 80CA84B4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CA84B8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CA84B8:
    ctx->pc = 0x80CA84B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA84B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CA84B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA84BC:
    ctx->pc = 0x80CA84BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84BCu)) return;
    // 80CA84BC: li      r4, 280
    ctx->gpr[4] = (u32)(s32)(280);

label_80CA84C0:
    ctx->pc = 0x80CA84C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84C0u)) return;
    // 80CA84C0: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA84C4:
    ctx->pc = 0x80CA84C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84C4u)) return;
    // 80CA84C4: addi    r5, r5, -12072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12072);

label_80CA84C8:
    ctx->pc = 0x80CA84C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA84C8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA84C8u)) return;
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
label_80CA84CC:
    ctx->pc = 0x80CA84CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84CCu)) return;
    // 80CA84CC: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA84D0:
    ctx->pc = 0x80CA84D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84D0u)) return;
    // 80CA84D0: addi    r5, r5, -12080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12080);

label_80CA84D4:
    ctx->pc = 0x80CA84D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA84D4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA84D4u)) return;
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
label_80CA84D8:
    ctx->pc = 0x80CA84D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84D8u)) return;
    // 80CA84D8: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA84DC:
    ctx->pc = 0x80CA84DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84DCu)) return;
    // 80CA84DC: addi    r5, r5, -12068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12068);

label_80CA84E0:
    ctx->pc = 0x80CA84E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA84E0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA84E0u)) return;
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
label_80CA84E4:
    ctx->pc = 0x80CA84E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84E4u)) return;
    // 80CA84E4: bl      0x8045C750
    {
            ctx->lr = 0x80CA84E8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CA84E8:
    ctx->pc = 0x80CA84E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA84E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA84E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA84EC:
    ctx->pc = 0x80CA84ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84ECu)) return;
    // 80CA84EC: li      r4, 280
    ctx->gpr[4] = (u32)(s32)(280);

label_80CA84F0:
    ctx->pc = 0x80CA84F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84F0u)) return;
    // 80CA84F0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CA84F4:
    ctx->pc = 0x80CA84F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84F4u)) return;
    // 80CA84F4: addi    r5, r5, -746
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-746);

label_80CA84F8:
    ctx->pc = 0x80CA84F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84F8u)) return;
    // 80CA84F8: li      r6, 14732
    ctx->gpr[6] = (u32)(s32)(14732);

label_80CA84FC:
    ctx->pc = 0x80CA84FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA84FCu)) return;
    // 80CA84FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA8500:
    ctx->pc = 0x80CA8500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8500u)) return;
    // 80CA8500: bl      0x8045C7B4
    {
            ctx->lr = 0x80CA8504u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CA8504:
    ctx->pc = 0x80CA8504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8504: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80CA8508:
    ctx->pc = 0x80CA8508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8508u)) return;
    // 80CA8508: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA850Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA850C:
    ctx->pc = 0x80CA850Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA850Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA850C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8510:
    ctx->pc = 0x80CA8510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8510u)) return;
    // 80CA8510: bl      0x8045F220
    {
            ctx->lr = 0x80CA8514u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA8514:
    ctx->pc = 0x80CA8514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA8514: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80CA8518:
    ctx->pc = 0x80CA8518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8518u)) return;
    // 80CA8518: addi    r4, r4, 892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(892);

label_80CA851C:
    ctx->pc = 0x80CA851Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA851Cu)) return;
    // 80CA851C: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA8520:
    ctx->pc = 0x80CA8520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8520u)) return;
    // 80CA8520: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA8524:
    ctx->pc = 0x80CA8524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8524u)) return;
    // 80CA8524: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8528:
    ctx->pc = 0x80CA8528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8528u)) return;
    // 80CA8528: addi    r6, r6, -12100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12100);

label_80CA852C:
    ctx->pc = 0x80CA852Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA852Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA852C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA852Cu)) return;
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
label_80CA8530:
    ctx->pc = 0x80CA8530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8530u)) return;
    // 80CA8530: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA8534:
    ctx->pc = 0x80CA8534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8534u)) return;
    // 80CA8534: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CA8538:
    ctx->pc = 0x80CA8538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8538u)) return;
    // 80CA8538: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA853Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA853C:
    ctx->pc = 0x80CA853Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA853Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA853C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CA8540:
    ctx->pc = 0x80CA8540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8540u)) return;
    // 80CA8540: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA8544u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA8544:
    ctx->pc = 0x80CA8544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8544: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8548:
    ctx->pc = 0x80CA8548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8548u)) return;
    // 80CA8548: bl      0x8045F220
    {
            ctx->lr = 0x80CA854Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA854C:
    ctx->pc = 0x80CA854Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA854Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA854C: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80CA8550:
    ctx->pc = 0x80CA8550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8550u)) return;
    // 80CA8550: addi    r4, r4, 5568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5568);

label_80CA8554:
    ctx->pc = 0x80CA8554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8554u)) return;
    // 80CA8554: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA8558:
    ctx->pc = 0x80CA8558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8558u)) return;
    // 80CA8558: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA855C:
    ctx->pc = 0x80CA855Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA855Cu)) return;
    // 80CA855C: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8560:
    ctx->pc = 0x80CA8560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8560u)) return;
    // 80CA8560: addi    r6, r6, -12100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12100);

label_80CA8564:
    ctx->pc = 0x80CA8564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8564: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA8564u)) return;
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
label_80CA8568:
    ctx->pc = 0x80CA8568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8568u)) return;
    // 80CA8568: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CA856C:
    ctx->pc = 0x80CA856Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA856Cu)) return;
    // 80CA856C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CA8570:
    ctx->pc = 0x80CA8570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8570u)) return;
    // 80CA8570: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA8574u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA8574:
    ctx->pc = 0x80CA8574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8574: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80CA8578:
    ctx->pc = 0x80CA8578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8578u)) return;
    // 80CA8578: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA857Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA857C:
    ctx->pc = 0x80CA857Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA857Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA857C: li      r3, 1305
    ctx->gpr[3] = (u32)(s32)(1305);

label_80CA8580:
    ctx->pc = 0x80CA8580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8580u)) return;
    // 80CA8580: bl      0x8045BFA0
    {
            ctx->lr = 0x80CA8584u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CA8584:
    ctx->pc = 0x80CA8584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA8584: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8588:
    ctx->pc = 0x80CA8588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8588u)) return;
    // 80CA8588: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CA858C:
    ctx->pc = 0x80CA858Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA858Cu)) return;
    // 80CA858C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CA8590:
    ctx->pc = 0x80CA8590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8590: lwz     r0, 0(r4)
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
label_80CA8594:
    ctx->pc = 0x80CA8594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8594u)) return;
    // 80CA8594: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CA8598:
    ctx->pc = 0x80CA8598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8598u)) return;
    // 80CA8598: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA859C:
    ctx->pc = 0x80CA859Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA859Cu)) return;
    // 80CA859C: addi    r4, r4, -11080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11080);

label_80CA85A0:
    ctx->pc = 0x80CA85A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA85A0: lwzx    r4, r4, r0
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
label_80CA85A4:
    ctx->pc = 0x80CA85A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA85A4: lwz     r4, 4(r4)
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
label_80CA85A8:
    ctx->pc = 0x80CA85A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85A8u)) return;
    // 80CA85A8: bl      0x8045F608
    {
            ctx->lr = 0x80CA85ACu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CA85AC:
    ctx->pc = 0x80CA85ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA85ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CA85AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA85B0:
    ctx->pc = 0x80CA85B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85B0u)) return;
    // 80CA85B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA85B4:
    ctx->pc = 0x80CA85B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85B4u)) return;
    // 80CA85B4: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA85B8:
    ctx->pc = 0x80CA85B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85B8u)) return;
    // 80CA85B8: addi    r5, r5, -12064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12064);

label_80CA85BC:
    ctx->pc = 0x80CA85BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA85BC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA85BCu)) return;
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
label_80CA85C0:
    ctx->pc = 0x80CA85C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85C0u)) return;
    // 80CA85C0: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA85C4:
    ctx->pc = 0x80CA85C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85C4u)) return;
    // 80CA85C4: addi    r5, r5, -12060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12060);

label_80CA85C8:
    ctx->pc = 0x80CA85C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA85C8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA85C8u)) return;
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
label_80CA85CC:
    ctx->pc = 0x80CA85CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85CCu)) return;
    // 80CA85CC: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA85D0:
    ctx->pc = 0x80CA85D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85D0u)) return;
    // 80CA85D0: addi    r5, r5, -12056
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12056);

label_80CA85D4:
    ctx->pc = 0x80CA85D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA85D4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA85D4u)) return;
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
label_80CA85D8:
    ctx->pc = 0x80CA85D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85D8u)) return;
    // 80CA85D8: bl      0x8045C750
    {
            ctx->lr = 0x80CA85DCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CA85DC:
    ctx->pc = 0x80CA85DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA85DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA85DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA85E0:
    ctx->pc = 0x80CA85E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85E0u)) return;
    // 80CA85E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA85E4:
    ctx->pc = 0x80CA85E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85E4u)) return;
    // 80CA85E4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CA85E8:
    ctx->pc = 0x80CA85E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85E8u)) return;
    // 80CA85E8: addi    r5, r5, -746
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-746);

label_80CA85EC:
    ctx->pc = 0x80CA85ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85ECu)) return;
    // 80CA85EC: li      r6, 16780
    ctx->gpr[6] = (u32)(s32)(16780);

label_80CA85F0:
    ctx->pc = 0x80CA85F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85F0u)) return;
    // 80CA85F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA85F4:
    ctx->pc = 0x80CA85F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85F4u)) return;
    // 80CA85F4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CA85F8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CA85F8:
    ctx->pc = 0x80CA85F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA85F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CA85F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA85FC:
    ctx->pc = 0x80CA85FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA85FCu)) return;
    // 80CA85FC: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CA8600:
    ctx->pc = 0x80CA8600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8600u)) return;
    // 80CA8600: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA8604:
    ctx->pc = 0x80CA8604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8604u)) return;
    // 80CA8604: addi    r5, r5, -12052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12052);

label_80CA8608:
    ctx->pc = 0x80CA8608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8608: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8608u)) return;
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
label_80CA860C:
    ctx->pc = 0x80CA860Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA860Cu)) return;
    // 80CA860C: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA8610:
    ctx->pc = 0x80CA8610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8610u)) return;
    // 80CA8610: addi    r5, r5, -12060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12060);

label_80CA8614:
    ctx->pc = 0x80CA8614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8614: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8614u)) return;
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
label_80CA8618:
    ctx->pc = 0x80CA8618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8618u)) return;
    // 80CA8618: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA861C:
    ctx->pc = 0x80CA861Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA861Cu)) return;
    // 80CA861C: addi    r5, r5, -12048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12048);

label_80CA8620:
    ctx->pc = 0x80CA8620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8620: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8620u)) return;
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
label_80CA8624:
    ctx->pc = 0x80CA8624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8624u)) return;
    // 80CA8624: bl      0x8045C750
    {
            ctx->lr = 0x80CA8628u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CA8628:
    ctx->pc = 0x80CA8628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA8628: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA862C:
    ctx->pc = 0x80CA862Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA862Cu)) return;
    // 80CA862C: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CA8630:
    ctx->pc = 0x80CA8630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8630u)) return;
    // 80CA8630: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CA8634:
    ctx->pc = 0x80CA8634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8634u)) return;
    // 80CA8634: addi    r5, r5, -746
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-746);

label_80CA8638:
    ctx->pc = 0x80CA8638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8638u)) return;
    // 80CA8638: li      r6, 16780
    ctx->gpr[6] = (u32)(s32)(16780);

label_80CA863C:
    ctx->pc = 0x80CA863Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA863Cu)) return;
    // 80CA863C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA8640:
    ctx->pc = 0x80CA8640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8640u)) return;
    // 80CA8640: bl      0x8045C7B4
    {
            ctx->lr = 0x80CA8644u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CA8644:
    ctx->pc = 0x80CA8644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8644: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8648:
    ctx->pc = 0x80CA8648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8648u)) return;
    // 80CA8648: bl      0x8045F220
    {
            ctx->lr = 0x80CA864Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA864C:
    ctx->pc = 0x80CA864Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA864Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA864C: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80CA8650:
    ctx->pc = 0x80CA8650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8650u)) return;
    // 80CA8650: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80CA8654:
    ctx->pc = 0x80CA8654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8654u)) return;
    // 80CA8654: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA8658:
    ctx->pc = 0x80CA8658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8658u)) return;
    // 80CA8658: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA865C:
    ctx->pc = 0x80CA865Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA865Cu)) return;
    // 80CA865C: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8660:
    ctx->pc = 0x80CA8660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8660u)) return;
    // 80CA8660: addi    r6, r6, -12100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12100);

label_80CA8664:
    ctx->pc = 0x80CA8664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8664: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA8664u)) return;
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
label_80CA8668:
    ctx->pc = 0x80CA8668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8668u)) return;
    // 80CA8668: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CA866C:
    ctx->pc = 0x80CA866Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA866Cu)) return;
    // 80CA866C: li      r7, 24
    ctx->gpr[7] = (u32)(s32)(24);

label_80CA8670:
    ctx->pc = 0x80CA8670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8670u)) return;
    // 80CA8670: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA8674u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA8674:
    ctx->pc = 0x80CA8674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8674: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80CA8678:
    ctx->pc = 0x80CA8678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8678u)) return;
    // 80CA8678: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA867Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA867C:
    ctx->pc = 0x80CA867Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA867Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA867C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8680:
    ctx->pc = 0x80CA8680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8680u)) return;
    // 80CA8680: bl      0x8045F220
    {
            ctx->lr = 0x80CA8684u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA8684:
    ctx->pc = 0x80CA8684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA8684: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8688:
    ctx->pc = 0x80CA8688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8688u)) return;
    // 80CA8688: addi    r4, r4, 6876
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6876);

label_80CA868C:
    ctx->pc = 0x80CA868Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA868Cu)) return;
    // 80CA868C: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA8690:
    ctx->pc = 0x80CA8690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8690u)) return;
    // 80CA8690: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA8694:
    ctx->pc = 0x80CA8694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8694u)) return;
    // 80CA8694: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8698:
    ctx->pc = 0x80CA8698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8698u)) return;
    // 80CA8698: addi    r6, r6, -12100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12100);

label_80CA869C:
    ctx->pc = 0x80CA869Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA869Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA869C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA869Cu)) return;
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
label_80CA86A0:
    ctx->pc = 0x80CA86A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86A0u)) return;
    // 80CA86A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA86A4:
    ctx->pc = 0x80CA86A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86A4u)) return;
    // 80CA86A4: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80CA86A8:
    ctx->pc = 0x80CA86A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86A8u)) return;
    // 80CA86A8: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA86ACu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA86AC:
    ctx->pc = 0x80CA86ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA86ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA86AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CA86B0:
    ctx->pc = 0x80CA86B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86B0u)) return;
    // 80CA86B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA86B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA86B4:
    ctx->pc = 0x80CA86B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA86B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA86B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA86B8:
    ctx->pc = 0x80CA86B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86B8u)) return;
    // 80CA86B8: bl      0x8045F220
    {
            ctx->lr = 0x80CA86BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA86BC:
    ctx->pc = 0x80CA86BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA86BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA86BC: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80CA86C0:
    ctx->pc = 0x80CA86C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86C0u)) return;
    // 80CA86C0: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80CA86C4:
    ctx->pc = 0x80CA86C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86C4u)) return;
    // 80CA86C4: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA86C8:
    ctx->pc = 0x80CA86C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86C8u)) return;
    // 80CA86C8: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA86CC:
    ctx->pc = 0x80CA86CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86CCu)) return;
    // 80CA86CC: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA86D0:
    ctx->pc = 0x80CA86D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86D0u)) return;
    // 80CA86D0: addi    r6, r6, -12100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12100);

label_80CA86D4:
    ctx->pc = 0x80CA86D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA86D4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA86D4u)) return;
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
label_80CA86D8:
    ctx->pc = 0x80CA86D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86D8u)) return;
    // 80CA86D8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CA86DC:
    ctx->pc = 0x80CA86DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86DCu)) return;
    // 80CA86DC: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CA86E0:
    ctx->pc = 0x80CA86E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86E0u)) return;
    // 80CA86E0: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA86E4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA86E4:
    ctx->pc = 0x80CA86E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA86E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA86E4: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80CA86E8:
    ctx->pc = 0x80CA86E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86E8u)) return;
    // 80CA86E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA86ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA86EC:
    ctx->pc = 0x80CA86ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA86ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA86EC: bl      0x8045F32C
    {
            ctx->lr = 0x80CA86F0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CA86F0:
    ctx->pc = 0x80CA86F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA86F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA86F0: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80CA86F4:
    ctx->pc = 0x80CA86F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86F4u)) return;
    // 80CA86F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA86F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA86F8:
    ctx->pc = 0x80CA86F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA86F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA86F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CA86FC:
    ctx->pc = 0x80CA86FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA86FCu)) return;
    // 80CA86FC: li      r4, 1333
    ctx->gpr[4] = (u32)(s32)(1333);

label_80CA8700:
    ctx->pc = 0x80CA8700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8700u)) return;
    // 80CA8700: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80CA8704:
    ctx->pc = 0x80CA8704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8704u)) return;
    // 80CA8704: bl      0x80CA8DE8
    {
            ctx->lr = 0x80CA8708u;
            goto label_80CA8DE8;
    }

label_80CA8708:
    ctx->pc = 0x80CA8708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA8708: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA870C:
    ctx->pc = 0x80CA870Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA870Cu)) return;
    // 80CA870C: addi    r3, r3, 18364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18364);

label_80CA8710:
    ctx->pc = 0x80CA8710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8710u)) return;
    // 80CA8710: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA8714:
    ctx->pc = 0x80CA8714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8714u)) return;
    // 80CA8714: bl      0x80CA9224
    {
            ctx->lr = 0x80CA8718u;
            goto label_80CA9224;
    }

label_80CA8718:
    ctx->pc = 0x80CA8718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CA8718: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA871C:
    ctx->pc = 0x80CA871Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA871Cu)) return;
    // 80CA871C: addi    r4, r4, 18432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18432);

label_80CA8720:
    ctx->pc = 0x80CA8720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8720: stw     r3, 0(r4)
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
label_80CA8724:
    ctx->pc = 0x80CA8724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8724u)) return;
    // 80CA8724: li      r3, 192
    ctx->gpr[3] = (u32)(s32)(192);

label_80CA8728:
    ctx->pc = 0x80CA8728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8728u)) return;
    // 80CA8728: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA872C:
    ctx->pc = 0x80CA872Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA872Cu)) return;
    // 80CA872C: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_80CA8730:
    ctx->pc = 0x80CA8730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8730u)) return;
    // 80CA8730: li      r6, 85
    ctx->gpr[6] = (u32)(s32)(85);

label_80CA8734:
    ctx->pc = 0x80CA8734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8734u)) return;
    // 80CA8734: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_80CA8738:
    ctx->pc = 0x80CA8738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8738u)) return;
    // 80CA8738: bl      0x80CA9388
    {
            ctx->lr = 0x80CA873Cu;
            goto label_80CA9388;
    }

label_80CA873C:
    ctx->pc = 0x80CA873Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA873Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80CA873C: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA8740:
    ctx->pc = 0x80CA8740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8740u)) return;
    // 80CA8740: addi    r3, r3, 18432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18432);

label_80CA8744:
    ctx->pc = 0x80CA8744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8744: lwz     r3, 0(r3)
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
label_80CA8748:
    ctx->pc = 0x80CA8748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8748u)) return;
    // 80CA8748: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA874C:
    ctx->pc = 0x80CA874Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA874Cu)) return;
    // 80CA874C: addi    r4, r4, -12100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12100);

label_80CA8750:
    ctx->pc = 0x80CA8750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8750: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA8750u)) return;
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
label_80CA8754:
    ctx->pc = 0x80CA8754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8754u)) return;
    // 80CA8754: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80CA8758:
    ctx->pc = 0x80CA8758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8758u)) return;
    // 80CA8758: bl      0x80CA9314
    {
            ctx->lr = 0x80CA875Cu;
            goto label_80CA9314;
    }

label_80CA875C:
    ctx->pc = 0x80CA875Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA875Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA875C: li      r3, 46
    ctx->gpr[3] = (u32)(s32)(46);

label_80CA8760:
    ctx->pc = 0x80CA8760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8760u)) return;
    // 80CA8760: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA8764u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA8764:
    ctx->pc = 0x80CA8764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80CA8764: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA8768:
    ctx->pc = 0x80CA8768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8768u)) return;
    // 80CA8768: addi    r3, r3, 18432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18432);

label_80CA876C:
    ctx->pc = 0x80CA876Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA876Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA876C: lwz     r3, 0(r3)
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
label_80CA8770:
    ctx->pc = 0x80CA8770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8770u)) return;
    // 80CA8770: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8774:
    ctx->pc = 0x80CA8774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8774u)) return;
    // 80CA8774: addi    r4, r4, -12044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12044);

label_80CA8778:
    ctx->pc = 0x80CA8778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8778: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA8778u)) return;
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
label_80CA877C:
    ctx->pc = 0x80CA877Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA877Cu)) return;
    // 80CA877C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80CA8780:
    ctx->pc = 0x80CA8780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8780u)) return;
    // 80CA8780: bl      0x80CA9314
    {
            ctx->lr = 0x80CA8784u;
            goto label_80CA9314;
    }

label_80CA8784:
    ctx->pc = 0x80CA8784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8784: bl      0x80CA9424
    {
            ctx->lr = 0x80CA8788u;
            goto label_80CA9424;
    }

label_80CA8788:
    ctx->pc = 0x80CA8788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8788: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80CA878C:
    ctx->pc = 0x80CA878Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA878Cu)) return;
    // 80CA878C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA8790u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA8790:
    ctx->pc = 0x80CA8790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8790: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80CA8794:
    ctx->pc = 0x80CA8794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8794u)) return;
    // 80CA8794: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA8798u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA8798:
    ctx->pc = 0x80CA8798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CA8798: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA879C:
    ctx->pc = 0x80CA879Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA879Cu)) return;
    // 80CA879C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80CA87A0:
    ctx->pc = 0x80CA87A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87A0u)) return;
    // 80CA87A0: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA87A4:
    ctx->pc = 0x80CA87A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87A4u)) return;
    // 80CA87A4: addi    r5, r5, -12040
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12040);

label_80CA87A8:
    ctx->pc = 0x80CA87A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA87A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA87A8u)) return;
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
label_80CA87AC:
    ctx->pc = 0x80CA87ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87ACu)) return;
    // 80CA87AC: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA87B0:
    ctx->pc = 0x80CA87B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87B0u)) return;
    // 80CA87B0: addi    r5, r5, -12036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12036);

label_80CA87B4:
    ctx->pc = 0x80CA87B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA87B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA87B4u)) return;
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
label_80CA87B8:
    ctx->pc = 0x80CA87B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87B8u)) return;
    // 80CA87B8: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA87BC:
    ctx->pc = 0x80CA87BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87BCu)) return;
    // 80CA87BC: addi    r5, r5, -12032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12032);

label_80CA87C0:
    ctx->pc = 0x80CA87C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA87C0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA87C0u)) return;
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
label_80CA87C4:
    ctx->pc = 0x80CA87C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87C4u)) return;
    // 80CA87C4: bl      0x8045C750
    {
            ctx->lr = 0x80CA87C8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CA87C8:
    ctx->pc = 0x80CA87C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA87C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CA87C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA87CC:
    ctx->pc = 0x80CA87CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87CCu)) return;
    // 80CA87CC: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80CA87D0:
    ctx->pc = 0x80CA87D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87D0u)) return;
    // 80CA87D0: li      r5, 4630
    ctx->gpr[5] = (u32)(s32)(4630);

label_80CA87D4:
    ctx->pc = 0x80CA87D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87D4u)) return;
    // 80CA87D4: li      r6, 16780
    ctx->gpr[6] = (u32)(s32)(16780);

label_80CA87D8:
    ctx->pc = 0x80CA87D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87D8u)) return;
    // 80CA87D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA87DC:
    ctx->pc = 0x80CA87DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87DCu)) return;
    // 80CA87DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CA87E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CA87E0:
    ctx->pc = 0x80CA87E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA87E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA87E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA87E4:
    ctx->pc = 0x80CA87E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87E4u)) return;
    // 80CA87E4: bl      0x8045F220
    {
            ctx->lr = 0x80CA87E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA87E8:
    ctx->pc = 0x80CA87E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA87E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA87E8: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA87EC:
    ctx->pc = 0x80CA87ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87ECu)) return;
    // 80CA87EC: addi    r4, r4, 18336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18336);

label_80CA87F0:
    ctx->pc = 0x80CA87F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87F0u)) return;
    // 80CA87F0: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA87F4:
    ctx->pc = 0x80CA87F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87F4u)) return;
    // 80CA87F4: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA87F8:
    ctx->pc = 0x80CA87F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87F8u)) return;
    // 80CA87F8: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA87FC:
    ctx->pc = 0x80CA87FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA87FCu)) return;
    // 80CA87FC: addi    r6, r6, -12028
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12028);

label_80CA8800:
    ctx->pc = 0x80CA8800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8800: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA8800u)) return;
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
label_80CA8804:
    ctx->pc = 0x80CA8804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8804u)) return;
    // 80CA8804: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA8808:
    ctx->pc = 0x80CA8808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8808u)) return;
    // 80CA8808: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CA880C:
    ctx->pc = 0x80CA880Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA880Cu)) return;
    // 80CA880C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA8810u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA8810:
    ctx->pc = 0x80CA8810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8810: li      r3, 1306
    ctx->gpr[3] = (u32)(s32)(1306);

label_80CA8814:
    ctx->pc = 0x80CA8814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8814u)) return;
    // 80CA8814: bl      0x8045BFA0
    {
            ctx->lr = 0x80CA8818u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CA8818:
    ctx->pc = 0x80CA8818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA8818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA881C:
    ctx->pc = 0x80CA881Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA881Cu)) return;
    // 80CA881C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CA8820:
    ctx->pc = 0x80CA8820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8820u)) return;
    // 80CA8820: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CA8824:
    ctx->pc = 0x80CA8824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8824: lwz     r0, 0(r4)
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
label_80CA8828:
    ctx->pc = 0x80CA8828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8828u)) return;
    // 80CA8828: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CA882C:
    ctx->pc = 0x80CA882Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA882Cu)) return;
    // 80CA882C: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8830:
    ctx->pc = 0x80CA8830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8830u)) return;
    // 80CA8830: addi    r4, r4, -11080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11080);

label_80CA8834:
    ctx->pc = 0x80CA8834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8834: lwzx    r4, r4, r0
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
label_80CA8838:
    ctx->pc = 0x80CA8838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8838: lwz     r4, 8(r4)
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
label_80CA883C:
    ctx->pc = 0x80CA883Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA883Cu)) return;
    // 80CA883C: bl      0x8045F608
    {
            ctx->lr = 0x80CA8840u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CA8840:
    ctx->pc = 0x80CA8840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8840: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CA8844:
    ctx->pc = 0x80CA8844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8844u)) return;
    // 80CA8844: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA8848u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA8848:
    ctx->pc = 0x80CA8848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CA8848: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA884C:
    ctx->pc = 0x80CA884Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA884Cu)) return;
    // 80CA884C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA8850:
    ctx->pc = 0x80CA8850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8850u)) return;
    // 80CA8850: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA8854:
    ctx->pc = 0x80CA8854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8854u)) return;
    // 80CA8854: addi    r5, r5, -12024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12024);

label_80CA8858:
    ctx->pc = 0x80CA8858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8858: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8858u)) return;
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
label_80CA885C:
    ctx->pc = 0x80CA885Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA885Cu)) return;
    // 80CA885C: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA8860:
    ctx->pc = 0x80CA8860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8860u)) return;
    // 80CA8860: addi    r5, r5, -12020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12020);

label_80CA8864:
    ctx->pc = 0x80CA8864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8864: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8864u)) return;
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
label_80CA8868:
    ctx->pc = 0x80CA8868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8868u)) return;
    // 80CA8868: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA886C:
    ctx->pc = 0x80CA886Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA886Cu)) return;
    // 80CA886C: addi    r5, r5, -12016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12016);

label_80CA8870:
    ctx->pc = 0x80CA8870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8870: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA8870u)) return;
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
label_80CA8874:
    ctx->pc = 0x80CA8874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8874u)) return;
    // 80CA8874: bl      0x8045C750
    {
            ctx->lr = 0x80CA8878u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CA8878:
    ctx->pc = 0x80CA8878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA8878: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA887C:
    ctx->pc = 0x80CA887Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA887Cu)) return;
    // 80CA887C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA8880:
    ctx->pc = 0x80CA8880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8880u)) return;
    // 80CA8880: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CA8884:
    ctx->pc = 0x80CA8884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8884u)) return;
    // 80CA8884: addi    r5, r6, -182
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-182);

label_80CA8888:
    ctx->pc = 0x80CA8888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8888u)) return;
    // 80CA8888: addi    r6, r6, -7720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7720);

label_80CA888C:
    ctx->pc = 0x80CA888Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA888Cu)) return;
    // 80CA888C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA8890:
    ctx->pc = 0x80CA8890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8890u)) return;
    // 80CA8890: bl      0x8045C7B4
    {
            ctx->lr = 0x80CA8894u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CA8894:
    ctx->pc = 0x80CA8894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CA8894: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8898:
    ctx->pc = 0x80CA8898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8898u)) return;
    // 80CA8898: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CA889C:
    ctx->pc = 0x80CA889Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA889Cu)) return;
    // 80CA889C: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA88A0:
    ctx->pc = 0x80CA88A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88A0u)) return;
    // 80CA88A0: addi    r5, r5, -12012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12012);

label_80CA88A4:
    ctx->pc = 0x80CA88A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA88A4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA88A4u)) return;
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
label_80CA88A8:
    ctx->pc = 0x80CA88A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88A8u)) return;
    // 80CA88A8: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA88AC:
    ctx->pc = 0x80CA88ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88ACu)) return;
    // 80CA88AC: addi    r5, r5, -12008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12008);

label_80CA88B0:
    ctx->pc = 0x80CA88B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA88B0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA88B0u)) return;
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
label_80CA88B4:
    ctx->pc = 0x80CA88B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88B4u)) return;
    // 80CA88B4: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA88B8:
    ctx->pc = 0x80CA88B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88B8u)) return;
    // 80CA88B8: addi    r5, r5, -12004
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12004);

label_80CA88BC:
    ctx->pc = 0x80CA88BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA88BC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA88BCu)) return;
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
label_80CA88C0:
    ctx->pc = 0x80CA88C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88C0u)) return;
    // 80CA88C0: bl      0x8045C750
    {
            ctx->lr = 0x80CA88C4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CA88C4:
    ctx->pc = 0x80CA88C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA88C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA88C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA88C8:
    ctx->pc = 0x80CA88C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88C8u)) return;
    // 80CA88C8: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CA88CC:
    ctx->pc = 0x80CA88CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88CCu)) return;
    // 80CA88CC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CA88D0:
    ctx->pc = 0x80CA88D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88D0u)) return;
    // 80CA88D0: addi    r5, r6, -182
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-182);

label_80CA88D4:
    ctx->pc = 0x80CA88D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88D4u)) return;
    // 80CA88D4: addi    r6, r6, -7720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7720);

label_80CA88D8:
    ctx->pc = 0x80CA88D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88D8u)) return;
    // 80CA88D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CA88DC:
    ctx->pc = 0x80CA88DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88DCu)) return;
    // 80CA88DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CA88E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CA88E0:
    ctx->pc = 0x80CA88E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA88E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA88E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA88E4:
    ctx->pc = 0x80CA88E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88E4u)) return;
    // 80CA88E4: bl      0x8045F220
    {
            ctx->lr = 0x80CA88E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA88E8:
    ctx->pc = 0x80CA88E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA88E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA88E8: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA88EC:
    ctx->pc = 0x80CA88ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88ECu)) return;
    // 80CA88EC: addi    r4, r4, -12000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12000);

label_80CA88F0:
    ctx->pc = 0x80CA88F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA88F0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA88F0u)) return;
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
label_80CA88F4:
    ctx->pc = 0x80CA88F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88F4u)) return;
    // 80CA88F4: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA88F8:
    ctx->pc = 0x80CA88F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88F8u)) return;
    // 80CA88F8: addi    r4, r4, -11996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11996);

label_80CA88FC:
    ctx->pc = 0x80CA88FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA88FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA88FC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA88FCu)) return;
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
label_80CA8900:
    ctx->pc = 0x80CA8900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8900u)) return;
    // 80CA8900: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8904:
    ctx->pc = 0x80CA8904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8904u)) return;
    // 80CA8904: addi    r4, r4, -11992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11992);

label_80CA8908:
    ctx->pc = 0x80CA8908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8908: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA8908u)) return;
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
label_80CA890C:
    ctx->pc = 0x80CA890Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA890Cu)) return;
    // 80CA890C: bl      0x8045EF2C
    {
            ctx->lr = 0x80CA8910u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CA8910:
    ctx->pc = 0x80CA8910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8910: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8914:
    ctx->pc = 0x80CA8914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8914u)) return;
    // 80CA8914: bl      0x8045F220
    {
            ctx->lr = 0x80CA8918u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA8918:
    ctx->pc = 0x80CA8918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA8918: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA891C:
    ctx->pc = 0x80CA891Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA891Cu)) return;
    // 80CA891C: li      r5, 22653
    ctx->gpr[5] = (u32)(s32)(22653);

label_80CA8920:
    ctx->pc = 0x80CA8920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8920u)) return;
    // 80CA8920: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA8924:
    ctx->pc = 0x80CA8924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8924u)) return;
    // 80CA8924: bl      0x8045EEA8
    {
            ctx->lr = 0x80CA8928u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CA8928:
    ctx->pc = 0x80CA8928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8928: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA892C:
    ctx->pc = 0x80CA892Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA892Cu)) return;
    // 80CA892C: bl      0x8045F220
    {
            ctx->lr = 0x80CA8930u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA8930:
    ctx->pc = 0x80CA8930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8930: bl      0x8045EB8C
    {
            ctx->lr = 0x80CA8934u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CA8934:
    ctx->pc = 0x80CA8934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8934: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8938:
    ctx->pc = 0x80CA8938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8938u)) return;
    // 80CA8938: bl      0x8045F220
    {
            ctx->lr = 0x80CA893Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA893C:
    ctx->pc = 0x80CA893Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA893Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA893C: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80CA8940:
    ctx->pc = 0x80CA8940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8940u)) return;
    // 80CA8940: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80CA8944:
    ctx->pc = 0x80CA8944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8944u)) return;
    // 80CA8944: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80CA8948:
    ctx->pc = 0x80CA8948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8948u)) return;
    // 80CA8948: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80CA894C:
    ctx->pc = 0x80CA894Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA894Cu)) return;
    // 80CA894C: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8950:
    ctx->pc = 0x80CA8950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8950u)) return;
    // 80CA8950: addi    r6, r6, -12100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12100);

label_80CA8954:
    ctx->pc = 0x80CA8954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8954: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA8954u)) return;
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
label_80CA8958:
    ctx->pc = 0x80CA8958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8958u)) return;
    // 80CA8958: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CA895C:
    ctx->pc = 0x80CA895Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA895Cu)) return;
    // 80CA895C: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80CA8960:
    ctx->pc = 0x80CA8960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8960u)) return;
    // 80CA8960: bl      0x8045EBE4
    {
            ctx->lr = 0x80CA8964u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CA8964:
    ctx->pc = 0x80CA8964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8964: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80CA8968:
    ctx->pc = 0x80CA8968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8968u)) return;
    // 80CA8968: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA896Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA896C:
    ctx->pc = 0x80CA896Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA896Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA896C: bl      0x8045F32C
    {
            ctx->lr = 0x80CA8970u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CA8970:
    ctx->pc = 0x80CA8970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8970: b       0x80CA8A00
    {
            goto label_80CA8A00;
    }

label_80CA8974:
    ctx->pc = 0x80CA8974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8978:
    ctx->pc = 0x80CA8978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8978u)) return;
    // 80CA8978: bl      0x8045EC10
    {
            ctx->lr = 0x80CA897Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CA897C:
    ctx->pc = 0x80CA897Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA897Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA897C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8980:
    ctx->pc = 0x80CA8980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8980u)) return;
    // 80CA8980: bl      0x8045F220
    {
            ctx->lr = 0x80CA8984u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA8984:
    ctx->pc = 0x80CA8984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA8984: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8988:
    ctx->pc = 0x80CA8988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8988u)) return;
    // 80CA8988: addi    r4, r4, -12000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12000);

label_80CA898C:
    ctx->pc = 0x80CA898Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA898Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA898C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA898Cu)) return;
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
label_80CA8990:
    ctx->pc = 0x80CA8990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8990u)) return;
    // 80CA8990: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8994:
    ctx->pc = 0x80CA8994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8994u)) return;
    // 80CA8994: addi    r4, r4, -11996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11996);

label_80CA8998:
    ctx->pc = 0x80CA8998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8998: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA8998u)) return;
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
label_80CA899C:
    ctx->pc = 0x80CA899Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA899Cu)) return;
    // 80CA899C: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA89A0:
    ctx->pc = 0x80CA89A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89A0u)) return;
    // 80CA89A0: addi    r4, r4, -11992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11992);

label_80CA89A4:
    ctx->pc = 0x80CA89A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA89A4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA89A4u)) return;
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
label_80CA89A8:
    ctx->pc = 0x80CA89A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89A8u)) return;
    // 80CA89A8: bl      0x8045EF2C
    {
            ctx->lr = 0x80CA89ACu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CA89AC:
    ctx->pc = 0x80CA89ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA89AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA89B0:
    ctx->pc = 0x80CA89B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89B0u)) return;
    // 80CA89B0: bl      0x8045F220
    {
            ctx->lr = 0x80CA89B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CA89B4:
    ctx->pc = 0x80CA89B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA89B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA89B8:
    ctx->pc = 0x80CA89B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89B8u)) return;
    // 80CA89B8: li      r5, 22653
    ctx->gpr[5] = (u32)(s32)(22653);

label_80CA89BC:
    ctx->pc = 0x80CA89BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89BCu)) return;
    // 80CA89BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA89C0:
    ctx->pc = 0x80CA89C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89C0u)) return;
    // 80CA89C0: bl      0x8045EEA8
    {
            ctx->lr = 0x80CA89C4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CA89C4:
    ctx->pc = 0x80CA89C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA89C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CA89C8:
    ctx->pc = 0x80CA89C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89C8u)) return;
    // 80CA89C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CA89CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CA89CC:
    ctx->pc = 0x80CA89CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA89CC: bl      0x8045DE34
    {
            ctx->lr = 0x80CA89D0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80CA89D0:
    ctx->pc = 0x80CA89D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA89D0: bl      0x80460A80
    {
            ctx->lr = 0x80CA89D4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80CA89D4:
    ctx->pc = 0x80CA89D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CA89D4: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA89D8:
    ctx->pc = 0x80CA89D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89D8u)) return;
    // 80CA89D8: addi    r3, r3, 18432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18432);

label_80CA89DC:
    ctx->pc = 0x80CA89DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA89DC: lwz     r3, 0(r3)
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
label_80CA89E0:
    ctx->pc = 0x80CA89E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89E0u)) return;
    // 80CA89E0: cmplwi  r3, 0x0000
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

label_80CA89E4:
    ctx->pc = 0x80CA89E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89E4u)) return;
    // 80CA89E4: bc    12, 2, 0x80CA89FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA89FC;
        }
    }

label_80CA89E8:
    ctx->pc = 0x80CA89E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA89E8: bl      0x8050F9E0
    {
            ctx->lr = 0x80CA89ECu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CA89EC:
    ctx->pc = 0x80CA89ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA89EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CA89F0:
    ctx->pc = 0x80CA89F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89F0u)) return;
    // 80CA89F0: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA89F4:
    ctx->pc = 0x80CA89F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89F4u)) return;
    // 80CA89F4: addi    r3, r3, 18432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18432);

label_80CA89F8:
    ctx->pc = 0x80CA89F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA89F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA89F8: stw     r0, 0(r3)
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
label_80CA89FC:
    ctx->pc = 0x80CA89FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA89FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA89FC: bl      0x80CA8D3C
    {
            ctx->lr = 0x80CA8A00u;
            goto label_80CA8D3C;
    }

label_80CA8A00:
    ctx->pc = 0x80CA8A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8A00: lwz     r0, 20(r1)
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
label_80CA8A04:
    ctx->pc = 0x80CA8A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8A04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8A04: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8A08:
    ctx->pc = 0x80CA8A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A08u)) return;
    // 80CA8A08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8A0C:
    ctx->pc = 0x80CA8A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A0Cu)) return;
    // 80CA8A0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8A10:
    ctx->pc = 0x80CA8A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8A10: stwu     r1, -16(r1)
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
label_80CA8A14:
    ctx->pc = 0x80CA8A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8A14: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8A18:
    ctx->pc = 0x80CA8A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8A18: stw     r0, 20(r1)
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
label_80CA8A1C:
    ctx->pc = 0x80CA8A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8A1C: lwz     r3, 32(r3)
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
label_80CA8A20:
    ctx->pc = 0x80CA8A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8A20: lwz     r3, 16(r3)
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
label_80CA8A24:
    ctx->pc = 0x80CA8A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A24u)) return;
    // 80CA8A24: bl      0x80509CF0
    {
            ctx->lr = 0x80CA8A28u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80CA8A28:
    ctx->pc = 0x80CA8A28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8A28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8A28: lwz     r0, 20(r1)
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
label_80CA8A2C:
    ctx->pc = 0x80CA8A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8A2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8A30:
    ctx->pc = 0x80CA8A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A30u)) return;
    // 80CA8A30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8A34:
    ctx->pc = 0x80CA8A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A34u)) return;
    // 80CA8A34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8A38:
    ctx->pc = 0x80CA8A38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8A38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA8A38: stwu     r1, -32(r1)
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
label_80CA8A3C:
    ctx->pc = 0x80CA8A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA8A3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8A40:
    ctx->pc = 0x80CA8A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8A40: stw     r0, 36(r1)
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
label_80CA8A44:
    ctx->pc = 0x80CA8A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8A44: stw     r31, 28(r1)
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
label_80CA8A48:
    ctx->pc = 0x80CA8A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8A48: stw     r30, 24(r1)
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
label_80CA8A4C:
    ctx->pc = 0x80CA8A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8A4C: stw     r29, 20(r1)
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
label_80CA8A50:
    ctx->pc = 0x80CA8A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8A50: lwz     r31, 32(r3)
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
label_80CA8A54:
    ctx->pc = 0x80CA8A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8A54: lwz     r30, 16(r31)
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
label_80CA8A58:
    ctx->pc = 0x80CA8A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8A58: lwz     r5, 28(r31)
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
label_80CA8A5C:
    ctx->pc = 0x80CA8A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A5Cu)) return;
    // 80CA8A5C: cmpwi   r5, 0
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

label_80CA8A60:
    ctx->pc = 0x80CA8A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A60u)) return;
    // 80CA8A60: bc    4, 1, 0x80CA8A98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8A98;
        }
    }

label_80CA8A64:
    ctx->pc = 0x80CA8A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CA8A64: lwz     r4, 24(r31)
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
label_80CA8A68:
    ctx->pc = 0x80CA8A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A68u)) return;
    // 80CA8A68: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CA8A6C:
    ctx->pc = 0x80CA8A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CA8A6C: lwz     r0, 20(r31)
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
label_80CA8A70:
    ctx->pc = 0x80CA8A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CA8A70u)) return;
    // 80CA8A70: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CA8A74:
    ctx->pc = 0x80CA8A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A74u)) return;
    // 80CA8A74: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CA8A78:
    ctx->pc = 0x80CA8A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CA8A78u)) return;
    // 80CA8A78: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CA8A7C:
    ctx->pc = 0x80CA8A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A7Cu)) return;
    // 80CA8A7C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CA8A80:
    ctx->pc = 0x80CA8A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A80u)) return;
    // 80CA8A80: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CA8A84:
    ctx->pc = 0x80CA8A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A84u)) return;
    // 80CA8A84: bl      0x80509C74
    {
            ctx->lr = 0x80CA8A88u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CA8A88:
    ctx->pc = 0x80CA8A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8A88: stw     r29, 20(r31)
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
label_80CA8A8C:
    ctx->pc = 0x80CA8A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8A8C: lwz     r3, 28(r31)
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
label_80CA8A90:
    ctx->pc = 0x80CA8A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A90u)) return;
    // 80CA8A90: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CA8A94:
    ctx->pc = 0x80CA8A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8A94: stw     r0, 28(r31)
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
label_80CA8A98:
    ctx->pc = 0x80CA8A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8A98: lwz     r5, 40(r31)
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
label_80CA8A9C:
    ctx->pc = 0x80CA8A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8A9Cu)) return;
    // 80CA8A9C: cmpwi   r5, 0
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

label_80CA8AA0:
    ctx->pc = 0x80CA8AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AA0u)) return;
    // 80CA8AA0: bc    4, 1, 0x80CA8AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8AD8;
        }
    }

label_80CA8AA4:
    ctx->pc = 0x80CA8AA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8AA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CA8AA4: lwz     r4, 36(r31)
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
label_80CA8AA8:
    ctx->pc = 0x80CA8AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AA8u)) return;
    // 80CA8AA8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CA8AAC:
    ctx->pc = 0x80CA8AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CA8AAC: lwz     r0, 32(r31)
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
label_80CA8AB0:
    ctx->pc = 0x80CA8AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CA8AB0u)) return;
    // 80CA8AB0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CA8AB4:
    ctx->pc = 0x80CA8AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AB4u)) return;
    // 80CA8AB4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CA8AB8:
    ctx->pc = 0x80CA8AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CA8AB8u)) return;
    // 80CA8AB8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CA8ABC:
    ctx->pc = 0x80CA8ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8ABCu)) return;
    // 80CA8ABC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CA8AC0:
    ctx->pc = 0x80CA8AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AC0u)) return;
    // 80CA8AC0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CA8AC4:
    ctx->pc = 0x80CA8AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AC4u)) return;
    // 80CA8AC4: bl      0x80509BF8
    {
            ctx->lr = 0x80CA8AC8u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CA8AC8:
    ctx->pc = 0x80CA8AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8AC8: stw     r29, 32(r31)
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
label_80CA8ACC:
    ctx->pc = 0x80CA8ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8ACC: lwz     r3, 40(r31)
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
label_80CA8AD0:
    ctx->pc = 0x80CA8AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AD0u)) return;
    // 80CA8AD0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CA8AD4:
    ctx->pc = 0x80CA8AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8AD4: stw     r0, 40(r31)
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
label_80CA8AD8:
    ctx->pc = 0x80CA8AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8AD8: lwz     r5, 52(r31)
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
label_80CA8ADC:
    ctx->pc = 0x80CA8ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8ADCu)) return;
    // 80CA8ADC: cmpwi   r5, 0
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

label_80CA8AE0:
    ctx->pc = 0x80CA8AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AE0u)) return;
    // 80CA8AE0: bc    4, 1, 0x80CA8B18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8B18;
        }
    }

label_80CA8AE4:
    ctx->pc = 0x80CA8AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CA8AE4: lwz     r4, 48(r31)
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
label_80CA8AE8:
    ctx->pc = 0x80CA8AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AE8u)) return;
    // 80CA8AE8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CA8AEC:
    ctx->pc = 0x80CA8AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CA8AEC: lwz     r0, 44(r31)
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
label_80CA8AF0:
    ctx->pc = 0x80CA8AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CA8AF0u)) return;
    // 80CA8AF0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CA8AF4:
    ctx->pc = 0x80CA8AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AF4u)) return;
    // 80CA8AF4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CA8AF8:
    ctx->pc = 0x80CA8AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CA8AF8u)) return;
    // 80CA8AF8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CA8AFC:
    ctx->pc = 0x80CA8AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8AFCu)) return;
    // 80CA8AFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CA8B00:
    ctx->pc = 0x80CA8B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B00u)) return;
    // 80CA8B00: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CA8B04:
    ctx->pc = 0x80CA8B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B04u)) return;
    // 80CA8B04: bl      0x80509B94
    {
            ctx->lr = 0x80CA8B08u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CA8B08:
    ctx->pc = 0x80CA8B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8B08: stw     r29, 44(r31)
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
label_80CA8B0C:
    ctx->pc = 0x80CA8B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8B0C: lwz     r3, 52(r31)
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
label_80CA8B10:
    ctx->pc = 0x80CA8B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B10u)) return;
    // 80CA8B10: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CA8B14:
    ctx->pc = 0x80CA8B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8B14: stw     r0, 52(r31)
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
label_80CA8B18:
    ctx->pc = 0x80CA8B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8B18: lwz     r31, 28(r1)
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
label_80CA8B1C:
    ctx->pc = 0x80CA8B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8B1C: lwz     r30, 24(r1)
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
label_80CA8B20:
    ctx->pc = 0x80CA8B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8B20: lwz     r29, 20(r1)
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
label_80CA8B24:
    ctx->pc = 0x80CA8B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8B24: lwz     r0, 36(r1)
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
label_80CA8B28:
    ctx->pc = 0x80CA8B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8B28: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8B2C:
    ctx->pc = 0x80CA8B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B2Cu)) return;
    // 80CA8B2C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA8B30:
    ctx->pc = 0x80CA8B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B30u)) return;
    // 80CA8B30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8B34:
    ctx->pc = 0x80CA8B34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8B34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA8B34: stwu     r1, -32(r1)
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
label_80CA8B38:
    ctx->pc = 0x80CA8B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA8B38: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8B3C:
    ctx->pc = 0x80CA8B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA8B3C: stw     r0, 36(r1)
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
label_80CA8B40:
    ctx->pc = 0x80CA8B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8B40: stw     r31, 28(r1)
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
label_80CA8B44:
    ctx->pc = 0x80CA8B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8B44: stw     r30, 24(r1)
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
label_80CA8B48:
    ctx->pc = 0x80CA8B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8B48: stw     r29, 20(r1)
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
label_80CA8B4C:
    ctx->pc = 0x80CA8B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B4Cu)) return;
    // 80CA8B4C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CA8B50:
    ctx->pc = 0x80CA8B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B50u)) return;
    // 80CA8B50: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA8B54:
    ctx->pc = 0x80CA8B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B54u)) return;
    // 80CA8B54: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CA8B58:
    ctx->pc = 0x80CA8B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B58u)) return;
    // 80CA8B58: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CA8B5C:
    ctx->pc = 0x80CA8B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B5Cu)) return;
    // 80CA8B5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CA8B60:
    ctx->pc = 0x80CA8B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B60u)) return;
    // 80CA8B60: bl      0x8050FD60
    {
            ctx->lr = 0x80CA8B64u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CA8B64:
    ctx->pc = 0x80CA8B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA8B64: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CA8B68:
    ctx->pc = 0x80CA8B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B68u)) return;
    // 80CA8B68: cmplwi  r31, 0x0000
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

label_80CA8B6C:
    ctx->pc = 0x80CA8B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B6Cu)) return;
    // 80CA8B6C: bc    12, 2, 0x80CA8BD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8BD0;
        }
    }

label_80CA8B70:
    ctx->pc = 0x80CA8B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CA8B70: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CA8B74:
    ctx->pc = 0x80CA8B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B74u)) return;
    // 80CA8B74: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CA8B78:
    ctx->pc = 0x80CA8B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B78u)) return;
    // 80CA8B78: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CA8B7C:
    ctx->pc = 0x80CA8B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B7Cu)) return;
    // 80CA8B7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA8B80:
    ctx->pc = 0x80CA8B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B80u)) return;
    // 80CA8B80: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CA8B84:
    ctx->pc = 0x80CA8B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B84u)) return;
    // 80CA8B84: bl      0x8050A0D4
    {
            ctx->lr = 0x80CA8B88u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80CA8B88:
    ctx->pc = 0x80CA8B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80CA8B88: lis     r3, -32565
    ctx->gpr[3] = ((u32)(s32)(-32565) << 16);

label_80CA8B8C:
    ctx->pc = 0x80CA8B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B8Cu)) return;
    // 80CA8B8C: addi    r0, r3, -30152
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30152);

label_80CA8B90:
    ctx->pc = 0x80CA8B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CA8B90: stw     r0, 16(r31)
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
label_80CA8B94:
    ctx->pc = 0x80CA8B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B94u)) return;
    // 80CA8B94: lis     r3, -32565
    ctx->gpr[3] = ((u32)(s32)(-32565) << 16);

label_80CA8B98:
    ctx->pc = 0x80CA8B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B98u)) return;
    // 80CA8B98: addi    r0, r3, -30192
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30192);

label_80CA8B9C:
    ctx->pc = 0x80CA8B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CA8B9C: stw     r0, 24(r31)
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
label_80CA8BA0:
    ctx->pc = 0x80CA8BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA8BA0: lwz     r3, 32(r31)
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
label_80CA8BA4:
    ctx->pc = 0x80CA8BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA8BA4: stw     r31, 16(r3)
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
label_80CA8BA8:
    ctx->pc = 0x80CA8BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BA8u)) return;
    // 80CA8BA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CA8BAC:
    ctx->pc = 0x80CA8BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8BAC: stw     r0, 20(r3)
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
label_80CA8BB0:
    ctx->pc = 0x80CA8BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8BB0: stw     r0, 24(r3)
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
label_80CA8BB4:
    ctx->pc = 0x80CA8BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8BB4: stw     r0, 28(r3)
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
label_80CA8BB8:
    ctx->pc = 0x80CA8BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8BB8: stw     r0, 32(r3)
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
label_80CA8BBC:
    ctx->pc = 0x80CA8BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8BBC: stw     r0, 36(r3)
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
label_80CA8BC0:
    ctx->pc = 0x80CA8BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8BC0: stw     r0, 40(r3)
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
label_80CA8BC4:
    ctx->pc = 0x80CA8BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8BC4: stw     r0, 44(r3)
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
label_80CA8BC8:
    ctx->pc = 0x80CA8BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8BC8: stw     r0, 48(r3)
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
label_80CA8BCC:
    ctx->pc = 0x80CA8BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8BCC: stw     r0, 52(r3)
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
label_80CA8BD0:
    ctx->pc = 0x80CA8BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CA8BD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CA8BD4:
    ctx->pc = 0x80CA8BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8BD4: lwz     r31, 28(r1)
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
label_80CA8BD8:
    ctx->pc = 0x80CA8BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8BD8: lwz     r30, 24(r1)
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
label_80CA8BDC:
    ctx->pc = 0x80CA8BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8BDC: lwz     r29, 20(r1)
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
label_80CA8BE0:
    ctx->pc = 0x80CA8BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8BE0: lwz     r0, 36(r1)
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
label_80CA8BE4:
    ctx->pc = 0x80CA8BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8BE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8BE8:
    ctx->pc = 0x80CA8BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BE8u)) return;
    // 80CA8BE8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA8BEC:
    ctx->pc = 0x80CA8BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BECu)) return;
    // 80CA8BEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8BF0:
    ctx->pc = 0x80CA8BF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8BF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA8BF0: stwu     r1, -16(r1)
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
label_80CA8BF4:
    ctx->pc = 0x80CA8BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA8BF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8BF8:
    ctx->pc = 0x80CA8BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8BF8: stw     r0, 20(r1)
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
label_80CA8BFC:
    ctx->pc = 0x80CA8BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8BFC: stw     r31, 12(r1)
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
label_80CA8C00:
    ctx->pc = 0x80CA8C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8C00: stw     r30, 8(r1)
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
label_80CA8C04:
    ctx->pc = 0x80CA8C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C04u)) return;
    // 80CA8C04: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA8C08:
    ctx->pc = 0x80CA8C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8C08: lwz     r31, 32(r3)
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
label_80CA8C0C:
    ctx->pc = 0x80CA8C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8C0C: stw     r30, 24(r31)
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
label_80CA8C10:
    ctx->pc = 0x80CA8C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8C10: stw     r5, 28(r31)
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
label_80CA8C14:
    ctx->pc = 0x80CA8C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C14u)) return;
    // 80CA8C14: cmpwi   r5, 0
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

label_80CA8C18:
    ctx->pc = 0x80CA8C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C18u)) return;
    // 80CA8C18: bc    12, 1, 0x80CA8C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8C28;
        }
    }

label_80CA8C1C:
    ctx->pc = 0x80CA8C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8C1C: lwz     r3, 16(r31)
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
label_80CA8C20:
    ctx->pc = 0x80CA8C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C20u)) return;
    // 80CA8C20: bl      0x80509C74
    {
            ctx->lr = 0x80CA8C24u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CA8C24:
    ctx->pc = 0x80CA8C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8C24: stw     r30, 20(r31)
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
label_80CA8C28:
    ctx->pc = 0x80CA8C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8C28: lwz     r31, 12(r1)
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
label_80CA8C2C:
    ctx->pc = 0x80CA8C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8C2C: lwz     r30, 8(r1)
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
label_80CA8C30:
    ctx->pc = 0x80CA8C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8C30: lwz     r0, 20(r1)
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
label_80CA8C34:
    ctx->pc = 0x80CA8C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8C34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8C38:
    ctx->pc = 0x80CA8C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C38u)) return;
    // 80CA8C38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8C3C:
    ctx->pc = 0x80CA8C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C3Cu)) return;
    // 80CA8C3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8C40:
    ctx->pc = 0x80CA8C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA8C40: stwu     r1, -16(r1)
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
label_80CA8C44:
    ctx->pc = 0x80CA8C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA8C44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8C48:
    ctx->pc = 0x80CA8C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8C48: stw     r0, 20(r1)
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
label_80CA8C4C:
    ctx->pc = 0x80CA8C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8C4C: stw     r31, 12(r1)
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
label_80CA8C50:
    ctx->pc = 0x80CA8C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8C50: stw     r30, 8(r1)
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
label_80CA8C54:
    ctx->pc = 0x80CA8C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C54u)) return;
    // 80CA8C54: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA8C58:
    ctx->pc = 0x80CA8C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8C58: lwz     r31, 32(r3)
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
label_80CA8C5C:
    ctx->pc = 0x80CA8C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8C5C: stw     r30, 36(r31)
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
label_80CA8C60:
    ctx->pc = 0x80CA8C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8C60: stw     r5, 40(r31)
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
label_80CA8C64:
    ctx->pc = 0x80CA8C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C64u)) return;
    // 80CA8C64: cmpwi   r5, 0
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

label_80CA8C68:
    ctx->pc = 0x80CA8C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C68u)) return;
    // 80CA8C68: bc    12, 1, 0x80CA8C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8C78;
        }
    }

label_80CA8C6C:
    ctx->pc = 0x80CA8C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8C6C: lwz     r3, 16(r31)
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
label_80CA8C70:
    ctx->pc = 0x80CA8C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C70u)) return;
    // 80CA8C70: bl      0x80509BF8
    {
            ctx->lr = 0x80CA8C74u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CA8C74:
    ctx->pc = 0x80CA8C74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8C74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8C74: stw     r30, 32(r31)
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
label_80CA8C78:
    ctx->pc = 0x80CA8C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8C78: lwz     r31, 12(r1)
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
label_80CA8C7C:
    ctx->pc = 0x80CA8C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8C7C: lwz     r30, 8(r1)
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
label_80CA8C80:
    ctx->pc = 0x80CA8C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8C80: lwz     r0, 20(r1)
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
label_80CA8C84:
    ctx->pc = 0x80CA8C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8C84: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8C88:
    ctx->pc = 0x80CA8C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C88u)) return;
    // 80CA8C88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8C8C:
    ctx->pc = 0x80CA8C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C8Cu)) return;
    // 80CA8C8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8C90:
    ctx->pc = 0x80CA8C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA8C90: stwu     r1, -16(r1)
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
label_80CA8C94:
    ctx->pc = 0x80CA8C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA8C94: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8C98:
    ctx->pc = 0x80CA8C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8C98: stw     r0, 20(r1)
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
label_80CA8C9C:
    ctx->pc = 0x80CA8C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8C9C: stw     r31, 12(r1)
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
label_80CA8CA0:
    ctx->pc = 0x80CA8CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8CA0: stw     r30, 8(r1)
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
label_80CA8CA4:
    ctx->pc = 0x80CA8CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CA4u)) return;
    // 80CA8CA4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA8CA8:
    ctx->pc = 0x80CA8CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8CA8: lwz     r31, 32(r3)
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
label_80CA8CAC:
    ctx->pc = 0x80CA8CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8CAC: stw     r30, 48(r31)
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
label_80CA8CB0:
    ctx->pc = 0x80CA8CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8CB0: stw     r5, 52(r31)
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
label_80CA8CB4:
    ctx->pc = 0x80CA8CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CB4u)) return;
    // 80CA8CB4: cmpwi   r5, 0
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

label_80CA8CB8:
    ctx->pc = 0x80CA8CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CB8u)) return;
    // 80CA8CB8: bc    12, 1, 0x80CA8CC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8CC8;
        }
    }

label_80CA8CBC:
    ctx->pc = 0x80CA8CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8CBC: lwz     r3, 16(r31)
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
label_80CA8CC0:
    ctx->pc = 0x80CA8CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CC0u)) return;
    // 80CA8CC0: bl      0x80509B94
    {
            ctx->lr = 0x80CA8CC4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CA8CC4:
    ctx->pc = 0x80CA8CC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8CC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8CC4: stw     r30, 44(r31)
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
label_80CA8CC8:
    ctx->pc = 0x80CA8CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8CC8: lwz     r31, 12(r1)
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
label_80CA8CCC:
    ctx->pc = 0x80CA8CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8CCC: lwz     r30, 8(r1)
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
label_80CA8CD0:
    ctx->pc = 0x80CA8CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8CD0: lwz     r0, 20(r1)
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
label_80CA8CD4:
    ctx->pc = 0x80CA8CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8CD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8CD8:
    ctx->pc = 0x80CA8CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CD8u)) return;
    // 80CA8CD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8CDC:
    ctx->pc = 0x80CA8CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CDCu)) return;
    // 80CA8CDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8CE0:
    ctx->pc = 0x80CA8CE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8CE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA8CE0: stwu     r1, -16(r1)
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
label_80CA8CE4:
    ctx->pc = 0x80CA8CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8CE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8CE8:
    ctx->pc = 0x80CA8CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8CE8: stw     r0, 20(r1)
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
label_80CA8CEC:
    ctx->pc = 0x80CA8CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8CEC: stw     r31, 12(r1)
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
label_80CA8CF0:
    ctx->pc = 0x80CA8CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CF0u)) return;
    // 80CA8CF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CA8CF4:
    ctx->pc = 0x80CA8CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CF4u)) return;
    // 80CA8CF4: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8CF8:
    ctx->pc = 0x80CA8CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CF8u)) return;
    // 80CA8CF8: addi    r4, r4, 18444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18444);

label_80CA8CFC:
    ctx->pc = 0x80CA8CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8CFC: lwz     r0, 0(r4)
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
label_80CA8D00:
    ctx->pc = 0x80CA8D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D00u)) return;
    // 80CA8D00: cmplwi  r0, 0x0000
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

label_80CA8D04:
    ctx->pc = 0x80CA8D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D04u)) return;
    // 80CA8D04: bc    4, 2, 0x80CA8D28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8D28;
        }
    }

label_80CA8D08:
    ctx->pc = 0x80CA8D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8D08: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CA8D0C:
    ctx->pc = 0x80CA8D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D0Cu)) return;
    // 80CA8D0C: bl      0x8050EEC0
    {
            ctx->lr = 0x80CA8D10u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80CA8D10:
    ctx->pc = 0x80CA8D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CA8D10: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8D14:
    ctx->pc = 0x80CA8D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D14u)) return;
    // 80CA8D14: addi    r4, r4, 18444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18444);

label_80CA8D18:
    ctx->pc = 0x80CA8D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8D18: stw     r3, 0(r4)
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
label_80CA8D1C:
    ctx->pc = 0x80CA8D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D1Cu)) return;
    // 80CA8D1C: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA8D20:
    ctx->pc = 0x80CA8D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D20u)) return;
    // 80CA8D20: addi    r3, r3, 18440
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18440);

label_80CA8D24:
    ctx->pc = 0x80CA8D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8D24: stw     r31, 0(r3)
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
label_80CA8D28:
    ctx->pc = 0x80CA8D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8D28: lwz     r31, 12(r1)
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
label_80CA8D2C:
    ctx->pc = 0x80CA8D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8D2C: lwz     r0, 20(r1)
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
label_80CA8D30:
    ctx->pc = 0x80CA8D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8D30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8D34:
    ctx->pc = 0x80CA8D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D34u)) return;
    // 80CA8D34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8D38:
    ctx->pc = 0x80CA8D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D38u)) return;
    // 80CA8D38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8D3C:
    ctx->pc = 0x80CA8D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA8D3C: stwu     r1, -32(r1)
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
label_80CA8D40:
    ctx->pc = 0x80CA8D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA8D40: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8D44:
    ctx->pc = 0x80CA8D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA8D44: stw     r0, 36(r1)
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
label_80CA8D48:
    ctx->pc = 0x80CA8D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8D48: stw     r31, 28(r1)
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
label_80CA8D4C:
    ctx->pc = 0x80CA8D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8D4C: stw     r30, 24(r1)
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
label_80CA8D50:
    ctx->pc = 0x80CA8D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8D50: stw     r29, 20(r1)
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
label_80CA8D54:
    ctx->pc = 0x80CA8D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8D54: stw     r28, 16(r1)
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
label_80CA8D58:
    ctx->pc = 0x80CA8D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D58u)) return;
    // 80CA8D58: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA8D5C:
    ctx->pc = 0x80CA8D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D5Cu)) return;
    // 80CA8D5C: addi    r30, r3, 18444
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(18444);

label_80CA8D60:
    ctx->pc = 0x80CA8D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8D60: lwz     r0, 0(r30)
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
label_80CA8D64:
    ctx->pc = 0x80CA8D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D64u)) return;
    // 80CA8D64: cmplwi  r0, 0x0000
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

label_80CA8D68:
    ctx->pc = 0x80CA8D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D68u)) return;
    // 80CA8D68: bc    12, 2, 0x80CA8DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8DC8;
        }
    }

label_80CA8D6C:
    ctx->pc = 0x80CA8D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CA8D6C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80CA8D70:
    ctx->pc = 0x80CA8D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D70u)) return;
    // 80CA8D70: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80CA8D74:
    ctx->pc = 0x80CA8D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D74u)) return;
    // 80CA8D74: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA8D78:
    ctx->pc = 0x80CA8D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D78u)) return;
    // 80CA8D78: addi    r31, r3, 18440
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(18440);

label_80CA8D7C:
    ctx->pc = 0x80CA8D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D7Cu)) return;
    // 80CA8D7C: b       0x80CA8D9C
    {
            goto label_80CA8D9C;
    }

label_80CA8D80:
    ctx->pc = 0x80CA8D80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA8D80: lwz     r3, 0(r30)
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
label_80CA8D84:
    ctx->pc = 0x80CA8D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8D84: lwzx    r3, r3, r29
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
label_80CA8D88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D88u)) return;
    // 80CA8D88: cmplwi  r3, 0x0000
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

label_80CA8D8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D8Cu)) return;
    // 80CA8D8C: bc    12, 2, 0x80CA8D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8D94;
        }
    }

label_80CA8D90:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8D90: bl      0x8050F9E0
    {
            ctx->lr = 0x80CA8D94u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CA8D94:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA8D94: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80CA8D98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8D98u)) return;
    // 80CA8D98: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80CA8D9C:
    ctx->pc = 0x80CA8D9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8D9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8D9C: lwz     r0, 0(r31)
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
label_80CA8DA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DA0u)) return;
    // 80CA8DA0: cmpw    r28, r0
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

label_80CA8DA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DA4u)) return;
    // 80CA8DA4: bc    12, 0, 0x80CA8D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CA8D80u;
                return;
            }
            goto label_80CA8D80;
        }
    }

label_80CA8DA8:
    ctx->pc = 0x80CA8DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA8DA8: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA8DAC:
    ctx->pc = 0x80CA8DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DACu)) return;
    // 80CA8DAC: addi    r3, r3, 18444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18444);

label_80CA8DB0:
    ctx->pc = 0x80CA8DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8DB0: lwz     r3, 0(r3)
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
label_80CA8DB4:
    ctx->pc = 0x80CA8DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DB4u)) return;
    // 80CA8DB4: bl      0x8050ED40
    {
            ctx->lr = 0x80CA8DB8u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CA8DB8:
    ctx->pc = 0x80CA8DB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8DB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA8DB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CA8DBC:
    ctx->pc = 0x80CA8DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DBCu)) return;
    // 80CA8DBC: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA8DC0:
    ctx->pc = 0x80CA8DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DC0u)) return;
    // 80CA8DC0: addi    r3, r3, 18444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18444);

label_80CA8DC4:
    ctx->pc = 0x80CA8DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8DC4: stw     r0, 0(r3)
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
label_80CA8DC8:
    ctx->pc = 0x80CA8DC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8DC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8DC8: lwz     r31, 28(r1)
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
label_80CA8DCC:
    ctx->pc = 0x80CA8DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8DCC: lwz     r30, 24(r1)
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
label_80CA8DD0:
    ctx->pc = 0x80CA8DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8DD0: lwz     r29, 20(r1)
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
label_80CA8DD4:
    ctx->pc = 0x80CA8DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8DD4: lwz     r28, 16(r1)
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
label_80CA8DD8:
    ctx->pc = 0x80CA8DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8DD8: lwz     r0, 36(r1)
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
label_80CA8DDC:
    ctx->pc = 0x80CA8DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8DDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8DE0:
    ctx->pc = 0x80CA8DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DE0u)) return;
    // 80CA8DE0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA8DE4:
    ctx->pc = 0x80CA8DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DE4u)) return;
    // 80CA8DE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8DE8:
    ctx->pc = 0x80CA8DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8DE8: stwu     r1, -16(r1)
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
label_80CA8DEC:
    ctx->pc = 0x80CA8DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8DEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8DF0:
    ctx->pc = 0x80CA8DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8DF0: stw     r0, 20(r1)
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
label_80CA8DF4:
    ctx->pc = 0x80CA8DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8DF4: stw     r31, 12(r1)
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
label_80CA8DF8:
    ctx->pc = 0x80CA8DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DF8u)) return;
    // 80CA8DF8: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8DFC:
    ctx->pc = 0x80CA8DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8DFCu)) return;
    // 80CA8DFC: addi    r6, r6, 18440
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(18440);

label_80CA8E00:
    ctx->pc = 0x80CA8E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8E00: lwz     r0, 0(r6)
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
label_80CA8E04:
    ctx->pc = 0x80CA8E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E04u)) return;
    // 80CA8E04: cmpw    r3, r0
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

label_80CA8E08:
    ctx->pc = 0x80CA8E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E08u)) return;
    // 80CA8E08: bc    4, 0, 0x80CA8E44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8E44;
        }
    }

label_80CA8E0C:
    ctx->pc = 0x80CA8E0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8E0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA8E0C: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8E10:
    ctx->pc = 0x80CA8E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E10u)) return;
    // 80CA8E10: addi    r6, r6, 18444
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(18444);

label_80CA8E14:
    ctx->pc = 0x80CA8E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8E14: lwz     r6, 0(r6)
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
label_80CA8E18:
    ctx->pc = 0x80CA8E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E18u)) return;
    // 80CA8E18: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CA8E1C:
    ctx->pc = 0x80CA8E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8E1C: lwzx    r0, r6, r31
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
label_80CA8E20:
    ctx->pc = 0x80CA8E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E20u)) return;
    // 80CA8E20: cmplwi  r0, 0x0000
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

label_80CA8E24:
    ctx->pc = 0x80CA8E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E24u)) return;
    // 80CA8E24: bc    4, 2, 0x80CA8E44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8E44;
        }
    }

label_80CA8E28:
    ctx->pc = 0x80CA8E28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8E28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA8E28: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA8E2C:
    ctx->pc = 0x80CA8E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E2Cu)) return;
    // 80CA8E2C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CA8E30:
    ctx->pc = 0x80CA8E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E30u)) return;
    // 80CA8E30: bl      0x80CA8B34
    {
            ctx->lr = 0x80CA8E34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CA8B34u;
                return;
            }
            goto label_80CA8B34;
    }

label_80CA8E34:
    ctx->pc = 0x80CA8E34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8E34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA8E34: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8E38:
    ctx->pc = 0x80CA8E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E38u)) return;
    // 80CA8E38: addi    r4, r4, 18444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18444);

label_80CA8E3C:
    ctx->pc = 0x80CA8E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8E3C: lwz     r4, 0(r4)
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
label_80CA8E40:
    ctx->pc = 0x80CA8E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8E40: stwx    r3, r4, r31
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
label_80CA8E44:
    ctx->pc = 0x80CA8E44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8E44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8E44: lwz     r31, 12(r1)
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
label_80CA8E48:
    ctx->pc = 0x80CA8E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8E48: lwz     r0, 20(r1)
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
label_80CA8E4C:
    ctx->pc = 0x80CA8E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8E4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8E50:
    ctx->pc = 0x80CA8E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E50u)) return;
    // 80CA8E50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8E54:
    ctx->pc = 0x80CA8E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E54u)) return;
    // 80CA8E54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8E58:
    ctx->pc = 0x80CA8E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8E58: stwu     r1, -16(r1)
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
label_80CA8E5C:
    ctx->pc = 0x80CA8E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8E5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8E60:
    ctx->pc = 0x80CA8E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8E60: stw     r0, 20(r1)
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
label_80CA8E64:
    ctx->pc = 0x80CA8E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8E64: stw     r31, 12(r1)
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
label_80CA8E68:
    ctx->pc = 0x80CA8E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E68u)) return;
    // 80CA8E68: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8E6C:
    ctx->pc = 0x80CA8E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E6Cu)) return;
    // 80CA8E6C: addi    r4, r4, 18440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18440);

label_80CA8E70:
    ctx->pc = 0x80CA8E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8E70: lwz     r0, 0(r4)
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
label_80CA8E74:
    ctx->pc = 0x80CA8E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E74u)) return;
    // 80CA8E74: cmpw    r3, r0
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

label_80CA8E78:
    ctx->pc = 0x80CA8E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E78u)) return;
    // 80CA8E78: bc    4, 0, 0x80CA8EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8EB0;
        }
    }

label_80CA8E7C:
    ctx->pc = 0x80CA8E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA8E7C: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8E80:
    ctx->pc = 0x80CA8E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E80u)) return;
    // 80CA8E80: addi    r4, r4, 18444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18444);

label_80CA8E84:
    ctx->pc = 0x80CA8E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8E84: lwz     r4, 0(r4)
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
label_80CA8E88:
    ctx->pc = 0x80CA8E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E88u)) return;
    // 80CA8E88: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CA8E8C:
    ctx->pc = 0x80CA8E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8E8C: lwzx    r3, r4, r31
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
label_80CA8E90:
    ctx->pc = 0x80CA8E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E90u)) return;
    // 80CA8E90: cmplwi  r3, 0x0000
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

label_80CA8E94:
    ctx->pc = 0x80CA8E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8E94u)) return;
    // 80CA8E94: bc    12, 2, 0x80CA8EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8EB0;
        }
    }

label_80CA8E98:
    ctx->pc = 0x80CA8E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8E98: bl      0x8050F9E0
    {
            ctx->lr = 0x80CA8E9Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CA8E9C:
    ctx->pc = 0x80CA8E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CA8E9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CA8EA0:
    ctx->pc = 0x80CA8EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EA0u)) return;
    // 80CA8EA0: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA8EA4:
    ctx->pc = 0x80CA8EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EA4u)) return;
    // 80CA8EA4: addi    r3, r3, 18444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18444);

label_80CA8EA8:
    ctx->pc = 0x80CA8EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA8EA8: lwz     r3, 0(r3)
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
label_80CA8EAC:
    ctx->pc = 0x80CA8EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA8EAC: stwx    r0, r3, r31
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
label_80CA8EB0:
    ctx->pc = 0x80CA8EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8EB0: lwz     r31, 12(r1)
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
label_80CA8EB4:
    ctx->pc = 0x80CA8EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8EB4: lwz     r0, 20(r1)
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
label_80CA8EB8:
    ctx->pc = 0x80CA8EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8EB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8EBC:
    ctx->pc = 0x80CA8EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EBCu)) return;
    // 80CA8EBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8EC0:
    ctx->pc = 0x80CA8EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EC0u)) return;
    // 80CA8EC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8EC4:
    ctx->pc = 0x80CA8EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8EC4: stwu     r1, -16(r1)
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
label_80CA8EC8:
    ctx->pc = 0x80CA8EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8EC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8ECC:
    ctx->pc = 0x80CA8ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8ECC: stw     r0, 20(r1)
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
label_80CA8ED0:
    ctx->pc = 0x80CA8ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8ED0u)) return;
    // 80CA8ED0: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8ED4:
    ctx->pc = 0x80CA8ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8ED4u)) return;
    // 80CA8ED4: addi    r6, r6, 18440
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(18440);

label_80CA8ED8:
    ctx->pc = 0x80CA8ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8ED8: lwz     r0, 0(r6)
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
label_80CA8EDC:
    ctx->pc = 0x80CA8EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EDCu)) return;
    // 80CA8EDC: cmpw    r3, r0
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

label_80CA8EE0:
    ctx->pc = 0x80CA8EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EE0u)) return;
    // 80CA8EE0: bc    4, 0, 0x80CA8F04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8F04;
        }
    }

label_80CA8EE4:
    ctx->pc = 0x80CA8EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA8EE4: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8EE8:
    ctx->pc = 0x80CA8EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EE8u)) return;
    // 80CA8EE8: addi    r6, r6, 18444
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(18444);

label_80CA8EEC:
    ctx->pc = 0x80CA8EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8EEC: lwz     r6, 0(r6)
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
label_80CA8EF0:
    ctx->pc = 0x80CA8EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EF0u)) return;
    // 80CA8EF0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CA8EF4:
    ctx->pc = 0x80CA8EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8EF4: lwzx    r3, r6, r0
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
label_80CA8EF8:
    ctx->pc = 0x80CA8EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EF8u)) return;
    // 80CA8EF8: cmplwi  r3, 0x0000
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

label_80CA8EFC:
    ctx->pc = 0x80CA8EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8EFCu)) return;
    // 80CA8EFC: bc    12, 2, 0x80CA8F04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8F04;
        }
    }

label_80CA8F00:
    ctx->pc = 0x80CA8F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8F00: bl      0x80CA8BF0
    {
            ctx->lr = 0x80CA8F04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CA8BF0u;
                return;
            }
            goto label_80CA8BF0;
    }

label_80CA8F04:
    ctx->pc = 0x80CA8F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8F04: lwz     r0, 20(r1)
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
label_80CA8F08:
    ctx->pc = 0x80CA8F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8F08: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8F0C:
    ctx->pc = 0x80CA8F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F0Cu)) return;
    // 80CA8F0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8F10:
    ctx->pc = 0x80CA8F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F10u)) return;
    // 80CA8F10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8F14:
    ctx->pc = 0x80CA8F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8F14: stwu     r1, -16(r1)
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
label_80CA8F18:
    ctx->pc = 0x80CA8F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8F18: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8F1C:
    ctx->pc = 0x80CA8F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8F1C: stw     r0, 20(r1)
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
label_80CA8F20:
    ctx->pc = 0x80CA8F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F20u)) return;
    // 80CA8F20: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8F24:
    ctx->pc = 0x80CA8F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F24u)) return;
    // 80CA8F24: addi    r6, r6, 18440
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(18440);

label_80CA8F28:
    ctx->pc = 0x80CA8F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8F28: lwz     r0, 0(r6)
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
label_80CA8F2C:
    ctx->pc = 0x80CA8F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F2Cu)) return;
    // 80CA8F2C: cmpw    r3, r0
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

label_80CA8F30:
    ctx->pc = 0x80CA8F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F30u)) return;
    // 80CA8F30: bc    4, 0, 0x80CA8F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8F54;
        }
    }

label_80CA8F34:
    ctx->pc = 0x80CA8F34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8F34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA8F34: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8F38:
    ctx->pc = 0x80CA8F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F38u)) return;
    // 80CA8F38: addi    r6, r6, 18444
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(18444);

label_80CA8F3C:
    ctx->pc = 0x80CA8F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8F3C: lwz     r6, 0(r6)
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
label_80CA8F40:
    ctx->pc = 0x80CA8F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F40u)) return;
    // 80CA8F40: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CA8F44:
    ctx->pc = 0x80CA8F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8F44: lwzx    r3, r6, r0
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
label_80CA8F48:
    ctx->pc = 0x80CA8F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F48u)) return;
    // 80CA8F48: cmplwi  r3, 0x0000
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

label_80CA8F4C:
    ctx->pc = 0x80CA8F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F4Cu)) return;
    // 80CA8F4C: bc    12, 2, 0x80CA8F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8F54;
        }
    }

label_80CA8F50:
    ctx->pc = 0x80CA8F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8F50: bl      0x80CA8C40
    {
            ctx->lr = 0x80CA8F54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CA8C40u;
                return;
            }
            goto label_80CA8C40;
    }

label_80CA8F54:
    ctx->pc = 0x80CA8F54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8F54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8F54: lwz     r0, 20(r1)
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
label_80CA8F58:
    ctx->pc = 0x80CA8F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8F58: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8F5C:
    ctx->pc = 0x80CA8F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F5Cu)) return;
    // 80CA8F5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8F60:
    ctx->pc = 0x80CA8F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F60u)) return;
    // 80CA8F60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8F64:
    ctx->pc = 0x80CA8F64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8F64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8F64: stwu     r1, -16(r1)
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
label_80CA8F68:
    ctx->pc = 0x80CA8F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8F68: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8F6C:
    ctx->pc = 0x80CA8F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA8F6C: stw     r0, 20(r1)
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
label_80CA8F70:
    ctx->pc = 0x80CA8F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F70u)) return;
    // 80CA8F70: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8F74:
    ctx->pc = 0x80CA8F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F74u)) return;
    // 80CA8F74: addi    r6, r6, 18440
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(18440);

label_80CA8F78:
    ctx->pc = 0x80CA8F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8F78: lwz     r0, 0(r6)
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
label_80CA8F7C:
    ctx->pc = 0x80CA8F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F7Cu)) return;
    // 80CA8F7C: cmpw    r3, r0
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

label_80CA8F80:
    ctx->pc = 0x80CA8F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F80u)) return;
    // 80CA8F80: bc    4, 0, 0x80CA8FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA8FA4;
        }
    }

label_80CA8F84:
    ctx->pc = 0x80CA8F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA8F84: lis     r6, -27393
    ctx->gpr[6] = ((u32)(s32)(-27393) << 16);

label_80CA8F88:
    ctx->pc = 0x80CA8F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F88u)) return;
    // 80CA8F88: addi    r6, r6, 18444
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(18444);

label_80CA8F8C:
    ctx->pc = 0x80CA8F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8F8C: lwz     r6, 0(r6)
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
label_80CA8F90:
    ctx->pc = 0x80CA8F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F90u)) return;
    // 80CA8F90: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CA8F94:
    ctx->pc = 0x80CA8F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8F94: lwzx    r3, r6, r0
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
label_80CA8F98:
    ctx->pc = 0x80CA8F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F98u)) return;
    // 80CA8F98: cmplwi  r3, 0x0000
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

label_80CA8F9C:
    ctx->pc = 0x80CA8F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8F9Cu)) return;
    // 80CA8F9C: bc    12, 2, 0x80CA8FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA8FA4;
        }
    }

label_80CA8FA0:
    ctx->pc = 0x80CA8FA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8FA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA8FA0: bl      0x80CA8C90
    {
            ctx->lr = 0x80CA8FA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CA8C90u;
                return;
            }
            goto label_80CA8C90;
    }

label_80CA8FA4:
    ctx->pc = 0x80CA8FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA8FA4: lwz     r0, 20(r1)
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
label_80CA8FA8:
    ctx->pc = 0x80CA8FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA8FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA8FA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8FAC:
    ctx->pc = 0x80CA8FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FACu)) return;
    // 80CA8FAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA8FB0:
    ctx->pc = 0x80CA8FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FB0u)) return;
    // 80CA8FB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA8FB4:
    ctx->pc = 0x80CA8FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CA8FB4: stwu     r1, -32(r1)
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
label_80CA8FB8:
    ctx->pc = 0x80CA8FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA8FB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA8FBC:
    ctx->pc = 0x80CA8FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA8FBC: stw     r0, 36(r1)
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
label_80CA8FC0:
    ctx->pc = 0x80CA8FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA8FC0: stw     r31, 28(r1)
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
label_80CA8FC4:
    ctx->pc = 0x80CA8FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA8FC4: stw     r30, 24(r1)
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
label_80CA8FC8:
    ctx->pc = 0x80CA8FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8FC8: stw     r29, 20(r1)
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
label_80CA8FCC:
    ctx->pc = 0x80CA8FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA8FCC: stw     r28, 16(r1)
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
label_80CA8FD0:
    ctx->pc = 0x80CA8FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FD0u)) return;
    // 80CA8FD0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CA8FD4:
    ctx->pc = 0x80CA8FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FD4u)) return;
    // 80CA8FD4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA8FD8:
    ctx->pc = 0x80CA8FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FD8u)) return;
    // 80CA8FD8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CA8FDC:
    ctx->pc = 0x80CA8FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FDCu)) return;
    // 80CA8FDC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80CA8FE0:
    ctx->pc = 0x80CA8FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FE0u)) return;
    // 80CA8FE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA8FE4:
    ctx->pc = 0x80CA8FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FE4u)) return;
    // 80CA8FE4: bl      0x80401DB0
    {
            ctx->lr = 0x80CA8FE8u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80CA8FE8:
    ctx->pc = 0x80CA8FE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA8FE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA8FE8: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA8FEC:
    ctx->pc = 0x80CA8FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FECu)) return;
    // 80CA8FEC: addi    r4, r4, 18448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18448);

label_80CA8FF0:
    ctx->pc = 0x80CA8FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA8FF0: lwz     r0, 0(r4)
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
label_80CA8FF4:
    ctx->pc = 0x80CA8FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FF4u)) return;
    // 80CA8FF4: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CA8FF8:
    ctx->pc = 0x80CA8FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FF8u)) return;
    // 80CA8FF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CA8FFC:
    ctx->pc = 0x80CA8FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA8FFCu)) return;
    // 80CA8FFC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA9000:
    ctx->pc = 0x80CA9000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9000u)) return;
    // 80CA9000: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CA9004:
    ctx->pc = 0x80CA9004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9004u)) return;
    // 80CA9004: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CA9008:
    ctx->pc = 0x80CA9008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9008u)) return;
    // 80CA9008: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80CA900C:
    ctx->pc = 0x80CA900Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA900Cu)) return;
    // 80CA900C: bl      0x8050A0D4
    {
            ctx->lr = 0x80CA9010u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80CA9010:
    ctx->pc = 0x80CA9010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA9010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CA9014:
    ctx->pc = 0x80CA9014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9014u)) return;
    // 80CA9014: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CA9018:
    ctx->pc = 0x80CA9018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9018u)) return;
    // 80CA9018: bl      0x80509C74
    {
            ctx->lr = 0x80CA901Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CA901C:
    ctx->pc = 0x80CA901Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA901Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA901C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CA9020:
    ctx->pc = 0x80CA9020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9020u)) return;
    // 80CA9020: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CA9024:
    ctx->pc = 0x80CA9024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9024u)) return;
    // 80CA9024: bl      0x80509BF8
    {
            ctx->lr = 0x80CA9028u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CA9028:
    ctx->pc = 0x80CA9028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA9028: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CA902C:
    ctx->pc = 0x80CA902Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA902Cu)) return;
    // 80CA902C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CA9030:
    ctx->pc = 0x80CA9030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9030u)) return;
    // 80CA9030: bl      0x80509B94
    {
            ctx->lr = 0x80CA9034u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CA9034:
    ctx->pc = 0x80CA9034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CA9034: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9038:
    ctx->pc = 0x80CA9038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9038u)) return;
    // 80CA9038: addi    r4, r3, 18448
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18448);

label_80CA903C:
    ctx->pc = 0x80CA903Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA903Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CA903C: lwz     r3, 0(r4)
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
label_80CA9040:
    ctx->pc = 0x80CA9040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9040u)) return;
    // 80CA9040: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80CA9044:
    ctx->pc = 0x80CA9044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA9044: stw     r0, 0(r4)
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
label_80CA9048:
    ctx->pc = 0x80CA9048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9048u)) return;
    // 80CA9048: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80CA904C:
    ctx->pc = 0x80CA904Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA904Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA904C: stw     r0, 0(r4)
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
label_80CA9050:
    ctx->pc = 0x80CA9050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA9050: lwz     r31, 28(r1)
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
label_80CA9054:
    ctx->pc = 0x80CA9054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9054: lwz     r30, 24(r1)
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
label_80CA9058:
    ctx->pc = 0x80CA9058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA9058: lwz     r29, 20(r1)
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
label_80CA905C:
    ctx->pc = 0x80CA905Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA905Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA905C: lwz     r28, 16(r1)
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
label_80CA9060:
    ctx->pc = 0x80CA9060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9060: lwz     r0, 36(r1)
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
label_80CA9064:
    ctx->pc = 0x80CA9064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA9064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9064: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9068:
    ctx->pc = 0x80CA9068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9068u)) return;
    // 80CA9068: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA906C:
    ctx->pc = 0x80CA906Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA906Cu)) return;
    // 80CA906C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9070:
    ctx->pc = 0x80CA9070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA9070: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9074:
    ctx->pc = 0x80CA9074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA9074: stwu     r1, -32(r1)
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
label_80CA9078:
    ctx->pc = 0x80CA9078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA9078: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA907C:
    ctx->pc = 0x80CA907Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA907Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA907C: stw     r0, 36(r1)
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
label_80CA9080:
    ctx->pc = 0x80CA9080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9080: stw     r31, 28(r1)
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
label_80CA9084:
    ctx->pc = 0x80CA9084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9084: lwz     r31, 32(r3)
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
label_80CA9088:
    ctx->pc = 0x80CA9088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9088u)) return;
    // 80CA9088: cmplwi  r31, 0x0000
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

label_80CA908C:
    ctx->pc = 0x80CA908Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA908Cu)) return;
    // 80CA908C: bc    12, 2, 0x80CA9154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA9154;
        }
    }

label_80CA9090:
    ctx->pc = 0x80CA9090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CA9090: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CA9094:
    ctx->pc = 0x80CA9094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9094u)) return;
    // 80CA9094: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80CA9098:
    ctx->pc = 0x80CA9098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9098: lwz     r0, 0(r3)
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
label_80CA909C:
    ctx->pc = 0x80CA909Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA909Cu)) return;
    // 80CA909C: cmpwi   r0, 0
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

label_80CA90A0:
    ctx->pc = 0x80CA90A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90A0u)) return;
    // 80CA90A0: bc    4, 2, 0x80CA9154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA9154;
        }
    }

label_80CA90A4:
    ctx->pc = 0x80CA90A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA90A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA90A4: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CA90A4u)) return;
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
label_80CA90A8:
    ctx->pc = 0x80CA90A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA90A8: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA90A8u)) return;
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
label_80CA90AC:
    ctx->pc = 0x80CA90ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA90AC: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CA90ACu)) return;
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
label_80CA90B0:
    ctx->pc = 0x80CA90B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA90B0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA90B0u)) return;
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
label_80CA90B4:
    ctx->pc = 0x80CA90B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA90B4: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CA90B4u)) return;
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
label_80CA90B8:
    ctx->pc = 0x80CA90B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA90B8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA90B8u)) return;
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
label_80CA90BC:
    ctx->pc = 0x80CA90BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA90BC: lfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CA90BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA90C0:
    ctx->pc = 0x80CA90C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA90C0: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA90C0u)) return;
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
label_80CA90C4:
    ctx->pc = 0x80CA90C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90C4u)) return;
    // 80CA90C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA90C8:
    ctx->pc = 0x80CA90C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA90C8: lbz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA90CC:
    ctx->pc = 0x80CA90CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90CCu)) return;
    // 80CA90CC: bl      0x8060F4F8
    {
            ctx->lr = 0x80CA90D0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CA90D0:
    ctx->pc = 0x80CA90D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA90D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA90D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CA90D4:
    ctx->pc = 0x80CA90D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA90D4: lbz     r4, 9(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(9);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA90D8:
    ctx->pc = 0x80CA90D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90D8u)) return;
    // 80CA90D8: bl      0x8060F4F8
    {
            ctx->lr = 0x80CA90DCu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CA90DC:
    ctx->pc = 0x80CA90DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA90DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA90DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80CA90E0:
    ctx->pc = 0x80CA90E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90E0u)) return;
    // 80CA90E0: bl      0x8060F5C8
    {
            ctx->lr = 0x80CA90E4u;
            ctx->pc = 0x8060F5C8u;
            return;
    }

label_80CA90E4:
    ctx->pc = 0x80CA90E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA90E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA90E4: lwz     r0, 16(r31)
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
label_80CA90E8:
    ctx->pc = 0x80CA90E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90E8u)) return;
    // 80CA90E8: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA90EC:
    ctx->pc = 0x80CA90ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90ECu)) return;
    // 80CA90EC: addi    r3, r3, 18396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18396);

label_80CA90F0:
    ctx->pc = 0x80CA90F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA90F0: stw     r0, 24(r3)
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
label_80CA90F4:
    ctx->pc = 0x80CA90F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA90F4: lwz     r0, 28(r31)
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
label_80CA90F8:
    ctx->pc = 0x80CA90F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90F8u)) return;
    // 80CA90F8: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80CA90FC:
    ctx->pc = 0x80CA90FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA90FCu)) return;
    // 80CA90FC: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA9100:
    ctx->pc = 0x80CA9100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9100u)) return;
    // 80CA9100: addi    r4, r4, 18376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18376);

label_80CA9104:
    ctx->pc = 0x80CA9104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9104: sth     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9108:
    ctx->pc = 0x80CA9108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9108: lbz     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA910C:
    ctx->pc = 0x80CA910Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA910Cu)) return;
    // 80CA910C: cmplwi  r0, 0x0000
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

label_80CA9110:
    ctx->pc = 0x80CA9110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9110u)) return;
    // 80CA9110: bc    4, 2, 0x80CA9128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA9128;
        }
    }

label_80CA9114:
    ctx->pc = 0x80CA9114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA9114: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA9118:
    ctx->pc = 0x80CA9118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9118: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CA9118u)) return;
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
label_80CA911C:
    ctx->pc = 0x80CA911Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA911Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA911C: lwz     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9120:
    ctx->pc = 0x80CA9120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9120u)) return;
    // 80CA9120: bl      0x8060B0FC
    {
            ctx->lr = 0x80CA9124u;
            ctx->pc = 0x8060B0FCu;
            return;
    }

label_80CA9124:
    ctx->pc = 0x80CA9124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA9124: b       0x80CA9138
    {
            goto label_80CA9138;
    }

label_80CA9128:
    ctx->pc = 0x80CA9128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA9128: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA912C:
    ctx->pc = 0x80CA912Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA912Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA912C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CA912Cu)) return;
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
label_80CA9130:
    ctx->pc = 0x80CA9130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA9130: lwz     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9134:
    ctx->pc = 0x80CA9134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9134u)) return;
    // 80CA9134: bl      0x80CA9364
    {
            ctx->lr = 0x80CA9138u;
            goto label_80CA9364;
    }

label_80CA9138:
    ctx->pc = 0x80CA9138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA9138: bl      0x80450D68
    {
            ctx->lr = 0x80CA913Cu;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80CA913C:
    ctx->pc = 0x80CA913Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA913Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA913C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA9140:
    ctx->pc = 0x80CA9140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9140u)) return;
    // 80CA9140: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80CA9144:
    ctx->pc = 0x80CA9144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9144u)) return;
    // 80CA9144: bl      0x8060F4F8
    {
            ctx->lr = 0x80CA9148u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CA9148:
    ctx->pc = 0x80CA9148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA9148: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CA914C:
    ctx->pc = 0x80CA914Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA914Cu)) return;
    // 80CA914C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80CA9150:
    ctx->pc = 0x80CA9150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9150u)) return;
    // 80CA9150: bl      0x8060F4F8
    {
            ctx->lr = 0x80CA9154u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CA9154:
    ctx->pc = 0x80CA9154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA9154: lwz     r31, 28(r1)
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
label_80CA9158:
    ctx->pc = 0x80CA9158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9158: lwz     r0, 36(r1)
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
label_80CA915C:
    ctx->pc = 0x80CA915Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA915Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA915C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9160:
    ctx->pc = 0x80CA9160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9160u)) return;
    // 80CA9160: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA9164:
    ctx->pc = 0x80CA9164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9164u)) return;
    // 80CA9164: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9168:
    ctx->pc = 0x80CA9168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9168: stwu     r1, -32(r1)
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
label_80CA916C:
    ctx->pc = 0x80CA916Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA916Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA916C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9170:
    ctx->pc = 0x80CA9170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA9170: stw     r0, 36(r1)
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
label_80CA9174:
    ctx->pc = 0x80CA9174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9174u)) return;
    // 80CA9174: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CA9178:
    ctx->pc = 0x80CA9178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9178: lwz     r6, 32(r4)
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
label_80CA917C:
    ctx->pc = 0x80CA917Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA917Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA917C: lwz     r7, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9180:
    ctx->pc = 0x80CA9180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9180u)) return;
    // 80CA9180: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CA9184:
    ctx->pc = 0x80CA9184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9184u)) return;
    // 80CA9184: bc    12, 2, 0x80CA9214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA9214;
        }
    }

label_80CA9188:
    ctx->pc = 0x80CA9188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA9188: cmpwi   r7, 0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CA918C:
    ctx->pc = 0x80CA918Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA918Cu)) return;
    // 80CA918C: bc    4, 1, 0x80CA91E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA91E8;
        }
    }

label_80CA9190:
    ctx->pc = 0x80CA9190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 38u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 38u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80CA9190: lfs     f3, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA9190u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
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
label_80CA9194:
    ctx->pc = 0x80CA9194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80CA9194: lfs     f1, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA9194u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9198:
    ctx->pc = 0x80CA9198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9198u)) return;
    // 80CA9198: addi    r5, r7, -1
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-1);

label_80CA919C:
    ctx->pc = 0x80CA919Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA919Cu)) return;
    // 80CA919C: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA91A0:
    ctx->pc = 0x80CA91A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91A0u)) return;
    // 80CA91A0: addi    r3, r3, -11984
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11984);

label_80CA91A4:
    ctx->pc = 0x80CA91A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CA91A4: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA91A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA91A8:
    ctx->pc = 0x80CA91A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91A8u)) return;
    // 80CA91A8: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_80CA91AC:
    ctx->pc = 0x80CA91ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CA91AC: stw     r0, 12(r1)
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
label_80CA91B0:
    ctx->pc = 0x80CA91B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91B0u)) return;
    // 80CA91B0: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80CA91B4:
    ctx->pc = 0x80CA91B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CA91B4: stw     r3, 8(r1)
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
label_80CA91B8:
    ctx->pc = 0x80CA91B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CA91B8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA91B8u)) return;
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
label_80CA91BC:
    ctx->pc = 0x80CA91BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91BCu)) return;
    // 80CA91BC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80CA91BCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80CA91C0:
    ctx->pc = 0x80CA91C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91C0u)) return;
    // 80CA91C0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CA91C0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CA91C4:
    ctx->pc = 0x80CA91C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91C4u)) return;
    // 80CA91C4: fadds   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80CA91C4u)) return;
    ppc_fadds(ctx, 1, 3, 0);

label_80CA91C8:
    ctx->pc = 0x80CA91C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91C8u)) return;
    // 80CA91C8: xoris   r0, r7, 0x8000
    ctx->gpr[0] = ctx->gpr[7] ^ (0x8000u << 16);

label_80CA91CC:
    ctx->pc = 0x80CA91CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CA91CC: stw     r0, 20(r1)
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
label_80CA91D0:
    ctx->pc = 0x80CA91D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CA91D0: stw     r3, 16(r1)
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
label_80CA91D4:
    ctx->pc = 0x80CA91D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CA91D4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA91D4u)) return;
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
label_80CA91D8:
    ctx->pc = 0x80CA91D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91D8u)) return;
    // 80CA91D8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80CA91D8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80CA91DC:
    ctx->pc = 0x80CA91DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CA91DCu)) return;
    // 80CA91DC: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CA91DCu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80CA91E0:
    ctx->pc = 0x80CA91E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA91E0: stfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA91E0u)) return;
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
label_80CA91E4:
    ctx->pc = 0x80CA91E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA91E4: stw     r5, 20(r6)
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
label_80CA91E8:
    ctx->pc = 0x80CA91E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA91E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA91E8: lbz     r0, 10(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA91EC:
    ctx->pc = 0x80CA91ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91ECu)) return;
    // 80CA91EC: cmplwi  r0, 0x0000
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

label_80CA91F0:
    ctx->pc = 0x80CA91F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91F0u)) return;
    // 80CA91F0: bc    4, 2, 0x80CA920C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA920C;
        }
    }

label_80CA91F4:
    ctx->pc = 0x80CA91F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA91F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CA91F4: lis     r3, -32565
    ctx->gpr[3] = ((u32)(s32)(-32565) << 16);

label_80CA91F8:
    ctx->pc = 0x80CA91F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91F8u)) return;
    // 80CA91F8: addi    r3, r3, -28556
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28556);

label_80CA91FC:
    ctx->pc = 0x80CA91FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA91FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA91FC: lfs     f1, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CA91FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9200:
    ctx->pc = 0x80CA9200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9200u)) return;
    // 80CA9200: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CA9204:
    ctx->pc = 0x80CA9204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9204u)) return;
    // 80CA9204: bl      0x80605D44
    {
            ctx->lr = 0x80CA9208u;
            ctx->pc = 0x80605D44u;
            return;
    }

label_80CA9208:
    ctx->pc = 0x80CA9208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA9208: b       0x80CA9214
    {
            goto label_80CA9214;
    }

label_80CA920C:
    ctx->pc = 0x80CA920Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA920Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA920C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA9210:
    ctx->pc = 0x80CA9210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9210u)) return;
    // 80CA9210: bl      0x80CA9074
    {
            ctx->lr = 0x80CA9214u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CA9074u;
                return;
            }
            goto label_80CA9074;
    }

label_80CA9214:
    ctx->pc = 0x80CA9214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9214: lwz     r0, 36(r1)
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
label_80CA9218:
    ctx->pc = 0x80CA9218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA9218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9218: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA921C:
    ctx->pc = 0x80CA921Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA921Cu)) return;
    // 80CA921C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA9220:
    ctx->pc = 0x80CA9220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9220u)) return;
    // 80CA9220: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9224:
    ctx->pc = 0x80CA9224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA9224: stwu     r1, -16(r1)
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
label_80CA9228:
    ctx->pc = 0x80CA9228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA9228: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA922C:
    ctx->pc = 0x80CA922Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA922Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA922C: stw     r0, 20(r1)
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
label_80CA9230:
    ctx->pc = 0x80CA9230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9230: stw     r31, 12(r1)
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
label_80CA9234:
    ctx->pc = 0x80CA9234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA9234: stw     r30, 8(r1)
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
label_80CA9238:
    ctx->pc = 0x80CA9238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9238u)) return;
    // 80CA9238: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CA923C:
    ctx->pc = 0x80CA923Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA923Cu)) return;
    // 80CA923C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA9240:
    ctx->pc = 0x80CA9240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9240u)) return;
    // 80CA9240: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CA9244:
    ctx->pc = 0x80CA9244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9244u)) return;
    // 80CA9244: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CA9248:
    ctx->pc = 0x80CA9248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9248u)) return;
    // 80CA9248: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CA924C:
    ctx->pc = 0x80CA924Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA924Cu)) return;
    // 80CA924C: bl      0x8050FD60
    {
            ctx->lr = 0x80CA9250u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CA9250:
    ctx->pc = 0x80CA9250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA9250: cmplwi  r3, 0x0000
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

label_80CA9254:
    ctx->pc = 0x80CA9254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9254u)) return;
    // 80CA9254: bc    12, 2, 0x80CA92E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA92E8;
        }
    }

label_80CA9258:
    ctx->pc = 0x80CA9258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 36u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 36u : 1u;
    // 80CA9258: lis     r4, -32565
    ctx->gpr[4] = ((u32)(s32)(-32565) << 16);

label_80CA925C:
    ctx->pc = 0x80CA925Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA925Cu)) return;
    // 80CA925C: addi    r0, r4, -28312
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-28312);

label_80CA9260:
    ctx->pc = 0x80CA9260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80CA9260: stw     r0, 16(r3)
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
label_80CA9264:
    ctx->pc = 0x80CA9264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9264u)) return;
    // 80CA9264: lis     r4, -32565
    ctx->gpr[4] = ((u32)(s32)(-32565) << 16);

label_80CA9268:
    ctx->pc = 0x80CA9268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9268u)) return;
    // 80CA9268: addi    r0, r4, -28556
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-28556);

label_80CA926C:
    ctx->pc = 0x80CA926Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA926Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CA926C: stw     r0, 20(r3)
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
label_80CA9270:
    ctx->pc = 0x80CA9270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9270u)) return;
    // 80CA9270: lis     r4, -32565
    ctx->gpr[4] = ((u32)(s32)(-32565) << 16);

label_80CA9274:
    ctx->pc = 0x80CA9274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9274u)) return;
    // 80CA9274: addi    r0, r4, -28560
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-28560);

label_80CA9278:
    ctx->pc = 0x80CA9278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CA9278: stw     r0, 24(r3)
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
label_80CA927C:
    ctx->pc = 0x80CA927Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA927Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80CA927C: lwz     r5, 32(r3)
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
label_80CA9280:
    ctx->pc = 0x80CA9280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9280u)) return;
    // 80CA9280: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_80CA9284:
    ctx->pc = 0x80CA9284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CA9284: stb     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9288:
    ctx->pc = 0x80CA9288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9288u)) return;
    // 80CA9288: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80CA928C:
    ctx->pc = 0x80CA928Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA928Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CA928C: stb     r0, 9(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9290:
    ctx->pc = 0x80CA9290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CA9290: stw     r30, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9294:
    ctx->pc = 0x80CA9294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9294u)) return;
    // 80CA9294: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA9298:
    ctx->pc = 0x80CA9298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9298u)) return;
    // 80CA9298: addi    r4, r4, -11976
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11976);

label_80CA929C:
    ctx->pc = 0x80CA929Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA929Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CA929C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA929Cu)) return;
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
label_80CA92A0:
    ctx->pc = 0x80CA92A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CA92A0: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA92A0u)) return;
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
label_80CA92A4:
    ctx->pc = 0x80CA92A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CA92A4: stfs     f0, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA92A4u)) return;
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
label_80CA92A8:
    ctx->pc = 0x80CA92A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92A8u)) return;
    // 80CA92A8: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA92AC:
    ctx->pc = 0x80CA92ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92ACu)) return;
    // 80CA92AC: addi    r4, r4, -11972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11972);

label_80CA92B0:
    ctx->pc = 0x80CA92B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CA92B0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA92B0u)) return;
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
label_80CA92B4:
    ctx->pc = 0x80CA92B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CA92B4: stfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA92B4u)) return;
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
label_80CA92B8:
    ctx->pc = 0x80CA92B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92B8u)) return;
    // 80CA92B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CA92BC:
    ctx->pc = 0x80CA92BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA92BC: stw     r4, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA92C0:
    ctx->pc = 0x80CA92C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92C0u)) return;
    // 80CA92C0: li      r0, 34
    ctx->gpr[0] = (u32)(s32)(34);

label_80CA92C4:
    ctx->pc = 0x80CA92C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA92C4: stw     r0, 24(r5)
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
label_80CA92C8:
    ctx->pc = 0x80CA92C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA92C8: stw     r4, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA92CC:
    ctx->pc = 0x80CA92CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92CCu)) return;
    // 80CA92CC: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA92D0:
    ctx->pc = 0x80CA92D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92D0u)) return;
    // 80CA92D0: addi    r4, r4, -11968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11968);

label_80CA92D4:
    ctx->pc = 0x80CA92D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA92D4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CA92D4u)) return;
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
label_80CA92D8:
    ctx->pc = 0x80CA92D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA92D8: stfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA92D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA92DC:
    ctx->pc = 0x80CA92DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA92DC: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA92DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA92E0:
    ctx->pc = 0x80CA92E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA92E0: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA92E0u)) return;
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
label_80CA92E4:
    ctx->pc = 0x80CA92E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA92E4: stb     r31, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA92E8:
    ctx->pc = 0x80CA92E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA92E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA92E8: lwz     r31, 12(r1)
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
label_80CA92EC:
    ctx->pc = 0x80CA92ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA92EC: lwz     r30, 8(r1)
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
label_80CA92F0:
    ctx->pc = 0x80CA92F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA92F0: lwz     r0, 20(r1)
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
label_80CA92F4:
    ctx->pc = 0x80CA92F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA92F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA92F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA92F8:
    ctx->pc = 0x80CA92F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92F8u)) return;
    // 80CA92F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA92FC:
    ctx->pc = 0x80CA92FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA92FCu)) return;
    // 80CA92FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9300:
    ctx->pc = 0x80CA9300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9300: lwz     r3, 32(r3)
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
label_80CA9304:
    ctx->pc = 0x80CA9304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9304: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA9304u)) return;
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
label_80CA9308:
    ctx->pc = 0x80CA9308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9308: stfs     f2, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA9308u)) return;
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
label_80CA930C:
    ctx->pc = 0x80CA930Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA930Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA930C: stfs     f3, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA930Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9310:
    ctx->pc = 0x80CA9310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9310u)) return;
    // 80CA9310: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9314:
    ctx->pc = 0x80CA9314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9314: lwz     r3, 32(r3)
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
label_80CA9318:
    ctx->pc = 0x80CA9318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9318: stfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA9318u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA931C:
    ctx->pc = 0x80CA931Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA931Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA931C: stw     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9320:
    ctx->pc = 0x80CA9320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9320u)) return;
    // 80CA9320: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9324:
    ctx->pc = 0x80CA9324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9324: lwz     r3, 32(r3)
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
label_80CA9328:
    ctx->pc = 0x80CA9328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA9328: stfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA9328u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA932C:
    ctx->pc = 0x80CA932Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA932Cu)) return;
    // 80CA932C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9330:
    ctx->pc = 0x80CA9330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9330: lwz     r3, 32(r3)
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
label_80CA9334:
    ctx->pc = 0x80CA9334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA9334: stw     r4, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9338:
    ctx->pc = 0x80CA9338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9338u)) return;
    // 80CA9338: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA933C:
    ctx->pc = 0x80CA933Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA933Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CA933C: rlwinm r5, r5, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
    }

label_80CA9340:
    ctx->pc = 0x80CA9340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9340: lwz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9344:
    ctx->pc = 0x80CA9344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9344u)) return;
    // 80CA9344: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80CA9348:
    ctx->pc = 0x80CA9348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA9348: stb     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA934C:
    ctx->pc = 0x80CA934Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA934Cu)) return;
    // 80CA934C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9350:
    ctx->pc = 0x80CA9350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CA9350: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80CA9354:
    ctx->pc = 0x80CA9354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9354u)) return;
    // 80CA9354: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9358:
    ctx->pc = 0x80CA9358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9358u)) return;
    // 80CA9358: addi    r3, r3, 18376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18376);

label_80CA935C:
    ctx->pc = 0x80CA935Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA935Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA935C: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9360:
    ctx->pc = 0x80CA9360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9360u)) return;
    // 80CA9360: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9364:
    ctx->pc = 0x80CA9364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9364: stwu     r1, -16(r1)
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
label_80CA9368:
    ctx->pc = 0x80CA9368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9368: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA936C:
    ctx->pc = 0x80CA936Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA936Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA936C: stw     r0, 20(r1)
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
label_80CA9370:
    ctx->pc = 0x80CA9370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9370u)) return;
    // 80CA9370: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80CA9374:
    ctx->pc = 0x80CA9374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9374u)) return;
    // 80CA9374: bl      0x80606508
    {
            ctx->lr = 0x80CA9378u;
            ctx->pc = 0x80606508u;
            return;
    }

label_80CA9378:
    ctx->pc = 0x80CA9378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9378: lwz     r0, 20(r1)
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
label_80CA937C:
    ctx->pc = 0x80CA937Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA937Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA937C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9380:
    ctx->pc = 0x80CA9380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9380u)) return;
    // 80CA9380: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA9384:
    ctx->pc = 0x80CA9384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9384u)) return;
    // 80CA9384: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9388:
    ctx->pc = 0x80CA9388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9388: stwu     r1, -32(r1)
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
label_80CA938C:
    ctx->pc = 0x80CA938Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA938Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA938C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9390:
    ctx->pc = 0x80CA9390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9390: stw     r0, 36(r1)
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
label_80CA9394:
    ctx->pc = 0x80CA9394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9394u)) return;
    // 80CA9394: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA9398:
    ctx->pc = 0x80CA9398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9398u)) return;
    // 80CA9398: bl      0x80006DD4
    {
            ctx->lr = 0x80CA939Cu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80CA939C:
    ctx->pc = 0x80CA939Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA939Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA939C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CA93A0:
    ctx->pc = 0x80CA93A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93A0u)) return;
    // 80CA93A0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CA93A4:
    ctx->pc = 0x80CA93A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93A4u)) return;
    // 80CA93A4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CA93A8:
    ctx->pc = 0x80CA93A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93A8u)) return;
    // 80CA93A8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80CA93AC:
    ctx->pc = 0x80CA93ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93ACu)) return;
    // 80CA93AC: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80CA93B0:
    ctx->pc = 0x80CA93B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93B0u)) return;
    // 80CA93B0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CA93B4:
    ctx->pc = 0x80CA93B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93B4u)) return;
    // 80CA93B4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CA93B8:
    ctx->pc = 0x80CA93B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93B8u)) return;
    // 80CA93B8: lis     r5, -32565
    ctx->gpr[5] = ((u32)(s32)(-32565) << 16);

label_80CA93BC:
    ctx->pc = 0x80CA93BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93BCu)) return;
    // 80CA93BC: addi    r5, r5, -27544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27544);

label_80CA93C0:
    ctx->pc = 0x80CA93C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93C0u)) return;
    // 80CA93C0: bl      0x8050FD60
    {
            ctx->lr = 0x80CA93C4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CA93C4:
    ctx->pc = 0x80CA93C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA93C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CA93C4: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA93C8:
    ctx->pc = 0x80CA93C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93C8u)) return;
    // 80CA93C8: addi    r4, r4, 18456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18456);

label_80CA93CC:
    ctx->pc = 0x80CA93CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA93CC: stw     r3, 0(r4)
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
label_80CA93D0:
    ctx->pc = 0x80CA93D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93D0u)) return;
    // 80CA93D0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80CA93D4:
    ctx->pc = 0x80CA93D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93D4u)) return;
    // 80CA93D4: bl      0x8050EF60
    {
            ctx->lr = 0x80CA93D8u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80CA93D8:
    ctx->pc = 0x80CA93D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA93D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80CA93D8: lis     r4, -27393
    ctx->gpr[4] = ((u32)(s32)(-27393) << 16);

label_80CA93DC:
    ctx->pc = 0x80CA93DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93DCu)) return;
    // 80CA93DC: addi    r4, r4, 18456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18456);

label_80CA93E0:
    ctx->pc = 0x80CA93E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CA93E0: lwz     r4, 0(r4)
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
label_80CA93E4:
    ctx->pc = 0x80CA93E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA93E4: lwz     r4, 32(r4)
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
label_80CA93E8:
    ctx->pc = 0x80CA93E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA93E8: stw     r3, 16(r4)
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
label_80CA93EC:
    ctx->pc = 0x80CA93ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93ECu)) return;
    // 80CA93EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CA93F0:
    ctx->pc = 0x80CA93F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA93F0: stb     r0, 0(r4)
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
label_80CA93F4:
    ctx->pc = 0x80CA93F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA93F4: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA93F8:
    ctx->pc = 0x80CA93F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA93F8: stb     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA93FC:
    ctx->pc = 0x80CA93FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA93FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA93FC: stb     r28, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9400:
    ctx->pc = 0x80CA9400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9400: stb     r29, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9404:
    ctx->pc = 0x80CA9404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9404: stb     r30, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9408:
    ctx->pc = 0x80CA9408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9408: stw     r31, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA940C:
    ctx->pc = 0x80CA940Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA940Cu)) return;
    // 80CA940C: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA9410:
    ctx->pc = 0x80CA9410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9410u)) return;
    // 80CA9410: bl      0x80006E20
    {
            ctx->lr = 0x80CA9414u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80CA9414:
    ctx->pc = 0x80CA9414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9414: lwz     r0, 36(r1)
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
label_80CA9418:
    ctx->pc = 0x80CA9418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA9418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9418: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA941C:
    ctx->pc = 0x80CA941Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA941Cu)) return;
    // 80CA941C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA9420:
    ctx->pc = 0x80CA9420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9420u)) return;
    // 80CA9420: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9424:
    ctx->pc = 0x80CA9424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9424: stwu     r1, -16(r1)
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
label_80CA9428:
    ctx->pc = 0x80CA9428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA9428: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA942C:
    ctx->pc = 0x80CA942Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA942Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA942C: stw     r0, 20(r1)
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
label_80CA9430:
    ctx->pc = 0x80CA9430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9430u)) return;
    // 80CA9430: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9434:
    ctx->pc = 0x80CA9434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9434u)) return;
    // 80CA9434: addi    r3, r3, 18456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18456);

label_80CA9438:
    ctx->pc = 0x80CA9438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9438: lwz     r3, 0(r3)
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
label_80CA943C:
    ctx->pc = 0x80CA943Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA943Cu)) return;
    // 80CA943C: cmplwi  r3, 0x0000
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

label_80CA9440:
    ctx->pc = 0x80CA9440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9440u)) return;
    // 80CA9440: bc    12, 2, 0x80CA9458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA9458;
        }
    }

label_80CA9444:
    ctx->pc = 0x80CA9444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA9444: bl      0x8050F9E0
    {
            ctx->lr = 0x80CA9448u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CA9448:
    ctx->pc = 0x80CA9448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CA9448: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CA944C:
    ctx->pc = 0x80CA944Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA944Cu)) return;
    // 80CA944C: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9450:
    ctx->pc = 0x80CA9450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9450u)) return;
    // 80CA9450: addi    r3, r3, 18456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18456);

label_80CA9454:
    ctx->pc = 0x80CA9454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA9454: stw     r0, 0(r3)
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
label_80CA9458:
    ctx->pc = 0x80CA9458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9458: lwz     r0, 20(r1)
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
label_80CA945C:
    ctx->pc = 0x80CA945Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA945Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA945C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9460:
    ctx->pc = 0x80CA9460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9460u)) return;
    // 80CA9460: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA9464:
    ctx->pc = 0x80CA9464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9464u)) return;
    // 80CA9464: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9468:
    ctx->pc = 0x80CA9468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CA9468: lis     r4, -32565
    ctx->gpr[4] = ((u32)(s32)(-32565) << 16);

label_80CA946C:
    ctx->pc = 0x80CA946Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA946Cu)) return;
    // 80CA946C: addi    r0, r4, -27504
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-27504);

label_80CA9470:
    ctx->pc = 0x80CA9470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9470: stw     r0, 16(r3)
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
label_80CA9474:
    ctx->pc = 0x80CA9474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9474u)) return;
    // 80CA9474: lis     r4, -32565
    ctx->gpr[4] = ((u32)(s32)(-32565) << 16);

label_80CA9478:
    ctx->pc = 0x80CA9478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9478u)) return;
    // 80CA9478: addi    r0, r4, -26920
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-26920);

label_80CA947C:
    ctx->pc = 0x80CA947Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA947Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA947C: stw     r0, 20(r3)
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
label_80CA9480:
    ctx->pc = 0x80CA9480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9480u)) return;
    // 80CA9480: lis     r4, -32565
    ctx->gpr[4] = ((u32)(s32)(-32565) << 16);

label_80CA9484:
    ctx->pc = 0x80CA9484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9484u)) return;
    // 80CA9484: addi    r0, r4, -26864
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-26864);

label_80CA9488:
    ctx->pc = 0x80CA9488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA9488: stw     r0, 24(r3)
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
label_80CA948C:
    ctx->pc = 0x80CA948Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA948Cu)) return;
    // 80CA948C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9490:
    ctx->pc = 0x80CA9490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9490: stwu     r1, -16(r1)
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
label_80CA9494:
    ctx->pc = 0x80CA9494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9494: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9498:
    ctx->pc = 0x80CA9498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA9498: stw     r0, 20(r1)
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
label_80CA949C:
    ctx->pc = 0x80CA949Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA949Cu)) return;
    // 80CA949C: bl      0x80CA96D8
    {
            ctx->lr = 0x80CA94A0u;
            goto label_80CA96D8;
    }

label_80CA94A0:
    ctx->pc = 0x80CA94A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA94A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA94A0: lwz     r0, 20(r1)
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
label_80CA94A4:
    ctx->pc = 0x80CA94A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA94A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA94A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94A8:
    ctx->pc = 0x80CA94A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94A8u)) return;
    // 80CA94A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA94AC:
    ctx->pc = 0x80CA94ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94ACu)) return;
    // 80CA94AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA94B0:
    ctx->pc = 0x80CA94B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA94B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CA94B0: stwu     r1, -128(r1)
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
label_80CA94B4:
    ctx->pc = 0x80CA94B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CA94B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94B8:
    ctx->pc = 0x80CA94B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CA94B8: stw     r0, 132(r1)
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
label_80CA94BC:
    ctx->pc = 0x80CA94BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CA94BC: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA94BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94C0:
    ctx->pc = 0x80CA94C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CA94C0: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CA94C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CA94C0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94C4:
    ctx->pc = 0x80CA94C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CA94C4: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA94C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94C8:
    ctx->pc = 0x80CA94C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CA94C8: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CA94C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CA94C8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94CC:
    ctx->pc = 0x80CA94CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CA94CC: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA94CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94D0:
    ctx->pc = 0x80CA94D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CA94D0: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CA94D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80CA94D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94D4:
    ctx->pc = 0x80CA94D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CA94D4: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94D8:
    ctx->pc = 0x80CA94D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CA94D8: stw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94DC:
    ctx->pc = 0x80CA94DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CA94DC: stw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94E0:
    ctx->pc = 0x80CA94E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA94E0: stw     r28, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94E4:
    ctx->pc = 0x80CA94E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA94E4: lwz     r3, 32(r3)
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
label_80CA94E8:
    ctx->pc = 0x80CA94E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA94E8: lwz     r30, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA94EC:
    ctx->pc = 0x80CA94ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94ECu)) return;
    // 80CA94EC: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA94F0:
    ctx->pc = 0x80CA94F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA94F0: stw     r0, 32(r1)
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
label_80CA94F4:
    ctx->pc = 0x80CA94F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94F4u)) return;
    // 80CA94F4: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_80CA94F8:
    ctx->pc = 0x80CA94F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA94F8: stw     r0, 36(r1)
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
label_80CA94FC:
    ctx->pc = 0x80CA94FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA94FCu)) return;
    // 80CA94FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CA9500:
    ctx->pc = 0x80CA9500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9500: stw     r0, 40(r1)
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
label_80CA9504:
    ctx->pc = 0x80CA9504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9504u)) return;
    // 80CA9504: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80CA9508:
    ctx->pc = 0x80CA9508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CA9508: stw     r0, 44(r1)
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
label_80CA950C:
    ctx->pc = 0x80CA950Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA950Cu)) return;
    // 80CA950C: bl      0x80450D68
    {
            ctx->lr = 0x80CA9510u;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80CA9510:
    ctx->pc = 0x80CA9510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA9510: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CA9514:
    ctx->pc = 0x80CA9514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9514u)) return;
    // 80CA9514: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80CA9518:
    ctx->pc = 0x80CA9518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9518u)) return;
    // 80CA9518: bl      0x8060F4F8
    {
            ctx->lr = 0x80CA951Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CA951C:
    ctx->pc = 0x80CA951Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA951Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CA951C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CA9520:
    ctx->pc = 0x80CA9520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9520u)) return;
    // 80CA9520: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80CA9524:
    ctx->pc = 0x80CA9524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9524u)) return;
    // 80CA9524: bl      0x8060F4F8
    {
            ctx->lr = 0x80CA9528u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CA9528:
    ctx->pc = 0x80CA9528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CA9528: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA952C:
    ctx->pc = 0x80CA952Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA952Cu)) return;
    // 80CA952C: addi    r3, r3, 18460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18460);

label_80CA9530:
    ctx->pc = 0x80CA9530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CA9530: lwz     r29, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9534:
    ctx->pc = 0x80CA9534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9534u)) return;
    // 80CA9534: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9538:
    ctx->pc = 0x80CA9538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9538u)) return;
    // 80CA9538: addi    r3, r3, -11960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11960);

label_80CA953C:
    ctx->pc = 0x80CA953Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA953Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA953C: lfs     f29, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA953Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9540:
    ctx->pc = 0x80CA9540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9540u)) return;
    // 80CA9540: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9544:
    ctx->pc = 0x80CA9544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9544u)) return;
    // 80CA9544: addi    r3, r3, -11944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11944);

label_80CA9548:
    ctx->pc = 0x80CA9548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9548: lfd     f30, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA9548u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA954C:
    ctx->pc = 0x80CA954Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA954Cu)) return;
    // 80CA954C: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_80CA9550:
    ctx->pc = 0x80CA9550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9550u)) return;
    // 80CA9550: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9554:
    ctx->pc = 0x80CA9554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9554u)) return;
    // 80CA9554: addi    r3, r3, -11956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11956);

label_80CA9558:
    ctx->pc = 0x80CA9558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9558: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA9558u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80CA955C:
    ctx->pc = 0x80CA955Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA955Cu)) return;
    // 80CA955C: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9560:
    ctx->pc = 0x80CA9560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9560u)) return;
    // 80CA9560: addi    r28, r3, -11952
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-11952);

label_80CA9564:
    ctx->pc = 0x80CA9564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9564u)) return;
    // 80CA9564: b       0x80CA962C
    {
            goto label_80CA962C;
    }

label_80CA9568:
    ctx->pc = 0x80CA9568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 46u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 46u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80CA9568: lwz     r3, 32(r1)
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
label_80CA956C:
    ctx->pc = 0x80CA956Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA956Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80CA956C: stfs     f29, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA956Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9570:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9570u)) return;
    // 80CA9570: xoris   r4, r29, 0x8000
    ctx->gpr[4] = ctx->gpr[29] ^ (0x8000u << 16);

label_80CA9574:
    ctx->pc = 0x80CA9574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80CA9574: stw     r4, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9578:
    ctx->pc = 0x80CA9578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80CA9578: stw     r31, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA957C:
    ctx->pc = 0x80CA957Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA957Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80CA957C: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA957Cu)) return;
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
label_80CA9580:
    ctx->pc = 0x80CA9580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9580u)) return;
    // 80CA9580: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80CA9580u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_80CA9584:
    ctx->pc = 0x80CA9584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80CA9584: lwz     r3, 32(r1)
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
label_80CA9588:
    ctx->pc = 0x80CA9588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80CA9588: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA9588u)) return;
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
label_80CA958C:
    ctx->pc = 0x80CA958Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA958Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80CA958C: lbz     r0, 0(r30)
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
label_80CA9590:
    ctx->pc = 0x80CA9590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80CA9590: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9594:
    ctx->pc = 0x80CA9594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CA9594: stb     r0, 0(r3)
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
label_80CA9598:
    ctx->pc = 0x80CA9598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80CA9598: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA959C:
    ctx->pc = 0x80CA959Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA959Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CA959C: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95A0:
    ctx->pc = 0x80CA95A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80CA95A0: stb     r0, 1(r3)
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
label_80CA95A4:
    ctx->pc = 0x80CA95A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CA95A4: lbz     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95A8:
    ctx->pc = 0x80CA95A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CA95A8: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95AC:
    ctx->pc = 0x80CA95ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CA95AC: stb     r0, 2(r3)
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
label_80CA95B0:
    ctx->pc = 0x80CA95B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CA95B0: lbz     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95B4:
    ctx->pc = 0x80CA95B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80CA95B4: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95B8:
    ctx->pc = 0x80CA95B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CA95B8: stb     r0, 3(r3)
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
label_80CA95BC:
    ctx->pc = 0x80CA95BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CA95BC: lwz     r3, 32(r1)
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
label_80CA95C0:
    ctx->pc = 0x80CA95C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CA95C0: stfs     f31, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA95C0u)) return;
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
label_80CA95C4:
    ctx->pc = 0x80CA95C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CA95C4: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95C8:
    ctx->pc = 0x80CA95C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CA95C8: stw     r31, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95CC:
    ctx->pc = 0x80CA95CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CA95CC: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA95CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95D0:
    ctx->pc = 0x80CA95D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95D0u)) return;
    // 80CA95D0: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80CA95D0u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_80CA95D4:
    ctx->pc = 0x80CA95D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CA95D4: lwz     r3, 32(r1)
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
label_80CA95D8:
    ctx->pc = 0x80CA95D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CA95D8: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CA95D8u)) return;
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
label_80CA95DC:
    ctx->pc = 0x80CA95DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CA95DC: lbz     r0, 0(r30)
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
label_80CA95E0:
    ctx->pc = 0x80CA95E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CA95E0: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95E4:
    ctx->pc = 0x80CA95E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CA95E4: stb     r0, 4(r3)
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
label_80CA95E8:
    ctx->pc = 0x80CA95E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CA95E8: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95EC:
    ctx->pc = 0x80CA95ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CA95EC: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95F0:
    ctx->pc = 0x80CA95F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA95F0: stb     r0, 5(r3)
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
label_80CA95F4:
    ctx->pc = 0x80CA95F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA95F4: lbz     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95F8:
    ctx->pc = 0x80CA95F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA95F8: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA95FC:
    ctx->pc = 0x80CA95FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA95FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA95FC: stb     r0, 6(r3)
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
label_80CA9600:
    ctx->pc = 0x80CA9600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9600: lbz     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9604:
    ctx->pc = 0x80CA9604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA9604: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9608:
    ctx->pc = 0x80CA9608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA9608: stb     r0, 7(r3)
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
label_80CA960C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA960Cu)) return;
    // 80CA960C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80CA9610:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9610u)) return;
    // 80CA9610: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80CA9614:
    ctx->pc = 0x80CA9614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9614: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x80CA9614u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9618:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9618u)) return;
    // 80CA9618: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80CA961C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA961Cu)) return;
    // 80CA961C: bl      0x800505F8
    {
            ctx->lr = 0x80CA9620u;
            ctx->pc = 0x800505F8u;
            return;
    }

label_80CA9620:
    ctx->pc = 0x80CA9620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9620: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9624:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9624u)) return;
    // 80CA9624: add   r29, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_80CA9628:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9628u)) return;
    // 80CA9628: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80CA962C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA962Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA962C: cmpwi   r29, 480
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(480);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CA9630:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9630u)) return;
    // 80CA9630: bc    12, 0, 0x80CA9568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CA9568u;
                return;
            }
            goto label_80CA9568;
        }
    }

label_80CA9634:
    ctx->pc = 0x80CA9634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CA9634: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CA9634u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CA9634u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9638:
    ctx->pc = 0x80CA9638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CA9638: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA9638u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA963C:
    ctx->pc = 0x80CA963Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA963Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CA963C: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CA963Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CA963Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9640:
    ctx->pc = 0x80CA9640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA9640: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA9640u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9644:
    ctx->pc = 0x80CA9644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CA9644: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CA9644u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80CA9644u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9648:
    ctx->pc = 0x80CA9648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CA9648: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CA9648u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA964C:
    ctx->pc = 0x80CA964Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA964Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CA964C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9650:
    ctx->pc = 0x80CA9650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9650: lwz     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9654:
    ctx->pc = 0x80CA9654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA9654: lwz     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9658:
    ctx->pc = 0x80CA9658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA9658: lwz     r28, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA965C:
    ctx->pc = 0x80CA965Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA965Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA965C: lwz     r0, 132(r1)
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
label_80CA9660:
    ctx->pc = 0x80CA9660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA9660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9660: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9664:
    ctx->pc = 0x80CA9664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9664u)) return;
    // 80CA9664: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80CA9668:
    ctx->pc = 0x80CA9668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9668u)) return;
    // 80CA9668: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA966C:
    ctx->pc = 0x80CA966Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA966Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CA966C: stwu     r1, -16(r1)
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
label_80CA9670:
    ctx->pc = 0x80CA9670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CA9670: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9674:
    ctx->pc = 0x80CA9674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CA9674: stw     r0, 20(r1)
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
label_80CA9678:
    ctx->pc = 0x80CA9678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9678u)) return;
    // 80CA9678: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CA967C:
    ctx->pc = 0x80CA967Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA967Cu)) return;
    // 80CA967C: lis     r3, -27393
    ctx->gpr[3] = ((u32)(s32)(-27393) << 16);

label_80CA9680:
    ctx->pc = 0x80CA9680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9680u)) return;
    // 80CA9680: addi    r6, r3, 18460
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(18460);

label_80CA9684:
    ctx->pc = 0x80CA9684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA9684: lwz     r3, 0(r6)
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
label_80CA9688:
    ctx->pc = 0x80CA9688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9688u)) return;
    // 80CA9688: addi    r5, r3, 1
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(1);

label_80CA968C:
    ctx->pc = 0x80CA968Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA968Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA968C: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9690:
    ctx->pc = 0x80CA9690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9690: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9694:
    ctx->pc = 0x80CA9694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA9694: lwz     r3, 16(r3)
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
label_80CA9698:
    ctx->pc = 0x80CA9698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9698: lwz     r0, 4(r3)
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
label_80CA969C:
    ctx->pc = 0x80CA969Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA969Cu)) return;
    // 80CA969C: cmpw    r5, r0
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

label_80CA96A0:
    ctx->pc = 0x80CA96A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96A0u)) return;
    // 80CA96A0: bc    4, 2, 0x80CA96AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CA96AC;
        }
    }

label_80CA96A4:
    ctx->pc = 0x80CA96A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA96A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CA96A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CA96A8:
    ctx->pc = 0x80CA96A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CA96A8: stw     r0, 0(r6)
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
label_80CA96AC:
    ctx->pc = 0x80CA96ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA96ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CA96AC: lis     r3, -32565
    ctx->gpr[3] = ((u32)(s32)(-32565) << 16);

label_80CA96B0:
    ctx->pc = 0x80CA96B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96B0u)) return;
    // 80CA96B0: addi    r3, r3, -27472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27472);

label_80CA96B4:
    ctx->pc = 0x80CA96B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96B4u)) return;
    // 80CA96B4: lis     r5, -27393
    ctx->gpr[5] = ((u32)(s32)(-27393) << 16);

label_80CA96B8:
    ctx->pc = 0x80CA96B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96B8u)) return;
    // 80CA96B8: addi    r5, r5, -11936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11936);

label_80CA96BC:
    ctx->pc = 0x80CA96BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA96BC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CA96BCu)) return;
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
label_80CA96C0:
    ctx->pc = 0x80CA96C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96C0u)) return;
    // 80CA96C0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80CA96C4:
    ctx->pc = 0x80CA96C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96C4u)) return;
    // 80CA96C4: bl      0x80605D44
    {
            ctx->lr = 0x80CA96C8u;
            ctx->pc = 0x80605D44u;
            return;
    }

label_80CA96C8:
    ctx->pc = 0x80CA96C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA96C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA96C8: lwz     r0, 20(r1)
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
label_80CA96CC:
    ctx->pc = 0x80CA96CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA96CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA96CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA96D0:
    ctx->pc = 0x80CA96D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96D0u)) return;
    // 80CA96D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA96D4:
    ctx->pc = 0x80CA96D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96D4u)) return;
    // 80CA96D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA96D8:
    ctx->pc = 0x80CA96D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA96D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CA96D8: stwu     r1, -16(r1)
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
label_80CA96DC:
    ctx->pc = 0x80CA96DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA96DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA96E0:
    ctx->pc = 0x80CA96E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA96E0: stw     r0, 20(r1)
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
label_80CA96E4:
    ctx->pc = 0x80CA96E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA96E4: lwz     r4, 32(r3)
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
label_80CA96E8:
    ctx->pc = 0x80CA96E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA96E8: lbz     r0, 0(r4)
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
label_80CA96EC:
    ctx->pc = 0x80CA96ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96ECu)) return;
    // 80CA96EC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CA96F0:
    ctx->pc = 0x80CA96F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96F0u)) return;
    // 80CA96F0: cmpwi   r0, 0
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

label_80CA96F4:
    ctx->pc = 0x80CA96F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA96F4u)) return;
    // 80CA96F4: bc    12, 2, 0x80CA96FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA96FC;
        }
    }

label_80CA96F8:
    ctx->pc = 0x80CA96F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA96F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA96F8: b       0x80CA9700
    {
            goto label_80CA9700;
    }

label_80CA96FC:
    ctx->pc = 0x80CA96FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA96FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA96FC: bl      0x80CA966C
    {
            ctx->lr = 0x80CA9700u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CA966Cu;
                return;
            }
            goto label_80CA966C;
    }

label_80CA9700:
    ctx->pc = 0x80CA9700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9700: lwz     r0, 20(r1)
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
label_80CA9704:
    ctx->pc = 0x80CA9704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA9704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9704: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9708:
    ctx->pc = 0x80CA9708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9708u)) return;
    // 80CA9708: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA970C:
    ctx->pc = 0x80CA970Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA970Cu)) return;
    // 80CA970C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

label_80CA9710:
    ctx->pc = 0x80CA9710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CA9710: stwu     r1, -16(r1)
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
label_80CA9714:
    ctx->pc = 0x80CA9714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CA9714: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9718:
    ctx->pc = 0x80CA9718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9718: stw     r0, 20(r1)
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
label_80CA971C:
    ctx->pc = 0x80CA971Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA971Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CA971C: lwz     r3, 32(r3)
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
label_80CA9720:
    ctx->pc = 0x80CA9720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9720: lwz     r3, 16(r3)
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
label_80CA9724:
    ctx->pc = 0x80CA9724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9724u)) return;
    // 80CA9724: cmplwi  r3, 0x0000
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

label_80CA9728:
    ctx->pc = 0x80CA9728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9728u)) return;
    // 80CA9728: bc    12, 2, 0x80CA9730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CA9730;
        }
    }

label_80CA972C:
    ctx->pc = 0x80CA972Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA972Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CA972C: bl      0x8050ED40
    {
            ctx->lr = 0x80CA9730u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CA9730:
    ctx->pc = 0x80CA9730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CA9730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CA9730: lwz     r0, 20(r1)
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
label_80CA9734:
    ctx->pc = 0x80CA9734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CA9734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CA9734: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CA9738:
    ctx->pc = 0x80CA9738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA9738u)) return;
    // 80CA9738: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CA973C:
    ctx->pc = 0x80CA973Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CA973Cu)) return;
    // 80CA973C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CA82E0;
        }
    }

    ctx->pc = 0x80CA9740u;
    return;
return_dispatch_80CA82E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CA8318u: goto label_80CA8318;
    case 0x80CA831Cu: goto label_80CA831C;
    case 0x80CA8320u: goto label_80CA8320;
    case 0x80CA8324u: goto label_80CA8324;
    case 0x80CA832Cu: goto label_80CA832C;
    case 0x80CA8334u: goto label_80CA8334;
    case 0x80CA833Cu: goto label_80CA833C;
    case 0x80CA8364u: goto label_80CA8364;
    case 0x80CA836Cu: goto label_80CA836C;
    case 0x80CA837Cu: goto label_80CA837C;
    case 0x80CA8384u: goto label_80CA8384;
    case 0x80CA8388u: goto label_80CA8388;
    case 0x80CA8390u: goto label_80CA8390;
    case 0x80CA83B8u: goto label_80CA83B8;
    case 0x80CA83C0u: goto label_80CA83C0;
    case 0x80CA83E8u: goto label_80CA83E8;
    case 0x80CA8418u: goto label_80CA8418;
    case 0x80CA8434u: goto label_80CA8434;
    case 0x80CA843Cu: goto label_80CA843C;
    case 0x80CA8464u: goto label_80CA8464;
    case 0x80CA846Cu: goto label_80CA846C;
    case 0x80CA849Cu: goto label_80CA849C;
    case 0x80CA84B8u: goto label_80CA84B8;
    case 0x80CA84E8u: goto label_80CA84E8;
    case 0x80CA8504u: goto label_80CA8504;
    case 0x80CA850Cu: goto label_80CA850C;
    case 0x80CA8514u: goto label_80CA8514;
    case 0x80CA853Cu: goto label_80CA853C;
    case 0x80CA8544u: goto label_80CA8544;
    case 0x80CA854Cu: goto label_80CA854C;
    case 0x80CA8574u: goto label_80CA8574;
    case 0x80CA857Cu: goto label_80CA857C;
    case 0x80CA8584u: goto label_80CA8584;
    case 0x80CA85ACu: goto label_80CA85AC;
    case 0x80CA85DCu: goto label_80CA85DC;
    case 0x80CA85F8u: goto label_80CA85F8;
    case 0x80CA8628u: goto label_80CA8628;
    case 0x80CA8644u: goto label_80CA8644;
    case 0x80CA864Cu: goto label_80CA864C;
    case 0x80CA8674u: goto label_80CA8674;
    case 0x80CA867Cu: goto label_80CA867C;
    case 0x80CA8684u: goto label_80CA8684;
    case 0x80CA86ACu: goto label_80CA86AC;
    case 0x80CA86B4u: goto label_80CA86B4;
    case 0x80CA86BCu: goto label_80CA86BC;
    case 0x80CA86E4u: goto label_80CA86E4;
    case 0x80CA86ECu: goto label_80CA86EC;
    case 0x80CA86F0u: goto label_80CA86F0;
    case 0x80CA86F8u: goto label_80CA86F8;
    case 0x80CA8708u: goto label_80CA8708;
    case 0x80CA8718u: goto label_80CA8718;
    case 0x80CA873Cu: goto label_80CA873C;
    case 0x80CA875Cu: goto label_80CA875C;
    case 0x80CA8764u: goto label_80CA8764;
    case 0x80CA8784u: goto label_80CA8784;
    case 0x80CA8788u: goto label_80CA8788;
    case 0x80CA8790u: goto label_80CA8790;
    case 0x80CA8798u: goto label_80CA8798;
    case 0x80CA87C8u: goto label_80CA87C8;
    case 0x80CA87E0u: goto label_80CA87E0;
    case 0x80CA87E8u: goto label_80CA87E8;
    case 0x80CA8810u: goto label_80CA8810;
    case 0x80CA8818u: goto label_80CA8818;
    case 0x80CA8840u: goto label_80CA8840;
    case 0x80CA8848u: goto label_80CA8848;
    case 0x80CA8878u: goto label_80CA8878;
    case 0x80CA8894u: goto label_80CA8894;
    case 0x80CA88C4u: goto label_80CA88C4;
    case 0x80CA88E0u: goto label_80CA88E0;
    case 0x80CA88E8u: goto label_80CA88E8;
    case 0x80CA8910u: goto label_80CA8910;
    case 0x80CA8918u: goto label_80CA8918;
    case 0x80CA8928u: goto label_80CA8928;
    case 0x80CA8930u: goto label_80CA8930;
    case 0x80CA8934u: goto label_80CA8934;
    case 0x80CA893Cu: goto label_80CA893C;
    case 0x80CA8964u: goto label_80CA8964;
    case 0x80CA896Cu: goto label_80CA896C;
    case 0x80CA8970u: goto label_80CA8970;
    case 0x80CA897Cu: goto label_80CA897C;
    case 0x80CA8984u: goto label_80CA8984;
    case 0x80CA89ACu: goto label_80CA89AC;
    case 0x80CA89B4u: goto label_80CA89B4;
    case 0x80CA89C4u: goto label_80CA89C4;
    case 0x80CA89CCu: goto label_80CA89CC;
    case 0x80CA89D0u: goto label_80CA89D0;
    case 0x80CA89D4u: goto label_80CA89D4;
    case 0x80CA89ECu: goto label_80CA89EC;
    case 0x80CA8A00u: goto label_80CA8A00;
    case 0x80CA8A28u: goto label_80CA8A28;
    case 0x80CA8A88u: goto label_80CA8A88;
    case 0x80CA8AC8u: goto label_80CA8AC8;
    case 0x80CA8B08u: goto label_80CA8B08;
    case 0x80CA8B64u: goto label_80CA8B64;
    case 0x80CA8B88u: goto label_80CA8B88;
    case 0x80CA8C24u: goto label_80CA8C24;
    case 0x80CA8C74u: goto label_80CA8C74;
    case 0x80CA8CC4u: goto label_80CA8CC4;
    case 0x80CA8D10u: goto label_80CA8D10;
    case 0x80CA8D94u: goto label_80CA8D94;
    case 0x80CA8DB8u: goto label_80CA8DB8;
    case 0x80CA8E34u: goto label_80CA8E34;
    case 0x80CA8E9Cu: goto label_80CA8E9C;
    case 0x80CA8F04u: goto label_80CA8F04;
    case 0x80CA8F54u: goto label_80CA8F54;
    case 0x80CA8FA4u: goto label_80CA8FA4;
    case 0x80CA8FE8u: goto label_80CA8FE8;
    case 0x80CA9010u: goto label_80CA9010;
    case 0x80CA901Cu: goto label_80CA901C;
    case 0x80CA9028u: goto label_80CA9028;
    case 0x80CA9034u: goto label_80CA9034;
    case 0x80CA90D0u: goto label_80CA90D0;
    case 0x80CA90DCu: goto label_80CA90DC;
    case 0x80CA90E4u: goto label_80CA90E4;
    case 0x80CA9124u: goto label_80CA9124;
    case 0x80CA9138u: goto label_80CA9138;
    case 0x80CA913Cu: goto label_80CA913C;
    case 0x80CA9148u: goto label_80CA9148;
    case 0x80CA9154u: goto label_80CA9154;
    case 0x80CA9208u: goto label_80CA9208;
    case 0x80CA9214u: goto label_80CA9214;
    case 0x80CA9250u: goto label_80CA9250;
    case 0x80CA9378u: goto label_80CA9378;
    case 0x80CA939Cu: goto label_80CA939C;
    case 0x80CA93C4u: goto label_80CA93C4;
    case 0x80CA93D8u: goto label_80CA93D8;
    case 0x80CA9414u: goto label_80CA9414;
    case 0x80CA9448u: goto label_80CA9448;
    case 0x80CA94A0u: goto label_80CA94A0;
    case 0x80CA9510u: goto label_80CA9510;
    case 0x80CA951Cu: goto label_80CA951C;
    case 0x80CA9528u: goto label_80CA9528;
    case 0x80CA9620u: goto label_80CA9620;
    case 0x80CA96C8u: goto label_80CA96C8;
    case 0x80CA9700u: goto label_80CA9700;
    case 0x80CA9730u: goto label_80CA9730;
    default: return;
    }
}

