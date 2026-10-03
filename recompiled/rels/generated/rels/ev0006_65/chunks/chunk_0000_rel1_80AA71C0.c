// DolRecomp output
#include "../generated.h"

void func_80AA71C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80AA71C0[2030] = {
        &&label_80AA71C0,
        &&label_80AA71C4,
        &&label_80AA71C8,
        &&label_80AA71CC,
        &&label_80AA71D0,
        &&label_80AA71D4,
        &&label_80AA71D8,
        &&label_80AA71DC,
        &&label_80AA71E0,
        &&label_80AA71E4,
        &&label_80AA71E8,
        &&label_80AA71EC,
        &&label_80AA71F0,
        &&label_80AA71F4,
        &&label_80AA71F8,
        &&label_80AA71FC,
        &&label_80AA7200,
        &&label_80AA7204,
        &&label_80AA7208,
        &&label_80AA720C,
        &&label_80AA7210,
        &&label_80AA7214,
        &&label_80AA7218,
        &&label_80AA721C,
        &&label_80AA7220,
        &&label_80AA7224,
        &&label_80AA7228,
        &&label_80AA722C,
        &&label_80AA7230,
        &&label_80AA7234,
        &&label_80AA7238,
        &&label_80AA723C,
        &&label_80AA7240,
        &&label_80AA7244,
        &&label_80AA7248,
        &&label_80AA724C,
        &&label_80AA7250,
        &&label_80AA7254,
        &&label_80AA7258,
        &&label_80AA725C,
        &&label_80AA7260,
        &&label_80AA7264,
        &&label_80AA7268,
        &&label_80AA726C,
        &&label_80AA7270,
        &&label_80AA7274,
        &&label_80AA7278,
        &&label_80AA727C,
        &&label_80AA7280,
        &&label_80AA7284,
        &&label_80AA7288,
        &&label_80AA728C,
        &&label_80AA7290,
        &&label_80AA7294,
        &&label_80AA7298,
        &&label_80AA729C,
        &&label_80AA72A0,
        &&label_80AA72A4,
        &&label_80AA72A8,
        &&label_80AA72AC,
        &&label_80AA72B0,
        &&label_80AA72B4,
        &&label_80AA72B8,
        &&label_80AA72BC,
        &&label_80AA72C0,
        &&label_80AA72C4,
        &&label_80AA72C8,
        &&label_80AA72CC,
        &&label_80AA72D0,
        &&label_80AA72D4,
        &&label_80AA72D8,
        &&label_80AA72DC,
        &&label_80AA72E0,
        &&label_80AA72E4,
        &&label_80AA72E8,
        &&label_80AA72EC,
        &&label_80AA72F0,
        &&label_80AA72F4,
        &&label_80AA72F8,
        &&label_80AA72FC,
        &&label_80AA7300,
        &&label_80AA7304,
        &&label_80AA7308,
        &&label_80AA730C,
        &&label_80AA7310,
        &&label_80AA7314,
        &&label_80AA7318,
        &&label_80AA731C,
        &&label_80AA7320,
        &&label_80AA7324,
        &&label_80AA7328,
        &&label_80AA732C,
        &&label_80AA7330,
        &&label_80AA7334,
        &&label_80AA7338,
        &&label_80AA733C,
        &&label_80AA7340,
        &&label_80AA7344,
        &&label_80AA7348,
        &&label_80AA734C,
        &&label_80AA7350,
        &&label_80AA7354,
        &&label_80AA7358,
        &&label_80AA735C,
        &&label_80AA7360,
        &&label_80AA7364,
        &&label_80AA7368,
        &&label_80AA736C,
        &&label_80AA7370,
        &&label_80AA7374,
        &&label_80AA7378,
        &&label_80AA737C,
        &&label_80AA7380,
        &&label_80AA7384,
        &&label_80AA7388,
        &&label_80AA738C,
        &&label_80AA7390,
        &&label_80AA7394,
        &&label_80AA7398,
        &&label_80AA739C,
        &&label_80AA73A0,
        &&label_80AA73A4,
        &&label_80AA73A8,
        &&label_80AA73AC,
        &&label_80AA73B0,
        &&label_80AA73B4,
        &&label_80AA73B8,
        &&label_80AA73BC,
        &&label_80AA73C0,
        &&label_80AA73C4,
        &&label_80AA73C8,
        &&label_80AA73CC,
        &&label_80AA73D0,
        &&label_80AA73D4,
        &&label_80AA73D8,
        &&label_80AA73DC,
        &&label_80AA73E0,
        &&label_80AA73E4,
        &&label_80AA73E8,
        &&label_80AA73EC,
        &&label_80AA73F0,
        &&label_80AA73F4,
        &&label_80AA73F8,
        &&label_80AA73FC,
        &&label_80AA7400,
        &&label_80AA7404,
        &&label_80AA7408,
        &&label_80AA740C,
        &&label_80AA7410,
        &&label_80AA7414,
        &&label_80AA7418,
        &&label_80AA741C,
        &&label_80AA7420,
        &&label_80AA7424,
        &&label_80AA7428,
        &&label_80AA742C,
        &&label_80AA7430,
        &&label_80AA7434,
        &&label_80AA7438,
        &&label_80AA743C,
        &&label_80AA7440,
        &&label_80AA7444,
        &&label_80AA7448,
        &&label_80AA744C,
        &&label_80AA7450,
        &&label_80AA7454,
        &&label_80AA7458,
        &&label_80AA745C,
        &&label_80AA7460,
        &&label_80AA7464,
        &&label_80AA7468,
        &&label_80AA746C,
        &&label_80AA7470,
        &&label_80AA7474,
        &&label_80AA7478,
        &&label_80AA747C,
        &&label_80AA7480,
        &&label_80AA7484,
        &&label_80AA7488,
        &&label_80AA748C,
        &&label_80AA7490,
        &&label_80AA7494,
        &&label_80AA7498,
        &&label_80AA749C,
        &&label_80AA74A0,
        &&label_80AA74A4,
        &&label_80AA74A8,
        &&label_80AA74AC,
        &&label_80AA74B0,
        &&label_80AA74B4,
        &&label_80AA74B8,
        &&label_80AA74BC,
        &&label_80AA74C0,
        &&label_80AA74C4,
        &&label_80AA74C8,
        &&label_80AA74CC,
        &&label_80AA74D0,
        &&label_80AA74D4,
        &&label_80AA74D8,
        &&label_80AA74DC,
        &&label_80AA74E0,
        &&label_80AA74E4,
        &&label_80AA74E8,
        &&label_80AA74EC,
        &&label_80AA74F0,
        &&label_80AA74F4,
        &&label_80AA74F8,
        &&label_80AA74FC,
        &&label_80AA7500,
        &&label_80AA7504,
        &&label_80AA7508,
        &&label_80AA750C,
        &&label_80AA7510,
        &&label_80AA7514,
        &&label_80AA7518,
        &&label_80AA751C,
        &&label_80AA7520,
        &&label_80AA7524,
        &&label_80AA7528,
        &&label_80AA752C,
        &&label_80AA7530,
        &&label_80AA7534,
        &&label_80AA7538,
        &&label_80AA753C,
        &&label_80AA7540,
        &&label_80AA7544,
        &&label_80AA7548,
        &&label_80AA754C,
        &&label_80AA7550,
        &&label_80AA7554,
        &&label_80AA7558,
        &&label_80AA755C,
        &&label_80AA7560,
        &&label_80AA7564,
        &&label_80AA7568,
        &&label_80AA756C,
        &&label_80AA7570,
        &&label_80AA7574,
        &&label_80AA7578,
        &&label_80AA757C,
        &&label_80AA7580,
        &&label_80AA7584,
        &&label_80AA7588,
        &&label_80AA758C,
        &&label_80AA7590,
        &&label_80AA7594,
        &&label_80AA7598,
        &&label_80AA759C,
        &&label_80AA75A0,
        &&label_80AA75A4,
        &&label_80AA75A8,
        &&label_80AA75AC,
        &&label_80AA75B0,
        &&label_80AA75B4,
        &&label_80AA75B8,
        &&label_80AA75BC,
        &&label_80AA75C0,
        &&label_80AA75C4,
        &&label_80AA75C8,
        &&label_80AA75CC,
        &&label_80AA75D0,
        &&label_80AA75D4,
        &&label_80AA75D8,
        &&label_80AA75DC,
        &&label_80AA75E0,
        &&label_80AA75E4,
        &&label_80AA75E8,
        &&label_80AA75EC,
        &&label_80AA75F0,
        &&label_80AA75F4,
        &&label_80AA75F8,
        &&label_80AA75FC,
        &&label_80AA7600,
        &&label_80AA7604,
        &&label_80AA7608,
        &&label_80AA760C,
        &&label_80AA7610,
        &&label_80AA7614,
        &&label_80AA7618,
        &&label_80AA761C,
        &&label_80AA7620,
        &&label_80AA7624,
        &&label_80AA7628,
        &&label_80AA762C,
        &&label_80AA7630,
        &&label_80AA7634,
        &&label_80AA7638,
        &&label_80AA763C,
        &&label_80AA7640,
        &&label_80AA7644,
        &&label_80AA7648,
        &&label_80AA764C,
        &&label_80AA7650,
        &&label_80AA7654,
        &&label_80AA7658,
        &&label_80AA765C,
        &&label_80AA7660,
        &&label_80AA7664,
        &&label_80AA7668,
        &&label_80AA766C,
        &&label_80AA7670,
        &&label_80AA7674,
        &&label_80AA7678,
        &&label_80AA767C,
        &&label_80AA7680,
        &&label_80AA7684,
        &&label_80AA7688,
        &&label_80AA768C,
        &&label_80AA7690,
        &&label_80AA7694,
        &&label_80AA7698,
        &&label_80AA769C,
        &&label_80AA76A0,
        &&label_80AA76A4,
        &&label_80AA76A8,
        &&label_80AA76AC,
        &&label_80AA76B0,
        &&label_80AA76B4,
        &&label_80AA76B8,
        &&label_80AA76BC,
        &&label_80AA76C0,
        &&label_80AA76C4,
        &&label_80AA76C8,
        &&label_80AA76CC,
        &&label_80AA76D0,
        &&label_80AA76D4,
        &&label_80AA76D8,
        &&label_80AA76DC,
        &&label_80AA76E0,
        &&label_80AA76E4,
        &&label_80AA76E8,
        &&label_80AA76EC,
        &&label_80AA76F0,
        &&label_80AA76F4,
        &&label_80AA76F8,
        &&label_80AA76FC,
        &&label_80AA7700,
        &&label_80AA7704,
        &&label_80AA7708,
        &&label_80AA770C,
        &&label_80AA7710,
        &&label_80AA7714,
        &&label_80AA7718,
        &&label_80AA771C,
        &&label_80AA7720,
        &&label_80AA7724,
        &&label_80AA7728,
        &&label_80AA772C,
        &&label_80AA7730,
        &&label_80AA7734,
        &&label_80AA7738,
        &&label_80AA773C,
        &&label_80AA7740,
        &&label_80AA7744,
        &&label_80AA7748,
        &&label_80AA774C,
        &&label_80AA7750,
        &&label_80AA7754,
        &&label_80AA7758,
        &&label_80AA775C,
        &&label_80AA7760,
        &&label_80AA7764,
        &&label_80AA7768,
        &&label_80AA776C,
        &&label_80AA7770,
        &&label_80AA7774,
        &&label_80AA7778,
        &&label_80AA777C,
        &&label_80AA7780,
        &&label_80AA7784,
        &&label_80AA7788,
        &&label_80AA778C,
        &&label_80AA7790,
        &&label_80AA7794,
        &&label_80AA7798,
        &&label_80AA779C,
        &&label_80AA77A0,
        &&label_80AA77A4,
        &&label_80AA77A8,
        &&label_80AA77AC,
        &&label_80AA77B0,
        &&label_80AA77B4,
        &&label_80AA77B8,
        &&label_80AA77BC,
        &&label_80AA77C0,
        &&label_80AA77C4,
        &&label_80AA77C8,
        &&label_80AA77CC,
        &&label_80AA77D0,
        &&label_80AA77D4,
        &&label_80AA77D8,
        &&label_80AA77DC,
        &&label_80AA77E0,
        &&label_80AA77E4,
        &&label_80AA77E8,
        &&label_80AA77EC,
        &&label_80AA77F0,
        &&label_80AA77F4,
        &&label_80AA77F8,
        &&label_80AA77FC,
        &&label_80AA7800,
        &&label_80AA7804,
        &&label_80AA7808,
        &&label_80AA780C,
        &&label_80AA7810,
        &&label_80AA7814,
        &&label_80AA7818,
        &&label_80AA781C,
        &&label_80AA7820,
        &&label_80AA7824,
        &&label_80AA7828,
        &&label_80AA782C,
        &&label_80AA7830,
        &&label_80AA7834,
        &&label_80AA7838,
        &&label_80AA783C,
        &&label_80AA7840,
        &&label_80AA7844,
        &&label_80AA7848,
        &&label_80AA784C,
        &&label_80AA7850,
        &&label_80AA7854,
        &&label_80AA7858,
        &&label_80AA785C,
        &&label_80AA7860,
        &&label_80AA7864,
        &&label_80AA7868,
        &&label_80AA786C,
        &&label_80AA7870,
        &&label_80AA7874,
        &&label_80AA7878,
        &&label_80AA787C,
        &&label_80AA7880,
        &&label_80AA7884,
        &&label_80AA7888,
        &&label_80AA788C,
        &&label_80AA7890,
        &&label_80AA7894,
        &&label_80AA7898,
        &&label_80AA789C,
        &&label_80AA78A0,
        &&label_80AA78A4,
        &&label_80AA78A8,
        &&label_80AA78AC,
        &&label_80AA78B0,
        &&label_80AA78B4,
        &&label_80AA78B8,
        &&label_80AA78BC,
        &&label_80AA78C0,
        &&label_80AA78C4,
        &&label_80AA78C8,
        &&label_80AA78CC,
        &&label_80AA78D0,
        &&label_80AA78D4,
        &&label_80AA78D8,
        &&label_80AA78DC,
        &&label_80AA78E0,
        &&label_80AA78E4,
        &&label_80AA78E8,
        &&label_80AA78EC,
        &&label_80AA78F0,
        &&label_80AA78F4,
        &&label_80AA78F8,
        &&label_80AA78FC,
        &&label_80AA7900,
        &&label_80AA7904,
        &&label_80AA7908,
        &&label_80AA790C,
        &&label_80AA7910,
        &&label_80AA7914,
        &&label_80AA7918,
        &&label_80AA791C,
        &&label_80AA7920,
        &&label_80AA7924,
        &&label_80AA7928,
        &&label_80AA792C,
        &&label_80AA7930,
        &&label_80AA7934,
        &&label_80AA7938,
        &&label_80AA793C,
        &&label_80AA7940,
        &&label_80AA7944,
        &&label_80AA7948,
        &&label_80AA794C,
        &&label_80AA7950,
        &&label_80AA7954,
        &&label_80AA7958,
        &&label_80AA795C,
        &&label_80AA7960,
        &&label_80AA7964,
        &&label_80AA7968,
        &&label_80AA796C,
        &&label_80AA7970,
        &&label_80AA7974,
        &&label_80AA7978,
        &&label_80AA797C,
        &&label_80AA7980,
        &&label_80AA7984,
        &&label_80AA7988,
        &&label_80AA798C,
        &&label_80AA7990,
        &&label_80AA7994,
        &&label_80AA7998,
        &&label_80AA799C,
        &&label_80AA79A0,
        &&label_80AA79A4,
        &&label_80AA79A8,
        &&label_80AA79AC,
        &&label_80AA79B0,
        &&label_80AA79B4,
        &&label_80AA79B8,
        &&label_80AA79BC,
        &&label_80AA79C0,
        &&label_80AA79C4,
        &&label_80AA79C8,
        &&label_80AA79CC,
        &&label_80AA79D0,
        &&label_80AA79D4,
        &&label_80AA79D8,
        &&label_80AA79DC,
        &&label_80AA79E0,
        &&label_80AA79E4,
        &&label_80AA79E8,
        &&label_80AA79EC,
        &&label_80AA79F0,
        &&label_80AA79F4,
        &&label_80AA79F8,
        &&label_80AA79FC,
        &&label_80AA7A00,
        &&label_80AA7A04,
        &&label_80AA7A08,
        &&label_80AA7A0C,
        &&label_80AA7A10,
        &&label_80AA7A14,
        &&label_80AA7A18,
        &&label_80AA7A1C,
        &&label_80AA7A20,
        &&label_80AA7A24,
        &&label_80AA7A28,
        &&label_80AA7A2C,
        &&label_80AA7A30,
        &&label_80AA7A34,
        &&label_80AA7A38,
        &&label_80AA7A3C,
        &&label_80AA7A40,
        &&label_80AA7A44,
        &&label_80AA7A48,
        &&label_80AA7A4C,
        &&label_80AA7A50,
        &&label_80AA7A54,
        &&label_80AA7A58,
        &&label_80AA7A5C,
        &&label_80AA7A60,
        &&label_80AA7A64,
        &&label_80AA7A68,
        &&label_80AA7A6C,
        &&label_80AA7A70,
        &&label_80AA7A74,
        &&label_80AA7A78,
        &&label_80AA7A7C,
        &&label_80AA7A80,
        &&label_80AA7A84,
        &&label_80AA7A88,
        &&label_80AA7A8C,
        &&label_80AA7A90,
        &&label_80AA7A94,
        &&label_80AA7A98,
        &&label_80AA7A9C,
        &&label_80AA7AA0,
        &&label_80AA7AA4,
        &&label_80AA7AA8,
        &&label_80AA7AAC,
        &&label_80AA7AB0,
        &&label_80AA7AB4,
        &&label_80AA7AB8,
        &&label_80AA7ABC,
        &&label_80AA7AC0,
        &&label_80AA7AC4,
        &&label_80AA7AC8,
        &&label_80AA7ACC,
        &&label_80AA7AD0,
        &&label_80AA7AD4,
        &&label_80AA7AD8,
        &&label_80AA7ADC,
        &&label_80AA7AE0,
        &&label_80AA7AE4,
        &&label_80AA7AE8,
        &&label_80AA7AEC,
        &&label_80AA7AF0,
        &&label_80AA7AF4,
        &&label_80AA7AF8,
        &&label_80AA7AFC,
        &&label_80AA7B00,
        &&label_80AA7B04,
        &&label_80AA7B08,
        &&label_80AA7B0C,
        &&label_80AA7B10,
        &&label_80AA7B14,
        &&label_80AA7B18,
        &&label_80AA7B1C,
        &&label_80AA7B20,
        &&label_80AA7B24,
        &&label_80AA7B28,
        &&label_80AA7B2C,
        &&label_80AA7B30,
        &&label_80AA7B34,
        &&label_80AA7B38,
        &&label_80AA7B3C,
        &&label_80AA7B40,
        &&label_80AA7B44,
        &&label_80AA7B48,
        &&label_80AA7B4C,
        &&label_80AA7B50,
        &&label_80AA7B54,
        &&label_80AA7B58,
        &&label_80AA7B5C,
        &&label_80AA7B60,
        &&label_80AA7B64,
        &&label_80AA7B68,
        &&label_80AA7B6C,
        &&label_80AA7B70,
        &&label_80AA7B74,
        &&label_80AA7B78,
        &&label_80AA7B7C,
        &&label_80AA7B80,
        &&label_80AA7B84,
        &&label_80AA7B88,
        &&label_80AA7B8C,
        &&label_80AA7B90,
        &&label_80AA7B94,
        &&label_80AA7B98,
        &&label_80AA7B9C,
        &&label_80AA7BA0,
        &&label_80AA7BA4,
        &&label_80AA7BA8,
        &&label_80AA7BAC,
        &&label_80AA7BB0,
        &&label_80AA7BB4,
        &&label_80AA7BB8,
        &&label_80AA7BBC,
        &&label_80AA7BC0,
        &&label_80AA7BC4,
        &&label_80AA7BC8,
        &&label_80AA7BCC,
        &&label_80AA7BD0,
        &&label_80AA7BD4,
        &&label_80AA7BD8,
        &&label_80AA7BDC,
        &&label_80AA7BE0,
        &&label_80AA7BE4,
        &&label_80AA7BE8,
        &&label_80AA7BEC,
        &&label_80AA7BF0,
        &&label_80AA7BF4,
        &&label_80AA7BF8,
        &&label_80AA7BFC,
        &&label_80AA7C00,
        &&label_80AA7C04,
        &&label_80AA7C08,
        &&label_80AA7C0C,
        &&label_80AA7C10,
        &&label_80AA7C14,
        &&label_80AA7C18,
        &&label_80AA7C1C,
        &&label_80AA7C20,
        &&label_80AA7C24,
        &&label_80AA7C28,
        &&label_80AA7C2C,
        &&label_80AA7C30,
        &&label_80AA7C34,
        &&label_80AA7C38,
        &&label_80AA7C3C,
        &&label_80AA7C40,
        &&label_80AA7C44,
        &&label_80AA7C48,
        &&label_80AA7C4C,
        &&label_80AA7C50,
        &&label_80AA7C54,
        &&label_80AA7C58,
        &&label_80AA7C5C,
        &&label_80AA7C60,
        &&label_80AA7C64,
        &&label_80AA7C68,
        &&label_80AA7C6C,
        &&label_80AA7C70,
        &&label_80AA7C74,
        &&label_80AA7C78,
        &&label_80AA7C7C,
        &&label_80AA7C80,
        &&label_80AA7C84,
        &&label_80AA7C88,
        &&label_80AA7C8C,
        &&label_80AA7C90,
        &&label_80AA7C94,
        &&label_80AA7C98,
        &&label_80AA7C9C,
        &&label_80AA7CA0,
        &&label_80AA7CA4,
        &&label_80AA7CA8,
        &&label_80AA7CAC,
        &&label_80AA7CB0,
        &&label_80AA7CB4,
        &&label_80AA7CB8,
        &&label_80AA7CBC,
        &&label_80AA7CC0,
        &&label_80AA7CC4,
        &&label_80AA7CC8,
        &&label_80AA7CCC,
        &&label_80AA7CD0,
        &&label_80AA7CD4,
        &&label_80AA7CD8,
        &&label_80AA7CDC,
        &&label_80AA7CE0,
        &&label_80AA7CE4,
        &&label_80AA7CE8,
        &&label_80AA7CEC,
        &&label_80AA7CF0,
        &&label_80AA7CF4,
        &&label_80AA7CF8,
        &&label_80AA7CFC,
        &&label_80AA7D00,
        &&label_80AA7D04,
        &&label_80AA7D08,
        &&label_80AA7D0C,
        &&label_80AA7D10,
        &&label_80AA7D14,
        &&label_80AA7D18,
        &&label_80AA7D1C,
        &&label_80AA7D20,
        &&label_80AA7D24,
        &&label_80AA7D28,
        &&label_80AA7D2C,
        &&label_80AA7D30,
        &&label_80AA7D34,
        &&label_80AA7D38,
        &&label_80AA7D3C,
        &&label_80AA7D40,
        &&label_80AA7D44,
        &&label_80AA7D48,
        &&label_80AA7D4C,
        &&label_80AA7D50,
        &&label_80AA7D54,
        &&label_80AA7D58,
        &&label_80AA7D5C,
        &&label_80AA7D60,
        &&label_80AA7D64,
        &&label_80AA7D68,
        &&label_80AA7D6C,
        &&label_80AA7D70,
        &&label_80AA7D74,
        &&label_80AA7D78,
        &&label_80AA7D7C,
        &&label_80AA7D80,
        &&label_80AA7D84,
        &&label_80AA7D88,
        &&label_80AA7D8C,
        &&label_80AA7D90,
        &&label_80AA7D94,
        &&label_80AA7D98,
        &&label_80AA7D9C,
        &&label_80AA7DA0,
        &&label_80AA7DA4,
        &&label_80AA7DA8,
        &&label_80AA7DAC,
        &&label_80AA7DB0,
        &&label_80AA7DB4,
        &&label_80AA7DB8,
        &&label_80AA7DBC,
        &&label_80AA7DC0,
        &&label_80AA7DC4,
        &&label_80AA7DC8,
        &&label_80AA7DCC,
        &&label_80AA7DD0,
        &&label_80AA7DD4,
        &&label_80AA7DD8,
        &&label_80AA7DDC,
        &&label_80AA7DE0,
        &&label_80AA7DE4,
        &&label_80AA7DE8,
        &&label_80AA7DEC,
        &&label_80AA7DF0,
        &&label_80AA7DF4,
        &&label_80AA7DF8,
        &&label_80AA7DFC,
        &&label_80AA7E00,
        &&label_80AA7E04,
        &&label_80AA7E08,
        &&label_80AA7E0C,
        &&label_80AA7E10,
        &&label_80AA7E14,
        &&label_80AA7E18,
        &&label_80AA7E1C,
        &&label_80AA7E20,
        &&label_80AA7E24,
        &&label_80AA7E28,
        &&label_80AA7E2C,
        &&label_80AA7E30,
        &&label_80AA7E34,
        &&label_80AA7E38,
        &&label_80AA7E3C,
        &&label_80AA7E40,
        &&label_80AA7E44,
        &&label_80AA7E48,
        &&label_80AA7E4C,
        &&label_80AA7E50,
        &&label_80AA7E54,
        &&label_80AA7E58,
        &&label_80AA7E5C,
        &&label_80AA7E60,
        &&label_80AA7E64,
        &&label_80AA7E68,
        &&label_80AA7E6C,
        &&label_80AA7E70,
        &&label_80AA7E74,
        &&label_80AA7E78,
        &&label_80AA7E7C,
        &&label_80AA7E80,
        &&label_80AA7E84,
        &&label_80AA7E88,
        &&label_80AA7E8C,
        &&label_80AA7E90,
        &&label_80AA7E94,
        &&label_80AA7E98,
        &&label_80AA7E9C,
        &&label_80AA7EA0,
        &&label_80AA7EA4,
        &&label_80AA7EA8,
        &&label_80AA7EAC,
        &&label_80AA7EB0,
        &&label_80AA7EB4,
        &&label_80AA7EB8,
        &&label_80AA7EBC,
        &&label_80AA7EC0,
        &&label_80AA7EC4,
        &&label_80AA7EC8,
        &&label_80AA7ECC,
        &&label_80AA7ED0,
        &&label_80AA7ED4,
        &&label_80AA7ED8,
        &&label_80AA7EDC,
        &&label_80AA7EE0,
        &&label_80AA7EE4,
        &&label_80AA7EE8,
        &&label_80AA7EEC,
        &&label_80AA7EF0,
        &&label_80AA7EF4,
        &&label_80AA7EF8,
        &&label_80AA7EFC,
        &&label_80AA7F00,
        &&label_80AA7F04,
        &&label_80AA7F08,
        &&label_80AA7F0C,
        &&label_80AA7F10,
        &&label_80AA7F14,
        &&label_80AA7F18,
        &&label_80AA7F1C,
        &&label_80AA7F20,
        &&label_80AA7F24,
        &&label_80AA7F28,
        &&label_80AA7F2C,
        &&label_80AA7F30,
        &&label_80AA7F34,
        &&label_80AA7F38,
        &&label_80AA7F3C,
        &&label_80AA7F40,
        &&label_80AA7F44,
        &&label_80AA7F48,
        &&label_80AA7F4C,
        &&label_80AA7F50,
        &&label_80AA7F54,
        &&label_80AA7F58,
        &&label_80AA7F5C,
        &&label_80AA7F60,
        &&label_80AA7F64,
        &&label_80AA7F68,
        &&label_80AA7F6C,
        &&label_80AA7F70,
        &&label_80AA7F74,
        &&label_80AA7F78,
        &&label_80AA7F7C,
        &&label_80AA7F80,
        &&label_80AA7F84,
        &&label_80AA7F88,
        &&label_80AA7F8C,
        &&label_80AA7F90,
        &&label_80AA7F94,
        &&label_80AA7F98,
        &&label_80AA7F9C,
        &&label_80AA7FA0,
        &&label_80AA7FA4,
        &&label_80AA7FA8,
        &&label_80AA7FAC,
        &&label_80AA7FB0,
        &&label_80AA7FB4,
        &&label_80AA7FB8,
        &&label_80AA7FBC,
        &&label_80AA7FC0,
        &&label_80AA7FC4,
        &&label_80AA7FC8,
        &&label_80AA7FCC,
        &&label_80AA7FD0,
        &&label_80AA7FD4,
        &&label_80AA7FD8,
        &&label_80AA7FDC,
        &&label_80AA7FE0,
        &&label_80AA7FE4,
        &&label_80AA7FE8,
        &&label_80AA7FEC,
        &&label_80AA7FF0,
        &&label_80AA7FF4,
        &&label_80AA7FF8,
        &&label_80AA7FFC,
        &&label_80AA8000,
        &&label_80AA8004,
        &&label_80AA8008,
        &&label_80AA800C,
        &&label_80AA8010,
        &&label_80AA8014,
        &&label_80AA8018,
        &&label_80AA801C,
        &&label_80AA8020,
        &&label_80AA8024,
        &&label_80AA8028,
        &&label_80AA802C,
        &&label_80AA8030,
        &&label_80AA8034,
        &&label_80AA8038,
        &&label_80AA803C,
        &&label_80AA8040,
        &&label_80AA8044,
        &&label_80AA8048,
        &&label_80AA804C,
        &&label_80AA8050,
        &&label_80AA8054,
        &&label_80AA8058,
        &&label_80AA805C,
        &&label_80AA8060,
        &&label_80AA8064,
        &&label_80AA8068,
        &&label_80AA806C,
        &&label_80AA8070,
        &&label_80AA8074,
        &&label_80AA8078,
        &&label_80AA807C,
        &&label_80AA8080,
        &&label_80AA8084,
        &&label_80AA8088,
        &&label_80AA808C,
        &&label_80AA8090,
        &&label_80AA8094,
        &&label_80AA8098,
        &&label_80AA809C,
        &&label_80AA80A0,
        &&label_80AA80A4,
        &&label_80AA80A8,
        &&label_80AA80AC,
        &&label_80AA80B0,
        &&label_80AA80B4,
        &&label_80AA80B8,
        &&label_80AA80BC,
        &&label_80AA80C0,
        &&label_80AA80C4,
        &&label_80AA80C8,
        &&label_80AA80CC,
        &&label_80AA80D0,
        &&label_80AA80D4,
        &&label_80AA80D8,
        &&label_80AA80DC,
        &&label_80AA80E0,
        &&label_80AA80E4,
        &&label_80AA80E8,
        &&label_80AA80EC,
        &&label_80AA80F0,
        &&label_80AA80F4,
        &&label_80AA80F8,
        &&label_80AA80FC,
        &&label_80AA8100,
        &&label_80AA8104,
        &&label_80AA8108,
        &&label_80AA810C,
        &&label_80AA8110,
        &&label_80AA8114,
        &&label_80AA8118,
        &&label_80AA811C,
        &&label_80AA8120,
        &&label_80AA8124,
        &&label_80AA8128,
        &&label_80AA812C,
        &&label_80AA8130,
        &&label_80AA8134,
        &&label_80AA8138,
        &&label_80AA813C,
        &&label_80AA8140,
        &&label_80AA8144,
        &&label_80AA8148,
        &&label_80AA814C,
        &&label_80AA8150,
        &&label_80AA8154,
        &&label_80AA8158,
        &&label_80AA815C,
        &&label_80AA8160,
        &&label_80AA8164,
        &&label_80AA8168,
        &&label_80AA816C,
        &&label_80AA8170,
        &&label_80AA8174,
        &&label_80AA8178,
        &&label_80AA817C,
        &&label_80AA8180,
        &&label_80AA8184,
        &&label_80AA8188,
        &&label_80AA818C,
        &&label_80AA8190,
        &&label_80AA8194,
        &&label_80AA8198,
        &&label_80AA819C,
        &&label_80AA81A0,
        &&label_80AA81A4,
        &&label_80AA81A8,
        &&label_80AA81AC,
        &&label_80AA81B0,
        &&label_80AA81B4,
        &&label_80AA81B8,
        &&label_80AA81BC,
        &&label_80AA81C0,
        &&label_80AA81C4,
        &&label_80AA81C8,
        &&label_80AA81CC,
        &&label_80AA81D0,
        &&label_80AA81D4,
        &&label_80AA81D8,
        &&label_80AA81DC,
        &&label_80AA81E0,
        &&label_80AA81E4,
        &&label_80AA81E8,
        &&label_80AA81EC,
        &&label_80AA81F0,
        &&label_80AA81F4,
        &&label_80AA81F8,
        &&label_80AA81FC,
        &&label_80AA8200,
        &&label_80AA8204,
        &&label_80AA8208,
        &&label_80AA820C,
        &&label_80AA8210,
        &&label_80AA8214,
        &&label_80AA8218,
        &&label_80AA821C,
        &&label_80AA8220,
        &&label_80AA8224,
        &&label_80AA8228,
        &&label_80AA822C,
        &&label_80AA8230,
        &&label_80AA8234,
        &&label_80AA8238,
        &&label_80AA823C,
        &&label_80AA8240,
        &&label_80AA8244,
        &&label_80AA8248,
        &&label_80AA824C,
        &&label_80AA8250,
        &&label_80AA8254,
        &&label_80AA8258,
        &&label_80AA825C,
        &&label_80AA8260,
        &&label_80AA8264,
        &&label_80AA8268,
        &&label_80AA826C,
        &&label_80AA8270,
        &&label_80AA8274,
        &&label_80AA8278,
        &&label_80AA827C,
        &&label_80AA8280,
        &&label_80AA8284,
        &&label_80AA8288,
        &&label_80AA828C,
        &&label_80AA8290,
        &&label_80AA8294,
        &&label_80AA8298,
        &&label_80AA829C,
        &&label_80AA82A0,
        &&label_80AA82A4,
        &&label_80AA82A8,
        &&label_80AA82AC,
        &&label_80AA82B0,
        &&label_80AA82B4,
        &&label_80AA82B8,
        &&label_80AA82BC,
        &&label_80AA82C0,
        &&label_80AA82C4,
        &&label_80AA82C8,
        &&label_80AA82CC,
        &&label_80AA82D0,
        &&label_80AA82D4,
        &&label_80AA82D8,
        &&label_80AA82DC,
        &&label_80AA82E0,
        &&label_80AA82E4,
        &&label_80AA82E8,
        &&label_80AA82EC,
        &&label_80AA82F0,
        &&label_80AA82F4,
        &&label_80AA82F8,
        &&label_80AA82FC,
        &&label_80AA8300,
        &&label_80AA8304,
        &&label_80AA8308,
        &&label_80AA830C,
        &&label_80AA8310,
        &&label_80AA8314,
        &&label_80AA8318,
        &&label_80AA831C,
        &&label_80AA8320,
        &&label_80AA8324,
        &&label_80AA8328,
        &&label_80AA832C,
        &&label_80AA8330,
        &&label_80AA8334,
        &&label_80AA8338,
        &&label_80AA833C,
        &&label_80AA8340,
        &&label_80AA8344,
        &&label_80AA8348,
        &&label_80AA834C,
        &&label_80AA8350,
        &&label_80AA8354,
        &&label_80AA8358,
        &&label_80AA835C,
        &&label_80AA8360,
        &&label_80AA8364,
        &&label_80AA8368,
        &&label_80AA836C,
        &&label_80AA8370,
        &&label_80AA8374,
        &&label_80AA8378,
        &&label_80AA837C,
        &&label_80AA8380,
        &&label_80AA8384,
        &&label_80AA8388,
        &&label_80AA838C,
        &&label_80AA8390,
        &&label_80AA8394,
        &&label_80AA8398,
        &&label_80AA839C,
        &&label_80AA83A0,
        &&label_80AA83A4,
        &&label_80AA83A8,
        &&label_80AA83AC,
        &&label_80AA83B0,
        &&label_80AA83B4,
        &&label_80AA83B8,
        &&label_80AA83BC,
        &&label_80AA83C0,
        &&label_80AA83C4,
        &&label_80AA83C8,
        &&label_80AA83CC,
        &&label_80AA83D0,
        &&label_80AA83D4,
        &&label_80AA83D8,
        &&label_80AA83DC,
        &&label_80AA83E0,
        &&label_80AA83E4,
        &&label_80AA83E8,
        &&label_80AA83EC,
        &&label_80AA83F0,
        &&label_80AA83F4,
        &&label_80AA83F8,
        &&label_80AA83FC,
        &&label_80AA8400,
        &&label_80AA8404,
        &&label_80AA8408,
        &&label_80AA840C,
        &&label_80AA8410,
        &&label_80AA8414,
        &&label_80AA8418,
        &&label_80AA841C,
        &&label_80AA8420,
        &&label_80AA8424,
        &&label_80AA8428,
        &&label_80AA842C,
        &&label_80AA8430,
        &&label_80AA8434,
        &&label_80AA8438,
        &&label_80AA843C,
        &&label_80AA8440,
        &&label_80AA8444,
        &&label_80AA8448,
        &&label_80AA844C,
        &&label_80AA8450,
        &&label_80AA8454,
        &&label_80AA8458,
        &&label_80AA845C,
        &&label_80AA8460,
        &&label_80AA8464,
        &&label_80AA8468,
        &&label_80AA846C,
        &&label_80AA8470,
        &&label_80AA8474,
        &&label_80AA8478,
        &&label_80AA847C,
        &&label_80AA8480,
        &&label_80AA8484,
        &&label_80AA8488,
        &&label_80AA848C,
        &&label_80AA8490,
        &&label_80AA8494,
        &&label_80AA8498,
        &&label_80AA849C,
        &&label_80AA84A0,
        &&label_80AA84A4,
        &&label_80AA84A8,
        &&label_80AA84AC,
        &&label_80AA84B0,
        &&label_80AA84B4,
        &&label_80AA84B8,
        &&label_80AA84BC,
        &&label_80AA84C0,
        &&label_80AA84C4,
        &&label_80AA84C8,
        &&label_80AA84CC,
        &&label_80AA84D0,
        &&label_80AA84D4,
        &&label_80AA84D8,
        &&label_80AA84DC,
        &&label_80AA84E0,
        &&label_80AA84E4,
        &&label_80AA84E8,
        &&label_80AA84EC,
        &&label_80AA84F0,
        &&label_80AA84F4,
        &&label_80AA84F8,
        &&label_80AA84FC,
        &&label_80AA8500,
        &&label_80AA8504,
        &&label_80AA8508,
        &&label_80AA850C,
        &&label_80AA8510,
        &&label_80AA8514,
        &&label_80AA8518,
        &&label_80AA851C,
        &&label_80AA8520,
        &&label_80AA8524,
        &&label_80AA8528,
        &&label_80AA852C,
        &&label_80AA8530,
        &&label_80AA8534,
        &&label_80AA8538,
        &&label_80AA853C,
        &&label_80AA8540,
        &&label_80AA8544,
        &&label_80AA8548,
        &&label_80AA854C,
        &&label_80AA8550,
        &&label_80AA8554,
        &&label_80AA8558,
        &&label_80AA855C,
        &&label_80AA8560,
        &&label_80AA8564,
        &&label_80AA8568,
        &&label_80AA856C,
        &&label_80AA8570,
        &&label_80AA8574,
        &&label_80AA8578,
        &&label_80AA857C,
        &&label_80AA8580,
        &&label_80AA8584,
        &&label_80AA8588,
        &&label_80AA858C,
        &&label_80AA8590,
        &&label_80AA8594,
        &&label_80AA8598,
        &&label_80AA859C,
        &&label_80AA85A0,
        &&label_80AA85A4,
        &&label_80AA85A8,
        &&label_80AA85AC,
        &&label_80AA85B0,
        &&label_80AA85B4,
        &&label_80AA85B8,
        &&label_80AA85BC,
        &&label_80AA85C0,
        &&label_80AA85C4,
        &&label_80AA85C8,
        &&label_80AA85CC,
        &&label_80AA85D0,
        &&label_80AA85D4,
        &&label_80AA85D8,
        &&label_80AA85DC,
        &&label_80AA85E0,
        &&label_80AA85E4,
        &&label_80AA85E8,
        &&label_80AA85EC,
        &&label_80AA85F0,
        &&label_80AA85F4,
        &&label_80AA85F8,
        &&label_80AA85FC,
        &&label_80AA8600,
        &&label_80AA8604,
        &&label_80AA8608,
        &&label_80AA860C,
        &&label_80AA8610,
        &&label_80AA8614,
        &&label_80AA8618,
        &&label_80AA861C,
        &&label_80AA8620,
        &&label_80AA8624,
        &&label_80AA8628,
        &&label_80AA862C,
        &&label_80AA8630,
        &&label_80AA8634,
        &&label_80AA8638,
        &&label_80AA863C,
        &&label_80AA8640,
        &&label_80AA8644,
        &&label_80AA8648,
        &&label_80AA864C,
        &&label_80AA8650,
        &&label_80AA8654,
        &&label_80AA8658,
        &&label_80AA865C,
        &&label_80AA8660,
        &&label_80AA8664,
        &&label_80AA8668,
        &&label_80AA866C,
        &&label_80AA8670,
        &&label_80AA8674,
        &&label_80AA8678,
        &&label_80AA867C,
        &&label_80AA8680,
        &&label_80AA8684,
        &&label_80AA8688,
        &&label_80AA868C,
        &&label_80AA8690,
        &&label_80AA8694,
        &&label_80AA8698,
        &&label_80AA869C,
        &&label_80AA86A0,
        &&label_80AA86A4,
        &&label_80AA86A8,
        &&label_80AA86AC,
        &&label_80AA86B0,
        &&label_80AA86B4,
        &&label_80AA86B8,
        &&label_80AA86BC,
        &&label_80AA86C0,
        &&label_80AA86C4,
        &&label_80AA86C8,
        &&label_80AA86CC,
        &&label_80AA86D0,
        &&label_80AA86D4,
        &&label_80AA86D8,
        &&label_80AA86DC,
        &&label_80AA86E0,
        &&label_80AA86E4,
        &&label_80AA86E8,
        &&label_80AA86EC,
        &&label_80AA86F0,
        &&label_80AA86F4,
        &&label_80AA86F8,
        &&label_80AA86FC,
        &&label_80AA8700,
        &&label_80AA8704,
        &&label_80AA8708,
        &&label_80AA870C,
        &&label_80AA8710,
        &&label_80AA8714,
        &&label_80AA8718,
        &&label_80AA871C,
        &&label_80AA8720,
        &&label_80AA8724,
        &&label_80AA8728,
        &&label_80AA872C,
        &&label_80AA8730,
        &&label_80AA8734,
        &&label_80AA8738,
        &&label_80AA873C,
        &&label_80AA8740,
        &&label_80AA8744,
        &&label_80AA8748,
        &&label_80AA874C,
        &&label_80AA8750,
        &&label_80AA8754,
        &&label_80AA8758,
        &&label_80AA875C,
        &&label_80AA8760,
        &&label_80AA8764,
        &&label_80AA8768,
        &&label_80AA876C,
        &&label_80AA8770,
        &&label_80AA8774,
        &&label_80AA8778,
        &&label_80AA877C,
        &&label_80AA8780,
        &&label_80AA8784,
        &&label_80AA8788,
        &&label_80AA878C,
        &&label_80AA8790,
        &&label_80AA8794,
        &&label_80AA8798,
        &&label_80AA879C,
        &&label_80AA87A0,
        &&label_80AA87A4,
        &&label_80AA87A8,
        &&label_80AA87AC,
        &&label_80AA87B0,
        &&label_80AA87B4,
        &&label_80AA87B8,
        &&label_80AA87BC,
        &&label_80AA87C0,
        &&label_80AA87C4,
        &&label_80AA87C8,
        &&label_80AA87CC,
        &&label_80AA87D0,
        &&label_80AA87D4,
        &&label_80AA87D8,
        &&label_80AA87DC,
        &&label_80AA87E0,
        &&label_80AA87E4,
        &&label_80AA87E8,
        &&label_80AA87EC,
        &&label_80AA87F0,
        &&label_80AA87F4,
        &&label_80AA87F8,
        &&label_80AA87FC,
        &&label_80AA8800,
        &&label_80AA8804,
        &&label_80AA8808,
        &&label_80AA880C,
        &&label_80AA8810,
        &&label_80AA8814,
        &&label_80AA8818,
        &&label_80AA881C,
        &&label_80AA8820,
        &&label_80AA8824,
        &&label_80AA8828,
        &&label_80AA882C,
        &&label_80AA8830,
        &&label_80AA8834,
        &&label_80AA8838,
        &&label_80AA883C,
        &&label_80AA8840,
        &&label_80AA8844,
        &&label_80AA8848,
        &&label_80AA884C,
        &&label_80AA8850,
        &&label_80AA8854,
        &&label_80AA8858,
        &&label_80AA885C,
        &&label_80AA8860,
        &&label_80AA8864,
        &&label_80AA8868,
        &&label_80AA886C,
        &&label_80AA8870,
        &&label_80AA8874,
        &&label_80AA8878,
        &&label_80AA887C,
        &&label_80AA8880,
        &&label_80AA8884,
        &&label_80AA8888,
        &&label_80AA888C,
        &&label_80AA8890,
        &&label_80AA8894,
        &&label_80AA8898,
        &&label_80AA889C,
        &&label_80AA88A0,
        &&label_80AA88A4,
        &&label_80AA88A8,
        &&label_80AA88AC,
        &&label_80AA88B0,
        &&label_80AA88B4,
        &&label_80AA88B8,
        &&label_80AA88BC,
        &&label_80AA88C0,
        &&label_80AA88C4,
        &&label_80AA88C8,
        &&label_80AA88CC,
        &&label_80AA88D0,
        &&label_80AA88D4,
        &&label_80AA88D8,
        &&label_80AA88DC,
        &&label_80AA88E0,
        &&label_80AA88E4,
        &&label_80AA88E8,
        &&label_80AA88EC,
        &&label_80AA88F0,
        &&label_80AA88F4,
        &&label_80AA88F8,
        &&label_80AA88FC,
        &&label_80AA8900,
        &&label_80AA8904,
        &&label_80AA8908,
        &&label_80AA890C,
        &&label_80AA8910,
        &&label_80AA8914,
        &&label_80AA8918,
        &&label_80AA891C,
        &&label_80AA8920,
        &&label_80AA8924,
        &&label_80AA8928,
        &&label_80AA892C,
        &&label_80AA8930,
        &&label_80AA8934,
        &&label_80AA8938,
        &&label_80AA893C,
        &&label_80AA8940,
        &&label_80AA8944,
        &&label_80AA8948,
        &&label_80AA894C,
        &&label_80AA8950,
        &&label_80AA8954,
        &&label_80AA8958,
        &&label_80AA895C,
        &&label_80AA8960,
        &&label_80AA8964,
        &&label_80AA8968,
        &&label_80AA896C,
        &&label_80AA8970,
        &&label_80AA8974,
        &&label_80AA8978,
        &&label_80AA897C,
        &&label_80AA8980,
        &&label_80AA8984,
        &&label_80AA8988,
        &&label_80AA898C,
        &&label_80AA8990,
        &&label_80AA8994,
        &&label_80AA8998,
        &&label_80AA899C,
        &&label_80AA89A0,
        &&label_80AA89A4,
        &&label_80AA89A8,
        &&label_80AA89AC,
        &&label_80AA89B0,
        &&label_80AA89B4,
        &&label_80AA89B8,
        &&label_80AA89BC,
        &&label_80AA89C0,
        &&label_80AA89C4,
        &&label_80AA89C8,
        &&label_80AA89CC,
        &&label_80AA89D0,
        &&label_80AA89D4,
        &&label_80AA89D8,
        &&label_80AA89DC,
        &&label_80AA89E0,
        &&label_80AA89E4,
        &&label_80AA89E8,
        &&label_80AA89EC,
        &&label_80AA89F0,
        &&label_80AA89F4,
        &&label_80AA89F8,
        &&label_80AA89FC,
        &&label_80AA8A00,
        &&label_80AA8A04,
        &&label_80AA8A08,
        &&label_80AA8A0C,
        &&label_80AA8A10,
        &&label_80AA8A14,
        &&label_80AA8A18,
        &&label_80AA8A1C,
        &&label_80AA8A20,
        &&label_80AA8A24,
        &&label_80AA8A28,
        &&label_80AA8A2C,
        &&label_80AA8A30,
        &&label_80AA8A34,
        &&label_80AA8A38,
        &&label_80AA8A3C,
        &&label_80AA8A40,
        &&label_80AA8A44,
        &&label_80AA8A48,
        &&label_80AA8A4C,
        &&label_80AA8A50,
        &&label_80AA8A54,
        &&label_80AA8A58,
        &&label_80AA8A5C,
        &&label_80AA8A60,
        &&label_80AA8A64,
        &&label_80AA8A68,
        &&label_80AA8A6C,
        &&label_80AA8A70,
        &&label_80AA8A74,
        &&label_80AA8A78,
        &&label_80AA8A7C,
        &&label_80AA8A80,
        &&label_80AA8A84,
        &&label_80AA8A88,
        &&label_80AA8A8C,
        &&label_80AA8A90,
        &&label_80AA8A94,
        &&label_80AA8A98,
        &&label_80AA8A9C,
        &&label_80AA8AA0,
        &&label_80AA8AA4,
        &&label_80AA8AA8,
        &&label_80AA8AAC,
        &&label_80AA8AB0,
        &&label_80AA8AB4,
        &&label_80AA8AB8,
        &&label_80AA8ABC,
        &&label_80AA8AC0,
        &&label_80AA8AC4,
        &&label_80AA8AC8,
        &&label_80AA8ACC,
        &&label_80AA8AD0,
        &&label_80AA8AD4,
        &&label_80AA8AD8,
        &&label_80AA8ADC,
        &&label_80AA8AE0,
        &&label_80AA8AE4,
        &&label_80AA8AE8,
        &&label_80AA8AEC,
        &&label_80AA8AF0,
        &&label_80AA8AF4,
        &&label_80AA8AF8,
        &&label_80AA8AFC,
        &&label_80AA8B00,
        &&label_80AA8B04,
        &&label_80AA8B08,
        &&label_80AA8B0C,
        &&label_80AA8B10,
        &&label_80AA8B14,
        &&label_80AA8B18,
        &&label_80AA8B1C,
        &&label_80AA8B20,
        &&label_80AA8B24,
        &&label_80AA8B28,
        &&label_80AA8B2C,
        &&label_80AA8B30,
        &&label_80AA8B34,
        &&label_80AA8B38,
        &&label_80AA8B3C,
        &&label_80AA8B40,
        &&label_80AA8B44,
        &&label_80AA8B48,
        &&label_80AA8B4C,
        &&label_80AA8B50,
        &&label_80AA8B54,
        &&label_80AA8B58,
        &&label_80AA8B5C,
        &&label_80AA8B60,
        &&label_80AA8B64,
        &&label_80AA8B68,
        &&label_80AA8B6C,
        &&label_80AA8B70,
        &&label_80AA8B74,
        &&label_80AA8B78,
        &&label_80AA8B7C,
        &&label_80AA8B80,
        &&label_80AA8B84,
        &&label_80AA8B88,
        &&label_80AA8B8C,
        &&label_80AA8B90,
        &&label_80AA8B94,
        &&label_80AA8B98,
        &&label_80AA8B9C,
        &&label_80AA8BA0,
        &&label_80AA8BA4,
        &&label_80AA8BA8,
        &&label_80AA8BAC,
        &&label_80AA8BB0,
        &&label_80AA8BB4,
        &&label_80AA8BB8,
        &&label_80AA8BBC,
        &&label_80AA8BC0,
        &&label_80AA8BC4,
        &&label_80AA8BC8,
        &&label_80AA8BCC,
        &&label_80AA8BD0,
        &&label_80AA8BD4,
        &&label_80AA8BD8,
        &&label_80AA8BDC,
        &&label_80AA8BE0,
        &&label_80AA8BE4,
        &&label_80AA8BE8,
        &&label_80AA8BEC,
        &&label_80AA8BF0,
        &&label_80AA8BF4,
        &&label_80AA8BF8,
        &&label_80AA8BFC,
        &&label_80AA8C00,
        &&label_80AA8C04,
        &&label_80AA8C08,
        &&label_80AA8C0C,
        &&label_80AA8C10,
        &&label_80AA8C14,
        &&label_80AA8C18,
        &&label_80AA8C1C,
        &&label_80AA8C20,
        &&label_80AA8C24,
        &&label_80AA8C28,
        &&label_80AA8C2C,
        &&label_80AA8C30,
        &&label_80AA8C34,
        &&label_80AA8C38,
        &&label_80AA8C3C,
        &&label_80AA8C40,
        &&label_80AA8C44,
        &&label_80AA8C48,
        &&label_80AA8C4C,
        &&label_80AA8C50,
        &&label_80AA8C54,
        &&label_80AA8C58,
        &&label_80AA8C5C,
        &&label_80AA8C60,
        &&label_80AA8C64,
        &&label_80AA8C68,
        &&label_80AA8C6C,
        &&label_80AA8C70,
        &&label_80AA8C74,
        &&label_80AA8C78,
        &&label_80AA8C7C,
        &&label_80AA8C80,
        &&label_80AA8C84,
        &&label_80AA8C88,
        &&label_80AA8C8C,
        &&label_80AA8C90,
        &&label_80AA8C94,
        &&label_80AA8C98,
        &&label_80AA8C9C,
        &&label_80AA8CA0,
        &&label_80AA8CA4,
        &&label_80AA8CA8,
        &&label_80AA8CAC,
        &&label_80AA8CB0,
        &&label_80AA8CB4,
        &&label_80AA8CB8,
        &&label_80AA8CBC,
        &&label_80AA8CC0,
        &&label_80AA8CC4,
        &&label_80AA8CC8,
        &&label_80AA8CCC,
        &&label_80AA8CD0,
        &&label_80AA8CD4,
        &&label_80AA8CD8,
        &&label_80AA8CDC,
        &&label_80AA8CE0,
        &&label_80AA8CE4,
        &&label_80AA8CE8,
        &&label_80AA8CEC,
        &&label_80AA8CF0,
        &&label_80AA8CF4,
        &&label_80AA8CF8,
        &&label_80AA8CFC,
        &&label_80AA8D00,
        &&label_80AA8D04,
        &&label_80AA8D08,
        &&label_80AA8D0C,
        &&label_80AA8D10,
        &&label_80AA8D14,
        &&label_80AA8D18,
        &&label_80AA8D1C,
        &&label_80AA8D20,
        &&label_80AA8D24,
        &&label_80AA8D28,
        &&label_80AA8D2C,
        &&label_80AA8D30,
        &&label_80AA8D34,
        &&label_80AA8D38,
        &&label_80AA8D3C,
        &&label_80AA8D40,
        &&label_80AA8D44,
        &&label_80AA8D48,
        &&label_80AA8D4C,
        &&label_80AA8D50,
        &&label_80AA8D54,
        &&label_80AA8D58,
        &&label_80AA8D5C,
        &&label_80AA8D60,
        &&label_80AA8D64,
        &&label_80AA8D68,
        &&label_80AA8D6C,
        &&label_80AA8D70,
        &&label_80AA8D74,
        &&label_80AA8D78,
        &&label_80AA8D7C,
        &&label_80AA8D80,
        &&label_80AA8D84,
        &&label_80AA8D88,
        &&label_80AA8D8C,
        &&label_80AA8D90,
        &&label_80AA8D94,
        &&label_80AA8D98,
        &&label_80AA8D9C,
        &&label_80AA8DA0,
        &&label_80AA8DA4,
        &&label_80AA8DA8,
        &&label_80AA8DAC,
        &&label_80AA8DB0,
        &&label_80AA8DB4,
        &&label_80AA8DB8,
        &&label_80AA8DBC,
        &&label_80AA8DC0,
        &&label_80AA8DC4,
        &&label_80AA8DC8,
        &&label_80AA8DCC,
        &&label_80AA8DD0,
        &&label_80AA8DD4,
        &&label_80AA8DD8,
        &&label_80AA8DDC,
        &&label_80AA8DE0,
        &&label_80AA8DE4,
        &&label_80AA8DE8,
        &&label_80AA8DEC,
        &&label_80AA8DF0,
        &&label_80AA8DF4,
        &&label_80AA8DF8,
        &&label_80AA8DFC,
        &&label_80AA8E00,
        &&label_80AA8E04,
        &&label_80AA8E08,
        &&label_80AA8E0C,
        &&label_80AA8E10,
        &&label_80AA8E14,
        &&label_80AA8E18,
        &&label_80AA8E1C,
        &&label_80AA8E20,
        &&label_80AA8E24,
        &&label_80AA8E28,
        &&label_80AA8E2C,
        &&label_80AA8E30,
        &&label_80AA8E34,
        &&label_80AA8E38,
        &&label_80AA8E3C,
        &&label_80AA8E40,
        &&label_80AA8E44,
        &&label_80AA8E48,
        &&label_80AA8E4C,
        &&label_80AA8E50,
        &&label_80AA8E54,
        &&label_80AA8E58,
        &&label_80AA8E5C,
        &&label_80AA8E60,
        &&label_80AA8E64,
        &&label_80AA8E68,
        &&label_80AA8E6C,
        &&label_80AA8E70,
        &&label_80AA8E74,
        &&label_80AA8E78,
        &&label_80AA8E7C,
        &&label_80AA8E80,
        &&label_80AA8E84,
        &&label_80AA8E88,
        &&label_80AA8E8C,
        &&label_80AA8E90,
        &&label_80AA8E94,
        &&label_80AA8E98,
        &&label_80AA8E9C,
        &&label_80AA8EA0,
        &&label_80AA8EA4,
        &&label_80AA8EA8,
        &&label_80AA8EAC,
        &&label_80AA8EB0,
        &&label_80AA8EB4,
        &&label_80AA8EB8,
        &&label_80AA8EBC,
        &&label_80AA8EC0,
        &&label_80AA8EC4,
        &&label_80AA8EC8,
        &&label_80AA8ECC,
        &&label_80AA8ED0,
        &&label_80AA8ED4,
        &&label_80AA8ED8,
        &&label_80AA8EDC,
        &&label_80AA8EE0,
        &&label_80AA8EE4,
        &&label_80AA8EE8,
        &&label_80AA8EEC,
        &&label_80AA8EF0,
        &&label_80AA8EF4,
        &&label_80AA8EF8,
        &&label_80AA8EFC,
        &&label_80AA8F00,
        &&label_80AA8F04,
        &&label_80AA8F08,
        &&label_80AA8F0C,
        &&label_80AA8F10,
        &&label_80AA8F14,
        &&label_80AA8F18,
        &&label_80AA8F1C,
        &&label_80AA8F20,
        &&label_80AA8F24,
        &&label_80AA8F28,
        &&label_80AA8F2C,
        &&label_80AA8F30,
        &&label_80AA8F34,
        &&label_80AA8F38,
        &&label_80AA8F3C,
        &&label_80AA8F40,
        &&label_80AA8F44,
        &&label_80AA8F48,
        &&label_80AA8F4C,
        &&label_80AA8F50,
        &&label_80AA8F54,
        &&label_80AA8F58,
        &&label_80AA8F5C,
        &&label_80AA8F60,
        &&label_80AA8F64,
        &&label_80AA8F68,
        &&label_80AA8F6C,
        &&label_80AA8F70,
        &&label_80AA8F74,
        &&label_80AA8F78,
        &&label_80AA8F7C,
        &&label_80AA8F80,
        &&label_80AA8F84,
        &&label_80AA8F88,
        &&label_80AA8F8C,
        &&label_80AA8F90,
        &&label_80AA8F94,
        &&label_80AA8F98,
        &&label_80AA8F9C,
        &&label_80AA8FA0,
        &&label_80AA8FA4,
        &&label_80AA8FA8,
        &&label_80AA8FAC,
        &&label_80AA8FB0,
        &&label_80AA8FB4,
        &&label_80AA8FB8,
        &&label_80AA8FBC,
        &&label_80AA8FC0,
        &&label_80AA8FC4,
        &&label_80AA8FC8,
        &&label_80AA8FCC,
        &&label_80AA8FD0,
        &&label_80AA8FD4,
        &&label_80AA8FD8,
        &&label_80AA8FDC,
        &&label_80AA8FE0,
        &&label_80AA8FE4,
        &&label_80AA8FE8,
        &&label_80AA8FEC,
        &&label_80AA8FF0,
        &&label_80AA8FF4,
        &&label_80AA8FF8,
        &&label_80AA8FFC,
        &&label_80AA9000,
        &&label_80AA9004,
        &&label_80AA9008,
        &&label_80AA900C,
        &&label_80AA9010,
        &&label_80AA9014,
        &&label_80AA9018,
        &&label_80AA901C,
        &&label_80AA9020,
        &&label_80AA9024,
        &&label_80AA9028,
        &&label_80AA902C,
        &&label_80AA9030,
        &&label_80AA9034,
        &&label_80AA9038,
        &&label_80AA903C,
        &&label_80AA9040,
        &&label_80AA9044,
        &&label_80AA9048,
        &&label_80AA904C,
        &&label_80AA9050,
        &&label_80AA9054,
        &&label_80AA9058,
        &&label_80AA905C,
        &&label_80AA9060,
        &&label_80AA9064,
        &&label_80AA9068,
        &&label_80AA906C,
        &&label_80AA9070,
        &&label_80AA9074,
        &&label_80AA9078,
        &&label_80AA907C,
        &&label_80AA9080,
        &&label_80AA9084,
        &&label_80AA9088,
        &&label_80AA908C,
        &&label_80AA9090,
        &&label_80AA9094,
        &&label_80AA9098,
        &&label_80AA909C,
        &&label_80AA90A0,
        &&label_80AA90A4,
        &&label_80AA90A8,
        &&label_80AA90AC,
        &&label_80AA90B0,
        &&label_80AA90B4,
        &&label_80AA90B8,
        &&label_80AA90BC,
        &&label_80AA90C0,
        &&label_80AA90C4,
        &&label_80AA90C8,
        &&label_80AA90CC,
        &&label_80AA90D0,
        &&label_80AA90D4,
        &&label_80AA90D8,
        &&label_80AA90DC,
        &&label_80AA90E0,
        &&label_80AA90E4,
        &&label_80AA90E8,
        &&label_80AA90EC,
        &&label_80AA90F0,
        &&label_80AA90F4,
        &&label_80AA90F8,
        &&label_80AA90FC,
        &&label_80AA9100,
        &&label_80AA9104,
        &&label_80AA9108,
        &&label_80AA910C,
        &&label_80AA9110,
        &&label_80AA9114,
        &&label_80AA9118,
        &&label_80AA911C,
        &&label_80AA9120,
        &&label_80AA9124,
        &&label_80AA9128,
        &&label_80AA912C,
        &&label_80AA9130,
        &&label_80AA9134,
        &&label_80AA9138,
        &&label_80AA913C,
        &&label_80AA9140,
        &&label_80AA9144,
        &&label_80AA9148,
        &&label_80AA914C,
        &&label_80AA9150,
        &&label_80AA9154,
        &&label_80AA9158,
        &&label_80AA915C,
        &&label_80AA9160,
        &&label_80AA9164,
        &&label_80AA9168,
        &&label_80AA916C,
        &&label_80AA9170,
        &&label_80AA9174
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80AA71C0u && pc <= 0x80AA9174u && ((pc - 0x80AA71C0u) & 3u) == 0u)
            goto *pc_table_80AA71C0[(pc - 0x80AA71C0u) >> 2];
    }
    return;
label_80AA71C0:
    ctx->pc = 0x80AA71C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA71C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA71C0: stwu     r1, -64(r1)
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
label_80AA71C4:
    ctx->pc = 0x80AA71C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA71C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA71C8:
    ctx->pc = 0x80AA71C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA71C8: stw     r0, 68(r1)
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
label_80AA71CC:
    ctx->pc = 0x80AA71CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA71CC: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA71CCu)) return;
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
label_80AA71D0:
    ctx->pc = 0x80AA71D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA71D0: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA71D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80AA71D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA71D4:
    ctx->pc = 0x80AA71D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA71D4: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA71D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA71D8:
    ctx->pc = 0x80AA71D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA71D8: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA71D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80AA71D8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA71DC:
    ctx->pc = 0x80AA71DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71DCu)) return;
    // 80AA71DC: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA71E0:
    ctx->pc = 0x80AA71E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71E0u)) return;
    // 80AA71E0: bl      0x80006DD4
    {
            ctx->lr = 0x80AA71E4u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80AA71E4:
    ctx->pc = 0x80AA71E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA71E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA71E4: cmpwi   r3, 2
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

label_80AA71E8:
    ctx->pc = 0x80AA71E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71E8u)) return;
    // 80AA71E8: bc    12, 2, 0x80AA8738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8738;
        }
    }

label_80AA71EC:
    ctx->pc = 0x80AA71ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA71ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA71EC: bc    4, 0, 0x80AA7200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7200;
        }
    }

label_80AA71F0:
    ctx->pc = 0x80AA71F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA71F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA71F0: cmpwi   r3, 0
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

label_80AA71F4:
    ctx->pc = 0x80AA71F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71F4u)) return;
    // 80AA71F4: bc    12, 2, 0x80AA87D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA87D4;
        }
    }

label_80AA71F8:
    ctx->pc = 0x80AA71F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA71F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA71F8: bc    4, 0, 0x80AA7208
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7208;
        }
    }

label_80AA71FC:
    ctx->pc = 0x80AA71FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA71FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA71FC: b       0x80AA87D4
    {
            goto label_80AA87D4;
    }

label_80AA7200:
    ctx->pc = 0x80AA7200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7200: cmpwi   r3, 4
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

label_80AA7204:
    ctx->pc = 0x80AA7204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7204u)) return;
    // 80AA7204: b       0x80AA87D4
    {
            goto label_80AA87D4;
    }

label_80AA7208:
    ctx->pc = 0x80AA7208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7208: bl      0x8045DE7C
    {
            ctx->lr = 0x80AA720Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80AA720C:
    ctx->pc = 0x80AA720Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA720Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA720C: bl      0x80460A60
    {
            ctx->lr = 0x80AA7210u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80AA7210:
    ctx->pc = 0x80AA7210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7210: bl      0x80460A24
    {
            ctx->lr = 0x80AA7214u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80AA7214:
    ctx->pc = 0x80AA7214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7214: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7218:
    ctx->pc = 0x80AA7218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7218u)) return;
    // 80AA7218: bl      0x8045EC10
    {
            ctx->lr = 0x80AA721Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AA721C:
    ctx->pc = 0x80AA721Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA721Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA721C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7220:
    ctx->pc = 0x80AA7220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7220u)) return;
    // 80AA7220: bl      0x8045F220
    {
            ctx->lr = 0x80AA7224u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7224:
    ctx->pc = 0x80AA7224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7224: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7228:
    ctx->pc = 0x80AA7228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7228u)) return;
    // 80AA7228: addi    r4, r4, -18416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18416);

label_80AA722C:
    ctx->pc = 0x80AA722Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA722Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA722C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA722Cu)) return;
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
label_80AA7230:
    ctx->pc = 0x80AA7230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7230u)) return;
    // 80AA7230: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7234:
    ctx->pc = 0x80AA7234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7234u)) return;
    // 80AA7234: addi    r4, r4, -18412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18412);

label_80AA7238:
    ctx->pc = 0x80AA7238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7238: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7238u)) return;
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
label_80AA723C:
    ctx->pc = 0x80AA723Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA723Cu)) return;
    // 80AA723C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7240:
    ctx->pc = 0x80AA7240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7240u)) return;
    // 80AA7240: addi    r4, r4, -18408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18408);

label_80AA7244:
    ctx->pc = 0x80AA7244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7244: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7244u)) return;
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
label_80AA7248:
    ctx->pc = 0x80AA7248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7248u)) return;
    // 80AA7248: bl      0x8045EF2C
    {
            ctx->lr = 0x80AA724Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AA724C:
    ctx->pc = 0x80AA724Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA724Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA724C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7250:
    ctx->pc = 0x80AA7250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7250u)) return;
    // 80AA7250: bl      0x8045F220
    {
            ctx->lr = 0x80AA7254u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7254:
    ctx->pc = 0x80AA7254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA7254: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7258:
    ctx->pc = 0x80AA7258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7258u)) return;
    // 80AA7258: li      r5, 25611
    ctx->gpr[5] = (u32)(s32)(25611);

label_80AA725C:
    ctx->pc = 0x80AA725Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA725Cu)) return;
    // 80AA725C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA7260:
    ctx->pc = 0x80AA7260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7260u)) return;
    // 80AA7260: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA7264u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA7264:
    ctx->pc = 0x80AA7264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7268:
    ctx->pc = 0x80AA7268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7268u)) return;
    // 80AA7268: bl      0x8045F220
    {
            ctx->lr = 0x80AA726Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA726C:
    ctx->pc = 0x80AA726Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA726Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA726C: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA7270u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA7270:
    ctx->pc = 0x80AA7270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7270: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7274:
    ctx->pc = 0x80AA7274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7274u)) return;
    // 80AA7274: bl      0x8045F220
    {
            ctx->lr = 0x80AA7278u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7278:
    ctx->pc = 0x80AA7278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7278: lis     r4, -28586
    ctx->gpr[4] = ((u32)(s32)(-28586) << 16);

label_80AA727C:
    ctx->pc = 0x80AA727Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA727Cu)) return;
    // 80AA727C: addi    r4, r4, -20508
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20508);

label_80AA7280:
    ctx->pc = 0x80AA7280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7280u)) return;
    // 80AA7280: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA7284:
    ctx->pc = 0x80AA7284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7284u)) return;
    // 80AA7284: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA7288:
    ctx->pc = 0x80AA7288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7288u)) return;
    // 80AA7288: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA728C:
    ctx->pc = 0x80AA728Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA728Cu)) return;
    // 80AA728C: addi    r6, r6, -18404
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18404);

label_80AA7290:
    ctx->pc = 0x80AA7290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7290: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA7290u)) return;
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
label_80AA7294:
    ctx->pc = 0x80AA7294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7294u)) return;
    // 80AA7294: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA7298:
    ctx->pc = 0x80AA7298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7298u)) return;
    // 80AA7298: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA729C:
    ctx->pc = 0x80AA729Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA729Cu)) return;
    // 80AA729C: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA72A0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA72A0:
    ctx->pc = 0x80AA72A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA72A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA72A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA72A4:
    ctx->pc = 0x80AA72A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72A4u)) return;
    // 80AA72A4: bl      0x8045F220
    {
            ctx->lr = 0x80AA72A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA72A8:
    ctx->pc = 0x80AA72A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA72A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA72A8: lwz     r30, 32(r3)
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
label_80AA72AC:
    ctx->pc = 0x80AA72ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72ACu)) return;
    // 80AA72AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA72B0:
    ctx->pc = 0x80AA72B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72B0u)) return;
    // 80AA72B0: bl      0x8045F220
    {
            ctx->lr = 0x80AA72B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA72B4:
    ctx->pc = 0x80AA72B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA72B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA72B4: lwz     r3, 32(r3)
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
label_80AA72B8:
    ctx->pc = 0x80AA72B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA72B8: lwz     r0, 24(r3)
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
label_80AA72BC:
    ctx->pc = 0x80AA72BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72BCu)) return;
    // 80AA72BC: subfic  r29, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[29] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80AA72C0:
    ctx->pc = 0x80AA72C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72C0u)) return;
    // 80AA72C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA72C4:
    ctx->pc = 0x80AA72C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72C4u)) return;
    // 80AA72C4: bl      0x8045F220
    {
            ctx->lr = 0x80AA72C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA72C8:
    ctx->pc = 0x80AA72C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA72C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA72C8: lwz     r28, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA72CC:
    ctx->pc = 0x80AA72CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72CCu)) return;
    // 80AA72CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA72D0:
    ctx->pc = 0x80AA72D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72D0u)) return;
    // 80AA72D0: bl      0x8045F220
    {
            ctx->lr = 0x80AA72D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA72D4:
    ctx->pc = 0x80AA72D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA72D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA72D4: lwz     r3, 32(r3)
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
label_80AA72D8:
    ctx->pc = 0x80AA72D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA72D8: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA72D8u)) return;
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
label_80AA72DC:
    ctx->pc = 0x80AA72DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72DCu)) return;
    // 80AA72DC: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA72E0:
    ctx->pc = 0x80AA72E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72E0u)) return;
    // 80AA72E0: addi    r3, r3, -18396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18396);

label_80AA72E4:
    ctx->pc = 0x80AA72E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA72E4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA72E4u)) return;
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
label_80AA72E8:
    ctx->pc = 0x80AA72E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72E8u)) return;
    // 80AA72E8: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA72E8u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80AA72EC:
    ctx->pc = 0x80AA72ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72ECu)) return;
    // 80AA72EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA72F0:
    ctx->pc = 0x80AA72F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72F0u)) return;
    // 80AA72F0: bl      0x8045F220
    {
            ctx->lr = 0x80AA72F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA72F4:
    ctx->pc = 0x80AA72F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA72F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA72F4: lwz     r27, 32(r3)
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
label_80AA72F8:
    ctx->pc = 0x80AA72F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72F8u)) return;
    // 80AA72F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA72FC:
    ctx->pc = 0x80AA72FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA72FCu)) return;
    // 80AA72FC: bl      0x8045F220
    {
            ctx->lr = 0x80AA7300u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7300:
    ctx->pc = 0x80AA7300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA7300: lwz     r3, 32(r3)
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
label_80AA7304:
    ctx->pc = 0x80AA7304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA7304: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA7304u)) return;
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
label_80AA7308:
    ctx->pc = 0x80AA7308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7308u)) return;
    // 80AA7308: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA730C:
    ctx->pc = 0x80AA730Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA730Cu)) return;
    // 80AA730C: addi    r3, r3, -18400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18400);

label_80AA7310:
    ctx->pc = 0x80AA7310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA7310: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA7310u)) return;
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
label_80AA7314:
    ctx->pc = 0x80AA7314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7314u)) return;
    // 80AA7314: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA7314u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80AA7318:
    ctx->pc = 0x80AA7318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7318u)) return;
    // 80AA7318: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA731C:
    ctx->pc = 0x80AA731Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA731Cu)) return;
    // 80AA731C: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80AA7320:
    ctx->pc = 0x80AA7320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7320u)) return;
    // 80AA7320: addi    r4, r4, -5088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5088);

label_80AA7324:
    ctx->pc = 0x80AA7324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA7324: lfs     f2, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA7324u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
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
label_80AA7328:
    ctx->pc = 0x80AA7328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7328u)) return;
    // 80AA7328: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80AA7328u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80AA732C:
    ctx->pc = 0x80AA732Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA732Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA732C: lwz     r5, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA7330:
    ctx->pc = 0x80AA7330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7330u)) return;
    // 80AA7330: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA7334:
    ctx->pc = 0x80AA7334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7334: lwz     r7, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA7338:
    ctx->pc = 0x80AA7338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7338u)) return;
    // 80AA7338: bl      0x8045ED84
    {
            ctx->lr = 0x80AA733Cu;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80AA733C:
    ctx->pc = 0x80AA733Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA733Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA733C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7340:
    ctx->pc = 0x80AA7340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7340u)) return;
    // 80AA7340: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7344u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7344:
    ctx->pc = 0x80AA7344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7344: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7348:
    ctx->pc = 0x80AA7348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7348u)) return;
    // 80AA7348: bl      0x8045F220
    {
            ctx->lr = 0x80AA734Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA734C:
    ctx->pc = 0x80AA734Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA734Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA734C: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA7350u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA7350:
    ctx->pc = 0x80AA7350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7350: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7354:
    ctx->pc = 0x80AA7354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7354u)) return;
    // 80AA7354: bl      0x8045F220
    {
            ctx->lr = 0x80AA7358u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7358:
    ctx->pc = 0x80AA7358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7358: lis     r4, -28601
    ctx->gpr[4] = ((u32)(s32)(-28601) << 16);

label_80AA735C:
    ctx->pc = 0x80AA735Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA735Cu)) return;
    // 80AA735C: addi    r4, r4, 9936
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9936);

label_80AA7360:
    ctx->pc = 0x80AA7360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7360u)) return;
    // 80AA7360: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80AA7364:
    ctx->pc = 0x80AA7364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7364u)) return;
    // 80AA7364: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80AA7368:
    ctx->pc = 0x80AA7368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7368u)) return;
    // 80AA7368: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA736C:
    ctx->pc = 0x80AA736Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA736Cu)) return;
    // 80AA736C: addi    r6, r6, -18404
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18404);

label_80AA7370:
    ctx->pc = 0x80AA7370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7370: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA7370u)) return;
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
label_80AA7374:
    ctx->pc = 0x80AA7374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7374u)) return;
    // 80AA7374: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA7378:
    ctx->pc = 0x80AA7378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7378u)) return;
    // 80AA7378: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA737C:
    ctx->pc = 0x80AA737Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA737Cu)) return;
    // 80AA737C: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA7380u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA7380:
    ctx->pc = 0x80AA7380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7380: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7384:
    ctx->pc = 0x80AA7384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7384u)) return;
    // 80AA7384: bl      0x8045F220
    {
            ctx->lr = 0x80AA7388u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7388:
    ctx->pc = 0x80AA7388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7388: lwz     r27, 32(r3)
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
label_80AA738C:
    ctx->pc = 0x80AA738Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA738Cu)) return;
    // 80AA738C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7390:
    ctx->pc = 0x80AA7390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7390u)) return;
    // 80AA7390: bl      0x8045F220
    {
            ctx->lr = 0x80AA7394u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7394:
    ctx->pc = 0x80AA7394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7394: lwz     r3, 32(r3)
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
label_80AA7398:
    ctx->pc = 0x80AA7398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7398: lwz     r0, 24(r3)
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
label_80AA739C:
    ctx->pc = 0x80AA739Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA739Cu)) return;
    // 80AA739C: subfic  r28, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[28] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80AA73A0:
    ctx->pc = 0x80AA73A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73A0u)) return;
    // 80AA73A0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA73A4:
    ctx->pc = 0x80AA73A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73A4u)) return;
    // 80AA73A4: bl      0x8045F220
    {
            ctx->lr = 0x80AA73A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA73A8:
    ctx->pc = 0x80AA73A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA73A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA73A8: lwz     r31, 32(r3)
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
label_80AA73AC:
    ctx->pc = 0x80AA73ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73ACu)) return;
    // 80AA73AC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA73B0:
    ctx->pc = 0x80AA73B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73B0u)) return;
    // 80AA73B0: bl      0x8045F220
    {
            ctx->lr = 0x80AA73B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA73B4:
    ctx->pc = 0x80AA73B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA73B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA73B4: lwz     r30, 32(r3)
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
label_80AA73B8:
    ctx->pc = 0x80AA73B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73B8u)) return;
    // 80AA73B8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA73BC:
    ctx->pc = 0x80AA73BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73BCu)) return;
    // 80AA73BC: bl      0x8045F220
    {
            ctx->lr = 0x80AA73C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA73C0:
    ctx->pc = 0x80AA73C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA73C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA73C0: lwz     r29, 32(r3)
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
label_80AA73C4:
    ctx->pc = 0x80AA73C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73C4u)) return;
    // 80AA73C4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA73C8:
    ctx->pc = 0x80AA73C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73C8u)) return;
    // 80AA73C8: bl      0x8045F220
    {
            ctx->lr = 0x80AA73CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA73CC:
    ctx->pc = 0x80AA73CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA73CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA73CC: lwz     r4, 32(r3)
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
label_80AA73D0:
    ctx->pc = 0x80AA73D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73D0u)) return;
    // 80AA73D0: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA73D4:
    ctx->pc = 0x80AA73D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73D4u)) return;
    // 80AA73D4: addi    r3, r3, 7716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7716);

label_80AA73D8:
    ctx->pc = 0x80AA73D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA73D8: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA73D8u)) return;
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
label_80AA73DC:
    ctx->pc = 0x80AA73DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA73DC: lfs     f2, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80AA73DCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
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
label_80AA73E0:
    ctx->pc = 0x80AA73E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA73E0: lfs     f3, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA73E0u)) return;
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
label_80AA73E4:
    ctx->pc = 0x80AA73E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA73E4: lwz     r4, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA73E8:
    ctx->pc = 0x80AA73E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73E8u)) return;
    // 80AA73E8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80AA73EC:
    ctx->pc = 0x80AA73ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA73EC: lwz     r6, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA73F0:
    ctx->pc = 0x80AA73F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73F0u)) return;
    // 80AA73F0: bl      0x8045F170
    {
            ctx->lr = 0x80AA73F4u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80AA73F4:
    ctx->pc = 0x80AA73F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA73F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA73F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA73F8:
    ctx->pc = 0x80AA73F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73F8u)) return;
    // 80AA73F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA73FC:
    ctx->pc = 0x80AA73FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA73FCu)) return;
    // 80AA73FC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA7400:
    ctx->pc = 0x80AA7400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7400u)) return;
    // 80AA7400: addi    r5, r5, -9216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9216);

label_80AA7404:
    ctx->pc = 0x80AA7404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7404u)) return;
    // 80AA7404: li      r6, 25088
    ctx->gpr[6] = (u32)(s32)(25088);

label_80AA7408:
    ctx->pc = 0x80AA7408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7408u)) return;
    // 80AA7408: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA740C:
    ctx->pc = 0x80AA740Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA740Cu)) return;
    // 80AA740C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA7410u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA7410:
    ctx->pc = 0x80AA7410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA7410: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7414:
    ctx->pc = 0x80AA7414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7414u)) return;
    // 80AA7414: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7418:
    ctx->pc = 0x80AA7418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7418u)) return;
    // 80AA7418: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA741C:
    ctx->pc = 0x80AA741Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA741Cu)) return;
    // 80AA741C: addi    r5, r5, -18392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18392);

label_80AA7420:
    ctx->pc = 0x80AA7420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7420: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7420u)) return;
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
label_80AA7424:
    ctx->pc = 0x80AA7424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7424u)) return;
    // 80AA7424: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7428:
    ctx->pc = 0x80AA7428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7428u)) return;
    // 80AA7428: addi    r5, r5, -18388
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18388);

label_80AA742C:
    ctx->pc = 0x80AA742Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA742Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA742C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA742Cu)) return;
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
label_80AA7430:
    ctx->pc = 0x80AA7430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7430u)) return;
    // 80AA7430: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7434:
    ctx->pc = 0x80AA7434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7434u)) return;
    // 80AA7434: addi    r5, r5, -18384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18384);

label_80AA7438:
    ctx->pc = 0x80AA7438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7438: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7438u)) return;
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
label_80AA743C:
    ctx->pc = 0x80AA743Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA743Cu)) return;
    // 80AA743C: bl      0x8045C750
    {
            ctx->lr = 0x80AA7440u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA7440:
    ctx->pc = 0x80AA7440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7440: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7444:
    ctx->pc = 0x80AA7444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7444u)) return;
    // 80AA7444: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7448u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7448:
    ctx->pc = 0x80AA7448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7448: li      r3, 93
    ctx->gpr[3] = (u32)(s32)(93);

label_80AA744C:
    ctx->pc = 0x80AA744Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA744Cu)) return;
    // 80AA744C: bl      0x80406090
    {
            ctx->lr = 0x80AA7450u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80AA7450:
    ctx->pc = 0x80AA7450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7450: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7454:
    ctx->pc = 0x80AA7454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7454u)) return;
    // 80AA7454: bl      0x8045F220
    {
            ctx->lr = 0x80AA7458u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7458:
    ctx->pc = 0x80AA7458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7458: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA745C:
    ctx->pc = 0x80AA745Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA745Cu)) return;
    // 80AA745C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7460:
    ctx->pc = 0x80AA7460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7460u)) return;
    // 80AA7460: bl      0x8045F220
    {
            ctx->lr = 0x80AA7464u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7464:
    ctx->pc = 0x80AA7464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA7464: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA7468:
    ctx->pc = 0x80AA7468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7468u)) return;
    // 80AA7468: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA746C:
    ctx->pc = 0x80AA746Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA746Cu)) return;
    // 80AA746C: addi    r5, r5, -18380
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18380);

label_80AA7470:
    ctx->pc = 0x80AA7470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA7470: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7470u)) return;
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
label_80AA7474:
    ctx->pc = 0x80AA7474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7474u)) return;
    // 80AA7474: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7478:
    ctx->pc = 0x80AA7478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7478u)) return;
    // 80AA7478: addi    r5, r5, -18376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18376);

label_80AA747C:
    ctx->pc = 0x80AA747Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA747Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA747C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA747Cu)) return;
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
label_80AA7480:
    ctx->pc = 0x80AA7480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7480u)) return;
    // 80AA7480: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA7480u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80AA7484:
    ctx->pc = 0x80AA7484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7484u)) return;
    // 80AA7484: bl      0x8045E734
    {
            ctx->lr = 0x80AA7488u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80AA7488:
    ctx->pc = 0x80AA7488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7488: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA748C:
    ctx->pc = 0x80AA748Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA748Cu)) return;
    // 80AA748C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7490u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7490:
    ctx->pc = 0x80AA7490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7490: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA7494:
    ctx->pc = 0x80AA7494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7494u)) return;
    // 80AA7494: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7498:
    ctx->pc = 0x80AA7498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7498u)) return;
    // 80AA7498: bl      0x8045F220
    {
            ctx->lr = 0x80AA749Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA749C:
    ctx->pc = 0x80AA749Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA749Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA749C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA74A0:
    ctx->pc = 0x80AA74A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74A0u)) return;
    // 80AA74A0: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA74A4:
    ctx->pc = 0x80AA74A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74A4u)) return;
    // 80AA74A4: addi    r5, r5, -18380
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18380);

label_80AA74A8:
    ctx->pc = 0x80AA74A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA74A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA74A8u)) return;
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
label_80AA74AC:
    ctx->pc = 0x80AA74ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74ACu)) return;
    // 80AA74AC: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA74B0:
    ctx->pc = 0x80AA74B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74B0u)) return;
    // 80AA74B0: addi    r5, r5, -18376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18376);

label_80AA74B4:
    ctx->pc = 0x80AA74B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA74B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA74B4u)) return;
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
label_80AA74B8:
    ctx->pc = 0x80AA74B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74B8u)) return;
    // 80AA74B8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA74B8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80AA74BC:
    ctx->pc = 0x80AA74BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74BCu)) return;
    // 80AA74BC: bl      0x8045E734
    {
            ctx->lr = 0x80AA74C0u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80AA74C0:
    ctx->pc = 0x80AA74C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA74C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA74C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA74C4:
    ctx->pc = 0x80AA74C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74C4u)) return;
    // 80AA74C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA74C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA74C8:
    ctx->pc = 0x80AA74C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA74C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA74C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA74CC:
    ctx->pc = 0x80AA74CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74CCu)) return;
    // 80AA74CC: bl      0x8045F220
    {
            ctx->lr = 0x80AA74D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA74D0:
    ctx->pc = 0x80AA74D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA74D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AA74D0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA74D4:
    ctx->pc = 0x80AA74D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74D4u)) return;
    // 80AA74D4: addi    r4, r4, -18372
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18372);

label_80AA74D8:
    ctx->pc = 0x80AA74D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA74D8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA74D8u)) return;
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
label_80AA74DC:
    ctx->pc = 0x80AA74DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74DCu)) return;
    // 80AA74DC: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA74E0:
    ctx->pc = 0x80AA74E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74E0u)) return;
    // 80AA74E0: addi    r4, r4, -18412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18412);

label_80AA74E4:
    ctx->pc = 0x80AA74E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA74E4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA74E4u)) return;
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
label_80AA74E8:
    ctx->pc = 0x80AA74E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74E8u)) return;
    // 80AA74E8: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA74EC:
    ctx->pc = 0x80AA74ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74ECu)) return;
    // 80AA74EC: addi    r4, r4, -18368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18368);

label_80AA74F0:
    ctx->pc = 0x80AA74F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA74F0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA74F0u)) return;
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
label_80AA74F4:
    ctx->pc = 0x80AA74F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74F4u)) return;
    // 80AA74F4: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA74F8:
    ctx->pc = 0x80AA74F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74F8u)) return;
    // 80AA74F8: addi    r4, r4, -18364
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18364);

label_80AA74FC:
    ctx->pc = 0x80AA74FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA74FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA74FC: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA74FCu)) return;
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
label_80AA7500:
    ctx->pc = 0x80AA7500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7500u)) return;
    // 80AA7500: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7504:
    ctx->pc = 0x80AA7504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7504u)) return;
    // 80AA7504: addi    r4, r4, -18360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18360);

label_80AA7508:
    ctx->pc = 0x80AA7508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7508: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7508u)) return;
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
label_80AA750C:
    ctx->pc = 0x80AA750Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA750Cu)) return;
    // 80AA750C: bl      0x8045E570
    {
            ctx->lr = 0x80AA7510u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80AA7510:
    ctx->pc = 0x80AA7510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7510: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7514:
    ctx->pc = 0x80AA7514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7514u)) return;
    // 80AA7514: bl      0x8045F220
    {
            ctx->lr = 0x80AA7518u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7518:
    ctx->pc = 0x80AA7518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AA7518: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA751C:
    ctx->pc = 0x80AA751Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA751Cu)) return;
    // 80AA751C: addi    r4, r4, -18356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18356);

label_80AA7520:
    ctx->pc = 0x80AA7520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA7520: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7520u)) return;
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
label_80AA7524:
    ctx->pc = 0x80AA7524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7524u)) return;
    // 80AA7524: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7528:
    ctx->pc = 0x80AA7528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7528u)) return;
    // 80AA7528: addi    r4, r4, -18352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18352);

label_80AA752C:
    ctx->pc = 0x80AA752Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA752Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA752C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA752Cu)) return;
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
label_80AA7530:
    ctx->pc = 0x80AA7530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7530u)) return;
    // 80AA7530: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7534:
    ctx->pc = 0x80AA7534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7534u)) return;
    // 80AA7534: addi    r4, r4, -18348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18348);

label_80AA7538:
    ctx->pc = 0x80AA7538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7538: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7538u)) return;
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
label_80AA753C:
    ctx->pc = 0x80AA753Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA753Cu)) return;
    // 80AA753C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7540:
    ctx->pc = 0x80AA7540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7540u)) return;
    // 80AA7540: addi    r4, r4, -18344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18344);

label_80AA7544:
    ctx->pc = 0x80AA7544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7544: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7544u)) return;
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
label_80AA7548:
    ctx->pc = 0x80AA7548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7548u)) return;
    // 80AA7548: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA754C:
    ctx->pc = 0x80AA754Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA754Cu)) return;
    // 80AA754C: addi    r4, r4, -18360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18360);

label_80AA7550:
    ctx->pc = 0x80AA7550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7550: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7550u)) return;
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
label_80AA7554:
    ctx->pc = 0x80AA7554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7554u)) return;
    // 80AA7554: bl      0x8045E570
    {
            ctx->lr = 0x80AA7558u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80AA7558:
    ctx->pc = 0x80AA7558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7558: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80AA755C:
    ctx->pc = 0x80AA755Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA755Cu)) return;
    // 80AA755C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7560u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7560:
    ctx->pc = 0x80AA7560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7560: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7564:
    ctx->pc = 0x80AA7564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7564u)) return;
    // 80AA7564: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80AA7568:
    ctx->pc = 0x80AA7568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7568u)) return;
    // 80AA7568: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AA756C:
    ctx->pc = 0x80AA756Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA756Cu)) return;
    // 80AA756C: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80AA7570:
    ctx->pc = 0x80AA7570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7570u)) return;
    // 80AA7570: addi    r6, r6, -32768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32768);

label_80AA7574:
    ctx->pc = 0x80AA7574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7574u)) return;
    // 80AA7574: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7578:
    ctx->pc = 0x80AA7578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7578u)) return;
    // 80AA7578: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA757Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA757C:
    ctx->pc = 0x80AA757Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA757Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA757C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7580:
    ctx->pc = 0x80AA7580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7580u)) return;
    // 80AA7580: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80AA7584:
    ctx->pc = 0x80AA7584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7584u)) return;
    // 80AA7584: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7588:
    ctx->pc = 0x80AA7588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7588u)) return;
    // 80AA7588: addi    r5, r5, -18340
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18340);

label_80AA758C:
    ctx->pc = 0x80AA758Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA758Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA758C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA758Cu)) return;
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
label_80AA7590:
    ctx->pc = 0x80AA7590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7590u)) return;
    // 80AA7590: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7594:
    ctx->pc = 0x80AA7594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7594u)) return;
    // 80AA7594: addi    r5, r5, -18336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18336);

label_80AA7598:
    ctx->pc = 0x80AA7598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7598: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7598u)) return;
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
label_80AA759C:
    ctx->pc = 0x80AA759Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA759Cu)) return;
    // 80AA759C: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA75A0:
    ctx->pc = 0x80AA75A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75A0u)) return;
    // 80AA75A0: addi    r5, r5, -18332
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18332);

label_80AA75A4:
    ctx->pc = 0x80AA75A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA75A4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA75A4u)) return;
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
label_80AA75A8:
    ctx->pc = 0x80AA75A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75A8u)) return;
    // 80AA75A8: bl      0x8045C750
    {
            ctx->lr = 0x80AA75ACu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA75AC:
    ctx->pc = 0x80AA75ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA75AC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AA75B0:
    ctx->pc = 0x80AA75B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75B0u)) return;
    // 80AA75B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA75B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA75B4:
    ctx->pc = 0x80AA75B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA75B4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA75B8:
    ctx->pc = 0x80AA75B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75B8u)) return;
    // 80AA75B8: bl      0x8045F220
    {
            ctx->lr = 0x80AA75BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA75BC:
    ctx->pc = 0x80AA75BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA75BC: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA75C0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA75C0:
    ctx->pc = 0x80AA75C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA75C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA75C4:
    ctx->pc = 0x80AA75C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75C4u)) return;
    // 80AA75C4: bl      0x8045F220
    {
            ctx->lr = 0x80AA75C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA75C8:
    ctx->pc = 0x80AA75C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA75C8: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA75CCu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA75CC:
    ctx->pc = 0x80AA75CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA75CC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA75D0:
    ctx->pc = 0x80AA75D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75D0u)) return;
    // 80AA75D0: bl      0x8045F220
    {
            ctx->lr = 0x80AA75D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA75D4:
    ctx->pc = 0x80AA75D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA75D4: bl      0x8045C034
    {
            ctx->lr = 0x80AA75D8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA75D8:
    ctx->pc = 0x80AA75D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA75D8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA75DC:
    ctx->pc = 0x80AA75DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75DCu)) return;
    // 80AA75DC: bl      0x8045F220
    {
            ctx->lr = 0x80AA75E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA75E0:
    ctx->pc = 0x80AA75E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA75E0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA75E4:
    ctx->pc = 0x80AA75E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75E4u)) return;
    // 80AA75E4: addi    r4, r4, -14092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14092);

label_80AA75E8:
    ctx->pc = 0x80AA75E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75E8u)) return;
    // 80AA75E8: bl      0x8045C060
    {
            ctx->lr = 0x80AA75ECu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA75EC:
    ctx->pc = 0x80AA75ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA75EC: li      r3, 417
    ctx->gpr[3] = (u32)(s32)(417);

label_80AA75F0:
    ctx->pc = 0x80AA75F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75F0u)) return;
    // 80AA75F0: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA75F4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA75F4:
    ctx->pc = 0x80AA75F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA75F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA75F4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA75F8:
    ctx->pc = 0x80AA75F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75F8u)) return;
    // 80AA75F8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA75FC:
    ctx->pc = 0x80AA75FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA75FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA75FC: lwz     r0, 0(r3)
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
label_80AA7600:
    ctx->pc = 0x80AA7600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7600u)) return;
    // 80AA7600: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7604:
    ctx->pc = 0x80AA7604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7604u)) return;
    // 80AA7604: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7608:
    ctx->pc = 0x80AA7608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7608u)) return;
    // 80AA7608: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA760C:
    ctx->pc = 0x80AA760Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA760Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA760C: lwzx    r3, r3, r0
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
label_80AA7610:
    ctx->pc = 0x80AA7610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7610: lwz     r3, 0(r3)
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
label_80AA7614:
    ctx->pc = 0x80AA7614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7614u)) return;
    // 80AA7614: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA7618u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA7618:
    ctx->pc = 0x80AA7618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7618: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA761C:
    ctx->pc = 0x80AA761Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA761Cu)) return;
    // 80AA761C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7620u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7620:
    ctx->pc = 0x80AA7620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7620: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA7624u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA7624:
    ctx->pc = 0x80AA7624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7624: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7628:
    ctx->pc = 0x80AA7628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7628u)) return;
    // 80AA7628: bl      0x8045F220
    {
            ctx->lr = 0x80AA762Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA762C:
    ctx->pc = 0x80AA762Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA762Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA762C: bl      0x8045C034
    {
            ctx->lr = 0x80AA7630u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7630:
    ctx->pc = 0x80AA7630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7630: bl      0x8045F32C
    {
            ctx->lr = 0x80AA7634u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA7634:
    ctx->pc = 0x80AA7634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7634: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7638:
    ctx->pc = 0x80AA7638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7638u)) return;
    // 80AA7638: bl      0x8045F220
    {
            ctx->lr = 0x80AA763Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA763C:
    ctx->pc = 0x80AA763Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA763Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA763C: bl      0x8045C034
    {
            ctx->lr = 0x80AA7640u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7640:
    ctx->pc = 0x80AA7640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7640: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7644:
    ctx->pc = 0x80AA7644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7644u)) return;
    // 80AA7644: bl      0x8045F220
    {
            ctx->lr = 0x80AA7648u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7648:
    ctx->pc = 0x80AA7648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7648: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA764C:
    ctx->pc = 0x80AA764Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA764Cu)) return;
    // 80AA764C: addi    r4, r4, -14084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14084);

label_80AA7650:
    ctx->pc = 0x80AA7650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7650u)) return;
    // 80AA7650: bl      0x8045C060
    {
            ctx->lr = 0x80AA7654u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA7654:
    ctx->pc = 0x80AA7654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7654: li      r3, 418
    ctx->gpr[3] = (u32)(s32)(418);

label_80AA7658:
    ctx->pc = 0x80AA7658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7658u)) return;
    // 80AA7658: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA765Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA765C:
    ctx->pc = 0x80AA765Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA765Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA765C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7660:
    ctx->pc = 0x80AA7660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7660u)) return;
    // 80AA7660: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA7664:
    ctx->pc = 0x80AA7664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7664: lwz     r0, 0(r3)
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
label_80AA7668:
    ctx->pc = 0x80AA7668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7668u)) return;
    // 80AA7668: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA766C:
    ctx->pc = 0x80AA766Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA766Cu)) return;
    // 80AA766C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7670:
    ctx->pc = 0x80AA7670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7670u)) return;
    // 80AA7670: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA7674:
    ctx->pc = 0x80AA7674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7674: lwzx    r3, r3, r0
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
label_80AA7678:
    ctx->pc = 0x80AA7678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7678: lwz     r3, 4(r3)
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
label_80AA767C:
    ctx->pc = 0x80AA767Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA767Cu)) return;
    // 80AA767C: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA7680u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA7680:
    ctx->pc = 0x80AA7680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7680: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7684:
    ctx->pc = 0x80AA7684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7684u)) return;
    // 80AA7684: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7688u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7688:
    ctx->pc = 0x80AA7688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7688: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA768Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA768C:
    ctx->pc = 0x80AA768Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA768Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA768C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7690:
    ctx->pc = 0x80AA7690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7690u)) return;
    // 80AA7690: bl      0x8045F220
    {
            ctx->lr = 0x80AA7694u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7694:
    ctx->pc = 0x80AA7694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7694: bl      0x8045C034
    {
            ctx->lr = 0x80AA7698u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7698:
    ctx->pc = 0x80AA7698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7698: bl      0x8045F300
    {
            ctx->lr = 0x80AA769Cu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80AA769C:
    ctx->pc = 0x80AA769Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA769Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA769C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AA76A0:
    ctx->pc = 0x80AA76A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76A0u)) return;
    // 80AA76A0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA76A4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA76A4:
    ctx->pc = 0x80AA76A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA76A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA76A4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA76A8:
    ctx->pc = 0x80AA76A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76A8u)) return;
    // 80AA76A8: bl      0x8045F220
    {
            ctx->lr = 0x80AA76ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA76AC:
    ctx->pc = 0x80AA76ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA76ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA76AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA76B0:
    ctx->pc = 0x80AA76B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76B0u)) return;
    // 80AA76B0: li      r5, 26624
    ctx->gpr[5] = (u32)(s32)(26624);

label_80AA76B4:
    ctx->pc = 0x80AA76B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76B4u)) return;
    // 80AA76B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA76B8:
    ctx->pc = 0x80AA76B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76B8u)) return;
    // 80AA76B8: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA76BCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA76BC:
    ctx->pc = 0x80AA76BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA76BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA76BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA76C0:
    ctx->pc = 0x80AA76C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76C0u)) return;
    // 80AA76C0: bl      0x8045F220
    {
            ctx->lr = 0x80AA76C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA76C4:
    ctx->pc = 0x80AA76C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA76C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA76C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA76C8:
    ctx->pc = 0x80AA76C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76C8u)) return;
    // 80AA76C8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA76CC:
    ctx->pc = 0x80AA76CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76CCu)) return;
    // 80AA76CC: addi    r5, r5, -7680
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7680);

label_80AA76D0:
    ctx->pc = 0x80AA76D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76D0u)) return;
    // 80AA76D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA76D4:
    ctx->pc = 0x80AA76D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76D4u)) return;
    // 80AA76D4: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA76D8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA76D8:
    ctx->pc = 0x80AA76D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA76D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA76D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA76DC:
    ctx->pc = 0x80AA76DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76DCu)) return;
    // 80AA76DC: bl      0x8045F220
    {
            ctx->lr = 0x80AA76E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA76E0:
    ctx->pc = 0x80AA76E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA76E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA76E0: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80AA76E4:
    ctx->pc = 0x80AA76E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76E4u)) return;
    // 80AA76E4: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80AA76E8:
    ctx->pc = 0x80AA76E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76E8u)) return;
    // 80AA76E8: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA76EC:
    ctx->pc = 0x80AA76ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76ECu)) return;
    // 80AA76EC: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA76F0:
    ctx->pc = 0x80AA76F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76F0u)) return;
    // 80AA76F0: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA76F4:
    ctx->pc = 0x80AA76F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76F4u)) return;
    // 80AA76F4: addi    r6, r6, -18404
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18404);

label_80AA76F8:
    ctx->pc = 0x80AA76F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA76F8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA76F8u)) return;
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
label_80AA76FC:
    ctx->pc = 0x80AA76FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA76FCu)) return;
    // 80AA76FC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA7700:
    ctx->pc = 0x80AA7700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7700u)) return;
    // 80AA7700: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80AA7704:
    ctx->pc = 0x80AA7704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7704u)) return;
    // 80AA7704: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA7708u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA7708:
    ctx->pc = 0x80AA7708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7708: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA770C:
    ctx->pc = 0x80AA770Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA770Cu)) return;
    // 80AA770C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7710u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7710:
    ctx->pc = 0x80AA7710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7710: bl      0x8045E760
    {
            ctx->lr = 0x80AA7714u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80AA7714:
    ctx->pc = 0x80AA7714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7714: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7718:
    ctx->pc = 0x80AA7718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7718u)) return;
    // 80AA7718: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA771C:
    ctx->pc = 0x80AA771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA771Cu)) return;
    // 80AA771C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA7720:
    ctx->pc = 0x80AA7720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7720u)) return;
    // 80AA7720: addi    r5, r5, -2048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2048);

label_80AA7724:
    ctx->pc = 0x80AA7724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7724u)) return;
    // 80AA7724: li      r6, 6912
    ctx->gpr[6] = (u32)(s32)(6912);

label_80AA7728:
    ctx->pc = 0x80AA7728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7728u)) return;
    // 80AA7728: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA772C:
    ctx->pc = 0x80AA772Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA772Cu)) return;
    // 80AA772C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA7730u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA7730:
    ctx->pc = 0x80AA7730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA7730: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7734:
    ctx->pc = 0x80AA7734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7734u)) return;
    // 80AA7734: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7738:
    ctx->pc = 0x80AA7738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7738u)) return;
    // 80AA7738: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA773C:
    ctx->pc = 0x80AA773Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA773Cu)) return;
    // 80AA773C: addi    r5, r5, -18328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18328);

label_80AA7740:
    ctx->pc = 0x80AA7740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7740: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7740u)) return;
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
label_80AA7744:
    ctx->pc = 0x80AA7744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7744u)) return;
    // 80AA7744: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7748:
    ctx->pc = 0x80AA7748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7748u)) return;
    // 80AA7748: addi    r5, r5, -18324
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18324);

label_80AA774C:
    ctx->pc = 0x80AA774Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA774Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA774C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA774Cu)) return;
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
label_80AA7750:
    ctx->pc = 0x80AA7750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7750u)) return;
    // 80AA7750: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7754:
    ctx->pc = 0x80AA7754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7754u)) return;
    // 80AA7754: addi    r5, r5, -18320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18320);

label_80AA7758:
    ctx->pc = 0x80AA7758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7758: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7758u)) return;
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
label_80AA775C:
    ctx->pc = 0x80AA775Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA775Cu)) return;
    // 80AA775C: bl      0x8045C750
    {
            ctx->lr = 0x80AA7760u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA7760:
    ctx->pc = 0x80AA7760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7764:
    ctx->pc = 0x80AA7764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7764u)) return;
    // 80AA7764: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80AA7768:
    ctx->pc = 0x80AA7768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7768u)) return;
    // 80AA7768: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA776C:
    ctx->pc = 0x80AA776Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA776Cu)) return;
    // 80AA776C: addi    r5, r5, -1280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1280);

label_80AA7770:
    ctx->pc = 0x80AA7770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7770u)) return;
    // 80AA7770: li      r6, 2560
    ctx->gpr[6] = (u32)(s32)(2560);

label_80AA7774:
    ctx->pc = 0x80AA7774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7774u)) return;
    // 80AA7774: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7778:
    ctx->pc = 0x80AA7778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7778u)) return;
    // 80AA7778: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA777Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA777C:
    ctx->pc = 0x80AA777Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA777Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA777C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80AA7780:
    ctx->pc = 0x80AA7780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7780u)) return;
    // 80AA7780: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7784u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7784:
    ctx->pc = 0x80AA7784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7784: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7788:
    ctx->pc = 0x80AA7788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7788u)) return;
    // 80AA7788: bl      0x8045F220
    {
            ctx->lr = 0x80AA778Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA778C:
    ctx->pc = 0x80AA778Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA778Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA778C: bl      0x8045C034
    {
            ctx->lr = 0x80AA7790u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7790:
    ctx->pc = 0x80AA7790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7790: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7794:
    ctx->pc = 0x80AA7794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7794u)) return;
    // 80AA7794: bl      0x8045F220
    {
            ctx->lr = 0x80AA7798u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7798:
    ctx->pc = 0x80AA7798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7798: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA779C:
    ctx->pc = 0x80AA779Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA779Cu)) return;
    // 80AA779C: addi    r4, r4, -14076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14076);

label_80AA77A0:
    ctx->pc = 0x80AA77A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77A0u)) return;
    // 80AA77A0: bl      0x8045C060
    {
            ctx->lr = 0x80AA77A4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA77A4:
    ctx->pc = 0x80AA77A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA77A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA77A4: li      r3, 419
    ctx->gpr[3] = (u32)(s32)(419);

label_80AA77A8:
    ctx->pc = 0x80AA77A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77A8u)) return;
    // 80AA77A8: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA77ACu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA77AC:
    ctx->pc = 0x80AA77ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA77ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA77AC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA77B0:
    ctx->pc = 0x80AA77B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77B0u)) return;
    // 80AA77B0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA77B4:
    ctx->pc = 0x80AA77B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA77B4: lwz     r0, 0(r3)
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
label_80AA77B8:
    ctx->pc = 0x80AA77B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77B8u)) return;
    // 80AA77B8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA77BC:
    ctx->pc = 0x80AA77BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77BCu)) return;
    // 80AA77BC: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA77C0:
    ctx->pc = 0x80AA77C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77C0u)) return;
    // 80AA77C0: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA77C4:
    ctx->pc = 0x80AA77C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA77C4: lwzx    r3, r3, r0
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
label_80AA77C8:
    ctx->pc = 0x80AA77C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA77C8: lwz     r3, 8(r3)
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
label_80AA77CC:
    ctx->pc = 0x80AA77CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77CCu)) return;
    // 80AA77CC: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA77D0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA77D0:
    ctx->pc = 0x80AA77D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA77D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA77D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA77D4:
    ctx->pc = 0x80AA77D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77D4u)) return;
    // 80AA77D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA77D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA77D8:
    ctx->pc = 0x80AA77D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA77D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA77D8: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA77DCu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA77DC:
    ctx->pc = 0x80AA77DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA77DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA77DC: li      r3, 420
    ctx->gpr[3] = (u32)(s32)(420);

label_80AA77E0:
    ctx->pc = 0x80AA77E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77E0u)) return;
    // 80AA77E0: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA77E4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA77E4:
    ctx->pc = 0x80AA77E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA77E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA77E4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA77E8:
    ctx->pc = 0x80AA77E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77E8u)) return;
    // 80AA77E8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA77EC:
    ctx->pc = 0x80AA77ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA77EC: lwz     r0, 0(r3)
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
label_80AA77F0:
    ctx->pc = 0x80AA77F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77F0u)) return;
    // 80AA77F0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA77F4:
    ctx->pc = 0x80AA77F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77F4u)) return;
    // 80AA77F4: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA77F8:
    ctx->pc = 0x80AA77F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77F8u)) return;
    // 80AA77F8: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA77FC:
    ctx->pc = 0x80AA77FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA77FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA77FC: lwzx    r3, r3, r0
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
label_80AA7800:
    ctx->pc = 0x80AA7800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7800: lwz     r3, 12(r3)
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
label_80AA7804:
    ctx->pc = 0x80AA7804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7804u)) return;
    // 80AA7804: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA7808u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA7808:
    ctx->pc = 0x80AA7808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7808: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA780C:
    ctx->pc = 0x80AA780Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA780Cu)) return;
    // 80AA780C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7810u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7810:
    ctx->pc = 0x80AA7810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7810: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA7814u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA7814:
    ctx->pc = 0x80AA7814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7814: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7818:
    ctx->pc = 0x80AA7818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7818u)) return;
    // 80AA7818: bl      0x8045F220
    {
            ctx->lr = 0x80AA781Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA781C:
    ctx->pc = 0x80AA781Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA781Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA781C: bl      0x8045C034
    {
            ctx->lr = 0x80AA7820u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7820:
    ctx->pc = 0x80AA7820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7820: bl      0x8045F32C
    {
            ctx->lr = 0x80AA7824u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA7824:
    ctx->pc = 0x80AA7824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7824: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80AA7828:
    ctx->pc = 0x80AA7828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7828u)) return;
    // 80AA7828: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA782Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA782C:
    ctx->pc = 0x80AA782Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA782Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA782C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7830:
    ctx->pc = 0x80AA7830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7830u)) return;
    // 80AA7830: bl      0x8045F220
    {
            ctx->lr = 0x80AA7834u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7834:
    ctx->pc = 0x80AA7834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7834: lwz     r3, 32(r3)
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
label_80AA7838:
    ctx->pc = 0x80AA7838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7838: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA7838u)) return;
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
label_80AA783C:
    ctx->pc = 0x80AA783Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA783Cu)) return;
    // 80AA783C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7840:
    ctx->pc = 0x80AA7840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7840u)) return;
    // 80AA7840: addi    r3, r3, -18316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18316);

label_80AA7844:
    ctx->pc = 0x80AA7844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7844: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA7844u)) return;
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
label_80AA7848:
    ctx->pc = 0x80AA7848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7848u)) return;
    // 80AA7848: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA7848u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80AA784C:
    ctx->pc = 0x80AA784Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA784Cu)) return;
    // 80AA784C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7850:
    ctx->pc = 0x80AA7850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7850u)) return;
    // 80AA7850: bl      0x8045F220
    {
            ctx->lr = 0x80AA7854u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7854:
    ctx->pc = 0x80AA7854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7854: lwz     r29, 32(r3)
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
label_80AA7858:
    ctx->pc = 0x80AA7858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7858u)) return;
    // 80AA7858: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA785C:
    ctx->pc = 0x80AA785Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA785Cu)) return;
    // 80AA785C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7860u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7860:
    ctx->pc = 0x80AA7860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7860: lwz     r3, 32(r3)
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
label_80AA7864:
    ctx->pc = 0x80AA7864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7864: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA7864u)) return;
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
label_80AA7868:
    ctx->pc = 0x80AA7868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7868u)) return;
    // 80AA7868: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA786C:
    ctx->pc = 0x80AA786Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA786Cu)) return;
    // 80AA786C: addi    r3, r3, -18316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18316);

label_80AA7870:
    ctx->pc = 0x80AA7870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7870: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA7870u)) return;
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
label_80AA7874:
    ctx->pc = 0x80AA7874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7874u)) return;
    // 80AA7874: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA7874u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80AA7878:
    ctx->pc = 0x80AA7878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7878u)) return;
    // 80AA7878: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA787C:
    ctx->pc = 0x80AA787Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA787Cu)) return;
    // 80AA787C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7880u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7880:
    ctx->pc = 0x80AA7880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7880: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80AA7880u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80AA7884:
    ctx->pc = 0x80AA7884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA7884: lfs     f2, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80AA7884u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
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
label_80AA7888:
    ctx->pc = 0x80AA7888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7888u)) return;
    // 80AA7888: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80AA7888u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80AA788C:
    ctx->pc = 0x80AA788Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA788Cu)) return;
    // 80AA788C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7890:
    ctx->pc = 0x80AA7890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7890u)) return;
    // 80AA7890: addi    r4, r4, -18344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18344);

label_80AA7894:
    ctx->pc = 0x80AA7894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7894: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7894u)) return;
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
label_80AA7898:
    ctx->pc = 0x80AA7898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7898u)) return;
    // 80AA7898: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA789C:
    ctx->pc = 0x80AA789Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA789Cu)) return;
    // 80AA789C: addi    r4, r4, -18360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18360);

label_80AA78A0:
    ctx->pc = 0x80AA78A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA78A0: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA78A0u)) return;
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
label_80AA78A4:
    ctx->pc = 0x80AA78A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78A4u)) return;
    // 80AA78A4: bl      0x8045E570
    {
            ctx->lr = 0x80AA78A8u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80AA78A8:
    ctx->pc = 0x80AA78A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA78A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA78A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA78AC:
    ctx->pc = 0x80AA78ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78ACu)) return;
    // 80AA78AC: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80AA78B0:
    ctx->pc = 0x80AA78B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78B0u)) return;
    // 80AA78B0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA78B4:
    ctx->pc = 0x80AA78B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78B4u)) return;
    // 80AA78B4: addi    r5, r5, -1280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1280);

label_80AA78B8:
    ctx->pc = 0x80AA78B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78B8u)) return;
    // 80AA78B8: li      r6, 1024
    ctx->gpr[6] = (u32)(s32)(1024);

label_80AA78BC:
    ctx->pc = 0x80AA78BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78BCu)) return;
    // 80AA78BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA78C0:
    ctx->pc = 0x80AA78C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78C0u)) return;
    // 80AA78C0: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA78C4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA78C4:
    ctx->pc = 0x80AA78C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA78C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA78C4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AA78C8:
    ctx->pc = 0x80AA78C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78C8u)) return;
    // 80AA78C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA78CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA78CC:
    ctx->pc = 0x80AA78CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA78CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA78CC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA78D0:
    ctx->pc = 0x80AA78D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78D0u)) return;
    // 80AA78D0: bl      0x8045F220
    {
            ctx->lr = 0x80AA78D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA78D4:
    ctx->pc = 0x80AA78D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA78D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA78D4: bl      0x8045C034
    {
            ctx->lr = 0x80AA78D8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA78D8:
    ctx->pc = 0x80AA78D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA78D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA78D8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA78DC:
    ctx->pc = 0x80AA78DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78DCu)) return;
    // 80AA78DC: bl      0x8045F220
    {
            ctx->lr = 0x80AA78E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA78E0:
    ctx->pc = 0x80AA78E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA78E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA78E0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA78E4:
    ctx->pc = 0x80AA78E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78E4u)) return;
    // 80AA78E4: addi    r4, r4, -14064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14064);

label_80AA78E8:
    ctx->pc = 0x80AA78E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78E8u)) return;
    // 80AA78E8: bl      0x8045C060
    {
            ctx->lr = 0x80AA78ECu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA78EC:
    ctx->pc = 0x80AA78ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA78ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA78EC: li      r3, 421
    ctx->gpr[3] = (u32)(s32)(421);

label_80AA78F0:
    ctx->pc = 0x80AA78F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78F0u)) return;
    // 80AA78F0: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA78F4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA78F4:
    ctx->pc = 0x80AA78F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA78F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA78F4: li      r3, 75
    ctx->gpr[3] = (u32)(s32)(75);

label_80AA78F8:
    ctx->pc = 0x80AA78F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78F8u)) return;
    // 80AA78F8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80AA78FC:
    ctx->pc = 0x80AA78FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA78FCu)) return;
    // 80AA78FC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80AA7900:
    ctx->pc = 0x80AA7900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7900: lwz     r0, 0(r4)
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
label_80AA7904:
    ctx->pc = 0x80AA7904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7904u)) return;
    // 80AA7904: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7908:
    ctx->pc = 0x80AA7908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7908u)) return;
    // 80AA7908: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA790C:
    ctx->pc = 0x80AA790Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA790Cu)) return;
    // 80AA790C: addi    r4, r4, -14156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14156);

label_80AA7910:
    ctx->pc = 0x80AA7910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7910: lwzx    r4, r4, r0
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
label_80AA7914:
    ctx->pc = 0x80AA7914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7914: lwz     r4, 16(r4)
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
label_80AA7918:
    ctx->pc = 0x80AA7918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7918u)) return;
    // 80AA7918: bl      0x8045F608
    {
            ctx->lr = 0x80AA791Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80AA791C:
    ctx->pc = 0x80AA791Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA791Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA791C: li      r3, 35
    ctx->gpr[3] = (u32)(s32)(35);

label_80AA7920:
    ctx->pc = 0x80AA7920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7920u)) return;
    // 80AA7920: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80AA7924:
    ctx->pc = 0x80AA7924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7924u)) return;
    // 80AA7924: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80AA7928:
    ctx->pc = 0x80AA7928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7928: lwz     r0, 0(r4)
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
label_80AA792C:
    ctx->pc = 0x80AA792Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA792Cu)) return;
    // 80AA792C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7930:
    ctx->pc = 0x80AA7930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7930u)) return;
    // 80AA7930: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7934:
    ctx->pc = 0x80AA7934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7934u)) return;
    // 80AA7934: addi    r4, r4, -14156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14156);

label_80AA7938:
    ctx->pc = 0x80AA7938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7938: lwzx    r4, r4, r0
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
label_80AA793C:
    ctx->pc = 0x80AA793Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA793Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA793C: lwz     r4, 20(r4)
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
label_80AA7940:
    ctx->pc = 0x80AA7940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7940u)) return;
    // 80AA7940: bl      0x8045F608
    {
            ctx->lr = 0x80AA7944u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80AA7944:
    ctx->pc = 0x80AA7944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7944: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7948:
    ctx->pc = 0x80AA7948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7948u)) return;
    // 80AA7948: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA794Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA794C:
    ctx->pc = 0x80AA794Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA794Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA794C: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA7950u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA7950:
    ctx->pc = 0x80AA7950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7950: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7954:
    ctx->pc = 0x80AA7954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7954u)) return;
    // 80AA7954: bl      0x8045F220
    {
            ctx->lr = 0x80AA7958u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7958:
    ctx->pc = 0x80AA7958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7958: bl      0x8045C034
    {
            ctx->lr = 0x80AA795Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA795C:
    ctx->pc = 0x80AA795Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA795Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA795C: bl      0x8045F32C
    {
            ctx->lr = 0x80AA7960u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA7960:
    ctx->pc = 0x80AA7960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7960: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7964:
    ctx->pc = 0x80AA7964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7964u)) return;
    // 80AA7964: bl      0x8045F220
    {
            ctx->lr = 0x80AA7968u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7968:
    ctx->pc = 0x80AA7968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7968: bl      0x8045C034
    {
            ctx->lr = 0x80AA796Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA796C:
    ctx->pc = 0x80AA796Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA796Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA796C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7970:
    ctx->pc = 0x80AA7970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7970u)) return;
    // 80AA7970: bl      0x8045F220
    {
            ctx->lr = 0x80AA7974u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7974:
    ctx->pc = 0x80AA7974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7974: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7978:
    ctx->pc = 0x80AA7978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7978u)) return;
    // 80AA7978: addi    r4, r4, -14052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14052);

label_80AA797C:
    ctx->pc = 0x80AA797Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA797Cu)) return;
    // 80AA797C: bl      0x8045C060
    {
            ctx->lr = 0x80AA7980u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA7980:
    ctx->pc = 0x80AA7980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7980: li      r3, 422
    ctx->gpr[3] = (u32)(s32)(422);

label_80AA7984:
    ctx->pc = 0x80AA7984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7984u)) return;
    // 80AA7984: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA7988u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA7988:
    ctx->pc = 0x80AA7988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA7988: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA798C:
    ctx->pc = 0x80AA798Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA798Cu)) return;
    // 80AA798C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA7990:
    ctx->pc = 0x80AA7990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7990: lwz     r0, 0(r3)
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
label_80AA7994:
    ctx->pc = 0x80AA7994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7994u)) return;
    // 80AA7994: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7998:
    ctx->pc = 0x80AA7998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7998u)) return;
    // 80AA7998: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA799C:
    ctx->pc = 0x80AA799Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA799Cu)) return;
    // 80AA799C: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA79A0:
    ctx->pc = 0x80AA79A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA79A0: lwzx    r3, r3, r0
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
label_80AA79A4:
    ctx->pc = 0x80AA79A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA79A4: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA79A8:
    ctx->pc = 0x80AA79A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79A8u)) return;
    // 80AA79A8: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA79ACu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA79AC:
    ctx->pc = 0x80AA79ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA79ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA79AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA79B0:
    ctx->pc = 0x80AA79B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79B0u)) return;
    // 80AA79B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA79B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA79B4:
    ctx->pc = 0x80AA79B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA79B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA79B4: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA79B8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA79B8:
    ctx->pc = 0x80AA79B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA79B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA79B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA79BC:
    ctx->pc = 0x80AA79BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79BCu)) return;
    // 80AA79BC: bl      0x8045F220
    {
            ctx->lr = 0x80AA79C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA79C0:
    ctx->pc = 0x80AA79C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA79C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA79C0: bl      0x8045C034
    {
            ctx->lr = 0x80AA79C4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA79C4:
    ctx->pc = 0x80AA79C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA79C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA79C4: bl      0x8045F32C
    {
            ctx->lr = 0x80AA79C8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA79C8:
    ctx->pc = 0x80AA79C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA79C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA79C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA79CC:
    ctx->pc = 0x80AA79CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79CCu)) return;
    // 80AA79CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA79D0:
    ctx->pc = 0x80AA79D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79D0u)) return;
    // 80AA79D0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80AA79D4:
    ctx->pc = 0x80AA79D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79D4u)) return;
    // 80AA79D4: li      r6, 21248
    ctx->gpr[6] = (u32)(s32)(21248);

label_80AA79D8:
    ctx->pc = 0x80AA79D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79D8u)) return;
    // 80AA79D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA79DC:
    ctx->pc = 0x80AA79DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79DCu)) return;
    // 80AA79DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA79E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA79E0:
    ctx->pc = 0x80AA79E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA79E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA79E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA79E4:
    ctx->pc = 0x80AA79E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79E4u)) return;
    // 80AA79E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA79E8:
    ctx->pc = 0x80AA79E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79E8u)) return;
    // 80AA79E8: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA79EC:
    ctx->pc = 0x80AA79ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79ECu)) return;
    // 80AA79EC: addi    r5, r5, -18312
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18312);

label_80AA79F0:
    ctx->pc = 0x80AA79F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA79F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA79F0u)) return;
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
label_80AA79F4:
    ctx->pc = 0x80AA79F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79F4u)) return;
    // 80AA79F4: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA79F8:
    ctx->pc = 0x80AA79F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79F8u)) return;
    // 80AA79F8: addi    r5, r5, -18308
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18308);

label_80AA79FC:
    ctx->pc = 0x80AA79FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA79FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA79FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA79FCu)) return;
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
label_80AA7A00:
    ctx->pc = 0x80AA7A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A00u)) return;
    // 80AA7A00: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7A04:
    ctx->pc = 0x80AA7A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A04u)) return;
    // 80AA7A04: addi    r5, r5, -18304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18304);

label_80AA7A08:
    ctx->pc = 0x80AA7A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7A08: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7A08u)) return;
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
label_80AA7A0C:
    ctx->pc = 0x80AA7A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A0Cu)) return;
    // 80AA7A0C: bl      0x8045C750
    {
            ctx->lr = 0x80AA7A10u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA7A10:
    ctx->pc = 0x80AA7A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7A10: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7A14:
    ctx->pc = 0x80AA7A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A14u)) return;
    // 80AA7A14: bl      0x8045F220
    {
            ctx->lr = 0x80AA7A18u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7A18:
    ctx->pc = 0x80AA7A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7A18: lwz     r30, 32(r3)
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
label_80AA7A1C:
    ctx->pc = 0x80AA7A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A1Cu)) return;
    // 80AA7A1C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7A20:
    ctx->pc = 0x80AA7A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A20u)) return;
    // 80AA7A20: bl      0x8045F220
    {
            ctx->lr = 0x80AA7A24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7A24:
    ctx->pc = 0x80AA7A24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7A24: lwz     r29, 32(r3)
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
label_80AA7A28:
    ctx->pc = 0x80AA7A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A28u)) return;
    // 80AA7A28: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7A2C:
    ctx->pc = 0x80AA7A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A2Cu)) return;
    // 80AA7A2C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7A30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7A30:
    ctx->pc = 0x80AA7A30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7A30: lwz     r4, 32(r3)
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
label_80AA7A34:
    ctx->pc = 0x80AA7A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A34u)) return;
    // 80AA7A34: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7A38:
    ctx->pc = 0x80AA7A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A38u)) return;
    // 80AA7A38: addi    r3, r3, 7716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7716);

label_80AA7A3C:
    ctx->pc = 0x80AA7A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7A3C: lwz     r3, 0(r3)
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
label_80AA7A40:
    ctx->pc = 0x80AA7A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7A40: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA7A40u)) return;
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
label_80AA7A44:
    ctx->pc = 0x80AA7A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7A44: lfs     f2, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80AA7A44u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
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
label_80AA7A48:
    ctx->pc = 0x80AA7A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7A48: lfs     f3, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA7A48u)) return;
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
label_80AA7A4C:
    ctx->pc = 0x80AA7A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A4Cu)) return;
    // 80AA7A4C: bl      0x8045EF2C
    {
            ctx->lr = 0x80AA7A50u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AA7A50:
    ctx->pc = 0x80AA7A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7A50: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7A54:
    ctx->pc = 0x80AA7A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A54u)) return;
    // 80AA7A54: bl      0x8045F220
    {
            ctx->lr = 0x80AA7A58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7A58:
    ctx->pc = 0x80AA7A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7A58: lwz     r30, 32(r3)
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
label_80AA7A5C:
    ctx->pc = 0x80AA7A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A5Cu)) return;
    // 80AA7A5C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7A60:
    ctx->pc = 0x80AA7A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A60u)) return;
    // 80AA7A60: bl      0x8045F220
    {
            ctx->lr = 0x80AA7A64u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7A64:
    ctx->pc = 0x80AA7A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7A64: lwz     r3, 32(r3)
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
label_80AA7A68:
    ctx->pc = 0x80AA7A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7A68: lwz     r0, 24(r3)
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
label_80AA7A6C:
    ctx->pc = 0x80AA7A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A6Cu)) return;
    // 80AA7A6C: subfic  r29, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[29] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80AA7A70:
    ctx->pc = 0x80AA7A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A70u)) return;
    // 80AA7A70: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7A74:
    ctx->pc = 0x80AA7A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A74u)) return;
    // 80AA7A74: bl      0x8045F220
    {
            ctx->lr = 0x80AA7A78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7A78:
    ctx->pc = 0x80AA7A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7A78: lwz     r4, 32(r3)
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
label_80AA7A7C:
    ctx->pc = 0x80AA7A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A7Cu)) return;
    // 80AA7A7C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7A80:
    ctx->pc = 0x80AA7A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A80u)) return;
    // 80AA7A80: addi    r3, r3, 7716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7716);

label_80AA7A84:
    ctx->pc = 0x80AA7A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7A84: lwz     r3, 0(r3)
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
label_80AA7A88:
    ctx->pc = 0x80AA7A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7A88: lwz     r4, 20(r4)
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
label_80AA7A8C:
    ctx->pc = 0x80AA7A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A8Cu)) return;
    // 80AA7A8C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA7A90:
    ctx->pc = 0x80AA7A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7A90: lwz     r6, 28(r30)
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
label_80AA7A94:
    ctx->pc = 0x80AA7A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A94u)) return;
    // 80AA7A94: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA7A98u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA7A98:
    ctx->pc = 0x80AA7A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7A98: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7A9C:
    ctx->pc = 0x80AA7A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7A9Cu)) return;
    // 80AA7A9C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7AA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7AA0:
    ctx->pc = 0x80AA7AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7AA0: bl      0x8045C034
    {
            ctx->lr = 0x80AA7AA4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7AA4:
    ctx->pc = 0x80AA7AA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7AA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7AA4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7AA8:
    ctx->pc = 0x80AA7AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AA8u)) return;
    // 80AA7AA8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7AAC:
    ctx->pc = 0x80AA7AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7AAC: lwz     r0, 0(r3)
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
label_80AA7AB0:
    ctx->pc = 0x80AA7AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AB0u)) return;
    // 80AA7AB0: cmpwi   r0, 0
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

label_80AA7AB4:
    ctx->pc = 0x80AA7AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AB4u)) return;
    // 80AA7AB4: bc    4, 2, 0x80AA7ACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7ACC;
        }
    }

label_80AA7AB8:
    ctx->pc = 0x80AA7AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7AB8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7ABC:
    ctx->pc = 0x80AA7ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7ABCu)) return;
    // 80AA7ABC: bl      0x8045F220
    {
            ctx->lr = 0x80AA7AC0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7AC0:
    ctx->pc = 0x80AA7AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7AC0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7AC4:
    ctx->pc = 0x80AA7AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AC4u)) return;
    // 80AA7AC4: addi    r4, r4, -14044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14044);

label_80AA7AC8:
    ctx->pc = 0x80AA7AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AC8u)) return;
    // 80AA7AC8: bl      0x8045C060
    {
            ctx->lr = 0x80AA7ACCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA7ACC:
    ctx->pc = 0x80AA7ACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7ACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7ACC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7AD0:
    ctx->pc = 0x80AA7AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AD0u)) return;
    // 80AA7AD0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7AD4:
    ctx->pc = 0x80AA7AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7AD4: lwz     r0, 0(r3)
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
label_80AA7AD8:
    ctx->pc = 0x80AA7AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AD8u)) return;
    // 80AA7AD8: cmpwi   r0, 1
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

label_80AA7ADC:
    ctx->pc = 0x80AA7ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7ADCu)) return;
    // 80AA7ADC: bc    4, 2, 0x80AA7AF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7AF4;
        }
    }

label_80AA7AE0:
    ctx->pc = 0x80AA7AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7AE0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7AE4:
    ctx->pc = 0x80AA7AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AE4u)) return;
    // 80AA7AE4: bl      0x8045F220
    {
            ctx->lr = 0x80AA7AE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7AE8:
    ctx->pc = 0x80AA7AE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7AE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7AE8: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7AEC:
    ctx->pc = 0x80AA7AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AECu)) return;
    // 80AA7AEC: addi    r4, r4, -14036
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14036);

label_80AA7AF0:
    ctx->pc = 0x80AA7AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AF0u)) return;
    // 80AA7AF0: bl      0x8045C060
    {
            ctx->lr = 0x80AA7AF4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA7AF4:
    ctx->pc = 0x80AA7AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7AF4: li      r3, 423
    ctx->gpr[3] = (u32)(s32)(423);

label_80AA7AF8:
    ctx->pc = 0x80AA7AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7AF8u)) return;
    // 80AA7AF8: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA7AFCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA7AFC:
    ctx->pc = 0x80AA7AFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7AFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA7AFC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7B00:
    ctx->pc = 0x80AA7B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B00u)) return;
    // 80AA7B00: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA7B04:
    ctx->pc = 0x80AA7B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7B04: lwz     r0, 0(r3)
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
label_80AA7B08:
    ctx->pc = 0x80AA7B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B08u)) return;
    // 80AA7B08: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7B0C:
    ctx->pc = 0x80AA7B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B0Cu)) return;
    // 80AA7B0C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7B10:
    ctx->pc = 0x80AA7B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B10u)) return;
    // 80AA7B10: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA7B14:
    ctx->pc = 0x80AA7B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7B14: lwzx    r3, r3, r0
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
label_80AA7B18:
    ctx->pc = 0x80AA7B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7B18: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA7B1C:
    ctx->pc = 0x80AA7B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B1Cu)) return;
    // 80AA7B1C: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA7B20u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA7B20:
    ctx->pc = 0x80AA7B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7B20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7B24:
    ctx->pc = 0x80AA7B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B24u)) return;
    // 80AA7B24: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7B28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7B28:
    ctx->pc = 0x80AA7B28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7B28: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA7B2Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA7B2C:
    ctx->pc = 0x80AA7B2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7B2C: li      r3, 424
    ctx->gpr[3] = (u32)(s32)(424);

label_80AA7B30:
    ctx->pc = 0x80AA7B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B30u)) return;
    // 80AA7B30: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA7B34u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA7B34:
    ctx->pc = 0x80AA7B34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA7B34: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7B38:
    ctx->pc = 0x80AA7B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B38u)) return;
    // 80AA7B38: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA7B3C:
    ctx->pc = 0x80AA7B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7B3C: lwz     r0, 0(r3)
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
label_80AA7B40:
    ctx->pc = 0x80AA7B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B40u)) return;
    // 80AA7B40: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7B44:
    ctx->pc = 0x80AA7B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B44u)) return;
    // 80AA7B44: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7B48:
    ctx->pc = 0x80AA7B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B48u)) return;
    // 80AA7B48: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA7B4C:
    ctx->pc = 0x80AA7B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7B4C: lwzx    r3, r3, r0
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
label_80AA7B50:
    ctx->pc = 0x80AA7B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7B50: lwz     r3, 32(r3)
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
label_80AA7B54:
    ctx->pc = 0x80AA7B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B54u)) return;
    // 80AA7B54: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA7B58u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA7B58:
    ctx->pc = 0x80AA7B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7B58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7B5C:
    ctx->pc = 0x80AA7B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B5Cu)) return;
    // 80AA7B5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7B60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7B60:
    ctx->pc = 0x80AA7B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7B60: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA7B64u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA7B64:
    ctx->pc = 0x80AA7B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7B64: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7B68:
    ctx->pc = 0x80AA7B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B68u)) return;
    // 80AA7B68: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7B6C:
    ctx->pc = 0x80AA7B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7B6C: lwz     r0, 0(r3)
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
label_80AA7B70:
    ctx->pc = 0x80AA7B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B70u)) return;
    // 80AA7B70: cmpwi   r0, 0
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

label_80AA7B74:
    ctx->pc = 0x80AA7B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B74u)) return;
    // 80AA7B74: bc    4, 2, 0x80AA7B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7B84;
        }
    }

label_80AA7B78:
    ctx->pc = 0x80AA7B78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7B78: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7B7C:
    ctx->pc = 0x80AA7B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B7Cu)) return;
    // 80AA7B7C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7B80u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7B80:
    ctx->pc = 0x80AA7B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7B80: bl      0x8045C034
    {
            ctx->lr = 0x80AA7B84u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7B84:
    ctx->pc = 0x80AA7B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7B84: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7B88:
    ctx->pc = 0x80AA7B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B88u)) return;
    // 80AA7B88: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7B8C:
    ctx->pc = 0x80AA7B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7B8C: lwz     r0, 0(r3)
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
label_80AA7B90:
    ctx->pc = 0x80AA7B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B90u)) return;
    // 80AA7B90: cmpwi   r0, 1
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

label_80AA7B94:
    ctx->pc = 0x80AA7B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B94u)) return;
    // 80AA7B94: bc    4, 2, 0x80AA7BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7BA4;
        }
    }

label_80AA7B98:
    ctx->pc = 0x80AA7B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7B98: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7B9C:
    ctx->pc = 0x80AA7B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7B9Cu)) return;
    // 80AA7B9C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7BA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7BA0:
    ctx->pc = 0x80AA7BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7BA0: bl      0x8045C034
    {
            ctx->lr = 0x80AA7BA4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7BA4:
    ctx->pc = 0x80AA7BA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7BA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7BA4: bl      0x8045F32C
    {
            ctx->lr = 0x80AA7BA8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA7BA8:
    ctx->pc = 0x80AA7BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7BA8: li      r3, 743
    ctx->gpr[3] = (u32)(s32)(743);

label_80AA7BAC:
    ctx->pc = 0x80AA7BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BACu)) return;
    // 80AA7BAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7BB0:
    ctx->pc = 0x80AA7BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BB0u)) return;
    // 80AA7BB0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AA7BB4:
    ctx->pc = 0x80AA7BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BB4u)) return;
    // 80AA7BB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA7BB8:
    ctx->pc = 0x80AA7BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BB8u)) return;
    // 80AA7BB8: bl      0x80AA90BC
    {
            ctx->lr = 0x80AA7BBCu;
            goto label_80AA90BC;
    }

label_80AA7BBC:
    ctx->pc = 0x80AA7BBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7BBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7BBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7BC0:
    ctx->pc = 0x80AA7BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BC0u)) return;
    // 80AA7BC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7BC4:
    ctx->pc = 0x80AA7BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BC4u)) return;
    // 80AA7BC4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA7BC8:
    ctx->pc = 0x80AA7BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BC8u)) return;
    // 80AA7BC8: addi    r5, r5, -7936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7936);

label_80AA7BCC:
    ctx->pc = 0x80AA7BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BCCu)) return;
    // 80AA7BCC: li      r6, 26368
    ctx->gpr[6] = (u32)(s32)(26368);

label_80AA7BD0:
    ctx->pc = 0x80AA7BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BD0u)) return;
    // 80AA7BD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7BD4:
    ctx->pc = 0x80AA7BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BD4u)) return;
    // 80AA7BD4: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA7BD8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA7BD8:
    ctx->pc = 0x80AA7BD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7BD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA7BD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7BDC:
    ctx->pc = 0x80AA7BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BDCu)) return;
    // 80AA7BDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7BE0:
    ctx->pc = 0x80AA7BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BE0u)) return;
    // 80AA7BE0: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7BE4:
    ctx->pc = 0x80AA7BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BE4u)) return;
    // 80AA7BE4: addi    r5, r5, -18300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18300);

label_80AA7BE8:
    ctx->pc = 0x80AA7BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7BE8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7BE8u)) return;
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
label_80AA7BEC:
    ctx->pc = 0x80AA7BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BECu)) return;
    // 80AA7BEC: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7BF0:
    ctx->pc = 0x80AA7BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BF0u)) return;
    // 80AA7BF0: addi    r5, r5, -18296
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18296);

label_80AA7BF4:
    ctx->pc = 0x80AA7BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7BF4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7BF4u)) return;
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
label_80AA7BF8:
    ctx->pc = 0x80AA7BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BF8u)) return;
    // 80AA7BF8: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7BFC:
    ctx->pc = 0x80AA7BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7BFCu)) return;
    // 80AA7BFC: addi    r5, r5, -18292
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18292);

label_80AA7C00:
    ctx->pc = 0x80AA7C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7C00: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7C00u)) return;
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
label_80AA7C04:
    ctx->pc = 0x80AA7C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C04u)) return;
    // 80AA7C04: bl      0x8045C750
    {
            ctx->lr = 0x80AA7C08u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA7C08:
    ctx->pc = 0x80AA7C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7C08: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7C0C:
    ctx->pc = 0x80AA7C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C0Cu)) return;
    // 80AA7C0C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7C10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7C10:
    ctx->pc = 0x80AA7C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7C10: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7C14:
    ctx->pc = 0x80AA7C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C14u)) return;
    // 80AA7C14: addi    r4, r4, 2600
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2600);

label_80AA7C18:
    ctx->pc = 0x80AA7C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C18u)) return;
    // 80AA7C18: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80AA7C1C:
    ctx->pc = 0x80AA7C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C1Cu)) return;
    // 80AA7C1C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80AA7C20:
    ctx->pc = 0x80AA7C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C20u)) return;
    // 80AA7C20: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA7C24:
    ctx->pc = 0x80AA7C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C24u)) return;
    // 80AA7C24: addi    r6, r6, -18404
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18404);

label_80AA7C28:
    ctx->pc = 0x80AA7C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7C28: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA7C28u)) return;
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
label_80AA7C2C:
    ctx->pc = 0x80AA7C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C2Cu)) return;
    // 80AA7C2C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA7C30:
    ctx->pc = 0x80AA7C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C30u)) return;
    // 80AA7C30: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7C34:
    ctx->pc = 0x80AA7C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C34u)) return;
    // 80AA7C34: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA7C38u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA7C38:
    ctx->pc = 0x80AA7C38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7C38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80AA7C38: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7C3C:
    ctx->pc = 0x80AA7C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C3Cu)) return;
    // 80AA7C3C: addi    r3, r3, 7716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7716);

label_80AA7C40:
    ctx->pc = 0x80AA7C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA7C40: lwz     r3, 0(r3)
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
label_80AA7C44:
    ctx->pc = 0x80AA7C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C44u)) return;
    // 80AA7C44: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7C48:
    ctx->pc = 0x80AA7C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C48u)) return;
    // 80AA7C48: addi    r4, r4, 7704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7704);

label_80AA7C4C:
    ctx->pc = 0x80AA7C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C4Cu)) return;
    // 80AA7C4C: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7C50:
    ctx->pc = 0x80AA7C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C50u)) return;
    // 80AA7C50: addi    r5, r5, 2636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2636);

label_80AA7C54:
    ctx->pc = 0x80AA7C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C54u)) return;
    // 80AA7C54: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA7C58:
    ctx->pc = 0x80AA7C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C58u)) return;
    // 80AA7C58: addi    r6, r6, -18404
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18404);

label_80AA7C5C:
    ctx->pc = 0x80AA7C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7C5C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA7C5Cu)) return;
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
label_80AA7C60:
    ctx->pc = 0x80AA7C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C60u)) return;
    // 80AA7C60: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA7C64:
    ctx->pc = 0x80AA7C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C64u)) return;
    // 80AA7C64: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7C68:
    ctx->pc = 0x80AA7C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C68u)) return;
    // 80AA7C68: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA7C6Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA7C6C:
    ctx->pc = 0x80AA7C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7C6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7C70:
    ctx->pc = 0x80AA7C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C70u)) return;
    // 80AA7C70: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7C74u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7C74:
    ctx->pc = 0x80AA7C74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7C74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7C74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7C78:
    ctx->pc = 0x80AA7C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C78u)) return;
    // 80AA7C78: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80AA7C7C:
    ctx->pc = 0x80AA7C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C7Cu)) return;
    // 80AA7C7C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA7C80:
    ctx->pc = 0x80AA7C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C80u)) return;
    // 80AA7C80: addi    r5, r5, -7936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7936);

label_80AA7C84:
    ctx->pc = 0x80AA7C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C84u)) return;
    // 80AA7C84: li      r6, 26368
    ctx->gpr[6] = (u32)(s32)(26368);

label_80AA7C88:
    ctx->pc = 0x80AA7C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C88u)) return;
    // 80AA7C88: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7C8C:
    ctx->pc = 0x80AA7C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C8Cu)) return;
    // 80AA7C8C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA7C90u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA7C90:
    ctx->pc = 0x80AA7C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA7C90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7C94:
    ctx->pc = 0x80AA7C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C94u)) return;
    // 80AA7C94: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80AA7C98:
    ctx->pc = 0x80AA7C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C98u)) return;
    // 80AA7C98: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7C9C:
    ctx->pc = 0x80AA7C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7C9Cu)) return;
    // 80AA7C9C: addi    r5, r5, -18288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18288);

label_80AA7CA0:
    ctx->pc = 0x80AA7CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7CA0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7CA0u)) return;
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
label_80AA7CA4:
    ctx->pc = 0x80AA7CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CA4u)) return;
    // 80AA7CA4: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7CA8:
    ctx->pc = 0x80AA7CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CA8u)) return;
    // 80AA7CA8: addi    r5, r5, -18284
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18284);

label_80AA7CAC:
    ctx->pc = 0x80AA7CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7CAC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7CACu)) return;
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
label_80AA7CB0:
    ctx->pc = 0x80AA7CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CB0u)) return;
    // 80AA7CB0: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7CB4:
    ctx->pc = 0x80AA7CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CB4u)) return;
    // 80AA7CB4: addi    r5, r5, -18280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18280);

label_80AA7CB8:
    ctx->pc = 0x80AA7CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7CB8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7CB8u)) return;
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
label_80AA7CBC:
    ctx->pc = 0x80AA7CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CBCu)) return;
    // 80AA7CBC: bl      0x8045C750
    {
            ctx->lr = 0x80AA7CC0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA7CC0:
    ctx->pc = 0x80AA7CC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7CC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7CC0: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80AA7CC4:
    ctx->pc = 0x80AA7CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CC4u)) return;
    // 80AA7CC4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7CC8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7CC8:
    ctx->pc = 0x80AA7CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7CC8: bl      0x8045F32C
    {
            ctx->lr = 0x80AA7CCCu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA7CCC:
    ctx->pc = 0x80AA7CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7CCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7CD0:
    ctx->pc = 0x80AA7CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CD0u)) return;
    // 80AA7CD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7CD4:
    ctx->pc = 0x80AA7CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CD4u)) return;
    // 80AA7CD4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AA7CD8:
    ctx->pc = 0x80AA7CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CD8u)) return;
    // 80AA7CD8: addi    r5, r6, -1280
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1280);

label_80AA7CDC:
    ctx->pc = 0x80AA7CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CDCu)) return;
    // 80AA7CDC: addi    r6, r6, -7936
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7936);

label_80AA7CE0:
    ctx->pc = 0x80AA7CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CE0u)) return;
    // 80AA7CE0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7CE4:
    ctx->pc = 0x80AA7CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CE4u)) return;
    // 80AA7CE4: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA7CE8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA7CE8:
    ctx->pc = 0x80AA7CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7CE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7CEC:
    ctx->pc = 0x80AA7CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CECu)) return;
    // 80AA7CEC: bl      0x8045F220
    {
            ctx->lr = 0x80AA7CF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7CF0:
    ctx->pc = 0x80AA7CF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7CF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7CF0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7CF4:
    ctx->pc = 0x80AA7CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CF4u)) return;
    // 80AA7CF4: addi    r4, r4, -9420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9420);

label_80AA7CF8:
    ctx->pc = 0x80AA7CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CF8u)) return;
    // 80AA7CF8: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA7CFC:
    ctx->pc = 0x80AA7CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7CFCu)) return;
    // 80AA7CFC: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA7D00:
    ctx->pc = 0x80AA7D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D00u)) return;
    // 80AA7D00: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA7D04:
    ctx->pc = 0x80AA7D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D04u)) return;
    // 80AA7D04: addi    r6, r6, -18276
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18276);

label_80AA7D08:
    ctx->pc = 0x80AA7D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7D08: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA7D08u)) return;
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
label_80AA7D0C:
    ctx->pc = 0x80AA7D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D0Cu)) return;
    // 80AA7D0C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA7D10:
    ctx->pc = 0x80AA7D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D10u)) return;
    // 80AA7D10: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80AA7D14:
    ctx->pc = 0x80AA7D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D14u)) return;
    // 80AA7D14: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA7D18u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA7D18:
    ctx->pc = 0x80AA7D18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7D18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7D1C:
    ctx->pc = 0x80AA7D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D1Cu)) return;
    // 80AA7D1C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7D20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7D20:
    ctx->pc = 0x80AA7D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7D20: bl      0x8045C034
    {
            ctx->lr = 0x80AA7D24u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7D24:
    ctx->pc = 0x80AA7D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7D24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7D28:
    ctx->pc = 0x80AA7D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D28u)) return;
    // 80AA7D28: bl      0x8045F220
    {
            ctx->lr = 0x80AA7D2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7D2C:
    ctx->pc = 0x80AA7D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7D2C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7D30:
    ctx->pc = 0x80AA7D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D30u)) return;
    // 80AA7D30: addi    r4, r4, -14028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14028);

label_80AA7D34:
    ctx->pc = 0x80AA7D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D34u)) return;
    // 80AA7D34: bl      0x8045C060
    {
            ctx->lr = 0x80AA7D38u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA7D38:
    ctx->pc = 0x80AA7D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7D38: li      r3, 425
    ctx->gpr[3] = (u32)(s32)(425);

label_80AA7D3C:
    ctx->pc = 0x80AA7D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D3Cu)) return;
    // 80AA7D3C: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA7D40u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA7D40:
    ctx->pc = 0x80AA7D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA7D40: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7D44:
    ctx->pc = 0x80AA7D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D44u)) return;
    // 80AA7D44: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA7D48:
    ctx->pc = 0x80AA7D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7D48: lwz     r0, 0(r3)
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
label_80AA7D4C:
    ctx->pc = 0x80AA7D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D4Cu)) return;
    // 80AA7D4C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7D50:
    ctx->pc = 0x80AA7D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D50u)) return;
    // 80AA7D50: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7D54:
    ctx->pc = 0x80AA7D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D54u)) return;
    // 80AA7D54: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA7D58:
    ctx->pc = 0x80AA7D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7D58: lwzx    r3, r3, r0
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
label_80AA7D5C:
    ctx->pc = 0x80AA7D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7D5C: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA7D60:
    ctx->pc = 0x80AA7D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D60u)) return;
    // 80AA7D60: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA7D64u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA7D64:
    ctx->pc = 0x80AA7D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7D64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7D68:
    ctx->pc = 0x80AA7D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D68u)) return;
    // 80AA7D68: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7D6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7D6C:
    ctx->pc = 0x80AA7D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7D6C: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_80AA7D70:
    ctx->pc = 0x80AA7D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D70u)) return;
    // 80AA7D70: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7D74u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7D74:
    ctx->pc = 0x80AA7D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7D74: bl      0x8045F32C
    {
            ctx->lr = 0x80AA7D78u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA7D78:
    ctx->pc = 0x80AA7D78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7D78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7D7C:
    ctx->pc = 0x80AA7D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D7Cu)) return;
    // 80AA7D7C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7D80u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7D80:
    ctx->pc = 0x80AA7D80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7D80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7D80: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80AA7D84:
    ctx->pc = 0x80AA7D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D84u)) return;
    // 80AA7D84: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80AA7D88:
    ctx->pc = 0x80AA7D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D88u)) return;
    // 80AA7D88: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA7D8C:
    ctx->pc = 0x80AA7D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D8Cu)) return;
    // 80AA7D8C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA7D90:
    ctx->pc = 0x80AA7D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D90u)) return;
    // 80AA7D90: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA7D94:
    ctx->pc = 0x80AA7D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D94u)) return;
    // 80AA7D94: addi    r6, r6, -18404
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18404);

label_80AA7D98:
    ctx->pc = 0x80AA7D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA7D98: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA7D98u)) return;
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
label_80AA7D9C:
    ctx->pc = 0x80AA7D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7D9Cu)) return;
    // 80AA7D9C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA7DA0:
    ctx->pc = 0x80AA7DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DA0u)) return;
    // 80AA7DA0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80AA7DA4:
    ctx->pc = 0x80AA7DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DA4u)) return;
    // 80AA7DA4: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA7DA8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA7DA8:
    ctx->pc = 0x80AA7DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7DA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7DAC:
    ctx->pc = 0x80AA7DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DACu)) return;
    // 80AA7DAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7DB0:
    ctx->pc = 0x80AA7DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DB0u)) return;
    // 80AA7DB0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA7DB4:
    ctx->pc = 0x80AA7DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DB4u)) return;
    // 80AA7DB4: addi    r5, r5, -768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-768);

label_80AA7DB8:
    ctx->pc = 0x80AA7DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DB8u)) return;
    // 80AA7DB8: li      r6, 23808
    ctx->gpr[6] = (u32)(s32)(23808);

label_80AA7DBC:
    ctx->pc = 0x80AA7DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DBCu)) return;
    // 80AA7DBC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7DC0:
    ctx->pc = 0x80AA7DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DC0u)) return;
    // 80AA7DC0: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA7DC4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA7DC4:
    ctx->pc = 0x80AA7DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA7DC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7DC8:
    ctx->pc = 0x80AA7DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DC8u)) return;
    // 80AA7DC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA7DCC:
    ctx->pc = 0x80AA7DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DCCu)) return;
    // 80AA7DCC: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7DD0:
    ctx->pc = 0x80AA7DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DD0u)) return;
    // 80AA7DD0: addi    r5, r5, -18272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18272);

label_80AA7DD4:
    ctx->pc = 0x80AA7DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7DD4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7DD4u)) return;
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
label_80AA7DD8:
    ctx->pc = 0x80AA7DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DD8u)) return;
    // 80AA7DD8: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7DDC:
    ctx->pc = 0x80AA7DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DDCu)) return;
    // 80AA7DDC: addi    r5, r5, -18268
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18268);

label_80AA7DE0:
    ctx->pc = 0x80AA7DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7DE0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7DE0u)) return;
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
label_80AA7DE4:
    ctx->pc = 0x80AA7DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DE4u)) return;
    // 80AA7DE4: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7DE8:
    ctx->pc = 0x80AA7DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DE8u)) return;
    // 80AA7DE8: addi    r5, r5, -18264
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18264);

label_80AA7DEC:
    ctx->pc = 0x80AA7DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7DEC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7DECu)) return;
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
label_80AA7DF0:
    ctx->pc = 0x80AA7DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DF0u)) return;
    // 80AA7DF0: bl      0x8045C750
    {
            ctx->lr = 0x80AA7DF4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA7DF4:
    ctx->pc = 0x80AA7DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7DF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7DF8:
    ctx->pc = 0x80AA7DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DF8u)) return;
    // 80AA7DF8: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80AA7DFC:
    ctx->pc = 0x80AA7DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7DFCu)) return;
    // 80AA7DFC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA7E00:
    ctx->pc = 0x80AA7E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E00u)) return;
    // 80AA7E00: addi    r5, r5, -768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-768);

label_80AA7E04:
    ctx->pc = 0x80AA7E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E04u)) return;
    // 80AA7E04: li      r6, 9216
    ctx->gpr[6] = (u32)(s32)(9216);

label_80AA7E08:
    ctx->pc = 0x80AA7E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E08u)) return;
    // 80AA7E08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA7E0C:
    ctx->pc = 0x80AA7E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E0Cu)) return;
    // 80AA7E0C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA7E10u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA7E10:
    ctx->pc = 0x80AA7E10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA7E10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7E14:
    ctx->pc = 0x80AA7E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E14u)) return;
    // 80AA7E14: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80AA7E18:
    ctx->pc = 0x80AA7E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E18u)) return;
    // 80AA7E18: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7E1C:
    ctx->pc = 0x80AA7E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E1Cu)) return;
    // 80AA7E1C: addi    r5, r5, -18260
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18260);

label_80AA7E20:
    ctx->pc = 0x80AA7E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7E20: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7E20u)) return;
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
label_80AA7E24:
    ctx->pc = 0x80AA7E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E24u)) return;
    // 80AA7E24: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7E28:
    ctx->pc = 0x80AA7E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E28u)) return;
    // 80AA7E28: addi    r5, r5, -18256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18256);

label_80AA7E2C:
    ctx->pc = 0x80AA7E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7E2C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7E2Cu)) return;
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
label_80AA7E30:
    ctx->pc = 0x80AA7E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E30u)) return;
    // 80AA7E30: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA7E34:
    ctx->pc = 0x80AA7E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E34u)) return;
    // 80AA7E34: addi    r5, r5, -18252
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18252);

label_80AA7E38:
    ctx->pc = 0x80AA7E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7E38: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA7E38u)) return;
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
label_80AA7E3C:
    ctx->pc = 0x80AA7E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E3Cu)) return;
    // 80AA7E3C: bl      0x8045C750
    {
            ctx->lr = 0x80AA7E40u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA7E40:
    ctx->pc = 0x80AA7E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7E40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7E44:
    ctx->pc = 0x80AA7E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E44u)) return;
    // 80AA7E44: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7E48u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7E48:
    ctx->pc = 0x80AA7E48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7E48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7E4C:
    ctx->pc = 0x80AA7E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E4Cu)) return;
    // 80AA7E4C: bl      0x8045F220
    {
            ctx->lr = 0x80AA7E50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7E50:
    ctx->pc = 0x80AA7E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7E50: bl      0x8045C034
    {
            ctx->lr = 0x80AA7E54u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7E54:
    ctx->pc = 0x80AA7E54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7E54: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AA7E58:
    ctx->pc = 0x80AA7E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E58u)) return;
    // 80AA7E58: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7E5Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7E5C:
    ctx->pc = 0x80AA7E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7E5C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7E60:
    ctx->pc = 0x80AA7E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E60u)) return;
    // 80AA7E60: bl      0x8045F220
    {
            ctx->lr = 0x80AA7E64u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7E64:
    ctx->pc = 0x80AA7E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7E64: bl      0x8045C034
    {
            ctx->lr = 0x80AA7E68u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7E68:
    ctx->pc = 0x80AA7E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7E68: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7E6C:
    ctx->pc = 0x80AA7E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E6Cu)) return;
    // 80AA7E6C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7E70:
    ctx->pc = 0x80AA7E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7E70: lwz     r0, 0(r3)
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
label_80AA7E74:
    ctx->pc = 0x80AA7E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E74u)) return;
    // 80AA7E74: cmpwi   r0, 0
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

label_80AA7E78:
    ctx->pc = 0x80AA7E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E78u)) return;
    // 80AA7E78: bc    4, 2, 0x80AA7E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7E90;
        }
    }

label_80AA7E7C:
    ctx->pc = 0x80AA7E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7E7C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7E80:
    ctx->pc = 0x80AA7E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E80u)) return;
    // 80AA7E80: bl      0x8045F220
    {
            ctx->lr = 0x80AA7E84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7E84:
    ctx->pc = 0x80AA7E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7E84: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7E88:
    ctx->pc = 0x80AA7E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E88u)) return;
    // 80AA7E88: addi    r4, r4, -14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14020);

label_80AA7E8C:
    ctx->pc = 0x80AA7E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E8Cu)) return;
    // 80AA7E8C: bl      0x8045C060
    {
            ctx->lr = 0x80AA7E90u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA7E90:
    ctx->pc = 0x80AA7E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7E90: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7E94:
    ctx->pc = 0x80AA7E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E94u)) return;
    // 80AA7E94: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7E98:
    ctx->pc = 0x80AA7E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7E98: lwz     r0, 0(r3)
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
label_80AA7E9C:
    ctx->pc = 0x80AA7E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7E9Cu)) return;
    // 80AA7E9C: cmpwi   r0, 1
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

label_80AA7EA0:
    ctx->pc = 0x80AA7EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EA0u)) return;
    // 80AA7EA0: bc    4, 2, 0x80AA7EB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7EB8;
        }
    }

label_80AA7EA4:
    ctx->pc = 0x80AA7EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7EA4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7EA8:
    ctx->pc = 0x80AA7EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EA8u)) return;
    // 80AA7EA8: bl      0x8045F220
    {
            ctx->lr = 0x80AA7EACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7EAC:
    ctx->pc = 0x80AA7EACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7EACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7EAC: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7EB0:
    ctx->pc = 0x80AA7EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EB0u)) return;
    // 80AA7EB0: addi    r4, r4, -14008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14008);

label_80AA7EB4:
    ctx->pc = 0x80AA7EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EB4u)) return;
    // 80AA7EB4: bl      0x8045C060
    {
            ctx->lr = 0x80AA7EB8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA7EB8:
    ctx->pc = 0x80AA7EB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7EB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7EB8: li      r3, 426
    ctx->gpr[3] = (u32)(s32)(426);

label_80AA7EBC:
    ctx->pc = 0x80AA7EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EBCu)) return;
    // 80AA7EBC: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA7EC0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA7EC0:
    ctx->pc = 0x80AA7EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7EC0: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80AA7EC4:
    ctx->pc = 0x80AA7EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EC4u)) return;
    // 80AA7EC4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80AA7EC8:
    ctx->pc = 0x80AA7EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EC8u)) return;
    // 80AA7EC8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80AA7ECC:
    ctx->pc = 0x80AA7ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7ECC: lwz     r0, 0(r4)
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
label_80AA7ED0:
    ctx->pc = 0x80AA7ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7ED0u)) return;
    // 80AA7ED0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7ED4:
    ctx->pc = 0x80AA7ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7ED4u)) return;
    // 80AA7ED4: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7ED8:
    ctx->pc = 0x80AA7ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7ED8u)) return;
    // 80AA7ED8: addi    r4, r4, -14156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14156);

label_80AA7EDC:
    ctx->pc = 0x80AA7EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7EDC: lwzx    r4, r4, r0
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
label_80AA7EE0:
    ctx->pc = 0x80AA7EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7EE0: lwz     r4, 40(r4)
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
label_80AA7EE4:
    ctx->pc = 0x80AA7EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EE4u)) return;
    // 80AA7EE4: bl      0x8045F608
    {
            ctx->lr = 0x80AA7EE8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80AA7EE8:
    ctx->pc = 0x80AA7EE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7EE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7EE8: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AA7EEC:
    ctx->pc = 0x80AA7EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EECu)) return;
    // 80AA7EEC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80AA7EF0:
    ctx->pc = 0x80AA7EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EF0u)) return;
    // 80AA7EF0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80AA7EF4:
    ctx->pc = 0x80AA7EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7EF4: lwz     r0, 0(r4)
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
label_80AA7EF8:
    ctx->pc = 0x80AA7EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EF8u)) return;
    // 80AA7EF8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7EFC:
    ctx->pc = 0x80AA7EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7EFCu)) return;
    // 80AA7EFC: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7F00:
    ctx->pc = 0x80AA7F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F00u)) return;
    // 80AA7F00: addi    r4, r4, -14156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14156);

label_80AA7F04:
    ctx->pc = 0x80AA7F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7F04: lwzx    r4, r4, r0
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
label_80AA7F08:
    ctx->pc = 0x80AA7F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7F08: lwz     r4, 44(r4)
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
label_80AA7F0C:
    ctx->pc = 0x80AA7F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F0Cu)) return;
    // 80AA7F0C: bl      0x8045F608
    {
            ctx->lr = 0x80AA7F10u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80AA7F10:
    ctx->pc = 0x80AA7F10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7F10: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7F14:
    ctx->pc = 0x80AA7F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F14u)) return;
    // 80AA7F14: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7F18u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7F18:
    ctx->pc = 0x80AA7F18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7F18: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA7F1Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA7F1C:
    ctx->pc = 0x80AA7F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7F1C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7F20:
    ctx->pc = 0x80AA7F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F20u)) return;
    // 80AA7F20: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7F24:
    ctx->pc = 0x80AA7F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7F24: lwz     r0, 0(r3)
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
label_80AA7F28:
    ctx->pc = 0x80AA7F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F28u)) return;
    // 80AA7F28: cmpwi   r0, 1
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

label_80AA7F2C:
    ctx->pc = 0x80AA7F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F2Cu)) return;
    // 80AA7F2C: bc    4, 2, 0x80AA7F3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7F3C;
        }
    }

label_80AA7F30:
    ctx->pc = 0x80AA7F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7F30: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7F34:
    ctx->pc = 0x80AA7F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F34u)) return;
    // 80AA7F34: bl      0x8045F220
    {
            ctx->lr = 0x80AA7F38u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7F38:
    ctx->pc = 0x80AA7F38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7F38: bl      0x8045C034
    {
            ctx->lr = 0x80AA7F3Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7F3C:
    ctx->pc = 0x80AA7F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7F3C: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80AA7F40:
    ctx->pc = 0x80AA7F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F40u)) return;
    // 80AA7F40: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7F44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7F44:
    ctx->pc = 0x80AA7F44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7F44: li      r3, 427
    ctx->gpr[3] = (u32)(s32)(427);

label_80AA7F48:
    ctx->pc = 0x80AA7F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F48u)) return;
    // 80AA7F48: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA7F4Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA7F4C:
    ctx->pc = 0x80AA7F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA7F4C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7F50:
    ctx->pc = 0x80AA7F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F50u)) return;
    // 80AA7F50: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA7F54:
    ctx->pc = 0x80AA7F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7F54: lwz     r0, 0(r3)
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
label_80AA7F58:
    ctx->pc = 0x80AA7F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F58u)) return;
    // 80AA7F58: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7F5C:
    ctx->pc = 0x80AA7F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F5Cu)) return;
    // 80AA7F5C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7F60:
    ctx->pc = 0x80AA7F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F60u)) return;
    // 80AA7F60: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA7F64:
    ctx->pc = 0x80AA7F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7F64: lwzx    r3, r3, r0
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
label_80AA7F68:
    ctx->pc = 0x80AA7F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7F68: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA7F6C:
    ctx->pc = 0x80AA7F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F6Cu)) return;
    // 80AA7F6C: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA7F70u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA7F70:
    ctx->pc = 0x80AA7F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7F70: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7F74:
    ctx->pc = 0x80AA7F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F74u)) return;
    // 80AA7F74: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7F78:
    ctx->pc = 0x80AA7F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7F78: lwz     r0, 0(r3)
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
label_80AA7F7C:
    ctx->pc = 0x80AA7F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F7Cu)) return;
    // 80AA7F7C: cmpwi   r0, 1
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

label_80AA7F80:
    ctx->pc = 0x80AA7F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F80u)) return;
    // 80AA7F80: bc    4, 2, 0x80AA7F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7F98;
        }
    }

label_80AA7F84:
    ctx->pc = 0x80AA7F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7F84: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7F88:
    ctx->pc = 0x80AA7F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F88u)) return;
    // 80AA7F88: bl      0x8045F220
    {
            ctx->lr = 0x80AA7F8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7F8C:
    ctx->pc = 0x80AA7F8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7F8C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA7F90:
    ctx->pc = 0x80AA7F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F90u)) return;
    // 80AA7F90: addi    r4, r4, -14008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14008);

label_80AA7F94:
    ctx->pc = 0x80AA7F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F94u)) return;
    // 80AA7F94: bl      0x8045C060
    {
            ctx->lr = 0x80AA7F98u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA7F98:
    ctx->pc = 0x80AA7F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7F98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA7F9C:
    ctx->pc = 0x80AA7F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7F9Cu)) return;
    // 80AA7F9C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA7FA0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA7FA0:
    ctx->pc = 0x80AA7FA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7FA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7FA0: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA7FA4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA7FA4:
    ctx->pc = 0x80AA7FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7FA4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7FA8:
    ctx->pc = 0x80AA7FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FA8u)) return;
    // 80AA7FA8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7FAC:
    ctx->pc = 0x80AA7FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7FAC: lwz     r0, 0(r3)
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
label_80AA7FB0:
    ctx->pc = 0x80AA7FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FB0u)) return;
    // 80AA7FB0: cmpwi   r0, 1
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

label_80AA7FB4:
    ctx->pc = 0x80AA7FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FB4u)) return;
    // 80AA7FB4: bc    4, 2, 0x80AA7FC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7FC4;
        }
    }

label_80AA7FB8:
    ctx->pc = 0x80AA7FB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7FB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7FB8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA7FBC:
    ctx->pc = 0x80AA7FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FBCu)) return;
    // 80AA7FBC: bl      0x8045F220
    {
            ctx->lr = 0x80AA7FC0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA7FC0:
    ctx->pc = 0x80AA7FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7FC0: bl      0x8045C034
    {
            ctx->lr = 0x80AA7FC4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA7FC4:
    ctx->pc = 0x80AA7FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA7FC4: li      r3, 428
    ctx->gpr[3] = (u32)(s32)(428);

label_80AA7FC8:
    ctx->pc = 0x80AA7FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FC8u)) return;
    // 80AA7FC8: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA7FCCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA7FCC:
    ctx->pc = 0x80AA7FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA7FCC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7FD0:
    ctx->pc = 0x80AA7FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FD0u)) return;
    // 80AA7FD0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA7FD4:
    ctx->pc = 0x80AA7FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7FD4: lwz     r0, 0(r3)
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
label_80AA7FD8:
    ctx->pc = 0x80AA7FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FD8u)) return;
    // 80AA7FD8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA7FDC:
    ctx->pc = 0x80AA7FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FDCu)) return;
    // 80AA7FDC: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7FE0:
    ctx->pc = 0x80AA7FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FE0u)) return;
    // 80AA7FE0: addi    r3, r3, -14156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14156);

label_80AA7FE4:
    ctx->pc = 0x80AA7FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7FE4: lwzx    r3, r3, r0
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
label_80AA7FE8:
    ctx->pc = 0x80AA7FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA7FE8: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA7FEC:
    ctx->pc = 0x80AA7FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FECu)) return;
    // 80AA7FEC: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA7FF0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA7FF0:
    ctx->pc = 0x80AA7FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA7FF0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA7FF4:
    ctx->pc = 0x80AA7FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FF4u)) return;
    // 80AA7FF4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA7FF8:
    ctx->pc = 0x80AA7FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7FF8: lwz     r0, 0(r3)
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
label_80AA7FFC:
    ctx->pc = 0x80AA7FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7FFCu)) return;
    // 80AA7FFC: cmpwi   r0, 1
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

label_80AA8000:
    ctx->pc = 0x80AA8000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8000u)) return;
    // 80AA8000: bc    4, 2, 0x80AA8018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8018;
        }
    }

label_80AA8004:
    ctx->pc = 0x80AA8004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8004: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8008:
    ctx->pc = 0x80AA8008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8008u)) return;
    // 80AA8008: bl      0x8045F220
    {
            ctx->lr = 0x80AA800Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA800C:
    ctx->pc = 0x80AA800Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA800Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA800C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8010:
    ctx->pc = 0x80AA8010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8010u)) return;
    // 80AA8010: addi    r4, r4, -14008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14008);

label_80AA8014:
    ctx->pc = 0x80AA8014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8014u)) return;
    // 80AA8014: bl      0x8045C060
    {
            ctx->lr = 0x80AA8018u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA8018:
    ctx->pc = 0x80AA8018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8018: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA801C:
    ctx->pc = 0x80AA801Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA801Cu)) return;
    // 80AA801C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8020u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8020:
    ctx->pc = 0x80AA8020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8020: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA8024u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA8024:
    ctx->pc = 0x80AA8024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8024: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA8028:
    ctx->pc = 0x80AA8028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8028u)) return;
    // 80AA8028: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA802C:
    ctx->pc = 0x80AA802Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA802Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA802C: lwz     r0, 0(r3)
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
label_80AA8030:
    ctx->pc = 0x80AA8030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8030u)) return;
    // 80AA8030: cmpwi   r0, 0
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

label_80AA8034:
    ctx->pc = 0x80AA8034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8034u)) return;
    // 80AA8034: bc    4, 2, 0x80AA8044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8044;
        }
    }

label_80AA8038:
    ctx->pc = 0x80AA8038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8038: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA803C:
    ctx->pc = 0x80AA803Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA803Cu)) return;
    // 80AA803C: bl      0x8045F220
    {
            ctx->lr = 0x80AA8040u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8040:
    ctx->pc = 0x80AA8040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8040: bl      0x8045C034
    {
            ctx->lr = 0x80AA8044u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA8044:
    ctx->pc = 0x80AA8044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8044: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA8048:
    ctx->pc = 0x80AA8048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8048u)) return;
    // 80AA8048: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA804C:
    ctx->pc = 0x80AA804Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA804Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA804C: lwz     r0, 0(r3)
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
label_80AA8050:
    ctx->pc = 0x80AA8050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8050u)) return;
    // 80AA8050: cmpwi   r0, 1
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

label_80AA8054:
    ctx->pc = 0x80AA8054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8054u)) return;
    // 80AA8054: bc    4, 2, 0x80AA8064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8064;
        }
    }

label_80AA8058:
    ctx->pc = 0x80AA8058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8058: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA805C:
    ctx->pc = 0x80AA805Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA805Cu)) return;
    // 80AA805C: bl      0x8045F220
    {
            ctx->lr = 0x80AA8060u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8060:
    ctx->pc = 0x80AA8060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8060: bl      0x8045C034
    {
            ctx->lr = 0x80AA8064u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA8064:
    ctx->pc = 0x80AA8064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8064: bl      0x8045F300
    {
            ctx->lr = 0x80AA8068u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80AA8068:
    ctx->pc = 0x80AA8068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8068: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_80AA806C:
    ctx->pc = 0x80AA806Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA806Cu)) return;
    // 80AA806C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8070u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8070:
    ctx->pc = 0x80AA8070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8070: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8074:
    ctx->pc = 0x80AA8074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8074u)) return;
    // 80AA8074: bl      0x8045F220
    {
            ctx->lr = 0x80AA8078u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8078:
    ctx->pc = 0x80AA8078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8078: bl      0x8045C034
    {
            ctx->lr = 0x80AA807Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA807C:
    ctx->pc = 0x80AA807Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA807Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA807C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA8080:
    ctx->pc = 0x80AA8080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8080u)) return;
    // 80AA8080: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA8084:
    ctx->pc = 0x80AA8084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8084: lwz     r0, 0(r3)
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
label_80AA8088:
    ctx->pc = 0x80AA8088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8088u)) return;
    // 80AA8088: cmpwi   r0, 0
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

label_80AA808C:
    ctx->pc = 0x80AA808Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA808Cu)) return;
    // 80AA808C: bc    4, 2, 0x80AA80A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA80A4;
        }
    }

label_80AA8090:
    ctx->pc = 0x80AA8090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8090: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8094:
    ctx->pc = 0x80AA8094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8094u)) return;
    // 80AA8094: bl      0x8045F220
    {
            ctx->lr = 0x80AA8098u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8098:
    ctx->pc = 0x80AA8098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA8098: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA809C:
    ctx->pc = 0x80AA809Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA809Cu)) return;
    // 80AA809C: addi    r4, r4, -14000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14000);

label_80AA80A0:
    ctx->pc = 0x80AA80A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80A0u)) return;
    // 80AA80A0: bl      0x8045C060
    {
            ctx->lr = 0x80AA80A4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA80A4:
    ctx->pc = 0x80AA80A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA80A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA80A4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA80A8:
    ctx->pc = 0x80AA80A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80A8u)) return;
    // 80AA80A8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA80AC:
    ctx->pc = 0x80AA80ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA80AC: lwz     r0, 0(r3)
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
label_80AA80B0:
    ctx->pc = 0x80AA80B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80B0u)) return;
    // 80AA80B0: cmpwi   r0, 1
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

label_80AA80B4:
    ctx->pc = 0x80AA80B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80B4u)) return;
    // 80AA80B4: bc    4, 2, 0x80AA80CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA80CC;
        }
    }

label_80AA80B8:
    ctx->pc = 0x80AA80B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA80B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA80B8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA80BC:
    ctx->pc = 0x80AA80BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80BCu)) return;
    // 80AA80BC: bl      0x8045F220
    {
            ctx->lr = 0x80AA80C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA80C0:
    ctx->pc = 0x80AA80C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA80C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA80C0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA80C4:
    ctx->pc = 0x80AA80C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80C4u)) return;
    // 80AA80C4: addi    r4, r4, -13996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13996);

label_80AA80C8:
    ctx->pc = 0x80AA80C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80C8u)) return;
    // 80AA80C8: bl      0x8045C060
    {
            ctx->lr = 0x80AA80CCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA80CC:
    ctx->pc = 0x80AA80CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA80CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA80CC: li      r3, 429
    ctx->gpr[3] = (u32)(s32)(429);

label_80AA80D0:
    ctx->pc = 0x80AA80D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80D0u)) return;
    // 80AA80D0: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA80D4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA80D4:
    ctx->pc = 0x80AA80D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA80D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA80D4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80AA80D8:
    ctx->pc = 0x80AA80D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80D8u)) return;
    // 80AA80D8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80AA80DC:
    ctx->pc = 0x80AA80DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80DCu)) return;
    // 80AA80DC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80AA80E0:
    ctx->pc = 0x80AA80E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA80E0: lwz     r0, 0(r4)
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
label_80AA80E4:
    ctx->pc = 0x80AA80E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80E4u)) return;
    // 80AA80E4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA80E8:
    ctx->pc = 0x80AA80E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80E8u)) return;
    // 80AA80E8: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA80EC:
    ctx->pc = 0x80AA80ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80ECu)) return;
    // 80AA80EC: addi    r4, r4, -14156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14156);

label_80AA80F0:
    ctx->pc = 0x80AA80F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA80F0: lwzx    r4, r4, r0
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
label_80AA80F4:
    ctx->pc = 0x80AA80F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA80F4: lwz     r4, 56(r4)
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
label_80AA80F8:
    ctx->pc = 0x80AA80F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA80F8u)) return;
    // 80AA80F8: bl      0x8045F608
    {
            ctx->lr = 0x80AA80FCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80AA80FC:
    ctx->pc = 0x80AA80FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA80FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA80FC: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80AA8100:
    ctx->pc = 0x80AA8100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8100u)) return;
    // 80AA8100: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80AA8104:
    ctx->pc = 0x80AA8104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8104u)) return;
    // 80AA8104: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80AA8108:
    ctx->pc = 0x80AA8108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8108: lwz     r0, 0(r4)
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
label_80AA810C:
    ctx->pc = 0x80AA810Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA810Cu)) return;
    // 80AA810C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA8110:
    ctx->pc = 0x80AA8110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8110u)) return;
    // 80AA8110: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8114:
    ctx->pc = 0x80AA8114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8114u)) return;
    // 80AA8114: addi    r4, r4, -14156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14156);

label_80AA8118:
    ctx->pc = 0x80AA8118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8118: lwzx    r4, r4, r0
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
label_80AA811C:
    ctx->pc = 0x80AA811Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA811Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA811C: lwz     r4, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8120:
    ctx->pc = 0x80AA8120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8120u)) return;
    // 80AA8120: bl      0x8045F608
    {
            ctx->lr = 0x80AA8124u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80AA8124:
    ctx->pc = 0x80AA8124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8124: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8128:
    ctx->pc = 0x80AA8128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8128u)) return;
    // 80AA8128: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA812Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA812C:
    ctx->pc = 0x80AA812Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA812Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA812C: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA8130u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA8130:
    ctx->pc = 0x80AA8130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8130: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA8134:
    ctx->pc = 0x80AA8134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8134u)) return;
    // 80AA8134: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA8138:
    ctx->pc = 0x80AA8138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8138: lwz     r0, 0(r3)
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
label_80AA813C:
    ctx->pc = 0x80AA813Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA813Cu)) return;
    // 80AA813C: cmpwi   r0, 0
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

label_80AA8140:
    ctx->pc = 0x80AA8140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8140u)) return;
    // 80AA8140: bc    4, 2, 0x80AA8150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8150;
        }
    }

label_80AA8144:
    ctx->pc = 0x80AA8144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8144: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8148:
    ctx->pc = 0x80AA8148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8148u)) return;
    // 80AA8148: bl      0x8045F220
    {
            ctx->lr = 0x80AA814Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA814C:
    ctx->pc = 0x80AA814Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA814Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA814C: bl      0x8045C034
    {
            ctx->lr = 0x80AA8150u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA8150:
    ctx->pc = 0x80AA8150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8150: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA8154:
    ctx->pc = 0x80AA8154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8154u)) return;
    // 80AA8154: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA8158:
    ctx->pc = 0x80AA8158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8158: lwz     r0, 0(r3)
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
label_80AA815C:
    ctx->pc = 0x80AA815Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA815Cu)) return;
    // 80AA815C: cmpwi   r0, 1
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

label_80AA8160:
    ctx->pc = 0x80AA8160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8160u)) return;
    // 80AA8160: bc    4, 2, 0x80AA8170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8170;
        }
    }

label_80AA8164:
    ctx->pc = 0x80AA8164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8164: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8168:
    ctx->pc = 0x80AA8168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8168u)) return;
    // 80AA8168: bl      0x8045F220
    {
            ctx->lr = 0x80AA816Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA816C:
    ctx->pc = 0x80AA816Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA816Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA816C: bl      0x8045C034
    {
            ctx->lr = 0x80AA8170u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA8170:
    ctx->pc = 0x80AA8170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8170: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8174:
    ctx->pc = 0x80AA8174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8174u)) return;
    // 80AA8174: bl      0x8045F220
    {
            ctx->lr = 0x80AA8178u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8178:
    ctx->pc = 0x80AA8178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA8178: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA817C:
    ctx->pc = 0x80AA817Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA817Cu)) return;
    // 80AA817C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8180:
    ctx->pc = 0x80AA8180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8180u)) return;
    // 80AA8180: bl      0x8045F220
    {
            ctx->lr = 0x80AA8184u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8184:
    ctx->pc = 0x80AA8184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA8184: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA8188:
    ctx->pc = 0x80AA8188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8188u)) return;
    // 80AA8188: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA818C:
    ctx->pc = 0x80AA818Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA818Cu)) return;
    // 80AA818C: addi    r5, r5, -18380
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18380);

label_80AA8190:
    ctx->pc = 0x80AA8190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8190: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8190u)) return;
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
label_80AA8194:
    ctx->pc = 0x80AA8194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8194u)) return;
    // 80AA8194: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA8198:
    ctx->pc = 0x80AA8198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8198u)) return;
    // 80AA8198: addi    r5, r5, -18376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18376);

label_80AA819C:
    ctx->pc = 0x80AA819Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA819Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA819C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA819Cu)) return;
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
label_80AA81A0:
    ctx->pc = 0x80AA81A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81A0u)) return;
    // 80AA81A0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA81A0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80AA81A4:
    ctx->pc = 0x80AA81A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81A4u)) return;
    // 80AA81A4: bl      0x8045E734
    {
            ctx->lr = 0x80AA81A8u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80AA81A8:
    ctx->pc = 0x80AA81A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA81A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA81A8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA81AC:
    ctx->pc = 0x80AA81ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81ACu)) return;
    // 80AA81AC: bl      0x8045F220
    {
            ctx->lr = 0x80AA81B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA81B0:
    ctx->pc = 0x80AA81B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA81B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA81B0: bl      0x8045E760
    {
            ctx->lr = 0x80AA81B4u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80AA81B4:
    ctx->pc = 0x80AA81B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA81B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA81B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA81B8:
    ctx->pc = 0x80AA81B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81B8u)) return;
    // 80AA81B8: bl      0x8045F220
    {
            ctx->lr = 0x80AA81BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA81BC:
    ctx->pc = 0x80AA81BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA81BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA81BC: lwz     r29, 32(r3)
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
label_80AA81C0:
    ctx->pc = 0x80AA81C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81C0u)) return;
    // 80AA81C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA81C4:
    ctx->pc = 0x80AA81C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81C4u)) return;
    // 80AA81C4: bl      0x8045F220
    {
            ctx->lr = 0x80AA81C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA81C8:
    ctx->pc = 0x80AA81C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA81C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA81C8: lwz     r30, 32(r3)
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
label_80AA81CC:
    ctx->pc = 0x80AA81CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81CCu)) return;
    // 80AA81CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA81D0:
    ctx->pc = 0x80AA81D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81D0u)) return;
    // 80AA81D0: bl      0x8045F220
    {
            ctx->lr = 0x80AA81D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA81D4:
    ctx->pc = 0x80AA81D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA81D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA81D4: lwz     r31, 32(r3)
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
label_80AA81D8:
    ctx->pc = 0x80AA81D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81D8u)) return;
    // 80AA81D8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA81DC:
    ctx->pc = 0x80AA81DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81DCu)) return;
    // 80AA81DC: bl      0x8045F220
    {
            ctx->lr = 0x80AA81E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA81E0:
    ctx->pc = 0x80AA81E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA81E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA81E0: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA81E0u)) return;
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
label_80AA81E4:
    ctx->pc = 0x80AA81E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA81E4: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA81E4u)) return;
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
label_80AA81E8:
    ctx->pc = 0x80AA81E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA81E8: lfs     f3, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80AA81E8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
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
label_80AA81EC:
    ctx->pc = 0x80AA81ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81ECu)) return;
    // 80AA81EC: bl      0x8045E70C
    {
            ctx->lr = 0x80AA81F0u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80AA81F0:
    ctx->pc = 0x80AA81F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA81F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA81F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA81F4:
    ctx->pc = 0x80AA81F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81F4u)) return;
    // 80AA81F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA81F8:
    ctx->pc = 0x80AA81F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81F8u)) return;
    // 80AA81F8: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA81FC:
    ctx->pc = 0x80AA81FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA81FCu)) return;
    // 80AA81FC: addi    r5, r5, -18248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18248);

label_80AA8200:
    ctx->pc = 0x80AA8200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8200: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8200u)) return;
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
label_80AA8204:
    ctx->pc = 0x80AA8204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8204u)) return;
    // 80AA8204: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA8208:
    ctx->pc = 0x80AA8208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8208u)) return;
    // 80AA8208: addi    r5, r5, -18244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18244);

label_80AA820C:
    ctx->pc = 0x80AA820Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA820Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA820C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA820Cu)) return;
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
label_80AA8210:
    ctx->pc = 0x80AA8210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8210u)) return;
    // 80AA8210: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA8214:
    ctx->pc = 0x80AA8214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8214u)) return;
    // 80AA8214: addi    r5, r5, -18240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18240);

label_80AA8218:
    ctx->pc = 0x80AA8218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8218: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8218u)) return;
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
label_80AA821C:
    ctx->pc = 0x80AA821Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA821Cu)) return;
    // 80AA821C: bl      0x8045C750
    {
            ctx->lr = 0x80AA8220u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA8220:
    ctx->pc = 0x80AA8220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA8220: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8224:
    ctx->pc = 0x80AA8224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8224u)) return;
    // 80AA8224: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8228:
    ctx->pc = 0x80AA8228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8228u)) return;
    // 80AA8228: li      r5, 2816
    ctx->gpr[5] = (u32)(s32)(2816);

label_80AA822C:
    ctx->pc = 0x80AA822Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA822Cu)) return;
    // 80AA822C: li      r6, 6144
    ctx->gpr[6] = (u32)(s32)(6144);

label_80AA8230:
    ctx->pc = 0x80AA8230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8230u)) return;
    // 80AA8230: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA8234:
    ctx->pc = 0x80AA8234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8234u)) return;
    // 80AA8234: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA8238u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA8238:
    ctx->pc = 0x80AA8238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8238: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA823C:
    ctx->pc = 0x80AA823Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA823Cu)) return;
    // 80AA823C: bl      0x8045F220
    {
            ctx->lr = 0x80AA8240u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8240:
    ctx->pc = 0x80AA8240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8240: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA8244u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA8244:
    ctx->pc = 0x80AA8244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA8244: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8248:
    ctx->pc = 0x80AA8248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8248u)) return;
    // 80AA8248: addi    r3, r3, 7716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7716);

label_80AA824C:
    ctx->pc = 0x80AA824Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA824Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA824C: lwz     r3, 0(r3)
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
label_80AA8250:
    ctx->pc = 0x80AA8250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8250u)) return;
    // 80AA8250: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA8254u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA8254:
    ctx->pc = 0x80AA8254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8254: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8258:
    ctx->pc = 0x80AA8258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8258u)) return;
    // 80AA8258: bl      0x8045F220
    {
            ctx->lr = 0x80AA825Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA825C:
    ctx->pc = 0x80AA825Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA825Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AA825C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8260:
    ctx->pc = 0x80AA8260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8260u)) return;
    // 80AA8260: addi    r4, r4, -18236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18236);

label_80AA8264:
    ctx->pc = 0x80AA8264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA8264: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8264u)) return;
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
label_80AA8268:
    ctx->pc = 0x80AA8268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8268u)) return;
    // 80AA8268: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA826C:
    ctx->pc = 0x80AA826Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA826Cu)) return;
    // 80AA826C: addi    r4, r4, -18380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18380);

label_80AA8270:
    ctx->pc = 0x80AA8270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8270: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8270u)) return;
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
label_80AA8274:
    ctx->pc = 0x80AA8274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8274u)) return;
    // 80AA8274: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8278:
    ctx->pc = 0x80AA8278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8278u)) return;
    // 80AA8278: addi    r4, r4, -18232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18232);

label_80AA827C:
    ctx->pc = 0x80AA827Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA827Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA827C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA827Cu)) return;
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
label_80AA8280:
    ctx->pc = 0x80AA8280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8280u)) return;
    // 80AA8280: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8284:
    ctx->pc = 0x80AA8284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8284u)) return;
    // 80AA8284: addi    r4, r4, -18228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18228);

label_80AA8288:
    ctx->pc = 0x80AA8288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8288: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8288u)) return;
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
label_80AA828C:
    ctx->pc = 0x80AA828Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA828Cu)) return;
    // 80AA828C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8290:
    ctx->pc = 0x80AA8290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8290u)) return;
    // 80AA8290: addi    r4, r4, -18224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18224);

label_80AA8294:
    ctx->pc = 0x80AA8294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8294: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8294u)) return;
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
label_80AA8298:
    ctx->pc = 0x80AA8298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8298u)) return;
    // 80AA8298: bl      0x8045E570
    {
            ctx->lr = 0x80AA829Cu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80AA829C:
    ctx->pc = 0x80AA829Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA829Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA829C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80AA82A0:
    ctx->pc = 0x80AA82A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82A0u)) return;
    // 80AA82A0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA82A4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA82A4:
    ctx->pc = 0x80AA82A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA82A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA82A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA82A8:
    ctx->pc = 0x80AA82A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82A8u)) return;
    // 80AA82A8: bl      0x8045F220
    {
            ctx->lr = 0x80AA82ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA82AC:
    ctx->pc = 0x80AA82ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA82ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA82AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA82B0:
    ctx->pc = 0x80AA82B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82B0u)) return;
    // 80AA82B0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA82B4:
    ctx->pc = 0x80AA82B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82B4u)) return;
    // 80AA82B4: addi    r5, r5, -13824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13824);

label_80AA82B8:
    ctx->pc = 0x80AA82B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82B8u)) return;
    // 80AA82B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA82BC:
    ctx->pc = 0x80AA82BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82BCu)) return;
    // 80AA82BC: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA82C0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA82C0:
    ctx->pc = 0x80AA82C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA82C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA82C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA82C4:
    ctx->pc = 0x80AA82C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82C4u)) return;
    // 80AA82C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA82C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA82C8:
    ctx->pc = 0x80AA82C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA82C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA82C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA82CC:
    ctx->pc = 0x80AA82CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82CCu)) return;
    // 80AA82CC: bl      0x8045F220
    {
            ctx->lr = 0x80AA82D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA82D0:
    ctx->pc = 0x80AA82D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA82D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA82D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA82D4:
    ctx->pc = 0x80AA82D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82D4u)) return;
    // 80AA82D4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA82D8:
    ctx->pc = 0x80AA82D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82D8u)) return;
    // 80AA82D8: addi    r5, r5, -14336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14336);

label_80AA82DC:
    ctx->pc = 0x80AA82DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82DCu)) return;
    // 80AA82DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA82E0:
    ctx->pc = 0x80AA82E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82E0u)) return;
    // 80AA82E0: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA82E4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA82E4:
    ctx->pc = 0x80AA82E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA82E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA82E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA82E8:
    ctx->pc = 0x80AA82E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82E8u)) return;
    // 80AA82E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA82ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA82EC:
    ctx->pc = 0x80AA82ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA82ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA82EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA82F0:
    ctx->pc = 0x80AA82F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82F0u)) return;
    // 80AA82F0: bl      0x8045F220
    {
            ctx->lr = 0x80AA82F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA82F4:
    ctx->pc = 0x80AA82F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA82F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA82F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA82F8:
    ctx->pc = 0x80AA82F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82F8u)) return;
    // 80AA82F8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA82FC:
    ctx->pc = 0x80AA82FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA82FCu)) return;
    // 80AA82FC: addi    r5, r5, -14848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14848);

label_80AA8300:
    ctx->pc = 0x80AA8300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8300u)) return;
    // 80AA8300: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8304:
    ctx->pc = 0x80AA8304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8304u)) return;
    // 80AA8304: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8308u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8308:
    ctx->pc = 0x80AA8308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8308: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA830C:
    ctx->pc = 0x80AA830Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA830Cu)) return;
    // 80AA830C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8310u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8310:
    ctx->pc = 0x80AA8310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8310: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8314:
    ctx->pc = 0x80AA8314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8314u)) return;
    // 80AA8314: bl      0x8045F220
    {
            ctx->lr = 0x80AA8318u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8318:
    ctx->pc = 0x80AA8318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8318: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA831C:
    ctx->pc = 0x80AA831Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA831Cu)) return;
    // 80AA831C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8320:
    ctx->pc = 0x80AA8320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8320u)) return;
    // 80AA8320: addi    r5, r5, -15360
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15360);

label_80AA8324:
    ctx->pc = 0x80AA8324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8324u)) return;
    // 80AA8324: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8328:
    ctx->pc = 0x80AA8328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8328u)) return;
    // 80AA8328: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA832Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA832C:
    ctx->pc = 0x80AA832Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA832Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA832C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8330:
    ctx->pc = 0x80AA8330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8330u)) return;
    // 80AA8330: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8334u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8334:
    ctx->pc = 0x80AA8334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8334: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8338:
    ctx->pc = 0x80AA8338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8338u)) return;
    // 80AA8338: bl      0x8045F220
    {
            ctx->lr = 0x80AA833Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA833C:
    ctx->pc = 0x80AA833Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA833Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA833C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8340:
    ctx->pc = 0x80AA8340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8340u)) return;
    // 80AA8340: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8344:
    ctx->pc = 0x80AA8344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8344u)) return;
    // 80AA8344: addi    r5, r5, -15872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15872);

label_80AA8348:
    ctx->pc = 0x80AA8348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8348u)) return;
    // 80AA8348: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA834C:
    ctx->pc = 0x80AA834Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA834Cu)) return;
    // 80AA834C: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8350u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8350:
    ctx->pc = 0x80AA8350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8350: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8354:
    ctx->pc = 0x80AA8354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8354u)) return;
    // 80AA8354: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8358u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8358:
    ctx->pc = 0x80AA8358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA835C:
    ctx->pc = 0x80AA835Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA835Cu)) return;
    // 80AA835C: bl      0x8045F220
    {
            ctx->lr = 0x80AA8360u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8360:
    ctx->pc = 0x80AA8360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8360: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8364:
    ctx->pc = 0x80AA8364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8364u)) return;
    // 80AA8364: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8368:
    ctx->pc = 0x80AA8368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8368u)) return;
    // 80AA8368: addi    r5, r5, -16384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16384);

label_80AA836C:
    ctx->pc = 0x80AA836Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA836Cu)) return;
    // 80AA836C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8370:
    ctx->pc = 0x80AA8370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8370u)) return;
    // 80AA8370: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8374u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8374:
    ctx->pc = 0x80AA8374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8374: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8378:
    ctx->pc = 0x80AA8378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8378u)) return;
    // 80AA8378: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA837Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA837C:
    ctx->pc = 0x80AA837Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA837Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA837C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8380:
    ctx->pc = 0x80AA8380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8380u)) return;
    // 80AA8380: bl      0x8045F220
    {
            ctx->lr = 0x80AA8384u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8384:
    ctx->pc = 0x80AA8384u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8384u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8384: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8388:
    ctx->pc = 0x80AA8388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8388u)) return;
    // 80AA8388: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA838C:
    ctx->pc = 0x80AA838Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA838Cu)) return;
    // 80AA838C: addi    r5, r5, -16896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16896);

label_80AA8390:
    ctx->pc = 0x80AA8390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8390u)) return;
    // 80AA8390: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8394:
    ctx->pc = 0x80AA8394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8394u)) return;
    // 80AA8394: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8398u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8398:
    ctx->pc = 0x80AA8398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8398: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA839C:
    ctx->pc = 0x80AA839Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA839Cu)) return;
    // 80AA839C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA83A0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA83A0:
    ctx->pc = 0x80AA83A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA83A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA83A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA83A4:
    ctx->pc = 0x80AA83A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83A4u)) return;
    // 80AA83A4: bl      0x8045F220
    {
            ctx->lr = 0x80AA83A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA83A8:
    ctx->pc = 0x80AA83A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA83A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA83A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA83AC:
    ctx->pc = 0x80AA83ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83ACu)) return;
    // 80AA83AC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA83B0:
    ctx->pc = 0x80AA83B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83B0u)) return;
    // 80AA83B0: addi    r5, r5, -17408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17408);

label_80AA83B4:
    ctx->pc = 0x80AA83B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83B4u)) return;
    // 80AA83B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA83B8:
    ctx->pc = 0x80AA83B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83B8u)) return;
    // 80AA83B8: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA83BCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA83BC:
    ctx->pc = 0x80AA83BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA83BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA83BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA83C0:
    ctx->pc = 0x80AA83C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83C0u)) return;
    // 80AA83C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA83C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA83C4:
    ctx->pc = 0x80AA83C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA83C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA83C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA83C8:
    ctx->pc = 0x80AA83C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83C8u)) return;
    // 80AA83C8: bl      0x8045F220
    {
            ctx->lr = 0x80AA83CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA83CC:
    ctx->pc = 0x80AA83CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA83CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA83CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA83D0:
    ctx->pc = 0x80AA83D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83D0u)) return;
    // 80AA83D0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA83D4:
    ctx->pc = 0x80AA83D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83D4u)) return;
    // 80AA83D4: addi    r5, r5, -17920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17920);

label_80AA83D8:
    ctx->pc = 0x80AA83D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83D8u)) return;
    // 80AA83D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA83DC:
    ctx->pc = 0x80AA83DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83DCu)) return;
    // 80AA83DC: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA83E0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA83E0:
    ctx->pc = 0x80AA83E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA83E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA83E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA83E4:
    ctx->pc = 0x80AA83E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83E4u)) return;
    // 80AA83E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA83E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA83E8:
    ctx->pc = 0x80AA83E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA83E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA83E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA83EC:
    ctx->pc = 0x80AA83ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83ECu)) return;
    // 80AA83EC: bl      0x8045F220
    {
            ctx->lr = 0x80AA83F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA83F0:
    ctx->pc = 0x80AA83F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA83F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA83F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA83F4:
    ctx->pc = 0x80AA83F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83F4u)) return;
    // 80AA83F4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA83F8:
    ctx->pc = 0x80AA83F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83F8u)) return;
    // 80AA83F8: addi    r5, r5, -18432
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18432);

label_80AA83FC:
    ctx->pc = 0x80AA83FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA83FCu)) return;
    // 80AA83FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8400:
    ctx->pc = 0x80AA8400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8400u)) return;
    // 80AA8400: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8404u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8404:
    ctx->pc = 0x80AA8404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8404: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8408:
    ctx->pc = 0x80AA8408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8408u)) return;
    // 80AA8408: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA840Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA840C:
    ctx->pc = 0x80AA840Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA840Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA840C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8410:
    ctx->pc = 0x80AA8410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8410u)) return;
    // 80AA8410: bl      0x8045F220
    {
            ctx->lr = 0x80AA8414u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8414:
    ctx->pc = 0x80AA8414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8414: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8418:
    ctx->pc = 0x80AA8418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8418u)) return;
    // 80AA8418: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA841C:
    ctx->pc = 0x80AA841Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA841Cu)) return;
    // 80AA841C: addi    r5, r5, -19456
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19456);

label_80AA8420:
    ctx->pc = 0x80AA8420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8420u)) return;
    // 80AA8420: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8424:
    ctx->pc = 0x80AA8424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8424u)) return;
    // 80AA8424: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8428u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8428:
    ctx->pc = 0x80AA8428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8428: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA842C:
    ctx->pc = 0x80AA842Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA842Cu)) return;
    // 80AA842C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8430u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8430:
    ctx->pc = 0x80AA8430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8430: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8434:
    ctx->pc = 0x80AA8434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8434u)) return;
    // 80AA8434: bl      0x8045F220
    {
            ctx->lr = 0x80AA8438u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8438:
    ctx->pc = 0x80AA8438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8438: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA843C:
    ctx->pc = 0x80AA843Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA843Cu)) return;
    // 80AA843C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8440:
    ctx->pc = 0x80AA8440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8440u)) return;
    // 80AA8440: addi    r5, r5, -19968
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19968);

label_80AA8444:
    ctx->pc = 0x80AA8444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8444u)) return;
    // 80AA8444: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8448:
    ctx->pc = 0x80AA8448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8448u)) return;
    // 80AA8448: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA844Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA844C:
    ctx->pc = 0x80AA844Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA844Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA844C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8450:
    ctx->pc = 0x80AA8450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8450u)) return;
    // 80AA8450: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8454u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8454:
    ctx->pc = 0x80AA8454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8454: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8458:
    ctx->pc = 0x80AA8458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8458u)) return;
    // 80AA8458: bl      0x8045F220
    {
            ctx->lr = 0x80AA845Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA845C:
    ctx->pc = 0x80AA845Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA845Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA845C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8460:
    ctx->pc = 0x80AA8460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8460u)) return;
    // 80AA8460: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8464:
    ctx->pc = 0x80AA8464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8464u)) return;
    // 80AA8464: addi    r5, r5, -20480
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20480);

label_80AA8468:
    ctx->pc = 0x80AA8468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8468u)) return;
    // 80AA8468: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA846C:
    ctx->pc = 0x80AA846Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA846Cu)) return;
    // 80AA846C: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8470u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8470:
    ctx->pc = 0x80AA8470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8470: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8474:
    ctx->pc = 0x80AA8474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8474u)) return;
    // 80AA8474: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8478u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8478:
    ctx->pc = 0x80AA8478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8478: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA847C:
    ctx->pc = 0x80AA847Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA847Cu)) return;
    // 80AA847C: bl      0x8045F220
    {
            ctx->lr = 0x80AA8480u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8480:
    ctx->pc = 0x80AA8480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8480: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8484:
    ctx->pc = 0x80AA8484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8484u)) return;
    // 80AA8484: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8488:
    ctx->pc = 0x80AA8488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8488u)) return;
    // 80AA8488: addi    r5, r5, -20992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20992);

label_80AA848C:
    ctx->pc = 0x80AA848Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA848Cu)) return;
    // 80AA848C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8490:
    ctx->pc = 0x80AA8490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8490u)) return;
    // 80AA8490: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8494u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8494:
    ctx->pc = 0x80AA8494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8494: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8498:
    ctx->pc = 0x80AA8498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8498u)) return;
    // 80AA8498: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA849Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA849C:
    ctx->pc = 0x80AA849Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA849Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA849C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA84A0:
    ctx->pc = 0x80AA84A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84A0u)) return;
    // 80AA84A0: bl      0x8045F220
    {
            ctx->lr = 0x80AA84A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA84A4:
    ctx->pc = 0x80AA84A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA84A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA84A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA84A8:
    ctx->pc = 0x80AA84A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84A8u)) return;
    // 80AA84A8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA84AC:
    ctx->pc = 0x80AA84ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84ACu)) return;
    // 80AA84AC: addi    r5, r5, -21504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21504);

label_80AA84B0:
    ctx->pc = 0x80AA84B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84B0u)) return;
    // 80AA84B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA84B4:
    ctx->pc = 0x80AA84B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84B4u)) return;
    // 80AA84B4: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA84B8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA84B8:
    ctx->pc = 0x80AA84B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA84B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA84B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA84BC:
    ctx->pc = 0x80AA84BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84BCu)) return;
    // 80AA84BC: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA84C0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA84C0:
    ctx->pc = 0x80AA84C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA84C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA84C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA84C4:
    ctx->pc = 0x80AA84C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84C4u)) return;
    // 80AA84C4: bl      0x8045F220
    {
            ctx->lr = 0x80AA84C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA84C8:
    ctx->pc = 0x80AA84C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA84C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA84C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA84CC:
    ctx->pc = 0x80AA84CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84CCu)) return;
    // 80AA84CC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA84D0:
    ctx->pc = 0x80AA84D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84D0u)) return;
    // 80AA84D0: addi    r5, r5, -22016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22016);

label_80AA84D4:
    ctx->pc = 0x80AA84D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84D4u)) return;
    // 80AA84D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA84D8:
    ctx->pc = 0x80AA84D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84D8u)) return;
    // 80AA84D8: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA84DCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA84DC:
    ctx->pc = 0x80AA84DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA84DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA84DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA84E0:
    ctx->pc = 0x80AA84E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84E0u)) return;
    // 80AA84E0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA84E4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA84E4:
    ctx->pc = 0x80AA84E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA84E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA84E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA84E8:
    ctx->pc = 0x80AA84E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84E8u)) return;
    // 80AA84E8: bl      0x8045F220
    {
            ctx->lr = 0x80AA84ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA84EC:
    ctx->pc = 0x80AA84ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA84ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA84EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA84F0:
    ctx->pc = 0x80AA84F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84F0u)) return;
    // 80AA84F0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA84F4:
    ctx->pc = 0x80AA84F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84F4u)) return;
    // 80AA84F4: addi    r5, r5, -22528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22528);

label_80AA84F8:
    ctx->pc = 0x80AA84F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84F8u)) return;
    // 80AA84F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA84FC:
    ctx->pc = 0x80AA84FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA84FCu)) return;
    // 80AA84FC: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8500u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8500:
    ctx->pc = 0x80AA8500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8500: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8504:
    ctx->pc = 0x80AA8504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8504u)) return;
    // 80AA8504: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8508u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8508:
    ctx->pc = 0x80AA8508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8508: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA850C:
    ctx->pc = 0x80AA850Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA850Cu)) return;
    // 80AA850C: bl      0x8045F220
    {
            ctx->lr = 0x80AA8510u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8510:
    ctx->pc = 0x80AA8510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8510: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8514:
    ctx->pc = 0x80AA8514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8514u)) return;
    // 80AA8514: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8518:
    ctx->pc = 0x80AA8518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8518u)) return;
    // 80AA8518: addi    r5, r5, -23040
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23040);

label_80AA851C:
    ctx->pc = 0x80AA851Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA851Cu)) return;
    // 80AA851C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8520:
    ctx->pc = 0x80AA8520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8520u)) return;
    // 80AA8520: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8524u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8524:
    ctx->pc = 0x80AA8524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8524: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8528:
    ctx->pc = 0x80AA8528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8528u)) return;
    // 80AA8528: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA852Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA852C:
    ctx->pc = 0x80AA852Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA852Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA852C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8530:
    ctx->pc = 0x80AA8530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8530u)) return;
    // 80AA8530: bl      0x8045F220
    {
            ctx->lr = 0x80AA8534u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8534:
    ctx->pc = 0x80AA8534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8534: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8538:
    ctx->pc = 0x80AA8538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8538u)) return;
    // 80AA8538: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA853C:
    ctx->pc = 0x80AA853Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA853Cu)) return;
    // 80AA853C: addi    r5, r5, -23552
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23552);

label_80AA8540:
    ctx->pc = 0x80AA8540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8540u)) return;
    // 80AA8540: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8544:
    ctx->pc = 0x80AA8544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8544u)) return;
    // 80AA8544: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8548u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8548:
    ctx->pc = 0x80AA8548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8548: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA854C:
    ctx->pc = 0x80AA854Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA854Cu)) return;
    // 80AA854C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8550u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8550:
    ctx->pc = 0x80AA8550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8550: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8554:
    ctx->pc = 0x80AA8554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8554u)) return;
    // 80AA8554: bl      0x8045F220
    {
            ctx->lr = 0x80AA8558u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8558:
    ctx->pc = 0x80AA8558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8558: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA855C:
    ctx->pc = 0x80AA855Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA855Cu)) return;
    // 80AA855C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8560:
    ctx->pc = 0x80AA8560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8560u)) return;
    // 80AA8560: addi    r5, r5, -24064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24064);

label_80AA8564:
    ctx->pc = 0x80AA8564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8564u)) return;
    // 80AA8564: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8568:
    ctx->pc = 0x80AA8568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8568u)) return;
    // 80AA8568: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA856Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA856C:
    ctx->pc = 0x80AA856Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA856Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA856C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8570:
    ctx->pc = 0x80AA8570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8570u)) return;
    // 80AA8570: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8574u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8574:
    ctx->pc = 0x80AA8574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8574: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8578:
    ctx->pc = 0x80AA8578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8578u)) return;
    // 80AA8578: bl      0x8045F220
    {
            ctx->lr = 0x80AA857Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA857C:
    ctx->pc = 0x80AA857Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA857Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA857C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8580:
    ctx->pc = 0x80AA8580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8580u)) return;
    // 80AA8580: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8584:
    ctx->pc = 0x80AA8584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8584u)) return;
    // 80AA8584: addi    r5, r5, -24576
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24576);

label_80AA8588:
    ctx->pc = 0x80AA8588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8588u)) return;
    // 80AA8588: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA858C:
    ctx->pc = 0x80AA858Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA858Cu)) return;
    // 80AA858C: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8590u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8590:
    ctx->pc = 0x80AA8590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8590: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8594:
    ctx->pc = 0x80AA8594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8594u)) return;
    // 80AA8594: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8598u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8598:
    ctx->pc = 0x80AA8598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8598: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA859C:
    ctx->pc = 0x80AA859Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA859Cu)) return;
    // 80AA859C: bl      0x8045F220
    {
            ctx->lr = 0x80AA85A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA85A0:
    ctx->pc = 0x80AA85A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA85A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA85A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA85A4:
    ctx->pc = 0x80AA85A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85A4u)) return;
    // 80AA85A4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA85A8:
    ctx->pc = 0x80AA85A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85A8u)) return;
    // 80AA85A8: addi    r5, r5, -25088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25088);

label_80AA85AC:
    ctx->pc = 0x80AA85ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85ACu)) return;
    // 80AA85AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA85B0:
    ctx->pc = 0x80AA85B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85B0u)) return;
    // 80AA85B0: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA85B4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA85B4:
    ctx->pc = 0x80AA85B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA85B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA85B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA85B8:
    ctx->pc = 0x80AA85B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85B8u)) return;
    // 80AA85B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA85BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA85BC:
    ctx->pc = 0x80AA85BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA85BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA85BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA85C0:
    ctx->pc = 0x80AA85C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85C0u)) return;
    // 80AA85C0: bl      0x8045F220
    {
            ctx->lr = 0x80AA85C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA85C4:
    ctx->pc = 0x80AA85C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA85C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA85C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA85C8:
    ctx->pc = 0x80AA85C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85C8u)) return;
    // 80AA85C8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA85CC:
    ctx->pc = 0x80AA85CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85CCu)) return;
    // 80AA85CC: addi    r5, r5, -25600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25600);

label_80AA85D0:
    ctx->pc = 0x80AA85D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85D0u)) return;
    // 80AA85D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA85D4:
    ctx->pc = 0x80AA85D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85D4u)) return;
    // 80AA85D4: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA85D8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA85D8:
    ctx->pc = 0x80AA85D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA85D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA85D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA85DC:
    ctx->pc = 0x80AA85DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85DCu)) return;
    // 80AA85DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA85E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA85E0:
    ctx->pc = 0x80AA85E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA85E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA85E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA85E4:
    ctx->pc = 0x80AA85E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85E4u)) return;
    // 80AA85E4: bl      0x8045F220
    {
            ctx->lr = 0x80AA85E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA85E8:
    ctx->pc = 0x80AA85E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA85E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA85E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA85EC:
    ctx->pc = 0x80AA85ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85ECu)) return;
    // 80AA85EC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA85F0:
    ctx->pc = 0x80AA85F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85F0u)) return;
    // 80AA85F0: addi    r5, r5, -26112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26112);

label_80AA85F4:
    ctx->pc = 0x80AA85F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85F4u)) return;
    // 80AA85F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA85F8:
    ctx->pc = 0x80AA85F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA85F8u)) return;
    // 80AA85F8: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA85FCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA85FC:
    ctx->pc = 0x80AA85FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA85FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA85FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA8600:
    ctx->pc = 0x80AA8600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8600u)) return;
    // 80AA8600: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8604u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8604:
    ctx->pc = 0x80AA8604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8604: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8608:
    ctx->pc = 0x80AA8608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8608u)) return;
    // 80AA8608: bl      0x8045F220
    {
            ctx->lr = 0x80AA860Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA860C:
    ctx->pc = 0x80AA860Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA860Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA860C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8610:
    ctx->pc = 0x80AA8610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8610u)) return;
    // 80AA8610: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8614:
    ctx->pc = 0x80AA8614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8614u)) return;
    // 80AA8614: addi    r5, r5, -26624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26624);

label_80AA8618:
    ctx->pc = 0x80AA8618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8618u)) return;
    // 80AA8618: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA861C:
    ctx->pc = 0x80AA861Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA861Cu)) return;
    // 80AA861C: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8620u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8620:
    ctx->pc = 0x80AA8620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8620: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8624:
    ctx->pc = 0x80AA8624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8624u)) return;
    // 80AA8624: bl      0x8045F220
    {
            ctx->lr = 0x80AA8628u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8628:
    ctx->pc = 0x80AA8628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8628: bl      0x8045C034
    {
            ctx->lr = 0x80AA862Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA862C:
    ctx->pc = 0x80AA862Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA862Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA862C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8630:
    ctx->pc = 0x80AA8630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8630u)) return;
    // 80AA8630: bl      0x8045F220
    {
            ctx->lr = 0x80AA8634u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8634:
    ctx->pc = 0x80AA8634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA8634: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8638:
    ctx->pc = 0x80AA8638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8638u)) return;
    // 80AA8638: addi    r4, r4, -13992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13992);

label_80AA863C:
    ctx->pc = 0x80AA863Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA863Cu)) return;
    // 80AA863C: bl      0x8045C060
    {
            ctx->lr = 0x80AA8640u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA8640:
    ctx->pc = 0x80AA8640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8640: li      r3, 430
    ctx->gpr[3] = (u32)(s32)(430);

label_80AA8644:
    ctx->pc = 0x80AA8644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8644u)) return;
    // 80AA8644: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA8648u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA8648:
    ctx->pc = 0x80AA8648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA8648: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80AA864C:
    ctx->pc = 0x80AA864Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA864Cu)) return;
    // 80AA864C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80AA8650:
    ctx->pc = 0x80AA8650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8650u)) return;
    // 80AA8650: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80AA8654:
    ctx->pc = 0x80AA8654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8654: lwz     r0, 0(r4)
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
label_80AA8658:
    ctx->pc = 0x80AA8658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8658u)) return;
    // 80AA8658: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA865C:
    ctx->pc = 0x80AA865Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA865Cu)) return;
    // 80AA865C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8660:
    ctx->pc = 0x80AA8660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8660u)) return;
    // 80AA8660: addi    r4, r4, -14156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14156);

label_80AA8664:
    ctx->pc = 0x80AA8664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8664: lwzx    r4, r4, r0
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
label_80AA8668:
    ctx->pc = 0x80AA8668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8668: lwz     r4, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA866C:
    ctx->pc = 0x80AA866Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA866Cu)) return;
    // 80AA866C: bl      0x8045F608
    {
            ctx->lr = 0x80AA8670u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80AA8670:
    ctx->pc = 0x80AA8670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA8670: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80AA8674:
    ctx->pc = 0x80AA8674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8674u)) return;
    // 80AA8674: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80AA8678:
    ctx->pc = 0x80AA8678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8678u)) return;
    // 80AA8678: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80AA867C:
    ctx->pc = 0x80AA867Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA867Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA867C: lwz     r0, 0(r4)
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
label_80AA8680:
    ctx->pc = 0x80AA8680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8680u)) return;
    // 80AA8680: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA8684:
    ctx->pc = 0x80AA8684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8684u)) return;
    // 80AA8684: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8688:
    ctx->pc = 0x80AA8688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8688u)) return;
    // 80AA8688: addi    r4, r4, -14156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14156);

label_80AA868C:
    ctx->pc = 0x80AA868Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA868Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA868C: lwzx    r4, r4, r0
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
label_80AA8690:
    ctx->pc = 0x80AA8690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8690: lwz     r4, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8694:
    ctx->pc = 0x80AA8694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8694u)) return;
    // 80AA8694: bl      0x8045F608
    {
            ctx->lr = 0x80AA8698u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80AA8698:
    ctx->pc = 0x80AA8698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8698: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA869C:
    ctx->pc = 0x80AA869Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA869Cu)) return;
    // 80AA869C: bl      0x8045F220
    {
            ctx->lr = 0x80AA86A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA86A0:
    ctx->pc = 0x80AA86A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA86A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AA86A0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA86A4:
    ctx->pc = 0x80AA86A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86A4u)) return;
    // 80AA86A4: addi    r4, r4, -18220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18220);

label_80AA86A8:
    ctx->pc = 0x80AA86A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA86A8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA86A8u)) return;
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
label_80AA86AC:
    ctx->pc = 0x80AA86ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86ACu)) return;
    // 80AA86AC: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA86B0:
    ctx->pc = 0x80AA86B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86B0u)) return;
    // 80AA86B0: addi    r4, r4, -18380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18380);

label_80AA86B4:
    ctx->pc = 0x80AA86B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA86B4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA86B4u)) return;
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
label_80AA86B8:
    ctx->pc = 0x80AA86B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86B8u)) return;
    // 80AA86B8: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA86BC:
    ctx->pc = 0x80AA86BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86BCu)) return;
    // 80AA86BC: addi    r4, r4, -18216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18216);

label_80AA86C0:
    ctx->pc = 0x80AA86C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA86C0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA86C0u)) return;
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
label_80AA86C4:
    ctx->pc = 0x80AA86C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86C4u)) return;
    // 80AA86C4: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA86C8:
    ctx->pc = 0x80AA86C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86C8u)) return;
    // 80AA86C8: addi    r4, r4, -18228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18228);

label_80AA86CC:
    ctx->pc = 0x80AA86CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA86CC: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA86CCu)) return;
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
label_80AA86D0:
    ctx->pc = 0x80AA86D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86D0u)) return;
    // 80AA86D0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA86D4:
    ctx->pc = 0x80AA86D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86D4u)) return;
    // 80AA86D4: addi    r4, r4, -18224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18224);

label_80AA86D8:
    ctx->pc = 0x80AA86D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA86D8: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA86D8u)) return;
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
label_80AA86DC:
    ctx->pc = 0x80AA86DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86DCu)) return;
    // 80AA86DC: bl      0x8045E570
    {
            ctx->lr = 0x80AA86E0u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80AA86E0:
    ctx->pc = 0x80AA86E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA86E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA86E0: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80AA86E4:
    ctx->pc = 0x80AA86E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86E4u)) return;
    // 80AA86E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA86E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA86E8:
    ctx->pc = 0x80AA86E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA86E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA86E8: bl      0x8045F32C
    {
            ctx->lr = 0x80AA86ECu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA86EC:
    ctx->pc = 0x80AA86ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA86ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA86EC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA86F0:
    ctx->pc = 0x80AA86F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86F0u)) return;
    // 80AA86F0: bl      0x8045F220
    {
            ctx->lr = 0x80AA86F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA86F4:
    ctx->pc = 0x80AA86F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA86F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA86F4: bl      0x8045C034
    {
            ctx->lr = 0x80AA86F8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA86F8:
    ctx->pc = 0x80AA86F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA86F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA86F8: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA86FC:
    ctx->pc = 0x80AA86FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA86FCu)) return;
    // 80AA86FC: addi    r3, r3, -18212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18212);

label_80AA8700:
    ctx->pc = 0x80AA8700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8700: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA8700u)) return;
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
label_80AA8704:
    ctx->pc = 0x80AA8704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8704u)) return;
    // 80AA8704: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8708:
    ctx->pc = 0x80AA8708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8708u)) return;
    // 80AA8708: addi    r3, r3, -18380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18380);

label_80AA870C:
    ctx->pc = 0x80AA870Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA870Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA870C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA870Cu)) return;
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
label_80AA8710:
    ctx->pc = 0x80AA8710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8710u)) return;
    // 80AA8710: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA8710u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80AA8714:
    ctx->pc = 0x80AA8714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8714u)) return;
    // 80AA8714: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA8714u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80AA8718:
    ctx->pc = 0x80AA8718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8718u)) return;
    // 80AA8718: fmr    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA8718u)) return;
    ctx->fpr[5] = ctx->fpr[2];

label_80AA871C:
    ctx->pc = 0x80AA871Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA871Cu)) return;
    // 80AA871C: bl      0x80AA8A00
    {
            ctx->lr = 0x80AA8720u;
            goto label_80AA8A00;
    }

label_80AA8720:
    ctx->pc = 0x80AA8720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8720: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8724:
    ctx->pc = 0x80AA8724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8724u)) return;
    // 80AA8724: addi    r4, r4, 7712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7712);

label_80AA8728:
    ctx->pc = 0x80AA8728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8728: stw     r3, 0(r4)
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
label_80AA872C:
    ctx->pc = 0x80AA872Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA872Cu)) return;
    // 80AA872C: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80AA8730:
    ctx->pc = 0x80AA8730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8730u)) return;
    // 80AA8730: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA8734u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA8734:
    ctx->pc = 0x80AA8734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8734: b       0x80AA87D4
    {
            goto label_80AA87D4;
    }

label_80AA8738:
    ctx->pc = 0x80AA8738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8738: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA873C:
    ctx->pc = 0x80AA873Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA873Cu)) return;
    // 80AA873C: bl      0x8045F220
    {
            ctx->lr = 0x80AA8740u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8740:
    ctx->pc = 0x80AA8740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA8740: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8744:
    ctx->pc = 0x80AA8744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8744u)) return;
    // 80AA8744: addi    r4, r4, -18372
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18372);

label_80AA8748:
    ctx->pc = 0x80AA8748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8748: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8748u)) return;
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
label_80AA874C:
    ctx->pc = 0x80AA874Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA874Cu)) return;
    // 80AA874C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8750:
    ctx->pc = 0x80AA8750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8750u)) return;
    // 80AA8750: addi    r4, r4, -18412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18412);

label_80AA8754:
    ctx->pc = 0x80AA8754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8754: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8754u)) return;
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
label_80AA8758:
    ctx->pc = 0x80AA8758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8758u)) return;
    // 80AA8758: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA875C:
    ctx->pc = 0x80AA875Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA875Cu)) return;
    // 80AA875C: addi    r4, r4, -18368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18368);

label_80AA8760:
    ctx->pc = 0x80AA8760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8760: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8760u)) return;
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
label_80AA8764:
    ctx->pc = 0x80AA8764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8764u)) return;
    // 80AA8764: bl      0x8045EF2C
    {
            ctx->lr = 0x80AA8768u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AA8768:
    ctx->pc = 0x80AA8768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8768: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA876C:
    ctx->pc = 0x80AA876Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA876Cu)) return;
    // 80AA876C: bl      0x8045F220
    {
            ctx->lr = 0x80AA8770u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA8770:
    ctx->pc = 0x80AA8770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8770: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA8774:
    ctx->pc = 0x80AA8774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8774u)) return;
    // 80AA8774: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA8778:
    ctx->pc = 0x80AA8778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8778u)) return;
    // 80AA8778: addi    r5, r5, -26624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26624);

label_80AA877C:
    ctx->pc = 0x80AA877Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA877Cu)) return;
    // 80AA877C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8780:
    ctx->pc = 0x80AA8780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8780u)) return;
    // 80AA8780: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA8784u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA8784:
    ctx->pc = 0x80AA8784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA8784: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8788:
    ctx->pc = 0x80AA8788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8788u)) return;
    // 80AA8788: addi    r3, r3, 7716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7716);

label_80AA878C:
    ctx->pc = 0x80AA878Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA878Cu)) return;
    // 80AA878C: bl      0x8045F070
    {
            ctx->lr = 0x80AA8790u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80AA8790:
    ctx->pc = 0x80AA8790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8790: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA8794:
    ctx->pc = 0x80AA8794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8794u)) return;
    // 80AA8794: bl      0x8045ED54
    {
            ctx->lr = 0x80AA8798u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80AA8798:
    ctx->pc = 0x80AA8798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8798: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA879C:
    ctx->pc = 0x80AA879Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA879Cu)) return;
    // 80AA879C: bl      0x8045EC10
    {
            ctx->lr = 0x80AA87A0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AA87A0:
    ctx->pc = 0x80AA87A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA87A0: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA87A4:
    ctx->pc = 0x80AA87A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87A4u)) return;
    // 80AA87A4: addi    r3, r3, 7712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7712);

label_80AA87A8:
    ctx->pc = 0x80AA87A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA87A8: lwz     r3, 0(r3)
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
label_80AA87AC:
    ctx->pc = 0x80AA87ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87ACu)) return;
    // 80AA87AC: cmplwi  r3, 0x0000
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

label_80AA87B0:
    ctx->pc = 0x80AA87B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87B0u)) return;
    // 80AA87B0: bc    12, 2, 0x80AA87C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA87C8;
        }
    }

label_80AA87B4:
    ctx->pc = 0x80AA87B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA87B4: bl      0x8050F9E0
    {
            ctx->lr = 0x80AA87B8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AA87B8:
    ctx->pc = 0x80AA87B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA87B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA87BC:
    ctx->pc = 0x80AA87BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87BCu)) return;
    // 80AA87BC: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA87C0:
    ctx->pc = 0x80AA87C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87C0u)) return;
    // 80AA87C0: addi    r3, r3, 7712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7712);

label_80AA87C4:
    ctx->pc = 0x80AA87C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA87C4: stw     r0, 0(r3)
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
label_80AA87C8:
    ctx->pc = 0x80AA87C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA87C8: bl      0x80AA8E44
    {
            ctx->lr = 0x80AA87CCu;
            goto label_80AA8E44;
    }

label_80AA87CC:
    ctx->pc = 0x80AA87CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA87CC: bl      0x8045DE34
    {
            ctx->lr = 0x80AA87D0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80AA87D0:
    ctx->pc = 0x80AA87D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA87D0: bl      0x80460A80
    {
            ctx->lr = 0x80AA87D4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80AA87D4:
    ctx->pc = 0x80AA87D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA87D4: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA87D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80AA87D4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA87D8:
    ctx->pc = 0x80AA87D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA87D8: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA87D8u)) return;
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
label_80AA87DC:
    ctx->pc = 0x80AA87DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA87DC: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA87DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80AA87DCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA87E0:
    ctx->pc = 0x80AA87E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA87E0: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA87E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA87E4:
    ctx->pc = 0x80AA87E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87E4u)) return;
    // 80AA87E4: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA87E8:
    ctx->pc = 0x80AA87E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87E8u)) return;
    // 80AA87E8: bl      0x80006E20
    {
            ctx->lr = 0x80AA87ECu;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80AA87EC:
    ctx->pc = 0x80AA87ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA87EC: lwz     r0, 68(r1)
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
label_80AA87F0:
    ctx->pc = 0x80AA87F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA87F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA87F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA87F4:
    ctx->pc = 0x80AA87F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87F4u)) return;
    // 80AA87F4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80AA87F8:
    ctx->pc = 0x80AA87F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA87F8u)) return;
    // 80AA87F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA87FC:
    ctx->pc = 0x80AA87FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA87FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA87FC: stwu     r1, -64(r1)
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
label_80AA8800:
    ctx->pc = 0x80AA8800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8800: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8804:
    ctx->pc = 0x80AA8804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8804: stw     r0, 68(r1)
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
label_80AA8808:
    ctx->pc = 0x80AA8808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8808u)) return;
    // 80AA8808: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80AA880C:
    ctx->pc = 0x80AA880Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA880Cu)) return;
    // 80AA880C: bl      0x80006DD4
    {
            ctx->lr = 0x80AA8810u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80AA8810:
    ctx->pc = 0x80AA8810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80AA8810: lwz     r27, 32(r3)
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
label_80AA8814:
    ctx->pc = 0x80AA8814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8814u)) return;
    // 80AA8814: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8818:
    ctx->pc = 0x80AA8818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8818u)) return;
    // 80AA8818: addi    r3, r3, -18208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18208);

label_80AA881C:
    ctx->pc = 0x80AA881Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA881Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80AA881C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA881Cu)) return;
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
label_80AA8820:
    ctx->pc = 0x80AA8820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA8820: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA8820u)) return;
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
label_80AA8824:
    ctx->pc = 0x80AA8824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8824u)) return;
    // 80AA8824: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8824u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA8828:
    ctx->pc = 0x80AA8828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8828u)) return;
    // 80AA8828: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8828u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA882C:
    ctx->pc = 0x80AA882Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA882Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA882C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA882Cu)) return;
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
label_80AA8830:
    ctx->pc = 0x80AA8830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AA8830: lwz     r31, 12(r1)
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
label_80AA8834:
    ctx->pc = 0x80AA8834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA8834: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA8834u)) return;
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
label_80AA8838:
    ctx->pc = 0x80AA8838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8838u)) return;
    // 80AA8838: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8838u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA883C:
    ctx->pc = 0x80AA883Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA883Cu)) return;
    // 80AA883C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA883Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA8840:
    ctx->pc = 0x80AA8840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA8840: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8840u)) return;
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
label_80AA8844:
    ctx->pc = 0x80AA8844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA8844: lwz     r30, 20(r1)
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
label_80AA8848:
    ctx->pc = 0x80AA8848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA8848: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA8848u)) return;
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
label_80AA884C:
    ctx->pc = 0x80AA884Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA884Cu)) return;
    // 80AA884C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA884Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA8850:
    ctx->pc = 0x80AA8850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8850u)) return;
    // 80AA8850: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8850u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA8854:
    ctx->pc = 0x80AA8854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA8854: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8854u)) return;
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
label_80AA8858:
    ctx->pc = 0x80AA8858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8858: lwz     r29, 28(r1)
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
label_80AA885C:
    ctx->pc = 0x80AA885Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA885Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA885C: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA885Cu)) return;
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
label_80AA8860:
    ctx->pc = 0x80AA8860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8860u)) return;
    // 80AA8860: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8860u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA8864:
    ctx->pc = 0x80AA8864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8864u)) return;
    // 80AA8864: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8864u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA8868:
    ctx->pc = 0x80AA8868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8868: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8868u)) return;
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
label_80AA886C:
    ctx->pc = 0x80AA886Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA886Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA886C: lwz     r28, 36(r1)
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
label_80AA8870:
    ctx->pc = 0x80AA8870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8870u)) return;
    // 80AA8870: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA8874:
    ctx->pc = 0x80AA8874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8874u)) return;
    // 80AA8874: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80AA8878:
    ctx->pc = 0x80AA8878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8878: lwz     r0, 0(r3)
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
label_80AA887C:
    ctx->pc = 0x80AA887Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA887Cu)) return;
    // 80AA887C: cmpwi   r0, 0
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

label_80AA8880:
    ctx->pc = 0x80AA8880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8880u)) return;
    // 80AA8880: bc    4, 2, 0x80AA8938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8938;
        }
    }

label_80AA8884:
    ctx->pc = 0x80AA8884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA8884: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AA8888:
    ctx->pc = 0x80AA8888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8888u)) return;
    // 80AA8888: cmplwi  r0, 0x0000
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

label_80AA888C:
    ctx->pc = 0x80AA888Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA888Cu)) return;
    // 80AA888C: bc    12, 2, 0x80AA8938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8938;
        }
    }

label_80AA8890:
    ctx->pc = 0x80AA8890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA8890: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA8894:
    ctx->pc = 0x80AA8894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8894u)) return;
    // 80AA8894: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80AA8898:
    ctx->pc = 0x80AA8898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8898u)) return;
    // 80AA8898: bl      0x8060F4F8
    {
            ctx->lr = 0x80AA889Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80AA889C:
    ctx->pc = 0x80AA889Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA889Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA889C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA88A0:
    ctx->pc = 0x80AA88A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88A0u)) return;
    // 80AA88A0: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80AA88A4:
    ctx->pc = 0x80AA88A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88A4u)) return;
    // 80AA88A4: bl      0x8060F4F8
    {
            ctx->lr = 0x80AA88A8u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80AA88A8:
    ctx->pc = 0x80AA88A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA88A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA88A8: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA88A8u)) return;
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
label_80AA88AC:
    ctx->pc = 0x80AA88ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88ACu)) return;
    // 80AA88AC: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA88B0:
    ctx->pc = 0x80AA88B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88B0u)) return;
    // 80AA88B0: addi    r3, r3, -18200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18200);

label_80AA88B4:
    ctx->pc = 0x80AA88B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA88B4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA88B4u)) return;
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
label_80AA88B8:
    ctx->pc = 0x80AA88B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88B8u)) return;
    // 80AA88B8: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA88B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80AA88BC:
    ctx->pc = 0x80AA88BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88BCu)) return;
    // 80AA88BC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80AA88C0:
    ctx->pc = 0x80AA88C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88C0u)) return;
    // 80AA88C0: bc    4, 2, 0x80AA88D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA88D4;
        }
    }

label_80AA88C4:
    ctx->pc = 0x80AA88C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA88C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA88C4: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA88C8:
    ctx->pc = 0x80AA88C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88C8u)) return;
    // 80AA88C8: addi    r3, r3, -18204
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18204);

label_80AA88CC:
    ctx->pc = 0x80AA88CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA88CC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA88CCu)) return;
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
label_80AA88D0:
    ctx->pc = 0x80AA88D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88D0u)) return;
    // 80AA88D0: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA88D0u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80AA88D4:
    ctx->pc = 0x80AA88D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA88D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA88D4: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AA88D8:
    ctx->pc = 0x80AA88D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88D8u)) return;
    // 80AA88D8: cmplwi  r0, 0x00FF
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

label_80AA88DC:
    ctx->pc = 0x80AA88DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88DCu)) return;
    // 80AA88DC: bc    4, 1, 0x80AA88E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA88E4;
        }
    }

label_80AA88E0:
    ctx->pc = 0x80AA88E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA88E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA88E0: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80AA88E4:
    ctx->pc = 0x80AA88E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA88E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80AA88E4: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA88E8:
    ctx->pc = 0x80AA88E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88E8u)) return;
    // 80AA88E8: addi    r3, r3, -18196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18196);

label_80AA88EC:
    ctx->pc = 0x80AA88ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA88EC: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA88ECu)) return;
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
label_80AA88F0:
    ctx->pc = 0x80AA88F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88F0u)) return;
    // 80AA88F0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA88F0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80AA88F4:
    ctx->pc = 0x80AA88F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88F4u)) return;
    // 80AA88F4: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA88F8:
    ctx->pc = 0x80AA88F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88F8u)) return;
    // 80AA88F8: addi    r3, r3, -18192
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18192);

label_80AA88FC:
    ctx->pc = 0x80AA88FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA88FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA88FC: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA88FCu)) return;
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
label_80AA8900:
    ctx->pc = 0x80AA8900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8900u)) return;
    // 80AA8900: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8904:
    ctx->pc = 0x80AA8904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8904u)) return;
    // 80AA8904: addi    r3, r3, -18188
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18188);

label_80AA8908:
    ctx->pc = 0x80AA8908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA8908: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA8908u)) return;
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
label_80AA890C:
    ctx->pc = 0x80AA890Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA890Cu)) return;
    // 80AA890C: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80AA8910:
    ctx->pc = 0x80AA8910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8910u)) return;
    // 80AA8910: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80AA8914:
    ctx->pc = 0x80AA8914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8914u)) return;
    // 80AA8914: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80AA8918:
    ctx->pc = 0x80AA8918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8918u)) return;
    // 80AA8918: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AA891C:
    ctx->pc = 0x80AA891Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA891Cu)) return;
    // 80AA891C: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80AA8920:
    ctx->pc = 0x80AA8920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8920u)) return;
    // 80AA8920: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80AA8924:
    ctx->pc = 0x80AA8924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8924u)) return;
    // 80AA8924: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80AA8928:
    ctx->pc = 0x80AA8928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8928u)) return;
    // 80AA8928: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80AA892C:
    ctx->pc = 0x80AA892Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA892Cu)) return;
    // 80AA892C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80AA8930:
    ctx->pc = 0x80AA8930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8930u)) return;
    // 80AA8930: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80AA8934:
    ctx->pc = 0x80AA8934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8934u)) return;
    // 80AA8934: bl      0x80AA8AF4
    {
            ctx->lr = 0x80AA8938u;
            goto label_80AA8AF4;
    }

label_80AA8938:
    ctx->pc = 0x80AA8938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8938: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80AA893C:
    ctx->pc = 0x80AA893Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA893Cu)) return;
    // 80AA893C: bl      0x80006E20
    {
            ctx->lr = 0x80AA8940u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80AA8940:
    ctx->pc = 0x80AA8940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8940: lwz     r0, 68(r1)
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
label_80AA8944:
    ctx->pc = 0x80AA8944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8944: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8948:
    ctx->pc = 0x80AA8948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8948u)) return;
    // 80AA8948: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80AA894C:
    ctx->pc = 0x80AA894Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA894Cu)) return;
    // 80AA894C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8950:
    ctx->pc = 0x80AA8950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA8950: stwu     r1, -16(r1)
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
label_80AA8954:
    ctx->pc = 0x80AA8954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8954: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8958:
    ctx->pc = 0x80AA8958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8958: stw     r0, 20(r1)
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
label_80AA895C:
    ctx->pc = 0x80AA895Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA895Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA895C: lwz     r5, 32(r3)
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
label_80AA8960:
    ctx->pc = 0x80AA8960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8960: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8960u)) return;
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
label_80AA8964:
    ctx->pc = 0x80AA8964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8964: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8964u)) return;
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
label_80AA8968:
    ctx->pc = 0x80AA8968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8968u)) return;
    // 80AA8968: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8968u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80AA896C:
    ctx->pc = 0x80AA896Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA896Cu)) return;
    // 80AA896C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8970:
    ctx->pc = 0x80AA8970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8970u)) return;
    // 80AA8970: addi    r4, r4, -18184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18184);

label_80AA8974:
    ctx->pc = 0x80AA8974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8974: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8974u)) return;
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
label_80AA8978:
    ctx->pc = 0x80AA8978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8978u)) return;
    // 80AA8978: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8978u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80AA897C:
    ctx->pc = 0x80AA897Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA897Cu)) return;
    // 80AA897C: bc    4, 1, 0x80AA8988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8988;
        }
    }

label_80AA8980:
    ctx->pc = 0x80AA8980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8980: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8980u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80AA8984:
    ctx->pc = 0x80AA8984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8984u)) return;
    // 80AA8984: b       0x80AA89A0
    {
            goto label_80AA89A0;
    }

label_80AA8988:
    ctx->pc = 0x80AA8988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8988: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA898C:
    ctx->pc = 0x80AA898Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA898Cu)) return;
    // 80AA898C: addi    r4, r4, -18196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18196);

label_80AA8990:
    ctx->pc = 0x80AA8990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8990: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8990u)) return;
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
label_80AA8994:
    ctx->pc = 0x80AA8994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8994u)) return;
    // 80AA8994: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA8994u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80AA8998:
    ctx->pc = 0x80AA8998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8998u)) return;
    // 80AA8998: bc    4, 0, 0x80AA89A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA89A0;
        }
    }

label_80AA899C:
    ctx->pc = 0x80AA899Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA899Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA899C: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA899Cu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80AA89A0:
    ctx->pc = 0x80AA89A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA89A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA89A0: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA89A0u)) return;
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
label_80AA89A4:
    ctx->pc = 0x80AA89A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89A4u)) return;
    // 80AA89A4: bl      0x80AA87FC
    {
            ctx->lr = 0x80AA89A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA87FCu;
                return;
            }
            goto label_80AA87FC;
    }

label_80AA89A8:
    ctx->pc = 0x80AA89A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA89A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA89A8: lwz     r0, 20(r1)
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
label_80AA89AC:
    ctx->pc = 0x80AA89ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA89ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA89AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA89B0:
    ctx->pc = 0x80AA89B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89B0u)) return;
    // 80AA89B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA89B4:
    ctx->pc = 0x80AA89B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89B4u)) return;
    // 80AA89B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA89B8:
    ctx->pc = 0x80AA89B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA89B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA89B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA89BC:
    ctx->pc = 0x80AA89BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA89BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA89BC: stwu     r1, -16(r1)
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
label_80AA89C0:
    ctx->pc = 0x80AA89C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA89C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA89C4:
    ctx->pc = 0x80AA89C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA89C4: stw     r0, 20(r1)
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
label_80AA89C8:
    ctx->pc = 0x80AA89C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89C8u)) return;
    // 80AA89C8: lis     r4, -32597
    ctx->gpr[4] = ((u32)(s32)(-32597) << 16);

label_80AA89CC:
    ctx->pc = 0x80AA89CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89CCu)) return;
    // 80AA89CC: addi    r0, r4, -30384
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-30384);

label_80AA89D0:
    ctx->pc = 0x80AA89D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA89D0: stw     r0, 16(r3)
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
label_80AA89D4:
    ctx->pc = 0x80AA89D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89D4u)) return;
    // 80AA89D4: lis     r4, -32597
    ctx->gpr[4] = ((u32)(s32)(-32597) << 16);

label_80AA89D8:
    ctx->pc = 0x80AA89D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89D8u)) return;
    // 80AA89D8: addi    r0, r4, -30724
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-30724);

label_80AA89DC:
    ctx->pc = 0x80AA89DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA89DC: stw     r0, 20(r3)
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
label_80AA89E0:
    ctx->pc = 0x80AA89E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89E0u)) return;
    // 80AA89E0: lis     r4, -32597
    ctx->gpr[4] = ((u32)(s32)(-32597) << 16);

label_80AA89E4:
    ctx->pc = 0x80AA89E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89E4u)) return;
    // 80AA89E4: addi    r0, r4, -30280
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-30280);

label_80AA89E8:
    ctx->pc = 0x80AA89E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA89E8: stw     r0, 24(r3)
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
label_80AA89EC:
    ctx->pc = 0x80AA89ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89ECu)) return;
    // 80AA89EC: bl      0x80AA8950
    {
            ctx->lr = 0x80AA89F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA8950u;
                return;
            }
            goto label_80AA8950;
    }

label_80AA89F0:
    ctx->pc = 0x80AA89F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA89F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA89F0: lwz     r0, 20(r1)
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
label_80AA89F4:
    ctx->pc = 0x80AA89F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA89F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA89F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA89F8:
    ctx->pc = 0x80AA89F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89F8u)) return;
    // 80AA89F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA89FC:
    ctx->pc = 0x80AA89FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA89FCu)) return;
    // 80AA89FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8A00:
    ctx->pc = 0x80AA8A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA8A00: stwu     r1, -96(r1)
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
label_80AA8A04:
    ctx->pc = 0x80AA8A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA8A04: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A08:
    ctx->pc = 0x80AA8A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AA8A08: stw     r0, 100(r1)
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
label_80AA8A0C:
    ctx->pc = 0x80AA8A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA8A0C: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A0Cu)) return;
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
label_80AA8A10:
    ctx->pc = 0x80AA8A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA8A10: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80AA8A10u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A14:
    ctx->pc = 0x80AA8A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80AA8A14: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A14u)) return;
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
label_80AA8A18:
    ctx->pc = 0x80AA8A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA8A18: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80AA8A18u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A1C:
    ctx->pc = 0x80AA8A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA8A1C: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A1Cu)) return;
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
label_80AA8A20:
    ctx->pc = 0x80AA8A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA8A20: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80AA8A20u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A24:
    ctx->pc = 0x80AA8A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA8A24: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A24u)) return;
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
label_80AA8A28:
    ctx->pc = 0x80AA8A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA8A28: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80AA8A28u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A2C:
    ctx->pc = 0x80AA8A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA8A2C: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A2Cu)) return;
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
label_80AA8A30:
    ctx->pc = 0x80AA8A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8A30: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80AA8A30u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A34:
    ctx->pc = 0x80AA8A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A34u)) return;
    // 80AA8A34: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA8A34u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80AA8A38:
    ctx->pc = 0x80AA8A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A38u)) return;
    // 80AA8A38: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA8A38u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80AA8A3C:
    ctx->pc = 0x80AA8A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A3Cu)) return;
    // 80AA8A3C: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80AA8A3Cu)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80AA8A40:
    ctx->pc = 0x80AA8A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A40u)) return;
    // 80AA8A40: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80AA8A40u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80AA8A44:
    ctx->pc = 0x80AA8A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A44u)) return;
    // 80AA8A44: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80AA8A44u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80AA8A48:
    ctx->pc = 0x80AA8A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A48u)) return;
    // 80AA8A48: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA8A4C:
    ctx->pc = 0x80AA8A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A4Cu)) return;
    // 80AA8A4C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80AA8A50:
    ctx->pc = 0x80AA8A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A50u)) return;
    // 80AA8A50: lis     r5, -32597
    ctx->gpr[5] = ((u32)(s32)(-32597) << 16);

label_80AA8A54:
    ctx->pc = 0x80AA8A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A54u)) return;
    // 80AA8A54: addi    r5, r5, -30276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30276);

label_80AA8A58:
    ctx->pc = 0x80AA8A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A58u)) return;
    // 80AA8A58: bl      0x8050FD60
    {
            ctx->lr = 0x80AA8A5Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AA8A5C:
    ctx->pc = 0x80AA8A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA8A5C: lwz     r5, 32(r3)
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
label_80AA8A60:
    ctx->pc = 0x80AA8A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80AA8A60: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A60u)) return;
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
label_80AA8A64:
    ctx->pc = 0x80AA8A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA8A64: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A64u)) return;
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
label_80AA8A68:
    ctx->pc = 0x80AA8A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA8A68: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A68u)) return;
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
label_80AA8A6C:
    ctx->pc = 0x80AA8A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AA8A6C: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A6Cu)) return;
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
label_80AA8A70:
    ctx->pc = 0x80AA8A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA8A70: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A70u)) return;
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
label_80AA8A74:
    ctx->pc = 0x80AA8A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A74u)) return;
    // 80AA8A74: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8A78:
    ctx->pc = 0x80AA8A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A78u)) return;
    // 80AA8A78: addi    r4, r4, -18200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18200);

label_80AA8A7C:
    ctx->pc = 0x80AA8A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA8A7C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A7Cu)) return;
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
label_80AA8A80:
    ctx->pc = 0x80AA8A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA8A80: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A80u)) return;
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
label_80AA8A84:
    ctx->pc = 0x80AA8A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA8A84: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80AA8A84u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A88:
    ctx->pc = 0x80AA8A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA8A88: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A88u)) return;
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
label_80AA8A8C:
    ctx->pc = 0x80AA8A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA8A8C: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80AA8A8Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A90:
    ctx->pc = 0x80AA8A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA8A90: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A90u)) return;
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
label_80AA8A94:
    ctx->pc = 0x80AA8A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8A94: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80AA8A94u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8A98:
    ctx->pc = 0x80AA8A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8A98: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8A98u)) return;
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
label_80AA8A9C:
    ctx->pc = 0x80AA8A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8A9C: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8A9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80AA8A9Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8AA0:
    ctx->pc = 0x80AA8AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8AA0: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8AA0u)) return;
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
label_80AA8AA4:
    ctx->pc = 0x80AA8AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8AA4: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA8AA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80AA8AA4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8AA8:
    ctx->pc = 0x80AA8AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8AA8: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA8AA8u)) return;
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
label_80AA8AAC:
    ctx->pc = 0x80AA8AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8AAC: lwz     r0, 100(r1)
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
label_80AA8AB0:
    ctx->pc = 0x80AA8AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8AB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8AB4:
    ctx->pc = 0x80AA8AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AB4u)) return;
    // 80AA8AB4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80AA8AB8:
    ctx->pc = 0x80AA8AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AB8u)) return;
    // 80AA8AB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8ABC:
    ctx->pc = 0x80AA8ABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8ABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8ABC: lwz     r3, 32(r3)
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
label_80AA8AC0:
    ctx->pc = 0x80AA8AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8AC0: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA8AC0u)) return;
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
label_80AA8AC4:
    ctx->pc = 0x80AA8AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AC4u)) return;
    // 80AA8AC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8AC8:
    ctx->pc = 0x80AA8AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8AC8: lwz     r3, 32(r3)
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
label_80AA8ACC:
    ctx->pc = 0x80AA8ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8ACC: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA8ACCu)) return;
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
label_80AA8AD0:
    ctx->pc = 0x80AA8AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AD0u)) return;
    // 80AA8AD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8AD4:
    ctx->pc = 0x80AA8AD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8AD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8AD4: lwz     r3, 32(r3)
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
label_80AA8AD8:
    ctx->pc = 0x80AA8AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8AD8: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA8AD8u)) return;
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
label_80AA8ADC:
    ctx->pc = 0x80AA8ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8ADC: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA8ADCu)) return;
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
label_80AA8AE0:
    ctx->pc = 0x80AA8AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8AE0: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA8AE0u)) return;
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
label_80AA8AE4:
    ctx->pc = 0x80AA8AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AE4u)) return;
    // 80AA8AE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8AE8:
    ctx->pc = 0x80AA8AE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8AE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8AE8: lwz     r3, 32(r3)
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
label_80AA8AEC:
    ctx->pc = 0x80AA8AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8AEC: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA8AECu)) return;
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
label_80AA8AF0:
    ctx->pc = 0x80AA8AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AF0u)) return;
    // 80AA8AF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8AF4:
    ctx->pc = 0x80AA8AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8AF4: stwu     r1, -16(r1)
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
label_80AA8AF8:
    ctx->pc = 0x80AA8AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8AF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8AFC:
    ctx->pc = 0x80AA8AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8AFC: stw     r0, 20(r1)
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
label_80AA8B00:
    ctx->pc = 0x80AA8B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B00u)) return;
    // 80AA8B00: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80AA8B04:
    ctx->pc = 0x80AA8B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B04u)) return;
    // 80AA8B04: bl      0x80607948
    {
            ctx->lr = 0x80AA8B08u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80AA8B08:
    ctx->pc = 0x80AA8B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8B08: lwz     r0, 20(r1)
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
label_80AA8B0C:
    ctx->pc = 0x80AA8B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8B0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8B10:
    ctx->pc = 0x80AA8B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B10u)) return;
    // 80AA8B10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA8B14:
    ctx->pc = 0x80AA8B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B14u)) return;
    // 80AA8B14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8B18:
    ctx->pc = 0x80AA8B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8B18: stwu     r1, -16(r1)
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
label_80AA8B1C:
    ctx->pc = 0x80AA8B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8B1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8B20:
    ctx->pc = 0x80AA8B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8B20: stw     r0, 20(r1)
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
label_80AA8B24:
    ctx->pc = 0x80AA8B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8B24: lwz     r3, 32(r3)
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
label_80AA8B28:
    ctx->pc = 0x80AA8B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8B28: lwz     r3, 16(r3)
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
label_80AA8B2C:
    ctx->pc = 0x80AA8B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B2Cu)) return;
    // 80AA8B2C: bl      0x80509CF0
    {
            ctx->lr = 0x80AA8B30u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80AA8B30:
    ctx->pc = 0x80AA8B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8B30: lwz     r0, 20(r1)
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
label_80AA8B34:
    ctx->pc = 0x80AA8B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8B34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8B38:
    ctx->pc = 0x80AA8B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B38u)) return;
    // 80AA8B38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA8B3C:
    ctx->pc = 0x80AA8B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B3Cu)) return;
    // 80AA8B3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8B40:
    ctx->pc = 0x80AA8B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8B40: stwu     r1, -32(r1)
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
label_80AA8B44:
    ctx->pc = 0x80AA8B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8B44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8B48:
    ctx->pc = 0x80AA8B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8B48: stw     r0, 36(r1)
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
label_80AA8B4C:
    ctx->pc = 0x80AA8B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8B4C: stw     r31, 28(r1)
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
label_80AA8B50:
    ctx->pc = 0x80AA8B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8B50: stw     r30, 24(r1)
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
label_80AA8B54:
    ctx->pc = 0x80AA8B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8B54: stw     r29, 20(r1)
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
label_80AA8B58:
    ctx->pc = 0x80AA8B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8B58: lwz     r31, 32(r3)
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
label_80AA8B5C:
    ctx->pc = 0x80AA8B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8B5C: lwz     r30, 16(r31)
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
label_80AA8B60:
    ctx->pc = 0x80AA8B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8B60: lwz     r5, 28(r31)
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
label_80AA8B64:
    ctx->pc = 0x80AA8B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B64u)) return;
    // 80AA8B64: cmpwi   r5, 0
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

label_80AA8B68:
    ctx->pc = 0x80AA8B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B68u)) return;
    // 80AA8B68: bc    4, 1, 0x80AA8BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8BA0;
        }
    }

label_80AA8B6C:
    ctx->pc = 0x80AA8B6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8B6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AA8B6C: lwz     r4, 24(r31)
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
label_80AA8B70:
    ctx->pc = 0x80AA8B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B70u)) return;
    // 80AA8B70: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AA8B74:
    ctx->pc = 0x80AA8B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AA8B74: lwz     r0, 20(r31)
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
label_80AA8B78:
    ctx->pc = 0x80AA8B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AA8B78u)) return;
    // 80AA8B78: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AA8B7C:
    ctx->pc = 0x80AA8B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B7Cu)) return;
    // 80AA8B7C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AA8B80:
    ctx->pc = 0x80AA8B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AA8B80u)) return;
    // 80AA8B80: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AA8B84:
    ctx->pc = 0x80AA8B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B84u)) return;
    // 80AA8B84: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA8B88:
    ctx->pc = 0x80AA8B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B88u)) return;
    // 80AA8B88: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA8B8C:
    ctx->pc = 0x80AA8B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B8Cu)) return;
    // 80AA8B8C: bl      0x80509C74
    {
            ctx->lr = 0x80AA8B90u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AA8B90:
    ctx->pc = 0x80AA8B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8B90: stw     r29, 20(r31)
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
label_80AA8B94:
    ctx->pc = 0x80AA8B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8B94: lwz     r3, 28(r31)
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
label_80AA8B98:
    ctx->pc = 0x80AA8B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B98u)) return;
    // 80AA8B98: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AA8B9C:
    ctx->pc = 0x80AA8B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8B9C: stw     r0, 28(r31)
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
label_80AA8BA0:
    ctx->pc = 0x80AA8BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8BA0: lwz     r5, 40(r31)
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
label_80AA8BA4:
    ctx->pc = 0x80AA8BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BA4u)) return;
    // 80AA8BA4: cmpwi   r5, 0
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

label_80AA8BA8:
    ctx->pc = 0x80AA8BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BA8u)) return;
    // 80AA8BA8: bc    4, 1, 0x80AA8BE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8BE0;
        }
    }

label_80AA8BAC:
    ctx->pc = 0x80AA8BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AA8BAC: lwz     r4, 36(r31)
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
label_80AA8BB0:
    ctx->pc = 0x80AA8BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BB0u)) return;
    // 80AA8BB0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AA8BB4:
    ctx->pc = 0x80AA8BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AA8BB4: lwz     r0, 32(r31)
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
label_80AA8BB8:
    ctx->pc = 0x80AA8BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AA8BB8u)) return;
    // 80AA8BB8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AA8BBC:
    ctx->pc = 0x80AA8BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BBCu)) return;
    // 80AA8BBC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AA8BC0:
    ctx->pc = 0x80AA8BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AA8BC0u)) return;
    // 80AA8BC0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AA8BC4:
    ctx->pc = 0x80AA8BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BC4u)) return;
    // 80AA8BC4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA8BC8:
    ctx->pc = 0x80AA8BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BC8u)) return;
    // 80AA8BC8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA8BCC:
    ctx->pc = 0x80AA8BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BCCu)) return;
    // 80AA8BCC: bl      0x80509BF8
    {
            ctx->lr = 0x80AA8BD0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AA8BD0:
    ctx->pc = 0x80AA8BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8BD0: stw     r29, 32(r31)
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
label_80AA8BD4:
    ctx->pc = 0x80AA8BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8BD4: lwz     r3, 40(r31)
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
label_80AA8BD8:
    ctx->pc = 0x80AA8BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BD8u)) return;
    // 80AA8BD8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AA8BDC:
    ctx->pc = 0x80AA8BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8BDC: stw     r0, 40(r31)
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
label_80AA8BE0:
    ctx->pc = 0x80AA8BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8BE0: lwz     r5, 52(r31)
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
label_80AA8BE4:
    ctx->pc = 0x80AA8BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BE4u)) return;
    // 80AA8BE4: cmpwi   r5, 0
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

label_80AA8BE8:
    ctx->pc = 0x80AA8BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BE8u)) return;
    // 80AA8BE8: bc    4, 1, 0x80AA8C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8C20;
        }
    }

label_80AA8BEC:
    ctx->pc = 0x80AA8BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AA8BEC: lwz     r4, 48(r31)
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
label_80AA8BF0:
    ctx->pc = 0x80AA8BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BF0u)) return;
    // 80AA8BF0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AA8BF4:
    ctx->pc = 0x80AA8BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AA8BF4: lwz     r0, 44(r31)
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
label_80AA8BF8:
    ctx->pc = 0x80AA8BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AA8BF8u)) return;
    // 80AA8BF8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AA8BFC:
    ctx->pc = 0x80AA8BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8BFCu)) return;
    // 80AA8BFC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AA8C00:
    ctx->pc = 0x80AA8C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AA8C00u)) return;
    // 80AA8C00: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AA8C04:
    ctx->pc = 0x80AA8C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C04u)) return;
    // 80AA8C04: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA8C08:
    ctx->pc = 0x80AA8C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C08u)) return;
    // 80AA8C08: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA8C0C:
    ctx->pc = 0x80AA8C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C0Cu)) return;
    // 80AA8C0C: bl      0x80509B94
    {
            ctx->lr = 0x80AA8C10u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AA8C10:
    ctx->pc = 0x80AA8C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8C10: stw     r29, 44(r31)
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
label_80AA8C14:
    ctx->pc = 0x80AA8C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8C14: lwz     r3, 52(r31)
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
label_80AA8C18:
    ctx->pc = 0x80AA8C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C18u)) return;
    // 80AA8C18: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AA8C1C:
    ctx->pc = 0x80AA8C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8C1C: stw     r0, 52(r31)
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
label_80AA8C20:
    ctx->pc = 0x80AA8C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8C20: lwz     r31, 28(r1)
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
label_80AA8C24:
    ctx->pc = 0x80AA8C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8C24: lwz     r30, 24(r1)
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
label_80AA8C28:
    ctx->pc = 0x80AA8C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8C28: lwz     r29, 20(r1)
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
label_80AA8C2C:
    ctx->pc = 0x80AA8C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8C2C: lwz     r0, 36(r1)
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
label_80AA8C30:
    ctx->pc = 0x80AA8C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8C30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8C34:
    ctx->pc = 0x80AA8C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C34u)) return;
    // 80AA8C34: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA8C38:
    ctx->pc = 0x80AA8C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C38u)) return;
    // 80AA8C38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8C3C:
    ctx->pc = 0x80AA8C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA8C3C: stwu     r1, -32(r1)
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
label_80AA8C40:
    ctx->pc = 0x80AA8C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8C40: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8C44:
    ctx->pc = 0x80AA8C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8C44: stw     r0, 36(r1)
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
label_80AA8C48:
    ctx->pc = 0x80AA8C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8C48: stw     r31, 28(r1)
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
label_80AA8C4C:
    ctx->pc = 0x80AA8C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8C4C: stw     r30, 24(r1)
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
label_80AA8C50:
    ctx->pc = 0x80AA8C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8C50: stw     r29, 20(r1)
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
label_80AA8C54:
    ctx->pc = 0x80AA8C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C54u)) return;
    // 80AA8C54: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA8C58:
    ctx->pc = 0x80AA8C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C58u)) return;
    // 80AA8C58: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA8C5C:
    ctx->pc = 0x80AA8C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C5Cu)) return;
    // 80AA8C5C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA8C60:
    ctx->pc = 0x80AA8C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C60u)) return;
    // 80AA8C60: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80AA8C64:
    ctx->pc = 0x80AA8C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C64u)) return;
    // 80AA8C64: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AA8C68:
    ctx->pc = 0x80AA8C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C68u)) return;
    // 80AA8C68: bl      0x8050FD60
    {
            ctx->lr = 0x80AA8C6Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AA8C6C:
    ctx->pc = 0x80AA8C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA8C6C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA8C70:
    ctx->pc = 0x80AA8C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C70u)) return;
    // 80AA8C70: cmplwi  r31, 0x0000
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

label_80AA8C74:
    ctx->pc = 0x80AA8C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C74u)) return;
    // 80AA8C74: bc    12, 2, 0x80AA8CD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8CD8;
        }
    }

label_80AA8C78:
    ctx->pc = 0x80AA8C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA8C78: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA8C7C:
    ctx->pc = 0x80AA8C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C7Cu)) return;
    // 80AA8C7C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA8C80:
    ctx->pc = 0x80AA8C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C80u)) return;
    // 80AA8C80: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA8C84:
    ctx->pc = 0x80AA8C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C84u)) return;
    // 80AA8C84: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA8C88:
    ctx->pc = 0x80AA8C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C88u)) return;
    // 80AA8C88: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA8C8C:
    ctx->pc = 0x80AA8C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C8Cu)) return;
    // 80AA8C8C: bl      0x8050A0D4
    {
            ctx->lr = 0x80AA8C90u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80AA8C90:
    ctx->pc = 0x80AA8C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80AA8C90: lis     r3, -32597
    ctx->gpr[3] = ((u32)(s32)(-32597) << 16);

label_80AA8C94:
    ctx->pc = 0x80AA8C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C94u)) return;
    // 80AA8C94: addi    r0, r3, -29888
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29888);

label_80AA8C98:
    ctx->pc = 0x80AA8C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA8C98: stw     r0, 16(r31)
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
label_80AA8C9C:
    ctx->pc = 0x80AA8C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8C9Cu)) return;
    // 80AA8C9C: lis     r3, -32597
    ctx->gpr[3] = ((u32)(s32)(-32597) << 16);

label_80AA8CA0:
    ctx->pc = 0x80AA8CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CA0u)) return;
    // 80AA8CA0: addi    r0, r3, -29928
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29928);

label_80AA8CA4:
    ctx->pc = 0x80AA8CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA8CA4: stw     r0, 24(r31)
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
label_80AA8CA8:
    ctx->pc = 0x80AA8CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA8CA8: lwz     r3, 32(r31)
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
label_80AA8CAC:
    ctx->pc = 0x80AA8CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8CAC: stw     r31, 16(r3)
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
label_80AA8CB0:
    ctx->pc = 0x80AA8CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CB0u)) return;
    // 80AA8CB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA8CB4:
    ctx->pc = 0x80AA8CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8CB4: stw     r0, 20(r3)
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
label_80AA8CB8:
    ctx->pc = 0x80AA8CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8CB8: stw     r0, 24(r3)
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
label_80AA8CBC:
    ctx->pc = 0x80AA8CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8CBC: stw     r0, 28(r3)
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
label_80AA8CC0:
    ctx->pc = 0x80AA8CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8CC0: stw     r0, 32(r3)
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
label_80AA8CC4:
    ctx->pc = 0x80AA8CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8CC4: stw     r0, 36(r3)
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
label_80AA8CC8:
    ctx->pc = 0x80AA8CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8CC8: stw     r0, 40(r3)
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
label_80AA8CCC:
    ctx->pc = 0x80AA8CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8CCC: stw     r0, 44(r3)
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
label_80AA8CD0:
    ctx->pc = 0x80AA8CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8CD0: stw     r0, 48(r3)
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
label_80AA8CD4:
    ctx->pc = 0x80AA8CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8CD4: stw     r0, 52(r3)
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
label_80AA8CD8:
    ctx->pc = 0x80AA8CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA8CD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA8CDC:
    ctx->pc = 0x80AA8CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8CDC: lwz     r31, 28(r1)
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
label_80AA8CE0:
    ctx->pc = 0x80AA8CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8CE0: lwz     r30, 24(r1)
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
label_80AA8CE4:
    ctx->pc = 0x80AA8CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8CE4: lwz     r29, 20(r1)
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
label_80AA8CE8:
    ctx->pc = 0x80AA8CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8CE8: lwz     r0, 36(r1)
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
label_80AA8CEC:
    ctx->pc = 0x80AA8CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8CEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8CF0:
    ctx->pc = 0x80AA8CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CF0u)) return;
    // 80AA8CF0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA8CF4:
    ctx->pc = 0x80AA8CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CF4u)) return;
    // 80AA8CF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8CF8:
    ctx->pc = 0x80AA8CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8CF8: stwu     r1, -16(r1)
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
label_80AA8CFC:
    ctx->pc = 0x80AA8CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8CFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8D00:
    ctx->pc = 0x80AA8D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8D00: stw     r0, 20(r1)
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
label_80AA8D04:
    ctx->pc = 0x80AA8D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8D04: stw     r31, 12(r1)
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
label_80AA8D08:
    ctx->pc = 0x80AA8D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8D08: stw     r30, 8(r1)
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
label_80AA8D0C:
    ctx->pc = 0x80AA8D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D0Cu)) return;
    // 80AA8D0C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA8D10:
    ctx->pc = 0x80AA8D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8D10: lwz     r31, 32(r3)
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
label_80AA8D14:
    ctx->pc = 0x80AA8D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8D14: stw     r30, 24(r31)
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
label_80AA8D18:
    ctx->pc = 0x80AA8D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8D18: stw     r5, 28(r31)
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
label_80AA8D1C:
    ctx->pc = 0x80AA8D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D1Cu)) return;
    // 80AA8D1C: cmpwi   r5, 0
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

label_80AA8D20:
    ctx->pc = 0x80AA8D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D20u)) return;
    // 80AA8D20: bc    12, 1, 0x80AA8D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8D30;
        }
    }

label_80AA8D24:
    ctx->pc = 0x80AA8D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8D24: lwz     r3, 16(r31)
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
label_80AA8D28:
    ctx->pc = 0x80AA8D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D28u)) return;
    // 80AA8D28: bl      0x80509C74
    {
            ctx->lr = 0x80AA8D2Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AA8D2C:
    ctx->pc = 0x80AA8D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8D2C: stw     r30, 20(r31)
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
label_80AA8D30:
    ctx->pc = 0x80AA8D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8D30: lwz     r31, 12(r1)
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
label_80AA8D34:
    ctx->pc = 0x80AA8D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8D34: lwz     r30, 8(r1)
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
label_80AA8D38:
    ctx->pc = 0x80AA8D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8D38: lwz     r0, 20(r1)
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
label_80AA8D3C:
    ctx->pc = 0x80AA8D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8D3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8D40:
    ctx->pc = 0x80AA8D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D40u)) return;
    // 80AA8D40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA8D44:
    ctx->pc = 0x80AA8D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D44u)) return;
    // 80AA8D44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8D48:
    ctx->pc = 0x80AA8D48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8D48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8D48: stwu     r1, -16(r1)
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
label_80AA8D4C:
    ctx->pc = 0x80AA8D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8D4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8D50:
    ctx->pc = 0x80AA8D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8D50: stw     r0, 20(r1)
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
label_80AA8D54:
    ctx->pc = 0x80AA8D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8D54: stw     r31, 12(r1)
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
label_80AA8D58:
    ctx->pc = 0x80AA8D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8D58: stw     r30, 8(r1)
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
label_80AA8D5C:
    ctx->pc = 0x80AA8D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D5Cu)) return;
    // 80AA8D5C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA8D60:
    ctx->pc = 0x80AA8D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8D60: lwz     r31, 32(r3)
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
label_80AA8D64:
    ctx->pc = 0x80AA8D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8D64: stw     r30, 36(r31)
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
label_80AA8D68:
    ctx->pc = 0x80AA8D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8D68: stw     r5, 40(r31)
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
label_80AA8D6C:
    ctx->pc = 0x80AA8D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D6Cu)) return;
    // 80AA8D6C: cmpwi   r5, 0
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

label_80AA8D70:
    ctx->pc = 0x80AA8D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D70u)) return;
    // 80AA8D70: bc    12, 1, 0x80AA8D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8D80;
        }
    }

label_80AA8D74:
    ctx->pc = 0x80AA8D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8D74: lwz     r3, 16(r31)
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
label_80AA8D78:
    ctx->pc = 0x80AA8D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D78u)) return;
    // 80AA8D78: bl      0x80509BF8
    {
            ctx->lr = 0x80AA8D7Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AA8D7C:
    ctx->pc = 0x80AA8D7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8D7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8D7C: stw     r30, 32(r31)
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
label_80AA8D80:
    ctx->pc = 0x80AA8D80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8D80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8D80: lwz     r31, 12(r1)
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
label_80AA8D84:
    ctx->pc = 0x80AA8D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8D84: lwz     r30, 8(r1)
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
label_80AA8D88:
    ctx->pc = 0x80AA8D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8D88: lwz     r0, 20(r1)
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
label_80AA8D8C:
    ctx->pc = 0x80AA8D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8D8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8D90:
    ctx->pc = 0x80AA8D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D90u)) return;
    // 80AA8D90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA8D94:
    ctx->pc = 0x80AA8D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D94u)) return;
    // 80AA8D94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8D98:
    ctx->pc = 0x80AA8D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8D98: stwu     r1, -16(r1)
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
label_80AA8D9C:
    ctx->pc = 0x80AA8D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8D9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8DA0:
    ctx->pc = 0x80AA8DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8DA0: stw     r0, 20(r1)
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
label_80AA8DA4:
    ctx->pc = 0x80AA8DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8DA4: stw     r31, 12(r1)
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
label_80AA8DA8:
    ctx->pc = 0x80AA8DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8DA8: stw     r30, 8(r1)
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
label_80AA8DAC:
    ctx->pc = 0x80AA8DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DACu)) return;
    // 80AA8DAC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA8DB0:
    ctx->pc = 0x80AA8DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8DB0: lwz     r31, 32(r3)
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
label_80AA8DB4:
    ctx->pc = 0x80AA8DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8DB4: stw     r30, 48(r31)
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
label_80AA8DB8:
    ctx->pc = 0x80AA8DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8DB8: stw     r5, 52(r31)
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
label_80AA8DBC:
    ctx->pc = 0x80AA8DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DBCu)) return;
    // 80AA8DBC: cmpwi   r5, 0
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

label_80AA8DC0:
    ctx->pc = 0x80AA8DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DC0u)) return;
    // 80AA8DC0: bc    12, 1, 0x80AA8DD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8DD0;
        }
    }

label_80AA8DC4:
    ctx->pc = 0x80AA8DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8DC4: lwz     r3, 16(r31)
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
label_80AA8DC8:
    ctx->pc = 0x80AA8DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DC8u)) return;
    // 80AA8DC8: bl      0x80509B94
    {
            ctx->lr = 0x80AA8DCCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AA8DCC:
    ctx->pc = 0x80AA8DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8DCC: stw     r30, 44(r31)
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
label_80AA8DD0:
    ctx->pc = 0x80AA8DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8DD0: lwz     r31, 12(r1)
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
label_80AA8DD4:
    ctx->pc = 0x80AA8DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8DD4: lwz     r30, 8(r1)
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
label_80AA8DD8:
    ctx->pc = 0x80AA8DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8DD8: lwz     r0, 20(r1)
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
label_80AA8DDC:
    ctx->pc = 0x80AA8DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8DDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8DE0:
    ctx->pc = 0x80AA8DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DE0u)) return;
    // 80AA8DE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA8DE4:
    ctx->pc = 0x80AA8DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DE4u)) return;
    // 80AA8DE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8DE8:
    ctx->pc = 0x80AA8DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8DE8: stwu     r1, -16(r1)
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
label_80AA8DEC:
    ctx->pc = 0x80AA8DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8DEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8DF0:
    ctx->pc = 0x80AA8DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8DF0: stw     r0, 20(r1)
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
label_80AA8DF4:
    ctx->pc = 0x80AA8DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8DF4: stw     r31, 12(r1)
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
label_80AA8DF8:
    ctx->pc = 0x80AA8DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DF8u)) return;
    // 80AA8DF8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA8DFC:
    ctx->pc = 0x80AA8DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8DFCu)) return;
    // 80AA8DFC: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8E00:
    ctx->pc = 0x80AA8E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E00u)) return;
    // 80AA8E00: addi    r4, r4, 7724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7724);

label_80AA8E04:
    ctx->pc = 0x80AA8E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8E04: lwz     r0, 0(r4)
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
label_80AA8E08:
    ctx->pc = 0x80AA8E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E08u)) return;
    // 80AA8E08: cmplwi  r0, 0x0000
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

label_80AA8E0C:
    ctx->pc = 0x80AA8E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E0Cu)) return;
    // 80AA8E0C: bc    4, 2, 0x80AA8E30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8E30;
        }
    }

label_80AA8E10:
    ctx->pc = 0x80AA8E10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8E10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8E10: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80AA8E14:
    ctx->pc = 0x80AA8E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E14u)) return;
    // 80AA8E14: bl      0x8050EEC0
    {
            ctx->lr = 0x80AA8E18u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80AA8E18:
    ctx->pc = 0x80AA8E18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8E18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA8E18: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8E1C:
    ctx->pc = 0x80AA8E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E1Cu)) return;
    // 80AA8E1C: addi    r4, r4, 7724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7724);

label_80AA8E20:
    ctx->pc = 0x80AA8E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8E20: stw     r3, 0(r4)
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
label_80AA8E24:
    ctx->pc = 0x80AA8E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E24u)) return;
    // 80AA8E24: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8E28:
    ctx->pc = 0x80AA8E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E28u)) return;
    // 80AA8E28: addi    r3, r3, 7720
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7720);

label_80AA8E2C:
    ctx->pc = 0x80AA8E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8E2C: stw     r31, 0(r3)
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
label_80AA8E30:
    ctx->pc = 0x80AA8E30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8E30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8E30: lwz     r31, 12(r1)
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
label_80AA8E34:
    ctx->pc = 0x80AA8E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8E34: lwz     r0, 20(r1)
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
label_80AA8E38:
    ctx->pc = 0x80AA8E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8E38: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8E3C:
    ctx->pc = 0x80AA8E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E3Cu)) return;
    // 80AA8E3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA8E40:
    ctx->pc = 0x80AA8E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E40u)) return;
    // 80AA8E40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8E44:
    ctx->pc = 0x80AA8E44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8E44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA8E44: stwu     r1, -32(r1)
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
label_80AA8E48:
    ctx->pc = 0x80AA8E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA8E48: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8E4C:
    ctx->pc = 0x80AA8E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA8E4C: stw     r0, 36(r1)
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
label_80AA8E50:
    ctx->pc = 0x80AA8E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8E50: stw     r31, 28(r1)
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
label_80AA8E54:
    ctx->pc = 0x80AA8E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8E54: stw     r30, 24(r1)
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
label_80AA8E58:
    ctx->pc = 0x80AA8E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8E58: stw     r29, 20(r1)
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
label_80AA8E5C:
    ctx->pc = 0x80AA8E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8E5C: stw     r28, 16(r1)
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
label_80AA8E60:
    ctx->pc = 0x80AA8E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E60u)) return;
    // 80AA8E60: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8E64:
    ctx->pc = 0x80AA8E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E64u)) return;
    // 80AA8E64: addi    r30, r3, 7724
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(7724);

label_80AA8E68:
    ctx->pc = 0x80AA8E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8E68: lwz     r0, 0(r30)
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
label_80AA8E6C:
    ctx->pc = 0x80AA8E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E6Cu)) return;
    // 80AA8E6C: cmplwi  r0, 0x0000
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

label_80AA8E70:
    ctx->pc = 0x80AA8E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E70u)) return;
    // 80AA8E70: bc    12, 2, 0x80AA8ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8ED0;
        }
    }

label_80AA8E74:
    ctx->pc = 0x80AA8E74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8E74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8E74: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80AA8E78:
    ctx->pc = 0x80AA8E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E78u)) return;
    // 80AA8E78: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80AA8E7C:
    ctx->pc = 0x80AA8E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E7Cu)) return;
    // 80AA8E7C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8E80:
    ctx->pc = 0x80AA8E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E80u)) return;
    // 80AA8E80: addi    r31, r3, 7720
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(7720);

label_80AA8E84:
    ctx->pc = 0x80AA8E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E84u)) return;
    // 80AA8E84: b       0x80AA8EA4
    {
            goto label_80AA8EA4;
    }

label_80AA8E88:
    ctx->pc = 0x80AA8E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA8E88: lwz     r3, 0(r30)
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
label_80AA8E8C:
    ctx->pc = 0x80AA8E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8E8C: lwzx    r3, r3, r29
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
label_80AA8E90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E90u)) return;
    // 80AA8E90: cmplwi  r3, 0x0000
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

label_80AA8E94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8E94u)) return;
    // 80AA8E94: bc    12, 2, 0x80AA8E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8E9C;
        }
    }

label_80AA8E98:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8E98: bl      0x8050F9E0
    {
            ctx->lr = 0x80AA8E9Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AA8E9C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA8E9C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80AA8EA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EA0u)) return;
    // 80AA8EA0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80AA8EA4:
    ctx->pc = 0x80AA8EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8EA4: lwz     r0, 0(r31)
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
label_80AA8EA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EA8u)) return;
    // 80AA8EA8: cmpw    r28, r0
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

label_80AA8EAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EACu)) return;
    // 80AA8EAC: bc    12, 0, 0x80AA8E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA8E88u;
                return;
            }
            goto label_80AA8E88;
        }
    }

label_80AA8EB0:
    ctx->pc = 0x80AA8EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA8EB0: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8EB4:
    ctx->pc = 0x80AA8EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EB4u)) return;
    // 80AA8EB4: addi    r3, r3, 7724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7724);

label_80AA8EB8:
    ctx->pc = 0x80AA8EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8EB8: lwz     r3, 0(r3)
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
label_80AA8EBC:
    ctx->pc = 0x80AA8EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EBCu)) return;
    // 80AA8EBC: bl      0x8050ED40
    {
            ctx->lr = 0x80AA8EC0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80AA8EC0:
    ctx->pc = 0x80AA8EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA8EC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA8EC4:
    ctx->pc = 0x80AA8EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EC4u)) return;
    // 80AA8EC4: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8EC8:
    ctx->pc = 0x80AA8EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EC8u)) return;
    // 80AA8EC8: addi    r3, r3, 7724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7724);

label_80AA8ECC:
    ctx->pc = 0x80AA8ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8ECC: stw     r0, 0(r3)
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
label_80AA8ED0:
    ctx->pc = 0x80AA8ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8ED0: lwz     r31, 28(r1)
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
label_80AA8ED4:
    ctx->pc = 0x80AA8ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8ED4: lwz     r30, 24(r1)
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
label_80AA8ED8:
    ctx->pc = 0x80AA8ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8ED8: lwz     r29, 20(r1)
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
label_80AA8EDC:
    ctx->pc = 0x80AA8EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8EDC: lwz     r28, 16(r1)
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
label_80AA8EE0:
    ctx->pc = 0x80AA8EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8EE0: lwz     r0, 36(r1)
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
label_80AA8EE4:
    ctx->pc = 0x80AA8EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8EE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8EE8:
    ctx->pc = 0x80AA8EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EE8u)) return;
    // 80AA8EE8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA8EEC:
    ctx->pc = 0x80AA8EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EECu)) return;
    // 80AA8EEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8EF0:
    ctx->pc = 0x80AA8EF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8EF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8EF0: stwu     r1, -16(r1)
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
label_80AA8EF4:
    ctx->pc = 0x80AA8EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8EF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8EF8:
    ctx->pc = 0x80AA8EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8EF8: stw     r0, 20(r1)
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
label_80AA8EFC:
    ctx->pc = 0x80AA8EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8EFC: stw     r31, 12(r1)
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
label_80AA8F00:
    ctx->pc = 0x80AA8F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F00u)) return;
    // 80AA8F00: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA8F04:
    ctx->pc = 0x80AA8F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F04u)) return;
    // 80AA8F04: addi    r6, r6, 7720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7720);

label_80AA8F08:
    ctx->pc = 0x80AA8F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8F08: lwz     r0, 0(r6)
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
label_80AA8F0C:
    ctx->pc = 0x80AA8F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F0Cu)) return;
    // 80AA8F0C: cmpw    r3, r0
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

label_80AA8F10:
    ctx->pc = 0x80AA8F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F10u)) return;
    // 80AA8F10: bc    4, 0, 0x80AA8F4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8F4C;
        }
    }

label_80AA8F14:
    ctx->pc = 0x80AA8F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA8F14: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA8F18:
    ctx->pc = 0x80AA8F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F18u)) return;
    // 80AA8F18: addi    r6, r6, 7724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7724);

label_80AA8F1C:
    ctx->pc = 0x80AA8F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8F1C: lwz     r6, 0(r6)
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
label_80AA8F20:
    ctx->pc = 0x80AA8F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F20u)) return;
    // 80AA8F20: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA8F24:
    ctx->pc = 0x80AA8F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8F24: lwzx    r0, r6, r31
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
label_80AA8F28:
    ctx->pc = 0x80AA8F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F28u)) return;
    // 80AA8F28: cmplwi  r0, 0x0000
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

label_80AA8F2C:
    ctx->pc = 0x80AA8F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F2Cu)) return;
    // 80AA8F2C: bc    4, 2, 0x80AA8F4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8F4C;
        }
    }

label_80AA8F30:
    ctx->pc = 0x80AA8F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA8F30: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA8F34:
    ctx->pc = 0x80AA8F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F34u)) return;
    // 80AA8F34: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80AA8F38:
    ctx->pc = 0x80AA8F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F38u)) return;
    // 80AA8F38: bl      0x80AA8C3C
    {
            ctx->lr = 0x80AA8F3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA8C3Cu;
                return;
            }
            goto label_80AA8C3C;
    }

label_80AA8F3C:
    ctx->pc = 0x80AA8F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA8F3C: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8F40:
    ctx->pc = 0x80AA8F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F40u)) return;
    // 80AA8F40: addi    r4, r4, 7724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7724);

label_80AA8F44:
    ctx->pc = 0x80AA8F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8F44: lwz     r4, 0(r4)
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
label_80AA8F48:
    ctx->pc = 0x80AA8F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8F48: stwx    r3, r4, r31
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
label_80AA8F4C:
    ctx->pc = 0x80AA8F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8F4C: lwz     r31, 12(r1)
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
label_80AA8F50:
    ctx->pc = 0x80AA8F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8F50: lwz     r0, 20(r1)
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
label_80AA8F54:
    ctx->pc = 0x80AA8F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8F54: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8F58:
    ctx->pc = 0x80AA8F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F58u)) return;
    // 80AA8F58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA8F5C:
    ctx->pc = 0x80AA8F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F5Cu)) return;
    // 80AA8F5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8F60:
    ctx->pc = 0x80AA8F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA8F60: stwu     r1, -16(r1)
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
label_80AA8F64:
    ctx->pc = 0x80AA8F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8F64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8F68:
    ctx->pc = 0x80AA8F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8F68: stw     r0, 20(r1)
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
label_80AA8F6C:
    ctx->pc = 0x80AA8F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8F6C: stw     r31, 12(r1)
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
label_80AA8F70:
    ctx->pc = 0x80AA8F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F70u)) return;
    // 80AA8F70: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8F74:
    ctx->pc = 0x80AA8F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F74u)) return;
    // 80AA8F74: addi    r4, r4, 7720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7720);

label_80AA8F78:
    ctx->pc = 0x80AA8F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8F78: lwz     r0, 0(r4)
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
label_80AA8F7C:
    ctx->pc = 0x80AA8F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F7Cu)) return;
    // 80AA8F7C: cmpw    r3, r0
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

label_80AA8F80:
    ctx->pc = 0x80AA8F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F80u)) return;
    // 80AA8F80: bc    4, 0, 0x80AA8FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA8FB8;
        }
    }

label_80AA8F84:
    ctx->pc = 0x80AA8F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA8F84: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA8F88:
    ctx->pc = 0x80AA8F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F88u)) return;
    // 80AA8F88: addi    r4, r4, 7724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7724);

label_80AA8F8C:
    ctx->pc = 0x80AA8F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8F8C: lwz     r4, 0(r4)
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
label_80AA8F90:
    ctx->pc = 0x80AA8F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F90u)) return;
    // 80AA8F90: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA8F94:
    ctx->pc = 0x80AA8F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8F94: lwzx    r3, r4, r31
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
label_80AA8F98:
    ctx->pc = 0x80AA8F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F98u)) return;
    // 80AA8F98: cmplwi  r3, 0x0000
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

label_80AA8F9C:
    ctx->pc = 0x80AA8F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8F9Cu)) return;
    // 80AA8F9C: bc    12, 2, 0x80AA8FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA8FB8;
        }
    }

label_80AA8FA0:
    ctx->pc = 0x80AA8FA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8FA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA8FA0: bl      0x8050F9E0
    {
            ctx->lr = 0x80AA8FA4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AA8FA4:
    ctx->pc = 0x80AA8FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA8FA4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA8FA8:
    ctx->pc = 0x80AA8FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FA8u)) return;
    // 80AA8FA8: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA8FAC:
    ctx->pc = 0x80AA8FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FACu)) return;
    // 80AA8FAC: addi    r3, r3, 7724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7724);

label_80AA8FB0:
    ctx->pc = 0x80AA8FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA8FB0: lwz     r3, 0(r3)
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
label_80AA8FB4:
    ctx->pc = 0x80AA8FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA8FB4: stwx    r0, r3, r31
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
label_80AA8FB8:
    ctx->pc = 0x80AA8FB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8FB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8FB8: lwz     r31, 12(r1)
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
label_80AA8FBC:
    ctx->pc = 0x80AA8FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8FBC: lwz     r0, 20(r1)
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
label_80AA8FC0:
    ctx->pc = 0x80AA8FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA8FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8FC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8FC4:
    ctx->pc = 0x80AA8FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FC4u)) return;
    // 80AA8FC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA8FC8:
    ctx->pc = 0x80AA8FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FC8u)) return;
    // 80AA8FC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA8FCC:
    ctx->pc = 0x80AA8FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA8FCC: stwu     r1, -16(r1)
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
label_80AA8FD0:
    ctx->pc = 0x80AA8FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA8FD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA8FD4:
    ctx->pc = 0x80AA8FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA8FD4: stw     r0, 20(r1)
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
label_80AA8FD8:
    ctx->pc = 0x80AA8FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FD8u)) return;
    // 80AA8FD8: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA8FDC:
    ctx->pc = 0x80AA8FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FDCu)) return;
    // 80AA8FDC: addi    r6, r6, 7720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7720);

label_80AA8FE0:
    ctx->pc = 0x80AA8FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8FE0: lwz     r0, 0(r6)
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
label_80AA8FE4:
    ctx->pc = 0x80AA8FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FE4u)) return;
    // 80AA8FE4: cmpw    r3, r0
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

label_80AA8FE8:
    ctx->pc = 0x80AA8FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FE8u)) return;
    // 80AA8FE8: bc    4, 0, 0x80AA900C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA900C;
        }
    }

label_80AA8FEC:
    ctx->pc = 0x80AA8FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA8FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA8FEC: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA8FF0:
    ctx->pc = 0x80AA8FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FF0u)) return;
    // 80AA8FF0: addi    r6, r6, 7724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7724);

label_80AA8FF4:
    ctx->pc = 0x80AA8FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA8FF4: lwz     r6, 0(r6)
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
label_80AA8FF8:
    ctx->pc = 0x80AA8FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FF8u)) return;
    // 80AA8FF8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA8FFC:
    ctx->pc = 0x80AA8FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA8FFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA8FFC: lwzx    r3, r6, r0
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
label_80AA9000:
    ctx->pc = 0x80AA9000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9000u)) return;
    // 80AA9000: cmplwi  r3, 0x0000
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

label_80AA9004:
    ctx->pc = 0x80AA9004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9004u)) return;
    // 80AA9004: bc    12, 2, 0x80AA900C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA900C;
        }
    }

label_80AA9008:
    ctx->pc = 0x80AA9008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA9008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA9008: bl      0x80AA8CF8
    {
            ctx->lr = 0x80AA900Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA8CF8u;
                return;
            }
            goto label_80AA8CF8;
    }

label_80AA900C:
    ctx->pc = 0x80AA900Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA900Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA900C: lwz     r0, 20(r1)
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
label_80AA9010:
    ctx->pc = 0x80AA9010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA9010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA9010: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA9014:
    ctx->pc = 0x80AA9014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9014u)) return;
    // 80AA9014: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA9018:
    ctx->pc = 0x80AA9018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9018u)) return;
    // 80AA9018: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA901C:
    ctx->pc = 0x80AA901Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA901Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA901C: stwu     r1, -16(r1)
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
label_80AA9020:
    ctx->pc = 0x80AA9020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA9020: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA9024:
    ctx->pc = 0x80AA9024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA9024: stw     r0, 20(r1)
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
label_80AA9028:
    ctx->pc = 0x80AA9028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9028u)) return;
    // 80AA9028: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA902C:
    ctx->pc = 0x80AA902Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA902Cu)) return;
    // 80AA902C: addi    r6, r6, 7720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7720);

label_80AA9030:
    ctx->pc = 0x80AA9030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA9030: lwz     r0, 0(r6)
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
label_80AA9034:
    ctx->pc = 0x80AA9034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9034u)) return;
    // 80AA9034: cmpw    r3, r0
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

label_80AA9038:
    ctx->pc = 0x80AA9038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9038u)) return;
    // 80AA9038: bc    4, 0, 0x80AA905C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA905C;
        }
    }

label_80AA903C:
    ctx->pc = 0x80AA903Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA903Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA903C: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA9040:
    ctx->pc = 0x80AA9040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9040u)) return;
    // 80AA9040: addi    r6, r6, 7724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7724);

label_80AA9044:
    ctx->pc = 0x80AA9044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA9044: lwz     r6, 0(r6)
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
label_80AA9048:
    ctx->pc = 0x80AA9048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9048u)) return;
    // 80AA9048: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA904C:
    ctx->pc = 0x80AA904Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA904Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA904C: lwzx    r3, r6, r0
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
label_80AA9050:
    ctx->pc = 0x80AA9050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9050u)) return;
    // 80AA9050: cmplwi  r3, 0x0000
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

label_80AA9054:
    ctx->pc = 0x80AA9054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9054u)) return;
    // 80AA9054: bc    12, 2, 0x80AA905C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA905C;
        }
    }

label_80AA9058:
    ctx->pc = 0x80AA9058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA9058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA9058: bl      0x80AA8D48
    {
            ctx->lr = 0x80AA905Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA8D48u;
                return;
            }
            goto label_80AA8D48;
    }

label_80AA905C:
    ctx->pc = 0x80AA905Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA905Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA905C: lwz     r0, 20(r1)
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
label_80AA9060:
    ctx->pc = 0x80AA9060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA9060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA9060: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA9064:
    ctx->pc = 0x80AA9064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9064u)) return;
    // 80AA9064: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA9068:
    ctx->pc = 0x80AA9068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9068u)) return;
    // 80AA9068: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA906C:
    ctx->pc = 0x80AA906Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA906Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA906C: stwu     r1, -16(r1)
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
label_80AA9070:
    ctx->pc = 0x80AA9070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA9070: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA9074:
    ctx->pc = 0x80AA9074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA9074: stw     r0, 20(r1)
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
label_80AA9078:
    ctx->pc = 0x80AA9078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9078u)) return;
    // 80AA9078: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA907C:
    ctx->pc = 0x80AA907Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA907Cu)) return;
    // 80AA907C: addi    r6, r6, 7720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7720);

label_80AA9080:
    ctx->pc = 0x80AA9080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA9080: lwz     r0, 0(r6)
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
label_80AA9084:
    ctx->pc = 0x80AA9084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9084u)) return;
    // 80AA9084: cmpw    r3, r0
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

label_80AA9088:
    ctx->pc = 0x80AA9088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9088u)) return;
    // 80AA9088: bc    4, 0, 0x80AA90AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA90AC;
        }
    }

label_80AA908C:
    ctx->pc = 0x80AA908Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA908Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA908C: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA9090:
    ctx->pc = 0x80AA9090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9090u)) return;
    // 80AA9090: addi    r6, r6, 7724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7724);

label_80AA9094:
    ctx->pc = 0x80AA9094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA9094: lwz     r6, 0(r6)
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
label_80AA9098:
    ctx->pc = 0x80AA9098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9098u)) return;
    // 80AA9098: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA909C:
    ctx->pc = 0x80AA909Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA909Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA909C: lwzx    r3, r6, r0
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
label_80AA90A0:
    ctx->pc = 0x80AA90A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90A0u)) return;
    // 80AA90A0: cmplwi  r3, 0x0000
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

label_80AA90A4:
    ctx->pc = 0x80AA90A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90A4u)) return;
    // 80AA90A4: bc    12, 2, 0x80AA90AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA90AC;
        }
    }

label_80AA90A8:
    ctx->pc = 0x80AA90A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA90A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA90A8: bl      0x80AA8D98
    {
            ctx->lr = 0x80AA90ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA8D98u;
                return;
            }
            goto label_80AA8D98;
    }

label_80AA90AC:
    ctx->pc = 0x80AA90ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA90ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA90AC: lwz     r0, 20(r1)
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
label_80AA90B0:
    ctx->pc = 0x80AA90B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA90B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA90B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA90B4:
    ctx->pc = 0x80AA90B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90B4u)) return;
    // 80AA90B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA90B8:
    ctx->pc = 0x80AA90B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90B8u)) return;
    // 80AA90B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

label_80AA90BC:
    ctx->pc = 0x80AA90BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA90BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA90BC: stwu     r1, -32(r1)
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
label_80AA90C0:
    ctx->pc = 0x80AA90C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA90C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA90C4:
    ctx->pc = 0x80AA90C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA90C4: stw     r0, 36(r1)
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
label_80AA90C8:
    ctx->pc = 0x80AA90C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA90C8: stw     r31, 28(r1)
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
label_80AA90CC:
    ctx->pc = 0x80AA90CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA90CC: stw     r30, 24(r1)
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
label_80AA90D0:
    ctx->pc = 0x80AA90D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA90D0: stw     r29, 20(r1)
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
label_80AA90D4:
    ctx->pc = 0x80AA90D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA90D4: stw     r28, 16(r1)
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
label_80AA90D8:
    ctx->pc = 0x80AA90D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90D8u)) return;
    // 80AA90D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA90DC:
    ctx->pc = 0x80AA90DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90DCu)) return;
    // 80AA90DC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA90E0:
    ctx->pc = 0x80AA90E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90E0u)) return;
    // 80AA90E0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80AA90E4:
    ctx->pc = 0x80AA90E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90E4u)) return;
    // 80AA90E4: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80AA90E8:
    ctx->pc = 0x80AA90E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90E8u)) return;
    // 80AA90E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA90EC:
    ctx->pc = 0x80AA90ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90ECu)) return;
    // 80AA90EC: bl      0x80401DB0
    {
            ctx->lr = 0x80AA90F0u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80AA90F0:
    ctx->pc = 0x80AA90F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA90F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA90F0: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA90F4:
    ctx->pc = 0x80AA90F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90F4u)) return;
    // 80AA90F4: addi    r4, r4, 7728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7728);

label_80AA90F8:
    ctx->pc = 0x80AA90F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA90F8: lwz     r0, 0(r4)
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
label_80AA90FC:
    ctx->pc = 0x80AA90FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA90FCu)) return;
    // 80AA90FC: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80AA9100:
    ctx->pc = 0x80AA9100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9100u)) return;
    // 80AA9100: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA9104:
    ctx->pc = 0x80AA9104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9104u)) return;
    // 80AA9104: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA9108:
    ctx->pc = 0x80AA9108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9108u)) return;
    // 80AA9108: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA910C:
    ctx->pc = 0x80AA910Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA910Cu)) return;
    // 80AA910C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA9110:
    ctx->pc = 0x80AA9110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9110u)) return;
    // 80AA9110: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80AA9114:
    ctx->pc = 0x80AA9114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9114u)) return;
    // 80AA9114: bl      0x8050A0D4
    {
            ctx->lr = 0x80AA9118u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80AA9118:
    ctx->pc = 0x80AA9118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA9118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA9118: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA911C:
    ctx->pc = 0x80AA911Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA911Cu)) return;
    // 80AA911C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80AA9120:
    ctx->pc = 0x80AA9120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9120u)) return;
    // 80AA9120: bl      0x80509C74
    {
            ctx->lr = 0x80AA9124u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AA9124:
    ctx->pc = 0x80AA9124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA9124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA9124: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA9128:
    ctx->pc = 0x80AA9128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9128u)) return;
    // 80AA9128: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA912C:
    ctx->pc = 0x80AA912Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA912Cu)) return;
    // 80AA912C: bl      0x80509BF8
    {
            ctx->lr = 0x80AA9130u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AA9130:
    ctx->pc = 0x80AA9130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA9130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA9130: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA9134:
    ctx->pc = 0x80AA9134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9134u)) return;
    // 80AA9134: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA9138:
    ctx->pc = 0x80AA9138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9138u)) return;
    // 80AA9138: bl      0x80509B94
    {
            ctx->lr = 0x80AA913Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AA913C:
    ctx->pc = 0x80AA913Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA913Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AA913C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA9140:
    ctx->pc = 0x80AA9140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9140u)) return;
    // 80AA9140: addi    r4, r3, 7728
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7728);

label_80AA9144:
    ctx->pc = 0x80AA9144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA9144: lwz     r3, 0(r4)
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
label_80AA9148:
    ctx->pc = 0x80AA9148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9148u)) return;
    // 80AA9148: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80AA914C:
    ctx->pc = 0x80AA914Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA914Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA914C: stw     r0, 0(r4)
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
label_80AA9150:
    ctx->pc = 0x80AA9150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9150u)) return;
    // 80AA9150: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80AA9154:
    ctx->pc = 0x80AA9154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA9154: stw     r0, 0(r4)
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
label_80AA9158:
    ctx->pc = 0x80AA9158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA9158: lwz     r31, 28(r1)
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
label_80AA915C:
    ctx->pc = 0x80AA915Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA915Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA915C: lwz     r30, 24(r1)
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
label_80AA9160:
    ctx->pc = 0x80AA9160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA9160: lwz     r29, 20(r1)
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
label_80AA9164:
    ctx->pc = 0x80AA9164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA9164: lwz     r28, 16(r1)
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
label_80AA9168:
    ctx->pc = 0x80AA9168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA9168: lwz     r0, 36(r1)
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
label_80AA916C:
    ctx->pc = 0x80AA916Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA916Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA916C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA9170:
    ctx->pc = 0x80AA9170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9170u)) return;
    // 80AA9170: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA9174:
    ctx->pc = 0x80AA9174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA9174u)) return;
    // 80AA9174: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA71C0;
        }
    }

    ctx->pc = 0x80AA9178u;
    return;
return_dispatch_80AA71C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80AA71E4u: goto label_80AA71E4;
    case 0x80AA720Cu: goto label_80AA720C;
    case 0x80AA7210u: goto label_80AA7210;
    case 0x80AA7214u: goto label_80AA7214;
    case 0x80AA721Cu: goto label_80AA721C;
    case 0x80AA7224u: goto label_80AA7224;
    case 0x80AA724Cu: goto label_80AA724C;
    case 0x80AA7254u: goto label_80AA7254;
    case 0x80AA7264u: goto label_80AA7264;
    case 0x80AA726Cu: goto label_80AA726C;
    case 0x80AA7270u: goto label_80AA7270;
    case 0x80AA7278u: goto label_80AA7278;
    case 0x80AA72A0u: goto label_80AA72A0;
    case 0x80AA72A8u: goto label_80AA72A8;
    case 0x80AA72B4u: goto label_80AA72B4;
    case 0x80AA72C8u: goto label_80AA72C8;
    case 0x80AA72D4u: goto label_80AA72D4;
    case 0x80AA72F4u: goto label_80AA72F4;
    case 0x80AA7300u: goto label_80AA7300;
    case 0x80AA733Cu: goto label_80AA733C;
    case 0x80AA7344u: goto label_80AA7344;
    case 0x80AA734Cu: goto label_80AA734C;
    case 0x80AA7350u: goto label_80AA7350;
    case 0x80AA7358u: goto label_80AA7358;
    case 0x80AA7380u: goto label_80AA7380;
    case 0x80AA7388u: goto label_80AA7388;
    case 0x80AA7394u: goto label_80AA7394;
    case 0x80AA73A8u: goto label_80AA73A8;
    case 0x80AA73B4u: goto label_80AA73B4;
    case 0x80AA73C0u: goto label_80AA73C0;
    case 0x80AA73CCu: goto label_80AA73CC;
    case 0x80AA73F4u: goto label_80AA73F4;
    case 0x80AA7410u: goto label_80AA7410;
    case 0x80AA7440u: goto label_80AA7440;
    case 0x80AA7448u: goto label_80AA7448;
    case 0x80AA7450u: goto label_80AA7450;
    case 0x80AA7458u: goto label_80AA7458;
    case 0x80AA7464u: goto label_80AA7464;
    case 0x80AA7488u: goto label_80AA7488;
    case 0x80AA7490u: goto label_80AA7490;
    case 0x80AA749Cu: goto label_80AA749C;
    case 0x80AA74C0u: goto label_80AA74C0;
    case 0x80AA74C8u: goto label_80AA74C8;
    case 0x80AA74D0u: goto label_80AA74D0;
    case 0x80AA7510u: goto label_80AA7510;
    case 0x80AA7518u: goto label_80AA7518;
    case 0x80AA7558u: goto label_80AA7558;
    case 0x80AA7560u: goto label_80AA7560;
    case 0x80AA757Cu: goto label_80AA757C;
    case 0x80AA75ACu: goto label_80AA75AC;
    case 0x80AA75B4u: goto label_80AA75B4;
    case 0x80AA75BCu: goto label_80AA75BC;
    case 0x80AA75C0u: goto label_80AA75C0;
    case 0x80AA75C8u: goto label_80AA75C8;
    case 0x80AA75CCu: goto label_80AA75CC;
    case 0x80AA75D4u: goto label_80AA75D4;
    case 0x80AA75D8u: goto label_80AA75D8;
    case 0x80AA75E0u: goto label_80AA75E0;
    case 0x80AA75ECu: goto label_80AA75EC;
    case 0x80AA75F4u: goto label_80AA75F4;
    case 0x80AA7618u: goto label_80AA7618;
    case 0x80AA7620u: goto label_80AA7620;
    case 0x80AA7624u: goto label_80AA7624;
    case 0x80AA762Cu: goto label_80AA762C;
    case 0x80AA7630u: goto label_80AA7630;
    case 0x80AA7634u: goto label_80AA7634;
    case 0x80AA763Cu: goto label_80AA763C;
    case 0x80AA7640u: goto label_80AA7640;
    case 0x80AA7648u: goto label_80AA7648;
    case 0x80AA7654u: goto label_80AA7654;
    case 0x80AA765Cu: goto label_80AA765C;
    case 0x80AA7680u: goto label_80AA7680;
    case 0x80AA7688u: goto label_80AA7688;
    case 0x80AA768Cu: goto label_80AA768C;
    case 0x80AA7694u: goto label_80AA7694;
    case 0x80AA7698u: goto label_80AA7698;
    case 0x80AA769Cu: goto label_80AA769C;
    case 0x80AA76A4u: goto label_80AA76A4;
    case 0x80AA76ACu: goto label_80AA76AC;
    case 0x80AA76BCu: goto label_80AA76BC;
    case 0x80AA76C4u: goto label_80AA76C4;
    case 0x80AA76D8u: goto label_80AA76D8;
    case 0x80AA76E0u: goto label_80AA76E0;
    case 0x80AA7708u: goto label_80AA7708;
    case 0x80AA7710u: goto label_80AA7710;
    case 0x80AA7714u: goto label_80AA7714;
    case 0x80AA7730u: goto label_80AA7730;
    case 0x80AA7760u: goto label_80AA7760;
    case 0x80AA777Cu: goto label_80AA777C;
    case 0x80AA7784u: goto label_80AA7784;
    case 0x80AA778Cu: goto label_80AA778C;
    case 0x80AA7790u: goto label_80AA7790;
    case 0x80AA7798u: goto label_80AA7798;
    case 0x80AA77A4u: goto label_80AA77A4;
    case 0x80AA77ACu: goto label_80AA77AC;
    case 0x80AA77D0u: goto label_80AA77D0;
    case 0x80AA77D8u: goto label_80AA77D8;
    case 0x80AA77DCu: goto label_80AA77DC;
    case 0x80AA77E4u: goto label_80AA77E4;
    case 0x80AA7808u: goto label_80AA7808;
    case 0x80AA7810u: goto label_80AA7810;
    case 0x80AA7814u: goto label_80AA7814;
    case 0x80AA781Cu: goto label_80AA781C;
    case 0x80AA7820u: goto label_80AA7820;
    case 0x80AA7824u: goto label_80AA7824;
    case 0x80AA782Cu: goto label_80AA782C;
    case 0x80AA7834u: goto label_80AA7834;
    case 0x80AA7854u: goto label_80AA7854;
    case 0x80AA7860u: goto label_80AA7860;
    case 0x80AA7880u: goto label_80AA7880;
    case 0x80AA78A8u: goto label_80AA78A8;
    case 0x80AA78C4u: goto label_80AA78C4;
    case 0x80AA78CCu: goto label_80AA78CC;
    case 0x80AA78D4u: goto label_80AA78D4;
    case 0x80AA78D8u: goto label_80AA78D8;
    case 0x80AA78E0u: goto label_80AA78E0;
    case 0x80AA78ECu: goto label_80AA78EC;
    case 0x80AA78F4u: goto label_80AA78F4;
    case 0x80AA791Cu: goto label_80AA791C;
    case 0x80AA7944u: goto label_80AA7944;
    case 0x80AA794Cu: goto label_80AA794C;
    case 0x80AA7950u: goto label_80AA7950;
    case 0x80AA7958u: goto label_80AA7958;
    case 0x80AA795Cu: goto label_80AA795C;
    case 0x80AA7960u: goto label_80AA7960;
    case 0x80AA7968u: goto label_80AA7968;
    case 0x80AA796Cu: goto label_80AA796C;
    case 0x80AA7974u: goto label_80AA7974;
    case 0x80AA7980u: goto label_80AA7980;
    case 0x80AA7988u: goto label_80AA7988;
    case 0x80AA79ACu: goto label_80AA79AC;
    case 0x80AA79B4u: goto label_80AA79B4;
    case 0x80AA79B8u: goto label_80AA79B8;
    case 0x80AA79C0u: goto label_80AA79C0;
    case 0x80AA79C4u: goto label_80AA79C4;
    case 0x80AA79C8u: goto label_80AA79C8;
    case 0x80AA79E0u: goto label_80AA79E0;
    case 0x80AA7A10u: goto label_80AA7A10;
    case 0x80AA7A18u: goto label_80AA7A18;
    case 0x80AA7A24u: goto label_80AA7A24;
    case 0x80AA7A30u: goto label_80AA7A30;
    case 0x80AA7A50u: goto label_80AA7A50;
    case 0x80AA7A58u: goto label_80AA7A58;
    case 0x80AA7A64u: goto label_80AA7A64;
    case 0x80AA7A78u: goto label_80AA7A78;
    case 0x80AA7A98u: goto label_80AA7A98;
    case 0x80AA7AA0u: goto label_80AA7AA0;
    case 0x80AA7AA4u: goto label_80AA7AA4;
    case 0x80AA7AC0u: goto label_80AA7AC0;
    case 0x80AA7ACCu: goto label_80AA7ACC;
    case 0x80AA7AE8u: goto label_80AA7AE8;
    case 0x80AA7AF4u: goto label_80AA7AF4;
    case 0x80AA7AFCu: goto label_80AA7AFC;
    case 0x80AA7B20u: goto label_80AA7B20;
    case 0x80AA7B28u: goto label_80AA7B28;
    case 0x80AA7B2Cu: goto label_80AA7B2C;
    case 0x80AA7B34u: goto label_80AA7B34;
    case 0x80AA7B58u: goto label_80AA7B58;
    case 0x80AA7B60u: goto label_80AA7B60;
    case 0x80AA7B64u: goto label_80AA7B64;
    case 0x80AA7B80u: goto label_80AA7B80;
    case 0x80AA7B84u: goto label_80AA7B84;
    case 0x80AA7BA0u: goto label_80AA7BA0;
    case 0x80AA7BA4u: goto label_80AA7BA4;
    case 0x80AA7BA8u: goto label_80AA7BA8;
    case 0x80AA7BBCu: goto label_80AA7BBC;
    case 0x80AA7BD8u: goto label_80AA7BD8;
    case 0x80AA7C08u: goto label_80AA7C08;
    case 0x80AA7C10u: goto label_80AA7C10;
    case 0x80AA7C38u: goto label_80AA7C38;
    case 0x80AA7C6Cu: goto label_80AA7C6C;
    case 0x80AA7C74u: goto label_80AA7C74;
    case 0x80AA7C90u: goto label_80AA7C90;
    case 0x80AA7CC0u: goto label_80AA7CC0;
    case 0x80AA7CC8u: goto label_80AA7CC8;
    case 0x80AA7CCCu: goto label_80AA7CCC;
    case 0x80AA7CE8u: goto label_80AA7CE8;
    case 0x80AA7CF0u: goto label_80AA7CF0;
    case 0x80AA7D18u: goto label_80AA7D18;
    case 0x80AA7D20u: goto label_80AA7D20;
    case 0x80AA7D24u: goto label_80AA7D24;
    case 0x80AA7D2Cu: goto label_80AA7D2C;
    case 0x80AA7D38u: goto label_80AA7D38;
    case 0x80AA7D40u: goto label_80AA7D40;
    case 0x80AA7D64u: goto label_80AA7D64;
    case 0x80AA7D6Cu: goto label_80AA7D6C;
    case 0x80AA7D74u: goto label_80AA7D74;
    case 0x80AA7D78u: goto label_80AA7D78;
    case 0x80AA7D80u: goto label_80AA7D80;
    case 0x80AA7DA8u: goto label_80AA7DA8;
    case 0x80AA7DC4u: goto label_80AA7DC4;
    case 0x80AA7DF4u: goto label_80AA7DF4;
    case 0x80AA7E10u: goto label_80AA7E10;
    case 0x80AA7E40u: goto label_80AA7E40;
    case 0x80AA7E48u: goto label_80AA7E48;
    case 0x80AA7E50u: goto label_80AA7E50;
    case 0x80AA7E54u: goto label_80AA7E54;
    case 0x80AA7E5Cu: goto label_80AA7E5C;
    case 0x80AA7E64u: goto label_80AA7E64;
    case 0x80AA7E68u: goto label_80AA7E68;
    case 0x80AA7E84u: goto label_80AA7E84;
    case 0x80AA7E90u: goto label_80AA7E90;
    case 0x80AA7EACu: goto label_80AA7EAC;
    case 0x80AA7EB8u: goto label_80AA7EB8;
    case 0x80AA7EC0u: goto label_80AA7EC0;
    case 0x80AA7EE8u: goto label_80AA7EE8;
    case 0x80AA7F10u: goto label_80AA7F10;
    case 0x80AA7F18u: goto label_80AA7F18;
    case 0x80AA7F1Cu: goto label_80AA7F1C;
    case 0x80AA7F38u: goto label_80AA7F38;
    case 0x80AA7F3Cu: goto label_80AA7F3C;
    case 0x80AA7F44u: goto label_80AA7F44;
    case 0x80AA7F4Cu: goto label_80AA7F4C;
    case 0x80AA7F70u: goto label_80AA7F70;
    case 0x80AA7F8Cu: goto label_80AA7F8C;
    case 0x80AA7F98u: goto label_80AA7F98;
    case 0x80AA7FA0u: goto label_80AA7FA0;
    case 0x80AA7FA4u: goto label_80AA7FA4;
    case 0x80AA7FC0u: goto label_80AA7FC0;
    case 0x80AA7FC4u: goto label_80AA7FC4;
    case 0x80AA7FCCu: goto label_80AA7FCC;
    case 0x80AA7FF0u: goto label_80AA7FF0;
    case 0x80AA800Cu: goto label_80AA800C;
    case 0x80AA8018u: goto label_80AA8018;
    case 0x80AA8020u: goto label_80AA8020;
    case 0x80AA8024u: goto label_80AA8024;
    case 0x80AA8040u: goto label_80AA8040;
    case 0x80AA8044u: goto label_80AA8044;
    case 0x80AA8060u: goto label_80AA8060;
    case 0x80AA8064u: goto label_80AA8064;
    case 0x80AA8068u: goto label_80AA8068;
    case 0x80AA8070u: goto label_80AA8070;
    case 0x80AA8078u: goto label_80AA8078;
    case 0x80AA807Cu: goto label_80AA807C;
    case 0x80AA8098u: goto label_80AA8098;
    case 0x80AA80A4u: goto label_80AA80A4;
    case 0x80AA80C0u: goto label_80AA80C0;
    case 0x80AA80CCu: goto label_80AA80CC;
    case 0x80AA80D4u: goto label_80AA80D4;
    case 0x80AA80FCu: goto label_80AA80FC;
    case 0x80AA8124u: goto label_80AA8124;
    case 0x80AA812Cu: goto label_80AA812C;
    case 0x80AA8130u: goto label_80AA8130;
    case 0x80AA814Cu: goto label_80AA814C;
    case 0x80AA8150u: goto label_80AA8150;
    case 0x80AA816Cu: goto label_80AA816C;
    case 0x80AA8170u: goto label_80AA8170;
    case 0x80AA8178u: goto label_80AA8178;
    case 0x80AA8184u: goto label_80AA8184;
    case 0x80AA81A8u: goto label_80AA81A8;
    case 0x80AA81B0u: goto label_80AA81B0;
    case 0x80AA81B4u: goto label_80AA81B4;
    case 0x80AA81BCu: goto label_80AA81BC;
    case 0x80AA81C8u: goto label_80AA81C8;
    case 0x80AA81D4u: goto label_80AA81D4;
    case 0x80AA81E0u: goto label_80AA81E0;
    case 0x80AA81F0u: goto label_80AA81F0;
    case 0x80AA8220u: goto label_80AA8220;
    case 0x80AA8238u: goto label_80AA8238;
    case 0x80AA8240u: goto label_80AA8240;
    case 0x80AA8244u: goto label_80AA8244;
    case 0x80AA8254u: goto label_80AA8254;
    case 0x80AA825Cu: goto label_80AA825C;
    case 0x80AA829Cu: goto label_80AA829C;
    case 0x80AA82A4u: goto label_80AA82A4;
    case 0x80AA82ACu: goto label_80AA82AC;
    case 0x80AA82C0u: goto label_80AA82C0;
    case 0x80AA82C8u: goto label_80AA82C8;
    case 0x80AA82D0u: goto label_80AA82D0;
    case 0x80AA82E4u: goto label_80AA82E4;
    case 0x80AA82ECu: goto label_80AA82EC;
    case 0x80AA82F4u: goto label_80AA82F4;
    case 0x80AA8308u: goto label_80AA8308;
    case 0x80AA8310u: goto label_80AA8310;
    case 0x80AA8318u: goto label_80AA8318;
    case 0x80AA832Cu: goto label_80AA832C;
    case 0x80AA8334u: goto label_80AA8334;
    case 0x80AA833Cu: goto label_80AA833C;
    case 0x80AA8350u: goto label_80AA8350;
    case 0x80AA8358u: goto label_80AA8358;
    case 0x80AA8360u: goto label_80AA8360;
    case 0x80AA8374u: goto label_80AA8374;
    case 0x80AA837Cu: goto label_80AA837C;
    case 0x80AA8384u: goto label_80AA8384;
    case 0x80AA8398u: goto label_80AA8398;
    case 0x80AA83A0u: goto label_80AA83A0;
    case 0x80AA83A8u: goto label_80AA83A8;
    case 0x80AA83BCu: goto label_80AA83BC;
    case 0x80AA83C4u: goto label_80AA83C4;
    case 0x80AA83CCu: goto label_80AA83CC;
    case 0x80AA83E0u: goto label_80AA83E0;
    case 0x80AA83E8u: goto label_80AA83E8;
    case 0x80AA83F0u: goto label_80AA83F0;
    case 0x80AA8404u: goto label_80AA8404;
    case 0x80AA840Cu: goto label_80AA840C;
    case 0x80AA8414u: goto label_80AA8414;
    case 0x80AA8428u: goto label_80AA8428;
    case 0x80AA8430u: goto label_80AA8430;
    case 0x80AA8438u: goto label_80AA8438;
    case 0x80AA844Cu: goto label_80AA844C;
    case 0x80AA8454u: goto label_80AA8454;
    case 0x80AA845Cu: goto label_80AA845C;
    case 0x80AA8470u: goto label_80AA8470;
    case 0x80AA8478u: goto label_80AA8478;
    case 0x80AA8480u: goto label_80AA8480;
    case 0x80AA8494u: goto label_80AA8494;
    case 0x80AA849Cu: goto label_80AA849C;
    case 0x80AA84A4u: goto label_80AA84A4;
    case 0x80AA84B8u: goto label_80AA84B8;
    case 0x80AA84C0u: goto label_80AA84C0;
    case 0x80AA84C8u: goto label_80AA84C8;
    case 0x80AA84DCu: goto label_80AA84DC;
    case 0x80AA84E4u: goto label_80AA84E4;
    case 0x80AA84ECu: goto label_80AA84EC;
    case 0x80AA8500u: goto label_80AA8500;
    case 0x80AA8508u: goto label_80AA8508;
    case 0x80AA8510u: goto label_80AA8510;
    case 0x80AA8524u: goto label_80AA8524;
    case 0x80AA852Cu: goto label_80AA852C;
    case 0x80AA8534u: goto label_80AA8534;
    case 0x80AA8548u: goto label_80AA8548;
    case 0x80AA8550u: goto label_80AA8550;
    case 0x80AA8558u: goto label_80AA8558;
    case 0x80AA856Cu: goto label_80AA856C;
    case 0x80AA8574u: goto label_80AA8574;
    case 0x80AA857Cu: goto label_80AA857C;
    case 0x80AA8590u: goto label_80AA8590;
    case 0x80AA8598u: goto label_80AA8598;
    case 0x80AA85A0u: goto label_80AA85A0;
    case 0x80AA85B4u: goto label_80AA85B4;
    case 0x80AA85BCu: goto label_80AA85BC;
    case 0x80AA85C4u: goto label_80AA85C4;
    case 0x80AA85D8u: goto label_80AA85D8;
    case 0x80AA85E0u: goto label_80AA85E0;
    case 0x80AA85E8u: goto label_80AA85E8;
    case 0x80AA85FCu: goto label_80AA85FC;
    case 0x80AA8604u: goto label_80AA8604;
    case 0x80AA860Cu: goto label_80AA860C;
    case 0x80AA8620u: goto label_80AA8620;
    case 0x80AA8628u: goto label_80AA8628;
    case 0x80AA862Cu: goto label_80AA862C;
    case 0x80AA8634u: goto label_80AA8634;
    case 0x80AA8640u: goto label_80AA8640;
    case 0x80AA8648u: goto label_80AA8648;
    case 0x80AA8670u: goto label_80AA8670;
    case 0x80AA8698u: goto label_80AA8698;
    case 0x80AA86A0u: goto label_80AA86A0;
    case 0x80AA86E0u: goto label_80AA86E0;
    case 0x80AA86E8u: goto label_80AA86E8;
    case 0x80AA86ECu: goto label_80AA86EC;
    case 0x80AA86F4u: goto label_80AA86F4;
    case 0x80AA86F8u: goto label_80AA86F8;
    case 0x80AA8720u: goto label_80AA8720;
    case 0x80AA8734u: goto label_80AA8734;
    case 0x80AA8740u: goto label_80AA8740;
    case 0x80AA8768u: goto label_80AA8768;
    case 0x80AA8770u: goto label_80AA8770;
    case 0x80AA8784u: goto label_80AA8784;
    case 0x80AA8790u: goto label_80AA8790;
    case 0x80AA8798u: goto label_80AA8798;
    case 0x80AA87A0u: goto label_80AA87A0;
    case 0x80AA87B8u: goto label_80AA87B8;
    case 0x80AA87CCu: goto label_80AA87CC;
    case 0x80AA87D0u: goto label_80AA87D0;
    case 0x80AA87D4u: goto label_80AA87D4;
    case 0x80AA87ECu: goto label_80AA87EC;
    case 0x80AA8810u: goto label_80AA8810;
    case 0x80AA889Cu: goto label_80AA889C;
    case 0x80AA88A8u: goto label_80AA88A8;
    case 0x80AA8938u: goto label_80AA8938;
    case 0x80AA8940u: goto label_80AA8940;
    case 0x80AA89A8u: goto label_80AA89A8;
    case 0x80AA89F0u: goto label_80AA89F0;
    case 0x80AA8A5Cu: goto label_80AA8A5C;
    case 0x80AA8B08u: goto label_80AA8B08;
    case 0x80AA8B30u: goto label_80AA8B30;
    case 0x80AA8B90u: goto label_80AA8B90;
    case 0x80AA8BD0u: goto label_80AA8BD0;
    case 0x80AA8C10u: goto label_80AA8C10;
    case 0x80AA8C6Cu: goto label_80AA8C6C;
    case 0x80AA8C90u: goto label_80AA8C90;
    case 0x80AA8D2Cu: goto label_80AA8D2C;
    case 0x80AA8D7Cu: goto label_80AA8D7C;
    case 0x80AA8DCCu: goto label_80AA8DCC;
    case 0x80AA8E18u: goto label_80AA8E18;
    case 0x80AA8E9Cu: goto label_80AA8E9C;
    case 0x80AA8EC0u: goto label_80AA8EC0;
    case 0x80AA8F3Cu: goto label_80AA8F3C;
    case 0x80AA8FA4u: goto label_80AA8FA4;
    case 0x80AA900Cu: goto label_80AA900C;
    case 0x80AA905Cu: goto label_80AA905C;
    case 0x80AA90ACu: goto label_80AA90AC;
    case 0x80AA90F0u: goto label_80AA90F0;
    case 0x80AA9118u: goto label_80AA9118;
    case 0x80AA9124u: goto label_80AA9124;
    case 0x80AA9130u: goto label_80AA9130;
    case 0x80AA913Cu: goto label_80AA913C;
    default: return;
    }
}

