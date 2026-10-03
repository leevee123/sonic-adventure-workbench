// DolRecomp output
#include "../generated.h"

void func_80CC7120(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CC7120[1440] = {
        &&label_80CC7120,
        &&label_80CC7124,
        &&label_80CC7128,
        &&label_80CC712C,
        &&label_80CC7130,
        &&label_80CC7134,
        &&label_80CC7138,
        &&label_80CC713C,
        &&label_80CC7140,
        &&label_80CC7144,
        &&label_80CC7148,
        &&label_80CC714C,
        &&label_80CC7150,
        &&label_80CC7154,
        &&label_80CC7158,
        &&label_80CC715C,
        &&label_80CC7160,
        &&label_80CC7164,
        &&label_80CC7168,
        &&label_80CC716C,
        &&label_80CC7170,
        &&label_80CC7174,
        &&label_80CC7178,
        &&label_80CC717C,
        &&label_80CC7180,
        &&label_80CC7184,
        &&label_80CC7188,
        &&label_80CC718C,
        &&label_80CC7190,
        &&label_80CC7194,
        &&label_80CC7198,
        &&label_80CC719C,
        &&label_80CC71A0,
        &&label_80CC71A4,
        &&label_80CC71A8,
        &&label_80CC71AC,
        &&label_80CC71B0,
        &&label_80CC71B4,
        &&label_80CC71B8,
        &&label_80CC71BC,
        &&label_80CC71C0,
        &&label_80CC71C4,
        &&label_80CC71C8,
        &&label_80CC71CC,
        &&label_80CC71D0,
        &&label_80CC71D4,
        &&label_80CC71D8,
        &&label_80CC71DC,
        &&label_80CC71E0,
        &&label_80CC71E4,
        &&label_80CC71E8,
        &&label_80CC71EC,
        &&label_80CC71F0,
        &&label_80CC71F4,
        &&label_80CC71F8,
        &&label_80CC71FC,
        &&label_80CC7200,
        &&label_80CC7204,
        &&label_80CC7208,
        &&label_80CC720C,
        &&label_80CC7210,
        &&label_80CC7214,
        &&label_80CC7218,
        &&label_80CC721C,
        &&label_80CC7220,
        &&label_80CC7224,
        &&label_80CC7228,
        &&label_80CC722C,
        &&label_80CC7230,
        &&label_80CC7234,
        &&label_80CC7238,
        &&label_80CC723C,
        &&label_80CC7240,
        &&label_80CC7244,
        &&label_80CC7248,
        &&label_80CC724C,
        &&label_80CC7250,
        &&label_80CC7254,
        &&label_80CC7258,
        &&label_80CC725C,
        &&label_80CC7260,
        &&label_80CC7264,
        &&label_80CC7268,
        &&label_80CC726C,
        &&label_80CC7270,
        &&label_80CC7274,
        &&label_80CC7278,
        &&label_80CC727C,
        &&label_80CC7280,
        &&label_80CC7284,
        &&label_80CC7288,
        &&label_80CC728C,
        &&label_80CC7290,
        &&label_80CC7294,
        &&label_80CC7298,
        &&label_80CC729C,
        &&label_80CC72A0,
        &&label_80CC72A4,
        &&label_80CC72A8,
        &&label_80CC72AC,
        &&label_80CC72B0,
        &&label_80CC72B4,
        &&label_80CC72B8,
        &&label_80CC72BC,
        &&label_80CC72C0,
        &&label_80CC72C4,
        &&label_80CC72C8,
        &&label_80CC72CC,
        &&label_80CC72D0,
        &&label_80CC72D4,
        &&label_80CC72D8,
        &&label_80CC72DC,
        &&label_80CC72E0,
        &&label_80CC72E4,
        &&label_80CC72E8,
        &&label_80CC72EC,
        &&label_80CC72F0,
        &&label_80CC72F4,
        &&label_80CC72F8,
        &&label_80CC72FC,
        &&label_80CC7300,
        &&label_80CC7304,
        &&label_80CC7308,
        &&label_80CC730C,
        &&label_80CC7310,
        &&label_80CC7314,
        &&label_80CC7318,
        &&label_80CC731C,
        &&label_80CC7320,
        &&label_80CC7324,
        &&label_80CC7328,
        &&label_80CC732C,
        &&label_80CC7330,
        &&label_80CC7334,
        &&label_80CC7338,
        &&label_80CC733C,
        &&label_80CC7340,
        &&label_80CC7344,
        &&label_80CC7348,
        &&label_80CC734C,
        &&label_80CC7350,
        &&label_80CC7354,
        &&label_80CC7358,
        &&label_80CC735C,
        &&label_80CC7360,
        &&label_80CC7364,
        &&label_80CC7368,
        &&label_80CC736C,
        &&label_80CC7370,
        &&label_80CC7374,
        &&label_80CC7378,
        &&label_80CC737C,
        &&label_80CC7380,
        &&label_80CC7384,
        &&label_80CC7388,
        &&label_80CC738C,
        &&label_80CC7390,
        &&label_80CC7394,
        &&label_80CC7398,
        &&label_80CC739C,
        &&label_80CC73A0,
        &&label_80CC73A4,
        &&label_80CC73A8,
        &&label_80CC73AC,
        &&label_80CC73B0,
        &&label_80CC73B4,
        &&label_80CC73B8,
        &&label_80CC73BC,
        &&label_80CC73C0,
        &&label_80CC73C4,
        &&label_80CC73C8,
        &&label_80CC73CC,
        &&label_80CC73D0,
        &&label_80CC73D4,
        &&label_80CC73D8,
        &&label_80CC73DC,
        &&label_80CC73E0,
        &&label_80CC73E4,
        &&label_80CC73E8,
        &&label_80CC73EC,
        &&label_80CC73F0,
        &&label_80CC73F4,
        &&label_80CC73F8,
        &&label_80CC73FC,
        &&label_80CC7400,
        &&label_80CC7404,
        &&label_80CC7408,
        &&label_80CC740C,
        &&label_80CC7410,
        &&label_80CC7414,
        &&label_80CC7418,
        &&label_80CC741C,
        &&label_80CC7420,
        &&label_80CC7424,
        &&label_80CC7428,
        &&label_80CC742C,
        &&label_80CC7430,
        &&label_80CC7434,
        &&label_80CC7438,
        &&label_80CC743C,
        &&label_80CC7440,
        &&label_80CC7444,
        &&label_80CC7448,
        &&label_80CC744C,
        &&label_80CC7450,
        &&label_80CC7454,
        &&label_80CC7458,
        &&label_80CC745C,
        &&label_80CC7460,
        &&label_80CC7464,
        &&label_80CC7468,
        &&label_80CC746C,
        &&label_80CC7470,
        &&label_80CC7474,
        &&label_80CC7478,
        &&label_80CC747C,
        &&label_80CC7480,
        &&label_80CC7484,
        &&label_80CC7488,
        &&label_80CC748C,
        &&label_80CC7490,
        &&label_80CC7494,
        &&label_80CC7498,
        &&label_80CC749C,
        &&label_80CC74A0,
        &&label_80CC74A4,
        &&label_80CC74A8,
        &&label_80CC74AC,
        &&label_80CC74B0,
        &&label_80CC74B4,
        &&label_80CC74B8,
        &&label_80CC74BC,
        &&label_80CC74C0,
        &&label_80CC74C4,
        &&label_80CC74C8,
        &&label_80CC74CC,
        &&label_80CC74D0,
        &&label_80CC74D4,
        &&label_80CC74D8,
        &&label_80CC74DC,
        &&label_80CC74E0,
        &&label_80CC74E4,
        &&label_80CC74E8,
        &&label_80CC74EC,
        &&label_80CC74F0,
        &&label_80CC74F4,
        &&label_80CC74F8,
        &&label_80CC74FC,
        &&label_80CC7500,
        &&label_80CC7504,
        &&label_80CC7508,
        &&label_80CC750C,
        &&label_80CC7510,
        &&label_80CC7514,
        &&label_80CC7518,
        &&label_80CC751C,
        &&label_80CC7520,
        &&label_80CC7524,
        &&label_80CC7528,
        &&label_80CC752C,
        &&label_80CC7530,
        &&label_80CC7534,
        &&label_80CC7538,
        &&label_80CC753C,
        &&label_80CC7540,
        &&label_80CC7544,
        &&label_80CC7548,
        &&label_80CC754C,
        &&label_80CC7550,
        &&label_80CC7554,
        &&label_80CC7558,
        &&label_80CC755C,
        &&label_80CC7560,
        &&label_80CC7564,
        &&label_80CC7568,
        &&label_80CC756C,
        &&label_80CC7570,
        &&label_80CC7574,
        &&label_80CC7578,
        &&label_80CC757C,
        &&label_80CC7580,
        &&label_80CC7584,
        &&label_80CC7588,
        &&label_80CC758C,
        &&label_80CC7590,
        &&label_80CC7594,
        &&label_80CC7598,
        &&label_80CC759C,
        &&label_80CC75A0,
        &&label_80CC75A4,
        &&label_80CC75A8,
        &&label_80CC75AC,
        &&label_80CC75B0,
        &&label_80CC75B4,
        &&label_80CC75B8,
        &&label_80CC75BC,
        &&label_80CC75C0,
        &&label_80CC75C4,
        &&label_80CC75C8,
        &&label_80CC75CC,
        &&label_80CC75D0,
        &&label_80CC75D4,
        &&label_80CC75D8,
        &&label_80CC75DC,
        &&label_80CC75E0,
        &&label_80CC75E4,
        &&label_80CC75E8,
        &&label_80CC75EC,
        &&label_80CC75F0,
        &&label_80CC75F4,
        &&label_80CC75F8,
        &&label_80CC75FC,
        &&label_80CC7600,
        &&label_80CC7604,
        &&label_80CC7608,
        &&label_80CC760C,
        &&label_80CC7610,
        &&label_80CC7614,
        &&label_80CC7618,
        &&label_80CC761C,
        &&label_80CC7620,
        &&label_80CC7624,
        &&label_80CC7628,
        &&label_80CC762C,
        &&label_80CC7630,
        &&label_80CC7634,
        &&label_80CC7638,
        &&label_80CC763C,
        &&label_80CC7640,
        &&label_80CC7644,
        &&label_80CC7648,
        &&label_80CC764C,
        &&label_80CC7650,
        &&label_80CC7654,
        &&label_80CC7658,
        &&label_80CC765C,
        &&label_80CC7660,
        &&label_80CC7664,
        &&label_80CC7668,
        &&label_80CC766C,
        &&label_80CC7670,
        &&label_80CC7674,
        &&label_80CC7678,
        &&label_80CC767C,
        &&label_80CC7680,
        &&label_80CC7684,
        &&label_80CC7688,
        &&label_80CC768C,
        &&label_80CC7690,
        &&label_80CC7694,
        &&label_80CC7698,
        &&label_80CC769C,
        &&label_80CC76A0,
        &&label_80CC76A4,
        &&label_80CC76A8,
        &&label_80CC76AC,
        &&label_80CC76B0,
        &&label_80CC76B4,
        &&label_80CC76B8,
        &&label_80CC76BC,
        &&label_80CC76C0,
        &&label_80CC76C4,
        &&label_80CC76C8,
        &&label_80CC76CC,
        &&label_80CC76D0,
        &&label_80CC76D4,
        &&label_80CC76D8,
        &&label_80CC76DC,
        &&label_80CC76E0,
        &&label_80CC76E4,
        &&label_80CC76E8,
        &&label_80CC76EC,
        &&label_80CC76F0,
        &&label_80CC76F4,
        &&label_80CC76F8,
        &&label_80CC76FC,
        &&label_80CC7700,
        &&label_80CC7704,
        &&label_80CC7708,
        &&label_80CC770C,
        &&label_80CC7710,
        &&label_80CC7714,
        &&label_80CC7718,
        &&label_80CC771C,
        &&label_80CC7720,
        &&label_80CC7724,
        &&label_80CC7728,
        &&label_80CC772C,
        &&label_80CC7730,
        &&label_80CC7734,
        &&label_80CC7738,
        &&label_80CC773C,
        &&label_80CC7740,
        &&label_80CC7744,
        &&label_80CC7748,
        &&label_80CC774C,
        &&label_80CC7750,
        &&label_80CC7754,
        &&label_80CC7758,
        &&label_80CC775C,
        &&label_80CC7760,
        &&label_80CC7764,
        &&label_80CC7768,
        &&label_80CC776C,
        &&label_80CC7770,
        &&label_80CC7774,
        &&label_80CC7778,
        &&label_80CC777C,
        &&label_80CC7780,
        &&label_80CC7784,
        &&label_80CC7788,
        &&label_80CC778C,
        &&label_80CC7790,
        &&label_80CC7794,
        &&label_80CC7798,
        &&label_80CC779C,
        &&label_80CC77A0,
        &&label_80CC77A4,
        &&label_80CC77A8,
        &&label_80CC77AC,
        &&label_80CC77B0,
        &&label_80CC77B4,
        &&label_80CC77B8,
        &&label_80CC77BC,
        &&label_80CC77C0,
        &&label_80CC77C4,
        &&label_80CC77C8,
        &&label_80CC77CC,
        &&label_80CC77D0,
        &&label_80CC77D4,
        &&label_80CC77D8,
        &&label_80CC77DC,
        &&label_80CC77E0,
        &&label_80CC77E4,
        &&label_80CC77E8,
        &&label_80CC77EC,
        &&label_80CC77F0,
        &&label_80CC77F4,
        &&label_80CC77F8,
        &&label_80CC77FC,
        &&label_80CC7800,
        &&label_80CC7804,
        &&label_80CC7808,
        &&label_80CC780C,
        &&label_80CC7810,
        &&label_80CC7814,
        &&label_80CC7818,
        &&label_80CC781C,
        &&label_80CC7820,
        &&label_80CC7824,
        &&label_80CC7828,
        &&label_80CC782C,
        &&label_80CC7830,
        &&label_80CC7834,
        &&label_80CC7838,
        &&label_80CC783C,
        &&label_80CC7840,
        &&label_80CC7844,
        &&label_80CC7848,
        &&label_80CC784C,
        &&label_80CC7850,
        &&label_80CC7854,
        &&label_80CC7858,
        &&label_80CC785C,
        &&label_80CC7860,
        &&label_80CC7864,
        &&label_80CC7868,
        &&label_80CC786C,
        &&label_80CC7870,
        &&label_80CC7874,
        &&label_80CC7878,
        &&label_80CC787C,
        &&label_80CC7880,
        &&label_80CC7884,
        &&label_80CC7888,
        &&label_80CC788C,
        &&label_80CC7890,
        &&label_80CC7894,
        &&label_80CC7898,
        &&label_80CC789C,
        &&label_80CC78A0,
        &&label_80CC78A4,
        &&label_80CC78A8,
        &&label_80CC78AC,
        &&label_80CC78B0,
        &&label_80CC78B4,
        &&label_80CC78B8,
        &&label_80CC78BC,
        &&label_80CC78C0,
        &&label_80CC78C4,
        &&label_80CC78C8,
        &&label_80CC78CC,
        &&label_80CC78D0,
        &&label_80CC78D4,
        &&label_80CC78D8,
        &&label_80CC78DC,
        &&label_80CC78E0,
        &&label_80CC78E4,
        &&label_80CC78E8,
        &&label_80CC78EC,
        &&label_80CC78F0,
        &&label_80CC78F4,
        &&label_80CC78F8,
        &&label_80CC78FC,
        &&label_80CC7900,
        &&label_80CC7904,
        &&label_80CC7908,
        &&label_80CC790C,
        &&label_80CC7910,
        &&label_80CC7914,
        &&label_80CC7918,
        &&label_80CC791C,
        &&label_80CC7920,
        &&label_80CC7924,
        &&label_80CC7928,
        &&label_80CC792C,
        &&label_80CC7930,
        &&label_80CC7934,
        &&label_80CC7938,
        &&label_80CC793C,
        &&label_80CC7940,
        &&label_80CC7944,
        &&label_80CC7948,
        &&label_80CC794C,
        &&label_80CC7950,
        &&label_80CC7954,
        &&label_80CC7958,
        &&label_80CC795C,
        &&label_80CC7960,
        &&label_80CC7964,
        &&label_80CC7968,
        &&label_80CC796C,
        &&label_80CC7970,
        &&label_80CC7974,
        &&label_80CC7978,
        &&label_80CC797C,
        &&label_80CC7980,
        &&label_80CC7984,
        &&label_80CC7988,
        &&label_80CC798C,
        &&label_80CC7990,
        &&label_80CC7994,
        &&label_80CC7998,
        &&label_80CC799C,
        &&label_80CC79A0,
        &&label_80CC79A4,
        &&label_80CC79A8,
        &&label_80CC79AC,
        &&label_80CC79B0,
        &&label_80CC79B4,
        &&label_80CC79B8,
        &&label_80CC79BC,
        &&label_80CC79C0,
        &&label_80CC79C4,
        &&label_80CC79C8,
        &&label_80CC79CC,
        &&label_80CC79D0,
        &&label_80CC79D4,
        &&label_80CC79D8,
        &&label_80CC79DC,
        &&label_80CC79E0,
        &&label_80CC79E4,
        &&label_80CC79E8,
        &&label_80CC79EC,
        &&label_80CC79F0,
        &&label_80CC79F4,
        &&label_80CC79F8,
        &&label_80CC79FC,
        &&label_80CC7A00,
        &&label_80CC7A04,
        &&label_80CC7A08,
        &&label_80CC7A0C,
        &&label_80CC7A10,
        &&label_80CC7A14,
        &&label_80CC7A18,
        &&label_80CC7A1C,
        &&label_80CC7A20,
        &&label_80CC7A24,
        &&label_80CC7A28,
        &&label_80CC7A2C,
        &&label_80CC7A30,
        &&label_80CC7A34,
        &&label_80CC7A38,
        &&label_80CC7A3C,
        &&label_80CC7A40,
        &&label_80CC7A44,
        &&label_80CC7A48,
        &&label_80CC7A4C,
        &&label_80CC7A50,
        &&label_80CC7A54,
        &&label_80CC7A58,
        &&label_80CC7A5C,
        &&label_80CC7A60,
        &&label_80CC7A64,
        &&label_80CC7A68,
        &&label_80CC7A6C,
        &&label_80CC7A70,
        &&label_80CC7A74,
        &&label_80CC7A78,
        &&label_80CC7A7C,
        &&label_80CC7A80,
        &&label_80CC7A84,
        &&label_80CC7A88,
        &&label_80CC7A8C,
        &&label_80CC7A90,
        &&label_80CC7A94,
        &&label_80CC7A98,
        &&label_80CC7A9C,
        &&label_80CC7AA0,
        &&label_80CC7AA4,
        &&label_80CC7AA8,
        &&label_80CC7AAC,
        &&label_80CC7AB0,
        &&label_80CC7AB4,
        &&label_80CC7AB8,
        &&label_80CC7ABC,
        &&label_80CC7AC0,
        &&label_80CC7AC4,
        &&label_80CC7AC8,
        &&label_80CC7ACC,
        &&label_80CC7AD0,
        &&label_80CC7AD4,
        &&label_80CC7AD8,
        &&label_80CC7ADC,
        &&label_80CC7AE0,
        &&label_80CC7AE4,
        &&label_80CC7AE8,
        &&label_80CC7AEC,
        &&label_80CC7AF0,
        &&label_80CC7AF4,
        &&label_80CC7AF8,
        &&label_80CC7AFC,
        &&label_80CC7B00,
        &&label_80CC7B04,
        &&label_80CC7B08,
        &&label_80CC7B0C,
        &&label_80CC7B10,
        &&label_80CC7B14,
        &&label_80CC7B18,
        &&label_80CC7B1C,
        &&label_80CC7B20,
        &&label_80CC7B24,
        &&label_80CC7B28,
        &&label_80CC7B2C,
        &&label_80CC7B30,
        &&label_80CC7B34,
        &&label_80CC7B38,
        &&label_80CC7B3C,
        &&label_80CC7B40,
        &&label_80CC7B44,
        &&label_80CC7B48,
        &&label_80CC7B4C,
        &&label_80CC7B50,
        &&label_80CC7B54,
        &&label_80CC7B58,
        &&label_80CC7B5C,
        &&label_80CC7B60,
        &&label_80CC7B64,
        &&label_80CC7B68,
        &&label_80CC7B6C,
        &&label_80CC7B70,
        &&label_80CC7B74,
        &&label_80CC7B78,
        &&label_80CC7B7C,
        &&label_80CC7B80,
        &&label_80CC7B84,
        &&label_80CC7B88,
        &&label_80CC7B8C,
        &&label_80CC7B90,
        &&label_80CC7B94,
        &&label_80CC7B98,
        &&label_80CC7B9C,
        &&label_80CC7BA0,
        &&label_80CC7BA4,
        &&label_80CC7BA8,
        &&label_80CC7BAC,
        &&label_80CC7BB0,
        &&label_80CC7BB4,
        &&label_80CC7BB8,
        &&label_80CC7BBC,
        &&label_80CC7BC0,
        &&label_80CC7BC4,
        &&label_80CC7BC8,
        &&label_80CC7BCC,
        &&label_80CC7BD0,
        &&label_80CC7BD4,
        &&label_80CC7BD8,
        &&label_80CC7BDC,
        &&label_80CC7BE0,
        &&label_80CC7BE4,
        &&label_80CC7BE8,
        &&label_80CC7BEC,
        &&label_80CC7BF0,
        &&label_80CC7BF4,
        &&label_80CC7BF8,
        &&label_80CC7BFC,
        &&label_80CC7C00,
        &&label_80CC7C04,
        &&label_80CC7C08,
        &&label_80CC7C0C,
        &&label_80CC7C10,
        &&label_80CC7C14,
        &&label_80CC7C18,
        &&label_80CC7C1C,
        &&label_80CC7C20,
        &&label_80CC7C24,
        &&label_80CC7C28,
        &&label_80CC7C2C,
        &&label_80CC7C30,
        &&label_80CC7C34,
        &&label_80CC7C38,
        &&label_80CC7C3C,
        &&label_80CC7C40,
        &&label_80CC7C44,
        &&label_80CC7C48,
        &&label_80CC7C4C,
        &&label_80CC7C50,
        &&label_80CC7C54,
        &&label_80CC7C58,
        &&label_80CC7C5C,
        &&label_80CC7C60,
        &&label_80CC7C64,
        &&label_80CC7C68,
        &&label_80CC7C6C,
        &&label_80CC7C70,
        &&label_80CC7C74,
        &&label_80CC7C78,
        &&label_80CC7C7C,
        &&label_80CC7C80,
        &&label_80CC7C84,
        &&label_80CC7C88,
        &&label_80CC7C8C,
        &&label_80CC7C90,
        &&label_80CC7C94,
        &&label_80CC7C98,
        &&label_80CC7C9C,
        &&label_80CC7CA0,
        &&label_80CC7CA4,
        &&label_80CC7CA8,
        &&label_80CC7CAC,
        &&label_80CC7CB0,
        &&label_80CC7CB4,
        &&label_80CC7CB8,
        &&label_80CC7CBC,
        &&label_80CC7CC0,
        &&label_80CC7CC4,
        &&label_80CC7CC8,
        &&label_80CC7CCC,
        &&label_80CC7CD0,
        &&label_80CC7CD4,
        &&label_80CC7CD8,
        &&label_80CC7CDC,
        &&label_80CC7CE0,
        &&label_80CC7CE4,
        &&label_80CC7CE8,
        &&label_80CC7CEC,
        &&label_80CC7CF0,
        &&label_80CC7CF4,
        &&label_80CC7CF8,
        &&label_80CC7CFC,
        &&label_80CC7D00,
        &&label_80CC7D04,
        &&label_80CC7D08,
        &&label_80CC7D0C,
        &&label_80CC7D10,
        &&label_80CC7D14,
        &&label_80CC7D18,
        &&label_80CC7D1C,
        &&label_80CC7D20,
        &&label_80CC7D24,
        &&label_80CC7D28,
        &&label_80CC7D2C,
        &&label_80CC7D30,
        &&label_80CC7D34,
        &&label_80CC7D38,
        &&label_80CC7D3C,
        &&label_80CC7D40,
        &&label_80CC7D44,
        &&label_80CC7D48,
        &&label_80CC7D4C,
        &&label_80CC7D50,
        &&label_80CC7D54,
        &&label_80CC7D58,
        &&label_80CC7D5C,
        &&label_80CC7D60,
        &&label_80CC7D64,
        &&label_80CC7D68,
        &&label_80CC7D6C,
        &&label_80CC7D70,
        &&label_80CC7D74,
        &&label_80CC7D78,
        &&label_80CC7D7C,
        &&label_80CC7D80,
        &&label_80CC7D84,
        &&label_80CC7D88,
        &&label_80CC7D8C,
        &&label_80CC7D90,
        &&label_80CC7D94,
        &&label_80CC7D98,
        &&label_80CC7D9C,
        &&label_80CC7DA0,
        &&label_80CC7DA4,
        &&label_80CC7DA8,
        &&label_80CC7DAC,
        &&label_80CC7DB0,
        &&label_80CC7DB4,
        &&label_80CC7DB8,
        &&label_80CC7DBC,
        &&label_80CC7DC0,
        &&label_80CC7DC4,
        &&label_80CC7DC8,
        &&label_80CC7DCC,
        &&label_80CC7DD0,
        &&label_80CC7DD4,
        &&label_80CC7DD8,
        &&label_80CC7DDC,
        &&label_80CC7DE0,
        &&label_80CC7DE4,
        &&label_80CC7DE8,
        &&label_80CC7DEC,
        &&label_80CC7DF0,
        &&label_80CC7DF4,
        &&label_80CC7DF8,
        &&label_80CC7DFC,
        &&label_80CC7E00,
        &&label_80CC7E04,
        &&label_80CC7E08,
        &&label_80CC7E0C,
        &&label_80CC7E10,
        &&label_80CC7E14,
        &&label_80CC7E18,
        &&label_80CC7E1C,
        &&label_80CC7E20,
        &&label_80CC7E24,
        &&label_80CC7E28,
        &&label_80CC7E2C,
        &&label_80CC7E30,
        &&label_80CC7E34,
        &&label_80CC7E38,
        &&label_80CC7E3C,
        &&label_80CC7E40,
        &&label_80CC7E44,
        &&label_80CC7E48,
        &&label_80CC7E4C,
        &&label_80CC7E50,
        &&label_80CC7E54,
        &&label_80CC7E58,
        &&label_80CC7E5C,
        &&label_80CC7E60,
        &&label_80CC7E64,
        &&label_80CC7E68,
        &&label_80CC7E6C,
        &&label_80CC7E70,
        &&label_80CC7E74,
        &&label_80CC7E78,
        &&label_80CC7E7C,
        &&label_80CC7E80,
        &&label_80CC7E84,
        &&label_80CC7E88,
        &&label_80CC7E8C,
        &&label_80CC7E90,
        &&label_80CC7E94,
        &&label_80CC7E98,
        &&label_80CC7E9C,
        &&label_80CC7EA0,
        &&label_80CC7EA4,
        &&label_80CC7EA8,
        &&label_80CC7EAC,
        &&label_80CC7EB0,
        &&label_80CC7EB4,
        &&label_80CC7EB8,
        &&label_80CC7EBC,
        &&label_80CC7EC0,
        &&label_80CC7EC4,
        &&label_80CC7EC8,
        &&label_80CC7ECC,
        &&label_80CC7ED0,
        &&label_80CC7ED4,
        &&label_80CC7ED8,
        &&label_80CC7EDC,
        &&label_80CC7EE0,
        &&label_80CC7EE4,
        &&label_80CC7EE8,
        &&label_80CC7EEC,
        &&label_80CC7EF0,
        &&label_80CC7EF4,
        &&label_80CC7EF8,
        &&label_80CC7EFC,
        &&label_80CC7F00,
        &&label_80CC7F04,
        &&label_80CC7F08,
        &&label_80CC7F0C,
        &&label_80CC7F10,
        &&label_80CC7F14,
        &&label_80CC7F18,
        &&label_80CC7F1C,
        &&label_80CC7F20,
        &&label_80CC7F24,
        &&label_80CC7F28,
        &&label_80CC7F2C,
        &&label_80CC7F30,
        &&label_80CC7F34,
        &&label_80CC7F38,
        &&label_80CC7F3C,
        &&label_80CC7F40,
        &&label_80CC7F44,
        &&label_80CC7F48,
        &&label_80CC7F4C,
        &&label_80CC7F50,
        &&label_80CC7F54,
        &&label_80CC7F58,
        &&label_80CC7F5C,
        &&label_80CC7F60,
        &&label_80CC7F64,
        &&label_80CC7F68,
        &&label_80CC7F6C,
        &&label_80CC7F70,
        &&label_80CC7F74,
        &&label_80CC7F78,
        &&label_80CC7F7C,
        &&label_80CC7F80,
        &&label_80CC7F84,
        &&label_80CC7F88,
        &&label_80CC7F8C,
        &&label_80CC7F90,
        &&label_80CC7F94,
        &&label_80CC7F98,
        &&label_80CC7F9C,
        &&label_80CC7FA0,
        &&label_80CC7FA4,
        &&label_80CC7FA8,
        &&label_80CC7FAC,
        &&label_80CC7FB0,
        &&label_80CC7FB4,
        &&label_80CC7FB8,
        &&label_80CC7FBC,
        &&label_80CC7FC0,
        &&label_80CC7FC4,
        &&label_80CC7FC8,
        &&label_80CC7FCC,
        &&label_80CC7FD0,
        &&label_80CC7FD4,
        &&label_80CC7FD8,
        &&label_80CC7FDC,
        &&label_80CC7FE0,
        &&label_80CC7FE4,
        &&label_80CC7FE8,
        &&label_80CC7FEC,
        &&label_80CC7FF0,
        &&label_80CC7FF4,
        &&label_80CC7FF8,
        &&label_80CC7FFC,
        &&label_80CC8000,
        &&label_80CC8004,
        &&label_80CC8008,
        &&label_80CC800C,
        &&label_80CC8010,
        &&label_80CC8014,
        &&label_80CC8018,
        &&label_80CC801C,
        &&label_80CC8020,
        &&label_80CC8024,
        &&label_80CC8028,
        &&label_80CC802C,
        &&label_80CC8030,
        &&label_80CC8034,
        &&label_80CC8038,
        &&label_80CC803C,
        &&label_80CC8040,
        &&label_80CC8044,
        &&label_80CC8048,
        &&label_80CC804C,
        &&label_80CC8050,
        &&label_80CC8054,
        &&label_80CC8058,
        &&label_80CC805C,
        &&label_80CC8060,
        &&label_80CC8064,
        &&label_80CC8068,
        &&label_80CC806C,
        &&label_80CC8070,
        &&label_80CC8074,
        &&label_80CC8078,
        &&label_80CC807C,
        &&label_80CC8080,
        &&label_80CC8084,
        &&label_80CC8088,
        &&label_80CC808C,
        &&label_80CC8090,
        &&label_80CC8094,
        &&label_80CC8098,
        &&label_80CC809C,
        &&label_80CC80A0,
        &&label_80CC80A4,
        &&label_80CC80A8,
        &&label_80CC80AC,
        &&label_80CC80B0,
        &&label_80CC80B4,
        &&label_80CC80B8,
        &&label_80CC80BC,
        &&label_80CC80C0,
        &&label_80CC80C4,
        &&label_80CC80C8,
        &&label_80CC80CC,
        &&label_80CC80D0,
        &&label_80CC80D4,
        &&label_80CC80D8,
        &&label_80CC80DC,
        &&label_80CC80E0,
        &&label_80CC80E4,
        &&label_80CC80E8,
        &&label_80CC80EC,
        &&label_80CC80F0,
        &&label_80CC80F4,
        &&label_80CC80F8,
        &&label_80CC80FC,
        &&label_80CC8100,
        &&label_80CC8104,
        &&label_80CC8108,
        &&label_80CC810C,
        &&label_80CC8110,
        &&label_80CC8114,
        &&label_80CC8118,
        &&label_80CC811C,
        &&label_80CC8120,
        &&label_80CC8124,
        &&label_80CC8128,
        &&label_80CC812C,
        &&label_80CC8130,
        &&label_80CC8134,
        &&label_80CC8138,
        &&label_80CC813C,
        &&label_80CC8140,
        &&label_80CC8144,
        &&label_80CC8148,
        &&label_80CC814C,
        &&label_80CC8150,
        &&label_80CC8154,
        &&label_80CC8158,
        &&label_80CC815C,
        &&label_80CC8160,
        &&label_80CC8164,
        &&label_80CC8168,
        &&label_80CC816C,
        &&label_80CC8170,
        &&label_80CC8174,
        &&label_80CC8178,
        &&label_80CC817C,
        &&label_80CC8180,
        &&label_80CC8184,
        &&label_80CC8188,
        &&label_80CC818C,
        &&label_80CC8190,
        &&label_80CC8194,
        &&label_80CC8198,
        &&label_80CC819C,
        &&label_80CC81A0,
        &&label_80CC81A4,
        &&label_80CC81A8,
        &&label_80CC81AC,
        &&label_80CC81B0,
        &&label_80CC81B4,
        &&label_80CC81B8,
        &&label_80CC81BC,
        &&label_80CC81C0,
        &&label_80CC81C4,
        &&label_80CC81C8,
        &&label_80CC81CC,
        &&label_80CC81D0,
        &&label_80CC81D4,
        &&label_80CC81D8,
        &&label_80CC81DC,
        &&label_80CC81E0,
        &&label_80CC81E4,
        &&label_80CC81E8,
        &&label_80CC81EC,
        &&label_80CC81F0,
        &&label_80CC81F4,
        &&label_80CC81F8,
        &&label_80CC81FC,
        &&label_80CC8200,
        &&label_80CC8204,
        &&label_80CC8208,
        &&label_80CC820C,
        &&label_80CC8210,
        &&label_80CC8214,
        &&label_80CC8218,
        &&label_80CC821C,
        &&label_80CC8220,
        &&label_80CC8224,
        &&label_80CC8228,
        &&label_80CC822C,
        &&label_80CC8230,
        &&label_80CC8234,
        &&label_80CC8238,
        &&label_80CC823C,
        &&label_80CC8240,
        &&label_80CC8244,
        &&label_80CC8248,
        &&label_80CC824C,
        &&label_80CC8250,
        &&label_80CC8254,
        &&label_80CC8258,
        &&label_80CC825C,
        &&label_80CC8260,
        &&label_80CC8264,
        &&label_80CC8268,
        &&label_80CC826C,
        &&label_80CC8270,
        &&label_80CC8274,
        &&label_80CC8278,
        &&label_80CC827C,
        &&label_80CC8280,
        &&label_80CC8284,
        &&label_80CC8288,
        &&label_80CC828C,
        &&label_80CC8290,
        &&label_80CC8294,
        &&label_80CC8298,
        &&label_80CC829C,
        &&label_80CC82A0,
        &&label_80CC82A4,
        &&label_80CC82A8,
        &&label_80CC82AC,
        &&label_80CC82B0,
        &&label_80CC82B4,
        &&label_80CC82B8,
        &&label_80CC82BC,
        &&label_80CC82C0,
        &&label_80CC82C4,
        &&label_80CC82C8,
        &&label_80CC82CC,
        &&label_80CC82D0,
        &&label_80CC82D4,
        &&label_80CC82D8,
        &&label_80CC82DC,
        &&label_80CC82E0,
        &&label_80CC82E4,
        &&label_80CC82E8,
        &&label_80CC82EC,
        &&label_80CC82F0,
        &&label_80CC82F4,
        &&label_80CC82F8,
        &&label_80CC82FC,
        &&label_80CC8300,
        &&label_80CC8304,
        &&label_80CC8308,
        &&label_80CC830C,
        &&label_80CC8310,
        &&label_80CC8314,
        &&label_80CC8318,
        &&label_80CC831C,
        &&label_80CC8320,
        &&label_80CC8324,
        &&label_80CC8328,
        &&label_80CC832C,
        &&label_80CC8330,
        &&label_80CC8334,
        &&label_80CC8338,
        &&label_80CC833C,
        &&label_80CC8340,
        &&label_80CC8344,
        &&label_80CC8348,
        &&label_80CC834C,
        &&label_80CC8350,
        &&label_80CC8354,
        &&label_80CC8358,
        &&label_80CC835C,
        &&label_80CC8360,
        &&label_80CC8364,
        &&label_80CC8368,
        &&label_80CC836C,
        &&label_80CC8370,
        &&label_80CC8374,
        &&label_80CC8378,
        &&label_80CC837C,
        &&label_80CC8380,
        &&label_80CC8384,
        &&label_80CC8388,
        &&label_80CC838C,
        &&label_80CC8390,
        &&label_80CC8394,
        &&label_80CC8398,
        &&label_80CC839C,
        &&label_80CC83A0,
        &&label_80CC83A4,
        &&label_80CC83A8,
        &&label_80CC83AC,
        &&label_80CC83B0,
        &&label_80CC83B4,
        &&label_80CC83B8,
        &&label_80CC83BC,
        &&label_80CC83C0,
        &&label_80CC83C4,
        &&label_80CC83C8,
        &&label_80CC83CC,
        &&label_80CC83D0,
        &&label_80CC83D4,
        &&label_80CC83D8,
        &&label_80CC83DC,
        &&label_80CC83E0,
        &&label_80CC83E4,
        &&label_80CC83E8,
        &&label_80CC83EC,
        &&label_80CC83F0,
        &&label_80CC83F4,
        &&label_80CC83F8,
        &&label_80CC83FC,
        &&label_80CC8400,
        &&label_80CC8404,
        &&label_80CC8408,
        &&label_80CC840C,
        &&label_80CC8410,
        &&label_80CC8414,
        &&label_80CC8418,
        &&label_80CC841C,
        &&label_80CC8420,
        &&label_80CC8424,
        &&label_80CC8428,
        &&label_80CC842C,
        &&label_80CC8430,
        &&label_80CC8434,
        &&label_80CC8438,
        &&label_80CC843C,
        &&label_80CC8440,
        &&label_80CC8444,
        &&label_80CC8448,
        &&label_80CC844C,
        &&label_80CC8450,
        &&label_80CC8454,
        &&label_80CC8458,
        &&label_80CC845C,
        &&label_80CC8460,
        &&label_80CC8464,
        &&label_80CC8468,
        &&label_80CC846C,
        &&label_80CC8470,
        &&label_80CC8474,
        &&label_80CC8478,
        &&label_80CC847C,
        &&label_80CC8480,
        &&label_80CC8484,
        &&label_80CC8488,
        &&label_80CC848C,
        &&label_80CC8490,
        &&label_80CC8494,
        &&label_80CC8498,
        &&label_80CC849C,
        &&label_80CC84A0,
        &&label_80CC84A4,
        &&label_80CC84A8,
        &&label_80CC84AC,
        &&label_80CC84B0,
        &&label_80CC84B4,
        &&label_80CC84B8,
        &&label_80CC84BC,
        &&label_80CC84C0,
        &&label_80CC84C4,
        &&label_80CC84C8,
        &&label_80CC84CC,
        &&label_80CC84D0,
        &&label_80CC84D4,
        &&label_80CC84D8,
        &&label_80CC84DC,
        &&label_80CC84E0,
        &&label_80CC84E4,
        &&label_80CC84E8,
        &&label_80CC84EC,
        &&label_80CC84F0,
        &&label_80CC84F4,
        &&label_80CC84F8,
        &&label_80CC84FC,
        &&label_80CC8500,
        &&label_80CC8504,
        &&label_80CC8508,
        &&label_80CC850C,
        &&label_80CC8510,
        &&label_80CC8514,
        &&label_80CC8518,
        &&label_80CC851C,
        &&label_80CC8520,
        &&label_80CC8524,
        &&label_80CC8528,
        &&label_80CC852C,
        &&label_80CC8530,
        &&label_80CC8534,
        &&label_80CC8538,
        &&label_80CC853C,
        &&label_80CC8540,
        &&label_80CC8544,
        &&label_80CC8548,
        &&label_80CC854C,
        &&label_80CC8550,
        &&label_80CC8554,
        &&label_80CC8558,
        &&label_80CC855C,
        &&label_80CC8560,
        &&label_80CC8564,
        &&label_80CC8568,
        &&label_80CC856C,
        &&label_80CC8570,
        &&label_80CC8574,
        &&label_80CC8578,
        &&label_80CC857C,
        &&label_80CC8580,
        &&label_80CC8584,
        &&label_80CC8588,
        &&label_80CC858C,
        &&label_80CC8590,
        &&label_80CC8594,
        &&label_80CC8598,
        &&label_80CC859C,
        &&label_80CC85A0,
        &&label_80CC85A4,
        &&label_80CC85A8,
        &&label_80CC85AC,
        &&label_80CC85B0,
        &&label_80CC85B4,
        &&label_80CC85B8,
        &&label_80CC85BC,
        &&label_80CC85C0,
        &&label_80CC85C4,
        &&label_80CC85C8,
        &&label_80CC85CC,
        &&label_80CC85D0,
        &&label_80CC85D4,
        &&label_80CC85D8,
        &&label_80CC85DC,
        &&label_80CC85E0,
        &&label_80CC85E4,
        &&label_80CC85E8,
        &&label_80CC85EC,
        &&label_80CC85F0,
        &&label_80CC85F4,
        &&label_80CC85F8,
        &&label_80CC85FC,
        &&label_80CC8600,
        &&label_80CC8604,
        &&label_80CC8608,
        &&label_80CC860C,
        &&label_80CC8610,
        &&label_80CC8614,
        &&label_80CC8618,
        &&label_80CC861C,
        &&label_80CC8620,
        &&label_80CC8624,
        &&label_80CC8628,
        &&label_80CC862C,
        &&label_80CC8630,
        &&label_80CC8634,
        &&label_80CC8638,
        &&label_80CC863C,
        &&label_80CC8640,
        &&label_80CC8644,
        &&label_80CC8648,
        &&label_80CC864C,
        &&label_80CC8650,
        &&label_80CC8654,
        &&label_80CC8658,
        &&label_80CC865C,
        &&label_80CC8660,
        &&label_80CC8664,
        &&label_80CC8668,
        &&label_80CC866C,
        &&label_80CC8670,
        &&label_80CC8674,
        &&label_80CC8678,
        &&label_80CC867C,
        &&label_80CC8680,
        &&label_80CC8684,
        &&label_80CC8688,
        &&label_80CC868C,
        &&label_80CC8690,
        &&label_80CC8694,
        &&label_80CC8698,
        &&label_80CC869C,
        &&label_80CC86A0,
        &&label_80CC86A4,
        &&label_80CC86A8,
        &&label_80CC86AC,
        &&label_80CC86B0,
        &&label_80CC86B4,
        &&label_80CC86B8,
        &&label_80CC86BC,
        &&label_80CC86C0,
        &&label_80CC86C4,
        &&label_80CC86C8,
        &&label_80CC86CC,
        &&label_80CC86D0,
        &&label_80CC86D4,
        &&label_80CC86D8,
        &&label_80CC86DC,
        &&label_80CC86E0,
        &&label_80CC86E4,
        &&label_80CC86E8,
        &&label_80CC86EC,
        &&label_80CC86F0,
        &&label_80CC86F4,
        &&label_80CC86F8,
        &&label_80CC86FC,
        &&label_80CC8700,
        &&label_80CC8704,
        &&label_80CC8708,
        &&label_80CC870C,
        &&label_80CC8710,
        &&label_80CC8714,
        &&label_80CC8718,
        &&label_80CC871C,
        &&label_80CC8720,
        &&label_80CC8724,
        &&label_80CC8728,
        &&label_80CC872C,
        &&label_80CC8730,
        &&label_80CC8734,
        &&label_80CC8738,
        &&label_80CC873C,
        &&label_80CC8740,
        &&label_80CC8744,
        &&label_80CC8748,
        &&label_80CC874C,
        &&label_80CC8750,
        &&label_80CC8754,
        &&label_80CC8758,
        &&label_80CC875C,
        &&label_80CC8760,
        &&label_80CC8764,
        &&label_80CC8768,
        &&label_80CC876C,
        &&label_80CC8770,
        &&label_80CC8774,
        &&label_80CC8778,
        &&label_80CC877C,
        &&label_80CC8780,
        &&label_80CC8784,
        &&label_80CC8788,
        &&label_80CC878C,
        &&label_80CC8790,
        &&label_80CC8794,
        &&label_80CC8798,
        &&label_80CC879C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CC7120u && pc <= 0x80CC879Cu && ((pc - 0x80CC7120u) & 3u) == 0u)
            goto *pc_table_80CC7120[(pc - 0x80CC7120u) >> 2];
    }
    return;
label_80CC7120:
    ctx->pc = 0x80CC7120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7120: stwu     r1, -80(r1)
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
label_80CC7124:
    ctx->pc = 0x80CC7124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7124: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7128:
    ctx->pc = 0x80CC7128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7128: stw     r0, 84(r1)
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
label_80CC712C:
    ctx->pc = 0x80CC712Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC712Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC712C: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC712Cu)) return;
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
label_80CC7130:
    ctx->pc = 0x80CC7130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7130: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC7130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CC7130u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7134:
    ctx->pc = 0x80CC7134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7134: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC7134u)) return;
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
label_80CC7138:
    ctx->pc = 0x80CC7138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7138: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC7138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CC7138u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC713C:
    ctx->pc = 0x80CC713Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC713Cu)) return;
    // 80CC713C: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80CC7140:
    ctx->pc = 0x80CC7140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7140u)) return;
    // 80CC7140: bl      0x80006DD4
    {
            ctx->lr = 0x80CC7144u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80CC7144:
    ctx->pc = 0x80CC7144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7144: cmpwi   r3, 2
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

label_80CC7148:
    ctx->pc = 0x80CC7148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7148u)) return;
    // 80CC7148: bc    12, 2, 0x80CC79EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC79EC;
        }
    }

label_80CC714C:
    ctx->pc = 0x80CC714Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC714Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC714C: bc    4, 0, 0x80CC7160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7160;
        }
    }

label_80CC7150:
    ctx->pc = 0x80CC7150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7150: cmpwi   r3, 0
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

label_80CC7154:
    ctx->pc = 0x80CC7154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7154u)) return;
    // 80CC7154: bc    12, 2, 0x80CC7A60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7A60;
        }
    }

label_80CC7158:
    ctx->pc = 0x80CC7158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7158: bc    4, 0, 0x80CC7168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7168;
        }
    }

label_80CC715C:
    ctx->pc = 0x80CC715Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC715Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC715C: b       0x80CC7A60
    {
            goto label_80CC7A60;
    }

label_80CC7160:
    ctx->pc = 0x80CC7160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7160: cmpwi   r3, 4
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

label_80CC7164:
    ctx->pc = 0x80CC7164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7164u)) return;
    // 80CC7164: b       0x80CC7A60
    {
            goto label_80CC7A60;
    }

label_80CC7168:
    ctx->pc = 0x80CC7168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7168: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC716C:
    ctx->pc = 0x80CC716Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC716Cu)) return;
    // 80CC716C: bl      0x80CC7D58
    {
            ctx->lr = 0x80CC7170u;
            goto label_80CC7D58;
    }

label_80CC7170:
    ctx->pc = 0x80CC7170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7170: bl      0x8045DE7C
    {
            ctx->lr = 0x80CC7174u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80CC7174:
    ctx->pc = 0x80CC7174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7174: bl      0x80460A60
    {
            ctx->lr = 0x80CC7178u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80CC7178:
    ctx->pc = 0x80CC7178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7178: bl      0x80460A24
    {
            ctx->lr = 0x80CC717Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80CC717C:
    ctx->pc = 0x80CC717Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC717Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC717C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7180:
    ctx->pc = 0x80CC7180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7180u)) return;
    // 80CC7180: bl      0x8045EC10
    {
            ctx->lr = 0x80CC7184u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CC7184:
    ctx->pc = 0x80CC7184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7184: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_80CC7188:
    ctx->pc = 0x80CC7188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7188u)) return;
    // 80CC7188: bl      0x80406090
    {
            ctx->lr = 0x80CC718Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80CC718C:
    ctx->pc = 0x80CC718Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC718Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC718C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7190:
    ctx->pc = 0x80CC7190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7190u)) return;
    // 80CC7190: bl      0x8045F220
    {
            ctx->lr = 0x80CC7194u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7194:
    ctx->pc = 0x80CC7194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC7194: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC7198:
    ctx->pc = 0x80CC7198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7198u)) return;
    // 80CC7198: addi    r4, r4, 12592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12592);

label_80CC719C:
    ctx->pc = 0x80CC719Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC719Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC719C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC719Cu)) return;
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
label_80CC71A0:
    ctx->pc = 0x80CC71A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71A0u)) return;
    // 80CC71A0: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC71A4:
    ctx->pc = 0x80CC71A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71A4u)) return;
    // 80CC71A4: addi    r4, r4, 12596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12596);

label_80CC71A8:
    ctx->pc = 0x80CC71A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC71A8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC71A8u)) return;
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
label_80CC71AC:
    ctx->pc = 0x80CC71ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71ACu)) return;
    // 80CC71AC: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC71B0:
    ctx->pc = 0x80CC71B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71B0u)) return;
    // 80CC71B0: addi    r4, r4, 12600
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12600);

label_80CC71B4:
    ctx->pc = 0x80CC71B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC71B4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC71B4u)) return;
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
label_80CC71B8:
    ctx->pc = 0x80CC71B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71B8u)) return;
    // 80CC71B8: bl      0x8045EF2C
    {
            ctx->lr = 0x80CC71BCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CC71BC:
    ctx->pc = 0x80CC71BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC71BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC71BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC71C0:
    ctx->pc = 0x80CC71C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71C0u)) return;
    // 80CC71C0: bl      0x8045F220
    {
            ctx->lr = 0x80CC71C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC71C4:
    ctx->pc = 0x80CC71C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC71C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC71C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC71C8:
    ctx->pc = 0x80CC71C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71C8u)) return;
    // 80CC71C8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CC71CC:
    ctx->pc = 0x80CC71CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71CCu)) return;
    // 80CC71CC: addi    r5, r5, -25810
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25810);

label_80CC71D0:
    ctx->pc = 0x80CC71D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71D0u)) return;
    // 80CC71D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC71D4:
    ctx->pc = 0x80CC71D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71D4u)) return;
    // 80CC71D4: bl      0x8045EEA8
    {
            ctx->lr = 0x80CC71D8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CC71D8:
    ctx->pc = 0x80CC71D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC71D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC71D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC71DC:
    ctx->pc = 0x80CC71DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71DCu)) return;
    // 80CC71DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC71E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC71E0:
    ctx->pc = 0x80CC71E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC71E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC71E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC71E4:
    ctx->pc = 0x80CC71E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71E4u)) return;
    // 80CC71E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC71E8:
    ctx->pc = 0x80CC71E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71E8u)) return;
    // 80CC71E8: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC71EC:
    ctx->pc = 0x80CC71ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71ECu)) return;
    // 80CC71EC: addi    r5, r5, 12604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12604);

label_80CC71F0:
    ctx->pc = 0x80CC71F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC71F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC71F0u)) return;
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
label_80CC71F4:
    ctx->pc = 0x80CC71F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71F4u)) return;
    // 80CC71F4: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC71F8:
    ctx->pc = 0x80CC71F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71F8u)) return;
    // 80CC71F8: addi    r5, r5, 12608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12608);

label_80CC71FC:
    ctx->pc = 0x80CC71FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC71FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC71FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC71FCu)) return;
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
label_80CC7200:
    ctx->pc = 0x80CC7200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7200u)) return;
    // 80CC7200: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC7204:
    ctx->pc = 0x80CC7204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7204u)) return;
    // 80CC7204: addi    r5, r5, 12612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12612);

label_80CC7208:
    ctx->pc = 0x80CC7208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7208: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC7208u)) return;
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
label_80CC720C:
    ctx->pc = 0x80CC720Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC720Cu)) return;
    // 80CC720C: bl      0x8045C750
    {
            ctx->lr = 0x80CC7210u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC7210:
    ctx->pc = 0x80CC7210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC7210: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC7214:
    ctx->pc = 0x80CC7214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7214u)) return;
    // 80CC7214: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC7218:
    ctx->pc = 0x80CC7218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7218u)) return;
    // 80CC7218: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC721C:
    ctx->pc = 0x80CC721Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC721Cu)) return;
    // 80CC721C: addi    r5, r6, -612
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-612);

label_80CC7220:
    ctx->pc = 0x80CC7220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7220u)) return;
    // 80CC7220: addi    r6, r6, -17488
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17488);

label_80CC7224:
    ctx->pc = 0x80CC7224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7224u)) return;
    // 80CC7224: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC7228:
    ctx->pc = 0x80CC7228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7228u)) return;
    // 80CC7228: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC722Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC722C:
    ctx->pc = 0x80CC722Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC722Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC722C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC7230:
    ctx->pc = 0x80CC7230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7230u)) return;
    // 80CC7230: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC7234:
    ctx->pc = 0x80CC7234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7234u)) return;
    // 80CC7234: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC7238:
    ctx->pc = 0x80CC7238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7238u)) return;
    // 80CC7238: addi    r5, r5, 12616
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12616);

label_80CC723C:
    ctx->pc = 0x80CC723Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC723Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC723C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC723Cu)) return;
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
label_80CC7240:
    ctx->pc = 0x80CC7240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7240u)) return;
    // 80CC7240: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC7244:
    ctx->pc = 0x80CC7244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7244u)) return;
    // 80CC7244: addi    r5, r5, 12620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12620);

label_80CC7248:
    ctx->pc = 0x80CC7248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7248: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC7248u)) return;
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
label_80CC724C:
    ctx->pc = 0x80CC724Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC724Cu)) return;
    // 80CC724C: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC7250:
    ctx->pc = 0x80CC7250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7250u)) return;
    // 80CC7250: addi    r5, r5, 12624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12624);

label_80CC7254:
    ctx->pc = 0x80CC7254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7254: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC7254u)) return;
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
label_80CC7258:
    ctx->pc = 0x80CC7258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7258u)) return;
    // 80CC7258: bl      0x8045C750
    {
            ctx->lr = 0x80CC725Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC725C:
    ctx->pc = 0x80CC725Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC725Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC725C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC7260:
    ctx->pc = 0x80CC7260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7260u)) return;
    // 80CC7260: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC7264:
    ctx->pc = 0x80CC7264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7264u)) return;
    // 80CC7264: li      r5, 2204
    ctx->gpr[5] = (u32)(s32)(2204);

label_80CC7268:
    ctx->pc = 0x80CC7268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7268u)) return;
    // 80CC7268: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC726C:
    ctx->pc = 0x80CC726Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC726Cu)) return;
    // 80CC726C: addi    r6, r6, -17488
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17488);

label_80CC7270:
    ctx->pc = 0x80CC7270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7270u)) return;
    // 80CC7270: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC7274:
    ctx->pc = 0x80CC7274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7274u)) return;
    // 80CC7274: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC7278u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC7278:
    ctx->pc = 0x80CC7278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7278: li      r3, 1346
    ctx->gpr[3] = (u32)(s32)(1346);

label_80CC727C:
    ctx->pc = 0x80CC727Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC727Cu)) return;
    // 80CC727C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC7280u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC7280:
    ctx->pc = 0x80CC7280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC7280: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7284:
    ctx->pc = 0x80CC7284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7284u)) return;
    // 80CC7284: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC7288:
    ctx->pc = 0x80CC7288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7288u)) return;
    // 80CC7288: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC728C:
    ctx->pc = 0x80CC728Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC728Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC728C: lwz     r0, 0(r4)
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
label_80CC7290:
    ctx->pc = 0x80CC7290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7290u)) return;
    // 80CC7290: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC7294:
    ctx->pc = 0x80CC7294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7294u)) return;
    // 80CC7294: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC7298:
    ctx->pc = 0x80CC7298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7298u)) return;
    // 80CC7298: addi    r4, r4, 23800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23800);

label_80CC729C:
    ctx->pc = 0x80CC729Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC729Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC729C: lwzx    r4, r4, r0
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
label_80CC72A0:
    ctx->pc = 0x80CC72A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC72A0: lwz     r4, 0(r4)
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
label_80CC72A4:
    ctx->pc = 0x80CC72A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72A4u)) return;
    // 80CC72A4: bl      0x8045F608
    {
            ctx->lr = 0x80CC72A8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC72A8:
    ctx->pc = 0x80CC72A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC72A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC72A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC72AC:
    ctx->pc = 0x80CC72ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72ACu)) return;
    // 80CC72AC: bl      0x8045F220
    {
            ctx->lr = 0x80CC72B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC72B0:
    ctx->pc = 0x80CC72B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC72B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC72B0: lwz     r27, 32(r3)
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
label_80CC72B4:
    ctx->pc = 0x80CC72B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72B4u)) return;
    // 80CC72B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC72B8:
    ctx->pc = 0x80CC72B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72B8u)) return;
    // 80CC72B8: bl      0x8045F220
    {
            ctx->lr = 0x80CC72BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC72BC:
    ctx->pc = 0x80CC72BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC72BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC72BC: lwz     r3, 32(r3)
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
label_80CC72C0:
    ctx->pc = 0x80CC72C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC72C0: lwz     r0, 24(r3)
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
label_80CC72C4:
    ctx->pc = 0x80CC72C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72C4u)) return;
    // 80CC72C4: subfic  r28, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[28] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80CC72C8:
    ctx->pc = 0x80CC72C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72C8u)) return;
    // 80CC72C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC72CC:
    ctx->pc = 0x80CC72CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72CCu)) return;
    // 80CC72CC: bl      0x8045F220
    {
            ctx->lr = 0x80CC72D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC72D0:
    ctx->pc = 0x80CC72D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC72D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC72D0: lwz     r29, 32(r3)
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
label_80CC72D4:
    ctx->pc = 0x80CC72D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72D4u)) return;
    // 80CC72D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC72D8:
    ctx->pc = 0x80CC72D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72D8u)) return;
    // 80CC72D8: bl      0x8045F220
    {
            ctx->lr = 0x80CC72DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC72DC:
    ctx->pc = 0x80CC72DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC72DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC72DC: lwz     r31, 32(r3)
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
label_80CC72E0:
    ctx->pc = 0x80CC72E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72E0u)) return;
    // 80CC72E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC72E4:
    ctx->pc = 0x80CC72E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72E4u)) return;
    // 80CC72E4: bl      0x8045F220
    {
            ctx->lr = 0x80CC72E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC72E8:
    ctx->pc = 0x80CC72E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC72E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC72E8: lwz     r30, 32(r3)
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
label_80CC72EC:
    ctx->pc = 0x80CC72ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72ECu)) return;
    // 80CC72EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC72F0:
    ctx->pc = 0x80CC72F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72F0u)) return;
    // 80CC72F0: bl      0x8045F220
    {
            ctx->lr = 0x80CC72F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC72F4:
    ctx->pc = 0x80CC72F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC72F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC72F4: lwz     r4, 32(r3)
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
label_80CC72F8:
    ctx->pc = 0x80CC72F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72F8u)) return;
    // 80CC72F8: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC72FC:
    ctx->pc = 0x80CC72FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC72FCu)) return;
    // 80CC72FC: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC7300:
    ctx->pc = 0x80CC7300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7300: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC7300u)) return;
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
label_80CC7304:
    ctx->pc = 0x80CC7304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7304: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC7304u)) return;
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
label_80CC7308:
    ctx->pc = 0x80CC7308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7308: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CC7308u)) return;
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
label_80CC730C:
    ctx->pc = 0x80CC730Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC730Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC730C: lwz     r4, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7310:
    ctx->pc = 0x80CC7310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7310u)) return;
    // 80CC7310: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CC7314:
    ctx->pc = 0x80CC7314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7314: lwz     r6, 28(r27)
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
label_80CC7318:
    ctx->pc = 0x80CC7318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7318u)) return;
    // 80CC7318: bl      0x8045F170
    {
            ctx->lr = 0x80CC731Cu;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80CC731C:
    ctx->pc = 0x80CC731Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC731Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC731C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC7320:
    ctx->pc = 0x80CC7320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7320u)) return;
    // 80CC7320: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC7324u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC7324:
    ctx->pc = 0x80CC7324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC7324: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7328:
    ctx->pc = 0x80CC7328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7328u)) return;
    // 80CC7328: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC732C:
    ctx->pc = 0x80CC732Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC732Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC732C: lwz     r3, 0(r3)
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
label_80CC7330:
    ctx->pc = 0x80CC7330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7330u)) return;
    // 80CC7330: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC7334:
    ctx->pc = 0x80CC7334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7334u)) return;
    // 80CC7334: bl      0x8045EE90
    {
            ctx->lr = 0x80CC7338u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80CC7338:
    ctx->pc = 0x80CC7338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7338: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC733C:
    ctx->pc = 0x80CC733Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC733Cu)) return;
    // 80CC733C: bl      0x8045F220
    {
            ctx->lr = 0x80CC7340u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7340:
    ctx->pc = 0x80CC7340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7340: lwz     r30, 32(r3)
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
label_80CC7344:
    ctx->pc = 0x80CC7344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7344u)) return;
    // 80CC7344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7348:
    ctx->pc = 0x80CC7348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7348u)) return;
    // 80CC7348: bl      0x8045F220
    {
            ctx->lr = 0x80CC734Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC734C:
    ctx->pc = 0x80CC734Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC734Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC734C: lwz     r3, 32(r3)
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
label_80CC7350:
    ctx->pc = 0x80CC7350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7350: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC7350u)) return;
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
label_80CC7354:
    ctx->pc = 0x80CC7354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7354u)) return;
    // 80CC7354: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC7358:
    ctx->pc = 0x80CC7358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7358u)) return;
    // 80CC7358: addi    r3, r3, 12628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12628);

label_80CC735C:
    ctx->pc = 0x80CC735Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC735Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC735C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC735Cu)) return;
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
label_80CC7360:
    ctx->pc = 0x80CC7360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7360u)) return;
    // 80CC7360: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC7360u)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_80CC7364:
    ctx->pc = 0x80CC7364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7364u)) return;
    // 80CC7364: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7368:
    ctx->pc = 0x80CC7368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7368u)) return;
    // 80CC7368: bl      0x8045F220
    {
            ctx->lr = 0x80CC736Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC736C:
    ctx->pc = 0x80CC736Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC736Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC736C: lwz     r4, 32(r3)
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
label_80CC7370:
    ctx->pc = 0x80CC7370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7370u)) return;
    // 80CC7370: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7374:
    ctx->pc = 0x80CC7374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7374u)) return;
    // 80CC7374: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC7378:
    ctx->pc = 0x80CC7378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7378: lwz     r3, 0(r3)
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
label_80CC737C:
    ctx->pc = 0x80CC737Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC737Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC737C: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC737Cu)) return;
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
label_80CC7380:
    ctx->pc = 0x80CC7380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7380u)) return;
    // 80CC7380: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80CC7380u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80CC7384:
    ctx->pc = 0x80CC7384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7384: lfs     f3, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC7384u)) return;
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
label_80CC7388:
    ctx->pc = 0x80CC7388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7388u)) return;
    // 80CC7388: bl      0x8045EF2C
    {
            ctx->lr = 0x80CC738Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CC738C:
    ctx->pc = 0x80CC738Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC738Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC738C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7390:
    ctx->pc = 0x80CC7390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7390u)) return;
    // 80CC7390: bl      0x8045F220
    {
            ctx->lr = 0x80CC7394u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7394:
    ctx->pc = 0x80CC7394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7394: lwz     r30, 32(r3)
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
label_80CC7398:
    ctx->pc = 0x80CC7398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7398u)) return;
    // 80CC7398: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC739C:
    ctx->pc = 0x80CC739Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC739Cu)) return;
    // 80CC739C: bl      0x8045F220
    {
            ctx->lr = 0x80CC73A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC73A0:
    ctx->pc = 0x80CC73A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC73A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC73A0: lwz     r3, 32(r3)
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
label_80CC73A4:
    ctx->pc = 0x80CC73A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC73A4: lwz     r0, 24(r3)
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
label_80CC73A8:
    ctx->pc = 0x80CC73A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73A8u)) return;
    // 80CC73A8: subfic  r31, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[31] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80CC73AC:
    ctx->pc = 0x80CC73ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73ACu)) return;
    // 80CC73AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC73B0:
    ctx->pc = 0x80CC73B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73B0u)) return;
    // 80CC73B0: bl      0x8045F220
    {
            ctx->lr = 0x80CC73B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC73B4:
    ctx->pc = 0x80CC73B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC73B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC73B4: lwz     r4, 32(r3)
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
label_80CC73B8:
    ctx->pc = 0x80CC73B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73B8u)) return;
    // 80CC73B8: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC73BC:
    ctx->pc = 0x80CC73BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73BCu)) return;
    // 80CC73BC: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC73C0:
    ctx->pc = 0x80CC73C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC73C0: lwz     r3, 0(r3)
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
label_80CC73C4:
    ctx->pc = 0x80CC73C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC73C4: lwz     r4, 20(r4)
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
label_80CC73C8:
    ctx->pc = 0x80CC73C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73C8u)) return;
    // 80CC73C8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC73CC:
    ctx->pc = 0x80CC73CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC73CC: lwz     r6, 28(r30)
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
label_80CC73D0:
    ctx->pc = 0x80CC73D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73D0u)) return;
    // 80CC73D0: bl      0x8045EEA8
    {
            ctx->lr = 0x80CC73D4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CC73D4:
    ctx->pc = 0x80CC73D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC73D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80CC73D4: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC73D8:
    ctx->pc = 0x80CC73D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73D8u)) return;
    // 80CC73D8: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC73DC:
    ctx->pc = 0x80CC73DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC73DC: lwz     r3, 0(r3)
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
label_80CC73E0:
    ctx->pc = 0x80CC73E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73E0u)) return;
    // 80CC73E0: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC73E4:
    ctx->pc = 0x80CC73E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73E4u)) return;
    // 80CC73E4: addi    r4, r4, 9128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9128);

label_80CC73E8:
    ctx->pc = 0x80CC73E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73E8u)) return;
    // 80CC73E8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC73EC:
    ctx->pc = 0x80CC73ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73ECu)) return;
    // 80CC73EC: addi    r5, r5, -11940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11940);

label_80CC73F0:
    ctx->pc = 0x80CC73F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73F0u)) return;
    // 80CC73F0: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC73F4:
    ctx->pc = 0x80CC73F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73F4u)) return;
    // 80CC73F4: addi    r6, r6, 12632
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12632);

label_80CC73F8:
    ctx->pc = 0x80CC73F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC73F8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC73F8u)) return;
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
label_80CC73FC:
    ctx->pc = 0x80CC73FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC73FCu)) return;
    // 80CC73FC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC7400:
    ctx->pc = 0x80CC7400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7400u)) return;
    // 80CC7400: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC7404:
    ctx->pc = 0x80CC7404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7404u)) return;
    // 80CC7404: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC7408u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC7408:
    ctx->pc = 0x80CC7408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC740C:
    ctx->pc = 0x80CC740Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC740Cu)) return;
    // 80CC740C: bl      0x8045F220
    {
            ctx->lr = 0x80CC7410u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7410:
    ctx->pc = 0x80CC7410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC7410: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC7414:
    ctx->pc = 0x80CC7414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7414u)) return;
    // 80CC7414: addi    r4, r4, -18384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18384);

label_80CC7418:
    ctx->pc = 0x80CC7418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7418u)) return;
    // 80CC7418: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC741C:
    ctx->pc = 0x80CC741Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC741Cu)) return;
    // 80CC741C: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC7420:
    ctx->pc = 0x80CC7420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7420u)) return;
    // 80CC7420: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC7424:
    ctx->pc = 0x80CC7424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7424u)) return;
    // 80CC7424: addi    r6, r6, 12636
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12636);

label_80CC7428:
    ctx->pc = 0x80CC7428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7428: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC7428u)) return;
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
label_80CC742C:
    ctx->pc = 0x80CC742Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC742Cu)) return;
    // 80CC742C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC7430:
    ctx->pc = 0x80CC7430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7430u)) return;
    // 80CC7430: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_80CC7434:
    ctx->pc = 0x80CC7434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7434u)) return;
    // 80CC7434: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC7438u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC7438:
    ctx->pc = 0x80CC7438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7438: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CC743C:
    ctx->pc = 0x80CC743Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC743Cu)) return;
    // 80CC743C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC7440u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC7440:
    ctx->pc = 0x80CC7440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7440: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7444:
    ctx->pc = 0x80CC7444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7444u)) return;
    // 80CC7444: bl      0x8045F220
    {
            ctx->lr = 0x80CC7448u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7448:
    ctx->pc = 0x80CC7448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7448: lwz     r31, 32(r3)
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
label_80CC744C:
    ctx->pc = 0x80CC744Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC744Cu)) return;
    // 80CC744C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7450:
    ctx->pc = 0x80CC7450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7450u)) return;
    // 80CC7450: bl      0x8045F220
    {
            ctx->lr = 0x80CC7454u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7454:
    ctx->pc = 0x80CC7454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7454: lwz     r3, 32(r3)
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
label_80CC7458:
    ctx->pc = 0x80CC7458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7458: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC7458u)) return;
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
label_80CC745C:
    ctx->pc = 0x80CC745Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC745Cu)) return;
    // 80CC745C: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC7460:
    ctx->pc = 0x80CC7460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7460u)) return;
    // 80CC7460: addi    r3, r3, 12628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12628);

label_80CC7464:
    ctx->pc = 0x80CC7464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7464: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC7464u)) return;
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
label_80CC7468:
    ctx->pc = 0x80CC7468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7468u)) return;
    // 80CC7468: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC7468u)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_80CC746C:
    ctx->pc = 0x80CC746Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC746Cu)) return;
    // 80CC746C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7470:
    ctx->pc = 0x80CC7470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7470u)) return;
    // 80CC7470: bl      0x8045F220
    {
            ctx->lr = 0x80CC7474u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7474:
    ctx->pc = 0x80CC7474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7474: lwz     r4, 32(r3)
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
label_80CC7478:
    ctx->pc = 0x80CC7478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7478u)) return;
    // 80CC7478: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC747C:
    ctx->pc = 0x80CC747Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC747Cu)) return;
    // 80CC747C: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC7480:
    ctx->pc = 0x80CC7480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7480: lwz     r3, 0(r3)
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
label_80CC7484:
    ctx->pc = 0x80CC7484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7484: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC7484u)) return;
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
label_80CC7488:
    ctx->pc = 0x80CC7488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7488u)) return;
    // 80CC7488: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80CC7488u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80CC748C:
    ctx->pc = 0x80CC748Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC748Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC748C: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CC748Cu)) return;
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
label_80CC7490:
    ctx->pc = 0x80CC7490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7490u)) return;
    // 80CC7490: bl      0x8045EF2C
    {
            ctx->lr = 0x80CC7494u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CC7494:
    ctx->pc = 0x80CC7494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7494: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CC7498:
    ctx->pc = 0x80CC7498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7498u)) return;
    // 80CC7498: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC749Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC749C:
    ctx->pc = 0x80CC749Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC749Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC749C: bl      0x8045F32C
    {
            ctx->lr = 0x80CC74A0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC74A0:
    ctx->pc = 0x80CC74A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC74A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC74A0: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80CC74A4:
    ctx->pc = 0x80CC74A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74A4u)) return;
    // 80CC74A4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC74A8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC74A8:
    ctx->pc = 0x80CC74A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC74A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC74A8: bl      0x8045C3AC
    {
            ctx->lr = 0x80CC74ACu;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80CC74AC:
    ctx->pc = 0x80CC74ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC74ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC74AC: bl      0x8045C4A4
    {
            ctx->lr = 0x80CC74B0u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80CC74B0:
    ctx->pc = 0x80CC74B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC74B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC74B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC74B4:
    ctx->pc = 0x80CC74B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74B4u)) return;
    // 80CC74B4: bl      0x8045F220
    {
            ctx->lr = 0x80CC74B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC74B8:
    ctx->pc = 0x80CC74B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC74B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC74B8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC74BC:
    ctx->pc = 0x80CC74BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74BCu)) return;
    // 80CC74BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC74C0:
    ctx->pc = 0x80CC74C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74C0u)) return;
    // 80CC74C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC74C4:
    ctx->pc = 0x80CC74C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74C4u)) return;
    // 80CC74C4: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC74C8:
    ctx->pc = 0x80CC74C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74C8u)) return;
    // 80CC74C8: addi    r6, r6, 12640
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12640);

label_80CC74CC:
    ctx->pc = 0x80CC74CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC74CC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC74CCu)) return;
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
label_80CC74D0:
    ctx->pc = 0x80CC74D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74D0u)) return;
    // 80CC74D0: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC74D4:
    ctx->pc = 0x80CC74D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74D4u)) return;
    // 80CC74D4: addi    r6, r6, 12644
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12644);

label_80CC74D8:
    ctx->pc = 0x80CC74D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC74D8: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC74D8u)) return;
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
label_80CC74DC:
    ctx->pc = 0x80CC74DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74DCu)) return;
    // 80CC74DC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC74DCu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80CC74E0:
    ctx->pc = 0x80CC74E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74E0u)) return;
    // 80CC74E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC74E4:
    ctx->pc = 0x80CC74E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74E4u)) return;
    // 80CC74E4: bl      0x8045C3C0
    {
            ctx->lr = 0x80CC74E8u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80CC74E8:
    ctx->pc = 0x80CC74E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC74E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC74E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC74EC:
    ctx->pc = 0x80CC74ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74ECu)) return;
    // 80CC74EC: bl      0x8045F220
    {
            ctx->lr = 0x80CC74F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC74F0:
    ctx->pc = 0x80CC74F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC74F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 80CC74F0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC74F4:
    ctx->pc = 0x80CC74F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74F4u)) return;
    // 80CC74F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC74F8:
    ctx->pc = 0x80CC74F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CC74F8: stw     r0, 8(r1)
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
label_80CC74FC:
    ctx->pc = 0x80CC74FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC74FCu)) return;
    // 80CC74FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7500:
    ctx->pc = 0x80CC7500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7500u)) return;
    // 80CC7500: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80CC7504:
    ctx->pc = 0x80CC7504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7504u)) return;
    // 80CC7504: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC7508:
    ctx->pc = 0x80CC7508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7508u)) return;
    // 80CC7508: addi    r6, r6, 12648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12648);

label_80CC750C:
    ctx->pc = 0x80CC750Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC750Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC750C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC750Cu)) return;
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
label_80CC7510:
    ctx->pc = 0x80CC7510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7510u)) return;
    // 80CC7510: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC7514:
    ctx->pc = 0x80CC7514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7514u)) return;
    // 80CC7514: li      r7, -5460
    ctx->gpr[7] = (u32)(s32)(-5460);

label_80CC7518:
    ctx->pc = 0x80CC7518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7518u)) return;
    // 80CC7518: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80CC751C:
    ctx->pc = 0x80CC751Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC751Cu)) return;
    // 80CC751C: lis     r9, -27378
    ctx->gpr[9] = ((u32)(s32)(-27378) << 16);

label_80CC7520:
    ctx->pc = 0x80CC7520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7520u)) return;
    // 80CC7520: addi    r9, r9, 12652
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(12652);

label_80CC7524:
    ctx->pc = 0x80CC7524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7524: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80CC7524u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
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
label_80CC7528:
    ctx->pc = 0x80CC7528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7528u)) return;
    // 80CC7528: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80CC752C:
    ctx->pc = 0x80CC752Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC752Cu)) return;
    // 80CC752C: li      r10, -27306
    ctx->gpr[10] = (u32)(s32)(-27306);

label_80CC7530:
    ctx->pc = 0x80CC7530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7530u)) return;
    // 80CC7530: lis     r11, -27378
    ctx->gpr[11] = ((u32)(s32)(-27378) << 16);

label_80CC7534:
    ctx->pc = 0x80CC7534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7534u)) return;
    // 80CC7534: addi    r11, r11, 12656
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(12656);

label_80CC7538:
    ctx->pc = 0x80CC7538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7538: lfs     f3, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x80CC7538u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
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
label_80CC753C:
    ctx->pc = 0x80CC753Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC753Cu)) return;
    // 80CC753C: bl      0x8045C260
    {
            ctx->lr = 0x80CC7540u;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80CC7540:
    ctx->pc = 0x80CC7540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7540: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7544:
    ctx->pc = 0x80CC7544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7544u)) return;
    // 80CC7544: bl      0x8045F220
    {
            ctx->lr = 0x80CC7548u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7548:
    ctx->pc = 0x80CC7548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC7548: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC754C:
    ctx->pc = 0x80CC754Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC754Cu)) return;
    // 80CC754C: addi    r4, r4, -12108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12108);

label_80CC7550:
    ctx->pc = 0x80CC7550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7550u)) return;
    // 80CC7550: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC7554:
    ctx->pc = 0x80CC7554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7554u)) return;
    // 80CC7554: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC7558:
    ctx->pc = 0x80CC7558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7558u)) return;
    // 80CC7558: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC755C:
    ctx->pc = 0x80CC755Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC755Cu)) return;
    // 80CC755C: addi    r6, r6, 12660
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12660);

label_80CC7560:
    ctx->pc = 0x80CC7560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7560: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC7560u)) return;
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
label_80CC7564:
    ctx->pc = 0x80CC7564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7564u)) return;
    // 80CC7564: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC7568:
    ctx->pc = 0x80CC7568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7568u)) return;
    // 80CC7568: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC756C:
    ctx->pc = 0x80CC756Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC756Cu)) return;
    // 80CC756C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC7570u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC7570:
    ctx->pc = 0x80CC7570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7570: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80CC7574:
    ctx->pc = 0x80CC7574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7574u)) return;
    // 80CC7574: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC7578u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC7578:
    ctx->pc = 0x80CC7578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7578: li      r3, 1347
    ctx->gpr[3] = (u32)(s32)(1347);

label_80CC757C:
    ctx->pc = 0x80CC757Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC757Cu)) return;
    // 80CC757C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC7580u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC7580:
    ctx->pc = 0x80CC7580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC7580: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC7584:
    ctx->pc = 0x80CC7584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7584u)) return;
    // 80CC7584: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC7588:
    ctx->pc = 0x80CC7588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7588u)) return;
    // 80CC7588: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC758C:
    ctx->pc = 0x80CC758Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC758Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC758C: lwz     r0, 0(r4)
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
label_80CC7590:
    ctx->pc = 0x80CC7590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7590u)) return;
    // 80CC7590: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC7594:
    ctx->pc = 0x80CC7594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7594u)) return;
    // 80CC7594: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC7598:
    ctx->pc = 0x80CC7598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7598u)) return;
    // 80CC7598: addi    r4, r4, 23800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23800);

label_80CC759C:
    ctx->pc = 0x80CC759Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC759Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC759C: lwzx    r4, r4, r0
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
label_80CC75A0:
    ctx->pc = 0x80CC75A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC75A0: lwz     r4, 4(r4)
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
label_80CC75A4:
    ctx->pc = 0x80CC75A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75A4u)) return;
    // 80CC75A4: bl      0x8045F608
    {
            ctx->lr = 0x80CC75A8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC75A8:
    ctx->pc = 0x80CC75A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC75A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC75A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC75AC:
    ctx->pc = 0x80CC75ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75ACu)) return;
    // 80CC75AC: bl      0x8045F220
    {
            ctx->lr = 0x80CC75B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC75B0:
    ctx->pc = 0x80CC75B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC75B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC75B0: lwz     r31, 32(r3)
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
label_80CC75B4:
    ctx->pc = 0x80CC75B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75B4u)) return;
    // 80CC75B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC75B8:
    ctx->pc = 0x80CC75B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75B8u)) return;
    // 80CC75B8: bl      0x8045F220
    {
            ctx->lr = 0x80CC75BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC75BC:
    ctx->pc = 0x80CC75BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC75BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC75BC: lwz     r3, 32(r3)
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
label_80CC75C0:
    ctx->pc = 0x80CC75C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC75C0: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC75C0u)) return;
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
label_80CC75C4:
    ctx->pc = 0x80CC75C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75C4u)) return;
    // 80CC75C4: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC75C8:
    ctx->pc = 0x80CC75C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75C8u)) return;
    // 80CC75C8: addi    r3, r3, 12628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12628);

label_80CC75CC:
    ctx->pc = 0x80CC75CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC75CC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC75CCu)) return;
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
label_80CC75D0:
    ctx->pc = 0x80CC75D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75D0u)) return;
    // 80CC75D0: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC75D0u)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_80CC75D4:
    ctx->pc = 0x80CC75D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75D4u)) return;
    // 80CC75D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC75D8:
    ctx->pc = 0x80CC75D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75D8u)) return;
    // 80CC75D8: bl      0x8045F220
    {
            ctx->lr = 0x80CC75DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC75DC:
    ctx->pc = 0x80CC75DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC75DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC75DC: lwz     r4, 32(r3)
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
label_80CC75E0:
    ctx->pc = 0x80CC75E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75E0u)) return;
    // 80CC75E0: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC75E4:
    ctx->pc = 0x80CC75E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75E4u)) return;
    // 80CC75E4: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC75E8:
    ctx->pc = 0x80CC75E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC75E8: lwz     r3, 0(r3)
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
label_80CC75EC:
    ctx->pc = 0x80CC75ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC75EC: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC75ECu)) return;
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
label_80CC75F0:
    ctx->pc = 0x80CC75F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75F0u)) return;
    // 80CC75F0: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80CC75F0u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80CC75F4:
    ctx->pc = 0x80CC75F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC75F4: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CC75F4u)) return;
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
label_80CC75F8:
    ctx->pc = 0x80CC75F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC75F8u)) return;
    // 80CC75F8: bl      0x8045EF2C
    {
            ctx->lr = 0x80CC75FCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CC75FC:
    ctx->pc = 0x80CC75FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC75FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC75FC: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80CC7600:
    ctx->pc = 0x80CC7600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7600u)) return;
    // 80CC7600: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC7604u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC7604:
    ctx->pc = 0x80CC7604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7604: bl      0x8045F32C
    {
            ctx->lr = 0x80CC7608u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC7608:
    ctx->pc = 0x80CC7608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7608: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC760C:
    ctx->pc = 0x80CC760Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC760Cu)) return;
    // 80CC760C: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80CC7610:
    ctx->pc = 0x80CC7610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7610u)) return;
    // 80CC7610: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80CC7614:
    ctx->pc = 0x80CC7614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7614u)) return;
    // 80CC7614: bl      0x80CC7E60
    {
            ctx->lr = 0x80CC7618u;
            goto label_80CC7E60;
    }

label_80CC7618:
    ctx->pc = 0x80CC7618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7618: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC761C:
    ctx->pc = 0x80CC761Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC761Cu)) return;
    // 80CC761C: bl      0x8045F220
    {
            ctx->lr = 0x80CC7620u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7620:
    ctx->pc = 0x80CC7620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80CC7620: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC7624:
    ctx->pc = 0x80CC7624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7624u)) return;
    // 80CC7624: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC7628:
    ctx->pc = 0x80CC7628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7628u)) return;
    // 80CC7628: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC762C:
    ctx->pc = 0x80CC762Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC762Cu)) return;
    // 80CC762C: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC7630:
    ctx->pc = 0x80CC7630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7630u)) return;
    // 80CC7630: addi    r6, r6, 12664
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12664);

label_80CC7634:
    ctx->pc = 0x80CC7634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7634: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC7634u)) return;
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
label_80CC7638:
    ctx->pc = 0x80CC7638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7638u)) return;
    // 80CC7638: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC763C:
    ctx->pc = 0x80CC763Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC763Cu)) return;
    // 80CC763C: addi    r6, r6, 12668
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12668);

label_80CC7640:
    ctx->pc = 0x80CC7640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7640: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC7640u)) return;
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
label_80CC7644:
    ctx->pc = 0x80CC7644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7644u)) return;
    // 80CC7644: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC7648:
    ctx->pc = 0x80CC7648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7648u)) return;
    // 80CC7648: addi    r6, r6, 12640
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12640);

label_80CC764C:
    ctx->pc = 0x80CC764Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC764Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC764C: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC764Cu)) return;
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
label_80CC7650:
    ctx->pc = 0x80CC7650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7650u)) return;
    // 80CC7650: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC7654:
    ctx->pc = 0x80CC7654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7654u)) return;
    // 80CC7654: bl      0x8045C3C0
    {
            ctx->lr = 0x80CC7658u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80CC7658:
    ctx->pc = 0x80CC7658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7658: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC765C:
    ctx->pc = 0x80CC765Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC765Cu)) return;
    // 80CC765C: bl      0x8045F220
    {
            ctx->lr = 0x80CC7660u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7660:
    ctx->pc = 0x80CC7660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 80CC7660: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC7664:
    ctx->pc = 0x80CC7664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7664u)) return;
    // 80CC7664: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC7668:
    ctx->pc = 0x80CC7668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CC7668: stw     r0, 8(r1)
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
label_80CC766C:
    ctx->pc = 0x80CC766Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC766Cu)) return;
    // 80CC766C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7670:
    ctx->pc = 0x80CC7670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7670u)) return;
    // 80CC7670: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80CC7674:
    ctx->pc = 0x80CC7674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7674u)) return;
    // 80CC7674: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC7678:
    ctx->pc = 0x80CC7678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7678u)) return;
    // 80CC7678: addi    r6, r6, 12644
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12644);

label_80CC767C:
    ctx->pc = 0x80CC767Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC767Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC767C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC767Cu)) return;
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
label_80CC7680:
    ctx->pc = 0x80CC7680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7680u)) return;
    // 80CC7680: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC7684:
    ctx->pc = 0x80CC7684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7684u)) return;
    // 80CC7684: li      r7, -18203
    ctx->gpr[7] = (u32)(s32)(-18203);

label_80CC7688:
    ctx->pc = 0x80CC7688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7688u)) return;
    // 80CC7688: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80CC768C:
    ctx->pc = 0x80CC768Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC768Cu)) return;
    // 80CC768C: lis     r9, -27378
    ctx->gpr[9] = ((u32)(s32)(-27378) << 16);

label_80CC7690:
    ctx->pc = 0x80CC7690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7690u)) return;
    // 80CC7690: addi    r9, r9, 12672
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(12672);

label_80CC7694:
    ctx->pc = 0x80CC7694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7694: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80CC7694u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
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
label_80CC7698:
    ctx->pc = 0x80CC7698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7698u)) return;
    // 80CC7698: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80CC769C:
    ctx->pc = 0x80CC769Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC769Cu)) return;
    // 80CC769C: li      r10, -18203
    ctx->gpr[10] = (u32)(s32)(-18203);

label_80CC76A0:
    ctx->pc = 0x80CC76A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76A0u)) return;
    // 80CC76A0: lis     r11, -27378
    ctx->gpr[11] = ((u32)(s32)(-27378) << 16);

label_80CC76A4:
    ctx->pc = 0x80CC76A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76A4u)) return;
    // 80CC76A4: addi    r11, r11, 12648
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(12648);

label_80CC76A8:
    ctx->pc = 0x80CC76A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC76A8: lfs     f3, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x80CC76A8u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
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
label_80CC76AC:
    ctx->pc = 0x80CC76ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76ACu)) return;
    // 80CC76AC: bl      0x8045C260
    {
            ctx->lr = 0x80CC76B0u;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80CC76B0:
    ctx->pc = 0x80CC76B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC76B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC76B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC76B4:
    ctx->pc = 0x80CC76B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76B4u)) return;
    // 80CC76B4: bl      0x8045F220
    {
            ctx->lr = 0x80CC76B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC76B8:
    ctx->pc = 0x80CC76B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC76B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC76B8: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC76BCu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC76BC:
    ctx->pc = 0x80CC76BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC76BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC76BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC76C0:
    ctx->pc = 0x80CC76C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76C0u)) return;
    // 80CC76C0: bl      0x8045F220
    {
            ctx->lr = 0x80CC76C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC76C4:
    ctx->pc = 0x80CC76C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC76C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC76C4: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC76C8:
    ctx->pc = 0x80CC76C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76C8u)) return;
    // 80CC76C8: addi    r4, r4, 31692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31692);

label_80CC76CC:
    ctx->pc = 0x80CC76CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76CCu)) return;
    // 80CC76CC: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC76D0:
    ctx->pc = 0x80CC76D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76D0u)) return;
    // 80CC76D0: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC76D4:
    ctx->pc = 0x80CC76D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76D4u)) return;
    // 80CC76D4: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC76D8:
    ctx->pc = 0x80CC76D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76D8u)) return;
    // 80CC76D8: addi    r6, r6, 12636
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12636);

label_80CC76DC:
    ctx->pc = 0x80CC76DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC76DC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC76DCu)) return;
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
label_80CC76E0:
    ctx->pc = 0x80CC76E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76E0u)) return;
    // 80CC76E0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC76E4:
    ctx->pc = 0x80CC76E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76E4u)) return;
    // 80CC76E4: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80CC76E8:
    ctx->pc = 0x80CC76E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76E8u)) return;
    // 80CC76E8: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC76ECu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC76EC:
    ctx->pc = 0x80CC76ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC76ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC76EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC76F0:
    ctx->pc = 0x80CC76F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76F0u)) return;
    // 80CC76F0: bl      0x8045F220
    {
            ctx->lr = 0x80CC76F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC76F4:
    ctx->pc = 0x80CC76F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC76F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC76F4: lwz     r31, 32(r3)
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
label_80CC76F8:
    ctx->pc = 0x80CC76F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76F8u)) return;
    // 80CC76F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC76FC:
    ctx->pc = 0x80CC76FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC76FCu)) return;
    // 80CC76FC: bl      0x8045F220
    {
            ctx->lr = 0x80CC7700u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7700:
    ctx->pc = 0x80CC7700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7700: lwz     r3, 32(r3)
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
label_80CC7704:
    ctx->pc = 0x80CC7704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7704: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC7704u)) return;
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
label_80CC7708:
    ctx->pc = 0x80CC7708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7708u)) return;
    // 80CC7708: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC770C:
    ctx->pc = 0x80CC770Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC770Cu)) return;
    // 80CC770C: addi    r3, r3, 12628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12628);

label_80CC7710:
    ctx->pc = 0x80CC7710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7710: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC7710u)) return;
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
label_80CC7714:
    ctx->pc = 0x80CC7714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7714u)) return;
    // 80CC7714: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC7714u)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_80CC7718:
    ctx->pc = 0x80CC7718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7718u)) return;
    // 80CC7718: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC771C:
    ctx->pc = 0x80CC771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC771Cu)) return;
    // 80CC771C: bl      0x8045F220
    {
            ctx->lr = 0x80CC7720u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7720:
    ctx->pc = 0x80CC7720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7720: lwz     r4, 32(r3)
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
label_80CC7724:
    ctx->pc = 0x80CC7724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7724u)) return;
    // 80CC7724: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7728:
    ctx->pc = 0x80CC7728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7728u)) return;
    // 80CC7728: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC772C:
    ctx->pc = 0x80CC772Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC772Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC772C: lwz     r3, 0(r3)
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
label_80CC7730:
    ctx->pc = 0x80CC7730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7730: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC7730u)) return;
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
label_80CC7734:
    ctx->pc = 0x80CC7734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7734u)) return;
    // 80CC7734: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80CC7734u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80CC7738:
    ctx->pc = 0x80CC7738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7738: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CC7738u)) return;
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
label_80CC773C:
    ctx->pc = 0x80CC773Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC773Cu)) return;
    // 80CC773C: bl      0x8045EF2C
    {
            ctx->lr = 0x80CC7740u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CC7740:
    ctx->pc = 0x80CC7740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7740: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7744:
    ctx->pc = 0x80CC7744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7744u)) return;
    // 80CC7744: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC7748:
    ctx->pc = 0x80CC7748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7748: lwz     r3, 0(r3)
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
label_80CC774C:
    ctx->pc = 0x80CC774Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC774Cu)) return;
    // 80CC774C: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC7750u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC7750:
    ctx->pc = 0x80CC7750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80CC7750: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7754:
    ctx->pc = 0x80CC7754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7754u)) return;
    // 80CC7754: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC7758:
    ctx->pc = 0x80CC7758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC7758: lwz     r3, 0(r3)
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
label_80CC775C:
    ctx->pc = 0x80CC775Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC775Cu)) return;
    // 80CC775C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC7760:
    ctx->pc = 0x80CC7760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7760u)) return;
    // 80CC7760: addi    r4, r4, 3156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3156);

label_80CC7764:
    ctx->pc = 0x80CC7764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7764u)) return;
    // 80CC7764: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC7768:
    ctx->pc = 0x80CC7768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7768u)) return;
    // 80CC7768: addi    r5, r5, -11940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11940);

label_80CC776C:
    ctx->pc = 0x80CC776Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC776Cu)) return;
    // 80CC776C: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC7770:
    ctx->pc = 0x80CC7770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7770u)) return;
    // 80CC7770: addi    r6, r6, 12676
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12676);

label_80CC7774:
    ctx->pc = 0x80CC7774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7774: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC7774u)) return;
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
label_80CC7778:
    ctx->pc = 0x80CC7778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7778u)) return;
    // 80CC7778: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC777C:
    ctx->pc = 0x80CC777Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC777Cu)) return;
    // 80CC777C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC7780:
    ctx->pc = 0x80CC7780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7780u)) return;
    // 80CC7780: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC7784u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC7784:
    ctx->pc = 0x80CC7784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7784: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80CC7788:
    ctx->pc = 0x80CC7788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7788u)) return;
    // 80CC7788: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC778Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC778C:
    ctx->pc = 0x80CC778Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC778Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC778C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7790:
    ctx->pc = 0x80CC7790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7790u)) return;
    // 80CC7790: bl      0x8045F220
    {
            ctx->lr = 0x80CC7794u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC7794:
    ctx->pc = 0x80CC7794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7794: lwz     r3, 32(r3)
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
label_80CC7798:
    ctx->pc = 0x80CC7798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7798: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC7798u)) return;
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
label_80CC779C:
    ctx->pc = 0x80CC779Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC779Cu)) return;
    // 80CC779C: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC77A0:
    ctx->pc = 0x80CC77A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77A0u)) return;
    // 80CC77A0: addi    r3, r3, 12688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12688);

label_80CC77A4:
    ctx->pc = 0x80CC77A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC77A4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC77A4u)) return;
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
label_80CC77A8:
    ctx->pc = 0x80CC77A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77A8u)) return;
    // 80CC77A8: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC77A8u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80CC77AC:
    ctx->pc = 0x80CC77ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77ACu)) return;
    // 80CC77AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC77B0:
    ctx->pc = 0x80CC77B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77B0u)) return;
    // 80CC77B0: bl      0x8045F220
    {
            ctx->lr = 0x80CC77B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC77B4:
    ctx->pc = 0x80CC77B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC77B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC77B4: lwz     r3, 32(r3)
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
label_80CC77B8:
    ctx->pc = 0x80CC77B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC77B8: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC77B8u)) return;
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
label_80CC77BC:
    ctx->pc = 0x80CC77BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77BCu)) return;
    // 80CC77BC: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC77C0:
    ctx->pc = 0x80CC77C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77C0u)) return;
    // 80CC77C0: addi    r3, r3, 12684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12684);

label_80CC77C4:
    ctx->pc = 0x80CC77C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC77C4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC77C4u)) return;
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
label_80CC77C8:
    ctx->pc = 0x80CC77C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77C8u)) return;
    // 80CC77C8: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC77C8u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80CC77CC:
    ctx->pc = 0x80CC77CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77CCu)) return;
    // 80CC77CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC77D0:
    ctx->pc = 0x80CC77D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77D0u)) return;
    // 80CC77D0: bl      0x8045F220
    {
            ctx->lr = 0x80CC77D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC77D4:
    ctx->pc = 0x80CC77D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC77D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC77D4: lwz     r3, 32(r3)
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
label_80CC77D8:
    ctx->pc = 0x80CC77D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC77D8: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC77D8u)) return;
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
label_80CC77DC:
    ctx->pc = 0x80CC77DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77DCu)) return;
    // 80CC77DC: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC77E0:
    ctx->pc = 0x80CC77E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77E0u)) return;
    // 80CC77E0: addi    r3, r3, 12680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12680);

label_80CC77E4:
    ctx->pc = 0x80CC77E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC77E4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC77E4u)) return;
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
label_80CC77E8:
    ctx->pc = 0x80CC77E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77E8u)) return;
    // 80CC77E8: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC77E8u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80CC77EC:
    ctx->pc = 0x80CC77ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77ECu)) return;
    // 80CC77EC: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80CC77ECu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80CC77F0:
    ctx->pc = 0x80CC77F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77F0u)) return;
    // 80CC77F0: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80CC77F0u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80CC77F4:
    ctx->pc = 0x80CC77F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77F4u)) return;
    // 80CC77F4: bl      0x80CC8688
    {
            ctx->lr = 0x80CC77F8u;
            goto label_80CC8688;
    }

label_80CC77F8:
    ctx->pc = 0x80CC77F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC77F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC77F8: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC77FC:
    ctx->pc = 0x80CC77FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC77FCu)) return;
    // 80CC77FC: addi    r4, r4, 9156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9156);

label_80CC7800:
    ctx->pc = 0x80CC7800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7800: stw     r3, 0(r4)
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
label_80CC7804:
    ctx->pc = 0x80CC7804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7804u)) return;
    // 80CC7804: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC7808:
    ctx->pc = 0x80CC7808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7808u)) return;
    // 80CC7808: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC780Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC780C:
    ctx->pc = 0x80CC780Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC780Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC780C: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7810:
    ctx->pc = 0x80CC7810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7810u)) return;
    // 80CC7810: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC7814:
    ctx->pc = 0x80CC7814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7814: lwz     r3, 0(r3)
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
label_80CC7818:
    ctx->pc = 0x80CC7818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7818u)) return;
    // 80CC7818: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC781C:
    ctx->pc = 0x80CC781Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC781Cu)) return;
    // 80CC781C: bl      0x8045EE90
    {
            ctx->lr = 0x80CC7820u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80CC7820:
    ctx->pc = 0x80CC7820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7820: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7824:
    ctx->pc = 0x80CC7824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7824u)) return;
    // 80CC7824: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC7828:
    ctx->pc = 0x80CC7828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7828: lwz     r3, 0(r3)
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
label_80CC782C:
    ctx->pc = 0x80CC782Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC782Cu)) return;
    // 80CC782C: bl      0x8045EAE8
    {
            ctx->lr = 0x80CC7830u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80CC7830:
    ctx->pc = 0x80CC7830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC7830: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7834:
    ctx->pc = 0x80CC7834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7834u)) return;
    // 80CC7834: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC7838:
    ctx->pc = 0x80CC7838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7838: lwz     r3, 0(r3)
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
label_80CC783C:
    ctx->pc = 0x80CC783Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC783Cu)) return;
    // 80CC783C: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC7840:
    ctx->pc = 0x80CC7840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7840u)) return;
    // 80CC7840: addi    r4, r4, 23360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23360);

label_80CC7844:
    ctx->pc = 0x80CC7844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7844u)) return;
    // 80CC7844: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC7848:
    ctx->pc = 0x80CC7848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7848u)) return;
    // 80CC7848: addi    r5, r5, 12692
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12692);

label_80CC784C:
    ctx->pc = 0x80CC784Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC784Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC784C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC784Cu)) return;
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
label_80CC7850:
    ctx->pc = 0x80CC7850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7850u)) return;
    // 80CC7850: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80CC7854:
    ctx->pc = 0x80CC7854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7854u)) return;
    // 80CC7854: bl      0x8045EB14
    {
            ctx->lr = 0x80CC7858u;
            ctx->pc = 0x8045EB14u;
            return;
    }

label_80CC7858:
    ctx->pc = 0x80CC7858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7858: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC785C:
    ctx->pc = 0x80CC785Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC785Cu)) return;
    // 80CC785C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC7860u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC7860:
    ctx->pc = 0x80CC7860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7860: li      r3, 1348
    ctx->gpr[3] = (u32)(s32)(1348);

label_80CC7864:
    ctx->pc = 0x80CC7864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7864u)) return;
    // 80CC7864: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC7868u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC7868:
    ctx->pc = 0x80CC7868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC7868: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC786C:
    ctx->pc = 0x80CC786Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC786Cu)) return;
    // 80CC786C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC7870:
    ctx->pc = 0x80CC7870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7870u)) return;
    // 80CC7870: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC7874:
    ctx->pc = 0x80CC7874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7874: lwz     r0, 0(r4)
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
label_80CC7878:
    ctx->pc = 0x80CC7878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7878u)) return;
    // 80CC7878: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC787C:
    ctx->pc = 0x80CC787Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC787Cu)) return;
    // 80CC787C: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC7880:
    ctx->pc = 0x80CC7880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7880u)) return;
    // 80CC7880: addi    r4, r4, 23800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23800);

label_80CC7884:
    ctx->pc = 0x80CC7884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7884: lwzx    r4, r4, r0
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
label_80CC7888:
    ctx->pc = 0x80CC7888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7888: lwz     r4, 8(r4)
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
label_80CC788C:
    ctx->pc = 0x80CC788Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC788Cu)) return;
    // 80CC788C: bl      0x8045F608
    {
            ctx->lr = 0x80CC7890u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC7890:
    ctx->pc = 0x80CC7890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7890: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC7894:
    ctx->pc = 0x80CC7894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7894u)) return;
    // 80CC7894: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC7898u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC7898:
    ctx->pc = 0x80CC7898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7898: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC789C:
    ctx->pc = 0x80CC789Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC789Cu)) return;
    // 80CC789C: bl      0x8045F220
    {
            ctx->lr = 0x80CC78A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC78A0:
    ctx->pc = 0x80CC78A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC78A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC78A0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC78A4:
    ctx->pc = 0x80CC78A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78A4u)) return;
    // 80CC78A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC78A8:
    ctx->pc = 0x80CC78A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78A8u)) return;
    // 80CC78A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC78AC:
    ctx->pc = 0x80CC78ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78ACu)) return;
    // 80CC78AC: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC78B0:
    ctx->pc = 0x80CC78B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78B0u)) return;
    // 80CC78B0: addi    r6, r6, 12640
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12640);

label_80CC78B4:
    ctx->pc = 0x80CC78B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC78B4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC78B4u)) return;
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
label_80CC78B8:
    ctx->pc = 0x80CC78B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78B8u)) return;
    // 80CC78B8: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC78BC:
    ctx->pc = 0x80CC78BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78BCu)) return;
    // 80CC78BC: addi    r6, r6, 12648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12648);

label_80CC78C0:
    ctx->pc = 0x80CC78C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC78C0: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC78C0u)) return;
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
label_80CC78C4:
    ctx->pc = 0x80CC78C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78C4u)) return;
    // 80CC78C4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC78C4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80CC78C8:
    ctx->pc = 0x80CC78C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78C8u)) return;
    // 80CC78C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC78CC:
    ctx->pc = 0x80CC78CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78CCu)) return;
    // 80CC78CC: bl      0x8045C3C0
    {
            ctx->lr = 0x80CC78D0u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80CC78D0:
    ctx->pc = 0x80CC78D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC78D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC78D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC78D4:
    ctx->pc = 0x80CC78D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78D4u)) return;
    // 80CC78D4: bl      0x8045F220
    {
            ctx->lr = 0x80CC78D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC78D8:
    ctx->pc = 0x80CC78D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC78D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 80CC78D8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC78DC:
    ctx->pc = 0x80CC78DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78DCu)) return;
    // 80CC78DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC78E0:
    ctx->pc = 0x80CC78E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CC78E0: stw     r0, 8(r1)
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
label_80CC78E4:
    ctx->pc = 0x80CC78E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78E4u)) return;
    // 80CC78E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC78E8:
    ctx->pc = 0x80CC78E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78E8u)) return;
    // 80CC78E8: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CC78EC:
    ctx->pc = 0x80CC78ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78ECu)) return;
    // 80CC78EC: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC78F0:
    ctx->pc = 0x80CC78F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78F0u)) return;
    // 80CC78F0: addi    r6, r6, 12648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12648);

label_80CC78F4:
    ctx->pc = 0x80CC78F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC78F4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC78F4u)) return;
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
label_80CC78F8:
    ctx->pc = 0x80CC78F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78F8u)) return;
    // 80CC78F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC78FC:
    ctx->pc = 0x80CC78FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC78FCu)) return;
    // 80CC78FC: li      r7, -27306
    ctx->gpr[7] = (u32)(s32)(-27306);

label_80CC7900:
    ctx->pc = 0x80CC7900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7900u)) return;
    // 80CC7900: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80CC7904:
    ctx->pc = 0x80CC7904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7904u)) return;
    // 80CC7904: lis     r9, -27378
    ctx->gpr[9] = ((u32)(s32)(-27378) << 16);

label_80CC7908:
    ctx->pc = 0x80CC7908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7908u)) return;
    // 80CC7908: addi    r9, r9, 12696
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(12696);

label_80CC790C:
    ctx->pc = 0x80CC790Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC790Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC790C: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80CC790Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
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
label_80CC7910:
    ctx->pc = 0x80CC7910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7910u)) return;
    // 80CC7910: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80CC7914:
    ctx->pc = 0x80CC7914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7914u)) return;
    // 80CC7914: li      r10, -27306
    ctx->gpr[10] = (u32)(s32)(-27306);

label_80CC7918:
    ctx->pc = 0x80CC7918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7918u)) return;
    // 80CC7918: lis     r11, -27378
    ctx->gpr[11] = ((u32)(s32)(-27378) << 16);

label_80CC791C:
    ctx->pc = 0x80CC791Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC791Cu)) return;
    // 80CC791C: addi    r11, r11, 12700
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(12700);

label_80CC7920:
    ctx->pc = 0x80CC7920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7920: lfs     f3, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x80CC7920u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
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
label_80CC7924:
    ctx->pc = 0x80CC7924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7924u)) return;
    // 80CC7924: bl      0x8045C260
    {
            ctx->lr = 0x80CC7928u;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80CC7928:
    ctx->pc = 0x80CC7928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7928: li      r3, 1349
    ctx->gpr[3] = (u32)(s32)(1349);

label_80CC792C:
    ctx->pc = 0x80CC792Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC792Cu)) return;
    // 80CC792C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC7930u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC7930:
    ctx->pc = 0x80CC7930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC7930: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7934:
    ctx->pc = 0x80CC7934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7934u)) return;
    // 80CC7934: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC7938:
    ctx->pc = 0x80CC7938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7938u)) return;
    // 80CC7938: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC793C:
    ctx->pc = 0x80CC793Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC793Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC793C: lwz     r0, 0(r4)
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
label_80CC7940:
    ctx->pc = 0x80CC7940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7940u)) return;
    // 80CC7940: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC7944:
    ctx->pc = 0x80CC7944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7944u)) return;
    // 80CC7944: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC7948:
    ctx->pc = 0x80CC7948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7948u)) return;
    // 80CC7948: addi    r4, r4, 23800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23800);

label_80CC794C:
    ctx->pc = 0x80CC794Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC794Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC794C: lwzx    r4, r4, r0
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
label_80CC7950:
    ctx->pc = 0x80CC7950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7950: lwz     r4, 12(r4)
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
label_80CC7954:
    ctx->pc = 0x80CC7954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7954u)) return;
    // 80CC7954: bl      0x8045F608
    {
            ctx->lr = 0x80CC7958u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC7958:
    ctx->pc = 0x80CC7958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7958: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC795C:
    ctx->pc = 0x80CC795Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC795Cu)) return;
    // 80CC795C: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80CC7960:
    ctx->pc = 0x80CC7960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7960u)) return;
    // 80CC7960: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80CC7964:
    ctx->pc = 0x80CC7964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7964u)) return;
    // 80CC7964: bl      0x80CC7E60
    {
            ctx->lr = 0x80CC7968u;
            goto label_80CC7E60;
    }

label_80CC7968:
    ctx->pc = 0x80CC7968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7968: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC796C:
    ctx->pc = 0x80CC796Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC796Cu)) return;
    // 80CC796C: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80CC7970:
    ctx->pc = 0x80CC7970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7970u)) return;
    // 80CC7970: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80CC7974:
    ctx->pc = 0x80CC7974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7974u)) return;
    // 80CC7974: bl      0x80CC7F3C
    {
            ctx->lr = 0x80CC7978u;
            goto label_80CC7F3C;
    }

label_80CC7978:
    ctx->pc = 0x80CC7978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7978: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CC797C:
    ctx->pc = 0x80CC797Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC797Cu)) return;
    // 80CC797C: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80CC7980:
    ctx->pc = 0x80CC7980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7980u)) return;
    // 80CC7980: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CC7984:
    ctx->pc = 0x80CC7984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7984u)) return;
    // 80CC7984: bl      0x80CC81E8
    {
            ctx->lr = 0x80CC7988u;
            goto label_80CC81E8;
    }

label_80CC7988:
    ctx->pc = 0x80CC7988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7988: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC798C:
    ctx->pc = 0x80CC798Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC798Cu)) return;
    // 80CC798C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC7990u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC7990:
    ctx->pc = 0x80CC7990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7990: bl      0x8045F32C
    {
            ctx->lr = 0x80CC7994u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC7994:
    ctx->pc = 0x80CC7994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7994: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7998:
    ctx->pc = 0x80CC7998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7998u)) return;
    // 80CC7998: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC799C:
    ctx->pc = 0x80CC799Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC799Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC799C: lwz     r3, 0(r3)
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
label_80CC79A0:
    ctx->pc = 0x80CC79A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79A0u)) return;
    // 80CC79A0: bl      0x8045EAE8
    {
            ctx->lr = 0x80CC79A4u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80CC79A4:
    ctx->pc = 0x80CC79A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC79A4: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC79A8:
    ctx->pc = 0x80CC79A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79A8u)) return;
    // 80CC79A8: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC79AC:
    ctx->pc = 0x80CC79ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC79AC: lwz     r3, 0(r3)
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
label_80CC79B0:
    ctx->pc = 0x80CC79B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79B0u)) return;
    // 80CC79B0: cmplwi  r3, 0x0000
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

label_80CC79B4:
    ctx->pc = 0x80CC79B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79B4u)) return;
    // 80CC79B4: bc    12, 2, 0x80CC79CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC79CC;
        }
    }

label_80CC79B8:
    ctx->pc = 0x80CC79B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC79B8: bl      0x8050F9E0
    {
            ctx->lr = 0x80CC79BCu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CC79BC:
    ctx->pc = 0x80CC79BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC79BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC79C0:
    ctx->pc = 0x80CC79C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79C0u)) return;
    // 80CC79C0: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC79C4:
    ctx->pc = 0x80CC79C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79C4u)) return;
    // 80CC79C4: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC79C8:
    ctx->pc = 0x80CC79C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC79C8: stw     r0, 0(r3)
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
label_80CC79CC:
    ctx->pc = 0x80CC79CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC79CC: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC79D0:
    ctx->pc = 0x80CC79D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79D0u)) return;
    // 80CC79D0: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC79D4:
    ctx->pc = 0x80CC79D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79D4u)) return;
    // 80CC79D4: bl      0x8045F070
    {
            ctx->lr = 0x80CC79D8u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80CC79D8:
    ctx->pc = 0x80CC79D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC79D8: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80CC79DC:
    ctx->pc = 0x80CC79DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79DCu)) return;
    // 80CC79DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC79E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC79E0:
    ctx->pc = 0x80CC79E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC79E0: bl      0x8045C3AC
    {
            ctx->lr = 0x80CC79E4u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80CC79E4:
    ctx->pc = 0x80CC79E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC79E4: bl      0x8045C4A4
    {
            ctx->lr = 0x80CC79E8u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80CC79E8:
    ctx->pc = 0x80CC79E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC79E8: b       0x80CC7A60
    {
            goto label_80CC7A60;
    }

label_80CC79EC:
    ctx->pc = 0x80CC79ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC79EC: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC79F0:
    ctx->pc = 0x80CC79F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79F0u)) return;
    // 80CC79F0: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC79F4:
    ctx->pc = 0x80CC79F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC79F4: lwz     r3, 0(r3)
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
label_80CC79F8:
    ctx->pc = 0x80CC79F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC79F8u)) return;
    // 80CC79F8: bl      0x8045EAE8
    {
            ctx->lr = 0x80CC79FCu;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80CC79FC:
    ctx->pc = 0x80CC79FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC79FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC79FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7A00:
    ctx->pc = 0x80CC7A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A00u)) return;
    // 80CC7A00: bl      0x80CC7ED0
    {
            ctx->lr = 0x80CC7A04u;
            goto label_80CC7ED0;
    }

label_80CC7A04:
    ctx->pc = 0x80CC7A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A04: bl      0x80CC7DB4
    {
            ctx->lr = 0x80CC7A08u;
            goto label_80CC7DB4;
    }

label_80CC7A08:
    ctx->pc = 0x80CC7A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7A08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC7A0C:
    ctx->pc = 0x80CC7A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A0Cu)) return;
    // 80CC7A0C: bl      0x8045EC10
    {
            ctx->lr = 0x80CC7A10u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CC7A10:
    ctx->pc = 0x80CC7A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A10: bl      0x8045F32C
    {
            ctx->lr = 0x80CC7A14u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC7A14:
    ctx->pc = 0x80CC7A14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A14: bl      0x8045C3AC
    {
            ctx->lr = 0x80CC7A18u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80CC7A18:
    ctx->pc = 0x80CC7A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A18: bl      0x8045C4A4
    {
            ctx->lr = 0x80CC7A1Cu;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80CC7A1C:
    ctx->pc = 0x80CC7A1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A1C: bl      0x8045BF80
    {
            ctx->lr = 0x80CC7A20u;
            ctx->pc = 0x8045BF80u;
            return;
    }

label_80CC7A20:
    ctx->pc = 0x80CC7A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC7A20: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7A24:
    ctx->pc = 0x80CC7A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A24u)) return;
    // 80CC7A24: addi    r3, r3, 9152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9152);

label_80CC7A28:
    ctx->pc = 0x80CC7A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A28u)) return;
    // 80CC7A28: bl      0x8045F070
    {
            ctx->lr = 0x80CC7A2Cu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80CC7A2C:
    ctx->pc = 0x80CC7A2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC7A2C: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7A30:
    ctx->pc = 0x80CC7A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A30u)) return;
    // 80CC7A30: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC7A34:
    ctx->pc = 0x80CC7A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7A34: lwz     r3, 0(r3)
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
label_80CC7A38:
    ctx->pc = 0x80CC7A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A38u)) return;
    // 80CC7A38: cmplwi  r3, 0x0000
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

label_80CC7A3C:
    ctx->pc = 0x80CC7A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A3Cu)) return;
    // 80CC7A3C: bc    12, 2, 0x80CC7A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7A54;
        }
    }

label_80CC7A40:
    ctx->pc = 0x80CC7A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A40: bl      0x8050F9E0
    {
            ctx->lr = 0x80CC7A44u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CC7A44:
    ctx->pc = 0x80CC7A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7A44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC7A48:
    ctx->pc = 0x80CC7A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A48u)) return;
    // 80CC7A48: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7A4C:
    ctx->pc = 0x80CC7A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A4Cu)) return;
    // 80CC7A4C: addi    r3, r3, 9156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9156);

label_80CC7A50:
    ctx->pc = 0x80CC7A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7A50: stw     r0, 0(r3)
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
label_80CC7A54:
    ctx->pc = 0x80CC7A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A54: bl      0x80CC82F4
    {
            ctx->lr = 0x80CC7A58u;
            goto label_80CC82F4;
    }

label_80CC7A58:
    ctx->pc = 0x80CC7A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A58: bl      0x8045DE34
    {
            ctx->lr = 0x80CC7A5Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80CC7A5C:
    ctx->pc = 0x80CC7A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7A5C: bl      0x80460A80
    {
            ctx->lr = 0x80CC7A60u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80CC7A60:
    ctx->pc = 0x80CC7A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7A60: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC7A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CC7A60u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7A64:
    ctx->pc = 0x80CC7A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7A64: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC7A64u)) return;
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
label_80CC7A68:
    ctx->pc = 0x80CC7A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7A68: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC7A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CC7A68u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7A6C:
    ctx->pc = 0x80CC7A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7A6C: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC7A6Cu)) return;
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
label_80CC7A70:
    ctx->pc = 0x80CC7A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A70u)) return;
    // 80CC7A70: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80CC7A74:
    ctx->pc = 0x80CC7A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A74u)) return;
    // 80CC7A74: bl      0x80006E20
    {
            ctx->lr = 0x80CC7A78u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80CC7A78:
    ctx->pc = 0x80CC7A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7A78: lwz     r0, 84(r1)
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
label_80CC7A7C:
    ctx->pc = 0x80CC7A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7A7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7A80:
    ctx->pc = 0x80CC7A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A80u)) return;
    // 80CC7A80: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80CC7A84:
    ctx->pc = 0x80CC7A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A84u)) return;
    // 80CC7A84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7A88:
    ctx->pc = 0x80CC7A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7A88: stwu     r1, -16(r1)
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
label_80CC7A8C:
    ctx->pc = 0x80CC7A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7A8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7A90:
    ctx->pc = 0x80CC7A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7A90: stw     r0, 20(r1)
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
label_80CC7A94:
    ctx->pc = 0x80CC7A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7A94: lwz     r3, 32(r3)
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
label_80CC7A98:
    ctx->pc = 0x80CC7A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7A98: lwz     r3, 16(r3)
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
label_80CC7A9C:
    ctx->pc = 0x80CC7A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7A9Cu)) return;
    // 80CC7A9C: bl      0x80509CF0
    {
            ctx->lr = 0x80CC7AA0u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80CC7AA0:
    ctx->pc = 0x80CC7AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7AA0: lwz     r0, 20(r1)
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
label_80CC7AA4:
    ctx->pc = 0x80CC7AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7AA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7AA8:
    ctx->pc = 0x80CC7AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AA8u)) return;
    // 80CC7AA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7AAC:
    ctx->pc = 0x80CC7AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AACu)) return;
    // 80CC7AAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7AB0:
    ctx->pc = 0x80CC7AB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7AB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC7AB0: stwu     r1, -32(r1)
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
label_80CC7AB4:
    ctx->pc = 0x80CC7AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC7AB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7AB8:
    ctx->pc = 0x80CC7AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7AB8: stw     r0, 36(r1)
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
label_80CC7ABC:
    ctx->pc = 0x80CC7ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7ABC: stw     r31, 28(r1)
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
label_80CC7AC0:
    ctx->pc = 0x80CC7AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7AC0: stw     r30, 24(r1)
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
label_80CC7AC4:
    ctx->pc = 0x80CC7AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7AC4: stw     r29, 20(r1)
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
label_80CC7AC8:
    ctx->pc = 0x80CC7AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7AC8: lwz     r31, 32(r3)
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
label_80CC7ACC:
    ctx->pc = 0x80CC7ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7ACC: lwz     r30, 16(r31)
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
label_80CC7AD0:
    ctx->pc = 0x80CC7AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7AD0: lwz     r5, 28(r31)
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
label_80CC7AD4:
    ctx->pc = 0x80CC7AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AD4u)) return;
    // 80CC7AD4: cmpwi   r5, 0
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

label_80CC7AD8:
    ctx->pc = 0x80CC7AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AD8u)) return;
    // 80CC7AD8: bc    4, 1, 0x80CC7B10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7B10;
        }
    }

label_80CC7ADC:
    ctx->pc = 0x80CC7ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CC7ADC: lwz     r4, 24(r31)
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
label_80CC7AE0:
    ctx->pc = 0x80CC7AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AE0u)) return;
    // 80CC7AE0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CC7AE4:
    ctx->pc = 0x80CC7AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CC7AE4: lwz     r0, 20(r31)
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
label_80CC7AE8:
    ctx->pc = 0x80CC7AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CC7AE8u)) return;
    // 80CC7AE8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CC7AEC:
    ctx->pc = 0x80CC7AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AECu)) return;
    // 80CC7AEC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CC7AF0:
    ctx->pc = 0x80CC7AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CC7AF0u)) return;
    // 80CC7AF0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CC7AF4:
    ctx->pc = 0x80CC7AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AF4u)) return;
    // 80CC7AF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CC7AF8:
    ctx->pc = 0x80CC7AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AF8u)) return;
    // 80CC7AF8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CC7AFC:
    ctx->pc = 0x80CC7AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7AFCu)) return;
    // 80CC7AFC: bl      0x80509C74
    {
            ctx->lr = 0x80CC7B00u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CC7B00:
    ctx->pc = 0x80CC7B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7B00: stw     r29, 20(r31)
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
label_80CC7B04:
    ctx->pc = 0x80CC7B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7B04: lwz     r3, 28(r31)
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
label_80CC7B08:
    ctx->pc = 0x80CC7B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B08u)) return;
    // 80CC7B08: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CC7B0C:
    ctx->pc = 0x80CC7B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7B0C: stw     r0, 28(r31)
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
label_80CC7B10:
    ctx->pc = 0x80CC7B10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7B10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7B10: lwz     r5, 40(r31)
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
label_80CC7B14:
    ctx->pc = 0x80CC7B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B14u)) return;
    // 80CC7B14: cmpwi   r5, 0
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

label_80CC7B18:
    ctx->pc = 0x80CC7B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B18u)) return;
    // 80CC7B18: bc    4, 1, 0x80CC7B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7B50;
        }
    }

label_80CC7B1C:
    ctx->pc = 0x80CC7B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CC7B1C: lwz     r4, 36(r31)
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
label_80CC7B20:
    ctx->pc = 0x80CC7B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B20u)) return;
    // 80CC7B20: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CC7B24:
    ctx->pc = 0x80CC7B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CC7B24: lwz     r0, 32(r31)
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
label_80CC7B28:
    ctx->pc = 0x80CC7B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CC7B28u)) return;
    // 80CC7B28: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CC7B2C:
    ctx->pc = 0x80CC7B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B2Cu)) return;
    // 80CC7B2C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CC7B30:
    ctx->pc = 0x80CC7B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CC7B30u)) return;
    // 80CC7B30: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CC7B34:
    ctx->pc = 0x80CC7B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B34u)) return;
    // 80CC7B34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CC7B38:
    ctx->pc = 0x80CC7B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B38u)) return;
    // 80CC7B38: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CC7B3C:
    ctx->pc = 0x80CC7B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B3Cu)) return;
    // 80CC7B3C: bl      0x80509BF8
    {
            ctx->lr = 0x80CC7B40u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CC7B40:
    ctx->pc = 0x80CC7B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7B40: stw     r29, 32(r31)
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
label_80CC7B44:
    ctx->pc = 0x80CC7B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7B44: lwz     r3, 40(r31)
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
label_80CC7B48:
    ctx->pc = 0x80CC7B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B48u)) return;
    // 80CC7B48: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CC7B4C:
    ctx->pc = 0x80CC7B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7B4C: stw     r0, 40(r31)
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
label_80CC7B50:
    ctx->pc = 0x80CC7B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7B50: lwz     r5, 52(r31)
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
label_80CC7B54:
    ctx->pc = 0x80CC7B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B54u)) return;
    // 80CC7B54: cmpwi   r5, 0
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

label_80CC7B58:
    ctx->pc = 0x80CC7B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B58u)) return;
    // 80CC7B58: bc    4, 1, 0x80CC7B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7B90;
        }
    }

label_80CC7B5C:
    ctx->pc = 0x80CC7B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CC7B5C: lwz     r4, 48(r31)
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
label_80CC7B60:
    ctx->pc = 0x80CC7B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B60u)) return;
    // 80CC7B60: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CC7B64:
    ctx->pc = 0x80CC7B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CC7B64: lwz     r0, 44(r31)
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
label_80CC7B68:
    ctx->pc = 0x80CC7B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CC7B68u)) return;
    // 80CC7B68: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CC7B6C:
    ctx->pc = 0x80CC7B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B6Cu)) return;
    // 80CC7B6C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CC7B70:
    ctx->pc = 0x80CC7B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CC7B70u)) return;
    // 80CC7B70: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CC7B74:
    ctx->pc = 0x80CC7B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B74u)) return;
    // 80CC7B74: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CC7B78:
    ctx->pc = 0x80CC7B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B78u)) return;
    // 80CC7B78: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CC7B7C:
    ctx->pc = 0x80CC7B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B7Cu)) return;
    // 80CC7B7C: bl      0x80509B94
    {
            ctx->lr = 0x80CC7B80u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CC7B80:
    ctx->pc = 0x80CC7B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7B80: stw     r29, 44(r31)
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
label_80CC7B84:
    ctx->pc = 0x80CC7B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7B84: lwz     r3, 52(r31)
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
label_80CC7B88:
    ctx->pc = 0x80CC7B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B88u)) return;
    // 80CC7B88: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CC7B8C:
    ctx->pc = 0x80CC7B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7B8C: stw     r0, 52(r31)
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
label_80CC7B90:
    ctx->pc = 0x80CC7B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7B90: lwz     r31, 28(r1)
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
label_80CC7B94:
    ctx->pc = 0x80CC7B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7B94: lwz     r30, 24(r1)
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
label_80CC7B98:
    ctx->pc = 0x80CC7B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7B98: lwz     r29, 20(r1)
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
label_80CC7B9C:
    ctx->pc = 0x80CC7B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7B9C: lwz     r0, 36(r1)
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
label_80CC7BA0:
    ctx->pc = 0x80CC7BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7BA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7BA4:
    ctx->pc = 0x80CC7BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BA4u)) return;
    // 80CC7BA4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CC7BA8:
    ctx->pc = 0x80CC7BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BA8u)) return;
    // 80CC7BA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7BAC:
    ctx->pc = 0x80CC7BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC7BAC: stwu     r1, -32(r1)
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
label_80CC7BB0:
    ctx->pc = 0x80CC7BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC7BB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7BB4:
    ctx->pc = 0x80CC7BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC7BB4: stw     r0, 36(r1)
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
label_80CC7BB8:
    ctx->pc = 0x80CC7BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7BB8: stw     r31, 28(r1)
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
label_80CC7BBC:
    ctx->pc = 0x80CC7BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7BBC: stw     r30, 24(r1)
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
label_80CC7BC0:
    ctx->pc = 0x80CC7BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7BC0: stw     r29, 20(r1)
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
label_80CC7BC4:
    ctx->pc = 0x80CC7BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BC4u)) return;
    // 80CC7BC4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC7BC8:
    ctx->pc = 0x80CC7BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BC8u)) return;
    // 80CC7BC8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC7BCC:
    ctx->pc = 0x80CC7BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BCCu)) return;
    // 80CC7BCC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC7BD0:
    ctx->pc = 0x80CC7BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BD0u)) return;
    // 80CC7BD0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CC7BD4:
    ctx->pc = 0x80CC7BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BD4u)) return;
    // 80CC7BD4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CC7BD8:
    ctx->pc = 0x80CC7BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BD8u)) return;
    // 80CC7BD8: bl      0x8050FD60
    {
            ctx->lr = 0x80CC7BDCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CC7BDC:
    ctx->pc = 0x80CC7BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC7BDC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC7BE0:
    ctx->pc = 0x80CC7BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BE0u)) return;
    // 80CC7BE0: cmplwi  r31, 0x0000
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

label_80CC7BE4:
    ctx->pc = 0x80CC7BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BE4u)) return;
    // 80CC7BE4: bc    12, 2, 0x80CC7C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7C48;
        }
    }

label_80CC7BE8:
    ctx->pc = 0x80CC7BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC7BE8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CC7BEC:
    ctx->pc = 0x80CC7BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BECu)) return;
    // 80CC7BEC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC7BF0:
    ctx->pc = 0x80CC7BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BF0u)) return;
    // 80CC7BF0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CC7BF4:
    ctx->pc = 0x80CC7BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BF4u)) return;
    // 80CC7BF4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC7BF8:
    ctx->pc = 0x80CC7BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BF8u)) return;
    // 80CC7BF8: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CC7BFC:
    ctx->pc = 0x80CC7BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7BFCu)) return;
    // 80CC7BFC: bl      0x8050A0D4
    {
            ctx->lr = 0x80CC7C00u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80CC7C00:
    ctx->pc = 0x80CC7C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80CC7C00: lis     r3, -32564
    ctx->gpr[3] = ((u32)(s32)(-32564) << 16);

label_80CC7C04:
    ctx->pc = 0x80CC7C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C04u)) return;
    // 80CC7C04: addi    r0, r3, 31408
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31408);

label_80CC7C08:
    ctx->pc = 0x80CC7C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CC7C08: stw     r0, 16(r31)
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
label_80CC7C0C:
    ctx->pc = 0x80CC7C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C0Cu)) return;
    // 80CC7C0C: lis     r3, -32564
    ctx->gpr[3] = ((u32)(s32)(-32564) << 16);

label_80CC7C10:
    ctx->pc = 0x80CC7C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C10u)) return;
    // 80CC7C10: addi    r0, r3, 31368
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31368);

label_80CC7C14:
    ctx->pc = 0x80CC7C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC7C14: stw     r0, 24(r31)
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
label_80CC7C18:
    ctx->pc = 0x80CC7C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC7C18: lwz     r3, 32(r31)
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
label_80CC7C1C:
    ctx->pc = 0x80CC7C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC7C1C: stw     r31, 16(r3)
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
label_80CC7C20:
    ctx->pc = 0x80CC7C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C20u)) return;
    // 80CC7C20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC7C24:
    ctx->pc = 0x80CC7C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7C24: stw     r0, 20(r3)
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
label_80CC7C28:
    ctx->pc = 0x80CC7C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7C28: stw     r0, 24(r3)
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
label_80CC7C2C:
    ctx->pc = 0x80CC7C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7C2C: stw     r0, 28(r3)
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
label_80CC7C30:
    ctx->pc = 0x80CC7C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7C30: stw     r0, 32(r3)
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
label_80CC7C34:
    ctx->pc = 0x80CC7C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7C34: stw     r0, 36(r3)
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
label_80CC7C38:
    ctx->pc = 0x80CC7C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7C38: stw     r0, 40(r3)
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
label_80CC7C3C:
    ctx->pc = 0x80CC7C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7C3C: stw     r0, 44(r3)
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
label_80CC7C40:
    ctx->pc = 0x80CC7C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7C40: stw     r0, 48(r3)
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
label_80CC7C44:
    ctx->pc = 0x80CC7C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7C44: stw     r0, 52(r3)
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
label_80CC7C48:
    ctx->pc = 0x80CC7C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CC7C48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC7C4C:
    ctx->pc = 0x80CC7C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7C4C: lwz     r31, 28(r1)
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
label_80CC7C50:
    ctx->pc = 0x80CC7C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7C50: lwz     r30, 24(r1)
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
label_80CC7C54:
    ctx->pc = 0x80CC7C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7C54: lwz     r29, 20(r1)
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
label_80CC7C58:
    ctx->pc = 0x80CC7C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7C58: lwz     r0, 36(r1)
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
label_80CC7C5C:
    ctx->pc = 0x80CC7C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7C5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7C60:
    ctx->pc = 0x80CC7C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C60u)) return;
    // 80CC7C60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CC7C64:
    ctx->pc = 0x80CC7C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C64u)) return;
    // 80CC7C64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7C68:
    ctx->pc = 0x80CC7C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC7C68: stwu     r1, -16(r1)
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
label_80CC7C6C:
    ctx->pc = 0x80CC7C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC7C6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7C70:
    ctx->pc = 0x80CC7C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7C70: stw     r0, 20(r1)
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
label_80CC7C74:
    ctx->pc = 0x80CC7C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7C74: stw     r31, 12(r1)
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
label_80CC7C78:
    ctx->pc = 0x80CC7C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7C78: stw     r30, 8(r1)
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
label_80CC7C7C:
    ctx->pc = 0x80CC7C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C7Cu)) return;
    // 80CC7C7C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC7C80:
    ctx->pc = 0x80CC7C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7C80: lwz     r31, 32(r3)
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
label_80CC7C84:
    ctx->pc = 0x80CC7C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7C84: stw     r30, 24(r31)
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
label_80CC7C88:
    ctx->pc = 0x80CC7C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7C88: stw     r5, 28(r31)
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
label_80CC7C8C:
    ctx->pc = 0x80CC7C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C8Cu)) return;
    // 80CC7C8C: cmpwi   r5, 0
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

label_80CC7C90:
    ctx->pc = 0x80CC7C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C90u)) return;
    // 80CC7C90: bc    12, 1, 0x80CC7CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7CA0;
        }
    }

label_80CC7C94:
    ctx->pc = 0x80CC7C94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7C94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7C94: lwz     r3, 16(r31)
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
label_80CC7C98:
    ctx->pc = 0x80CC7C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7C98u)) return;
    // 80CC7C98: bl      0x80509C74
    {
            ctx->lr = 0x80CC7C9Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CC7C9C:
    ctx->pc = 0x80CC7C9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7C9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7C9C: stw     r30, 20(r31)
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
label_80CC7CA0:
    ctx->pc = 0x80CC7CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7CA0: lwz     r31, 12(r1)
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
label_80CC7CA4:
    ctx->pc = 0x80CC7CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7CA4: lwz     r30, 8(r1)
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
label_80CC7CA8:
    ctx->pc = 0x80CC7CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7CA8: lwz     r0, 20(r1)
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
label_80CC7CAC:
    ctx->pc = 0x80CC7CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7CAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7CB0:
    ctx->pc = 0x80CC7CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CB0u)) return;
    // 80CC7CB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7CB4:
    ctx->pc = 0x80CC7CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CB4u)) return;
    // 80CC7CB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7CB8:
    ctx->pc = 0x80CC7CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC7CB8: stwu     r1, -16(r1)
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
label_80CC7CBC:
    ctx->pc = 0x80CC7CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC7CBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7CC0:
    ctx->pc = 0x80CC7CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7CC0: stw     r0, 20(r1)
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
label_80CC7CC4:
    ctx->pc = 0x80CC7CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7CC4: stw     r31, 12(r1)
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
label_80CC7CC8:
    ctx->pc = 0x80CC7CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7CC8: stw     r30, 8(r1)
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
label_80CC7CCC:
    ctx->pc = 0x80CC7CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CCCu)) return;
    // 80CC7CCC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC7CD0:
    ctx->pc = 0x80CC7CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7CD0: lwz     r31, 32(r3)
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
label_80CC7CD4:
    ctx->pc = 0x80CC7CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7CD4: stw     r30, 36(r31)
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
label_80CC7CD8:
    ctx->pc = 0x80CC7CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7CD8: stw     r5, 40(r31)
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
label_80CC7CDC:
    ctx->pc = 0x80CC7CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CDCu)) return;
    // 80CC7CDC: cmpwi   r5, 0
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

label_80CC7CE0:
    ctx->pc = 0x80CC7CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CE0u)) return;
    // 80CC7CE0: bc    12, 1, 0x80CC7CF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7CF0;
        }
    }

label_80CC7CE4:
    ctx->pc = 0x80CC7CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7CE4: lwz     r3, 16(r31)
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
label_80CC7CE8:
    ctx->pc = 0x80CC7CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CE8u)) return;
    // 80CC7CE8: bl      0x80509BF8
    {
            ctx->lr = 0x80CC7CECu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CC7CEC:
    ctx->pc = 0x80CC7CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7CEC: stw     r30, 32(r31)
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
label_80CC7CF0:
    ctx->pc = 0x80CC7CF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7CF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7CF0: lwz     r31, 12(r1)
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
label_80CC7CF4:
    ctx->pc = 0x80CC7CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7CF4: lwz     r30, 8(r1)
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
label_80CC7CF8:
    ctx->pc = 0x80CC7CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7CF8: lwz     r0, 20(r1)
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
label_80CC7CFC:
    ctx->pc = 0x80CC7CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7CFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7D00:
    ctx->pc = 0x80CC7D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D00u)) return;
    // 80CC7D00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7D04:
    ctx->pc = 0x80CC7D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D04u)) return;
    // 80CC7D04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7D08:
    ctx->pc = 0x80CC7D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC7D08: stwu     r1, -16(r1)
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
label_80CC7D0C:
    ctx->pc = 0x80CC7D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC7D0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7D10:
    ctx->pc = 0x80CC7D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7D10: stw     r0, 20(r1)
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
label_80CC7D14:
    ctx->pc = 0x80CC7D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7D14: stw     r31, 12(r1)
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
label_80CC7D18:
    ctx->pc = 0x80CC7D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7D18: stw     r30, 8(r1)
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
label_80CC7D1C:
    ctx->pc = 0x80CC7D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D1Cu)) return;
    // 80CC7D1C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC7D20:
    ctx->pc = 0x80CC7D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7D20: lwz     r31, 32(r3)
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
label_80CC7D24:
    ctx->pc = 0x80CC7D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7D24: stw     r30, 48(r31)
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
label_80CC7D28:
    ctx->pc = 0x80CC7D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7D28: stw     r5, 52(r31)
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
label_80CC7D2C:
    ctx->pc = 0x80CC7D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D2Cu)) return;
    // 80CC7D2C: cmpwi   r5, 0
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

label_80CC7D30:
    ctx->pc = 0x80CC7D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D30u)) return;
    // 80CC7D30: bc    12, 1, 0x80CC7D40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7D40;
        }
    }

label_80CC7D34:
    ctx->pc = 0x80CC7D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7D34: lwz     r3, 16(r31)
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
label_80CC7D38:
    ctx->pc = 0x80CC7D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D38u)) return;
    // 80CC7D38: bl      0x80509B94
    {
            ctx->lr = 0x80CC7D3Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CC7D3C:
    ctx->pc = 0x80CC7D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7D3C: stw     r30, 44(r31)
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
label_80CC7D40:
    ctx->pc = 0x80CC7D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7D40: lwz     r31, 12(r1)
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
label_80CC7D44:
    ctx->pc = 0x80CC7D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7D44: lwz     r30, 8(r1)
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
label_80CC7D48:
    ctx->pc = 0x80CC7D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7D48: lwz     r0, 20(r1)
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
label_80CC7D4C:
    ctx->pc = 0x80CC7D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7D4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7D50:
    ctx->pc = 0x80CC7D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D50u)) return;
    // 80CC7D50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7D54:
    ctx->pc = 0x80CC7D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D54u)) return;
    // 80CC7D54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7D58:
    ctx->pc = 0x80CC7D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC7D58: stwu     r1, -16(r1)
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
label_80CC7D5C:
    ctx->pc = 0x80CC7D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7D5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7D60:
    ctx->pc = 0x80CC7D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7D60: stw     r0, 20(r1)
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
label_80CC7D64:
    ctx->pc = 0x80CC7D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7D64: stw     r31, 12(r1)
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
label_80CC7D68:
    ctx->pc = 0x80CC7D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D68u)) return;
    // 80CC7D68: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC7D6C:
    ctx->pc = 0x80CC7D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D6Cu)) return;
    // 80CC7D6C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC7D70:
    ctx->pc = 0x80CC7D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D70u)) return;
    // 80CC7D70: addi    r4, r4, 9164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9164);

label_80CC7D74:
    ctx->pc = 0x80CC7D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7D74: lwz     r0, 0(r4)
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
label_80CC7D78:
    ctx->pc = 0x80CC7D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D78u)) return;
    // 80CC7D78: cmplwi  r0, 0x0000
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

label_80CC7D7C:
    ctx->pc = 0x80CC7D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D7Cu)) return;
    // 80CC7D7C: bc    4, 2, 0x80CC7DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7DA0;
        }
    }

label_80CC7D80:
    ctx->pc = 0x80CC7D80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7D80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7D80: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CC7D84:
    ctx->pc = 0x80CC7D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D84u)) return;
    // 80CC7D84: bl      0x8050EEC0
    {
            ctx->lr = 0x80CC7D88u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80CC7D88:
    ctx->pc = 0x80CC7D88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7D88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC7D88: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC7D8C:
    ctx->pc = 0x80CC7D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D8Cu)) return;
    // 80CC7D8C: addi    r4, r4, 9164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9164);

label_80CC7D90:
    ctx->pc = 0x80CC7D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7D90: stw     r3, 0(r4)
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
label_80CC7D94:
    ctx->pc = 0x80CC7D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D94u)) return;
    // 80CC7D94: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7D98:
    ctx->pc = 0x80CC7D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D98u)) return;
    // 80CC7D98: addi    r3, r3, 9160
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9160);

label_80CC7D9C:
    ctx->pc = 0x80CC7D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7D9C: stw     r31, 0(r3)
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
label_80CC7DA0:
    ctx->pc = 0x80CC7DA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7DA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7DA0: lwz     r31, 12(r1)
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
label_80CC7DA4:
    ctx->pc = 0x80CC7DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7DA4: lwz     r0, 20(r1)
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
label_80CC7DA8:
    ctx->pc = 0x80CC7DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7DA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7DAC:
    ctx->pc = 0x80CC7DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DACu)) return;
    // 80CC7DAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7DB0:
    ctx->pc = 0x80CC7DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DB0u)) return;
    // 80CC7DB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7DB4:
    ctx->pc = 0x80CC7DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC7DB4: stwu     r1, -32(r1)
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
label_80CC7DB8:
    ctx->pc = 0x80CC7DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC7DB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7DBC:
    ctx->pc = 0x80CC7DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC7DBC: stw     r0, 36(r1)
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
label_80CC7DC0:
    ctx->pc = 0x80CC7DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7DC0: stw     r31, 28(r1)
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
label_80CC7DC4:
    ctx->pc = 0x80CC7DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7DC4: stw     r30, 24(r1)
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
label_80CC7DC8:
    ctx->pc = 0x80CC7DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7DC8: stw     r29, 20(r1)
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
label_80CC7DCC:
    ctx->pc = 0x80CC7DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7DCC: stw     r28, 16(r1)
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
label_80CC7DD0:
    ctx->pc = 0x80CC7DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DD0u)) return;
    // 80CC7DD0: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7DD4:
    ctx->pc = 0x80CC7DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DD4u)) return;
    // 80CC7DD4: addi    r30, r3, 9164
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(9164);

label_80CC7DD8:
    ctx->pc = 0x80CC7DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7DD8: lwz     r0, 0(r30)
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
label_80CC7DDC:
    ctx->pc = 0x80CC7DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DDCu)) return;
    // 80CC7DDC: cmplwi  r0, 0x0000
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

label_80CC7DE0:
    ctx->pc = 0x80CC7DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DE0u)) return;
    // 80CC7DE0: bc    12, 2, 0x80CC7E40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7E40;
        }
    }

label_80CC7DE4:
    ctx->pc = 0x80CC7DE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7DE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC7DE4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80CC7DE8:
    ctx->pc = 0x80CC7DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DE8u)) return;
    // 80CC7DE8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80CC7DEC:
    ctx->pc = 0x80CC7DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DECu)) return;
    // 80CC7DEC: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7DF0:
    ctx->pc = 0x80CC7DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DF0u)) return;
    // 80CC7DF0: addi    r31, r3, 9160
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(9160);

label_80CC7DF4:
    ctx->pc = 0x80CC7DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DF4u)) return;
    // 80CC7DF4: b       0x80CC7E14
    {
            goto label_80CC7E14;
    }

label_80CC7DF8:
    ctx->pc = 0x80CC7DF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7DF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC7DF8: lwz     r3, 0(r30)
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
label_80CC7DFC:
    ctx->pc = 0x80CC7DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7DFC: lwzx    r3, r3, r29
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
label_80CC7E00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E00u)) return;
    // 80CC7E00: cmplwi  r3, 0x0000
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

label_80CC7E04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E04u)) return;
    // 80CC7E04: bc    12, 2, 0x80CC7E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7E0C;
        }
    }

label_80CC7E08:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7E08: bl      0x8050F9E0
    {
            ctx->lr = 0x80CC7E0Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CC7E0C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7E0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC7E0C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80CC7E10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E10u)) return;
    // 80CC7E10: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80CC7E14:
    ctx->pc = 0x80CC7E14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7E14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7E14: lwz     r0, 0(r31)
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
label_80CC7E18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E18u)) return;
    // 80CC7E18: cmpw    r28, r0
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

label_80CC7E1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E1Cu)) return;
    // 80CC7E1C: bc    12, 0, 0x80CC7DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CC7DF8u;
                return;
            }
            goto label_80CC7DF8;
        }
    }

label_80CC7E20:
    ctx->pc = 0x80CC7E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7E20: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7E24:
    ctx->pc = 0x80CC7E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E24u)) return;
    // 80CC7E24: addi    r3, r3, 9164
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9164);

label_80CC7E28:
    ctx->pc = 0x80CC7E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7E28: lwz     r3, 0(r3)
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
label_80CC7E2C:
    ctx->pc = 0x80CC7E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E2Cu)) return;
    // 80CC7E2C: bl      0x8050ED40
    {
            ctx->lr = 0x80CC7E30u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CC7E30:
    ctx->pc = 0x80CC7E30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7E30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7E30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC7E34:
    ctx->pc = 0x80CC7E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E34u)) return;
    // 80CC7E34: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7E38:
    ctx->pc = 0x80CC7E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E38u)) return;
    // 80CC7E38: addi    r3, r3, 9164
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9164);

label_80CC7E3C:
    ctx->pc = 0x80CC7E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7E3C: stw     r0, 0(r3)
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
label_80CC7E40:
    ctx->pc = 0x80CC7E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7E40: lwz     r31, 28(r1)
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
label_80CC7E44:
    ctx->pc = 0x80CC7E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7E44: lwz     r30, 24(r1)
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
label_80CC7E48:
    ctx->pc = 0x80CC7E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7E48: lwz     r29, 20(r1)
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
label_80CC7E4C:
    ctx->pc = 0x80CC7E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7E4C: lwz     r28, 16(r1)
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
label_80CC7E50:
    ctx->pc = 0x80CC7E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7E50: lwz     r0, 36(r1)
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
label_80CC7E54:
    ctx->pc = 0x80CC7E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7E54: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7E58:
    ctx->pc = 0x80CC7E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E58u)) return;
    // 80CC7E58: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CC7E5C:
    ctx->pc = 0x80CC7E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E5Cu)) return;
    // 80CC7E5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7E60:
    ctx->pc = 0x80CC7E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7E60: stwu     r1, -16(r1)
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
label_80CC7E64:
    ctx->pc = 0x80CC7E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7E64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7E68:
    ctx->pc = 0x80CC7E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7E68: stw     r0, 20(r1)
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
label_80CC7E6C:
    ctx->pc = 0x80CC7E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7E6C: stw     r31, 12(r1)
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
label_80CC7E70:
    ctx->pc = 0x80CC7E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E70u)) return;
    // 80CC7E70: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC7E74:
    ctx->pc = 0x80CC7E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E74u)) return;
    // 80CC7E74: addi    r6, r6, 9160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9160);

label_80CC7E78:
    ctx->pc = 0x80CC7E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7E78: lwz     r0, 0(r6)
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
label_80CC7E7C:
    ctx->pc = 0x80CC7E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E7Cu)) return;
    // 80CC7E7C: cmpw    r3, r0
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

label_80CC7E80:
    ctx->pc = 0x80CC7E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E80u)) return;
    // 80CC7E80: bc    4, 0, 0x80CC7EBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7EBC;
        }
    }

label_80CC7E84:
    ctx->pc = 0x80CC7E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC7E84: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC7E88:
    ctx->pc = 0x80CC7E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E88u)) return;
    // 80CC7E88: addi    r6, r6, 9164
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9164);

label_80CC7E8C:
    ctx->pc = 0x80CC7E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7E8C: lwz     r6, 0(r6)
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
label_80CC7E90:
    ctx->pc = 0x80CC7E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E90u)) return;
    // 80CC7E90: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CC7E94:
    ctx->pc = 0x80CC7E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7E94: lwzx    r0, r6, r31
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
label_80CC7E98:
    ctx->pc = 0x80CC7E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E98u)) return;
    // 80CC7E98: cmplwi  r0, 0x0000
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

label_80CC7E9C:
    ctx->pc = 0x80CC7E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7E9Cu)) return;
    // 80CC7E9C: bc    4, 2, 0x80CC7EBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7EBC;
        }
    }

label_80CC7EA0:
    ctx->pc = 0x80CC7EA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7EA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC7EA0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC7EA4:
    ctx->pc = 0x80CC7EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EA4u)) return;
    // 80CC7EA4: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CC7EA8:
    ctx->pc = 0x80CC7EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EA8u)) return;
    // 80CC7EA8: bl      0x80CC7BAC
    {
            ctx->lr = 0x80CC7EACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CC7BACu;
                return;
            }
            goto label_80CC7BAC;
    }

label_80CC7EAC:
    ctx->pc = 0x80CC7EACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7EACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC7EAC: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC7EB0:
    ctx->pc = 0x80CC7EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EB0u)) return;
    // 80CC7EB0: addi    r4, r4, 9164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9164);

label_80CC7EB4:
    ctx->pc = 0x80CC7EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7EB4: lwz     r4, 0(r4)
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
label_80CC7EB8:
    ctx->pc = 0x80CC7EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7EB8: stwx    r3, r4, r31
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
label_80CC7EBC:
    ctx->pc = 0x80CC7EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7EBC: lwz     r31, 12(r1)
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
label_80CC7EC0:
    ctx->pc = 0x80CC7EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7EC0: lwz     r0, 20(r1)
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
label_80CC7EC4:
    ctx->pc = 0x80CC7EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7EC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7EC8:
    ctx->pc = 0x80CC7EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EC8u)) return;
    // 80CC7EC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7ECC:
    ctx->pc = 0x80CC7ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7ECCu)) return;
    // 80CC7ECC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7ED0:
    ctx->pc = 0x80CC7ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC7ED0: stwu     r1, -16(r1)
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
label_80CC7ED4:
    ctx->pc = 0x80CC7ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7ED4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7ED8:
    ctx->pc = 0x80CC7ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7ED8: stw     r0, 20(r1)
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
label_80CC7EDC:
    ctx->pc = 0x80CC7EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7EDC: stw     r31, 12(r1)
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
label_80CC7EE0:
    ctx->pc = 0x80CC7EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EE0u)) return;
    // 80CC7EE0: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC7EE4:
    ctx->pc = 0x80CC7EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EE4u)) return;
    // 80CC7EE4: addi    r4, r4, 9160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9160);

label_80CC7EE8:
    ctx->pc = 0x80CC7EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7EE8: lwz     r0, 0(r4)
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
label_80CC7EEC:
    ctx->pc = 0x80CC7EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EECu)) return;
    // 80CC7EEC: cmpw    r3, r0
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

label_80CC7EF0:
    ctx->pc = 0x80CC7EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EF0u)) return;
    // 80CC7EF0: bc    4, 0, 0x80CC7F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7F28;
        }
    }

label_80CC7EF4:
    ctx->pc = 0x80CC7EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC7EF4: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC7EF8:
    ctx->pc = 0x80CC7EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EF8u)) return;
    // 80CC7EF8: addi    r4, r4, 9164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9164);

label_80CC7EFC:
    ctx->pc = 0x80CC7EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7EFC: lwz     r4, 0(r4)
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
label_80CC7F00:
    ctx->pc = 0x80CC7F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F00u)) return;
    // 80CC7F00: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CC7F04:
    ctx->pc = 0x80CC7F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7F04: lwzx    r3, r4, r31
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
label_80CC7F08:
    ctx->pc = 0x80CC7F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F08u)) return;
    // 80CC7F08: cmplwi  r3, 0x0000
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

label_80CC7F0C:
    ctx->pc = 0x80CC7F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F0Cu)) return;
    // 80CC7F0C: bc    12, 2, 0x80CC7F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7F28;
        }
    }

label_80CC7F10:
    ctx->pc = 0x80CC7F10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7F10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7F10: bl      0x8050F9E0
    {
            ctx->lr = 0x80CC7F14u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CC7F14:
    ctx->pc = 0x80CC7F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC7F14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC7F18:
    ctx->pc = 0x80CC7F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F18u)) return;
    // 80CC7F18: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC7F1C:
    ctx->pc = 0x80CC7F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F1Cu)) return;
    // 80CC7F1C: addi    r3, r3, 9164
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9164);

label_80CC7F20:
    ctx->pc = 0x80CC7F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC7F20: lwz     r3, 0(r3)
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
label_80CC7F24:
    ctx->pc = 0x80CC7F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC7F24: stwx    r0, r3, r31
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
label_80CC7F28:
    ctx->pc = 0x80CC7F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7F28: lwz     r31, 12(r1)
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
label_80CC7F2C:
    ctx->pc = 0x80CC7F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7F2C: lwz     r0, 20(r1)
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
label_80CC7F30:
    ctx->pc = 0x80CC7F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7F30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7F34:
    ctx->pc = 0x80CC7F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F34u)) return;
    // 80CC7F34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7F38:
    ctx->pc = 0x80CC7F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F38u)) return;
    // 80CC7F38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7F3C:
    ctx->pc = 0x80CC7F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7F3C: stwu     r1, -16(r1)
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
label_80CC7F40:
    ctx->pc = 0x80CC7F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7F40: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7F44:
    ctx->pc = 0x80CC7F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7F44: stw     r0, 20(r1)
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
label_80CC7F48:
    ctx->pc = 0x80CC7F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F48u)) return;
    // 80CC7F48: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC7F4C:
    ctx->pc = 0x80CC7F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F4Cu)) return;
    // 80CC7F4C: addi    r6, r6, 9160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9160);

label_80CC7F50:
    ctx->pc = 0x80CC7F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7F50: lwz     r0, 0(r6)
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
label_80CC7F54:
    ctx->pc = 0x80CC7F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F54u)) return;
    // 80CC7F54: cmpw    r3, r0
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

label_80CC7F58:
    ctx->pc = 0x80CC7F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F58u)) return;
    // 80CC7F58: bc    4, 0, 0x80CC7F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7F7C;
        }
    }

label_80CC7F5C:
    ctx->pc = 0x80CC7F5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7F5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC7F5C: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC7F60:
    ctx->pc = 0x80CC7F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F60u)) return;
    // 80CC7F60: addi    r6, r6, 9164
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9164);

label_80CC7F64:
    ctx->pc = 0x80CC7F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7F64: lwz     r6, 0(r6)
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
label_80CC7F68:
    ctx->pc = 0x80CC7F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F68u)) return;
    // 80CC7F68: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CC7F6C:
    ctx->pc = 0x80CC7F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7F6C: lwzx    r3, r6, r0
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
label_80CC7F70:
    ctx->pc = 0x80CC7F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F70u)) return;
    // 80CC7F70: cmplwi  r3, 0x0000
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

label_80CC7F74:
    ctx->pc = 0x80CC7F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F74u)) return;
    // 80CC7F74: bc    12, 2, 0x80CC7F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7F7C;
        }
    }

label_80CC7F78:
    ctx->pc = 0x80CC7F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7F78: bl      0x80CC7C68
    {
            ctx->lr = 0x80CC7F7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CC7C68u;
                return;
            }
            goto label_80CC7C68;
    }

label_80CC7F7C:
    ctx->pc = 0x80CC7F7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7F7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7F7C: lwz     r0, 20(r1)
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
label_80CC7F80:
    ctx->pc = 0x80CC7F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7F80: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7F84:
    ctx->pc = 0x80CC7F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F84u)) return;
    // 80CC7F84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7F88:
    ctx->pc = 0x80CC7F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F88u)) return;
    // 80CC7F88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7F8C:
    ctx->pc = 0x80CC7F8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7F8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7F8C: stwu     r1, -16(r1)
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
label_80CC7F90:
    ctx->pc = 0x80CC7F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7F90: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7F94:
    ctx->pc = 0x80CC7F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7F94: stw     r0, 20(r1)
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
label_80CC7F98:
    ctx->pc = 0x80CC7F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F98u)) return;
    // 80CC7F98: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC7F9C:
    ctx->pc = 0x80CC7F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7F9Cu)) return;
    // 80CC7F9C: addi    r6, r6, 9160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9160);

label_80CC7FA0:
    ctx->pc = 0x80CC7FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7FA0: lwz     r0, 0(r6)
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
label_80CC7FA4:
    ctx->pc = 0x80CC7FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FA4u)) return;
    // 80CC7FA4: cmpw    r3, r0
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

label_80CC7FA8:
    ctx->pc = 0x80CC7FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FA8u)) return;
    // 80CC7FA8: bc    4, 0, 0x80CC7FCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC7FCC;
        }
    }

label_80CC7FAC:
    ctx->pc = 0x80CC7FACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7FACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC7FAC: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC7FB0:
    ctx->pc = 0x80CC7FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FB0u)) return;
    // 80CC7FB0: addi    r6, r6, 9164
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9164);

label_80CC7FB4:
    ctx->pc = 0x80CC7FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7FB4: lwz     r6, 0(r6)
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
label_80CC7FB8:
    ctx->pc = 0x80CC7FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FB8u)) return;
    // 80CC7FB8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CC7FBC:
    ctx->pc = 0x80CC7FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7FBC: lwzx    r3, r6, r0
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
label_80CC7FC0:
    ctx->pc = 0x80CC7FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FC0u)) return;
    // 80CC7FC0: cmplwi  r3, 0x0000
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

label_80CC7FC4:
    ctx->pc = 0x80CC7FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FC4u)) return;
    // 80CC7FC4: bc    12, 2, 0x80CC7FCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC7FCC;
        }
    }

label_80CC7FC8:
    ctx->pc = 0x80CC7FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC7FC8: bl      0x80CC7CB8
    {
            ctx->lr = 0x80CC7FCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CC7CB8u;
                return;
            }
            goto label_80CC7CB8;
    }

label_80CC7FCC:
    ctx->pc = 0x80CC7FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC7FCC: lwz     r0, 20(r1)
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
label_80CC7FD0:
    ctx->pc = 0x80CC7FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC7FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7FD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7FD4:
    ctx->pc = 0x80CC7FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FD4u)) return;
    // 80CC7FD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC7FD8:
    ctx->pc = 0x80CC7FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FD8u)) return;
    // 80CC7FD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC7FDC:
    ctx->pc = 0x80CC7FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC7FDC: stwu     r1, -16(r1)
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
label_80CC7FE0:
    ctx->pc = 0x80CC7FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC7FE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC7FE4:
    ctx->pc = 0x80CC7FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC7FE4: stw     r0, 20(r1)
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
label_80CC7FE8:
    ctx->pc = 0x80CC7FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FE8u)) return;
    // 80CC7FE8: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC7FEC:
    ctx->pc = 0x80CC7FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FECu)) return;
    // 80CC7FEC: addi    r6, r6, 9160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9160);

label_80CC7FF0:
    ctx->pc = 0x80CC7FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC7FF0: lwz     r0, 0(r6)
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
label_80CC7FF4:
    ctx->pc = 0x80CC7FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FF4u)) return;
    // 80CC7FF4: cmpw    r3, r0
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

label_80CC7FF8:
    ctx->pc = 0x80CC7FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC7FF8u)) return;
    // 80CC7FF8: bc    4, 0, 0x80CC801C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC801C;
        }
    }

label_80CC7FFC:
    ctx->pc = 0x80CC7FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC7FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC7FFC: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC8000:
    ctx->pc = 0x80CC8000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8000u)) return;
    // 80CC8000: addi    r6, r6, 9164
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9164);

label_80CC8004:
    ctx->pc = 0x80CC8004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8004: lwz     r6, 0(r6)
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
label_80CC8008:
    ctx->pc = 0x80CC8008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8008u)) return;
    // 80CC8008: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CC800C:
    ctx->pc = 0x80CC800Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC800Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC800C: lwzx    r3, r6, r0
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
label_80CC8010:
    ctx->pc = 0x80CC8010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8010u)) return;
    // 80CC8010: cmplwi  r3, 0x0000
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

label_80CC8014:
    ctx->pc = 0x80CC8014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8014u)) return;
    // 80CC8014: bc    12, 2, 0x80CC801C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC801C;
        }
    }

label_80CC8018:
    ctx->pc = 0x80CC8018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC8018: bl      0x80CC7D08
    {
            ctx->lr = 0x80CC801Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CC7D08u;
                return;
            }
            goto label_80CC7D08;
    }

label_80CC801C:
    ctx->pc = 0x80CC801Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC801Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC801C: lwz     r0, 20(r1)
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
label_80CC8020:
    ctx->pc = 0x80CC8020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC8020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8020: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8024:
    ctx->pc = 0x80CC8024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8024u)) return;
    // 80CC8024: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC8028:
    ctx->pc = 0x80CC8028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8028u)) return;
    // 80CC8028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC802C:
    ctx->pc = 0x80CC802Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC802Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC802C: stwu     r1, -32(r1)
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
label_80CC8030:
    ctx->pc = 0x80CC8030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC8030: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8034:
    ctx->pc = 0x80CC8034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC8034: stw     r0, 36(r1)
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
label_80CC8038:
    ctx->pc = 0x80CC8038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC8038: stw     r31, 28(r1)
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
label_80CC803C:
    ctx->pc = 0x80CC803Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC803Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC803C: stw     r30, 24(r1)
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
label_80CC8040:
    ctx->pc = 0x80CC8040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC8040: stw     r29, 20(r1)
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
label_80CC8044:
    ctx->pc = 0x80CC8044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC8044: stw     r28, 16(r1)
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
label_80CC8048:
    ctx->pc = 0x80CC8048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8048u)) return;
    // 80CC8048: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC804C:
    ctx->pc = 0x80CC804Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC804Cu)) return;
    // 80CC804C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC8050:
    ctx->pc = 0x80CC8050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8050u)) return;
    // 80CC8050: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CC8054:
    ctx->pc = 0x80CC8054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8054u)) return;
    // 80CC8054: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80CC8058:
    ctx->pc = 0x80CC8058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8058u)) return;
    // 80CC8058: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC805C:
    ctx->pc = 0x80CC805Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC805Cu)) return;
    // 80CC805C: bl      0x80401DB0
    {
            ctx->lr = 0x80CC8060u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80CC8060:
    ctx->pc = 0x80CC8060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC8060: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC8064:
    ctx->pc = 0x80CC8064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8064u)) return;
    // 80CC8064: addi    r4, r4, 9168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9168);

label_80CC8068:
    ctx->pc = 0x80CC8068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC8068: lwz     r0, 0(r4)
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
label_80CC806C:
    ctx->pc = 0x80CC806Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC806Cu)) return;
    // 80CC806C: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CC8070:
    ctx->pc = 0x80CC8070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8070u)) return;
    // 80CC8070: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC8074:
    ctx->pc = 0x80CC8074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8074u)) return;
    // 80CC8074: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC8078:
    ctx->pc = 0x80CC8078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8078u)) return;
    // 80CC8078: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CC807C:
    ctx->pc = 0x80CC807Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC807Cu)) return;
    // 80CC807C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC8080:
    ctx->pc = 0x80CC8080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8080u)) return;
    // 80CC8080: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80CC8084:
    ctx->pc = 0x80CC8084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8084u)) return;
    // 80CC8084: bl      0x8050A0D4
    {
            ctx->lr = 0x80CC8088u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80CC8088:
    ctx->pc = 0x80CC8088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC8088: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC808C:
    ctx->pc = 0x80CC808Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC808Cu)) return;
    // 80CC808C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CC8090:
    ctx->pc = 0x80CC8090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8090u)) return;
    // 80CC8090: bl      0x80509C74
    {
            ctx->lr = 0x80CC8094u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CC8094:
    ctx->pc = 0x80CC8094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC8094: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC8098:
    ctx->pc = 0x80CC8098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8098u)) return;
    // 80CC8098: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CC809C:
    ctx->pc = 0x80CC809Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC809Cu)) return;
    // 80CC809C: bl      0x80509BF8
    {
            ctx->lr = 0x80CC80A0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CC80A0:
    ctx->pc = 0x80CC80A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC80A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC80A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC80A4:
    ctx->pc = 0x80CC80A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80A4u)) return;
    // 80CC80A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CC80A8:
    ctx->pc = 0x80CC80A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80A8u)) return;
    // 80CC80A8: bl      0x80509B94
    {
            ctx->lr = 0x80CC80ACu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CC80AC:
    ctx->pc = 0x80CC80ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC80ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CC80AC: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC80B0:
    ctx->pc = 0x80CC80B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80B0u)) return;
    // 80CC80B0: addi    r4, r3, 9168
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(9168);

label_80CC80B4:
    ctx->pc = 0x80CC80B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC80B4: lwz     r3, 0(r4)
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
label_80CC80B8:
    ctx->pc = 0x80CC80B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80B8u)) return;
    // 80CC80B8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80CC80BC:
    ctx->pc = 0x80CC80BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC80BC: stw     r0, 0(r4)
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
label_80CC80C0:
    ctx->pc = 0x80CC80C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80C0u)) return;
    // 80CC80C0: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80CC80C4:
    ctx->pc = 0x80CC80C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC80C4: stw     r0, 0(r4)
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
label_80CC80C8:
    ctx->pc = 0x80CC80C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC80C8: lwz     r31, 28(r1)
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
label_80CC80CC:
    ctx->pc = 0x80CC80CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC80CC: lwz     r30, 24(r1)
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
label_80CC80D0:
    ctx->pc = 0x80CC80D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC80D0: lwz     r29, 20(r1)
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
label_80CC80D4:
    ctx->pc = 0x80CC80D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC80D4: lwz     r28, 16(r1)
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
label_80CC80D8:
    ctx->pc = 0x80CC80D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC80D8: lwz     r0, 36(r1)
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
label_80CC80DC:
    ctx->pc = 0x80CC80DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC80DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC80DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC80E0:
    ctx->pc = 0x80CC80E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80E0u)) return;
    // 80CC80E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CC80E4:
    ctx->pc = 0x80CC80E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80E4u)) return;
    // 80CC80E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC80E8:
    ctx->pc = 0x80CC80E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC80E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC80E8: stwu     r1, -48(r1)
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
label_80CC80EC:
    ctx->pc = 0x80CC80ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC80EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC80F0:
    ctx->pc = 0x80CC80F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC80F0: stw     r0, 52(r1)
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
label_80CC80F4:
    ctx->pc = 0x80CC80F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC80F4: stw     r31, 44(r1)
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
label_80CC80F8:
    ctx->pc = 0x80CC80F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC80F8: stw     r30, 40(r1)
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
label_80CC80FC:
    ctx->pc = 0x80CC80FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC80FCu)) return;
    // 80CC80FC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC8100:
    ctx->pc = 0x80CC8100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8100u)) return;
    // 80CC8100: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC8104:
    ctx->pc = 0x80CC8104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8104u)) return;
    // 80CC8104: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC8108:
    ctx->pc = 0x80CC8108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8108u)) return;
    // 80CC8108: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CC810C:
    ctx->pc = 0x80CC810Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC810Cu)) return;
    // 80CC810C: lis     r5, -32563
    ctx->gpr[5] = ((u32)(s32)(-32563) << 16);

label_80CC8110:
    ctx->pc = 0x80CC8110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8110u)) return;
    // 80CC8110: addi    r5, r5, -31944
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31944);

label_80CC8114:
    ctx->pc = 0x80CC8114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8114u)) return;
    // 80CC8114: bl      0x8050FD60
    {
            ctx->lr = 0x80CC8118u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CC8118:
    ctx->pc = 0x80CC8118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC8118: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC811C:
    ctx->pc = 0x80CC811Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC811Cu)) return;
    // 80CC811C: addi    r4, r4, 9176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9176);

label_80CC8120:
    ctx->pc = 0x80CC8120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8120: stw     r3, 0(r4)
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
label_80CC8124:
    ctx->pc = 0x80CC8124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8124u)) return;
    // 80CC8124: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC8128:
    ctx->pc = 0x80CC8128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8128u)) return;
    // 80CC8128: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC812Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC812C:
    ctx->pc = 0x80CC812Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 70u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC812Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 70u : 1u;
    // 80CC812C: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC8130:
    ctx->pc = 0x80CC8130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8130u)) return;
    // 80CC8130: addi    r4, r3, 9176
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(9176);

label_80CC8134:
    ctx->pc = 0x80CC8134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 80CC8134: lwz     r3, 0(r4)
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
label_80CC8138:
    ctx->pc = 0x80CC8138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 80CC8138: lwz     r3, 32(r3)
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
label_80CC813C:
    ctx->pc = 0x80CC813Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC813Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 80CC813C: lwz     r5, 16(r3)
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
label_80CC8140:
    ctx->pc = 0x80CC8140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8140u)) return;
    // 80CC8140: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8144:
    ctx->pc = 0x80CC8144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8144u)) return;
    // 80CC8144: addi    r3, r3, 12704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12704);

label_80CC8148:
    ctx->pc = 0x80CC8148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80CC8148: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC8148u)) return;
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
label_80CC814C:
    ctx->pc = 0x80CC814Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC814Cu)) return;
    // 80CC814C: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8150:
    ctx->pc = 0x80CC8150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8150u)) return;
    // 80CC8150: addi    r3, r3, 12712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12712);

label_80CC8154:
    ctx->pc = 0x80CC8154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80CC8154: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC8154u)) return;
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
label_80CC8158:
    ctx->pc = 0x80CC8158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8158u)) return;
    // 80CC8158: xoris   r0, r30, 0x8000
    ctx->gpr[0] = ctx->gpr[30] ^ (0x8000u << 16);

label_80CC815C:
    ctx->pc = 0x80CC815Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC815Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80CC815C: stw     r0, 12(r1)
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
label_80CC8160:
    ctx->pc = 0x80CC8160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8160u)) return;
    // 80CC8160: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80CC8164:
    ctx->pc = 0x80CC8164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80CC8164: stw     r3, 8(r1)
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
label_80CC8168:
    ctx->pc = 0x80CC8168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80CC8168: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8168u)) return;
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
label_80CC816C:
    ctx->pc = 0x80CC816Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC816Cu)) return;
    // 80CC816C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC816Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CC8170:
    ctx->pc = 0x80CC8170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CC8170u)) return;
    // 80CC8170: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8170u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CC8174:
    ctx->pc = 0x80CC8174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8174u)) return;
    // 80CC8174: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8174u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CC8178:
    ctx->pc = 0x80CC8178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CC8178: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8178u)) return;
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
label_80CC817C:
    ctx->pc = 0x80CC817Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC817Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80CC817C: lwz     r0, 20(r1)
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
label_80CC8180:
    ctx->pc = 0x80CC8180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CC8180: stb     r0, 0(r5)
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
label_80CC8184:
    ctx->pc = 0x80CC8184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8184u)) return;
    // 80CC8184: xoris   r0, r31, 0x8000
    ctx->gpr[0] = ctx->gpr[31] ^ (0x8000u << 16);

label_80CC8188:
    ctx->pc = 0x80CC8188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CC8188: stw     r0, 28(r1)
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
label_80CC818C:
    ctx->pc = 0x80CC818Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC818Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CC818C: stw     r3, 24(r1)
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
label_80CC8190:
    ctx->pc = 0x80CC8190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CC8190: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8190u)) return;
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
label_80CC8194:
    ctx->pc = 0x80CC8194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8194u)) return;
    // 80CC8194: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC8194u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CC8198:
    ctx->pc = 0x80CC8198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CC8198u)) return;
    // 80CC8198: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8198u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CC819C:
    ctx->pc = 0x80CC819Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC819Cu)) return;
    // 80CC819C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC819Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CC81A0:
    ctx->pc = 0x80CC81A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC81A0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC81A0u)) return;
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
label_80CC81A4:
    ctx->pc = 0x80CC81A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC81A4: lwz     r0, 36(r1)
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
label_80CC81A8:
    ctx->pc = 0x80CC81A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC81A8: stb     r0, 1(r5)
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
label_80CC81AC:
    ctx->pc = 0x80CC81ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81ACu)) return;
    // 80CC81AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC81B0:
    ctx->pc = 0x80CC81B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC81B0: stw     r0, 4(r5)
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
label_80CC81B4:
    ctx->pc = 0x80CC81B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC81B4: stw     r0, 8(r5)
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
label_80CC81B8:
    ctx->pc = 0x80CC81B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC81B8: lwz     r3, 0(r4)
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
label_80CC81BC:
    ctx->pc = 0x80CC81BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81BCu)) return;
    // 80CC81BC: cmplwi  r3, 0x0000
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

label_80CC81C0:
    ctx->pc = 0x80CC81C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81C0u)) return;
    // 80CC81C0: bc    12, 2, 0x80CC81D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC81D0;
        }
    }

label_80CC81C4:
    ctx->pc = 0x80CC81C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC81C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC81C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CC81C8:
    ctx->pc = 0x80CC81C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC81C8: lwz     r3, 32(r3)
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
label_80CC81CC:
    ctx->pc = 0x80CC81CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC81CC: stb     r0, 0(r3)
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
label_80CC81D0:
    ctx->pc = 0x80CC81D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC81D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC81D0: lwz     r31, 44(r1)
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
label_80CC81D4:
    ctx->pc = 0x80CC81D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC81D4: lwz     r30, 40(r1)
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
label_80CC81D8:
    ctx->pc = 0x80CC81D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC81D8: lwz     r0, 52(r1)
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
label_80CC81DC:
    ctx->pc = 0x80CC81DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC81DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC81DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC81E0:
    ctx->pc = 0x80CC81E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81E0u)) return;
    // 80CC81E0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80CC81E4:
    ctx->pc = 0x80CC81E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81E4u)) return;
    // 80CC81E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC81E8:
    ctx->pc = 0x80CC81E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC81E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC81E8: stwu     r1, -64(r1)
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
label_80CC81EC:
    ctx->pc = 0x80CC81ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC81EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC81F0:
    ctx->pc = 0x80CC81F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC81F0: stw     r0, 68(r1)
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
label_80CC81F4:
    ctx->pc = 0x80CC81F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC81F4: stw     r31, 60(r1)
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
label_80CC81F8:
    ctx->pc = 0x80CC81F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC81F8: stw     r30, 56(r1)
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
label_80CC81FC:
    ctx->pc = 0x80CC81FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC81FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC81FC: stw     r29, 52(r1)
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
label_80CC8200:
    ctx->pc = 0x80CC8200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8200u)) return;
    // 80CC8200: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC8204:
    ctx->pc = 0x80CC8204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8204u)) return;
    // 80CC8204: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CC8208:
    ctx->pc = 0x80CC8208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8208u)) return;
    // 80CC8208: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CC820C:
    ctx->pc = 0x80CC820Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC820Cu)) return;
    // 80CC820C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC8210:
    ctx->pc = 0x80CC8210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8210u)) return;
    // 80CC8210: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CC8214:
    ctx->pc = 0x80CC8214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8214u)) return;
    // 80CC8214: lis     r5, -32563
    ctx->gpr[5] = ((u32)(s32)(-32563) << 16);

label_80CC8218:
    ctx->pc = 0x80CC8218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8218u)) return;
    // 80CC8218: addi    r5, r5, -31944
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31944);

label_80CC821C:
    ctx->pc = 0x80CC821Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC821Cu)) return;
    // 80CC821C: bl      0x8050FD60
    {
            ctx->lr = 0x80CC8220u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CC8220:
    ctx->pc = 0x80CC8220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC8220: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC8224:
    ctx->pc = 0x80CC8224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8224u)) return;
    // 80CC8224: addi    r4, r4, 9176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9176);

label_80CC8228:
    ctx->pc = 0x80CC8228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8228: stw     r3, 0(r4)
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
label_80CC822C:
    ctx->pc = 0x80CC822Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC822Cu)) return;
    // 80CC822C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC8230:
    ctx->pc = 0x80CC8230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8230u)) return;
    // 80CC8230: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC8234u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC8234:
    ctx->pc = 0x80CC8234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 70u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 70u : 1u;
    // 80CC8234: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC8238:
    ctx->pc = 0x80CC8238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8238u)) return;
    // 80CC8238: addi    r4, r3, 9176
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(9176);

label_80CC823C:
    ctx->pc = 0x80CC823Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC823Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 80CC823C: lwz     r3, 0(r4)
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
label_80CC8240:
    ctx->pc = 0x80CC8240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 80CC8240: lwz     r3, 32(r3)
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
label_80CC8244:
    ctx->pc = 0x80CC8244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 80CC8244: lwz     r5, 16(r3)
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
label_80CC8248:
    ctx->pc = 0x80CC8248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8248u)) return;
    // 80CC8248: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC824C:
    ctx->pc = 0x80CC824Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC824Cu)) return;
    // 80CC824C: addi    r3, r3, 12704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12704);

label_80CC8250:
    ctx->pc = 0x80CC8250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80CC8250: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC8250u)) return;
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
label_80CC8254:
    ctx->pc = 0x80CC8254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8254u)) return;
    // 80CC8254: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8258:
    ctx->pc = 0x80CC8258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8258u)) return;
    // 80CC8258: addi    r3, r3, 12712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12712);

label_80CC825C:
    ctx->pc = 0x80CC825Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC825Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80CC825C: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC825Cu)) return;
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
label_80CC8260:
    ctx->pc = 0x80CC8260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8260u)) return;
    // 80CC8260: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_80CC8264:
    ctx->pc = 0x80CC8264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80CC8264: stw     r0, 12(r1)
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
label_80CC8268:
    ctx->pc = 0x80CC8268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8268u)) return;
    // 80CC8268: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80CC826C:
    ctx->pc = 0x80CC826Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC826Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80CC826C: stw     r3, 8(r1)
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
label_80CC8270:
    ctx->pc = 0x80CC8270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80CC8270: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8270u)) return;
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
label_80CC8274:
    ctx->pc = 0x80CC8274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8274u)) return;
    // 80CC8274: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC8274u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CC8278:
    ctx->pc = 0x80CC8278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CC8278u)) return;
    // 80CC8278: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8278u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CC827C:
    ctx->pc = 0x80CC827Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC827Cu)) return;
    // 80CC827C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC827Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CC8280:
    ctx->pc = 0x80CC8280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CC8280: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8280u)) return;
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
label_80CC8284:
    ctx->pc = 0x80CC8284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80CC8284: lwz     r0, 20(r1)
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
label_80CC8288:
    ctx->pc = 0x80CC8288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CC8288: stb     r0, 0(r5)
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
label_80CC828C:
    ctx->pc = 0x80CC828Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC828Cu)) return;
    // 80CC828C: xoris   r0, r31, 0x8000
    ctx->gpr[0] = ctx->gpr[31] ^ (0x8000u << 16);

label_80CC8290:
    ctx->pc = 0x80CC8290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CC8290: stw     r0, 28(r1)
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
label_80CC8294:
    ctx->pc = 0x80CC8294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CC8294: stw     r3, 24(r1)
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
label_80CC8298:
    ctx->pc = 0x80CC8298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CC8298: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8298u)) return;
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
label_80CC829C:
    ctx->pc = 0x80CC829Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC829Cu)) return;
    // 80CC829C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC829Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CC82A0:
    ctx->pc = 0x80CC82A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CC82A0u)) return;
    // 80CC82A0: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC82A0u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CC82A4:
    ctx->pc = 0x80CC82A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82A4u)) return;
    // 80CC82A4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC82A4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CC82A8:
    ctx->pc = 0x80CC82A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC82A8: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC82A8u)) return;
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
label_80CC82AC:
    ctx->pc = 0x80CC82ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC82AC: lwz     r0, 36(r1)
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
label_80CC82B0:
    ctx->pc = 0x80CC82B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC82B0: stb     r0, 1(r5)
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
label_80CC82B4:
    ctx->pc = 0x80CC82B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC82B4: stw     r30, 4(r5)
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
label_80CC82B8:
    ctx->pc = 0x80CC82B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82B8u)) return;
    // 80CC82B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC82BC:
    ctx->pc = 0x80CC82BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC82BC: stw     r0, 8(r5)
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
label_80CC82C0:
    ctx->pc = 0x80CC82C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC82C0: lwz     r3, 0(r4)
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
label_80CC82C4:
    ctx->pc = 0x80CC82C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82C4u)) return;
    // 80CC82C4: cmplwi  r3, 0x0000
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

label_80CC82C8:
    ctx->pc = 0x80CC82C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82C8u)) return;
    // 80CC82C8: bc    12, 2, 0x80CC82D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC82D8;
        }
    }

label_80CC82CC:
    ctx->pc = 0x80CC82CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC82CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC82CC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CC82D0:
    ctx->pc = 0x80CC82D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC82D0: lwz     r3, 32(r3)
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
label_80CC82D4:
    ctx->pc = 0x80CC82D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC82D4: stb     r0, 0(r3)
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
label_80CC82D8:
    ctx->pc = 0x80CC82D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC82D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC82D8: lwz     r31, 60(r1)
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
label_80CC82DC:
    ctx->pc = 0x80CC82DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC82DC: lwz     r30, 56(r1)
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
label_80CC82E0:
    ctx->pc = 0x80CC82E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC82E0: lwz     r29, 52(r1)
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
label_80CC82E4:
    ctx->pc = 0x80CC82E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC82E4: lwz     r0, 68(r1)
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
label_80CC82E8:
    ctx->pc = 0x80CC82E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC82E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC82E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC82EC:
    ctx->pc = 0x80CC82ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82ECu)) return;
    // 80CC82EC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80CC82F0:
    ctx->pc = 0x80CC82F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82F0u)) return;
    // 80CC82F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC82F4:
    ctx->pc = 0x80CC82F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC82F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC82F4: stwu     r1, -16(r1)
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
label_80CC82F8:
    ctx->pc = 0x80CC82F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC82F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC82FC:
    ctx->pc = 0x80CC82FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC82FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC82FC: stw     r0, 20(r1)
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
label_80CC8300:
    ctx->pc = 0x80CC8300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8300u)) return;
    // 80CC8300: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC8304:
    ctx->pc = 0x80CC8304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8304u)) return;
    // 80CC8304: addi    r3, r3, 9176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9176);

label_80CC8308:
    ctx->pc = 0x80CC8308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8308: lwz     r3, 0(r3)
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
label_80CC830C:
    ctx->pc = 0x80CC830Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC830Cu)) return;
    // 80CC830C: cmplwi  r3, 0x0000
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

label_80CC8310:
    ctx->pc = 0x80CC8310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8310u)) return;
    // 80CC8310: bc    12, 2, 0x80CC8328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC8328;
        }
    }

label_80CC8314:
    ctx->pc = 0x80CC8314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC8314: bl      0x8050F9E0
    {
            ctx->lr = 0x80CC8318u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CC8318:
    ctx->pc = 0x80CC8318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC8318: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC831C:
    ctx->pc = 0x80CC831Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC831Cu)) return;
    // 80CC831C: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC8320:
    ctx->pc = 0x80CC8320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8320u)) return;
    // 80CC8320: addi    r3, r3, 9176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9176);

label_80CC8324:
    ctx->pc = 0x80CC8324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC8324: stw     r0, 0(r3)
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
label_80CC8328:
    ctx->pc = 0x80CC8328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8328: lwz     r0, 20(r1)
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
label_80CC832C:
    ctx->pc = 0x80CC832Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC832Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC832C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8330:
    ctx->pc = 0x80CC8330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8330u)) return;
    // 80CC8330: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC8334:
    ctx->pc = 0x80CC8334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8334u)) return;
    // 80CC8334: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC8338:
    ctx->pc = 0x80CC8338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC8338: stwu     r1, -16(r1)
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
label_80CC833C:
    ctx->pc = 0x80CC833Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC833Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC833C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8340:
    ctx->pc = 0x80CC8340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC8340: stw     r0, 20(r1)
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
label_80CC8344:
    ctx->pc = 0x80CC8344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC8344: stw     r31, 12(r1)
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
label_80CC8348:
    ctx->pc = 0x80CC8348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8348: stw     r30, 8(r1)
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
label_80CC834C:
    ctx->pc = 0x80CC834Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC834Cu)) return;
    // 80CC834C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC8350:
    ctx->pc = 0x80CC8350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8350: lwz     r31, 32(r30)
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
label_80CC8354:
    ctx->pc = 0x80CC8354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8354u)) return;
    // 80CC8354: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80CC8358:
    ctx->pc = 0x80CC8358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8358u)) return;
    // 80CC8358: bl      0x8050EF60
    {
            ctx->lr = 0x80CC835Cu;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80CC835C:
    ctx->pc = 0x80CC835Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC835Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    // 80CC835C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC8360:
    ctx->pc = 0x80CC8360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CC8360: stb     r0, 0(r31)
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
label_80CC8364:
    ctx->pc = 0x80CC8364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CC8364: stb     r0, 12(r3)
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
label_80CC8368:
    ctx->pc = 0x80CC8368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8368u)) return;
    // 80CC8368: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80CC836C:
    ctx->pc = 0x80CC836Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC836Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CC836C: stb     r0, 13(r3)
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
label_80CC8370:
    ctx->pc = 0x80CC8370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CC8370: stb     r0, 14(r3)
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
label_80CC8374:
    ctx->pc = 0x80CC8374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CC8374: stb     r0, 15(r3)
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
label_80CC8378:
    ctx->pc = 0x80CC8378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CC8378: stw     r3, 16(r31)
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
label_80CC837C:
    ctx->pc = 0x80CC837Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC837Cu)) return;
    // 80CC837C: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CC8380:
    ctx->pc = 0x80CC8380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8380u)) return;
    // 80CC8380: addi    r0, r3, -31816
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31816);

label_80CC8384:
    ctx->pc = 0x80CC8384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC8384: stw     r0, 16(r30)
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
label_80CC8388:
    ctx->pc = 0x80CC8388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8388u)) return;
    // 80CC8388: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CC838C:
    ctx->pc = 0x80CC838Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC838Cu)) return;
    // 80CC838C: addi    r0, r3, -31552
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31552);

label_80CC8390:
    ctx->pc = 0x80CC8390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC8390: stw     r0, 20(r30)
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
label_80CC8394:
    ctx->pc = 0x80CC8394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8394u)) return;
    // 80CC8394: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CC8398:
    ctx->pc = 0x80CC8398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8398u)) return;
    // 80CC8398: addi    r0, r3, -31436
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31436);

label_80CC839C:
    ctx->pc = 0x80CC839Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC839Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC839C: stw     r0, 24(r30)
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
label_80CC83A0:
    ctx->pc = 0x80CC83A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC83A0: lwz     r31, 12(r1)
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
label_80CC83A4:
    ctx->pc = 0x80CC83A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC83A4: lwz     r30, 8(r1)
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
label_80CC83A8:
    ctx->pc = 0x80CC83A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC83A8: lwz     r0, 20(r1)
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
label_80CC83AC:
    ctx->pc = 0x80CC83ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC83ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC83AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC83B0:
    ctx->pc = 0x80CC83B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83B0u)) return;
    // 80CC83B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC83B4:
    ctx->pc = 0x80CC83B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83B4u)) return;
    // 80CC83B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC83B8:
    ctx->pc = 0x80CC83B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC83B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC83B8: stwu     r1, -16(r1)
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
label_80CC83BC:
    ctx->pc = 0x80CC83BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC83BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC83C0:
    ctx->pc = 0x80CC83C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC83C0: stw     r0, 20(r1)
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
label_80CC83C4:
    ctx->pc = 0x80CC83C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC83C4: stw     r31, 12(r1)
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
label_80CC83C8:
    ctx->pc = 0x80CC83C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83C8u)) return;
    // 80CC83C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC83CC:
    ctx->pc = 0x80CC83CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC83CC: lwz     r4, 32(r31)
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
label_80CC83D0:
    ctx->pc = 0x80CC83D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC83D0: lwz     r5, 16(r4)
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
label_80CC83D4:
    ctx->pc = 0x80CC83D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC83D4: lbz     r0, 0(r4)
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
label_80CC83D8:
    ctx->pc = 0x80CC83D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83D8u)) return;
    // 80CC83D8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CC83DC:
    ctx->pc = 0x80CC83DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83DCu)) return;
    // 80CC83DC: cmpwi   r0, 2
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

label_80CC83E0:
    ctx->pc = 0x80CC83E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83E0u)) return;
    // 80CC83E0: bc    12, 2, 0x80CC8440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC8440;
        }
    }

label_80CC83E4:
    ctx->pc = 0x80CC83E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC83E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC83E4: bc    4, 0, 0x80CC83F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC83F8;
        }
    }

label_80CC83E8:
    ctx->pc = 0x80CC83E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC83E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC83E8: cmpwi   r0, 0
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

label_80CC83EC:
    ctx->pc = 0x80CC83ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83ECu)) return;
    // 80CC83EC: bc    12, 2, 0x80CC84A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC84A4;
        }
    }

label_80CC83F0:
    ctx->pc = 0x80CC83F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC83F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC83F0: bc    4, 0, 0x80CC8408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC8408;
        }
    }

label_80CC83F4:
    ctx->pc = 0x80CC83F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC83F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC83F4: b       0x80CC84A4
    {
            goto label_80CC84A4;
    }

label_80CC83F8:
    ctx->pc = 0x80CC83F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC83F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC83F8: cmpwi   r0, 4
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

label_80CC83FC:
    ctx->pc = 0x80CC83FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC83FCu)) return;
    // 80CC83FC: bc    12, 2, 0x80CC8490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC8490;
        }
    }

label_80CC8400:
    ctx->pc = 0x80CC8400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC8400: bc    4, 0, 0x80CC84A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC84A4;
        }
    }

label_80CC8404:
    ctx->pc = 0x80CC8404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC8404: b       0x80CC8464
    {
            goto label_80CC8464;
    }

label_80CC8408:
    ctx->pc = 0x80CC8408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC8408: lbz     r3, 12(r5)
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
label_80CC840C:
    ctx->pc = 0x80CC840Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC840Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC840C: lbz     r0, 0(r5)
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
label_80CC8410:
    ctx->pc = 0x80CC8410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8410u)) return;
    // 80CC8410: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CC8414:
    ctx->pc = 0x80CC8414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC8414: stb     r0, 12(r5)
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
label_80CC8418:
    ctx->pc = 0x80CC8418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8418: lbz     r3, 12(r5)
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
label_80CC841C:
    ctx->pc = 0x80CC841Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC841Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC841C: lbz     r0, 0(r5)
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
label_80CC8420:
    ctx->pc = 0x80CC8420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8420u)) return;
    // 80CC8420: subfic  r0, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80CC8424:
    ctx->pc = 0x80CC8424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8424u)) return;
    // 80CC8424: cmpw    r3, r0
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

label_80CC8428:
    ctx->pc = 0x80CC8428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8428u)) return;
    // 80CC8428: bc    12, 0, 0x80CC84A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC84A4;
        }
    }

label_80CC842C:
    ctx->pc = 0x80CC842Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC842Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC842C: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80CC8430:
    ctx->pc = 0x80CC8430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC8430: stb     r0, 12(r5)
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
label_80CC8434:
    ctx->pc = 0x80CC8434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8434u)) return;
    // 80CC8434: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80CC8438:
    ctx->pc = 0x80CC8438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC8438: stb     r0, 0(r4)
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
label_80CC843C:
    ctx->pc = 0x80CC843Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC843Cu)) return;
    // 80CC843C: b       0x80CC84A4
    {
            goto label_80CC84A4;
    }

label_80CC8440:
    ctx->pc = 0x80CC8440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC8440: lwz     r3, 8(r5)
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
label_80CC8444:
    ctx->pc = 0x80CC8444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8444u)) return;
    // 80CC8444: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80CC8448:
    ctx->pc = 0x80CC8448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC8448: stw     r3, 8(r5)
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
label_80CC844C:
    ctx->pc = 0x80CC844Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC844Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC844C: lwz     r0, 4(r5)
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
label_80CC8450:
    ctx->pc = 0x80CC8450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8450u)) return;
    // 80CC8450: cmpw    r3, r0
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

label_80CC8454:
    ctx->pc = 0x80CC8454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8454u)) return;
    // 80CC8454: bc    4, 1, 0x80CC84A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC84A4;
        }
    }

label_80CC8458:
    ctx->pc = 0x80CC8458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC8458: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80CC845C:
    ctx->pc = 0x80CC845Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC845Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC845C: stb     r0, 0(r4)
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
label_80CC8460:
    ctx->pc = 0x80CC8460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8460u)) return;
    // 80CC8460: b       0x80CC84A4
    {
            goto label_80CC84A4;
    }

label_80CC8464:
    ctx->pc = 0x80CC8464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC8464: lbz     r3, 1(r5)
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
label_80CC8468:
    ctx->pc = 0x80CC8468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC8468: lbz     r0, 12(r5)
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
label_80CC846C:
    ctx->pc = 0x80CC846Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC846Cu)) return;
    // 80CC846C: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80CC8470:
    ctx->pc = 0x80CC8470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8470: stb     r0, 12(r5)
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
label_80CC8474:
    ctx->pc = 0x80CC8474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC8474: lbz     r3, 12(r5)
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
label_80CC8478:
    ctx->pc = 0x80CC8478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8478: lbz     r0, 1(r5)
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
label_80CC847C:
    ctx->pc = 0x80CC847Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC847Cu)) return;
    // 80CC847C: cmplw   r3, r0
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

label_80CC8480:
    ctx->pc = 0x80CC8480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8480u)) return;
    // 80CC8480: bc    12, 1, 0x80CC84A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC84A4;
        }
    }

label_80CC8484:
    ctx->pc = 0x80CC8484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC8484: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80CC8488:
    ctx->pc = 0x80CC8488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC8488: stb     r0, 0(r4)
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
label_80CC848C:
    ctx->pc = 0x80CC848Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC848Cu)) return;
    // 80CC848C: b       0x80CC84A4
    {
            goto label_80CC84A4;
    }

label_80CC8490:
    ctx->pc = 0x80CC8490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC8490: bl      0x8050F9E0
    {
            ctx->lr = 0x80CC8494u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CC8494:
    ctx->pc = 0x80CC8494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC8494: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC8498:
    ctx->pc = 0x80CC8498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8498u)) return;
    // 80CC8498: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC849C:
    ctx->pc = 0x80CC849Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC849Cu)) return;
    // 80CC849C: addi    r3, r3, 9176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9176);

label_80CC84A0:
    ctx->pc = 0x80CC84A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC84A0: stw     r0, 0(r3)
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
label_80CC84A4:
    ctx->pc = 0x80CC84A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC84A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC84A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC84A8:
    ctx->pc = 0x80CC84A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84A8u)) return;
    // 80CC84A8: bl      0x80CC84C0
    {
            ctx->lr = 0x80CC84ACu;
            goto label_80CC84C0;
    }

label_80CC84AC:
    ctx->pc = 0x80CC84ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC84ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC84AC: lwz     r31, 12(r1)
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
label_80CC84B0:
    ctx->pc = 0x80CC84B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC84B0: lwz     r0, 20(r1)
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
label_80CC84B4:
    ctx->pc = 0x80CC84B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC84B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC84B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC84B8:
    ctx->pc = 0x80CC84B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84B8u)) return;
    // 80CC84B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC84BC:
    ctx->pc = 0x80CC84BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84BCu)) return;
    // 80CC84BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC84C0:
    ctx->pc = 0x80CC84C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC84C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC84C0: stwu     r1, -16(r1)
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
label_80CC84C4:
    ctx->pc = 0x80CC84C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC84C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC84C8:
    ctx->pc = 0x80CC84C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC84C8: stw     r0, 20(r1)
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
label_80CC84CC:
    ctx->pc = 0x80CC84CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC84CC: lwz     r3, 32(r3)
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
label_80CC84D0:
    ctx->pc = 0x80CC84D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC84D0: lwz     r4, 16(r3)
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
label_80CC84D4:
    ctx->pc = 0x80CC84D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84D4u)) return;
    // 80CC84D4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CC84D8:
    ctx->pc = 0x80CC84D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84D8u)) return;
    // 80CC84D8: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80CC84DC:
    ctx->pc = 0x80CC84DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC84DC: lwz     r0, 0(r3)
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
label_80CC84E0:
    ctx->pc = 0x80CC84E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84E0u)) return;
    // 80CC84E0: cmpwi   r0, 0
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

label_80CC84E4:
    ctx->pc = 0x80CC84E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84E4u)) return;
    // 80CC84E4: bc    4, 2, 0x80CC8524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC8524;
        }
    }

label_80CC84E8:
    ctx->pc = 0x80CC84E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC84E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80CC84E8: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC84EC:
    ctx->pc = 0x80CC84ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84ECu)) return;
    // 80CC84EC: addi    r3, r3, 12720
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12720);

label_80CC84F0:
    ctx->pc = 0x80CC84F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC84F0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC84F0u)) return;
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
label_80CC84F4:
    ctx->pc = 0x80CC84F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84F4u)) return;
    // 80CC84F4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC84F4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CC84F8:
    ctx->pc = 0x80CC84F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84F8u)) return;
    // 80CC84F8: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC84FC:
    ctx->pc = 0x80CC84FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC84FCu)) return;
    // 80CC84FC: addi    r3, r3, 12724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12724);

label_80CC8500:
    ctx->pc = 0x80CC8500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC8500: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC8500u)) return;
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
label_80CC8504:
    ctx->pc = 0x80CC8504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8504u)) return;
    // 80CC8504: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8508:
    ctx->pc = 0x80CC8508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8508u)) return;
    // 80CC8508: addi    r3, r3, 12728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12728);

label_80CC850C:
    ctx->pc = 0x80CC850Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC850Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC850C: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC850Cu)) return;
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
label_80CC8510:
    ctx->pc = 0x80CC8510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8510u)) return;
    // 80CC8510: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8514:
    ctx->pc = 0x80CC8514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8514u)) return;
    // 80CC8514: addi    r3, r3, 12732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12732);

label_80CC8518:
    ctx->pc = 0x80CC8518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8518: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC8518u)) return;
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
label_80CC851C:
    ctx->pc = 0x80CC851Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC851Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC851C: lwz     r3, 12(r4)
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
label_80CC8520:
    ctx->pc = 0x80CC8520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8520u)) return;
    // 80CC8520: bl      0x80CC855C
    {
            ctx->lr = 0x80CC8524u;
            goto label_80CC855C;
    }

label_80CC8524:
    ctx->pc = 0x80CC8524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8524: lwz     r0, 20(r1)
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
label_80CC8528:
    ctx->pc = 0x80CC8528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC8528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8528: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC852C:
    ctx->pc = 0x80CC852Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC852Cu)) return;
    // 80CC852C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC8530:
    ctx->pc = 0x80CC8530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8530u)) return;
    // 80CC8530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC8534:
    ctx->pc = 0x80CC8534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC8534: stwu     r1, -16(r1)
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
label_80CC8538:
    ctx->pc = 0x80CC8538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8538: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC853C:
    ctx->pc = 0x80CC853Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC853Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC853C: stw     r0, 20(r1)
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
label_80CC8540:
    ctx->pc = 0x80CC8540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8540: lwz     r3, 32(r3)
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
label_80CC8544:
    ctx->pc = 0x80CC8544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC8544: lwz     r3, 16(r3)
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
label_80CC8548:
    ctx->pc = 0x80CC8548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8548u)) return;
    // 80CC8548: bl      0x8050ED40
    {
            ctx->lr = 0x80CC854Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CC854C:
    ctx->pc = 0x80CC854Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC854Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC854C: lwz     r0, 20(r1)
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
label_80CC8550:
    ctx->pc = 0x80CC8550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC8550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8550: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8554:
    ctx->pc = 0x80CC8554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8554u)) return;
    // 80CC8554: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC8558:
    ctx->pc = 0x80CC8558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8558u)) return;
    // 80CC8558: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC855C:
    ctx->pc = 0x80CC855Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC855Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC855C: stwu     r1, -16(r1)
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
label_80CC8560:
    ctx->pc = 0x80CC8560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC8560: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8564:
    ctx->pc = 0x80CC8564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8564: stw     r0, 20(r1)
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
label_80CC8568:
    ctx->pc = 0x80CC8568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8568u)) return;
    // 80CC8568: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CC856C:
    ctx->pc = 0x80CC856Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC856Cu)) return;
    // 80CC856C: bl      0x80607948
    {
            ctx->lr = 0x80CC8570u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80CC8570:
    ctx->pc = 0x80CC8570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8570: lwz     r0, 20(r1)
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
label_80CC8574:
    ctx->pc = 0x80CC8574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC8574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8574: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8578:
    ctx->pc = 0x80CC8578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8578u)) return;
    // 80CC8578: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC857C:
    ctx->pc = 0x80CC857Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC857Cu)) return;
    // 80CC857C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC8580:
    ctx->pc = 0x80CC8580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC8580: stwu     r1, -16(r1)
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
label_80CC8584:
    ctx->pc = 0x80CC8584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8584: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8588:
    ctx->pc = 0x80CC8588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC8588: stw     r0, 20(r1)
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
label_80CC858C:
    ctx->pc = 0x80CC858Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC858Cu)) return;
    // 80CC858C: bl      0x8050E9CC
    {
            ctx->lr = 0x80CC8590u;
            ctx->pc = 0x8050E9CCu;
            return;
    }

label_80CC8590:
    ctx->pc = 0x80CC8590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8590: lwz     r0, 20(r1)
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
label_80CC8594:
    ctx->pc = 0x80CC8594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC8594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8594: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8598:
    ctx->pc = 0x80CC8598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8598u)) return;
    // 80CC8598: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC859C:
    ctx->pc = 0x80CC859Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC859Cu)) return;
    // 80CC859C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC85A0:
    ctx->pc = 0x80CC85A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC85A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC85A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC85A4:
    ctx->pc = 0x80CC85A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC85A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC85A4: stwu     r1, -16(r1)
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
label_80CC85A8:
    ctx->pc = 0x80CC85A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC85A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC85AC:
    ctx->pc = 0x80CC85ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC85AC: stw     r0, 20(r1)
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
label_80CC85B0:
    ctx->pc = 0x80CC85B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC85B0: stw     r31, 12(r1)
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
label_80CC85B4:
    ctx->pc = 0x80CC85B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC85B4: stw     r30, 8(r1)
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
label_80CC85B8:
    ctx->pc = 0x80CC85B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85B8u)) return;
    // 80CC85B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC85BC:
    ctx->pc = 0x80CC85BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC85BC: lwz     r31, 32(r30)
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
label_80CC85C0:
    ctx->pc = 0x80CC85C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC85C0: lwz     r3, 60(r31)
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
label_80CC85C4:
    ctx->pc = 0x80CC85C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC85C4: lwz     r0, 76(r3)
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
label_80CC85C8:
    ctx->pc = 0x80CC85C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85C8u)) return;
    // 80CC85C8: cmplwi  r0, 0x0000
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

label_80CC85CC:
    ctx->pc = 0x80CC85CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85CCu)) return;
    // 80CC85CC: bc    12, 2, 0x80CC85D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC85D8;
        }
    }

label_80CC85D0:
    ctx->pc = 0x80CC85D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC85D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC85D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC85D4:
    ctx->pc = 0x80CC85D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85D4u)) return;
    // 80CC85D4: bl      0x80461320
    {
            ctx->lr = 0x80CC85D8u;
            ctx->pc = 0x80461320u;
            return;
    }

label_80CC85D8:
    ctx->pc = 0x80CC85D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC85D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC85D8: lfs     f1, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CC85D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC85DC:
    ctx->pc = 0x80CC85DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC85DC: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CC85DCu)) return;
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
label_80CC85E0:
    ctx->pc = 0x80CC85E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85E0u)) return;
    // 80CC85E0: fadds   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC85E0u)) return;
    ppc_fadds(ctx, 2, 1, 0);

label_80CC85E4:
    ctx->pc = 0x80CC85E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC85E4: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CC85E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC85E8:
    ctx->pc = 0x80CC85E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC85E8: lfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CC85E8u)) return;
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
label_80CC85EC:
    ctx->pc = 0x80CC85ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85ECu)) return;
    // 80CC85EC: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC85ECu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80CC85F0:
    ctx->pc = 0x80CC85F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85F0u)) return;
    // 80CC85F0: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC85F4:
    ctx->pc = 0x80CC85F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85F4u)) return;
    // 80CC85F4: addi    r3, r3, 12736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12736);

label_80CC85F8:
    ctx->pc = 0x80CC85F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC85F8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC85F8u)) return;
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
label_80CC85FC:
    ctx->pc = 0x80CC85FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC85FCu)) return;
    // 80CC85FC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC85FCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80CC8600:
    ctx->pc = 0x80CC8600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8600u)) return;
    // 80CC8600: bc    4, 0, 0x80CC860C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC860C;
        }
    }

label_80CC8604:
    ctx->pc = 0x80CC8604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC8604: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8604u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_80CC8608:
    ctx->pc = 0x80CC8608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8608u)) return;
    // 80CC8608: b       0x80CC8624
    {
            goto label_80CC8624;
    }

label_80CC860C:
    ctx->pc = 0x80CC860Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC860Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC860C: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8610:
    ctx->pc = 0x80CC8610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8610u)) return;
    // 80CC8610: addi    r3, r3, 12740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12740);

label_80CC8614:
    ctx->pc = 0x80CC8614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8614: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC8614u)) return;
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
label_80CC8618:
    ctx->pc = 0x80CC8618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8618u)) return;
    // 80CC8618: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8618u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80CC861C:
    ctx->pc = 0x80CC861Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC861Cu)) return;
    // 80CC861C: bc    4, 1, 0x80CC8624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC8624;
        }
    }

label_80CC8620:
    ctx->pc = 0x80CC8620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC8620: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8620u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_80CC8624:
    ctx->pc = 0x80CC8624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC8624: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8628:
    ctx->pc = 0x80CC8628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8628u)) return;
    // 80CC8628: addi    r3, r3, 12736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12736);

label_80CC862C:
    ctx->pc = 0x80CC862Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC862Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC862C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC862Cu)) return;
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
label_80CC8630:
    ctx->pc = 0x80CC8630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8630u)) return;
    // 80CC8630: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8630u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CC8634:
    ctx->pc = 0x80CC8634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8634u)) return;
    // 80CC8634: bc    4, 0, 0x80CC863C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC863C;
        }
    }

label_80CC8638:
    ctx->pc = 0x80CC8638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC8638: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CC8638u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80CC863C:
    ctx->pc = 0x80CC863Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC863Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC863C: lwz     r3, 16(r31)
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
label_80CC8640:
    ctx->pc = 0x80CC8640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8640u)) return;
    // 80CC8640: bl      0x804C079C
    {
            ctx->lr = 0x80CC8644u;
            ctx->pc = 0x804C079Cu;
            return;
    }

label_80CC8644:
    ctx->pc = 0x80CC8644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8644: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8648:
    ctx->pc = 0x80CC8648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8648u)) return;
    // 80CC8648: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CC864C:
    ctx->pc = 0x80CC864Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC864Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC864C: stw     r0, 24(r31)
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
label_80CC8650:
    ctx->pc = 0x80CC8650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8650u)) return;
    // 80CC8650: cmpwi   r0, 0
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

label_80CC8654:
    ctx->pc = 0x80CC8654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8654u)) return;
    // 80CC8654: bc    4, 2, 0x80CC8668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC8668;
        }
    }

label_80CC8658:
    ctx->pc = 0x80CC8658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC8658: lwz     r3, 16(r31)
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
label_80CC865C:
    ctx->pc = 0x80CC865Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC865Cu)) return;
    // 80CC865C: bl      0x804C0688
    {
            ctx->lr = 0x80CC8660u;
            ctx->pc = 0x804C0688u;
            return;
    }

label_80CC8660:
    ctx->pc = 0x80CC8660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC8660: lwz     r0, 20(r31)
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
label_80CC8664:
    ctx->pc = 0x80CC8664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC8664: stw     r0, 24(r31)
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
label_80CC8668:
    ctx->pc = 0x80CC8668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC8668: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CC866C:
    ctx->pc = 0x80CC866Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC866Cu)) return;
    // 80CC866C: bl      0x8050E95C
    {
            ctx->lr = 0x80CC8670u;
            ctx->pc = 0x8050E95Cu;
            return;
    }

label_80CC8670:
    ctx->pc = 0x80CC8670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC8670: lwz     r31, 12(r1)
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
label_80CC8674:
    ctx->pc = 0x80CC8674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC8674: lwz     r30, 8(r1)
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
label_80CC8678:
    ctx->pc = 0x80CC8678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8678: lwz     r0, 20(r1)
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
label_80CC867C:
    ctx->pc = 0x80CC867Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC867Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC867C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8680:
    ctx->pc = 0x80CC8680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8680u)) return;
    // 80CC8680: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC8684:
    ctx->pc = 0x80CC8684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8684u)) return;
    // 80CC8684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

label_80CC8688:
    ctx->pc = 0x80CC8688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CC8688: stwu     r1, -64(r1)
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
label_80CC868C:
    ctx->pc = 0x80CC868Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC868Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CC868C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8690:
    ctx->pc = 0x80CC8690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CC8690: stw     r0, 68(r1)
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
label_80CC8694:
    ctx->pc = 0x80CC8694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CC8694: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8694u)) return;
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
label_80CC8698:
    ctx->pc = 0x80CC8698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC8698: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC8698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CC8698u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC869C:
    ctx->pc = 0x80CC869Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC869Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC869C: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC869Cu)) return;
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
label_80CC86A0:
    ctx->pc = 0x80CC86A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC86A0: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC86A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CC86A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC86A4:
    ctx->pc = 0x80CC86A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC86A4: stfd     f29, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC86A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC86A8:
    ctx->pc = 0x80CC86A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC86A8: psq_st   f29, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC86A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80CC86A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC86AC:
    ctx->pc = 0x80CC86ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC86AC: stw     r31, 12(r1)
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
label_80CC86B0:
    ctx->pc = 0x80CC86B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC86B0: stw     r30, 8(r1)
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
label_80CC86B4:
    ctx->pc = 0x80CC86B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86B4u)) return;
    // 80CC86B4: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80CC86B4u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80CC86B8:
    ctx->pc = 0x80CC86B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86B8u)) return;
    // 80CC86B8: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80CC86B8u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80CC86BC:
    ctx->pc = 0x80CC86BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86BCu)) return;
    // 80CC86BC: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80CC86BCu)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80CC86C0:
    ctx->pc = 0x80CC86C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86C0u)) return;
    // 80CC86C0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC86C4:
    ctx->pc = 0x80CC86C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86C4u)) return;
    // 80CC86C4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CC86C8:
    ctx->pc = 0x80CC86C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86C8u)) return;
    // 80CC86C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CC86CC:
    ctx->pc = 0x80CC86CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86CCu)) return;
    // 80CC86CC: bl      0x8050FD60
    {
            ctx->lr = 0x80CC86D0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CC86D0:
    ctx->pc = 0x80CC86D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC86D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC86D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CC86D4:
    ctx->pc = 0x80CC86D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86D4u)) return;
    // 80CC86D4: cmplwi  r31, 0x0000
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

label_80CC86D8:
    ctx->pc = 0x80CC86D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86D8u)) return;
    // 80CC86D8: bc    12, 2, 0x80CC876C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC876C;
        }
    }

label_80CC86DC:
    ctx->pc = 0x80CC86DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC86DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC86DC: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CC86E0:
    ctx->pc = 0x80CC86E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86E0u)) return;
    // 80CC86E0: addi    r0, r3, -31324
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31324);

label_80CC86E4:
    ctx->pc = 0x80CC86E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC86E4: stw     r0, 16(r31)
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
label_80CC86E8:
    ctx->pc = 0x80CC86E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86E8u)) return;
    // 80CC86E8: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CC86EC:
    ctx->pc = 0x80CC86ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86ECu)) return;
    // 80CC86EC: addi    r0, r3, -31328
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31328);

label_80CC86F0:
    ctx->pc = 0x80CC86F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC86F0: stw     r0, 20(r31)
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
label_80CC86F4:
    ctx->pc = 0x80CC86F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86F4u)) return;
    // 80CC86F4: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CC86F8:
    ctx->pc = 0x80CC86F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86F8u)) return;
    // 80CC86F8: addi    r0, r3, -31360
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31360);

label_80CC86FC:
    ctx->pc = 0x80CC86FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC86FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC86FC: stw     r0, 24(r31)
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
label_80CC8700:
    ctx->pc = 0x80CC8700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8700: lwz     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8704:
    ctx->pc = 0x80CC8704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8704u)) return;
    // 80CC8704: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CC8708:
    ctx->pc = 0x80CC8708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8708u)) return;
    // 80CC8708: bl      0x80462174
    {
            ctx->lr = 0x80CC870Cu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80CC870C:
    ctx->pc = 0x80CC870Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC870Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CC870C: stfs     f29, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC870Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8710:
    ctx->pc = 0x80CC8710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CC8710: stfs     f30, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC8710u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8714:
    ctx->pc = 0x80CC8714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CC8714: stfs     f31, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC8714u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8718:
    ctx->pc = 0x80CC8718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8718u)) return;
    // 80CC8718: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CC871C:
    ctx->pc = 0x80CC871Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC871Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CC871C: stw     r0, 20(r30)
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
label_80CC8720:
    ctx->pc = 0x80CC8720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CC8720: stw     r0, 24(r30)
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
label_80CC8724:
    ctx->pc = 0x80CC8724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8724u)) return;
    // 80CC8724: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8728:
    ctx->pc = 0x80CC8728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8728u)) return;
    // 80CC8728: addi    r3, r3, 12740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12740);

label_80CC872C:
    ctx->pc = 0x80CC872Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC872Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CC872C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC872Cu)) return;
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
label_80CC8730:
    ctx->pc = 0x80CC8730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC8730: stfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC8730u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8734:
    ctx->pc = 0x80CC8734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8734u)) return;
    // 80CC8734: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8738:
    ctx->pc = 0x80CC8738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8738u)) return;
    // 80CC8738: addi    r3, r3, 12736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12736);

label_80CC873C:
    ctx->pc = 0x80CC873Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC873Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC873C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC873Cu)) return;
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
label_80CC8740:
    ctx->pc = 0x80CC8740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC8740: stfs     f1, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC8740u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8744:
    ctx->pc = 0x80CC8744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8744u)) return;
    // 80CC8744: lis     r3, -27378
    ctx->gpr[3] = ((u32)(s32)(-27378) << 16);

label_80CC8748:
    ctx->pc = 0x80CC8748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8748u)) return;
    // 80CC8748: addi    r3, r3, 12744
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12744);

label_80CC874C:
    ctx->pc = 0x80CC874Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC874Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC874C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC874Cu)) return;
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
label_80CC8750:
    ctx->pc = 0x80CC8750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC8750: stfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC8750u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8754:
    ctx->pc = 0x80CC8754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8754: stfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CC8754u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8758:
    ctx->pc = 0x80CC8758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8758u)) return;
    // 80CC8758: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC875C:
    ctx->pc = 0x80CC875Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC875Cu)) return;
    // 80CC875C: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_80CC8760:
    ctx->pc = 0x80CC8760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8760u)) return;
    // 80CC8760: addi    r5, r30, 32
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(32);

label_80CC8764:
    ctx->pc = 0x80CC8764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8764u)) return;
    // 80CC8764: bl      0x804C07B4
    {
            ctx->lr = 0x80CC8768u;
            ctx->pc = 0x804C07B4u;
            return;
    }

label_80CC8768:
    ctx->pc = 0x80CC8768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC8768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CC8768: stw     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC876C:
    ctx->pc = 0x80CC876Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC876Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80CC876C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CC8770:
    ctx->pc = 0x80CC8770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CC8770: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC8770u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CC8770u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8774:
    ctx->pc = 0x80CC8774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CC8774: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8774u)) return;
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
label_80CC8778:
    ctx->pc = 0x80CC8778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC8778: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC8778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CC8778u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC877C:
    ctx->pc = 0x80CC877Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC877Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CC877C: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC877Cu)) return;
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
label_80CC8780:
    ctx->pc = 0x80CC8780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CC8780: psq_l   f29, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CC8780u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80CC8780u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8784:
    ctx->pc = 0x80CC8784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC8784: lfd     f29, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CC8784u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8788:
    ctx->pc = 0x80CC8788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC8788: lwz     r31, 12(r1)
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
label_80CC878C:
    ctx->pc = 0x80CC878Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC878Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CC878C: lwz     r30, 8(r1)
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
label_80CC8790:
    ctx->pc = 0x80CC8790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC8790: lwz     r0, 68(r1)
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
label_80CC8794:
    ctx->pc = 0x80CC8794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC8794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC8794: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC8798:
    ctx->pc = 0x80CC8798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC8798u)) return;
    // 80CC8798: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80CC879C:
    ctx->pc = 0x80CC879Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC879Cu)) return;
    // 80CC879C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC7120;
        }
    }

    ctx->pc = 0x80CC87A0u;
    return;
return_dispatch_80CC7120:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CC7144u: goto label_80CC7144;
    case 0x80CC7170u: goto label_80CC7170;
    case 0x80CC7174u: goto label_80CC7174;
    case 0x80CC7178u: goto label_80CC7178;
    case 0x80CC717Cu: goto label_80CC717C;
    case 0x80CC7184u: goto label_80CC7184;
    case 0x80CC718Cu: goto label_80CC718C;
    case 0x80CC7194u: goto label_80CC7194;
    case 0x80CC71BCu: goto label_80CC71BC;
    case 0x80CC71C4u: goto label_80CC71C4;
    case 0x80CC71D8u: goto label_80CC71D8;
    case 0x80CC71E0u: goto label_80CC71E0;
    case 0x80CC7210u: goto label_80CC7210;
    case 0x80CC722Cu: goto label_80CC722C;
    case 0x80CC725Cu: goto label_80CC725C;
    case 0x80CC7278u: goto label_80CC7278;
    case 0x80CC7280u: goto label_80CC7280;
    case 0x80CC72A8u: goto label_80CC72A8;
    case 0x80CC72B0u: goto label_80CC72B0;
    case 0x80CC72BCu: goto label_80CC72BC;
    case 0x80CC72D0u: goto label_80CC72D0;
    case 0x80CC72DCu: goto label_80CC72DC;
    case 0x80CC72E8u: goto label_80CC72E8;
    case 0x80CC72F4u: goto label_80CC72F4;
    case 0x80CC731Cu: goto label_80CC731C;
    case 0x80CC7324u: goto label_80CC7324;
    case 0x80CC7338u: goto label_80CC7338;
    case 0x80CC7340u: goto label_80CC7340;
    case 0x80CC734Cu: goto label_80CC734C;
    case 0x80CC736Cu: goto label_80CC736C;
    case 0x80CC738Cu: goto label_80CC738C;
    case 0x80CC7394u: goto label_80CC7394;
    case 0x80CC73A0u: goto label_80CC73A0;
    case 0x80CC73B4u: goto label_80CC73B4;
    case 0x80CC73D4u: goto label_80CC73D4;
    case 0x80CC7408u: goto label_80CC7408;
    case 0x80CC7410u: goto label_80CC7410;
    case 0x80CC7438u: goto label_80CC7438;
    case 0x80CC7440u: goto label_80CC7440;
    case 0x80CC7448u: goto label_80CC7448;
    case 0x80CC7454u: goto label_80CC7454;
    case 0x80CC7474u: goto label_80CC7474;
    case 0x80CC7494u: goto label_80CC7494;
    case 0x80CC749Cu: goto label_80CC749C;
    case 0x80CC74A0u: goto label_80CC74A0;
    case 0x80CC74A8u: goto label_80CC74A8;
    case 0x80CC74ACu: goto label_80CC74AC;
    case 0x80CC74B0u: goto label_80CC74B0;
    case 0x80CC74B8u: goto label_80CC74B8;
    case 0x80CC74E8u: goto label_80CC74E8;
    case 0x80CC74F0u: goto label_80CC74F0;
    case 0x80CC7540u: goto label_80CC7540;
    case 0x80CC7548u: goto label_80CC7548;
    case 0x80CC7570u: goto label_80CC7570;
    case 0x80CC7578u: goto label_80CC7578;
    case 0x80CC7580u: goto label_80CC7580;
    case 0x80CC75A8u: goto label_80CC75A8;
    case 0x80CC75B0u: goto label_80CC75B0;
    case 0x80CC75BCu: goto label_80CC75BC;
    case 0x80CC75DCu: goto label_80CC75DC;
    case 0x80CC75FCu: goto label_80CC75FC;
    case 0x80CC7604u: goto label_80CC7604;
    case 0x80CC7608u: goto label_80CC7608;
    case 0x80CC7618u: goto label_80CC7618;
    case 0x80CC7620u: goto label_80CC7620;
    case 0x80CC7658u: goto label_80CC7658;
    case 0x80CC7660u: goto label_80CC7660;
    case 0x80CC76B0u: goto label_80CC76B0;
    case 0x80CC76B8u: goto label_80CC76B8;
    case 0x80CC76BCu: goto label_80CC76BC;
    case 0x80CC76C4u: goto label_80CC76C4;
    case 0x80CC76ECu: goto label_80CC76EC;
    case 0x80CC76F4u: goto label_80CC76F4;
    case 0x80CC7700u: goto label_80CC7700;
    case 0x80CC7720u: goto label_80CC7720;
    case 0x80CC7740u: goto label_80CC7740;
    case 0x80CC7750u: goto label_80CC7750;
    case 0x80CC7784u: goto label_80CC7784;
    case 0x80CC778Cu: goto label_80CC778C;
    case 0x80CC7794u: goto label_80CC7794;
    case 0x80CC77B4u: goto label_80CC77B4;
    case 0x80CC77D4u: goto label_80CC77D4;
    case 0x80CC77F8u: goto label_80CC77F8;
    case 0x80CC780Cu: goto label_80CC780C;
    case 0x80CC7820u: goto label_80CC7820;
    case 0x80CC7830u: goto label_80CC7830;
    case 0x80CC7858u: goto label_80CC7858;
    case 0x80CC7860u: goto label_80CC7860;
    case 0x80CC7868u: goto label_80CC7868;
    case 0x80CC7890u: goto label_80CC7890;
    case 0x80CC7898u: goto label_80CC7898;
    case 0x80CC78A0u: goto label_80CC78A0;
    case 0x80CC78D0u: goto label_80CC78D0;
    case 0x80CC78D8u: goto label_80CC78D8;
    case 0x80CC7928u: goto label_80CC7928;
    case 0x80CC7930u: goto label_80CC7930;
    case 0x80CC7958u: goto label_80CC7958;
    case 0x80CC7968u: goto label_80CC7968;
    case 0x80CC7978u: goto label_80CC7978;
    case 0x80CC7988u: goto label_80CC7988;
    case 0x80CC7990u: goto label_80CC7990;
    case 0x80CC7994u: goto label_80CC7994;
    case 0x80CC79A4u: goto label_80CC79A4;
    case 0x80CC79BCu: goto label_80CC79BC;
    case 0x80CC79D8u: goto label_80CC79D8;
    case 0x80CC79E0u: goto label_80CC79E0;
    case 0x80CC79E4u: goto label_80CC79E4;
    case 0x80CC79E8u: goto label_80CC79E8;
    case 0x80CC79FCu: goto label_80CC79FC;
    case 0x80CC7A04u: goto label_80CC7A04;
    case 0x80CC7A08u: goto label_80CC7A08;
    case 0x80CC7A10u: goto label_80CC7A10;
    case 0x80CC7A14u: goto label_80CC7A14;
    case 0x80CC7A18u: goto label_80CC7A18;
    case 0x80CC7A1Cu: goto label_80CC7A1C;
    case 0x80CC7A20u: goto label_80CC7A20;
    case 0x80CC7A2Cu: goto label_80CC7A2C;
    case 0x80CC7A44u: goto label_80CC7A44;
    case 0x80CC7A58u: goto label_80CC7A58;
    case 0x80CC7A5Cu: goto label_80CC7A5C;
    case 0x80CC7A60u: goto label_80CC7A60;
    case 0x80CC7A78u: goto label_80CC7A78;
    case 0x80CC7AA0u: goto label_80CC7AA0;
    case 0x80CC7B00u: goto label_80CC7B00;
    case 0x80CC7B40u: goto label_80CC7B40;
    case 0x80CC7B80u: goto label_80CC7B80;
    case 0x80CC7BDCu: goto label_80CC7BDC;
    case 0x80CC7C00u: goto label_80CC7C00;
    case 0x80CC7C9Cu: goto label_80CC7C9C;
    case 0x80CC7CECu: goto label_80CC7CEC;
    case 0x80CC7D3Cu: goto label_80CC7D3C;
    case 0x80CC7D88u: goto label_80CC7D88;
    case 0x80CC7E0Cu: goto label_80CC7E0C;
    case 0x80CC7E30u: goto label_80CC7E30;
    case 0x80CC7EACu: goto label_80CC7EAC;
    case 0x80CC7F14u: goto label_80CC7F14;
    case 0x80CC7F7Cu: goto label_80CC7F7C;
    case 0x80CC7FCCu: goto label_80CC7FCC;
    case 0x80CC801Cu: goto label_80CC801C;
    case 0x80CC8060u: goto label_80CC8060;
    case 0x80CC8088u: goto label_80CC8088;
    case 0x80CC8094u: goto label_80CC8094;
    case 0x80CC80A0u: goto label_80CC80A0;
    case 0x80CC80ACu: goto label_80CC80AC;
    case 0x80CC8118u: goto label_80CC8118;
    case 0x80CC812Cu: goto label_80CC812C;
    case 0x80CC8220u: goto label_80CC8220;
    case 0x80CC8234u: goto label_80CC8234;
    case 0x80CC8318u: goto label_80CC8318;
    case 0x80CC835Cu: goto label_80CC835C;
    case 0x80CC8494u: goto label_80CC8494;
    case 0x80CC84ACu: goto label_80CC84AC;
    case 0x80CC8524u: goto label_80CC8524;
    case 0x80CC854Cu: goto label_80CC854C;
    case 0x80CC8570u: goto label_80CC8570;
    case 0x80CC8590u: goto label_80CC8590;
    case 0x80CC85D8u: goto label_80CC85D8;
    case 0x80CC8644u: goto label_80CC8644;
    case 0x80CC8660u: goto label_80CC8660;
    case 0x80CC8670u: goto label_80CC8670;
    case 0x80CC86D0u: goto label_80CC86D0;
    case 0x80CC870Cu: goto label_80CC870C;
    case 0x80CC8768u: goto label_80CC8768;
    default: return;
    }
}

